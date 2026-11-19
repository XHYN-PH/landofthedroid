#include "recomp.h"
#include "rec_mod.h"

void f_8dddb8(void) {
  LOAD_REGS();
L_8dddb8: /* 8dddb8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 8dddbf: nop  */
L_8dddc0: /* 8dddc0: movzx eax, byte ptr [esi + 0x3b] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x3bu)));
/* 8dddc4: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 8dddca: mov edx, eax */
  edx = eax;
/* 8dddcc: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 8dddce: jns 0x8de936 */
  if (!sf) goto L_8de936;
L_8dddd4: /* 8dddd4: movzx edx, byte ptr [esi + 0x3c] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0x3cu)));
/* 8dddd8: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 8dddda: jns 0x8de936 */
  if (!sf) goto L_8de936;
L_8ddde0: /* 8ddde0: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8ddde3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ddde5: je 0x8de923 */
  if (zf) goto L_8de923;
L_8dddeb: /* 8dddeb: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 8dddf2: mov dword ptr [ebp - 0x40], 1 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x1u);
/* 8dddf9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8dde00: /* 8dde00: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8dde03: cmp eax, dword ptr [esi + 0xb0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xb0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dde09: jge 0x8de90e */
  if ((sf == of)) goto L_8de90e;
L_8dde0f: /* 8dde0f: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8dde12: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 8dde15: mov eax, dword ptr [edx + 0xac] */
  eax = R32((uint32_t)(edx + 0xacu));
/* 8dde1b: mov ebx, dword ptr [eax + ecx*8 - 0x20] */
  ebx = R32((uint32_t)(eax + ecx*8 + 0xffffffe0u));
/* 8dde1f: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 8dde25: lea esi, [eax + ecx*8] */
  esi = (uint32_t)(eax + ecx*8);
/* 8dde28: mov eax, dword ptr [esi - 0x24] */
  eax = R32((uint32_t)(esi + 0xffffffdcu));
/* 8dde2b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8dde2e: mov edi, ebx */
  edi = ebx;
/* 8dde30: imul edi, eax */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(eax);
  edi = (uint32_t)r;
  }
/* 8dde33: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8dde36: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8dde38: push 0xaed610 */
  { uint32_t v = 0xaed610u; esp -= 4; W32(esp, v); }
/* 8dde3d: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 8dde44: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 8dde47: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8dde49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dde4a: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8dde4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dde4c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dde4e: je 0x8dde63 */
  if (zf) goto L_8dde63;
L_8dde50: /* 8dde50: mov edx, 4 */
  edx = 0x4u;
/* 8dde55: mov ecx, eax */
  ecx = eax;
L_8dde57: /* 8dde57: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 8dde58: js 0x8dde5e */
  if (sf) goto L_8dde5e;
L_8dde5a: /* 8dde5a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8dde5c: jmp 0x8dde57 */
  goto L_8dde57;
L_8dde5e: /* 8dde5e: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8dde61: jmp 0x8dde6a */
  goto L_8dde6a;
L_8dde63: /* 8dde63: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
L_8dde6a: /* 8dde6a: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8dde6d: test byte ptr [eax + 0x7c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x7cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8dde71: jne 0x8de6a1 */
  if (!zf) goto L_8de6a1;
L_8dde77: /* 8dde77: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8dde7a: lea eax, [ebx - 1] */
  eax = (uint32_t)(ebx + 0xffffffffu);
/* 8dde7d: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8dde80: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 8dde83: lea ecx, [edx - 1] */
  ecx = (uint32_t)(edx + 0xffffffffu);
/* 8dde86: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8dde89: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 8dde8c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8dde8f: xor edi, edi */
  edi = 0;
L_8dde91: /* 8dde91: cmp edi, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dde94: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 8dde97: jge 0x8de8e7 */
  if ((sf == of)) goto L_8de8e7;
L_8dde9d: /* 8dde9d: xor eax, eax */
  eax = 0;
/* 8dde9f: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_8ddea2: /* 8ddea2: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ddea5: jge 0x8de69b */
  if ((sf == of)) goto L_8de69b;
L_8ddeab: /* 8ddeab: imul edi, edx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(edx);
  edi = (uint32_t)r;
  }
/* 8ddeae: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8ddeb0: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8ddeb3: shl edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8ddeb5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ddeb7: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 8ddebe: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 8ddec5: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 8ddecc: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 8dded3: je 0x8de0b0 */
  if (zf) goto L_8de0b0;
L_8dded9: /* 8dded9: mov ebx, eax */
  ebx = eax;
/* 8ddedb: movzx ecx, byte ptr [ebx + edi*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x3u)));
/* 8ddee0: movzx edx, byte ptr [ebx + edi*4] */
  edx = (uint32_t)(R8((uint32_t)(ebx + edi*4)));
/* 8ddee4: movzx eax, byte ptr [ebx + edi*4 + 1] */
  eax = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x1u)));
/* 8ddee9: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ddeec: movzx ecx, byte ptr [ebx + edi*4 + 2] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x2u)));
/* 8ddef1: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddef4: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8ddef7: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddefd: lea edx, [ebp - 0x140] */
  edx = (uint32_t)(ebp + 0xfffffec0u);
/* 8ddf03: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf06: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8ddf09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ddf0a: lea eax, [ebp - 0x19c] */
  eax = (uint32_t)(ebp + 0xfffffe64u);
/* 8ddf10: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ddf17: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf1a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ddf1d: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8ddf20: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf26: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf29: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf2f: fstp dword ptr [ebp - 0x140] */
  WF32((uint32_t)(ebp + 0xfffffec0u), ST0); FPOP();
/* 8ddf35: fstp dword ptr [ebp - 0x13c] */
  WF32((uint32_t)(ebp + 0xfffffec4u), ST0); FPOP();
/* 8ddf3b: fstp dword ptr [ebp - 0x138] */
  WF32((uint32_t)(ebp + 0xfffffec8u), ST0); FPOP();
/* 8ddf41: fstp dword ptr [ebp - 0x134] */
  WF32((uint32_t)(ebp + 0xfffffeccu), ST0); FPOP();
/* 8ddf47: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8ddf4du); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8ddf4d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8ddf50: lea edx, [edi + ecx] */
  edx = (uint32_t)(edi + ecx);
/* 8ddf53: movzx ecx, byte ptr [ebx + edx*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edx*4 + 0x3u)));
/* 8ddf58: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* 8ddf5b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8ddf5e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ddf61: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8ddf65: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf68: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8ddf6b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf71: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8ddf75: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf78: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ddf7b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf81: lea eax, [ebp - 0x160] */
  eax = (uint32_t)(ebp + 0xfffffea0u);
/* 8ddf87: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf8a: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8ddf8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ddf8e: lea ecx, [ebp - 0x1bc] */
  ecx = (uint32_t)(ebp + 0xfffffe44u);
/* 8ddf94: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ddf9b: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf9e: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8ddfa1: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddfa7: fstp dword ptr [ebp - 0x160] */
  WF32((uint32_t)(ebp + 0xfffffea0u), ST0); FPOP();
/* 8ddfad: fstp dword ptr [ebp - 0x15c] */
  WF32((uint32_t)(ebp + 0xfffffea4u), ST0); FPOP();
/* 8ddfb3: fstp dword ptr [ebp - 0x158] */
  WF32((uint32_t)(ebp + 0xfffffea8u), ST0); FPOP();
/* 8ddfb9: fstp dword ptr [ebp - 0x154] */
  WF32((uint32_t)(ebp + 0xfffffeacu), ST0); FPOP();
/* 8ddfbf: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8ddfc5u); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8ddfc5: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ddfc8: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8ddfca: movzx eax, byte ptr [ebx + edi*4 + 3] */
  eax = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x3u)));
/* 8ddfcf: movzx ecx, byte ptr [ebx + edi*4] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edi*4)));
/* 8ddfd3: movzx edx, byte ptr [ebx + edi*4 + 1] */
  edx = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x1u)));
/* 8ddfd8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8ddfdb: movzx eax, byte ptr [ebx + edi*4 + 2] */
  eax = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x2u)));
/* 8ddfe0: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddfe3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ddfe6: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddfec: lea ecx, [ebp - 0x110] */
  ecx = (uint32_t)(ebp + 0xfffffef0u);
/* 8ddff2: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddff5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8ddff8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ddff9: lea edx, [ebp - 0x2bc] */
  edx = (uint32_t)(ebp + 0xfffffd44u);
/* 8ddfff: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de005: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de008: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de00b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de011: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de014: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de01a: fstp dword ptr [ebp - 0x110] */
  WF32((uint32_t)(ebp + 0xfffffef0u), ST0); FPOP();
/* 8de020: fstp dword ptr [ebp - 0x10c] */
  WF32((uint32_t)(ebp + 0xfffffef4u), ST0); FPOP();
/* 8de026: fstp dword ptr [ebp - 0x108] */
  WF32((uint32_t)(ebp + 0xfffffef8u), ST0); FPOP();
/* 8de02c: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 8de032: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de033: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de036: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de03cu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de03c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8de03f: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de041: movzx ecx, byte ptr [ebx + edi*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x3u)));
/* 8de046: movzx edx, byte ptr [ebx + edi*4] */
  edx = (uint32_t)(R8((uint32_t)(ebx + edi*4)));
/* 8de04a: lea eax, [ebx + edi*4] */
  eax = (uint32_t)(ebx + edi*4);
/* 8de04d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de050: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de054: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de057: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de05a: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de060: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de064: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de067: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de06a: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de070: lea eax, [ebp - 0x130] */
  eax = (uint32_t)(ebp + 0xfffffed0u);
/* 8de076: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de079: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de07c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de07d: lea ecx, [ebp - 0x1dc] */
  ecx = (uint32_t)(ebp + 0xfffffe24u);
/* 8de083: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de089: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de08a: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de08d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de093: fstp dword ptr [ebp - 0x130] */
  WF32((uint32_t)(ebp + 0xfffffed0u), ST0); FPOP();
/* 8de099: fstp dword ptr [ebp - 0x12c] */
  WF32((uint32_t)(ebp + 0xfffffed4u), ST0); FPOP();
/* 8de09f: fstp dword ptr [ebp - 0x128] */
  WF32((uint32_t)(ebp + 0xfffffed8u), ST0); FPOP();
/* 8de0a5: fstp dword ptr [ebp - 0x124] */
  WF32((uint32_t)(ebp + 0xfffffedcu), ST0); FPOP();
/* 8de0ab: jmp 0x8de5d2 */
  goto L_8de5d2;
L_8de0b0: /* 8de0b0: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8de0b3: mov al, byte ptr [edx + 0x38] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x38u))) & 0xffu);
/* 8de0b6: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8de0b8: je 0x8de3e1 */
  if (zf) goto L_8de3e1;
L_8de0be: /* 8de0be: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de0c0: je 0x8de211 */
  if (zf) goto L_8de211;
L_8de0c6: /* 8de0c6: cmp al, 9 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de0c8: jne 0x8de5db */
  if (!zf) goto L_8de5db;
L_8de0ce: /* 8de0ce: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de0d1: movzx ecx, byte ptr [edi + eax] */
  ecx = (uint32_t)(R8((uint32_t)(edi + eax)));
/* 8de0d5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de0d8: lea edx, [ebp - 0x150] */
  edx = (uint32_t)(ebp + 0xfffffeb0u);
/* 8de0de: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de0e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de0e2: lea eax, [ebp - 0x25c] */
  eax = (uint32_t)(ebp + 0xfffffda4u);
/* 8de0e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de0e9: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de0ef: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de0f2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8de0f4: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8de0f6: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8de0f8: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8de0fa: fstp dword ptr [ebp - 0x150] */
  WF32((uint32_t)(ebp + 0xfffffeb0u), ST0); FPOP();
/* 8de100: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8de102: fstp dword ptr [ebp - 0x14c] */
  WF32((uint32_t)(ebp + 0xfffffeb4u), ST0); FPOP();
/* 8de108: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8de10a: fstp dword ptr [ebp - 0x148] */
  WF32((uint32_t)(ebp + 0xfffffeb8u), ST0); FPOP();
/* 8de110: fstp dword ptr [ebp - 0x144] */
  WF32((uint32_t)(ebp + 0xfffffebcu), ST0); FPOP();
/* 8de116: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de11cu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de11c: mov ecx, dword ptr [esi - 0xc] */
  ecx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de11f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8de122: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de124: movzx eax, byte ptr [ecx + edx] */
  eax = (uint32_t)(R8((uint32_t)(ecx + edx)));
/* 8de128: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de12b: lea ecx, [ebp - 0x170] */
  ecx = (uint32_t)(ebp + 0xfffffe90u);
/* 8de131: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de134: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de135: lea edx, [ebp - 0x1fc] */
  edx = (uint32_t)(ebp + 0xfffffe04u);
/* 8de13b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de13c: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de142: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de145: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8de147: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8de149: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8de14b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8de14d: fstp dword ptr [ebp - 0x170] */
  WF32((uint32_t)(ebp + 0xfffffe90u), ST0); FPOP();
/* 8de153: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8de155: fstp dword ptr [ebp - 0x16c] */
  WF32((uint32_t)(ebp + 0xfffffe94u), ST0); FPOP();
/* 8de15b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8de15d: fstp dword ptr [ebp - 0x168] */
  WF32((uint32_t)(ebp + 0xfffffe98u), ST0); FPOP();
/* 8de163: fstp dword ptr [ebp - 0x164] */
  WF32((uint32_t)(ebp + 0xfffffe9cu), ST0); FPOP();
/* 8de169: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de16fu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de16f: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de172: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de175: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8de177: movzx ecx, byte ptr [eax + ebx] */
  ecx = (uint32_t)(R8((uint32_t)(eax + ebx)));
/* 8de17b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de17e: lea edx, [ebp - 0x180] */
  edx = (uint32_t)(ebp + 0xfffffe80u);
/* 8de184: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de187: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de188: lea eax, [ebp - 0x29c] */
  eax = (uint32_t)(ebp + 0xfffffd64u);
/* 8de18e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de18f: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de195: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de198: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8de19a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8de19c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8de19e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8de1a0: fstp dword ptr [ebp - 0x180] */
  WF32((uint32_t)(ebp + 0xfffffe80u), ST0); FPOP();
/* 8de1a6: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8de1a8: fstp dword ptr [ebp - 0x17c] */
  WF32((uint32_t)(ebp + 0xfffffe84u), ST0); FPOP();
/* 8de1ae: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8de1b0: fstp dword ptr [ebp - 0x178] */
  WF32((uint32_t)(ebp + 0xfffffe88u), ST0); FPOP();
/* 8de1b6: fstp dword ptr [ebp - 0x174] */
  WF32((uint32_t)(ebp + 0xfffffe8cu), ST0); FPOP();
/* 8de1bc: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de1c2u); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de1c2: mov ecx, dword ptr [esi - 0xc] */
  ecx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de1c5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8de1c8: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de1ca: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de1cc: movzx eax, byte ptr [ecx + edx] */
  eax = (uint32_t)(R8((uint32_t)(ecx + edx)));
/* 8de1d0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de1d3: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de1d6: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de1dc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8de1de: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8de1e0: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8de1e2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8de1e4: fstp dword ptr [ebp - 0x120] */
  WF32((uint32_t)(ebp + 0xfffffee0u), ST0); FPOP();
/* 8de1ea: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8de1ec: fstp dword ptr [ebp - 0x11c] */
  WF32((uint32_t)(ebp + 0xfffffee4u), ST0); FPOP();
/* 8de1f2: lea ecx, [ebp - 0x120] */
  ecx = (uint32_t)(ebp + 0xfffffee0u);
/* 8de1f8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8de1fa: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* 8de200: fstp dword ptr [ebp - 0x118] */
  WF32((uint32_t)(ebp + 0xfffffee8u), ST0); FPOP();
/* 8de206: fstp dword ptr [ebp - 0x114] */
  WF32((uint32_t)(ebp + 0xfffffeecu), ST0); FPOP();
/* 8de20c: jmp 0x8de5d0 */
  goto L_8de5d0;
L_8de211: /* 8de211: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de214: movzx ecx, byte ptr [eax + edi*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(eax + edi*4 + 0x3u)));
/* 8de219: movzx edx, byte ptr [eax + edi*4] */
  edx = (uint32_t)(R8((uint32_t)(eax + edi*4)));
/* 8de21d: lea eax, [eax + edi*4] */
  eax = (uint32_t)(eax + edi*4);
/* 8de220: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de223: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de227: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de22a: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de22d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de233: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de237: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de23a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de23d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de243: lea eax, [ebp - 0x100] */
  eax = (uint32_t)(ebp + 0xffffff00u);
/* 8de249: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de24c: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de24f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de250: lea ecx, [ebp - 0x27c] */
  ecx = (uint32_t)(ebp + 0xfffffd84u);
/* 8de256: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de25c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de25d: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de260: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de263: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de269: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 8de26f: fstp dword ptr [ebp - 0xfc] */
  WF32((uint32_t)(ebp + 0xffffff04u), ST0); FPOP();
/* 8de275: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 8de27b: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 8de281: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de287u); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de287: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8de28a: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de28d: lea edx, [edi + ebx] */
  edx = (uint32_t)(edi + ebx);
/* 8de290: movzx ecx, byte ptr [eax + edx*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(eax + edx*4 + 0x3u)));
/* 8de295: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 8de298: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de29b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de29e: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de2a2: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de2a5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de2a8: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de2ae: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de2b2: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de2b5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de2b8: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de2be: lea eax, [ebp - 0xe0] */
  eax = (uint32_t)(ebp + 0xffffff20u);
/* 8de2c4: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de2c7: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de2ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de2cb: lea ecx, [ebp - 0x23c] */
  ecx = (uint32_t)(ebp + 0xfffffdc4u);
/* 8de2d1: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de2d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de2d8: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de2db: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de2de: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de2e4: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 8de2ea: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 8de2f0: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 8de2f6: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 8de2fc: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de302u); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de302: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de305: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de308: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de30a: movzx ecx, byte ptr [eax + edi*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(eax + edi*4 + 0x3u)));
/* 8de30f: movzx edx, byte ptr [eax + edi*4] */
  edx = (uint32_t)(R8((uint32_t)(eax + edi*4)));
/* 8de313: lea eax, [eax + edi*4] */
  eax = (uint32_t)(eax + edi*4);
/* 8de316: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de319: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de31d: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de320: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de323: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de329: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de32d: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de330: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de333: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de339: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de33c: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de33f: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de345: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de348: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de34e: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 8de351: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 8de354: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 8de357: lea eax, [ebp - 0x80] */
  eax = (uint32_t)(ebp + 0xffffff80u);
/* 8de35a: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 8de35d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de35e: lea ecx, [ebp - 0x1ac] */
  ecx = (uint32_t)(ebp + 0xfffffe54u);
/* 8de364: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de365: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de368: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de36eu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de36e: mov edx, dword ptr [esi - 0xc] */
  edx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de371: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de373: movzx ecx, byte ptr [edx + edi*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(edx + edi*4 + 0x3u)));
/* 8de378: lea eax, [edx + edi*4] */
  eax = (uint32_t)(edx + edi*4);
/* 8de37b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de37e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de381: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de385: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de388: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de38b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de391: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de395: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de398: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de39b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de3a1: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 8de3a7: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de3aa: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de3ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de3ae: lea ecx, [ebp - 0x1cc] */
  ecx = (uint32_t)(ebp + 0xfffffe34u);
/* 8de3b4: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de3ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de3bb: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de3be: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de3c4: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 8de3ca: fstp dword ptr [ebp - 0xbc] */
  WF32((uint32_t)(ebp + 0xffffff44u), ST0); FPOP();
/* 8de3d0: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 8de3d6: fstp dword ptr [ebp - 0xb4] */
  WF32((uint32_t)(ebp + 0xffffff4cu), ST0); FPOP();
/* 8de3dc: jmp 0x8de5d2 */
  goto L_8de5d2;
L_8de3e1: /* 8de3e1: mov edx, dword ptr [esi - 0xc] */
  edx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de3e4: movzx eax, byte ptr [edx + edi] */
  eax = (uint32_t)(R8((uint32_t)(edx + edi)));
/* 8de3e8: mov ebx, dword ptr [ebp - 0x5c] */
  ebx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8de3eb: movzx ecx, byte ptr [ebx + eax*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + eax*4 + 0x3u)));
/* 8de3f0: movzx edx, byte ptr [ebx + eax*4] */
  edx = (uint32_t)(R8((uint32_t)(ebx + eax*4)));
/* 8de3f4: lea eax, [ebx + eax*4] */
  eax = (uint32_t)(ebx + eax*4);
/* 8de3f7: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de3fa: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de3fe: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de401: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de404: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de40a: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de40e: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de411: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de414: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de41a: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 8de420: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de423: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de426: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de427: lea ecx, [ebp - 0x1ec] */
  ecx = (uint32_t)(ebp + 0xfffffe14u);
/* 8de42d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de434: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de437: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de43a: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de440: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 8de446: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 8de44c: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 8de452: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 8de458: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de45eu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de45e: mov edx, dword ptr [esi - 0xc] */
  edx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de461: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8de464: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8de466: movzx ecx, byte ptr [edx + eax] */
  ecx = (uint32_t)(R8((uint32_t)(edx + eax)));
/* 8de46a: movzx edx, byte ptr [ebx + ecx*4 + 3] */
  edx = (uint32_t)(R8((uint32_t)(ebx + ecx*4 + 0x3u)));
/* 8de46f: lea eax, [ebx + ecx*4] */
  eax = (uint32_t)(ebx + ecx*4);
/* 8de472: movzx ecx, byte ptr [eax] */
  ecx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de475: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de478: movzx edx, byte ptr [eax + 1] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de47c: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de47f: movzx eax, byte ptr [eax + 2] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de483: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de489: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de48c: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8de492: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de495: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de498: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de499: lea edx, [ebp - 0x20c] */
  edx = (uint32_t)(ebp + 0xfffffdf4u);
/* 8de49f: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de4a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de4a6: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de4a9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de4ac: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de4af: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de4b5: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de4b8: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de4be: fstp dword ptr [ebp - 0xb0] */
  WF32((uint32_t)(ebp + 0xffffff50u), ST0); FPOP();
/* 8de4c4: fstp dword ptr [ebp - 0xac] */
  WF32((uint32_t)(ebp + 0xffffff54u), ST0); FPOP();
/* 8de4ca: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* 8de4d0: fstp dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0); FPOP();
/* 8de4d6: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de4dcu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de4dc: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de4df: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de4e2: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8de4e4: movzx edx, byte ptr [eax + ecx] */
  edx = (uint32_t)(R8((uint32_t)(eax + ecx)));
/* 8de4e8: movzx ecx, byte ptr [ebx + edx*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edx*4 + 0x3u)));
/* 8de4ed: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* 8de4f0: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de4f3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de4f6: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de4fa: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de4fd: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de500: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de506: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de50a: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de50d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de510: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de516: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de519: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de51c: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de522: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de525: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de52b: lea eax, [ebp - 0xd0] */
  eax = (uint32_t)(ebp + 0xffffff30u);
/* 8de531: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de532: lea ecx, [ebp - 0x22c] */
  ecx = (uint32_t)(ebp + 0xfffffdd4u);
/* 8de538: fstp dword ptr [ebp - 0xd0] */
  WF32((uint32_t)(ebp + 0xffffff30u), ST0); FPOP();
/* 8de53e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de53f: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de542: fstp dword ptr [ebp - 0xcc] */
  WF32((uint32_t)(ebp + 0xffffff34u), ST0); FPOP();
/* 8de548: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 8de54e: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 8de554: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de55au); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de55a: mov edx, dword ptr [esi - 0xc] */
  edx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de55d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8de560: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8de562: add edx, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8de565: movzx ecx, byte ptr [edx + eax] */
  ecx = (uint32_t)(R8((uint32_t)(edx + eax)));
/* 8de569: movzx edx, byte ptr [ebx + ecx*4 + 3] */
  edx = (uint32_t)(R8((uint32_t)(ebx + ecx*4 + 0x3u)));
/* 8de56e: lea eax, [ebx + ecx*4] */
  eax = (uint32_t)(ebx + ecx*4);
/* 8de571: movzx ecx, byte ptr [eax] */
  ecx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de574: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de577: movzx edx, byte ptr [eax + 1] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de57b: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de57e: movzx eax, byte ptr [eax + 2] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de582: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de588: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de58b: lea ecx, [ebp - 0xf0] */
  ecx = (uint32_t)(ebp + 0xffffff10u);
/* 8de591: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de594: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de597: lea edx, [ebp - 0x24c] */
  edx = (uint32_t)(ebp + 0xfffffdb4u);
/* 8de59d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de5a3: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de5a6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de5a9: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de5af: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de5b2: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de5b8: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 8de5be: fstp dword ptr [ebp - 0xec] */
  WF32((uint32_t)(ebp + 0xffffff14u), ST0); FPOP();
/* 8de5c4: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 8de5ca: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
L_8de5d0: /* 8de5d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de5d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_8de5d2: /* 8de5d2: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de5d5: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de5dbu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
L_8de5db: /* 8de5db: push 0x40800000 */
  { uint32_t v = 0x40800000u; esp -= 4; W32(esp, v); }
/* 8de5e0: lea eax, [ebp - 0x26c] */
  eax = (uint32_t)(ebp + 0xfffffd94u);
/* 8de5e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de5e7: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de5ea: call dword ptr [0xcfac60] */
  esp -= 4; W32(esp, 0x8de5f0u); SPILL(); f_4e3701(); if (g_unwind) return; /* Core!??KFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 8de5f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de5f1: lea ecx, [ebp - 0x18c] */
  ecx = (uint32_t)(ebp + 0xfffffe74u);
/* 8de5f7: call 0x6c576d */
  esp -= 4; W32(esp, 0x8de5fcu); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 8de5fc: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8de5ff: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8de602: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8de605: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8de608: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8de60a: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8de60d: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de60f: mov dword ptr [edi + ecx*4], eax */
  W32((uint32_t)(edi + ecx*4), eax);
/* 8de612: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8de615: mov cl, byte ptr [ecx + 0x38] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x38u))) & 0xffu);
/* 8de618: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8de61a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de61d: je 0x8de66d */
  if (zf) goto L_8de66d;
L_8de61f: /* 8de61f: cmp cl, 5 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de622: je 0x8de64e */
  if (zf) goto L_8de64e;
L_8de624: /* 8de624: cmp cl, 9 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de627: jne 0x8de68a */
  if (!zf) goto L_8de68a;
L_8de629: /* 8de629: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8de62c: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 8de62f: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 8de632: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8de635: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8de638: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8de63a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8de63d: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8de640: mov byte ptr [eax + ebx], cl */
  W8((uint32_t)(eax + ebx), (ecx & 0xffu));
/* 8de643: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de644: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 8de647: mov eax, ebx */
  eax = ebx;
/* 8de649: jmp 0x8ddea2 */
  goto L_8ddea2;
L_8de64e: /* 8de64e: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8de651: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8de654: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8de657: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 8de65a: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de65c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de65d: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 8de660: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8de663: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 8de666: mov eax, ebx */
  eax = ebx;
/* 8de668: jmp 0x8ddea2 */
  goto L_8ddea2;
L_8de66d: /* 8de66d: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8de670: imul edi, edx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(edx);
  edi = (uint32_t)r;
  }
/* 8de673: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 8de676: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8de678: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de679: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8de67c: mov ecx, dword ptr [eax + 0x50] */
  ecx = R32((uint32_t)(eax + 0x50u));
/* 8de67f: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de681: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de683: call 0x6cb18b */
  esp -= 4; W32(esp, 0x8de688u); SPILL(); f_6cb18b(); if (g_unwind) return; RELOAD();
/* 8de688: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
L_8de68a: /* 8de68a: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8de68d: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8de690: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de691: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 8de694: mov eax, ebx */
  eax = ebx;
/* 8de696: jmp 0x8ddea2 */
  goto L_8ddea2;
L_8de69b: /* 8de69b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8de69c: jmp 0x8dde91 */
  goto L_8dde91;
L_8de6a1: /* 8de6a1: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 8de6a2: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8de6a5: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 8de6ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8de6b0: /* 8de6b0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8de6b3: cmp ecx, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8de6b6: jge 0x8de8e7 */
  if ((sf == of)) goto L_8de8e7;
L_8de6bc: /* 8de6bc: xor eax, eax */
  eax = 0;
/* 8de6be: xor ebx, ebx */
  ebx = 0;
L_8de6c0: /* 8de6c0: cmp ebx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8de6c3: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 8de6c6: jge 0x8de8df */
  if ((sf == of)) goto L_8de8df;
L_8de6cc: /* 8de6cc: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8de6cf: imul edi, dword ptr [ebp - 0x54] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffacu)));
  edi = (uint32_t)r;
  }
/* 8de6d3: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de6d5: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8de6d8: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 8de6df: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 8de6e6: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8de6ed: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 8de6f4: shl edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
L_8de6f6: /* 8de6f6: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8de6f9: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de6fc: mov eax, 2 */
  eax = 0x2u;
/* 8de701: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8de703: jge 0x8de840 */
  if ((sf == of)) goto L_8de840;
L_8de709: /* 8de709: xor ebx, ebx */
  ebx = 0;
/* 8de70b: jmp 0x8de710 */
  goto L_8de710;
L_8de710: /* 8de710: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8de713: jge 0x8de834 */
  if ((sf == of)) goto L_8de834;
L_8de719: /* 8de719: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8de71c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de71f: mov edx, ebx */
  edx = ebx;
/* 8de721: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8de723: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8de726: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 8de729: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8de72a: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8de72c: lea eax, [edx + ecx] */
  eax = (uint32_t)(edx + ecx);
/* 8de72f: mov edx, dword ptr [esi - 0xc] */
  edx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de732: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8de734: mov cl, byte ptr [edx + eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + eax))) & 0xffu);
/* 8de737: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8de739: je 0x8de82e */
  if (zf) goto L_8de82e;
L_8de73f: /* 8de73f: inc dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd8u), r);
  }
/* 8de742: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8de745: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8de747: je 0x8de7c5 */
  if (zf) goto L_8de7c5;
L_8de749: /* 8de749: mov ecx, edx */
  ecx = edx;
/* 8de74b: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8de74d: movzx edx, byte ptr [ecx + eax*4 + 3] */
  edx = (uint32_t)(R8((uint32_t)(ecx + eax*4 + 0x3u)));
/* 8de752: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8de755: movzx ecx, byte ptr [eax] */
  ecx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de758: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8de75b: movzx edx, byte ptr [eax + 1] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de75f: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de762: movzx eax, byte ptr [eax + 2] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de766: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de76c: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8de76f: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 8de775: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de778: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8de77b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de77c: lea edx, [ebp - 0x28c] */
  edx = (uint32_t)(ebp + 0xfffffd74u);
/* 8de782: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de788: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8de78b: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de78e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8de791: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de792: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de798: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de79b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de7a1: fstp dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0); FPOP();
/* 8de7a7: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 8de7ad: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 8de7b3: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 8de7b9: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de7bfu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de7bf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de7c0: jmp 0x8de710 */
  goto L_8de710;
L_8de7c5: /* 8de7c5: movzx eax, cl */
  eax = (uint32_t)((ecx & 0xffu));
/* 8de7c8: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8de7cb: movzx edx, byte ptr [ecx + eax*4 + 3] */
  edx = (uint32_t)(R8((uint32_t)(ecx + eax*4 + 0x3u)));
/* 8de7d0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8de7d3: movzx ecx, byte ptr [eax] */
  ecx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de7d6: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8de7d9: movzx edx, byte ptr [eax + 1] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de7dd: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de7e0: movzx eax, byte ptr [eax + 2] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de7e4: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de7ea: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8de7ed: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8de7f0: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de7f3: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8de7f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de7f7: lea edx, [ebp - 0x2ac] */
  edx = (uint32_t)(ebp + 0xfffffd54u);
/* 8de7fd: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de803: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8de806: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de809: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8de80c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de80d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de813: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de816: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de81c: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 8de81f: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 8de822: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 8de825: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 8de828: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de82eu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
L_8de82e: /* 8de82e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de82f: jmp 0x8de710 */
  goto L_8de710;
L_8de834: /* 8de834: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de837: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8de83a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8de83b: jmp 0x8de6f6 */
  goto L_8de6f6;
L_8de840: /* 8de840: cmp dword ptr [ebp - 0x28], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8de843: jl 0x8de8a6 */
  if ((sf != of)) goto L_8de8a6;
L_8de845: /* 8de845: fild dword ptr [ebp - 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8de848: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de849: lea eax, [ebp - 0x2cc] */
  eax = (uint32_t)(ebp + 0xfffffd34u);
/* 8de84f: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8de852: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8de855: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de856: call dword ptr [0xcfac60] */
  esp -= 4; W32(esp, 0x8de85cu); SPILL(); f_4e3701(); if (g_unwind) return; /* Core!??KFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 8de85c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de85d: lea ecx, [ebp - 0x188] */
  ecx = (uint32_t)(ebp + 0xfffffe78u);
/* 8de863: call 0x6c576d */
  esp -= 4; W32(esp, 0x8de868u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 8de868: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8de86b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8de86e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8de870: imul edi, ecx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ecx);
  edi = (uint32_t)r;
  }
/* 8de873: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8de876: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de878: mov dword ptr [edx + edi*4], eax */
  W32((uint32_t)(edx + edi*4), eax);
/* 8de87b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8de87e: mov edi, dword ptr [esi + 0x1c] */
  edi = R32((uint32_t)(esi + 0x1cu));
/* 8de881: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 8de884: lea ecx, [ebx + eax] */
  ecx = (uint32_t)(ebx + eax);
/* 8de887: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 8de88a: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8de88d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8de88f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de890: mov ecx, dword ptr [edx + 0x50] */
  ecx = R32((uint32_t)(edx + 0x50u));
/* 8de893: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de895: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de897: call 0x6cb18b */
  esp -= 4; W32(esp, 0x8de89cu); SPILL(); f_6cb18b(); if (g_unwind) return; RELOAD();
/* 8de89c: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 8de89e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de89f: xor eax, eax */
  eax = 0;
/* 8de8a1: jmp 0x8de6c0 */
  goto L_8de6c0;
L_8de8a6: /* 8de8a6: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8de8a9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8de8ac: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8de8af: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 8de8b2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de8b4: mov byte ptr [ebp - 0x58], 0 */
  W8((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 8de8b8: mov byte ptr [ebp - 0x57], 0 */
  W8((uint32_t)(ebp + 0xffffffa9u), 0x0u);
/* 8de8bc: mov byte ptr [ebp - 0x56], 0 */
  W8((uint32_t)(ebp + 0xffffffaau), 0x0u);
/* 8de8c0: mov byte ptr [ebp - 0x55], 0xff */
  W8((uint32_t)(ebp + 0xffffffabu), 0xffu);
/* 8de8c4: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8de8c7: mov dword ptr [edi + ecx*4], edx */
  W32((uint32_t)(edi + ecx*4), edx);
/* 8de8ca: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8de8cd: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 8de8d0: add ecx, dword ptr [esi + 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de8d3: mov byte ptr [ecx + ebx], 0 */
  W8((uint32_t)(ecx + ebx), 0x0u);
/* 8de8d7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de8d8: xor eax, eax */
  eax = 0;
/* 8de8da: jmp 0x8de6c0 */
  goto L_8de6c0;
L_8de8df: /* 8de8df: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 8de8e2: jmp 0x8de6b0 */
  goto L_8de6b0;
L_8de8e7: /* 8de8e7: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8de8ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8de8ec: je 0x8de8ff */
  if (zf) goto L_8de8ff;
L_8de8ee: /* 8de8ee: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 8de8f4: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8de8f6: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8de8f9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8de8fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de8fc: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8de8ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8de8ff: /* 8de8ff: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8de902: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8de905: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8de906: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 8de909: jmp 0x8dde00 */
  goto L_8dde00;
L_8de90e: /* 8de90e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8de911: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8de913: je 0x8de923 */
  if (zf) goto L_8de923;
L_8de915: /* 8de915: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 8de91b: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8de91d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8de91f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de920: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8de923u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8de923: /* 8de923: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8de926: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8de92d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8de92e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8de92f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8de930: mov esp, ebp */
  esp = ebp;
/* 8de932: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8de933: ret 8 */
  esp += 12; SPILL(); return;
L_8de936: /* 8de936: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 8de938: mov ebx, 0 */
  ebx = 0x0u;
/* 8de93d: sets bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((sf) ? 1 : 0) & 0xffu);
/* 8de940: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 8de941: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8de943: movzx eax, byte ptr [esi + 0x3c] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x3cu)));
/* 8de947: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 8de949: mov ecx, 0 */
  ecx = 0x0u;
/* 8de94e: sets cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((sf) ? 1 : 0) & 0xffu);
/* 8de951: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8de952: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8de954: mov al, byte ptr [esi + 0x38] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x38u))) & 0xffu);
/* 8de957: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8de959: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 8de95c: je 0x8de96a */
  if (zf) goto L_8de96a;
L_8de95e: /* 8de95e: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de960: je 0x8de99b */
  if (zf) goto L_8de99b;
L_8de962: /* 8de962: cmp al, 9 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de964: jne 0x8dddc0 */
  if (!zf) goto L_8dddc0;
L_8de96a: /* 8de96a: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 8de96c: lea edi, [esi + 0xac] */
  edi = (uint32_t)(esi + 0xacu);
/* 8de972: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8de974: mov ecx, edi */
  ecx = edi;
/* 8de976: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8de97cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8de97c: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8de97f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8de981: lea ecx, [eax + edx*8] */
  ecx = (uint32_t)(eax + edx*8);
/* 8de984: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8de986: je 0x8dddc0 */
  if (zf) goto L_8dddc0;
L_8de98c: /* 8de98c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8de98f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de990: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8de991: call 0x6cb68b */
  esp -= 4; W32(esp, 0x8de996u); SPILL(); f_6cb68b(); if (g_unwind) return; RELOAD();
/* 8de996: jmp 0x8dddc0 */
  goto L_8dddc0;
L_8de99b: /* 8de99b: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 8de99d: lea edi, [esi + 0xac] */
  edi = (uint32_t)(esi + 0xacu);
/* 8de9a3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8de9a5: mov ecx, edi */
  ecx = edi;
/* 8de9a7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8de9adu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8de9ad: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8de9b0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8de9b2: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 8de9b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 8de9b7: je 0x8dddc0 */
  if (zf) goto L_8dddc0;
L_8de9bd: /* 8de9bd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8de9c0: mov edx, 1 */
  edx = 0x1u;
/* 8de9c5: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
  }
/* 8de9c7: mov ecx, ebx */
  ecx = ebx;
/* 8de9c9: mov edi, 1 */
  edi = 0x1u;
/* 8de9ce: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 8de9d0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8de9d3: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* 8de9d6: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8de9d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de9da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de9db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8de9dc: mov ecx, eax */
  ecx = eax;
/* 8de9de: call 0x6cc24d */
  esp -= 4; W32(esp, 0x8de9e3u); SPILL(); f_6cc24d(); if (g_unwind) return; RELOAD();
/* 8de9e3: jmp 0x8dddc0 */
  goto L_8dddc0;
}

void f_8de70d(void) {
  LOAD_REGS();
  goto L_8de70d;
L_8dde00: /* 8dde00: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8dde03: cmp eax, dword ptr [esi + 0xb0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xb0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dde09: jge 0x8de90e */
  if ((sf == of)) goto L_8de90e;
L_8dde0f: /* 8dde0f: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8dde12: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 8dde15: mov eax, dword ptr [edx + 0xac] */
  eax = R32((uint32_t)(edx + 0xacu));
/* 8dde1b: mov ebx, dword ptr [eax + ecx*8 - 0x20] */
  ebx = R32((uint32_t)(eax + ecx*8 + 0xffffffe0u));
/* 8dde1f: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 8dde25: lea esi, [eax + ecx*8] */
  esi = (uint32_t)(eax + ecx*8);
/* 8dde28: mov eax, dword ptr [esi - 0x24] */
  eax = R32((uint32_t)(esi + 0xffffffdcu));
/* 8dde2b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8dde2e: mov edi, ebx */
  edi = ebx;
/* 8dde30: imul edi, eax */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(eax);
  edi = (uint32_t)r;
  }
/* 8dde33: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8dde36: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8dde38: push 0xaed610 */
  { uint32_t v = 0xaed610u; esp -= 4; W32(esp, v); }
/* 8dde3d: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 8dde44: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 8dde47: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8dde49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dde4a: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8dde4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dde4c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dde4e: je 0x8dde63 */
  if (zf) goto L_8dde63;
L_8dde50: /* 8dde50: mov edx, 4 */
  edx = 0x4u;
/* 8dde55: mov ecx, eax */
  ecx = eax;
L_8dde57: /* 8dde57: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 8dde58: js 0x8dde5e */
  if (sf) goto L_8dde5e;
L_8dde5a: /* 8dde5a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8dde5c: jmp 0x8dde57 */
  goto L_8dde57;
L_8dde5e: /* 8dde5e: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8dde61: jmp 0x8dde6a */
  goto L_8dde6a;
L_8dde63: /* 8dde63: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
L_8dde6a: /* 8dde6a: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8dde6d: test byte ptr [eax + 0x7c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x7cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8dde71: jne 0x8de6a1 */
  if (!zf) goto L_8de6a1;
L_8dde77: /* 8dde77: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8dde7a: lea eax, [ebx - 1] */
  eax = (uint32_t)(ebx + 0xffffffffu);
/* 8dde7d: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8dde80: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 8dde83: lea ecx, [edx - 1] */
  ecx = (uint32_t)(edx + 0xffffffffu);
/* 8dde86: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8dde89: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 8dde8c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8dde8f: xor edi, edi */
  edi = 0;
L_8dde91: /* 8dde91: cmp edi, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dde94: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 8dde97: jge 0x8de8e7 */
  if ((sf == of)) goto L_8de8e7;
L_8dde9d: /* 8dde9d: xor eax, eax */
  eax = 0;
/* 8dde9f: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_8ddea2: /* 8ddea2: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ddea5: jge 0x8de69b */
  if ((sf == of)) goto L_8de69b;
L_8ddeab: /* 8ddeab: imul edi, edx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(edx);
  edi = (uint32_t)r;
  }
/* 8ddeae: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8ddeb0: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8ddeb3: shl edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8ddeb5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ddeb7: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 8ddebe: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 8ddec5: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 8ddecc: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 8dded3: je 0x8de0b0 */
  if (zf) goto L_8de0b0;
L_8dded9: /* 8dded9: mov ebx, eax */
  ebx = eax;
/* 8ddedb: movzx ecx, byte ptr [ebx + edi*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x3u)));
/* 8ddee0: movzx edx, byte ptr [ebx + edi*4] */
  edx = (uint32_t)(R8((uint32_t)(ebx + edi*4)));
/* 8ddee4: movzx eax, byte ptr [ebx + edi*4 + 1] */
  eax = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x1u)));
/* 8ddee9: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ddeec: movzx ecx, byte ptr [ebx + edi*4 + 2] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x2u)));
/* 8ddef1: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddef4: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8ddef7: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddefd: lea edx, [ebp - 0x140] */
  edx = (uint32_t)(ebp + 0xfffffec0u);
/* 8ddf03: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf06: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8ddf09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ddf0a: lea eax, [ebp - 0x19c] */
  eax = (uint32_t)(ebp + 0xfffffe64u);
/* 8ddf10: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ddf17: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf1a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ddf1d: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8ddf20: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf26: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf29: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf2f: fstp dword ptr [ebp - 0x140] */
  WF32((uint32_t)(ebp + 0xfffffec0u), ST0); FPOP();
/* 8ddf35: fstp dword ptr [ebp - 0x13c] */
  WF32((uint32_t)(ebp + 0xfffffec4u), ST0); FPOP();
/* 8ddf3b: fstp dword ptr [ebp - 0x138] */
  WF32((uint32_t)(ebp + 0xfffffec8u), ST0); FPOP();
/* 8ddf41: fstp dword ptr [ebp - 0x134] */
  WF32((uint32_t)(ebp + 0xfffffeccu), ST0); FPOP();
/* 8ddf47: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8ddf4du); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8ddf4d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8ddf50: lea edx, [edi + ecx] */
  edx = (uint32_t)(edi + ecx);
/* 8ddf53: movzx ecx, byte ptr [ebx + edx*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edx*4 + 0x3u)));
/* 8ddf58: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* 8ddf5b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8ddf5e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ddf61: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8ddf65: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf68: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8ddf6b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf71: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8ddf75: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf78: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ddf7b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf81: lea eax, [ebp - 0x160] */
  eax = (uint32_t)(ebp + 0xfffffea0u);
/* 8ddf87: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf8a: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8ddf8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ddf8e: lea ecx, [ebp - 0x1bc] */
  ecx = (uint32_t)(ebp + 0xfffffe44u);
/* 8ddf94: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ddf9b: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf9e: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8ddfa1: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddfa7: fstp dword ptr [ebp - 0x160] */
  WF32((uint32_t)(ebp + 0xfffffea0u), ST0); FPOP();
/* 8ddfad: fstp dword ptr [ebp - 0x15c] */
  WF32((uint32_t)(ebp + 0xfffffea4u), ST0); FPOP();
/* 8ddfb3: fstp dword ptr [ebp - 0x158] */
  WF32((uint32_t)(ebp + 0xfffffea8u), ST0); FPOP();
/* 8ddfb9: fstp dword ptr [ebp - 0x154] */
  WF32((uint32_t)(ebp + 0xfffffeacu), ST0); FPOP();
/* 8ddfbf: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8ddfc5u); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8ddfc5: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ddfc8: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8ddfca: movzx eax, byte ptr [ebx + edi*4 + 3] */
  eax = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x3u)));
/* 8ddfcf: movzx ecx, byte ptr [ebx + edi*4] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edi*4)));
/* 8ddfd3: movzx edx, byte ptr [ebx + edi*4 + 1] */
  edx = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x1u)));
/* 8ddfd8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8ddfdb: movzx eax, byte ptr [ebx + edi*4 + 2] */
  eax = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x2u)));
/* 8ddfe0: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddfe3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ddfe6: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddfec: lea ecx, [ebp - 0x110] */
  ecx = (uint32_t)(ebp + 0xfffffef0u);
/* 8ddff2: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddff5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8ddff8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ddff9: lea edx, [ebp - 0x2bc] */
  edx = (uint32_t)(ebp + 0xfffffd44u);
/* 8ddfff: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de005: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de008: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de00b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de011: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de014: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de01a: fstp dword ptr [ebp - 0x110] */
  WF32((uint32_t)(ebp + 0xfffffef0u), ST0); FPOP();
/* 8de020: fstp dword ptr [ebp - 0x10c] */
  WF32((uint32_t)(ebp + 0xfffffef4u), ST0); FPOP();
/* 8de026: fstp dword ptr [ebp - 0x108] */
  WF32((uint32_t)(ebp + 0xfffffef8u), ST0); FPOP();
/* 8de02c: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 8de032: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de033: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de036: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de03cu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de03c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8de03f: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de041: movzx ecx, byte ptr [ebx + edi*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x3u)));
/* 8de046: movzx edx, byte ptr [ebx + edi*4] */
  edx = (uint32_t)(R8((uint32_t)(ebx + edi*4)));
/* 8de04a: lea eax, [ebx + edi*4] */
  eax = (uint32_t)(ebx + edi*4);
/* 8de04d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de050: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de054: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de057: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de05a: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de060: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de064: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de067: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de06a: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de070: lea eax, [ebp - 0x130] */
  eax = (uint32_t)(ebp + 0xfffffed0u);
/* 8de076: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de079: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de07c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de07d: lea ecx, [ebp - 0x1dc] */
  ecx = (uint32_t)(ebp + 0xfffffe24u);
/* 8de083: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de089: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de08a: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de08d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de093: fstp dword ptr [ebp - 0x130] */
  WF32((uint32_t)(ebp + 0xfffffed0u), ST0); FPOP();
/* 8de099: fstp dword ptr [ebp - 0x12c] */
  WF32((uint32_t)(ebp + 0xfffffed4u), ST0); FPOP();
/* 8de09f: fstp dword ptr [ebp - 0x128] */
  WF32((uint32_t)(ebp + 0xfffffed8u), ST0); FPOP();
/* 8de0a5: fstp dword ptr [ebp - 0x124] */
  WF32((uint32_t)(ebp + 0xfffffedcu), ST0); FPOP();
/* 8de0ab: jmp 0x8de5d2 */
  goto L_8de5d2;
L_8de0b0: /* 8de0b0: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8de0b3: mov al, byte ptr [edx + 0x38] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x38u))) & 0xffu);
/* 8de0b6: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8de0b8: je 0x8de3e1 */
  if (zf) goto L_8de3e1;
L_8de0be: /* 8de0be: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de0c0: je 0x8de211 */
  if (zf) goto L_8de211;
L_8de0c6: /* 8de0c6: cmp al, 9 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de0c8: jne 0x8de5db */
  if (!zf) goto L_8de5db;
L_8de0ce: /* 8de0ce: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de0d1: movzx ecx, byte ptr [edi + eax] */
  ecx = (uint32_t)(R8((uint32_t)(edi + eax)));
/* 8de0d5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de0d8: lea edx, [ebp - 0x150] */
  edx = (uint32_t)(ebp + 0xfffffeb0u);
/* 8de0de: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de0e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de0e2: lea eax, [ebp - 0x25c] */
  eax = (uint32_t)(ebp + 0xfffffda4u);
/* 8de0e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de0e9: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de0ef: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de0f2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8de0f4: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8de0f6: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8de0f8: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8de0fa: fstp dword ptr [ebp - 0x150] */
  WF32((uint32_t)(ebp + 0xfffffeb0u), ST0); FPOP();
/* 8de100: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8de102: fstp dword ptr [ebp - 0x14c] */
  WF32((uint32_t)(ebp + 0xfffffeb4u), ST0); FPOP();
/* 8de108: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8de10a: fstp dword ptr [ebp - 0x148] */
  WF32((uint32_t)(ebp + 0xfffffeb8u), ST0); FPOP();
/* 8de110: fstp dword ptr [ebp - 0x144] */
  WF32((uint32_t)(ebp + 0xfffffebcu), ST0); FPOP();
/* 8de116: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de11cu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de11c: mov ecx, dword ptr [esi - 0xc] */
  ecx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de11f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8de122: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de124: movzx eax, byte ptr [ecx + edx] */
  eax = (uint32_t)(R8((uint32_t)(ecx + edx)));
/* 8de128: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de12b: lea ecx, [ebp - 0x170] */
  ecx = (uint32_t)(ebp + 0xfffffe90u);
/* 8de131: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de134: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de135: lea edx, [ebp - 0x1fc] */
  edx = (uint32_t)(ebp + 0xfffffe04u);
/* 8de13b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de13c: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de142: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de145: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8de147: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8de149: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8de14b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8de14d: fstp dword ptr [ebp - 0x170] */
  WF32((uint32_t)(ebp + 0xfffffe90u), ST0); FPOP();
/* 8de153: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8de155: fstp dword ptr [ebp - 0x16c] */
  WF32((uint32_t)(ebp + 0xfffffe94u), ST0); FPOP();
/* 8de15b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8de15d: fstp dword ptr [ebp - 0x168] */
  WF32((uint32_t)(ebp + 0xfffffe98u), ST0); FPOP();
/* 8de163: fstp dword ptr [ebp - 0x164] */
  WF32((uint32_t)(ebp + 0xfffffe9cu), ST0); FPOP();
/* 8de169: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de16fu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de16f: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de172: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de175: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8de177: movzx ecx, byte ptr [eax + ebx] */
  ecx = (uint32_t)(R8((uint32_t)(eax + ebx)));
/* 8de17b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de17e: lea edx, [ebp - 0x180] */
  edx = (uint32_t)(ebp + 0xfffffe80u);
/* 8de184: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de187: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de188: lea eax, [ebp - 0x29c] */
  eax = (uint32_t)(ebp + 0xfffffd64u);
/* 8de18e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de18f: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de195: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de198: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8de19a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8de19c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8de19e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8de1a0: fstp dword ptr [ebp - 0x180] */
  WF32((uint32_t)(ebp + 0xfffffe80u), ST0); FPOP();
/* 8de1a6: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8de1a8: fstp dword ptr [ebp - 0x17c] */
  WF32((uint32_t)(ebp + 0xfffffe84u), ST0); FPOP();
/* 8de1ae: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8de1b0: fstp dword ptr [ebp - 0x178] */
  WF32((uint32_t)(ebp + 0xfffffe88u), ST0); FPOP();
/* 8de1b6: fstp dword ptr [ebp - 0x174] */
  WF32((uint32_t)(ebp + 0xfffffe8cu), ST0); FPOP();
/* 8de1bc: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de1c2u); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de1c2: mov ecx, dword ptr [esi - 0xc] */
  ecx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de1c5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8de1c8: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de1ca: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de1cc: movzx eax, byte ptr [ecx + edx] */
  eax = (uint32_t)(R8((uint32_t)(ecx + edx)));
/* 8de1d0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de1d3: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de1d6: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de1dc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8de1de: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8de1e0: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8de1e2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8de1e4: fstp dword ptr [ebp - 0x120] */
  WF32((uint32_t)(ebp + 0xfffffee0u), ST0); FPOP();
/* 8de1ea: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8de1ec: fstp dword ptr [ebp - 0x11c] */
  WF32((uint32_t)(ebp + 0xfffffee4u), ST0); FPOP();
/* 8de1f2: lea ecx, [ebp - 0x120] */
  ecx = (uint32_t)(ebp + 0xfffffee0u);
/* 8de1f8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8de1fa: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* 8de200: fstp dword ptr [ebp - 0x118] */
  WF32((uint32_t)(ebp + 0xfffffee8u), ST0); FPOP();
/* 8de206: fstp dword ptr [ebp - 0x114] */
  WF32((uint32_t)(ebp + 0xfffffeecu), ST0); FPOP();
/* 8de20c: jmp 0x8de5d0 */
  goto L_8de5d0;
L_8de211: /* 8de211: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de214: movzx ecx, byte ptr [eax + edi*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(eax + edi*4 + 0x3u)));
/* 8de219: movzx edx, byte ptr [eax + edi*4] */
  edx = (uint32_t)(R8((uint32_t)(eax + edi*4)));
/* 8de21d: lea eax, [eax + edi*4] */
  eax = (uint32_t)(eax + edi*4);
/* 8de220: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de223: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de227: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de22a: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de22d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de233: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de237: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de23a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de23d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de243: lea eax, [ebp - 0x100] */
  eax = (uint32_t)(ebp + 0xffffff00u);
/* 8de249: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de24c: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de24f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de250: lea ecx, [ebp - 0x27c] */
  ecx = (uint32_t)(ebp + 0xfffffd84u);
/* 8de256: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de25c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de25d: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de260: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de263: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de269: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 8de26f: fstp dword ptr [ebp - 0xfc] */
  WF32((uint32_t)(ebp + 0xffffff04u), ST0); FPOP();
/* 8de275: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 8de27b: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 8de281: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de287u); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de287: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8de28a: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de28d: lea edx, [edi + ebx] */
  edx = (uint32_t)(edi + ebx);
/* 8de290: movzx ecx, byte ptr [eax + edx*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(eax + edx*4 + 0x3u)));
/* 8de295: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 8de298: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de29b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de29e: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de2a2: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de2a5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de2a8: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de2ae: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de2b2: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de2b5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de2b8: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de2be: lea eax, [ebp - 0xe0] */
  eax = (uint32_t)(ebp + 0xffffff20u);
/* 8de2c4: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de2c7: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de2ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de2cb: lea ecx, [ebp - 0x23c] */
  ecx = (uint32_t)(ebp + 0xfffffdc4u);
/* 8de2d1: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de2d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de2d8: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de2db: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de2de: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de2e4: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 8de2ea: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 8de2f0: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 8de2f6: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 8de2fc: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de302u); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de302: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de305: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de308: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de30a: movzx ecx, byte ptr [eax + edi*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(eax + edi*4 + 0x3u)));
/* 8de30f: movzx edx, byte ptr [eax + edi*4] */
  edx = (uint32_t)(R8((uint32_t)(eax + edi*4)));
/* 8de313: lea eax, [eax + edi*4] */
  eax = (uint32_t)(eax + edi*4);
/* 8de316: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de319: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de31d: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de320: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de323: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de329: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de32d: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de330: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de333: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de339: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de33c: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de33f: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de345: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de348: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de34e: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 8de351: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 8de354: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 8de357: lea eax, [ebp - 0x80] */
  eax = (uint32_t)(ebp + 0xffffff80u);
/* 8de35a: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 8de35d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de35e: lea ecx, [ebp - 0x1ac] */
  ecx = (uint32_t)(ebp + 0xfffffe54u);
/* 8de364: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de365: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de368: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de36eu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de36e: mov edx, dword ptr [esi - 0xc] */
  edx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de371: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de373: movzx ecx, byte ptr [edx + edi*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(edx + edi*4 + 0x3u)));
/* 8de378: lea eax, [edx + edi*4] */
  eax = (uint32_t)(edx + edi*4);
/* 8de37b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de37e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de381: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de385: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de388: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de38b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de391: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de395: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de398: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de39b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de3a1: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 8de3a7: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de3aa: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de3ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de3ae: lea ecx, [ebp - 0x1cc] */
  ecx = (uint32_t)(ebp + 0xfffffe34u);
/* 8de3b4: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de3ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de3bb: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de3be: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de3c4: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 8de3ca: fstp dword ptr [ebp - 0xbc] */
  WF32((uint32_t)(ebp + 0xffffff44u), ST0); FPOP();
/* 8de3d0: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 8de3d6: fstp dword ptr [ebp - 0xb4] */
  WF32((uint32_t)(ebp + 0xffffff4cu), ST0); FPOP();
/* 8de3dc: jmp 0x8de5d2 */
  goto L_8de5d2;
L_8de3e1: /* 8de3e1: mov edx, dword ptr [esi - 0xc] */
  edx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de3e4: movzx eax, byte ptr [edx + edi] */
  eax = (uint32_t)(R8((uint32_t)(edx + edi)));
/* 8de3e8: mov ebx, dword ptr [ebp - 0x5c] */
  ebx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8de3eb: movzx ecx, byte ptr [ebx + eax*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + eax*4 + 0x3u)));
/* 8de3f0: movzx edx, byte ptr [ebx + eax*4] */
  edx = (uint32_t)(R8((uint32_t)(ebx + eax*4)));
/* 8de3f4: lea eax, [ebx + eax*4] */
  eax = (uint32_t)(ebx + eax*4);
/* 8de3f7: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de3fa: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de3fe: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de401: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de404: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de40a: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de40e: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de411: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de414: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de41a: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 8de420: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de423: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de426: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de427: lea ecx, [ebp - 0x1ec] */
  ecx = (uint32_t)(ebp + 0xfffffe14u);
/* 8de42d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de434: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de437: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de43a: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de440: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 8de446: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 8de44c: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 8de452: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 8de458: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de45eu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de45e: mov edx, dword ptr [esi - 0xc] */
  edx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de461: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8de464: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8de466: movzx ecx, byte ptr [edx + eax] */
  ecx = (uint32_t)(R8((uint32_t)(edx + eax)));
/* 8de46a: movzx edx, byte ptr [ebx + ecx*4 + 3] */
  edx = (uint32_t)(R8((uint32_t)(ebx + ecx*4 + 0x3u)));
/* 8de46f: lea eax, [ebx + ecx*4] */
  eax = (uint32_t)(ebx + ecx*4);
/* 8de472: movzx ecx, byte ptr [eax] */
  ecx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de475: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de478: movzx edx, byte ptr [eax + 1] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de47c: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de47f: movzx eax, byte ptr [eax + 2] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de483: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de489: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de48c: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8de492: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de495: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de498: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de499: lea edx, [ebp - 0x20c] */
  edx = (uint32_t)(ebp + 0xfffffdf4u);
/* 8de49f: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de4a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de4a6: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de4a9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de4ac: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de4af: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de4b5: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de4b8: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de4be: fstp dword ptr [ebp - 0xb0] */
  WF32((uint32_t)(ebp + 0xffffff50u), ST0); FPOP();
/* 8de4c4: fstp dword ptr [ebp - 0xac] */
  WF32((uint32_t)(ebp + 0xffffff54u), ST0); FPOP();
/* 8de4ca: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* 8de4d0: fstp dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0); FPOP();
/* 8de4d6: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de4dcu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de4dc: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de4df: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de4e2: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8de4e4: movzx edx, byte ptr [eax + ecx] */
  edx = (uint32_t)(R8((uint32_t)(eax + ecx)));
/* 8de4e8: movzx ecx, byte ptr [ebx + edx*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edx*4 + 0x3u)));
/* 8de4ed: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* 8de4f0: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de4f3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de4f6: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de4fa: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de4fd: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de500: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de506: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de50a: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de50d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de510: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de516: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de519: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de51c: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de522: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de525: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de52b: lea eax, [ebp - 0xd0] */
  eax = (uint32_t)(ebp + 0xffffff30u);
/* 8de531: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de532: lea ecx, [ebp - 0x22c] */
  ecx = (uint32_t)(ebp + 0xfffffdd4u);
/* 8de538: fstp dword ptr [ebp - 0xd0] */
  WF32((uint32_t)(ebp + 0xffffff30u), ST0); FPOP();
/* 8de53e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de53f: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de542: fstp dword ptr [ebp - 0xcc] */
  WF32((uint32_t)(ebp + 0xffffff34u), ST0); FPOP();
/* 8de548: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 8de54e: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 8de554: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de55au); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de55a: mov edx, dword ptr [esi - 0xc] */
  edx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de55d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8de560: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8de562: add edx, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8de565: movzx ecx, byte ptr [edx + eax] */
  ecx = (uint32_t)(R8((uint32_t)(edx + eax)));
/* 8de569: movzx edx, byte ptr [ebx + ecx*4 + 3] */
  edx = (uint32_t)(R8((uint32_t)(ebx + ecx*4 + 0x3u)));
/* 8de56e: lea eax, [ebx + ecx*4] */
  eax = (uint32_t)(ebx + ecx*4);
/* 8de571: movzx ecx, byte ptr [eax] */
  ecx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de574: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de577: movzx edx, byte ptr [eax + 1] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de57b: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de57e: movzx eax, byte ptr [eax + 2] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de582: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de588: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de58b: lea ecx, [ebp - 0xf0] */
  ecx = (uint32_t)(ebp + 0xffffff10u);
/* 8de591: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de594: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de597: lea edx, [ebp - 0x24c] */
  edx = (uint32_t)(ebp + 0xfffffdb4u);
/* 8de59d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de5a3: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de5a6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de5a9: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de5af: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de5b2: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de5b8: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 8de5be: fstp dword ptr [ebp - 0xec] */
  WF32((uint32_t)(ebp + 0xffffff14u), ST0); FPOP();
/* 8de5c4: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 8de5ca: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
L_8de5d0: /* 8de5d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de5d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_8de5d2: /* 8de5d2: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de5d5: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de5dbu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
L_8de5db: /* 8de5db: push 0x40800000 */
  { uint32_t v = 0x40800000u; esp -= 4; W32(esp, v); }
/* 8de5e0: lea eax, [ebp - 0x26c] */
  eax = (uint32_t)(ebp + 0xfffffd94u);
/* 8de5e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de5e7: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de5ea: call dword ptr [0xcfac60] */
  esp -= 4; W32(esp, 0x8de5f0u); SPILL(); f_4e3701(); if (g_unwind) return; /* Core!??KFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 8de5f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de5f1: lea ecx, [ebp - 0x18c] */
  ecx = (uint32_t)(ebp + 0xfffffe74u);
/* 8de5f7: call 0x6c576d */
  esp -= 4; W32(esp, 0x8de5fcu); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 8de5fc: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8de5ff: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8de602: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8de605: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8de608: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8de60a: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8de60d: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de60f: mov dword ptr [edi + ecx*4], eax */
  W32((uint32_t)(edi + ecx*4), eax);
/* 8de612: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8de615: mov cl, byte ptr [ecx + 0x38] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x38u))) & 0xffu);
/* 8de618: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8de61a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de61d: je 0x8de66d */
  if (zf) goto L_8de66d;
L_8de61f: /* 8de61f: cmp cl, 5 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de622: je 0x8de64e */
  if (zf) goto L_8de64e;
L_8de624: /* 8de624: cmp cl, 9 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de627: jne 0x8de68a */
  if (!zf) goto L_8de68a;
L_8de629: /* 8de629: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8de62c: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 8de62f: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 8de632: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8de635: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8de638: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8de63a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8de63d: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8de640: mov byte ptr [eax + ebx], cl */
  W8((uint32_t)(eax + ebx), (ecx & 0xffu));
/* 8de643: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de644: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 8de647: mov eax, ebx */
  eax = ebx;
/* 8de649: jmp 0x8ddea2 */
  goto L_8ddea2;
L_8de64e: /* 8de64e: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8de651: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8de654: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8de657: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 8de65a: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de65c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de65d: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 8de660: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8de663: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 8de666: mov eax, ebx */
  eax = ebx;
/* 8de668: jmp 0x8ddea2 */
  goto L_8ddea2;
L_8de66d: /* 8de66d: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8de670: imul edi, edx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(edx);
  edi = (uint32_t)r;
  }
/* 8de673: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 8de676: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8de678: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de679: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8de67c: mov ecx, dword ptr [eax + 0x50] */
  ecx = R32((uint32_t)(eax + 0x50u));
/* 8de67f: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de681: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de683: call 0x6cb18b */
  esp -= 4; W32(esp, 0x8de688u); SPILL(); f_6cb18b(); if (g_unwind) return; RELOAD();
/* 8de688: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
L_8de68a: /* 8de68a: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8de68d: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8de690: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de691: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 8de694: mov eax, ebx */
  eax = ebx;
/* 8de696: jmp 0x8ddea2 */
  goto L_8ddea2;
L_8de69b: /* 8de69b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8de69c: jmp 0x8dde91 */
  goto L_8dde91;
L_8de6a1: /* 8de6a1: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 8de6a2: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8de6a5: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 8de6ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8de6b0: /* 8de6b0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8de6b3: cmp ecx, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8de6b6: jge 0x8de8e7 */
  if ((sf == of)) goto L_8de8e7;
L_8de6bc: /* 8de6bc: xor eax, eax */
  eax = 0;
/* 8de6be: xor ebx, ebx */
  ebx = 0;
L_8de6c0: /* 8de6c0: cmp ebx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8de6c3: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 8de6c6: jge 0x8de8df */
  if ((sf == of)) goto L_8de8df;
L_8de6cc: /* 8de6cc: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8de6cf: imul edi, dword ptr [ebp - 0x54] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffacu)));
  edi = (uint32_t)r;
  }
/* 8de6d3: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de6d5: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8de6d8: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 8de6df: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 8de6e6: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8de6ed: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 8de6f4: shl edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
L_8de6f6: /* 8de6f6: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8de6f9: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de6fc: mov eax, 2 */
  eax = 0x2u;
/* 8de701: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8de703: jge 0x8de840 */
  if ((sf == of)) goto L_8de840;
L_8de709: /* 8de709: xor ebx, ebx */
  ebx = 0;
/* 8de70b: jmp 0x8de710 */
  goto L_8de710;
L_8de70d: /* 8de70d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8de710: /* 8de710: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8de713: jge 0x8de834 */
  if ((sf == of)) goto L_8de834;
L_8de719: /* 8de719: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8de71c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de71f: mov edx, ebx */
  edx = ebx;
/* 8de721: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8de723: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8de726: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 8de729: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8de72a: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8de72c: lea eax, [edx + ecx] */
  eax = (uint32_t)(edx + ecx);
/* 8de72f: mov edx, dword ptr [esi - 0xc] */
  edx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de732: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8de734: mov cl, byte ptr [edx + eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + eax))) & 0xffu);
/* 8de737: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8de739: je 0x8de82e */
  if (zf) goto L_8de82e;
L_8de73f: /* 8de73f: inc dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd8u), r);
  }
/* 8de742: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8de745: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8de747: je 0x8de7c5 */
  if (zf) goto L_8de7c5;
L_8de749: /* 8de749: mov ecx, edx */
  ecx = edx;
/* 8de74b: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8de74d: movzx edx, byte ptr [ecx + eax*4 + 3] */
  edx = (uint32_t)(R8((uint32_t)(ecx + eax*4 + 0x3u)));
/* 8de752: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8de755: movzx ecx, byte ptr [eax] */
  ecx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de758: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8de75b: movzx edx, byte ptr [eax + 1] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de75f: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de762: movzx eax, byte ptr [eax + 2] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de766: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de76c: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8de76f: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 8de775: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de778: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8de77b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de77c: lea edx, [ebp - 0x28c] */
  edx = (uint32_t)(ebp + 0xfffffd74u);
/* 8de782: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de788: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8de78b: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de78e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8de791: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de792: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de798: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de79b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de7a1: fstp dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0); FPOP();
/* 8de7a7: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 8de7ad: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 8de7b3: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 8de7b9: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de7bfu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de7bf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de7c0: jmp 0x8de710 */
  goto L_8de710;
L_8de7c5: /* 8de7c5: movzx eax, cl */
  eax = (uint32_t)((ecx & 0xffu));
/* 8de7c8: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8de7cb: movzx edx, byte ptr [ecx + eax*4 + 3] */
  edx = (uint32_t)(R8((uint32_t)(ecx + eax*4 + 0x3u)));
/* 8de7d0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8de7d3: movzx ecx, byte ptr [eax] */
  ecx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de7d6: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8de7d9: movzx edx, byte ptr [eax + 1] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de7dd: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de7e0: movzx eax, byte ptr [eax + 2] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de7e4: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de7ea: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8de7ed: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8de7f0: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de7f3: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8de7f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de7f7: lea edx, [ebp - 0x2ac] */
  edx = (uint32_t)(ebp + 0xfffffd54u);
/* 8de7fd: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de803: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8de806: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de809: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8de80c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de80d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de813: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de816: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de81c: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 8de81f: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 8de822: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 8de825: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 8de828: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de82eu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
L_8de82e: /* 8de82e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de82f: jmp 0x8de710 */
  goto L_8de710;
L_8de834: /* 8de834: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de837: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8de83a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8de83b: jmp 0x8de6f6 */
  goto L_8de6f6;
L_8de840: /* 8de840: cmp dword ptr [ebp - 0x28], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8de843: jl 0x8de8a6 */
  if ((sf != of)) goto L_8de8a6;
L_8de845: /* 8de845: fild dword ptr [ebp - 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8de848: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de849: lea eax, [ebp - 0x2cc] */
  eax = (uint32_t)(ebp + 0xfffffd34u);
/* 8de84f: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8de852: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8de855: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de856: call dword ptr [0xcfac60] */
  esp -= 4; W32(esp, 0x8de85cu); SPILL(); f_4e3701(); if (g_unwind) return; /* Core!??KFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 8de85c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de85d: lea ecx, [ebp - 0x188] */
  ecx = (uint32_t)(ebp + 0xfffffe78u);
/* 8de863: call 0x6c576d */
  esp -= 4; W32(esp, 0x8de868u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 8de868: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8de86b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8de86e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8de870: imul edi, ecx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ecx);
  edi = (uint32_t)r;
  }
/* 8de873: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8de876: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de878: mov dword ptr [edx + edi*4], eax */
  W32((uint32_t)(edx + edi*4), eax);
/* 8de87b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8de87e: mov edi, dword ptr [esi + 0x1c] */
  edi = R32((uint32_t)(esi + 0x1cu));
/* 8de881: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 8de884: lea ecx, [ebx + eax] */
  ecx = (uint32_t)(ebx + eax);
/* 8de887: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 8de88a: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8de88d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8de88f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de890: mov ecx, dword ptr [edx + 0x50] */
  ecx = R32((uint32_t)(edx + 0x50u));
/* 8de893: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de895: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de897: call 0x6cb18b */
  esp -= 4; W32(esp, 0x8de89cu); SPILL(); f_6cb18b(); if (g_unwind) return; RELOAD();
/* 8de89c: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 8de89e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de89f: xor eax, eax */
  eax = 0;
/* 8de8a1: jmp 0x8de6c0 */
  goto L_8de6c0;
L_8de8a6: /* 8de8a6: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8de8a9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8de8ac: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8de8af: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 8de8b2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de8b4: mov byte ptr [ebp - 0x58], 0 */
  W8((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 8de8b8: mov byte ptr [ebp - 0x57], 0 */
  W8((uint32_t)(ebp + 0xffffffa9u), 0x0u);
/* 8de8bc: mov byte ptr [ebp - 0x56], 0 */
  W8((uint32_t)(ebp + 0xffffffaau), 0x0u);
/* 8de8c0: mov byte ptr [ebp - 0x55], 0xff */
  W8((uint32_t)(ebp + 0xffffffabu), 0xffu);
/* 8de8c4: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8de8c7: mov dword ptr [edi + ecx*4], edx */
  W32((uint32_t)(edi + ecx*4), edx);
/* 8de8ca: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8de8cd: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 8de8d0: add ecx, dword ptr [esi + 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de8d3: mov byte ptr [ecx + ebx], 0 */
  W8((uint32_t)(ecx + ebx), 0x0u);
/* 8de8d7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de8d8: xor eax, eax */
  eax = 0;
/* 8de8da: jmp 0x8de6c0 */
  goto L_8de6c0;
L_8de8df: /* 8de8df: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 8de8e2: jmp 0x8de6b0 */
  goto L_8de6b0;
L_8de8e7: /* 8de8e7: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8de8ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8de8ec: je 0x8de8ff */
  if (zf) goto L_8de8ff;
L_8de8ee: /* 8de8ee: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 8de8f4: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8de8f6: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8de8f9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8de8fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de8fc: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8de8ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8de8ff: /* 8de8ff: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8de902: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8de905: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8de906: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 8de909: jmp 0x8dde00 */
  goto L_8dde00;
L_8de90e: /* 8de90e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8de911: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8de913: je 0x8de923 */
  if (zf) goto L_8de923;
L_8de915: /* 8de915: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 8de91b: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8de91d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8de91f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de920: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8de923u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8de923: /* 8de923: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8de926: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8de92d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8de92e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8de92f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8de930: mov esp, ebp */
  esp = ebp;
/* 8de932: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8de933: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8dea12(void) {
  LOAD_REGS();
L_8dea12: /* 8dea12: mov edx, dword ptr [ebp - 0x184] */
  edx = R32((uint32_t)(ebp + 0xfffffe7cu));
/* 8dea18: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8dea1d: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 8dea20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dea21: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 8dea24: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8dea29u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8dea29(); return;
}

void f_8dea29(void) {
  LOAD_REGS();
L_8dea29: /* 8dea29: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 8dea2f: push 0xa1d6d8 */
  { uint32_t v = 0xa1d6d8u; esp -= 4; W32(esp, v); }
/* 8dea34: push 0xaed620 */
  { uint32_t v = 0xaed620u; esp -= 4; W32(esp, v); }
/* 8dea39: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8dea3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dea3b: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8dea3e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dea41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dea43: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8dea49u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8dea49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dea4a: push 0xaed628 */
  { uint32_t v = 0xaed628u; esp -= 4; W32(esp, v); }
/* 8dea4f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8dea51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dea51: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dea54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dea56: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dea58: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8dea5du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8dea5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
/* 8dea60: dec esp */
  { uint32_t a = (uint32_t)(esp);
  uint32_t r = (uint32_t)(a - 1);
  esp = r;
  }
/* 8dea61: fmul qword ptr [ebp - 0x7216dd00] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0x8de92300u)));
/* 8dea67: add byte ptr [ecx], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  W8((uint32_t)(ecx), r);
  }
/* 8dea69: fisttp qword ptr [ebp - 0x72245600] */
  guest_unsupported(0x8dea69); /* fisttp qword ptr [ebp - 0x72245600] */
/* 8dea6f: add al, ch */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8dea71: jmp 0x48deb03 */
  goto L_48deb03;
L_48deb03: guest_badaddr(0x48deb03); return;
}

void f_8dee50(void) {
  LOAD_REGS();
L_8dee50: /* 8dee50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8dee51: mov ebp, esp */
  ebp = esp;
/* 8dee53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8dee55: push 0x9d86f0 */
  { uint32_t v = 0x9d86f0u; esp -= 4; W32(esp, v); }
/* 8dee5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8dee60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dee61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8dee68: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8dee6b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8dee6e: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 8dee71: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dee72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dee73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dee74: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8dee77: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8dee7a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8dee81: je 0x8deeb2 */
  if (zf) goto L_8deeb2;
L_8dee83: /* 8dee83: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 8dee86: je 0x8deea9 */
  if (zf) goto L_8deea9;
L_8dee88: /* 8dee88: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8dee89: je 0x8deea0 */
  if (zf) goto L_8deea0;
L_8dee8b: /* 8dee8b: xor eax, eax */
  eax = 0;
/* 8dee8d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8dee90: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8dee97: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dee98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dee99: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dee9a: mov esp, ebp */
  esp = ebp;
/* 8dee9c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dee9d: ret 0xc */
  esp += 16; SPILL(); return;
L_8deea0: /* 8deea0: mov dword ptr [ebp - 0x18], 0xd */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xdu);
/* 8deea7: jmp 0x8deeb9 */
  goto L_8deeb9;
L_8deea9: /* 8deea9: mov dword ptr [ebp - 0x18], 0xc */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xcu);
/* 8deeb0: jmp 0x8deeb9 */
  goto L_8deeb9;
L_8deeb2: /* 8deeb2: mov dword ptr [ebp - 0x18], 0xa */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xau);
L_8deeb9: /* 8deeb9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8deebc: mov al, byte ptr [ecx + 0x38] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x38u))) & 0xffu);
/* 8deebf: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8deec1: je 0x8deec7 */
  if (zf) goto L_8deec7;
L_8deec3: /* 8deec3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8deec5: jne 0x8dee8b */
  if (!zf) goto L_8dee8b;
L_8deec7: /* 8deec7: mov eax, dword ptr [ecx + 0xac] */
  eax = R32((uint32_t)(ecx + 0xacu));
/* 8deecd: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 8deed0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8deed2: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8deed4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8deed4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8deed7: mov eax, dword ptr [ecx + 0x44] */
  eax = R32((uint32_t)(ecx + 0x44u));
/* 8deeda: imul eax, dword ptr [ecx + 0x40] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ecx + 0x40u)));
  eax = (uint32_t)r;
  }
/* 8deede: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 8deee4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8deee6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8deee8: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8deeeb: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 8deef0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8deef1: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8deef3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8deef3: mov esi, eax */
  esi = eax;
/* 8deef5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8deef8: cmp byte ptr [eax + 0x38], 5 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x38u))); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8deefc: jne 0x8def1e */
  if (!zf) goto L_8def1e;
L_8deefe: /* 8deefe: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* 8def01: imul ecx, dword ptr [eax + 0x40] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(eax + 0x40u)));
  ecx = (uint32_t)r;
  }
/* 8def05: mov edx, dword ptr [eax + 0xac] */
  edx = R32((uint32_t)(eax + 0xacu));
/* 8def0b: mov eax, dword ptr [edx + 0x1c] */
  eax = R32((uint32_t)(edx + 0x1cu));
/* 8def0e: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8def11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8def12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8def13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8def14: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8def19u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8def19: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8def1c: jmp 0x8def44 */
  goto L_8def44;
L_8def1e: /* 8def1e: mov eax, dword ptr [eax + 0xbc] */
  eax = R32((uint32_t)(eax + 0xbcu));
/* 8def24: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8def26: mov ecx, eax */
  ecx = eax;
/* 8def28: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x8def2bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8def2b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8def2e: mov ecx, dword ptr [ecx + 0xbc] */
  ecx = R32((uint32_t)(ecx + 0xbcu));
/* 8def34: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8def36: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8def38: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 8def3a: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8def3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8def3e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8def3f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8def41: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0x8def44u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8def44: /* 8def44: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8def47: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8def49: add ecx, 0xac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8def4f: call 0x6c8ef4 */
  esp -= 4; W32(esp, 0x8def54u); SPILL(); f_6c8ef4(); if (g_unwind) return; RELOAD();
/* 8def54: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8def57: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8def5a: mov ecx, 0x38 */
  ecx = 0x38u;
/* 8def5f: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8def62: xor eax, eax */
  eax = 0;
/* 8def64: mov ebx, ecx */
  ebx = ecx;
/* 8def66: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8def69: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8def6c: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8def6e: mov ecx, ebx */
  ecx = ebx;
/* 8def70: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8def72: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8def75: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8def78: xor ebx, ebx */
  ebx = 0;
/* 8def7a: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* 8def7c: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 8def7e: and edx, 0xfffffffd */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8def81: add edx, 0x21 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x21u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8def84: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8def86: mov byte ptr [ebp - 0x58], bl */
  W8((uint32_t)(ebp + 0xffffffa8u), (ebx & 0xffu));
/* 8def89: mov word ptr [ebp - 0x56], dx */
  W16((uint32_t)(ebp + 0xffffffaau), (edx & 0xffffu));
/* 8def8d: mov word ptr [ebp - 0x52], 0x86 */
  W16((uint32_t)(ebp + 0xffffffaeu), 0x86u);
/* 8def93: je 0x8defdc */
  if (zf) goto L_8defdc;
L_8def95: /* 8def95: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8def97: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8def9a: mov byte ptr [ebp - 0x50], cl */
  W8((uint32_t)(ebp + 0xffffffb0u), (ecx & 0xffu));
/* 8def9d: cmp dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8defa0: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8defa3: mov byte ptr [ebp - 0x4f], dl */
  W8((uint32_t)(ebp + 0xffffffb1u), (edx & 0xffu));
/* 8defa6: cmp dword ptr [eax + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8defa9: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8defac: mov byte ptr [ebp - 0x4e], cl */
  W8((uint32_t)(ebp + 0xffffffb2u), (ecx & 0xffu));
/* 8defaf: cmp dword ptr [eax + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8defb2: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8defb5: mov byte ptr [ebp - 0x4d], dl */
  W8((uint32_t)(ebp + 0xffffffb3u), (edx & 0xffu));
/* 8defb8: cmp dword ptr [eax + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8defbb: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8defbe: mov byte ptr [ebp - 0x4c], cl */
  W8((uint32_t)(ebp + 0xffffffb4u), (ecx & 0xffu));
/* 8defc1: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 8defc4: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 8defc7: cmp dword ptr [eax + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8defca: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8defcd: mov byte ptr [ebp - 0x44], cl */
  W8((uint32_t)(ebp + 0xffffffbcu), (ecx & 0xffu));
/* 8defd0: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 8defd3: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8defd6: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 8defd9: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
L_8defdc: /* 8defdc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8defdf: mov cx, word ptr [ebp - 0x18] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffe8u))) & 0xffffu);
/* 8defe3: push 0x8dc960 */
  { uint32_t v = 0x8dc960u; esp -= 4; W32(esp, v); }
/* 8defe8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8defea: mov byte ptr [ebp - 0x30], bl */
  W8((uint32_t)(ebp + 0xffffffd0u), (ebx & 0xffu));
/* 8defed: mov word ptr [ebp - 0x2c], 0x50 */
  W16((uint32_t)(ebp + 0xffffffd4u), 0x50u);
/* 8deff3: mov word ptr [ebp - 0x2a], cx */
  W16((uint32_t)(ebp + 0xffffffd6u), (ecx & 0xffffu));
/* 8deff7: mov byte ptr [ebp - 0x28], bl */
  W8((uint32_t)(ebp + 0xffffffd8u), (ebx & 0xffu));
/* 8deffa: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8deffd: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* 8df000: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8df001: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 8df008: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8df009: mov dword ptr [0xce9ec4], eax */
  W32((uint32_t)(0xce9ec4u), eax);
/* 8df00e: mov eax, dword ptr [eax + 0x44] */
  eax = R32((uint32_t)(eax + 0x44u));
/* 8df011: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8df012: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8df013: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8df014: call 0x985990 */
  esp -= 4; W32(esp, 0x8df019u); SPILL(); f_985990(); if (g_unwind) return; RELOAD();
/* 8df019: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8df01c: mov dl, byte ptr [ebp + 8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x8u))) & 0xffu);
/* 8df01f: mov byte ptr [ecx + 0x38], dl */
  W8((uint32_t)(ecx + 0x38u), (edx & 0xffu));
/* 8df022: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 8df027: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8df029: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8df02b: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8df02e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8df02f: mov dword ptr [0xce9ec4], ebx */
  W32((uint32_t)(0xce9ec4u), ebx);
/* 8df035: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8df038u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8df038: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8df03b: or dword ptr [eax + 0x7c], 0x80 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x7cu))); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x7cu), r);
  }
/* 8df042: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8df045: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8df046: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8df047: mov eax, 1 */
  eax = 0x1u;
/* 8df04c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8df053: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8df054: mov esp, ebp */
  esp = ebp;
/* 8df056: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8df057: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8df05a(void) {
  LOAD_REGS();
L_8df05a: /* 8df05a: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8df05d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8df062: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8df065: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8df066: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8df069: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8df06eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8df06e(); return;
}

void f_8df06e(void) {
  LOAD_REGS();
L_8df06e: /* 8df06e: push 0xa1d70c */
  { uint32_t v = 0xa1d70cu; esp -= 4; W32(esp, v); }
/* 8df073: push 0xaed704 */
  { uint32_t v = 0xaed704u; esp -= 4; W32(esp, v); }
/* 8df078: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8df07eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8df07e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8df081: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8df083: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8df085: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8df08au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8df08a: guest_badaddr(0x8df08a); return;
}

void f_8df120(void) {
  LOAD_REGS();
L_8df120: /* 8df120: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8df121: mov ebp, esp */
  ebp = esp;
/* 8df123: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8df125: push 0x9d8716 */
  { uint32_t v = 0x9d8716u; esp -= 4; W32(esp, v); }
/* 8df12a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8df130: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8df131: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8df138: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8df13b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8df13c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8df13d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8df13e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8df141: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8df144: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x8df149u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 8df149: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8df14c: mov dword ptr [eax], 0x9f4508 */
  W32((uint32_t)(eax), 0x9f4508u);
/* 8df152: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8df155: mov dword ptr [ecx], 0x9f45c0 */
  W32((uint32_t)(ecx), 0x9f45c0u);
/* 8df15b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8df15e: mov dword ptr [edx], 0xa05a98 */
  W32((uint32_t)(edx), 0xa05a98u);
/* 8df164: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8df167: xor ebx, ebx */
  ebx = 0;
/* 8df169: add ecx, 0xac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8df16f: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8df172: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8df178u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8df178: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 8df17d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8df17f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8df181: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 8df186: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8df188: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8df18c: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8df18eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8df18e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8df190: je 0x8df19f */
  if (zf) goto L_8df19f;
L_8df192: /* 8df192: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8df195: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8df196: mov ecx, eax */
  ecx = eax;
/* 8df198: call 0x6c2f36 */
  esp -= 4; W32(esp, 0x8df19du); SPILL(); f_6c2f36(); if (g_unwind) return; RELOAD();
/* 8df19d: jmp 0x8df1a1 */
  goto L_8df1a1;
L_8df19f: /* 8df19f: xor eax, eax */
  eax = 0;
L_8df1a1: /* 8df1a1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8df1a4: mov dword ptr [edx + 0xbc], eax */
  W32((uint32_t)(edx + 0xbcu), eax);
/* 8df1aa: mov eax, dword ptr [0xcfa40c] */
  eax = R32((uint32_t)(0xcfa40cu));
/* 8df1af: test byte ptr [eax], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8df1b2: jne 0x8df207 */
  if (!zf) goto L_8df207;
L_8df1b4: /* 8df1b4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8df1b7: mov byte ptr [ecx + 0x38], bl */
  W8((uint32_t)(ecx + 0x38u), (ebx & 0xffu));
/* 8df1ba: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8df1bd: mov dword ptr [edx + 0x50], ebx */
  W32((uint32_t)(edx + 0x50u), ebx);
/* 8df1c0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8df1c3: mov byte ptr [eax + 0x3b], bl */
  W8((uint32_t)(eax + 0x3bu), (ebx & 0xffu));
/* 8df1c6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8df1c9: mov byte ptr [ecx + 0x3c], bl */
  W8((uint32_t)(ecx + 0x3cu), (ebx & 0xffu));
/* 8df1cc: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8df1cf: mov dword ptr [edx + 0x40], ebx */
  W32((uint32_t)(edx + 0x40u), ebx);
/* 8df1d2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8df1d5: mov dword ptr [eax + 0x44], ebx */
  W32((uint32_t)(eax + 0x44u), ebx);
/* 8df1d8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8df1db: mov al, 0x40 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
/* 8df1dd: mov byte ptr [ebp - 0x18], al */
  W8((uint32_t)(ebp + 0xffffffe8u), (eax & 0xffu));
/* 8df1e0: mov byte ptr [ebp - 0x16], al */
  W8((uint32_t)(ebp + 0xffffffeau), (eax & 0xffu));
/* 8df1e3: mov al, 0xff */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 8df1e5: mov byte ptr [ebp - 0x17], 0x80 */
  W8((uint32_t)(ebp + 0xffffffe9u), 0x80u);
/* 8df1e9: mov byte ptr [ebp - 0x15], bl */
  W8((uint32_t)(ebp + 0xffffffebu), (ebx & 0xffu));
/* 8df1ec: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8df1ef: mov dword ptr [ecx + 0x5c], edx */
  W32((uint32_t)(ecx + 0x5cu), edx);
/* 8df1f2: mov byte ptr [ebp - 0x18], al */
  W8((uint32_t)(ebp + 0xffffffe8u), (eax & 0xffu));
/* 8df1f5: mov byte ptr [ebp - 0x17], al */
  W8((uint32_t)(ebp + 0xffffffe9u), (eax & 0xffu));
/* 8df1f8: mov byte ptr [ebp - 0x16], al */
  W8((uint32_t)(ebp + 0xffffffeau), (eax & 0xffu));
/* 8df1fb: mov byte ptr [ebp - 0x15], al */
  W8((uint32_t)(ebp + 0xffffffebu), (eax & 0xffu));
/* 8df1fe: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8df201: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8df204: mov dword ptr [eax + 0x60], ecx */
  W32((uint32_t)(eax + 0x60u), ecx);
L_8df207: /* 8df207: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8df209: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8df20c: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8df20f: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8df212: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8df215: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8df217: jge 0x8df21f */
  if ((sf == of)) goto L_8df21f;
L_8df219: /* 8df219: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8df21f: /* 8df21f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8df222: fmul qword ptr [0xa0c228] */
  ST0 = ST0 * (F64((uint32_t)(0xa0c228u)));
/* 8df228: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8df22a: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8df22d: jge 0x8df235 */
  if ((sf == of)) goto L_8df235;
L_8df22f: /* 8df22f: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8df235: /* 8df235: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 8df23b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8df23d: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8df240: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8df241: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8df243: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8df246: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8df247: fadd qword ptr [0xa0c218] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c218u)));
/* 8df24d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8df24e: fstp qword ptr [edx + 0x64] */
  WF64((uint32_t)(edx + 0x64u), ST0); FPOP();
/* 8df251: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8df254: mov dword ptr [eax + 0x78], 0x3f800000 */
  W32((uint32_t)(eax + 0x78u), 0x3f800000u);
/* 8df25b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8df25e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8df265: mov esp, ebp */
  esp = ebp;
/* 8df267: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8df268: ret  */
  esp += 4; SPILL(); return;
}

void f_8df269(void) {
  LOAD_REGS();
L_8df269: /* 8df269: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8df26c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8df271: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 8df274: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8df275: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8df278: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8df27du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8df27d(); return;
}

void f_8df27d(void) {
  LOAD_REGS();
L_8df27d: /* 8df27d: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 8df283: push 0xa1d73c */
  { uint32_t v = 0xa1d73cu; esp -= 4; W32(esp, v); }
/* 8df288: push 0xaed4d0 */
  { uint32_t v = 0xaed4d0u; esp -= 4; W32(esp, v); }
/* 8df28d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8df28fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8df28f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8df292: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8df295: xor ebx, ebx */
  ebx = 0;
/* 8df297: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8df298: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8df29eu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8df29e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8df29f: push 0xaed4d8 */
  { uint32_t v = 0xaed4d8u; esp -= 4; W32(esp, v); }
/* 8df2a4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8df2a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8df2a6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8df2a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8df2aa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8df2ab: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8df2b0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8df2b0: guest_badaddr(0x8df2b0); return;
}

void f_8df330(void) {
  LOAD_REGS();
L_8df330: /* 8df330: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8df331: mov ebp, esp */
  ebp = esp;
/* 8df333: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8df335: push 0x9d8738 */
  { uint32_t v = 0x9d8738u; esp -= 4; W32(esp, v); }
/* 8df33a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8df340: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8df341: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8df348: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8df34b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8df34c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8df34f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8df350: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8df351: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8df354: mov edi, ecx */
  edi = ecx;
/* 8df356: xor esi, esi */
  esi = 0;
/* 8df358: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8df359: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8df35c: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8df35f: call 0x6c4e62 */
  esp -= 4; W32(esp, 0x8df364u); SPILL(); f_6c4e62(); if (g_unwind) return; RELOAD();
/* 8df364: mov ecx, ebx */
  ecx = ebx;
/* 8df366: call dword ptr [0xcfa404] */
  esp -= 4; W32(esp, 0x8df36cu); SPILL(); f_4e423c(); if (g_unwind) return; /* Core!?IsSaving@FArchive@@QAEHXZ */ RELOAD();
/* 8df36c: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8df36e: jne 0x8df37c */
  if (!zf) goto L_8df37c;
L_8df370: /* 8df370: mov ecx, ebx */
  ecx = ebx;
/* 8df372: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8df378u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8df378: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8df37a: je 0x8df3a4 */
  if (zf) goto L_8df3a4;
L_8df37c: /* 8df37c: test byte ptr [edi + 0x7c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x7cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8df380: je 0x8df3a4 */
  if (zf) goto L_8df3a4;
L_8df382: /* 8df382: cmp esi, dword ptr [edi + 0xb0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xb0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8df388: jge 0x8df3a4 */
  if ((sf == of)) goto L_8df3a4;
L_8df38a: /* 8df38a: mov ecx, dword ptr [edi + 0xac] */
  ecx = R32((uint32_t)(edi + 0xacu));
/* 8df390: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 8df393: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8df395: lea ecx, [ecx + eax*8 + 0x1c] */
  ecx = (uint32_t)(ecx + eax*8 + 0x1cu);
/* 8df399: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8df39b: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8df3a1u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8df3a1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8df3a2: jmp 0x8df382 */
  goto L_8df382;
L_8df3a4: /* 8df3a4: mov ecx, ebx */
  ecx = ebx;
/* 8df3a6: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8df3acu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8df3ac: cmp eax, 0x54 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8df3af: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 8df3b2: jge 0x8df407 */
  if ((sf == of)) goto L_8df407;
L_8df3b4: /* 8df3b4: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8df3b7: je 0x8df424 */
  if (zf) goto L_8df424;
L_8df3b9: /* 8df3b9: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8df3bc: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8df3c2u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8df3c2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8df3c3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8df3c6: mov edx, edi */
  edx = edi;
/* 8df3c8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8df3cc: call 0x8dd470 */
  esp -= 4; W32(esp, 0x8df3d1u); SPILL(); f_8dd470(); if (g_unwind) return; RELOAD();
/* 8df3d1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8df3d4: lea ecx, [edi + 0xac] */
  ecx = (uint32_t)(edi + 0xacu);
/* 8df3da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8df3db: mov edx, edi */
  edx = edi;
/* 8df3dd: call 0x8dd470 */
  esp -= 4; W32(esp, 0x8df3e2u); SPILL(); f_8dd470(); if (g_unwind) return; RELOAD();
/* 8df3e2: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 8df3e5: mov dl, byte ptr [edi + 0xb8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xb8u))) & 0xffu);
/* 8df3eb: and eax, 0xfffffeff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffeffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8df3f0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8df3f3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8df3f6: mov byte ptr [edi + 0x38], dl */
  W8((uint32_t)(edi + 0x38u), (edx & 0xffu));
/* 8df3f9: mov dword ptr [edi + 0x7c], eax */
  W32((uint32_t)(edi + 0x7cu), eax);
/* 8df3fc: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8df400: call 0x6c7a7c */
  esp -= 4; W32(esp, 0x8df405u); SPILL(); f_6c7a7c(); if (g_unwind) return; RELOAD();
/* 8df405: jmp 0x8df435 */
  goto L_8df435;
L_8df407: /* 8df407: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8df40a: je 0x8df424 */
  if (zf) goto L_8df424;
L_8df40c: /* 8df40c: push 0x119 */
  { uint32_t v = 0x119u; esp -= 4; W32(esp, v); }
/* 8df411: push 0xaed4ec */
  { uint32_t v = 0xaed4ecu; esp -= 4; W32(esp, v); }
/* 8df416: push 0xaed4f8 */
  { uint32_t v = 0xaed4f8u; esp -= 4; W32(esp, v); }
/* 8df41b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8df421u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8df421: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8df424: /* 8df424: lea ecx, [edi + 0xac] */
  ecx = (uint32_t)(edi + 0xacu);
/* 8df42a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8df42b: mov edx, edi */
  edx = edi;
/* 8df42d: call 0x8dd470 */
  esp -= 4; W32(esp, 0x8df432u); SPILL(); f_8dd470(); if (g_unwind) return; RELOAD();
/* 8df432: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8df435: /* 8df435: mov ecx, ebx */
  ecx = ebx;
/* 8df437: call dword ptr [0xcfa404] */
  esp -= 4; W32(esp, 0x8df43du); SPILL(); f_4e423c(); if (g_unwind) return; /* Core!?IsSaving@FArchive@@QAEHXZ */ RELOAD();
/* 8df43d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8df43f: jne 0x8df451 */
  if (!zf) goto L_8df451;
L_8df441: /* 8df441: mov ecx, ebx */
  ecx = ebx;
/* 8df443: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8df449u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8df449: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8df44b: je 0x8df4e0 */
  if (zf) goto L_8df4e0;
L_8df451: /* 8df451: test byte ptr [edi + 0x7c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x7cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8df455: je 0x8df4e0 */
  if (zf) goto L_8df4e0;
L_8df45b: /* 8df45b: xor ebx, ebx */
  ebx = 0;
/* 8df45d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8df460: /* 8df460: cmp ebx, dword ptr [edi + 0xb0] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xb0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8df466: jge 0x8df4e0 */
  if ((sf == of)) goto L_8df4e0;
L_8df468: /* 8df468: lea eax, [edi + 0xac] */
  eax = (uint32_t)(edi + 0xacu);
/* 8df46e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8df470: lea esi, [ebx + ebx*4] */
  esi = (uint32_t)(ebx + ebx*4);
/* 8df473: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8df476: mov edi, dword ptr [eax + esi + 8] */
  edi = R32((uint32_t)(eax + esi + 0x8u));
/* 8df47a: imul edi, dword ptr [eax + esi + 4] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(eax + esi + 0x4u)));
  edi = (uint32_t)r;
  }
/* 8df47f: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8df481: add eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8df484: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8df485: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8df487: mov ecx, eax */
  ecx = eax;
/* 8df489: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8df48fu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8df48f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8df492: mov ecx, dword ptr [eax + 0xac] */
  ecx = R32((uint32_t)(eax + 0xacu));
/* 8df498: add eax, 0xac */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8df49d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8df49e: lea ecx, [esi + ecx + 0x1c] */
  ecx = (uint32_t)(esi + ecx + 0x1cu);
/* 8df4a2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8df4a4: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8df4aau); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8df4aa: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8df4ad: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8df4ae: jmp 0x8df460 */
  goto L_8df460;
L_8df4e0: /* 8df4e0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8df4e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8df4e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8df4e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8df4ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8df4ed: mov esp, ebp */
  esp = ebp;
/* 8df4ef: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8df4f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8df4b0(void) {
  LOAD_REGS();
L_8df4b0: /* 8df4b0: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8df4b3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8df4b8: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8df4bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8df4bc: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8df4bf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8df4c4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8df4c4(); return;
}

void f_8df4c4(void) {
  LOAD_REGS();
L_8df4c4: /* 8df4c4: push 0xa1d76c */
  { uint32_t v = 0xa1d76cu; esp -= 4; W32(esp, v); }
/* 8df4c9: push 0xaed508 */
  { uint32_t v = 0xaed508u; esp -= 4; W32(esp, v); }
/* 8df4ce: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8df4d4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8df4d4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8df4d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8df4d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8df4db: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8df4e0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8df4e0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8df4e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8df4e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8df4e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8df4ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8df4ed: mov esp, ebp */
  esp = ebp;
/* 8df4ef: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8df4f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8df580(void) {
  LOAD_REGS();
L_8df580: /* 8df580: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8df581: mov ebp, esp */
  ebp = esp;
/* 8df583: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8df585: push 0x9d8763 */
  { uint32_t v = 0x9d8763u; esp -= 4; W32(esp, v); }
/* 8df58a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8df590: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8df591: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8df598: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8df59b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8df59c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8df59d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8df59e: mov esi, ecx */
  esi = ecx;
/* 8df5a0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8df5a3: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 8df5a6: call 0x6c7e19 */
  esp -= 4; W32(esp, 0x8df5abu); SPILL(); f_6c7e19(); if (g_unwind) return; RELOAD();
/* 8df5ab: mov dword ptr [esi], 0xa05b88 */
  W32((uint32_t)(esi), 0xa05b88u);
/* 8df5b1: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 8df5b6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8df5b8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8df5ba: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 8df5bf: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8df5c6: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8df5c8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8df5cc: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8df5ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8df5ce: mov ecx, eax */
  ecx = eax;
/* 8df5d0: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8df5d3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8df5d5: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8df5d9: je 0x8df5e3 */
  if (zf) goto L_8df5e3;
L_8df5db: /* 8df5db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8df5dc: call 0x6ccf9a */
  esp -= 4; W32(esp, 0x8df5e1u); SPILL(); f_6ccf9a(); if (g_unwind) return; RELOAD();
/* 8df5e1: jmp 0x8df5e5 */
  goto L_8df5e5;
L_8df5e3: /* 8df5e3: xor eax, eax */
  eax = 0;
L_8df5e5: /* 8df5e5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8df5e8: mov dword ptr [esi + 0xe0], eax */
  W32((uint32_t)(esi + 0xe0u), eax);
/* 8df5ee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8df5ef: mov eax, esi */
  eax = esi;
/* 8df5f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8df5f2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8df5f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8df5fa: mov esp, ebp */
  esp = ebp;
/* 8df5fc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8df5fd: ret  */
  esp += 4; SPILL(); return;
}

void f_8df5fe(void) {
  LOAD_REGS();
L_8df5fe: /* 8df5fe: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8df601: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8df606: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8df609: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8df60a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8df60d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8df612u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8df612(); return;
}

void f_8df612(void) {
  LOAD_REGS();
L_8df612: /* 8df612: push 0xa1d79c */
  { uint32_t v = 0xa1d79cu; esp -= 4; W32(esp, v); }
/* 8df617: push 0xaed8e8 */
  { uint32_t v = 0xaed8e8u; esp -= 4; W32(esp, v); }
/* 8df61c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8df622u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8df622: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8df625: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8df627: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8df629: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8df62eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8df62e: guest_badaddr(0x8df62e); return;
}

void f_8df660(void) {
  LOAD_REGS();
L_8df660: /* 8df660: xor eax, eax */
  eax = 0;
/* 8df662: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8df680(void) {
  LOAD_REGS();
L_8df680: /* 8df680: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8df681: mov ebp, esp */
  ebp = esp;
/* 8df683: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8df685: push 0x9d8798 */
  { uint32_t v = 0x9d8798u; esp -= 4; W32(esp, v); }
/* 8df68a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8df690: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8df691: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8df698: sub esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8df69b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8df69c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8df69d: xor ebx, ebx */
  ebx = 0;
/* 8df69f: mov esi, ecx */
  esi = ecx;
/* 8df6a1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8df6a4: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8df6a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8df6a7: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8df6aa: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8df6ad: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8df6b0: je 0x8df6dc */
  if (zf) goto L_8df6dc;
L_8df6b2: /* 8df6b2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8df6b4: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 8df6b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8df6b8: call dword ptr [eax + 0xb8] */
  { uint32_t t = R32((uint32_t)(eax + 0xb8u)); esp -= 4; W32(esp, 0x8df6beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8df6be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8df6bf: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 8df6c2: mov ebx, 1 */
  ebx = 0x1u;
/* 8df6c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8df6c8: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 8df6cb: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8df6cf: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8df6d2: call dword ptr [0xcfa638] */
  esp -= 4; W32(esp, 0x8df6d8u); SPILL(); f_4e2806(); if (g_unwind) return; /* Core!?TransformBy@FBox@@QBE?AV1@ABVFMatrix@@@Z */ RELOAD();
/* 8df6d8: mov esi, eax */
  esi = eax;
/* 8df6da: jmp 0x8df6df */
  goto L_8df6df;
L_8df6dc: /* 8df6dc: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_8df6df: /* 8df6df: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8df6e2: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8df6e5: mov ecx, 7 */
  ecx = 0x7u;
/* 8df6ea: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8df6ec: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8df6f3: je 0x8df6fe */
  if (zf) goto L_8df6fe;
L_8df6f5: /* 8df6f5: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8df6f8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8df6feu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_8df6fe: /* 8df6fe: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8df701: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8df704: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8df705: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8df706: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8df70d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8df70e: mov esp, ebp */
  esp = ebp;
/* 8df710: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8df711: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8df714(void) {
  LOAD_REGS();
L_8df714: /* 8df714: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8df717: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8df71c: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 8df71f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8df720: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8df723: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8df728u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8df728(); return;
}

void f_8df728(void) {
  LOAD_REGS();
L_8df728: /* 8df728: push 0xa1d7d0 */
  { uint32_t v = 0xa1d7d0u; esp -= 4; W32(esp, v); }
/* 8df72d: push 0xaed9ec */
  { uint32_t v = 0xaed9ecu; esp -= 4; W32(esp, v); }
/* 8df732: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8df738u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8df738: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8df73b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8df73d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8df73f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8df744u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8df744: guest_badaddr(0x8df744); return;
}

void f_8df790(void) {
  LOAD_REGS();
L_8df790: /* 8df790: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8df794: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8df795: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8df796: lea esi, [ecx + 0x28] */
  esi = (uint32_t)(ecx + 0x28u);
/* 8df799: mov ecx, 7 */
  ecx = 0x7u;
/* 8df79e: mov edi, eax */
  edi = eax;
/* 8df7a0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8df7a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8df7a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8df7a4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8df7c0(void) {
  LOAD_REGS();
L_8df7c0: /* 8df7c0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8df7c4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8df7c6: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8df7c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8df7ca: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 8df7ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8df7cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8df7d0: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 8df7d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8df7d5: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x8df7d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8df7d8: mov ecx, eax */
  ecx = eax;
/* 8df7da: call dword ptr [0xcfa348] */
  esp -= 4; W32(esp, 0x8df7e0u); SPILL(); f_4e1703(); if (g_unwind) return; /* Core!?GetExtent@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 8df7e0: mov eax, esi */
  eax = esi;
/* 8df7e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8df7e3: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8df7e6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8df800(void) {
  LOAD_REGS();
L_8df800: /* 8df800: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8df804: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8df806: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8df809: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8df80a: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 8df80e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8df80f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8df810: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 8df814: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8df815: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x8df818u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8df818: mov ecx, eax */
  ecx = eax;
/* 8df81a: call dword ptr [0xcfa34c] */
  esp -= 4; W32(esp, 0x8df820u); SPILL(); f_4e3139(); if (g_unwind) return; /* Core!?GetCenter@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 8df820: mov eax, esi */
  eax = esi;
/* 8df822: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8df823: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8df826: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8df840(void) {
  LOAD_REGS();
L_8df840: /* 8df840: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8df842: push 0x9d87bc */
  { uint32_t v = 0x9d87bcu; esp -= 4; W32(esp, v); }
/* 8df847: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8df84d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8df84e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8df855: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8df856: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8df857: mov esi, ecx */
  esi = ecx;
/* 8df859: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8df85d: lea ecx, [esi + 0x90] */
  ecx = (uint32_t)(esi + 0x90u);
/* 8df863: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 8df86b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8df871u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8df871: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 8df874: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 8df87c: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8df882u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8df882: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8df886: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8df887: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8df88e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8df891: ret  */
  esp += 4; SPILL(); return;
}

void f_8df8c0(void) {
  LOAD_REGS();
L_8df8c0: /* 8df8c0: jmp 0x6cb06e */
  SPILL(); f_6cb06e(); return;
}

void f_8df8e0(void) {
  LOAD_REGS();
L_8df8e0: /* 8df8e0: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8df8e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8df8e4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8df8e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8df8e6: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 8df8ea: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8df8ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8df8ee: je 0x8dfa33 */
  if (zf) goto L_8dfa33;
L_8df8f4: /* 8df8f4: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 8df8f8: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 8df8fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8df900: /* 8df900: mov edx, dword ptr [0xceb688] */
  edx = R32((uint32_t)(0xceb688u));
/* 8df906: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 8df90a: imul esi, esi, 0x78 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x78u);
  esi = (uint32_t)r;
  }
/* 8df90d: fmul dword ptr [esi + edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + edx + 0x8u)));
/* 8df911: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 8df915: fmul dword ptr [esi + edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + edx + 0x4u)));
/* 8df919: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8df91b: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 8df91f: fmul dword ptr [esi + edx] */
  ST0 = ST0 * (F32((uint32_t)(esi + edx)));
/* 8df922: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8df924: mov bl, byte ptr [esi + 0x57] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x57u))) & 0xffu);
/* 8df927: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8df929: xor ecx, ecx */
  ecx = 0;
/* 8df92b: and bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8df92e: fsub dword ptr [esi + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xcu)));
/* 8df931: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8df935: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8df939: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 8df93d: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 8df940: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8df942: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 8df946: setge cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* 8df949: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 8df94c: xor eax, eax */
  eax = 0;
/* 8df94e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8df950: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8df954: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8df956: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 8df95a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8df95c: fsub dword ptr [esi + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xcu)));
/* 8df95f: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8df963: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8df967: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8df969: setge al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* 8df96c: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8df96e: je 0x8dfa16 */
  if (zf) goto L_8dfa16;
L_8df974: /* 8df974: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8df978: mov dl, byte ptr [esp + 0x44] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x44u))) & 0xffu);
/* 8df97c: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 8df980: xor ecx, ecx */
  ecx = 0;
/* 8df982: mov cl, al */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 8df984: xor cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8df986: fdivr dword ptr [esp + 0x28] */
  ST0 = (F32((uint32_t)(esp + 0x28u))) / ST0;
/* 8df98a: and cl, bl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8df98c: xor cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8df98e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8df98f: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 8df993: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8df996: mov edx, esp */
  edx = esp;
/* 8df998: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 8df99a: mov dword ptr [edx + 4], ebp */
  W32((uint32_t)(edx + 0x4u), ebp);
/* 8df99d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8df9a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8df9a3: mov edx, esp */
  edx = esp;
/* 8df9a5: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 8df9a9: fsub dword ptr [esp + 0x54] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x54u)));
/* 8df9ad: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8df9af: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 8df9b3: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8df9b7: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 8df9bb: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 8df9bf: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 8df9c1: fsub dword ptr [esp + 0x58] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x58u)));
/* 8df9c5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8df9c7: fadd dword ptr [esp + 0x58] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x58u)));
/* 8df9cb: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8df9cf: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 8df9d3: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 8df9d7: mov dword ptr [edx + 4], ebp */
  W32((uint32_t)(edx + 0x4u), ebp);
/* 8df9da: fsub dword ptr [esp + 0x5c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x5cu)));
/* 8df9de: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8df9e0: fadd dword ptr [esp + 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x5cu)));
/* 8df9e4: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 8df9e8: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 8df9ec: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8df9ef: mov edx, dword ptr [esi + eax*4 + 0x20] */
  edx = R32((uint32_t)(esi + eax*4 + 0x20u));
/* 8df9f3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8df9f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8df9f6: call 0x8df8e0 */
  esp -= 4; W32(esp, 0x8df9fbu); SPILL(); f_8df8e0(); if (g_unwind) return; RELOAD();
/* 8df9fb: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8df9fe: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8dfa00: je 0x8dfa3f */
  if (zf) goto L_8dfa3f;
L_8dfa02: /* 8dfa02: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 8dfa06: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8dfa0a: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 8dfa0e: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 8dfa12: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
L_8dfa16: /* 8dfa16: mov al, byte ptr [esp + 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x44u))) & 0xffu);
/* 8dfa1a: mov esi, dword ptr [esi + ecx*4 + 0x20] */
  esi = R32((uint32_t)(esi + ecx*4 + 0x20u));
/* 8dfa1e: mov dl, cl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 8dfa20: xor dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8dfa22: and dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8dfa24: xor dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a ^ b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8dfa26: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8dfa29: mov byte ptr [esp + 0x44], dl */
  W8((uint32_t)(esp + 0x44u), (edx & 0xffu));
/* 8dfa2d: jne 0x8df900 */
  if (!zf) goto L_8df900;
L_8dfa33: /* 8dfa33: mov al, byte ptr [esp + 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x44u))) & 0xffu);
/* 8dfa37: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dfa38: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dfa39: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dfa3a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dfa3b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dfa3e: ret  */
  esp += 4; SPILL(); return;
L_8dfa3f: /* 8dfa3f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dfa40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dfa41: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dfa42: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 8dfa44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dfa45: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dfa48: ret  */
  esp += 4; SPILL(); return;
}

void f_8dfab0(void) {
  LOAD_REGS();
L_8dfab0: /* 8dfab0: jmp 0x6cb06e */
  SPILL(); f_6cb06e(); return;
}

void f_8dfad0(void) {
  LOAD_REGS();
L_8dfad0: /* 8dfad0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8dfad2: push 0x9d87f1 */
  { uint32_t v = 0x9d87f1u; esp -= 4; W32(esp, v); }
/* 8dfad7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8dfadd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dfade: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8dfae5: sub esp, 0x88 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8dfaeb: mov eax, dword ptr [esp + 0x98] */
  eax = R32((uint32_t)(esp + 0x98u));
/* 8dfaf2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dfaf3: mov ebx, ecx */
  ebx = ecx;
/* 8dfaf5: mov ecx, dword ptr [esp + 0xa0] */
  ecx = R32((uint32_t)(esp + 0xa0u));
/* 8dfafc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8dfafd: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 8dfb00: mov ecx, dword ptr [esp + 0xa8] */
  ecx = R32((uint32_t)(esp + 0xa8u));
/* 8dfb07: xor edx, edx */
  edx = 0;
/* 8dfb09: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dfb0b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dfb0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dfb0d: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 8dfb11: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 8dfb15: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 8dfb17: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 8dfb1a: je 0x8dfb30 */
  if (zf) goto L_8dfb30;
L_8dfb1c: /* 8dfb1c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8dfb1e: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 8dfb22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dfb23: call dword ptr [edx + 0xb8] */
  { uint32_t t = R32((uint32_t)(edx + 0xb8u)); esp -= 4; W32(esp, 0x8dfb29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dfb29: mov edx, 1 */
  edx = 0x1u;
/* 8dfb2e: jmp 0x8dfb35 */
  goto L_8dfb35;
L_8dfb30: /* 8dfb30: mov eax, dword ptr [0xcfa350] */
  eax = R32((uint32_t)(0xcfa350u));
L_8dfb35: /* 8dfb35: lea ebp, [ebx + 0xc] */
  ebp = (uint32_t)(ebx + 0xcu);
/* 8dfb38: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8dfb3d: mov esi, eax */
  esi = eax;
/* 8dfb3f: mov edi, ebp */
  edi = ebp;
/* 8dfb41: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8dfb43: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8dfb46: mov dword ptr [esp + 0xa0], 0 */
  W32((uint32_t)(esp + 0xa0u), 0x0u);
/* 8dfb51: je 0x8dfb5d */
  if (zf) goto L_8dfb5d;
L_8dfb53: /* 8dfb53: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 8dfb57: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8dfb5du); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_8dfb5d: /* 8dfb5d: mov edx, dword ptr [esp + 0xb4] */
  edx = R32((uint32_t)(esp + 0xb4u));
/* 8dfb64: mov eax, dword ptr [esp + 0xb8] */
  eax = R32((uint32_t)(esp + 0xb8u));
/* 8dfb6b: lea ecx, [ebx + 0x4c] */
  ecx = (uint32_t)(ebx + 0x4cu);
/* 8dfb6e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8dfb70: mov edx, dword ptr [esp + 0xbc] */
  edx = R32((uint32_t)(esp + 0xbcu));
/* 8dfb77: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8dfb7a: mov eax, dword ptr [esp + 0xc0] */
  eax = R32((uint32_t)(esp + 0xc0u));
/* 8dfb81: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8dfb84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dfb86: lea ecx, [ebx + 0x6c] */
  ecx = (uint32_t)(ebx + 0x6cu);
/* 8dfb89: mov dword ptr [ebx + 0x58], eax */
  W32((uint32_t)(ebx + 0x58u), eax);
/* 8dfb8c: call dword ptr [0xcfa260] */
  esp -= 4; W32(esp, 0x8dfb92u); SPILL(); f_4e2ffe(); if (g_unwind) return; /* Core!??0FBox@@QAE@H@Z */ RELOAD();
/* 8dfb92: mov byte ptr [esp + 0xa0], 1 */
  W8((uint32_t)(esp + 0xa0u), 0x1u);
/* 8dfb9a: lea esi, [ebx + 0xd0] */
  esi = (uint32_t)(ebx + 0xd0u);
/* 8dfba0: mov edi, 0x40 */
  edi = 0x40u;
L_8dfba5: /* 8dfba5: mov ecx, esi */
  ecx = esi;
/* 8dfba7: call dword ptr [0xcfa36c] */
  esp -= 4; W32(esp, 0x8dfbadu); SPILL(); f_4e159b(); if (g_unwind) return; /* Core!??0FPlane@@QAE@XZ */ RELOAD();
/* 8dfbad: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8dfbb0: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 8dfbb1: jne 0x8dfba5 */
  if (!zf) goto L_8dfba5;
L_8dfbb3: /* 8dfbb3: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 8dfbb7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dfbb8: mov ecx, ebp */
  ecx = ebp;
/* 8dfbba: call dword ptr [0xcfa590] */
  esp -= 4; W32(esp, 0x8dfbc0u); SPILL(); f_4e1e9c(); if (g_unwind) return; /* Core!?TransposeAdjoint@FMatrix@@QBE?AV1@XZ */ RELOAD();
/* 8dfbc0: mov esi, eax */
  esi = eax;
/* 8dfbc2: lea edi, [ebx + 0x90] */
  edi = (uint32_t)(ebx + 0x90u);
/* 8dfbc8: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8dfbcd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8dfbcf: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 8dfbd3: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8dfbd9u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8dfbd9: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 8dfbe0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dfbe1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dfbe2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dfbe3: mov eax, ebx */
  eax = ebx;
/* 8dfbe5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dfbe6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8dfbed: add esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dfbf3: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_8dfc50(void) {
  LOAD_REGS();
L_8dfc50: /* 8dfc50: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8dfc53: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dfc54: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 8dfc58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dfc59: mov esi, ecx */
  esi = ecx;
/* 8dfc5b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8dfc5e: mov ecx, dword ptr [ebx + 0x4c] */
  ecx = R32((uint32_t)(ebx + 0x4cu));
/* 8dfc61: mov edx, dword ptr [eax + 0xb4] */
  edx = R32((uint32_t)(eax + 0xb4u));
/* 8dfc67: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8dfc6a: mov ecx, eax */
  ecx = eax;
/* 8dfc6c: mov dword ptr [esi + 0x5d0], eax */
  W32((uint32_t)(esi + 0x5d0u), eax);
/* 8dfc72: mov dword ptr [esi + 0x5c], 0 */
  W32((uint32_t)(esi + 0x5cu), 0x0u);
/* 8dfc79: cmp dword ptr [ecx], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8dfc7c: je 0x8dfdea */
  if (zf) goto L_8dfdea;
L_8dfc82: /* 8dfc82: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_8dfc83: /* 8dfc83: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 8dfc86: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8dfc89: jae 0x8dfde9 */
  if (!cf) goto L_8dfde9;
L_8dfc8f: /* 8dfc8f: mov edx, dword ptr [esi + 0x5d0] */
  edx = R32((uint32_t)(esi + 0x5d0u));
/* 8dfc95: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8dfc98: lea edi, [eax + 0xd] */
  edi = (uint32_t)(eax + 0xdu);
/* 8dfc9b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 8dfc9e: mov edx, dword ptr [ecx + 0x58] */
  edx = R32((uint32_t)(ecx + 0x58u));
/* 8dfca1: and eax, 0xbfffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbfffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8dfca6: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 8dfca9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dfcab: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8dfcad: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8dfcb0: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8dfcb2: mov edx, edi */
  edx = edi;
/* 8dfcb4: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8dfcb6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8dfcb9: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8dfcbc: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8dfcbf: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8dfcc2: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8dfcc5: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 8dfcc8: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 8dfccb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dfccd: je 0x8dfcff */
  if (zf) goto L_8dfcff;
L_8dfccf: /* 8dfccf: lea ecx, [esi + 0x90] */
  ecx = (uint32_t)(esi + 0x90u);
/* 8dfcd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dfcd6: lea edx, [esi + 0xc] */
  edx = (uint32_t)(esi + 0xcu);
/* 8dfcd9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dfcda: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 8dfcde: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dfcdf: mov ecx, edi */
  ecx = edi;
/* 8dfce1: call dword ptr [0xcfac64] */
  esp -= 4; W32(esp, 0x8dfce7u); SPILL(); f_4e2ea0(); if (g_unwind) return; /* Core!?TransformByUsingAdjointT@FPlane@@QBE?AV1@ABVFMatrix@@0@Z */ RELOAD();
/* 8dfce7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8dfce9: mov ecx, edi */
  ecx = edi;
/* 8dfceb: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8dfced: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8dfcf0: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8dfcf3: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8dfcf6: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8dfcf9: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8dfcfc: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
L_8dfcff: /* 8dfcff: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 8dfd02: mov edx, dword ptr [esi + 0x5d0] */
  edx = R32((uint32_t)(esi + 0x5d0u));
/* 8dfd08: test dword ptr [edx + ecx*4], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx*4))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dfd0f: je 0x8dfd36 */
  if (zf) goto L_8dfd36;
L_8dfd11: /* 8dfd11: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 8dfd15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dfd16: mov ecx, edi */
  ecx = edi;
/* 8dfd18: call dword ptr [0xcfa5d0] */
  esp -= 4; W32(esp, 0x8dfd1eu); SPILL(); f_4e1ba4(); if (g_unwind) return; /* Core!?Flip@FPlane@@QBE?AV1@XZ */ RELOAD();
/* 8dfd1e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8dfd20: mov ecx, edi */
  ecx = edi;
/* 8dfd22: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8dfd24: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8dfd27: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8dfd2a: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8dfd2d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8dfd30: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8dfd33: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
L_8dfd36: /* 8dfd36: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8dfd38: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8dfd3e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8dfd40: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8dfd43: jp 0x8dfd4c */
  if (pf) goto L_8dfd4c;
L_8dfd45: /* 8dfd45: mov edx, 1 */
  edx = 0x1u;
/* 8dfd4a: jmp 0x8dfd64 */
  goto L_8dfd64;
L_8dfd4c: /* 8dfd4c: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8dfd4e: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8dfd54: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8dfd56: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8dfd59: jne 0x8dfd62 */
  if (!zf) goto L_8dfd62;
L_8dfd5b: /* 8dfd5b: mov edx, 2 */
  edx = 0x2u;
/* 8dfd60: jmp 0x8dfd64 */
  goto L_8dfd64;
L_8dfd62: /* 8dfd62: xor edx, edx */
  edx = 0;
L_8dfd64: /* 8dfd64: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8dfd67: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8dfd6d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8dfd6f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8dfd72: jp 0x8dfd7b */
  if (pf) goto L_8dfd7b;
L_8dfd74: /* 8dfd74: mov ecx, 4 */
  ecx = 0x4u;
/* 8dfd79: jmp 0x8dfd94 */
  goto L_8dfd94;
L_8dfd7b: /* 8dfd7b: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8dfd7e: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8dfd84: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8dfd86: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8dfd89: jne 0x8dfd92 */
  if (!zf) goto L_8dfd92;
L_8dfd8b: /* 8dfd8b: mov ecx, 8 */
  ecx = 0x8u;
/* 8dfd90: jmp 0x8dfd94 */
  goto L_8dfd94;
L_8dfd92: /* 8dfd92: xor ecx, ecx */
  ecx = 0;
L_8dfd94: /* 8dfd94: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 8dfd97: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8dfd9d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8dfd9f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8dfda2: jp 0x8dfdab */
  if (pf) goto L_8dfdab;
L_8dfda4: /* 8dfda4: mov eax, 0x10 */
  eax = 0x10u;
/* 8dfda9: jmp 0x8dfdc4 */
  goto L_8dfdc4;
L_8dfdab: /* 8dfdab: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 8dfdae: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8dfdb4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8dfdb6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8dfdb9: jne 0x8dfdc2 */
  if (!zf) goto L_8dfdc2;
L_8dfdbb: /* 8dfdbb: mov eax, 0x20 */
  eax = 0x20u;
/* 8dfdc0: jmp 0x8dfdc4 */
  goto L_8dfdc4;
L_8dfdc2: /* 8dfdc2: xor eax, eax */
  eax = 0;
L_8dfdc4: /* 8dfdc4: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8dfdc6: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 8dfdc9: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8dfdcb: mov dword ptr [esi + ecx*4 + 0x4d0], eax */
  W32((uint32_t)(esi + ecx*4 + 0x4d0u), eax);
/* 8dfdd2: mov edx, dword ptr [esi + 0x5c] */
  edx = R32((uint32_t)(esi + 0x5cu));
/* 8dfdd5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8dfdd6: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* 8dfdd9: mov eax, dword ptr [esi + 0x5d0] */
  eax = R32((uint32_t)(esi + 0x5d0u));
/* 8dfddf: cmp dword ptr [eax + edx*4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8dfde3: jne 0x8dfc83 */
  if (!zf) goto L_8dfc83;
L_8dfde9: /* 8dfde9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_8dfdea: /* 8dfdea: mov eax, dword ptr [ebx + 0x4c] */
  eax = R32((uint32_t)(ebx + 0x4cu));
/* 8dfded: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 8dfdf0: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 8dfdf3: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8dfdf5: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 8dfdfb: lea eax, [eax + ecx*4 + 4] */
  eax = (uint32_t)(eax + ecx*4 + 0x4u);
/* 8dfdff: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8dfe01: mov dword ptr [esi + 0x6c], ecx */
  W32((uint32_t)(esi + 0x6cu), ecx);
/* 8dfe04: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8dfe07: mov dword ptr [esi + 0x70], edx */
  W32((uint32_t)(esi + 0x70u), edx);
/* 8dfe0a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8dfe0d: mov dword ptr [esi + 0x74], ecx */
  W32((uint32_t)(esi + 0x74u), ecx);
/* 8dfe10: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 8dfe13: mov dword ptr [esi + 0x78], edx */
  W32((uint32_t)(esi + 0x78u), edx);
/* 8dfe16: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 8dfe19: mov dword ptr [esi + 0x7c], ecx */
  W32((uint32_t)(esi + 0x7cu), ecx);
/* 8dfe1c: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 8dfe1f: mov dword ptr [esi + 0x80], edx */
  W32((uint32_t)(esi + 0x80u), edx);
/* 8dfe25: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dfe26: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dfe27: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dfe2a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8dfeb0(void) {
  LOAD_REGS();
L_8dfeb0: /* 8dfeb0: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8dfeb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dfeb5: mov esi, ecx */
  esi = ecx;
/* 8dfeb7: call 0x99c958 */
  esp -= 4; W32(esp, 0x8dfebcu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8dfebc: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 8dfec0: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 8dfec4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dfec5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8dfec8: mov eax, esp */
  eax = esp;
/* 8dfeca: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8dfecc: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 8dfed0: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8dfed3: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 8dfed7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8dfeda: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 8dfede: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8dfee2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dfee3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dfee4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dfee5: mov ecx, esi */
  ecx = esi;
/* 8dfee7: call 0x6c2eeb */
  esp -= 4; W32(esp, 0x8dfeecu); SPILL(); f_6c2eeb(); if (g_unwind) return; RELOAD();
/* 8dfeec: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8dfef0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8dfef4: lea edx, [esi + 0x5d4] */
  edx = (uint32_t)(esi + 0x5d4u);
/* 8dfefa: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8dfefc: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 8dff00: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8dff03: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8dff06: mov dword ptr [esi + 0x5e0], 0x47c35000 */
  W32((uint32_t)(esi + 0x5e0u), 0x47c35000u);
/* 8dff10: mov eax, esi */
  eax = esi;
/* 8dff12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dff13: ret 0x28 */
  esp += 44; SPILL(); return;
}

void f_8dff40(void) {
  LOAD_REGS();
L_8dff40: /* 8dff40: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8dff43: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 8dff47: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8dff49: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dff4a: fmul dword ptr [ecx + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4cu)));
/* 8dff4d: mov eax, 0x7fffffff */
  eax = 0x7fffffffu;
/* 8dff52: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8dff56: fld dword ptr [ecx + 0x50] */
  { double v = F32((uint32_t)(ecx + 0x50u)); FPUSH(v); }
/* 8dff59: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8dff5d: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8dff60: and esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8dff62: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 8dff66: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8dff6a: fld dword ptr [ecx + 0x54] */
  { double v = F32((uint32_t)(ecx + 0x54u)); FPUSH(v); }
/* 8dff6d: mov esi, dword ptr [esp + 4] */
  esi = R32((uint32_t)(esp + 0x4u));
/* 8dff71: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8dff74: and esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8dff76: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8dff7a: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8dff7e: and dword ptr [esp + 0x28], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esp + 0x28u), r);
  }
/* 8dff82: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8dff86: fadd dword ptr [esp + 4] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4u)));
/* 8dff8a: fadd dword ptr [esp + 8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x8u)));
/* 8dff8e: fld dword ptr [ecx + 0x5d8] */
  { double v = F32((uint32_t)(ecx + 0x5d8u)); FPUSH(v); }
/* 8dff94: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8dff97: fld dword ptr [ecx + 0x5dc] */
  { double v = F32((uint32_t)(ecx + 0x5dcu)); FPUSH(v); }
/* 8dff9d: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8dffa0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8dffa2: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8dffa4: fmul dword ptr [ecx + 0x5d4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x5d4u)));
/* 8dffaa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8dffac: fsub dword ptr [edx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0xcu)));
/* 8dffaf: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8dffb5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8dffb7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8dffba: jne 0x8e009a */
  if (!zf) goto L_8e009a;
L_8dffc0: /* 8dffc0: fcom dword ptr [ecx + 0x5e0] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x5e0u)));
/* 8dffc6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8dffc8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8dffcb: jp 0x8e009a */
  if (pf) goto L_8e009a;
L_8dffd1: /* 8dffd1: fcom st(1) */
  fpu_com(ST0, STI(1));
/* 8dffd3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8dffd5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8dffd8: jp 0x8e00b1 */
  if (pf) goto L_8e00b1;
L_8dffde: /* 8dffde: fst dword ptr [ecx + 0x5e0] */
  WF32((uint32_t)(ecx + 0x5e0u), ST0);
/* 8dffe4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8dffe6: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8dffe8: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dffeb: fmul dword ptr [0xa09e14] */
  ST0 = ST0 * (F32((uint32_t)(0xa09e14u)));
/* 8dfff1: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 8dfff4: fmul dword ptr [0xa09e14] */
  ST0 = ST0 * (F32((uint32_t)(0xa09e14u)));
/* 8dfffa: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 8dfffd: fmul dword ptr [0xa09e14] */
  ST0 = ST0 * (F32((uint32_t)(0xa09e14u)));
/* 8e0003: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8e0007: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8e0009: fsub st(3) */
  ST0 = ST0 - STI(3);
/* 8e000b: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8e000f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e0011: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 8e0015: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8e0019: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8e001d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8e001f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e0021: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e0023: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8e0027: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 8e002b: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8e002f: fadd dword ptr [ecx + 0x5d4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x5d4u)));
/* 8e0035: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 8e0039: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 8e003d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e003f: fadd dword ptr [ecx + 0x5d8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x5d8u)));
/* 8e0045: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8e0049: fadd dword ptr [ecx + 0x5dc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x5dcu)));
/* 8e004f: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 8e0051: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 8e0055: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 8e0058: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8e005c: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8e0060: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 8e0063: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 8e0065: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8e0067: add eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e006a: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 8e006c: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 8e006f: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 8e0072: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8e0075: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8e0078: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8e007a: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 8e007d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8e0080: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8e0082: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8e0085: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 8e0088: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8e008a: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 8e008e: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
/* 8e0091: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8e0093: mov dword ptr [eax + 0x24], 0 */
  W32((uint32_t)(eax + 0x24u), 0x0u);
L_8e009a: /* 8e009a: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8e009c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e009e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e00a0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e00a3: jp 0x8e00b5 */
  if (pf) goto L_8e00b5;
L_8e00a5: /* 8e00a5: mov eax, 1 */
  eax = 0x1u;
/* 8e00aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e00ab: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e00ae: ret 8 */
  esp += 12; SPILL(); return;
L_8e00b1: /* 8e00b1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e00b3: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8e00b5: /* 8e00b5: xor eax, eax */
  eax = 0;
/* 8e00b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e00b8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e00bb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8e0120(void) {
  LOAD_REGS();
L_8e0120: /* 8e0120: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e0121: mov ebp, esp */
  ebp = esp;
/* 8e0123: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e0125: push 0x9d8810 */
  { uint32_t v = 0x9d8810u; esp -= 4; W32(esp, v); }
/* 8e012a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e0130: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e0131: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e0138: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e013b: mov eax, dword ptr [ecx + 0x58] */
  eax = R32((uint32_t)(ecx + 0x58u));
/* 8e013e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e013f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e0140: mov dword ptr [0xceb688], eax */
  W32((uint32_t)(0xceb688u), eax);
/* 8e0145: mov eax, dword ptr [ecx + 0x5c] */
  eax = R32((uint32_t)(ecx + 0x5cu));
/* 8e0148: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e014a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e014b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e014e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e0155: je 0x8e01df */
  if (zf) goto L_8e01df;
L_8e015b: /* 8e015b: movzx ecx, byte ptr [ecx + 0x108] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x108u)));
/* 8e0162: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8e0165: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e0166: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8e0169: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e016c: mov edx, esp */
  edx = esp;
/* 8e016e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8e0170: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 8e0173: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8e0176: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8e0179: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8e017c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8e017f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e0182: mov ecx, esp */
  ecx = esp;
/* 8e0184: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8e0186: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8e0189: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8e018c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e018e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8e0191: call 0x8df8e0 */
  esp -= 4; W32(esp, 0x8e0196u); SPILL(); f_8df8e0(); if (g_unwind) return; RELOAD();
/* 8e0196: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e0199: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 8e019c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e019f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e01a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e01a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e01a8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e01a9: mov esp, ebp */
  esp = ebp;
/* 8e01ab: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e01ac: ret 0x18 */
  esp += 28; SPILL(); return;
L_8e01df: /* 8e01df: mov eax, dword ptr [ecx + 0x108] */
  eax = R32((uint32_t)(ecx + 0x108u));
/* 8e01e5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e01e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e01e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e01ea: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e01f1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e01f2: mov esp, ebp */
  esp = ebp;
/* 8e01f4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e01f5: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_8e01af(void) {
  LOAD_REGS();
L_8e01af: /* 8e01af: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e01b2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e01b7: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8e01ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e01bb: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8e01be: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e01c3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e01c3(); return;
}

void f_8e01c3(void) {
  LOAD_REGS();
L_8e01c3: /* 8e01c3: push 0xa1d81c */
  { uint32_t v = 0xa1d81cu; esp -= 4; W32(esp, v); }
/* 8e01c8: push 0xaeda24 */
  { uint32_t v = 0xaeda24u; esp -= 4; W32(esp, v); }
/* 8e01cd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e01d3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e01d3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e01d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e01d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e01da: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e01dfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8e01df: mov eax, dword ptr [ecx + 0x108] */
  eax = R32((uint32_t)(ecx + 0x108u));
/* 8e01e5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e01e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e01e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e01ea: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e01f1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e01f2: mov esp, ebp */
  esp = ebp;
/* 8e01f4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e01f5: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_8e0240(void) {
  LOAD_REGS();
L_8e0240: /* 8e0240: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e0242: push 0x9d882c */
  { uint32_t v = 0x9d882cu; esp -= 4; W32(esp, v); }
/* 8e0247: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e024d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e024e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e0255: sub esp, 0xd4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xd4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e025b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e025c: mov ebx, dword ptr [esp + 0xf0] */
  ebx = R32((uint32_t)(esp + 0xf0u));
/* 8e0263: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e0264: xor edx, edx */
  edx = 0;
/* 8e0266: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e0268: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e0269: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e026a: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 8e026e: je 0x8e0287 */
  if (zf) goto L_8e0287;
L_8e0270: /* 8e0270: lea eax, [esp + 0xa4] */
  eax = (uint32_t)(esp + 0xa4u);
/* 8e0277: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e0278: mov ecx, ebx */
  ecx = ebx;
/* 8e027a: call dword ptr [0xcfa590] */
  esp -= 4; W32(esp, 0x8e0280u); SPILL(); f_4e1e9c(); if (g_unwind) return; /* Core!?TransposeAdjoint@FMatrix@@QBE?AV1@XZ */ RELOAD();
/* 8e0280: mov edx, 1 */
  edx = 0x1u;
/* 8e0285: jmp 0x8e028c */
  goto L_8e028c;
L_8e0287: /* 8e0287: mov eax, dword ptr [0xcfa350] */
  eax = R32((uint32_t)(0xcfa350u));
L_8e028c: /* 8e028c: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8e0291: mov esi, eax */
  esi = eax;
/* 8e0293: lea edi, [esp + 0x44] */
  edi = (uint32_t)(esp + 0x44u);
/* 8e0297: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8e0299: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e029c: mov dword ptr [esp + 0xec], 0 */
  W32((uint32_t)(esp + 0xecu), 0x0u);
/* 8e02a7: je 0x8e02b6 */
  if (zf) goto L_8e02b6;
L_8e02a9: /* 8e02a9: lea ecx, [esp + 0xa4] */
  ecx = (uint32_t)(esp + 0xa4u);
/* 8e02b0: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8e02b6u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_8e02b6: /* 8e02b6: cmp dword ptr [esp + 0x104], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x104u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e02be: mov edi, dword ptr [esp + 0x11c] */
  edi = R32((uint32_t)(esp + 0x11cu));
/* 8e02c5: mov ebp, dword ptr [esp + 0x118] */
  ebp = R32((uint32_t)(esp + 0x118u));
/* 8e02cc: je 0x8e0684 */
  if (zf) goto L_8e0684;
L_8e02d2: /* 8e02d2: mov esi, dword ptr [esp + 0x104] */
  esi = R32((uint32_t)(esp + 0x104u));
/* 8e02d9: mov ecx, dword ptr [esp + 0xf8] */
  ecx = R32((uint32_t)(esp + 0xf8u));
/* 8e02e0: imul esi, esi, 0x78 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x78u);
  esi = (uint32_t)r;
  }
/* 8e02e3: add esi, dword ptr [ecx + 0x58] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x58u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8e02e6: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e02e8: je 0x8e0364 */
  if (zf) goto L_8e0364;
L_8e02ea: /* 8e02ea: lea edx, [esp + 0x44] */
  edx = (uint32_t)(esp + 0x44u);
/* 8e02ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e02ef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e02f0: lea eax, [esp + 0x9c] */
  eax = (uint32_t)(esp + 0x9cu);
/* 8e02f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e02f8: mov ecx, esi */
  ecx = esi;
/* 8e02fa: call dword ptr [0xcfac64] */
  esp -= 4; W32(esp, 0x8e0300u); SPILL(); f_4e2ea0(); if (g_unwind) return; /* Core!?TransformByUsingAdjointT@FPlane@@QBE?AV1@ABVFMatrix@@0@Z */ RELOAD();
/* 8e0300: fld dword ptr [esp + 0x118] */
  { double v = F32((uint32_t)(esp + 0x118u)); FPUSH(v); }
/* 8e0307: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8e030a: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 8e030e: fld dword ptr [esp + 0x11c] */
  { double v = F32((uint32_t)(esp + 0x11cu)); FPUSH(v); }
/* 8e0315: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e0316: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8e0319: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e031a: lea edx, [esp + 0x8c] */
  edx = (uint32_t)(esp + 0x8cu);
/* 8e0321: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e0322: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e0324: mov ecx, esi */
  ecx = esi;
/* 8e0326: fld dword ptr [esp + 0x120] */
  { double v = F32((uint32_t)(esp + 0x120u)); FPUSH(v); }
/* 8e032d: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8e032f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e0331: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 8e0334: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 8e0338: call dword ptr [0xcfac64] */
  esp -= 4; W32(esp, 0x8e033eu); SPILL(); f_4e2ea0(); if (g_unwind) return; /* Core!?TransformByUsingAdjointT@FPlane@@QBE?AV1@ABVFMatrix@@0@Z */ RELOAD();
/* 8e033e: fld dword ptr [esp + 0x10c] */
  { double v = F32((uint32_t)(esp + 0x10cu)); FPUSH(v); }
/* 8e0345: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8e0348: fld dword ptr [esp + 0x110] */
  { double v = F32((uint32_t)(esp + 0x110u)); FPUSH(v); }
/* 8e034f: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8e0352: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e0354: fld dword ptr [esp + 0x108] */
  { double v = F32((uint32_t)(esp + 0x108u)); FPUSH(v); }
/* 8e035b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8e035d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e035f: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 8e0362: jmp 0x8e03b0 */
  goto L_8e03b0;
L_8e0364: /* 8e0364: fld dword ptr [esp + 0x114] */
  { double v = F32((uint32_t)(esp + 0x114u)); FPUSH(v); }
/* 8e036b: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8e036d: fld dword ptr [esp + 0x118] */
  { double v = F32((uint32_t)(esp + 0x118u)); FPUSH(v); }
/* 8e0374: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 8e0377: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e0379: fld dword ptr [esp + 0x11c] */
  { double v = F32((uint32_t)(esp + 0x11cu)); FPUSH(v); }
/* 8e0380: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 8e0383: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e0385: fsub dword ptr [esi + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xcu)));
/* 8e0388: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8e038c: fld dword ptr [esp + 0x108] */
  { double v = F32((uint32_t)(esp + 0x108u)); FPUSH(v); }
/* 8e0393: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8e0395: fld dword ptr [esp + 0x10c] */
  { double v = F32((uint32_t)(esp + 0x10cu)); FPUSH(v); }
/* 8e039c: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 8e039f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e03a1: fld dword ptr [esp + 0x110] */
  { double v = F32((uint32_t)(esp + 0x110u)); FPUSH(v); }
/* 8e03a8: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 8e03ab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e03ad: fsub dword ptr [esi + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xcu)));
L_8e03b0: /* 8e03b0: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8e03b4: fcomp dword ptr [0xa16220] */
  fpu_com(ST0, F32((uint32_t)(0xa16220u)));
  FPOP();
/* 8e03ba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e03bc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e03bf: jne 0x8e0408 */
  if (!zf) goto L_8e0408;
L_8e03c1: /* 8e03c1: fcom dword ptr [0xa16220] */
  fpu_com(ST0, F32((uint32_t)(0xa16220u)));
/* 8e03c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e03c9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e03cc: jne 0x8e0408 */
  if (!zf) goto L_8e0408;
L_8e03ce: /* 8e03ce: mov al, byte ptr [esi + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x56u))) & 0xffu);
/* 8e03d1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e03d3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 8e03d5: jbe 0x8e03f0 */
  if ((cf | zf)) goto L_8e03f0;
L_8e03d7: /* 8e03d7: mov eax, dword ptr [esp + 0x124] */
  eax = R32((uint32_t)(esp + 0x124u));
/* 8e03de: mov cl, byte ptr [esi + 0x57] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x57u))) & 0xffu);
/* 8e03e1: and al, 0xef */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xefu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8e03e3: or al, 0x21 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8e03e5: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e03e7: jne 0x8e03f0 */
  if (!zf) goto L_8e03f0;
L_8e03e9: /* 8e03e9: mov eax, 1 */
  eax = 0x1u;
/* 8e03ee: jmp 0x8e03f2 */
  goto L_8e03f2;
L_8e03f0: /* 8e03f0: xor eax, eax */
  eax = 0;
L_8e03f2: /* 8e03f2: or dword ptr [esp + 0x120], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x120u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esp + 0x120u), r);
  }
/* 8e03f9: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 8e03fc: mov dword ptr [esp + 0x104], ecx */
  W32((uint32_t)(esp + 0x104u), ecx);
/* 8e0403: jmp 0x8e0676 */
  goto L_8e0676;
L_8e0408: /* 8e0408: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8e040c: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 8e0412: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e0414: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e0417: jp 0x8e046b */
  if (pf) goto L_8e046b;
L_8e0419: /* 8e0419: fcom dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
/* 8e041f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e0421: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e0424: jp 0x8e046b */
  if (pf) goto L_8e046b;
L_8e0426: /* 8e0426: mov al, byte ptr [esi + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x56u))) & 0xffu);
/* 8e0429: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e042b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 8e042d: jbe 0x8e044a */
  if ((cf | zf)) goto L_8e044a;
L_8e042f: /* 8e042f: mov edx, dword ptr [esp + 0x124] */
  edx = R32((uint32_t)(esp + 0x124u));
/* 8e0436: mov al, byte ptr [esi + 0x57] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x57u))) & 0xffu);
/* 8e0439: and dl, 0xef */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xefu);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8e043c: or dl, 0x21 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a | b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8e043f: test dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e0441: jne 0x8e044a */
  if (!zf) goto L_8e044a;
L_8e0443: /* 8e0443: mov eax, 1 */
  eax = 0x1u;
/* 8e0448: jmp 0x8e044c */
  goto L_8e044c;
L_8e044a: /* 8e044a: xor eax, eax */
  eax = 0;
L_8e044c: /* 8e044c: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 8e044f: xor ecx, ecx */
  ecx = 0;
/* 8e0451: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e0453: mov eax, dword ptr [esp + 0x120] */
  eax = R32((uint32_t)(esp + 0x120u));
/* 8e045a: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8e045d: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8e045f: mov dword ptr [esp + 0x120], eax */
  W32((uint32_t)(esp + 0x120u), eax);
/* 8e0466: jmp 0x8e066f */
  goto L_8e066f;
L_8e046b: /* 8e046b: fld dword ptr [esp + 0x11c] */
  { double v = F32((uint32_t)(esp + 0x11cu)); FPUSH(v); }
/* 8e0472: fsub dword ptr [esp + 0x110] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x110u)));
/* 8e0479: fld dword ptr [esp + 0x118] */
  { double v = F32((uint32_t)(esp + 0x118u)); FPUSH(v); }
/* 8e0480: fsub dword ptr [esp + 0x10c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10cu)));
/* 8e0487: fld dword ptr [esp + 0x114] */
  { double v = F32((uint32_t)(esp + 0x114u)); FPUSH(v); }
/* 8e048e: fsub dword ptr [esp + 0x108] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x108u)));
/* 8e0495: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 8e0499: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8e049b: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 8e049f: fdivr dword ptr [esp + 0x14] */
  ST0 = (F32((uint32_t)(esp + 0x14u))) / ST0;
/* 8e04a3: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8e04a7: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 8e04ab: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 8e04af: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 8e04b3: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8e04b7: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8e04bb: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 8e04bf: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8e04c3: fld dword ptr [esp + 0x11c] */
  { double v = F32((uint32_t)(esp + 0x11cu)); FPUSH(v); }
/* 8e04ca: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 8e04ce: fld dword ptr [esp + 0x118] */
  { double v = F32((uint32_t)(esp + 0x118u)); FPUSH(v); }
/* 8e04d5: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 8e04d9: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 8e04dd: fadd dword ptr [esp + 0x114] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x114u)));
/* 8e04e4: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 8e04e8: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8e04ec: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8e04f0: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8e04f4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e04fa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e04fc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e04ff: jne 0x8e0531 */
  if (!zf) goto L_8e0531;
L_8e0501: /* 8e0501: mov ecx, dword ptr [esp + 0x120] */
  ecx = R32((uint32_t)(esp + 0x120u));
/* 8e0508: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e050a: mov eax, 1 */
  eax = 0x1u;
/* 8e050f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8e0513: jne 0x8e055f */
  if (!zf) goto L_8e055f;
L_8e0515: /* 8e0515: mov cl, byte ptr [esi + 0x56] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x56u))) & 0xffu);
/* 8e0518: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 8e051a: jbe 0x8e052d */
  if ((cf | zf)) goto L_8e052d;
L_8e051c: /* 8e051c: mov ecx, dword ptr [esp + 0x124] */
  ecx = R32((uint32_t)(esp + 0x124u));
/* 8e0523: mov dl, byte ptr [esi + 0x57] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x57u))) & 0xffu);
/* 8e0526: or cl, 0x21 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a | b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8e0529: test cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e052b: je 0x8e055f */
  if (zf) goto L_8e055f;
L_8e052d: /* 8e052d: xor eax, eax */
  eax = 0;
/* 8e052f: jmp 0x8e055f */
  goto L_8e055f;
L_8e0531: /* 8e0531: mov ecx, dword ptr [esp + 0x120] */
  ecx = R32((uint32_t)(esp + 0x120u));
/* 8e0538: xor eax, eax */
  eax = 0;
/* 8e053a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e053c: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8e0540: je 0x8e055f */
  if (zf) goto L_8e055f;
L_8e0542: /* 8e0542: mov cl, byte ptr [esi + 0x56] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x56u))) & 0xffu);
/* 8e0545: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 8e0547: jbe 0x8e055a */
  if ((cf | zf)) goto L_8e055a;
L_8e0549: /* 8e0549: mov edx, dword ptr [esp + 0x124] */
  edx = R32((uint32_t)(esp + 0x124u));
/* 8e0550: mov cl, byte ptr [esi + 0x57] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x57u))) & 0xffu);
/* 8e0553: or dl, 0x21 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a | b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8e0556: test dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e0558: je 0x8e055f */
  if (zf) goto L_8e055f;
L_8e055a: /* 8e055a: mov eax, 1 */
  eax = 0x1u;
L_8e055f: /* 8e055f: mov ecx, dword ptr [esp + 0x124] */
  ecx = R32((uint32_t)(esp + 0x124u));
/* 8e0566: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 8e056a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e056b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e056c: mov eax, dword ptr [esp + 0x11c] */
  eax = R32((uint32_t)(esp + 0x11cu));
/* 8e0573: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e0576: mov edx, esp */
  edx = esp;
/* 8e0578: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8e057a: mov dword ptr [edx + 4], ebp */
  W32((uint32_t)(edx + 0x4u), ebp);
/* 8e057d: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 8e0581: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 8e0584: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 8e0588: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 8e058c: mov eax, dword ptr [esi + edx*4 + 0x20] */
  eax = R32((uint32_t)(esi + edx*4 + 0x20u));
/* 8e0590: mov edx, dword ptr [esp + 0x110] */
  edx = R32((uint32_t)(esp + 0x110u));
/* 8e0597: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e059a: mov ecx, esp */
  ecx = esp;
/* 8e059c: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 8e059e: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 8e05a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e05a2: mov eax, dword ptr [esp + 0x11c] */
  eax = R32((uint32_t)(esp + 0x11cu));
/* 8e05a9: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 8e05ac: mov ecx, dword ptr [esp + 0x124] */
  ecx = R32((uint32_t)(esp + 0x124u));
/* 8e05b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e05b4: mov ecx, dword ptr [esp + 0x11c] */
  ecx = R32((uint32_t)(esp + 0x11cu));
/* 8e05bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e05bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e05bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e05be: call 0x6c31fc */
  esp -= 4; W32(esp, 0x8e05c3u); SPILL(); f_6c31fc(); if (g_unwind) return; RELOAD();
/* 8e05c3: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e05c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e05c8: je 0x8e06b3 */
  if (zf) goto L_8e06b3;
L_8e05ce: /* 8e05ce: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8e05d2: mov ecx, dword ptr [esp + 0x120] */
  ecx = R32((uint32_t)(esp + 0x120u));
/* 8e05d9: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 8e05db: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* 8e05de: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e05e0: je 0x8e060b */
  if (zf) goto L_8e060b;
L_8e05e2: /* 8e05e2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e05e4: jne 0x8e05fe */
  if (!zf) goto L_8e05fe;
L_8e05e6: /* 8e05e6: mov cl, byte ptr [esi + 0x56] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x56u))) & 0xffu);
/* 8e05e9: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 8e05eb: jbe 0x8e0634 */
  if ((cf | zf)) goto L_8e0634;
L_8e05ed: /* 8e05ed: mov ecx, dword ptr [esp + 0x124] */
  ecx = R32((uint32_t)(esp + 0x124u));
/* 8e05f4: mov dl, byte ptr [esi + 0x57] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x57u))) & 0xffu);
/* 8e05f7: or cl, 0x21 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a | b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8e05fa: test cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e05fc: jne 0x8e0634 */
  if (!zf) goto L_8e0634;
L_8e05fe: /* 8e05fe: mov dword ptr [esp + 0x120], 1 */
  W32((uint32_t)(esp + 0x120u), 0x1u);
/* 8e0609: jmp 0x8e063f */
  goto L_8e063f;
L_8e060b: /* 8e060b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e060d: je 0x8e0634 */
  if (zf) goto L_8e0634;
L_8e060f: /* 8e060f: mov cl, byte ptr [esi + 0x56] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x56u))) & 0xffu);
/* 8e0612: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 8e0614: jbe 0x8e0627 */
  if ((cf | zf)) goto L_8e0627;
L_8e0616: /* 8e0616: mov edx, dword ptr [esp + 0x124] */
  edx = R32((uint32_t)(esp + 0x124u));
/* 8e061d: mov cl, byte ptr [esi + 0x57] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x57u))) & 0xffu);
/* 8e0620: or dl, 0x21 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a | b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8e0623: test dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e0625: je 0x8e0634 */
  if (zf) goto L_8e0634;
L_8e0627: /* 8e0627: mov dword ptr [esp + 0x120], 1 */
  W32((uint32_t)(esp + 0x120u), 0x1u);
/* 8e0632: jmp 0x8e063f */
  goto L_8e063f;
L_8e0634: /* 8e0634: mov dword ptr [esp + 0x120], 0 */
  W32((uint32_t)(esp + 0x120u), 0x0u);
L_8e063f: /* 8e063f: mov ecx, dword ptr [esp + 0x104] */
  ecx = R32((uint32_t)(esp + 0x104u));
/* 8e0646: mov edx, dword ptr [esi + eax*4 + 0x24] */
  edx = R32((uint32_t)(esi + eax*4 + 0x24u));
/* 8e064a: mov dword ptr [esp + 0x114], edi */
  W32((uint32_t)(esp + 0x114u), edi);
/* 8e0651: mov edi, ebx */
  edi = ebx;
/* 8e0653: mov ebx, dword ptr [esp + 0xfc] */
  ebx = R32((uint32_t)(esp + 0xfcu));
/* 8e065a: mov dword ptr [esp + 0x100], ecx */
  W32((uint32_t)(esp + 0x100u), ecx);
/* 8e0661: mov dword ptr [esp + 0x118], ebp */
  W32((uint32_t)(esp + 0x118u), ebp);
/* 8e0668: mov dword ptr [esp + 0x11c], edi */
  W32((uint32_t)(esp + 0x11cu), edi);
L_8e066f: /* 8e066f: mov dword ptr [esp + 0x104], edx */
  W32((uint32_t)(esp + 0x104u), edx);
L_8e0676: /* 8e0676: cmp dword ptr [esp + 0x104], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x104u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e067e: jne 0x8e02d2 */
  if (!zf) goto L_8e02d2;
L_8e0684: /* 8e0684: mov eax, dword ptr [esp + 0x120] */
  eax = R32((uint32_t)(esp + 0x120u));
/* 8e068b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e068d: jne 0x8e0718 */
  if (!zf) goto L_8e0718;
L_8e0693: /* 8e0693: mov eax, dword ptr [0xceb684] */
  eax = R32((uint32_t)(0xceb684u));
/* 8e0698: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e069a: jne 0x8e06cc */
  if (!zf) goto L_8e06cc;
L_8e069c: /* 8e069c: test byte ptr [esp + 0x124], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x124u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e06a4: je 0x8e06cc */
  if (zf) goto L_8e06cc;
L_8e06a6: /* 8e06a6: mov dword ptr [esp + 0x120], 1 */
  W32((uint32_t)(esp + 0x120u), 0x1u);
/* 8e06b1: jmp 0x8e0722 */
  goto L_8e0722;
L_8e06b3: /* 8e06b3: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 8e06b7: mov dword ptr [esp + 0xec], 0xffffffff */
  W32((uint32_t)(esp + 0xecu), 0xffffffffu);
/* 8e06c2: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8e06c8u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8e06c8: xor eax, eax */
  eax = 0;
/* 8e06ca: jmp 0x8e073e */
  goto L_8e073e;
L_8e06cc: /* 8e06cc: mov eax, dword ptr [esp + 0xf4] */
  eax = R32((uint32_t)(esp + 0xf4u));
/* 8e06d3: mov edx, dword ptr [esp + 0x114] */
  edx = R32((uint32_t)(esp + 0x114u));
/* 8e06da: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 8e06dd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8e06df: mov edx, dword ptr [esp + 0xf8] */
  edx = R32((uint32_t)(esp + 0xf8u));
/* 8e06e6: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 8e06e9: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 8e06ec: mov ecx, dword ptr [esp + 0x100] */
  ecx = R32((uint32_t)(esp + 0x100u));
/* 8e06f3: mov edi, dword ptr [edx + 0x58] */
  edi = R32((uint32_t)(edx + 0x58u));
/* 8e06f6: mov esi, ecx */
  esi = ecx;
/* 8e06f8: imul esi, esi, 0x78 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x78u);
  esi = (uint32_t)r;
  }
/* 8e06fb: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8e06fd: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 8e06ff: lea edi, [eax + 0x14] */
  edi = (uint32_t)(eax + 0x14u);
/* 8e0702: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 8e0704: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 8e0707: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 8e070a: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 8e070d: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 8e0710: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 8e0713: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 8e0716: jmp 0x8e0722 */
  goto L_8e0722;
L_8e0718: /* 8e0718: mov dword ptr [0xceb684], 1 */
  W32((uint32_t)(0xceb684u), 0x1u);
L_8e0722: /* 8e0722: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 8e0726: mov dword ptr [esp + 0xec], 0xffffffff */
  W32((uint32_t)(esp + 0xecu), 0xffffffffu);
/* 8e0731: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8e0737u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8e0737: mov eax, dword ptr [esp + 0x120] */
  eax = R32((uint32_t)(esp + 0x120u));
L_8e073e: /* 8e073e: mov ecx, dword ptr [esp + 0xe4] */
  ecx = R32((uint32_t)(esp + 0xe4u));
/* 8e0745: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e0746: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e0747: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e0748: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e074f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e0750: add esp, 0xe0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e0756: ret  */
  esp += 4; SPILL(); return;
}

void f_8e08b0(void) {
  LOAD_REGS();
L_8e08b0: /* 8e08b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e08b2: push 0x9d8848 */
  { uint32_t v = 0x9d8848u; esp -= 4; W32(esp, v); }
/* 8e08b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e08bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e08be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e08c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e08c6: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 8e08ca: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 8e08ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e08cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e08d0: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 8e08d4: mov esi, ecx */
  esi = ecx;
/* 8e08d6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e08d9: mov ecx, esp */
  ecx = esp;
/* 8e08db: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8e08dd: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 8e08e1: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8e08e4: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 8e08e8: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8e08eb: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8e08ef: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 8e08f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e08f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e08f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e08f6: mov ecx, esi */
  ecx = esi;
/* 8e08f8: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 8e08fc: call 0x6c2eeb */
  esp -= 4; W32(esp, 0x8e0901u); SPILL(); f_6c2eeb(); if (g_unwind) return; RELOAD();
/* 8e0901: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8e0905: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 8e0909: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 8e090d: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 8e0911: lea eax, [esi + 0x5d4] */
  eax = (uint32_t)(esi + 0x5d4u);
/* 8e0917: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8e0919: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8e091d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8e0920: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8e0923: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 8e0927: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 8e092b: lea edx, [esi + 0x5e0] */
  edx = (uint32_t)(esi + 0x5e0u);
/* 8e0931: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8e0933: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 8e0937: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8e093a: lea ecx, [esi + 0x5ec] */
  ecx = (uint32_t)(esi + 0x5ecu);
/* 8e0940: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8e0943: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 8e0945: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8e0949: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 8e0951: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 8e0955: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 8e0958: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8e095c: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 8e0960: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 8e0963: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x8e0969u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 8e0969: fstp dword ptr [esi + 0x5f8] */
  WF32((uint32_t)(esi + 0x5f8u), ST0); FPOP();
/* 8e096f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8e0973: mov dword ptr [esi + 0x5fc], 0 */
  W32((uint32_t)(esi + 0x5fcu), 0x0u);
/* 8e097d: mov eax, esi */
  eax = esi;
/* 8e097f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e0986: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e0987: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e098a: ret 0x34 */
  esp += 56; SPILL(); return;
}

void f_8e09d0(void) {
  LOAD_REGS();
L_8e09d0: /* 8e09d0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e09d3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8e09d7: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8e09d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e09da: fmul dword ptr [ecx + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4cu)));
/* 8e09dd: mov eax, 0x7fffffff */
  eax = 0x7fffffffu;
/* 8e09e2: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8e09e6: fld dword ptr [ecx + 0x50] */
  { double v = F32((uint32_t)(ecx + 0x50u)); FPUSH(v); }
/* 8e09e9: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8e09ed: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8e09f0: and esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8e09f2: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 8e09f6: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8e09fa: fld dword ptr [ecx + 0x54] */
  { double v = F32((uint32_t)(ecx + 0x54u)); FPUSH(v); }
/* 8e09fd: mov esi, dword ptr [esp + 4] */
  esi = R32((uint32_t)(esp + 0x4u));
/* 8e0a01: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8e0a04: and esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8e0a06: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8e0a0a: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8e0a0e: and dword ptr [esp + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* 8e0a12: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8e0a16: fadd dword ptr [esp + 4] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4u)));
/* 8e0a1a: fadd dword ptr [esp + 8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x8u)));
/* 8e0a1e: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8e0a22: fld dword ptr [ecx + 0x5e4] */
  { double v = F32((uint32_t)(ecx + 0x5e4u)); FPUSH(v); }
/* 8e0a28: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8e0a2b: fld dword ptr [ecx + 0x5e8] */
  { double v = F32((uint32_t)(ecx + 0x5e8u)); FPUSH(v); }
/* 8e0a31: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8e0a34: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e0a36: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8e0a38: fmul dword ptr [ecx + 0x5e0] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x5e0u)));
/* 8e0a3e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e0a40: fsub dword ptr [edx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0xcu)));
/* 8e0a43: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8e0a47: fld dword ptr [ecx + 0x5d8] */
  { double v = F32((uint32_t)(ecx + 0x5d8u)); FPUSH(v); }
/* 8e0a4d: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8e0a50: fld dword ptr [ecx + 0x5dc] */
  { double v = F32((uint32_t)(ecx + 0x5dcu)); FPUSH(v); }
/* 8e0a56: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8e0a59: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e0a5b: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8e0a5d: fmul dword ptr [ecx + 0x5d4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x5d4u)));
/* 8e0a63: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e0a65: fsub dword ptr [edx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0xcu)));
/* 8e0a68: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 8e0a6c: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8e0a70: fsub dword ptr [esp + 4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4u)));
/* 8e0a74: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8e0a78: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 8e0a7c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e0a7e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e0a81: jne 0x8e0aa9 */
  if (!zf) goto L_8e0aa9;
L_8e0a83: /* 8e0a83: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 8e0a87: fchs  */
  ST0 = -ST0;
/* 8e0a89: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8e0a8b: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8e0a8d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e0a8f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e0a92: jne 0x8e0aa9 */
  if (!zf) goto L_8e0aa9;
L_8e0a94: /* 8e0a94: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8e0a9a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e0a9c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e0a9f: jp 0x8e0aa9 */
  if (pf) goto L_8e0aa9;
L_8e0aa1: /* 8e0aa1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e0aa3: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_8e0aa9: /* 8e0aa9: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8e0aad: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* 8e0ab1: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8e0ab5: fdiv dword ptr [esp + 8] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x8u)));
/* 8e0ab9: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 8e0abd: fcomp dword ptr [0xa1d850] */
  fpu_com(ST0, F32((uint32_t)(0xa1d850u)));
  FPOP();
/* 8e0ac3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e0ac5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e0ac8: jp 0x8e0adf */
  if (pf) goto L_8e0adf;
L_8e0aca: /* 8e0aca: fcom dword ptr [ecx + 0x8c] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x8cu)));
/* 8e0ad0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e0ad2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e0ad5: jp 0x8e0b41 */
  if (pf) goto L_8e0b41;
L_8e0ad7: /* 8e0ad7: fstp dword ptr [ecx + 0x8c] */
  WF32((uint32_t)(ecx + 0x8cu), ST0); FPOP();
/* 8e0add: jmp 0x8e0b43 */
  goto L_8e0b43;
L_8e0adf: /* 8e0adf: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 8e0ae3: fcomp dword ptr [0xa19c0c] */
  fpu_com(ST0, F32((uint32_t)(0xa19c0cu)));
  FPOP();
/* 8e0ae9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e0aeb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e0aee: jne 0x8e0b18 */
  if (!zf) goto L_8e0b18;
L_8e0af0: /* 8e0af0: fcom dword ptr [ecx + 0x88] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x88u)));
/* 8e0af6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e0af8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e0afb: jne 0x8e0b41 */
  if (!zf) goto L_8e0b41;
L_8e0afd: /* 8e0afd: fstp dword ptr [ecx + 0x88] */
  WF32((uint32_t)(ecx + 0x88u), ST0); FPOP();
/* 8e0b03: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 8e0b05: lea eax, [ecx + 0x60] */
  eax = (uint32_t)(ecx + 0x60u);
/* 8e0b08: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 8e0b0a: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 8e0b0d: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 8e0b10: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8e0b13: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8e0b16: jmp 0x8e0b43 */
  goto L_8e0b43;
L_8e0b18: /* 8e0b18: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e0b1a: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8e0b1e: fcomp dword ptr [esp + 4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4u)));
  FPOP();
/* 8e0b22: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e0b24: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e0b27: jne 0x8e0b43 */
  if (!zf) goto L_8e0b43;
L_8e0b29: /* 8e0b29: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 8e0b2d: fcomp dword ptr [esp + 4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4u)));
  FPOP();
/* 8e0b31: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e0b33: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e0b36: jne 0x8e0b43 */
  if (!zf) goto L_8e0b43;
L_8e0b38: /* 8e0b38: xor eax, eax */
  eax = 0;
/* 8e0b3a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e0b3b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e0b3e: ret 8 */
  esp += 12; SPILL(); return;
L_8e0b41: /* 8e0b41: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8e0b43: /* 8e0b43: fld dword ptr [ecx + 0x88] */
  { double v = F32((uint32_t)(ecx + 0x88u)); FPUSH(v); }
/* 8e0b49: fcomp dword ptr [ecx + 0x8c] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x8cu)));
  FPOP();
/* 8e0b4f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e0b51: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e0b54: jp 0x8e0b38 */
  if (pf) goto L_8e0b38;
L_8e0b56: /* 8e0b56: mov eax, 1 */
  eax = 0x1u;
/* 8e0b5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e0b5c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e0b5f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8e0be0(void) {
  LOAD_REGS();
L_8e0be0: /* 8e0be0: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e0be3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e0be4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e0be5: mov ebp, dword ptr [esp + 0x60] */
  ebp = R32((uint32_t)(esp + 0x60u));
/* 8e0be9: cmp ebp, -1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e0bec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e0bed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e0bee: je 0x8e0dc0 */
  if (zf) goto L_8e0dc0;
L_8e0bf4: /* 8e0bf4: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 8e0bf8: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* 8e0bfb: mov edx, dword ptr [eax + 0x98] */
  edx = R32((uint32_t)(eax + 0x98u));
/* 8e0c01: mov esi, dword ptr [eax + 0x68] */
  esi = R32((uint32_t)(eax + 0x68u));
/* 8e0c04: mov eax, dword ptr [eax + 0x88] */
  eax = R32((uint32_t)(eax + 0x88u));
/* 8e0c0a: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 8e0c0e: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8e0c12: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 8e0c16: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8e0c1a: jmp 0x8e0c20 */
  goto L_8e0c20;
L_8e0c1c: /* 8e0c1c: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
L_8e0c20: /* 8e0c20: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 8e0c24: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 8e0c2a: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 8e0c2e: mov ecx, ebp */
  ecx = ebp;
/* 8e0c30: imul ecx, ecx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x78u);
  ecx = (uint32_t)r;
  }
/* 8e0c33: mov eax, dword ptr [ecx + ebx + 0x18] */
  eax = R32((uint32_t)(ecx + ebx + 0x18u));
/* 8e0c37: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e0c39: movzx ebx, byte ptr [ecx + 0x56] */
  ebx = (uint32_t)(R8((uint32_t)(ecx + 0x56u)));
/* 8e0c3d: lea edx, [eax + ebx] */
  edx = (uint32_t)(eax + ebx);
/* 8e0c40: mov edx, dword ptr [esi + edx*8 - 8] */
  edx = R32((uint32_t)(esi + edx*8 + 0xfffffff8u));
/* 8e0c44: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 8e0c47: lea edx, [edi + edx*4] */
  edx = (uint32_t)(edi + edx*4);
/* 8e0c4a: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 8e0c4c: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 8e0c50: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 8e0c53: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8e0c56: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 8e0c5a: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 8e0c5d: mov dword ptr [esp + 0x34], edi */
  W32((uint32_t)(esp + 0x34u), edi);
/* 8e0c61: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 8e0c65: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8e0c68: lea edx, [edx + edi + 0x2c] */
  edx = (uint32_t)(edx + edi + 0x2cu);
/* 8e0c6c: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 8e0c6e: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 8e0c72: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 8e0c75: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8e0c78: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 8e0c7c: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 8e0c80: xor edi, edi */
  edi = 0;
/* 8e0c82: lea esi, [esi + eax*8] */
  esi = (uint32_t)(esi + eax*8);
L_8e0c85: /* 8e0c85: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e0c87: jge 0x8e0dcb */
  if ((sf == of)) goto L_8e0dcb;
L_8e0c8d: /* 8e0c8d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8e0c8f: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8e0c93: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8e0c96: lea edx, [edx + eax*4] */
  edx = (uint32_t)(edx + eax*4);
/* 8e0c99: mov eax, edx */
  eax = edx;
/* 8e0c9b: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 8e0c9d: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 8e0ca1: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 8e0ca5: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 8e0ca9: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 8e0cac: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8e0caf: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 8e0cb3: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 8e0cb7: fsub dword ptr [esp + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x34u)));
/* 8e0cbb: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 8e0cbf: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 8e0cc3: mov eax, edx */
  eax = edx;
/* 8e0cc5: fsub dword ptr [esp + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x38u)));
/* 8e0cc9: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 8e0ccb: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8e0ccf: mov dword ptr [esp + 0x48], ebp */
  W32((uint32_t)(esp + 0x48u), ebp);
/* 8e0cd3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8e0cd5: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 8e0cd8: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8e0cdc: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8e0cdf: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8e0ce1: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 8e0ce5: mov dword ptr [esp + 0x4c], ebp */
  W32((uint32_t)(esp + 0x4cu), ebp);
/* 8e0ce9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e0ceb: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 8e0cef: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8e0cf3: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8e0cf5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e0cf7: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 8e0cfb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e0cfd: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 8e0d01: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 8e0d05: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8e0d09: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8e0d0b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e0d0d: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 8e0d0f: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 8e0d13: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8e0d15: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 8e0d19: fmul dword ptr [esp + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x58u)));
/* 8e0d1d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e0d1f: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 8e0d23: fmul dword ptr [esp + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x54u)));
/* 8e0d27: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e0d29: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 8e0d2d: fmulp st(2) */
  STI(2) = STI(2) * ST0;
  FPOP();
/* 8e0d2f: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 8e0d33: fmul dword ptr [esp + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x58u)));
/* 8e0d37: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 8e0d39: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 8e0d3d: fmul dword ptr [esp + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x54u)));
/* 8e0d41: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 8e0d43: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e0d45: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8e0d47: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 8e0d4b: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 8e0d4d: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8e0d53: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e0d55: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e0d58: jp 0x8e0d69 */
  if (pf) goto L_8e0d69;
L_8e0d5a: /* 8e0d5a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8e0d5c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e0d62: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e0d64: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e0d67: je 0x8e0dac */
  if (zf) goto L_8e0dac;
L_8e0d69: /* 8e0d69: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e0d6f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e0d71: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e0d74: jne 0x8e0d85 */
  if (!zf) goto L_8e0d85;
L_8e0d76: /* 8e0d76: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e0d7c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e0d7e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e0d81: jnp 0x8e0db0 */
  if (!pf) goto L_8e0db0;
L_8e0d83: /* 8e0d83: jmp 0x8e0d87 */
  goto L_8e0d87;
L_8e0d85: /* 8e0d85: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8e0d87: /* 8e0d87: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8e0d89: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8e0d8d: mov ebp, dword ptr [esp + 0x68] */
  ebp = R32((uint32_t)(esp + 0x68u));
/* 8e0d91: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 8e0d95: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8e0d98: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8e0d9b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8e0d9c: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 8e0da0: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 8e0da4: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8e0da7: jmp 0x8e0c85 */
  goto L_8e0c85;
L_8e0dac: /* 8e0dac: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e0dae: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8e0db0: /* 8e0db0: mov ebp, dword ptr [ecx + 0x28] */
  ebp = R32((uint32_t)(ecx + 0x28u));
/* 8e0db3: cmp ebp, -1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e0db6: mov dword ptr [esp + 0x68], ebp */
  W32((uint32_t)(esp + 0x68u), ebp);
/* 8e0dba: jne 0x8e0c1c */
  if (!zf) goto L_8e0c1c;
L_8e0dc0: /* 8e0dc0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e0dc1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e0dc2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e0dc3: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8e0dc6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e0dc7: add esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e0dca: ret  */
  esp += 4; SPILL(); return;
L_8e0dcb: /* 8e0dcb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e0dcc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e0dce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e0dcf: mov eax, ebp */
  eax = ebp;
/* 8e0dd1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e0dd2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e0dd3: add esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e0dd6: ret  */
  esp += 4; SPILL(); return;
}

void f_8e0e60(void) {
  LOAD_REGS();
L_8e0e60: /* 8e0e60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e0e61: mov ebp, esp */
  ebp = esp;
/* 8e0e63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e0e65: push 0x9d8860 */
  { uint32_t v = 0x9d8860u; esp -= 4; W32(esp, v); }
/* 8e0e6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e0e70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e0e71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e0e78: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e0e7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e0e7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e0e7d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8e0e80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e0e81: xor edi, edi */
  edi = 0;
/* 8e0e83: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e0e85: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e0e88: mov ebx, ecx */
  ebx = ecx;
/* 8e0e8a: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8e0e8d: jne 0x8e0ea7 */
  if (!zf) goto L_8e0ea7;
L_8e0e8f: /* 8e0e8f: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 8e0e94: push 0xaeda3c */
  { uint32_t v = 0xaeda3cu; esp -= 4; W32(esp, v); }
/* 8e0e99: push 0xaeda48 */
  { uint32_t v = 0xaeda48u; esp -= 4; W32(esp, v); }
/* 8e0e9e: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8e0ea4u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8e0ea4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8e0ea7: /* 8e0ea7: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 8e0eaa: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8e0ead: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e0eaf: mov ecx, esi */
  ecx = esi;
/* 8e0eb1: mov byte ptr [ebp - 0x1c], 0 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8e0eb5: je 0x8e0fbf */
  if (zf) goto L_8e0fbf;
L_8e0ebb: /* 8e0ebb: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 8e0ec1: xor esi, esi */
  esi = 0;
/* 8e0ec3: xor eax, eax */
  eax = 0;
L_8e0ec5: /* 8e0ec5: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e0ec8: je 0x8e0f83 */
  if (zf) goto L_8e0f83;
L_8e0ece: /* 8e0ece: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 8e0ed1: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8e0ed4: mov ecx, edi */
  ecx = edi;
/* 8e0ed6: imul ecx, ecx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x78u);
  ecx = (uint32_t)r;
  }
/* 8e0ed9: fmul dword ptr [ecx + eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + eax + 0x4u)));
/* 8e0edd: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 8e0ee0: fmul dword ptr [ecx + eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + eax + 0x8u)));
/* 8e0ee4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e0ee6: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8e0ee9: fmul dword ptr [ecx + eax] */
  ST0 = ST0 * (F32((uint32_t)(ecx + eax)));
/* 8e0eec: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e0eee: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e0ef0: fsub dword ptr [ecx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xcu)));
/* 8e0ef3: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e0ef9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e0efb: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e0efe: jne 0x8e0f53 */
  if (!zf) goto L_8e0f53;
L_8e0f00: /* 8e0f00: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e0f02: mov esi, 1 */
  esi = 0x1u;
/* 8e0f07: jne 0x8e0f16 */
  if (!zf) goto L_8e0f16;
L_8e0f09: /* 8e0f09: mov al, byte ptr [ecx + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x56u))) & 0xffu);
/* 8e0f0c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 8e0f0e: jbe 0x8e0f76 */
  if ((cf | zf)) goto L_8e0f76;
L_8e0f10: /* 8e0f10: test byte ptr [ecx + 0x57], 0x21 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x57u))); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e0f14: jne 0x8e0f76 */
  if (!zf) goto L_8e0f76;
L_8e0f16: /* 8e0f16: mov eax, edi */
  eax = edi;
/* 8e0f18: mov edi, dword ptr [ecx + esi*4 + 0x20] */
  edi = R32((uint32_t)(ecx + esi*4 + 0x20u));
/* 8e0f1c: mov edx, 1 */
  edx = 0x1u;
/* 8e0f21: jmp 0x8e0ec5 */
  goto L_8e0ec5;
L_8e0f53: /* 8e0f53: xor esi, esi */
  esi = 0;
/* 8e0f55: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e0f57: je 0x8e0f76 */
  if (zf) goto L_8e0f76;
L_8e0f59: /* 8e0f59: mov al, byte ptr [ecx + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x56u))) & 0xffu);
/* 8e0f5c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 8e0f5e: jbe 0x8e0f66 */
  if ((cf | zf)) goto L_8e0f66;
L_8e0f60: /* 8e0f60: test byte ptr [ecx + 0x57], 0x21 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x57u))); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e0f64: je 0x8e0f76 */
  if (zf) goto L_8e0f76;
L_8e0f66: /* 8e0f66: mov eax, edi */
  eax = edi;
/* 8e0f68: mov edi, dword ptr [ecx + esi*4 + 0x20] */
  edi = R32((uint32_t)(ecx + esi*4 + 0x20u));
/* 8e0f6c: mov edx, 1 */
  edx = 0x1u;
/* 8e0f71: jmp 0x8e0ec5 */
  goto L_8e0ec5;
L_8e0f76: /* 8e0f76: mov eax, edi */
  eax = edi;
/* 8e0f78: mov edi, dword ptr [ecx + esi*4 + 0x20] */
  edi = R32((uint32_t)(ecx + esi*4 + 0x20u));
/* 8e0f7c: xor edx, edx */
  edx = 0;
/* 8e0f7e: jmp 0x8e0ec5 */
  goto L_8e0ec5;
L_8e0f83: /* 8e0f83: mov edi, dword ptr [ebx + 0x118] */
  edi = R32((uint32_t)(ebx + 0x118u));
/* 8e0f89: mov ecx, dword ptr [ebx + 0x58] */
  ecx = R32((uint32_t)(ebx + 0x58u));
/* 8e0f8c: mov edx, eax */
  edx = eax;
/* 8e0f8e: imul edx, edx, 0x1e */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1eu);
  edx = (uint32_t)r;
  }
/* 8e0f91: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8e0f93: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e0f95: mov edx, dword ptr [ecx + edx*4 + 0x58] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x58u));
/* 8e0f99: je 0x8e0fa6 */
  if (zf) goto L_8e0fa6;
L_8e0f9b: /* 8e0f9b: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 8e0f9e: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e0fa0: mov al, byte ptr [eax + esi + 0x54] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + esi + 0x54u))) & 0xffu);
/* 8e0fa4: jmp 0x8e0fa8 */
  goto L_8e0fa8;
L_8e0fa6: /* 8e0fa6: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_8e0fa8: /* 8e0fa8: mov byte ptr [ebp - 0x1c], al */
  W8((uint32_t)(ebp + 0xffffffe4u), (eax & 0xffu));
/* 8e0fab: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 8e0fae: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8e0fb1: mov ecx, dword ptr [ebx + eax*8 + 0x11c] */
  ecx = R32((uint32_t)(ebx + eax*8 + 0x11cu));
/* 8e0fb8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e0fba: jne 0x8e0fbf */
  if (!zf) goto L_8e0fbf;
L_8e0fbc: /* 8e0fbc: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
L_8e0fbf: /* 8e0fbf: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e0fc2: mov esi, eax */
  esi = eax;
/* 8e0fc4: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 8e0fc6: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8e0fc9: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 8e0fcc: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 8e0fcf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e0fd2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e0fd3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e0fd4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e0fdb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e0fdc: mov esp, ebp */
  esp = ebp;
/* 8e0fde: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e0fdf: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8e0f23(void) {
  LOAD_REGS();
L_8e0f23: /* 8e0f23: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e0f26: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e0f2b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8e0f2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e0f2f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8e0f32: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e0f37u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e0f37(); return;
}

void f_8e0f37(void) {
  LOAD_REGS();
  goto L_8e0f37;
L_8e0ec5: /* 8e0ec5: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e0ec8: je 0x8e0f83 */
  if (zf) goto L_8e0f83;
L_8e0ece: /* 8e0ece: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 8e0ed1: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8e0ed4: mov ecx, edi */
  ecx = edi;
/* 8e0ed6: imul ecx, ecx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x78u);
  ecx = (uint32_t)r;
  }
/* 8e0ed9: fmul dword ptr [ecx + eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + eax + 0x4u)));
/* 8e0edd: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 8e0ee0: fmul dword ptr [ecx + eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + eax + 0x8u)));
/* 8e0ee4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e0ee6: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8e0ee9: fmul dword ptr [ecx + eax] */
  ST0 = ST0 * (F32((uint32_t)(ecx + eax)));
/* 8e0eec: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e0eee: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e0ef0: fsub dword ptr [ecx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xcu)));
/* 8e0ef3: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e0ef9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e0efb: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e0efe: jne 0x8e0f53 */
  if (!zf) goto L_8e0f53;
L_8e0f00: /* 8e0f00: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e0f02: mov esi, 1 */
  esi = 0x1u;
/* 8e0f07: jne 0x8e0f16 */
  if (!zf) goto L_8e0f16;
L_8e0f09: /* 8e0f09: mov al, byte ptr [ecx + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x56u))) & 0xffu);
/* 8e0f0c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 8e0f0e: jbe 0x8e0f76 */
  if ((cf | zf)) goto L_8e0f76;
L_8e0f10: /* 8e0f10: test byte ptr [ecx + 0x57], 0x21 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x57u))); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e0f14: jne 0x8e0f76 */
  if (!zf) goto L_8e0f76;
L_8e0f16: /* 8e0f16: mov eax, edi */
  eax = edi;
/* 8e0f18: mov edi, dword ptr [ecx + esi*4 + 0x20] */
  edi = R32((uint32_t)(ecx + esi*4 + 0x20u));
/* 8e0f1c: mov edx, 1 */
  edx = 0x1u;
/* 8e0f21: jmp 0x8e0ec5 */
  goto L_8e0ec5;
L_8e0f37: /* 8e0f37: push 0xa1d854 */
  { uint32_t v = 0xa1d854u; esp -= 4; W32(esp, v); }
/* 8e0f3c: push 0xaeda54 */
  { uint32_t v = 0xaeda54u; esp -= 4; W32(esp, v); }
/* 8e0f41: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e0f47u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e0f47: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e0f4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e0f4c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e0f4e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e0f53u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e0f53: /* 8e0f53: xor esi, esi */
  esi = 0;
/* 8e0f55: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e0f57: je 0x8e0f76 */
  if (zf) goto L_8e0f76;
L_8e0f59: /* 8e0f59: mov al, byte ptr [ecx + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x56u))) & 0xffu);
/* 8e0f5c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 8e0f5e: jbe 0x8e0f66 */
  if ((cf | zf)) goto L_8e0f66;
L_8e0f60: /* 8e0f60: test byte ptr [ecx + 0x57], 0x21 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x57u))); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e0f64: je 0x8e0f76 */
  if (zf) goto L_8e0f76;
L_8e0f66: /* 8e0f66: mov eax, edi */
  eax = edi;
/* 8e0f68: mov edi, dword ptr [ecx + esi*4 + 0x20] */
  edi = R32((uint32_t)(ecx + esi*4 + 0x20u));
/* 8e0f6c: mov edx, 1 */
  edx = 0x1u;
/* 8e0f71: jmp 0x8e0ec5 */
  goto L_8e0ec5;
L_8e0f76: /* 8e0f76: mov eax, edi */
  eax = edi;
/* 8e0f78: mov edi, dword ptr [ecx + esi*4 + 0x20] */
  edi = R32((uint32_t)(ecx + esi*4 + 0x20u));
/* 8e0f7c: xor edx, edx */
  edx = 0;
/* 8e0f7e: jmp 0x8e0ec5 */
  goto L_8e0ec5;
L_8e0f83: /* 8e0f83: mov edi, dword ptr [ebx + 0x118] */
  edi = R32((uint32_t)(ebx + 0x118u));
/* 8e0f89: mov ecx, dword ptr [ebx + 0x58] */
  ecx = R32((uint32_t)(ebx + 0x58u));
/* 8e0f8c: mov edx, eax */
  edx = eax;
/* 8e0f8e: imul edx, edx, 0x1e */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1eu);
  edx = (uint32_t)r;
  }
/* 8e0f91: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8e0f93: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e0f95: mov edx, dword ptr [ecx + edx*4 + 0x58] */
  edx = R32((uint32_t)(ecx + edx*4 + 0x58u));
/* 8e0f99: je 0x8e0fa6 */
  if (zf) goto L_8e0fa6;
L_8e0f9b: /* 8e0f9b: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 8e0f9e: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e0fa0: mov al, byte ptr [eax + esi + 0x54] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + esi + 0x54u))) & 0xffu);
/* 8e0fa4: jmp 0x8e0fa8 */
  goto L_8e0fa8;
L_8e0fa6: /* 8e0fa6: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_8e0fa8: /* 8e0fa8: mov byte ptr [ebp - 0x1c], al */
  W8((uint32_t)(ebp + 0xffffffe4u), (eax & 0xffu));
/* 8e0fab: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 8e0fae: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8e0fb1: mov ecx, dword ptr [ebx + eax*8 + 0x11c] */
  ecx = R32((uint32_t)(ebx + eax*8 + 0x11cu));
/* 8e0fb8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e0fba: jne 0x8e0fbf */
  if (!zf) goto L_8e0fbf;
L_8e0fbc: /* 8e0fbc: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
L_8e0fbf: /* 8e0fbf: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e0fc2: mov esi, eax */
  esi = eax;
/* 8e0fc4: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 8e0fc6: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8e0fc9: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 8e0fcc: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 8e0fcf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e0fd2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e0fd3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e0fd4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e0fdb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e0fdc: mov esp, ebp */
  esp = ebp;
/* 8e0fde: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e0fdf: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8e1060(void) {
  LOAD_REGS();
L_8e1060: /* 8e1060: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e1061: mov ebp, dword ptr [esp + 8] */
  ebp = R32((uint32_t)(esp + 0x8u));
/* 8e1065: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e1066: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 8e106a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e106b: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 8e106f: nop  */
L_8e1070: /* 8e1070: mov ecx, dword ptr [ebp + 0x58] */
  ecx = R32((uint32_t)(ebp + 0x58u));
/* 8e1073: imul esi, esi, 0x78 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x78u);
  esi = (uint32_t)r;
  }
/* 8e1076: fld dword ptr [esi + ecx + 4] */
  { double v = F32((uint32_t)(esi + ecx + 0x4u)); FPUSH(v); }
/* 8e107a: mov al, byte ptr [esi + ecx + 0x57] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ecx + 0x57u))) & 0xffu);
/* 8e107e: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8e1080: and al, 0x3f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3fu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8e1082: mov byte ptr [esi + 0x57], al */
  W8((uint32_t)(esi + 0x57u), (eax & 0xffu));
/* 8e1085: mov cl, al */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 8e1087: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 8e108a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8e108d: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 8e1090: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1092: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8e1094: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 8e1096: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1098: fsub dword ptr [esi + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xcu)));
/* 8e109b: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 8e109e: fchs  */
  ST0 = -ST0;
/* 8e10a0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8e10a2: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8e10a4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e10a6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e10a9: jp 0x8e10b8 */
  if (pf) goto L_8e10b8;
L_8e10ab: /* 8e10ab: or cl, 0x80 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a | b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8e10ae: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e10b0: mov byte ptr [esi + 0x57], cl */
  W8((uint32_t)(esi + 0x57u), (ecx & 0xffu));
/* 8e10b3: mov esi, dword ptr [esi + 0x20] */
  esi = R32((uint32_t)(esi + 0x20u));
/* 8e10b6: jmp 0x8e10e0 */
  goto L_8e10e0;
L_8e10b8: /* 8e10b8: fcomp dword ptr [edi + 0xc] */
  fpu_com(ST0, F32((uint32_t)(edi + 0xcu)));
  FPOP();
/* 8e10bb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e10bd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e10c0: jne 0x8e10ca */
  if (!zf) goto L_8e10ca;
L_8e10c2: /* 8e10c2: or cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a | b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8e10c5: mov byte ptr [esi + 0x57], cl */
  W8((uint32_t)(esi + 0x57u), (ecx & 0xffu));
/* 8e10c8: jmp 0x8e10dd */
  goto L_8e10dd;
L_8e10ca: /* 8e10ca: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 8e10cd: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e10d0: je 0x8e10dd */
  if (zf) goto L_8e10dd;
L_8e10d2: /* 8e10d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e10d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e10d4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e10d5: call 0x8e1060 */
  esp -= 4; W32(esp, 0x8e10dau); SPILL(); f_8e1060(); if (g_unwind) return; RELOAD();
/* 8e10da: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8e10dd: /* 8e10dd: mov esi, dword ptr [esi + 0x24] */
  esi = R32((uint32_t)(esi + 0x24u));
L_8e10e0: /* 8e10e0: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e10e3: jne 0x8e1070 */
  if (!zf) goto L_8e1070;
L_8e10e5: /* 8e10e5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e10e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e10e7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e10e8: ret  */
  esp += 4; SPILL(); return;
}

void f_8e1120(void) {
  LOAD_REGS();
L_8e1120: /* 8e1120: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e1121: mov ebp, esp */
  ebp = esp;
/* 8e1123: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e1125: push 0x9d8870 */
  { uint32_t v = 0x9d8870u; esp -= 4; W32(esp, v); }
/* 8e112a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e1130: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e1131: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e1138: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e113b: mov eax, dword ptr [ecx + 0x5c] */
  eax = R32((uint32_t)(ecx + 0x5cu));
/* 8e113e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e1140: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e1141: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e1142: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e1143: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e1146: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e114d: je 0x8e115e */
  if (zf) goto L_8e115e;
L_8e114f: /* 8e114f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e1152: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e1153: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e1155: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e1156: call 0x8e1060 */
  esp -= 4; W32(esp, 0x8e115bu); SPILL(); f_8e1060(); if (g_unwind) return; RELOAD();
/* 8e115b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8e115e: /* 8e115e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e1161: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e1162: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e1163: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e116a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e116b: mov esp, ebp */
  esp = ebp;
/* 8e116d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e116e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e1171(void) {
  LOAD_REGS();
L_8e1171: /* 8e1171: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e1174: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e1179: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8e117c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e117d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8e1180: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e1185u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e1185(); return;
}

void f_8e1185(void) {
  LOAD_REGS();
L_8e1185: /* 8e1185: push 0xa1d884 */
  { uint32_t v = 0xa1d884u; esp -= 4; W32(esp, v); }
/* 8e118a: push 0xaeda64 */
  { uint32_t v = 0xaeda64u; esp -= 4; W32(esp, v); }
/* 8e118f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e1195u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e1195: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e1198: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e119a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e119c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e11a1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e11a1: guest_badaddr(0x8e11a1); return;
}

void f_8e11e0(void) {
  LOAD_REGS();
L_8e11e0: /* 8e11e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e11e1: mov ebp, esp */
  ebp = esp;
/* 8e11e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e11e5: push 0x9d8880 */
  { uint32_t v = 0x9d8880u; esp -= 4; W32(esp, v); }
/* 8e11ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e11f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e11f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e11f8: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e11fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e11fc: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 8e11ff: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 8e1201: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e1202: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e1203: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 8e1206: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 8e1209: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8e120c: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 8e120f: mov eax, esi */
  eax = esi;
/* 8e1211: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 8e1213: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e1216: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e121d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e121f: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 8e1222: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 8e1224: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 8e1227: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 8e1229: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e122b: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 8e122e: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 8e1231: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 8e1234: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 8e1237: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e1239: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8e123c: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8e123f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8e1241: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8e1244: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8e1247: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8e124a: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8e124d: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8e1250: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8e1253: mov ecx, esi */
  ecx = esi;
/* 8e1255: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8e125bu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8e125b: fst dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0);
/* 8e125e: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 8e1261: fcomp dword ptr [0xa1b8f4] */
  fpu_com(ST0, F32((uint32_t)(0xa1b8f4u)));
  FPOP();
/* 8e1267: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e1269: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e126c: jp 0x8e12b2 */
  if (pf) goto L_8e12b2;
L_8e126e: /* 8e126e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8e1271: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 8e1278: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8e127b: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 8e127d: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 8e1284: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8e1287: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 8e128a: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 8e1291: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8e1294: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 8e1297: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 8e1299: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 8e129c: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 8e129f: xor eax, eax */
  eax = 0;
/* 8e12a1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e12a4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e12ab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e12ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e12ad: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e12ae: mov esp, ebp */
  esp = ebp;
/* 8e12b0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e12b1: ret  */
  esp += 4; SPILL(); return;
L_8e12b2: /* 8e12b2: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 8e12b5: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 8e12b8: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8e12ba: mov dword ptr [ebp + 0x14], edx */
  W32((uint32_t)(ebp + 0x14u), edx);
/* 8e12bd: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8e12c0: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 8e12c3: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 8e12c5: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8e12c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e12c9: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 8e12cc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e12ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e12cf: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 8e12d1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8e12d4: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 8e12d7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8e12d9: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 8e12dc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e12de: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8e12e1: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 8e12e4: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 8e12e7: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 8e12ea: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e12ec: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8e12ef: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e12f1: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 8e12f4: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 8e12f7: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 8e12fa: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8e12fd: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8e1300: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 8e1303: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 8e1306: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8e1309: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8e130c: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 8e130e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8e1310: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 8e1313: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e1315: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8e1317: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 8e131a: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8e131c: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 8e131f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e1321: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8e1324: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 8e1327: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8e132a: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 8e132d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e132f: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8e1332: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e1334: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 8e1337: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 8e133a: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 8e133d: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8e1340: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8e1343: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 8e1346: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8e1349: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8e134c: fadd dword ptr [ebp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xcu)));
/* 8e134f: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8e1352: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8e1355: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8e1358: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8e135b: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8e135e: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8e1361: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8e1364: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8e136au); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8e136a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8e136c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8e136f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8e1371: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8e1374: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8e1377: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8e137a: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8e137d: mov ecx, esi */
  ecx = esi;
/* 8e137f: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8e1385u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8e1385: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e1388: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e1389: mov eax, 1 */
  eax = 0x1u;
/* 8e138e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e1395: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e1396: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e1397: mov esp, ebp */
  esp = ebp;
/* 8e1399: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e139a: ret  */
  esp += 4; SPILL(); return;
}

void f_8e139b(void) {
  LOAD_REGS();
L_8e139b: /* 8e139b: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8e139e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e13a3: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 8e13a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e13a7: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8e13aa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e13afu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e13af(); return;
}

void f_8e13af(void) {
  LOAD_REGS();
L_8e13af: /* 8e13af: push 0xa1d8d0 */
  { uint32_t v = 0xa1d8d0u; esp -= 4; W32(esp, v); }
/* 8e13b4: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8e13b9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e13bfu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e13bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e13c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e13c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e13c6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e13cbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e13cb: guest_badaddr(0x8e13cb); return;
}

void f_8e1450(void) {
  LOAD_REGS();
L_8e1450: /* 8e1450: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e1452: push 0x9d8899 */
  { uint32_t v = 0x9d8899u; esp -= 4; W32(esp, v); }
/* 8e1457: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e145d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e145e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e1465: sub esp, 0x140 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x140u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e146b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e146c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e146d: mov ebp, dword ptr [esp + 0x160] */
  ebp = R32((uint32_t)(esp + 0x160u));
/* 8e1474: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e1475: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e1476: mov edi, dword ptr [esp + 0x164] */
  edi = R32((uint32_t)(esp + 0x164u));
/* 8e147d: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e1480: mov ebx, ecx */
  ebx = ecx;
/* 8e1482: mov dword ptr [esp + 0x50], 1 */
  W32((uint32_t)(esp + 0x50u), 0x1u);
/* 8e148a: je 0x8e160d */
  if (zf) goto L_8e160d;
L_8e1490: /* 8e1490: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 8e1493: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* 8e1496: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 8e1499: mov esi, edi */
  esi = edi;
/* 8e149b: imul esi, esi, 0x78 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x78u);
  esi = (uint32_t)r;
  }
/* 8e149e: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8e14a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e14a2: je 0x8e14ca */
  if (zf) goto L_8e14ca;
L_8e14a4: /* 8e14a4: lea ecx, [ebx + 0x90] */
  ecx = (uint32_t)(ebx + 0x90u);
/* 8e14aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e14ab: lea edx, [ebx + 0xc] */
  edx = (uint32_t)(ebx + 0xcu);
/* 8e14ae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e14af: lea eax, [esp + 0x5c] */
  eax = (uint32_t)(esp + 0x5cu);
/* 8e14b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e14b4: mov ecx, esi */
  ecx = esi;
/* 8e14b6: call dword ptr [0xcfac64] */
  esp -= 4; W32(esp, 0x8e14bcu); SPILL(); f_4e2ea0(); if (g_unwind) return; /* Core!?TransformByUsingAdjointT@FPlane@@QBE?AV1@ABVFMatrix@@0@Z */ RELOAD();
/* 8e14bc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8e14be: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8e14c1: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 8e14c5: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8e14c8: jmp 0x8e14d8 */
  goto L_8e14d8;
L_8e14ca: /* 8e14ca: mov eax, esi */
  eax = esi;
/* 8e14cc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8e14ce: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8e14d1: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 8e14d5: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
L_8e14d8: /* 8e14d8: fld dword ptr [ebx + 0x54] */
  { double v = F32((uint32_t)(ebx + 0x54u)); FPUSH(v); }
/* 8e14db: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 8e14df: fmul dword ptr [0xa10ca8] */
  ST0 = ST0 * (F32((uint32_t)(0xa10ca8u)));
/* 8e14e5: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 8e14e8: fld dword ptr [ebx + 0x50] */
  { double v = F32((uint32_t)(ebx + 0x50u)); FPUSH(v); }
/* 8e14eb: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 8e14ef: fmul dword ptr [0xa10ca8] */
  ST0 = ST0 * (F32((uint32_t)(0xa10ca8u)));
/* 8e14f5: mov eax, 0x7fffffff */
  eax = 0x7fffffffu;
/* 8e14fa: fld dword ptr [ebx + 0x4c] */
  { double v = F32((uint32_t)(ebx + 0x4cu)); FPUSH(v); }
/* 8e14fd: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8e1501: fmul dword ptr [0xa10ca8] */
  ST0 = ST0 * (F32((uint32_t)(0xa10ca8u)));
/* 8e1507: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8e150b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8e150d: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 8e1511: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 8e1515: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1517: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8e1519: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8e151d: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 8e1521: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8e1523: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8e1527: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 8e152b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e152d: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8e152f: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8e1533: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 8e1537: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8e1539: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8e153d: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 8e1541: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1543: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8e1545: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 8e1549: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8e154d: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 8e1551: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 8e1555: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8e1559: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8e155d: fmul dword ptr [ebx + 0x5dc] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x5dcu)));
/* 8e1563: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8e1567: fmul dword ptr [ebx + 0x5d8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x5d8u)));
/* 8e156d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e156f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8e1573: fmul dword ptr [ebx + 0x5d4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x5d4u)));
/* 8e1579: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e157b: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 8e157f: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 8e1583: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8e1587: fchs  */
  ST0 = -ST0;
/* 8e1589: fcomp dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
  FPOP();
/* 8e158d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e158f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e1592: jp 0x8e15c9 */
  if (pf) goto L_8e15c9;
L_8e1594: /* 8e1594: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e1596: jne 0x8e15af */
  if (!zf) goto L_8e15af;
L_8e1598: /* 8e1598: mov al, byte ptr [esi + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x56u))) & 0xffu);
/* 8e159b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 8e159d: jbe 0x8e15ab */
  if ((cf | zf)) goto L_8e15ab;
L_8e159f: /* 8e159f: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 8e15a2: mov cl, byte ptr [esi + 0x57] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x57u))) & 0xffu);
/* 8e15a5: or al, 0x21 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8e15a7: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e15a9: je 0x8e15af */
  if (zf) goto L_8e15af;
L_8e15ab: /* 8e15ab: xor eax, eax */
  eax = 0;
/* 8e15ad: jmp 0x8e15b4 */
  goto L_8e15b4;
L_8e15af: /* 8e15af: mov eax, 1 */
  eax = 0x1u;
L_8e15b4: /* 8e15b4: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 8e15b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e15b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e15b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e15ba: mov ecx, ebx */
  ecx = ebx;
/* 8e15bc: call 0x6c226b */
  esp -= 4; W32(esp, 0x8e15c1u); SPILL(); f_6c226b(); if (g_unwind) return; RELOAD();
/* 8e15c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e15c3: jne 0x8e15c9 */
  if (!zf) goto L_8e15c9;
L_8e15c5: /* 8e15c5: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
L_8e15c9: /* 8e15c9: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e15cb: mov ecx, edi */
  ecx = edi;
/* 8e15cd: mov edi, dword ptr [esi + 0x20] */
  edi = R32((uint32_t)(esi + 0x20u));
/* 8e15d0: je 0x8e15ed */
  if (zf) goto L_8e15ed;
L_8e15d2: /* 8e15d2: mov al, byte ptr [esi + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x56u))) & 0xffu);
/* 8e15d5: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 8e15d7: jbe 0x8e15e6 */
  if ((cf | zf)) goto L_8e15e6;
L_8e15d9: /* 8e15d9: mov edx, dword ptr [ebx + 0x58] */
  edx = R32((uint32_t)(ebx + 0x58u));
/* 8e15dc: mov al, byte ptr [esi + 0x57] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x57u))) & 0xffu);
/* 8e15df: or dl, 0x21 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a | b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8e15e2: test dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e15e4: je 0x8e15ed */
  if (zf) goto L_8e15ed;
L_8e15e6: /* 8e15e6: mov ebp, 1 */
  ebp = 0x1u;
/* 8e15eb: jmp 0x8e15ef */
  goto L_8e15ef;
L_8e15ed: /* 8e15ed: xor ebp, ebp */
  ebp = 0;
L_8e15ef: /* 8e15ef: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8e15f3: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 8e15f7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e15f9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e15fc: je 0x8e1fd0 */
  if (zf) goto L_8e1fd0;
L_8e1602: /* 8e1602: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e1605: jne 0x8e1490 */
  if (!zf) goto L_8e1490;
L_8e160b: /* 8e160b: jmp 0x8e1614 */
  goto L_8e1614;
L_8e160d: /* 8e160d: mov ecx, dword ptr [esp + 0x160] */
  ecx = R32((uint32_t)(esp + 0x160u));
L_8e1614: /* 8e1614: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e1616: jne 0x8e1fd0 */
  if (!zf) goto L_8e1fd0;
L_8e161c: /* 8e161c: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 8e161f: imul ecx, ecx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x78u);
  ecx = (uint32_t)r;
  }
/* 8e1622: mov edx, dword ptr [eax + 0x58] */
  edx = R32((uint32_t)(eax + 0x58u));
/* 8e1625: lea eax, [edx + ecx] */
  eax = (uint32_t)(edx + ecx);
/* 8e1628: cmp dword ptr [eax + 0x4c], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e162c: je 0x8e1fd0 */
  if (zf) goto L_8e1fd0;
L_8e1632: /* 8e1632: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e1633: mov ecx, ebx */
  ecx = ebx;
/* 8e1635: call 0x6c5231 */
  esp -= 4; W32(esp, 0x8e163au); SPILL(); f_6c5231(); if (g_unwind) return; RELOAD();
/* 8e163a: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 8e163d: xor esi, esi */
  esi = 0;
/* 8e163f: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e1641: jle 0x8e167b */
  if ((zf || sf != of)) goto L_8e167b;
L_8e1643: /* 8e1643: lea edi, [ebx + 0xd0] */
  edi = (uint32_t)(ebx + 0xd0u);
/* 8e1649: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8e1650: /* 8e1650: mov eax, dword ptr [ebx + 0x5d0] */
  eax = R32((uint32_t)(ebx + 0x5d0u));
/* 8e1656: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 8e1659: and ecx, 0xbfffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xbfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8e165f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e1660: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e1661: mov ecx, ebx */
  ecx = ebx;
/* 8e1663: call 0x6c8e45 */
  esp -= 4; W32(esp, 0x8e1668u); SPILL(); f_6c8e45(); if (g_unwind) return; RELOAD();
/* 8e1668: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e166a: je 0x8e1fd0 */
  if (zf) goto L_8e1fd0;
L_8e1670: /* 8e1670: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 8e1673: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8e1674: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8e1677: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e1679: jl 0x8e1650 */
  if ((sf != of)) goto L_8e1650;
L_8e167b: /* 8e167b: cmp dword ptr [ebx + 8], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e167e: jne 0x8e17ee */
  if (!zf) goto L_8e17ee;
L_8e1684: /* 8e1684: fld dword ptr [ebx + 0x74] */
  { double v = F32((uint32_t)(ebx + 0x74u)); FPUSH(v); }
/* 8e1687: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e1689: fsubr qword ptr [0xa15940] */
  ST0 = (F64((uint32_t)(0xa15940u))) - ST0;
/* 8e168f: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 8e1693: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e1694: mov ecx, ebx */
  ecx = ebx;
/* 8e1696: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8e169a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8e16a2: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 8e16aa: mov dword ptr [esp + 0x20], 0xbf800000 */
  W32((uint32_t)(esp + 0x20u), 0xbf800000u);
/* 8e16b2: call 0x6c8e45 */
  esp -= 4; W32(esp, 0x8e16b7u); SPILL(); f_6c8e45(); if (g_unwind) return; RELOAD();
/* 8e16b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e16b9: je 0x8e1fd0 */
  if (zf) goto L_8e1fd0;
L_8e16bf: /* 8e16bf: fld dword ptr [ebx + 0x80] */
  { double v = F32((uint32_t)(ebx + 0x80u)); FPUSH(v); }
/* 8e16c5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e16c7: fadd qword ptr [0xa15940] */
  ST0 = ST0 + (F64((uint32_t)(0xa15940u)));
/* 8e16cd: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 8e16d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e16d2: mov ecx, ebx */
  ecx = ebx;
/* 8e16d4: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8e16d8: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8e16e0: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 8e16e8: mov dword ptr [esp + 0x20], 0x3f800000 */
  W32((uint32_t)(esp + 0x20u), 0x3f800000u);
/* 8e16f0: call 0x6c8e45 */
  esp -= 4; W32(esp, 0x8e16f5u); SPILL(); f_6c8e45(); if (g_unwind) return; RELOAD();
/* 8e16f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e16f7: je 0x8e1fd0 */
  if (zf) goto L_8e1fd0;
L_8e16fd: /* 8e16fd: fld dword ptr [ebx + 0x6c] */
  { double v = F32((uint32_t)(ebx + 0x6cu)); FPUSH(v); }
/* 8e1700: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e1702: fsubr qword ptr [0xa15940] */
  ST0 = (F64((uint32_t)(0xa15940u))) - ST0;
/* 8e1708: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8e170c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e170d: mov ecx, ebx */
  ecx = ebx;
/* 8e170f: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8e1713: mov dword ptr [esp + 0x18], 0xbf800000 */
  W32((uint32_t)(esp + 0x18u), 0xbf800000u);
/* 8e171b: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 8e1723: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 8e172b: call 0x6c8e45 */
  esp -= 4; W32(esp, 0x8e1730u); SPILL(); f_6c8e45(); if (g_unwind) return; RELOAD();
/* 8e1730: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e1732: je 0x8e1fd0 */
  if (zf) goto L_8e1fd0;
L_8e1738: /* 8e1738: fld dword ptr [ebx + 0x78] */
  { double v = F32((uint32_t)(ebx + 0x78u)); FPUSH(v); }
/* 8e173b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e173d: fsub qword ptr [0xa15940] */
  ST0 = ST0 - (F64((uint32_t)(0xa15940u)));
/* 8e1743: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 8e1747: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e1748: mov ecx, ebx */
  ecx = ebx;
/* 8e174a: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8e174e: mov dword ptr [esp + 0x18], 0x3f800000 */
  W32((uint32_t)(esp + 0x18u), 0x3f800000u);
/* 8e1756: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 8e175e: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 8e1766: call 0x6c8e45 */
  esp -= 4; W32(esp, 0x8e176bu); SPILL(); f_6c8e45(); if (g_unwind) return; RELOAD();
/* 8e176b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e176d: je 0x8e1fd0 */
  if (zf) goto L_8e1fd0;
L_8e1773: /* 8e1773: fld dword ptr [ebx + 0x70] */
  { double v = F32((uint32_t)(ebx + 0x70u)); FPUSH(v); }
/* 8e1776: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e1778: fsubr qword ptr [0xa15940] */
  ST0 = (F64((uint32_t)(0xa15940u))) - ST0;
/* 8e177e: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 8e1782: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e1783: mov ecx, ebx */
  ecx = ebx;
/* 8e1785: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8e1789: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8e1791: mov dword ptr [esp + 0x1c], 0xbf800000 */
  W32((uint32_t)(esp + 0x1cu), 0xbf800000u);
/* 8e1799: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 8e17a1: call 0x6c8e45 */
  esp -= 4; W32(esp, 0x8e17a6u); SPILL(); f_6c8e45(); if (g_unwind) return; RELOAD();
/* 8e17a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e17a8: je 0x8e1fd0 */
  if (zf) goto L_8e1fd0;
L_8e17ae: /* 8e17ae: fld dword ptr [ebx + 0x7c] */
  { double v = F32((uint32_t)(ebx + 0x7cu)); FPUSH(v); }
/* 8e17b1: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e17b3: fsub qword ptr [0xa15940] */
  ST0 = ST0 - (F64((uint32_t)(0xa15940u)));
/* 8e17b9: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8e17bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e17be: mov ecx, ebx */
  ecx = ebx;
/* 8e17c0: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8e17c4: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8e17cc: mov dword ptr [esp + 0x1c], 0x3f800000 */
  W32((uint32_t)(esp + 0x1cu), 0x3f800000u);
/* 8e17d4: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 8e17dc: call 0x6c8e45 */
  esp -= 4; W32(esp, 0x8e17e1u); SPILL(); f_6c8e45(); if (g_unwind) return; RELOAD();
/* 8e17e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e17e3: jne 0x8e19f6 */
  if (!zf) goto L_8e19f6;
L_8e17e9: /* 8e17e9: jmp 0x8e1fd0 */
  goto L_8e1fd0;
L_8e17ee: /* 8e17ee: lea edx, [esp + 0x110] */
  edx = (uint32_t)(esp + 0x110u);
/* 8e17f5: lea esi, [ebx + 0xc] */
  esi = (uint32_t)(ebx + 0xcu);
/* 8e17f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e17f9: mov ecx, esi */
  ecx = esi;
/* 8e17fb: call dword ptr [0xcfa590] */
  esp -= 4; W32(esp, 0x8e1801u); SPILL(); f_4e1e9c(); if (g_unwind) return; /* Core!?TransposeAdjoint@FMatrix@@QBE?AV1@XZ */ RELOAD();
/* 8e1801: fld dword ptr [ebx + 0x74] */
  { double v = F32((uint32_t)(ebx + 0x74u)); FPUSH(v); }
/* 8e1804: fsubr qword ptr [0xa15940] */
  ST0 = (F64((uint32_t)(0xa15940u))) - ST0;
/* 8e180a: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 8e180d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e180e: lea eax, [esp + 0x114] */
  eax = (uint32_t)(esp + 0x114u);
/* 8e1815: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e1816: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8e181a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e181b: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 8e181f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e1820: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 8e1824: mov dword ptr [esp + 0x168], ebp */
  W32((uint32_t)(esp + 0x168u), ebp);
/* 8e182b: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 8e1833: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 8e183b: mov dword ptr [esp + 0x28], 0xbf800000 */
  W32((uint32_t)(esp + 0x28u), 0xbf800000u);
/* 8e1843: call dword ptr [0xcfac64] */
  esp -= 4; W32(esp, 0x8e1849u); SPILL(); f_4e2ea0(); if (g_unwind) return; /* Core!?TransformByUsingAdjointT@FPlane@@QBE?AV1@ABVFMatrix@@0@Z */ RELOAD();
/* 8e1849: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e184a: mov ecx, ebx */
  ecx = ebx;
/* 8e184c: call 0x6c8e45 */
  esp -= 4; W32(esp, 0x8e1851u); SPILL(); f_6c8e45(); if (g_unwind) return; RELOAD();
/* 8e1851: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e1853: je 0x8e1fbc */
  if (zf) goto L_8e1fbc;
L_8e1859: /* 8e1859: fld dword ptr [ebx + 0x80] */
  { double v = F32((uint32_t)(ebx + 0x80u)); FPUSH(v); }
/* 8e185f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e1860: fadd qword ptr [0xa15940] */
  ST0 = ST0 + (F64((uint32_t)(0xa15940u)));
/* 8e1866: lea edx, [esp + 0x114] */
  edx = (uint32_t)(esp + 0x114u);
/* 8e186d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e186e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e186f: lea eax, [esp + 0x60] */
  eax = (uint32_t)(esp + 0x60u);
/* 8e1873: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8e1877: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e1878: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 8e187c: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 8e1884: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 8e188c: mov dword ptr [esp + 0x28], 0x3f800000 */
  W32((uint32_t)(esp + 0x28u), 0x3f800000u);
/* 8e1894: call dword ptr [0xcfac64] */
  esp -= 4; W32(esp, 0x8e189au); SPILL(); f_4e2ea0(); if (g_unwind) return; /* Core!?TransformByUsingAdjointT@FPlane@@QBE?AV1@ABVFMatrix@@0@Z */ RELOAD();
/* 8e189a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e189b: mov ecx, ebx */
  ecx = ebx;
/* 8e189d: call 0x6c8e45 */
  esp -= 4; W32(esp, 0x8e18a2u); SPILL(); f_6c8e45(); if (g_unwind) return; RELOAD();
/* 8e18a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e18a4: je 0x8e1fbc */
  if (zf) goto L_8e1fbc;
L_8e18aa: /* 8e18aa: fld dword ptr [ebx + 0x6c] */
  { double v = F32((uint32_t)(ebx + 0x6cu)); FPUSH(v); }
/* 8e18ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e18ae: fsubr qword ptr [0xa15940] */
  ST0 = (F64((uint32_t)(0xa15940u))) - ST0;
/* 8e18b4: lea ecx, [esp + 0x114] */
  ecx = (uint32_t)(esp + 0x114u);
/* 8e18bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e18bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e18bd: lea edx, [esp + 0x60] */
  edx = (uint32_t)(esp + 0x60u);
/* 8e18c1: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8e18c5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e18c6: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 8e18ca: mov dword ptr [esp + 0x20], 0xbf800000 */
  W32((uint32_t)(esp + 0x20u), 0xbf800000u);
/* 8e18d2: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 8e18da: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 8e18e2: call dword ptr [0xcfac64] */
  esp -= 4; W32(esp, 0x8e18e8u); SPILL(); f_4e2ea0(); if (g_unwind) return; /* Core!?TransformByUsingAdjointT@FPlane@@QBE?AV1@ABVFMatrix@@0@Z */ RELOAD();
/* 8e18e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e18e9: mov ecx, ebx */
  ecx = ebx;
/* 8e18eb: call 0x6c8e45 */
  esp -= 4; W32(esp, 0x8e18f0u); SPILL(); f_6c8e45(); if (g_unwind) return; RELOAD();
/* 8e18f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e18f2: je 0x8e1fbc */
  if (zf) goto L_8e1fbc;
L_8e18f8: /* 8e18f8: fld dword ptr [ebx + 0x78] */
  { double v = F32((uint32_t)(ebx + 0x78u)); FPUSH(v); }
/* 8e18fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e18fc: fsub qword ptr [0xa15940] */
  ST0 = ST0 - (F64((uint32_t)(0xa15940u)));
/* 8e1902: lea eax, [esp + 0x114] */
  eax = (uint32_t)(esp + 0x114u);
/* 8e1909: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e190a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e190b: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 8e190f: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8e1913: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e1914: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 8e1918: mov dword ptr [esp + 0x20], 0x3f800000 */
  W32((uint32_t)(esp + 0x20u), 0x3f800000u);
/* 8e1920: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 8e1928: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 8e1930: call dword ptr [0xcfac64] */
  esp -= 4; W32(esp, 0x8e1936u); SPILL(); f_4e2ea0(); if (g_unwind) return; /* Core!?TransformByUsingAdjointT@FPlane@@QBE?AV1@ABVFMatrix@@0@Z */ RELOAD();
/* 8e1936: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e1937: mov ecx, ebx */
  ecx = ebx;
/* 8e1939: call 0x6c8e45 */
  esp -= 4; W32(esp, 0x8e193eu); SPILL(); f_6c8e45(); if (g_unwind) return; RELOAD();
/* 8e193e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e1940: je 0x8e1fbc */
  if (zf) goto L_8e1fbc;
L_8e1946: /* 8e1946: fld dword ptr [ebx + 0x70] */
  { double v = F32((uint32_t)(ebx + 0x70u)); FPUSH(v); }
/* 8e1949: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e194a: fsubr qword ptr [0xa15940] */
  ST0 = (F64((uint32_t)(0xa15940u))) - ST0;
/* 8e1950: lea edx, [esp + 0x114] */
  edx = (uint32_t)(esp + 0x114u);
/* 8e1957: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e1958: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e1959: lea eax, [esp + 0x60] */
  eax = (uint32_t)(esp + 0x60u);
/* 8e195d: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8e1961: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e1962: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 8e1966: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 8e196e: mov dword ptr [esp + 0x24], 0xbf800000 */
  W32((uint32_t)(esp + 0x24u), 0xbf800000u);
/* 8e1976: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 8e197e: call dword ptr [0xcfac64] */
  esp -= 4; W32(esp, 0x8e1984u); SPILL(); f_4e2ea0(); if (g_unwind) return; /* Core!?TransformByUsingAdjointT@FPlane@@QBE?AV1@ABVFMatrix@@0@Z */ RELOAD();
/* 8e1984: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e1985: mov ecx, ebx */
  ecx = ebx;
/* 8e1987: call 0x6c8e45 */
  esp -= 4; W32(esp, 0x8e198cu); SPILL(); f_6c8e45(); if (g_unwind) return; RELOAD();
/* 8e198c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e198e: je 0x8e1fbc */
  if (zf) goto L_8e1fbc;
L_8e1994: /* 8e1994: fld dword ptr [ebx + 0x7c] */
  { double v = F32((uint32_t)(ebx + 0x7cu)); FPUSH(v); }
/* 8e1997: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e1998: fsub qword ptr [0xa15940] */
  ST0 = ST0 - (F64((uint32_t)(0xa15940u)));
/* 8e199e: lea ecx, [esp + 0x114] */
  ecx = (uint32_t)(esp + 0x114u);
/* 8e19a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e19a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e19a7: lea edx, [esp + 0x60] */
  edx = (uint32_t)(esp + 0x60u);
/* 8e19ab: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8e19af: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e19b0: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 8e19b4: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 8e19bc: mov dword ptr [esp + 0x24], 0x3f800000 */
  W32((uint32_t)(esp + 0x24u), 0x3f800000u);
/* 8e19c4: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 8e19cc: call dword ptr [0xcfac64] */
  esp -= 4; W32(esp, 0x8e19d2u); SPILL(); f_4e2ea0(); if (g_unwind) return; /* Core!?TransformByUsingAdjointT@FPlane@@QBE?AV1@ABVFMatrix@@0@Z */ RELOAD();
/* 8e19d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e19d3: mov ecx, ebx */
  ecx = ebx;
/* 8e19d5: call 0x6c8e45 */
  esp -= 4; W32(esp, 0x8e19dau); SPILL(); f_6c8e45(); if (g_unwind) return; RELOAD();
/* 8e19da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e19dc: je 0x8e1fbc */
  if (zf) goto L_8e1fbc;
L_8e19e2: /* 8e19e2: lea ecx, [esp + 0x110] */
  ecx = (uint32_t)(esp + 0x110u);
/* 8e19e9: mov dword ptr [esp + 0x158], edi */
  W32((uint32_t)(esp + 0x158u), edi);
/* 8e19f0: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8e19f6u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_8e19f6: /* 8e19f6: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 8e19f9: xor ecx, ecx */
  ecx = 0;
/* 8e19fb: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e19fd: mov dword ptr [esp + 0x64], ecx */
  W32((uint32_t)(esp + 0x64u), ecx);
/* 8e1a01: jle 0x8e1fb6 */
  if ((zf || sf != of)) goto L_8e1fb6;
L_8e1a07: /* 8e1a07: lea eax, [ebx + 0x4d0] */
  eax = (uint32_t)(ebx + 0x4d0u);
/* 8e1a0d: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8e1a11: lea esi, [ebx + 0xd8] */
  esi = (uint32_t)(ebx + 0xd8u);
/* 8e1a17: jmp 0x8e1a20 */
  goto L_8e1a20;
L_8e1a20: /* 8e1a20: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e1a22: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 8e1a26: jle 0x8e1f98 */
  if ((zf || sf != of)) goto L_8e1f98;
L_8e1a2c: /* 8e1a2c: lea eax, [ebx + 0x4d0] */
  eax = (uint32_t)(ebx + 0x4d0u);
/* 8e1a32: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 8e1a36: lea edi, [ebx + 0xd4] */
  edi = (uint32_t)(ebx + 0xd4u);
/* 8e1a3c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8e1a40: /* 8e1a40: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 8e1a44: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e1a46: or edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8e1a48: mov eax, edx */
  eax = edx;
/* 8e1a4a: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8e1a4d: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8e1a4f: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 8e1a53: jne 0x8e1bfb */
  if (!zf) goto L_8e1bfb;
L_8e1a59: /* 8e1a59: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8e1a5b: lea ebp, [esi - 8] */
  ebp = (uint32_t)(esi + 0xfffffff8u);
/* 8e1a5e: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1a64: lea ecx, [edi - 4] */
  ecx = (uint32_t)(edi + 0xfffffffcu);
/* 8e1a67: fld dword ptr [esi - 4] */
  { double v = F32((uint32_t)(esi + 0xfffffffcu)); FPUSH(v); }
/* 8e1a6a: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1a70: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e1a72: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 8e1a75: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1a7b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8e1a7d: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 8e1a7f: fld dword ptr [esi - 4] */
  { double v = F32((uint32_t)(esi + 0xfffffffcu)); FPUSH(v); }
/* 8e1a82: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 8e1a84: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8e1a87: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1a8d: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8e1a8f: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1a95: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e1a97: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8e1a99: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1a9f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8e1aa1: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 8e1aa4: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8e1aa8: fsubr dword ptr [edi] */
  ST0 = (F32((uint32_t)(edi))) - ST0;
/* 8e1aaa: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8e1aac: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8e1ab0: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8e1ab2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1ab4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e1ab6: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 8e1ab8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1aba: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 8e1ac0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1ac2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1ac4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e1ac6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1ac8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e1acb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1acd: jne 0x8e1bfb */
  if (!zf) goto L_8e1bfb;
L_8e1ad3: /* 8e1ad3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e1ad4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e1ad5: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 8e1ad9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e1ada: lea edx, [esp + 0xb4] */
  edx = (uint32_t)(esp + 0xb4u);
/* 8e1ae1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e1ae2: call 0x6c4b15 */
  esp -= 4; W32(esp, 0x8e1ae7u); SPILL(); f_6c4b15(); if (g_unwind) return; RELOAD();
/* 8e1ae7: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 8e1aee: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1af4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e1af7: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 8e1afb: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 8e1aff: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1b05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e1b06: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 8e1b0d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e1b0f: fstp dword ptr [esp + 0x94] */
  WF32((uint32_t)(esp + 0x94u), ST0); FPOP();
/* 8e1b16: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 8e1b1a: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1b20: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 8e1b24: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 8e1b26: fstp dword ptr [esp + 0x98] */
  WF32((uint32_t)(esp + 0x98u), ST0); FPOP();
/* 8e1b2d: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 8e1b31: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8e1b33: fstp dword ptr [esp + 0x9c] */
  WF32((uint32_t)(esp + 0x9cu), ST0); FPOP();
/* 8e1b3a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1b3c: call dword ptr [0xcfab34] */
  esp -= 4; W32(esp, 0x8e1b42u); SPILL(); f_4e34f4(); if (g_unwind) return; /* Core!?UnsafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8e1b42: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8e1b46: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 8e1b49: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8e1b4d: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8e1b4f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1b51: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 8e1b55: fmul dword ptr [esi - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffffcu)));
/* 8e1b58: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1b5a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e1b60: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e1b62: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e1b65: jp 0x8e1b91 */
  if (pf) goto L_8e1b91;
L_8e1b67: /* 8e1b67: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8e1b6b: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e1b71: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 8e1b75: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 8e1b79: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e1b7f: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 8e1b83: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8e1b87: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e1b8d: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
L_8e1b91: /* 8e1b91: fld dword ptr [esp + 0xac] */
  { double v = F32((uint32_t)(esp + 0xacu)); FPUSH(v); }
/* 8e1b98: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8e1b9c: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 8e1ba0: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 8e1ba4: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 8e1bab: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 8e1baf: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 8e1bb3: mov dword ptr [esp + 0xf0], ecx */
  W32((uint32_t)(esp + 0xf0u), ecx);
/* 8e1bba: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e1bbc: lea ecx, [esp + 0xf4] */
  ecx = (uint32_t)(esp + 0xf4u);
/* 8e1bc3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1bc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e1bc6: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 8e1bcd: mov ecx, ebx */
  ecx = ebx;
/* 8e1bcf: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 8e1bd3: mov dword ptr [esp + 0xfc], edx */
  W32((uint32_t)(esp + 0xfcu), edx);
/* 8e1bda: mov dword ptr [esp + 0x100], eax */
  W32((uint32_t)(esp + 0x100u), eax);
/* 8e1be1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1be3: fstp dword ptr [esp + 0x104] */
  WF32((uint32_t)(esp + 0x104u), ST0); FPOP();
/* 8e1bea: call 0x6c8e45 */
  esp -= 4; W32(esp, 0x8e1befu); SPILL(); f_6c8e45(); if (g_unwind) return; RELOAD();
/* 8e1bef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e1bf1: je 0x8e1fd0 */
  if (zf) goto L_8e1fd0;
L_8e1bf7: /* 8e1bf7: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
L_8e1bfb: /* 8e1bfb: mov eax, edx */
  eax = edx;
/* 8e1bfd: and eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8e1c00: cmp al, 0xc */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8e1c02: jne 0x8e1dbc */
  if (!zf) goto L_8e1dbc;
L_8e1c08: /* 8e1c08: fld dword ptr [esi - 4] */
  { double v = F32((uint32_t)(esi + 0xfffffffcu)); FPUSH(v); }
/* 8e1c0b: lea ebp, [esi - 8] */
  ebp = (uint32_t)(esi + 0xfffffff8u);
/* 8e1c0e: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1c14: lea ecx, [edi - 4] */
  ecx = (uint32_t)(edi + 0xfffffffcu);
/* 8e1c17: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8e1c19: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8e1c1b: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 8e1c1e: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1c24: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8e1c26: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1c2c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e1c2e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8e1c30: fsub dword ptr [ebp] */
  ST0 = ST0 - (F32((uint32_t)(ebp)));
/* 8e1c33: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8e1c35: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1c3b: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8e1c3e: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8e1c40: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8e1c42: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1c48: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8e1c4b: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1c51: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e1c53: fstp dword ptr [esp + 0xdc] */
  WF32((uint32_t)(esp + 0xdcu), ST0); FPOP();
/* 8e1c5a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e1c5c: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 8e1c5e: fst dword ptr [esp + 0xe0] */
  WF32((uint32_t)(esp + 0xe0u), ST0);
/* 8e1c65: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8e1c67: fld dword ptr [esp + 0xdc] */
  { double v = F32((uint32_t)(esp + 0xdcu)); FPUSH(v); }
/* 8e1c6e: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 8e1c70: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1c72: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e1c74: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8e1c76: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1c78: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 8e1c7e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1c80: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e1c82: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 8e1c84: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e1c87: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1c89: jne 0x8e1dbc */
  if (!zf) goto L_8e1dbc;
L_8e1c8f: /* 8e1c8f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e1c90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e1c91: lea ecx, [esp + 0x80] */
  ecx = (uint32_t)(esp + 0x80u);
/* 8e1c98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e1c99: lea edx, [esp + 0xc0] */
  edx = (uint32_t)(esp + 0xc0u);
/* 8e1ca0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e1ca1: call 0x6c4b15 */
  esp -= 4; W32(esp, 0x8e1ca6u); SPILL(); f_6c4b15(); if (g_unwind) return; RELOAD();
/* 8e1ca6: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 8e1cad: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1cb3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e1cb6: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 8e1cbd: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 8e1cc1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e1cc2: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8e1cc4: lea ecx, [esp + 0xc4] */
  ecx = (uint32_t)(esp + 0xc4u);
/* 8e1ccb: fstp dword ptr [esp + 0xc4] */
  WF32((uint32_t)(esp + 0xc4u), ST0); FPOP();
/* 8e1cd2: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 8e1cd6: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1cdc: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 8e1ce3: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1ce9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e1ceb: fstp dword ptr [esp + 0xc8] */
  WF32((uint32_t)(esp + 0xc8u), ST0); FPOP();
/* 8e1cf2: fsub dword ptr [esp + 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x7cu)));
/* 8e1cf6: fstp dword ptr [esp + 0xcc] */
  WF32((uint32_t)(esp + 0xccu), ST0); FPOP();
/* 8e1cfd: call dword ptr [0xcfab34] */
  esp -= 4; W32(esp, 0x8e1d03u); SPILL(); f_4e34f4(); if (g_unwind) return; /* Core!?UnsafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8e1d03: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 8e1d07: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 8e1d0a: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 8e1d0e: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8e1d10: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1d12: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 8e1d16: fmul dword ptr [esi - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffffcu)));
/* 8e1d19: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1d1b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e1d21: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e1d23: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e1d26: jp 0x8e1d52 */
  if (pf) goto L_8e1d52;
L_8e1d28: /* 8e1d28: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 8e1d2c: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e1d32: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8e1d36: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 8e1d3a: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e1d40: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 8e1d44: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 8e1d48: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e1d4e: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
L_8e1d52: /* 8e1d52: fld dword ptr [esp + 0xb8] */
  { double v = F32((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* 8e1d59: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 8e1d5d: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 8e1d61: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 8e1d65: fld dword ptr [esp + 0xbc] */
  { double v = F32((uint32_t)(esp + 0xbcu)); FPUSH(v); }
/* 8e1d6c: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 8e1d70: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 8e1d74: mov dword ptr [esp + 0x100], ecx */
  W32((uint32_t)(esp + 0x100u), ecx);
/* 8e1d7b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e1d7d: lea ecx, [esp + 0x104] */
  ecx = (uint32_t)(esp + 0x104u);
/* 8e1d84: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1d86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e1d87: fld dword ptr [esp + 0xbc] */
  { double v = F32((uint32_t)(esp + 0xbcu)); FPUSH(v); }
/* 8e1d8e: mov ecx, ebx */
  ecx = ebx;
/* 8e1d90: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 8e1d94: mov dword ptr [esp + 0x10c], edx */
  W32((uint32_t)(esp + 0x10cu), edx);
/* 8e1d9b: mov dword ptr [esp + 0x110], eax */
  W32((uint32_t)(esp + 0x110u), eax);
/* 8e1da2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1da4: fstp dword ptr [esp + 0x114] */
  WF32((uint32_t)(esp + 0x114u), ST0); FPOP();
/* 8e1dab: call 0x6c8e45 */
  esp -= 4; W32(esp, 0x8e1db0u); SPILL(); f_6c8e45(); if (g_unwind) return; RELOAD();
/* 8e1db0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e1db2: je 0x8e1fd0 */
  if (zf) goto L_8e1fd0;
L_8e1db8: /* 8e1db8: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
L_8e1dbc: /* 8e1dbc: and edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8e1dbf: cmp dl, 0x30 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8e1dc2: jne 0x8e1f73 */
  if (!zf) goto L_8e1f73;
L_8e1dc8: /* 8e1dc8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8e1dca: lea ebp, [esi - 8] */
  ebp = (uint32_t)(esi + 0xfffffff8u);
/* 8e1dcd: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1dd3: lea ecx, [edi - 4] */
  ecx = (uint32_t)(edi + 0xfffffffcu);
/* 8e1dd6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8e1dd8: fsub dword ptr [esi - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xfffffffcu)));
/* 8e1ddb: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 8e1dde: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 8e1de0: fld dword ptr [esi - 4] */
  { double v = F32((uint32_t)(esi + 0xfffffffcu)); FPUSH(v); }
/* 8e1de3: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1de9: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 8e1dec: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1df2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e1df4: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8e1df7: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1dfd: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8e1dff: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 8e1e01: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8e1e03: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 8e1e05: fstp dword ptr [esp + 0xd0] */
  WF32((uint32_t)(esp + 0xd0u), ST0); FPOP();
/* 8e1e0c: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8e1e0e: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1e14: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8e1e16: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1e1c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e1e1e: fst dword ptr [esp + 0xd4] */
  WF32((uint32_t)(esp + 0xd4u), ST0);
/* 8e1e25: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8e1e27: fld dword ptr [esp + 0xd0] */
  { double v = F32((uint32_t)(esp + 0xd0u)); FPUSH(v); }
/* 8e1e2e: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 8e1e30: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1e32: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e1e34: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 8e1e36: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1e38: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 8e1e3e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1e40: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1e42: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1e44: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e1e46: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1e48: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e1e4b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1e4d: jne 0x8e1f73 */
  if (!zf) goto L_8e1f73;
L_8e1e53: /* 8e1e53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e1e54: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e1e55: lea edx, [esp + 0x8c] */
  edx = (uint32_t)(esp + 0x8cu);
/* 8e1e5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e1e5d: lea eax, [esp + 0xa8] */
  eax = (uint32_t)(esp + 0xa8u);
/* 8e1e64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e1e65: call 0x6c4b15 */
  esp -= 4; W32(esp, 0x8e1e6au); SPILL(); f_6c4b15(); if (g_unwind) return; RELOAD();
/* 8e1e6a: fld dword ptr [esp + 0x9c] */
  { double v = F32((uint32_t)(esp + 0x9cu)); FPUSH(v); }
/* 8e1e71: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1e77: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e1e7a: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 8e1e81: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 8e1e85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e1e86: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 8e1e88: lea ecx, [esp + 0xe8] */
  ecx = (uint32_t)(esp + 0xe8u);
/* 8e1e8f: fstp dword ptr [esp + 0xe8] */
  WF32((uint32_t)(esp + 0xe8u), ST0); FPOP();
/* 8e1e96: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 8e1e9d: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8e1e9f: fstp dword ptr [esp + 0xec] */
  WF32((uint32_t)(esp + 0xecu), ST0); FPOP();
/* 8e1ea6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1ea8: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 8e1eaf: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1eb5: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 8e1ebc: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1ec2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e1ec4: fstp dword ptr [esp + 0xf0] */
  WF32((uint32_t)(esp + 0xf0u), ST0); FPOP();
/* 8e1ecb: call dword ptr [0xcfab34] */
  esp -= 4; W32(esp, 0x8e1ed1u); SPILL(); f_4e34f4(); if (g_unwind) return; /* Core!?UnsafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8e1ed1: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 8e1ed5: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8e1ed7: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 8e1edb: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 8e1ede: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1ee0: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 8e1ee4: fmul dword ptr [esi - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffffcu)));
/* 8e1ee7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1ee9: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e1eef: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e1ef1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e1ef4: jp 0x8e1f20 */
  if (pf) goto L_8e1f20;
L_8e1ef6: /* 8e1ef6: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 8e1efa: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e1f00: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 8e1f04: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 8e1f08: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e1f0e: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 8e1f12: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 8e1f16: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e1f1c: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
L_8e1f20: /* 8e1f20: fld dword ptr [esp + 0xa0] */
  { double v = F32((uint32_t)(esp + 0xa0u)); FPUSH(v); }
/* 8e1f27: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 8e1f2b: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 8e1f2f: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 8e1f33: fld dword ptr [esp + 0xa4] */
  { double v = F32((uint32_t)(esp + 0xa4u)); FPUSH(v); }
/* 8e1f3a: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 8e1f3e: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 8e1f42: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 8e1f46: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e1f48: lea edx, [esp + 0x58] */
  edx = (uint32_t)(esp + 0x58u);
/* 8e1f4c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1f4e: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
/* 8e1f52: fld dword ptr [esp + 0xa0] */
  { double v = F32((uint32_t)(esp + 0xa0u)); FPUSH(v); }
/* 8e1f59: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e1f5a: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 8e1f5e: mov ecx, ebx */
  ecx = ebx;
/* 8e1f60: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 8e1f64: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1f66: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 8e1f6a: call 0x6c8e45 */
  esp -= 4; W32(esp, 0x8e1f6fu); SPILL(); f_6c8e45(); if (g_unwind) return; RELOAD();
/* 8e1f6f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e1f71: je 0x8e1fd0 */
  if (zf) goto L_8e1fd0;
L_8e1f73: /* 8e1f73: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 8e1f77: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 8e1f7b: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 8e1f7f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8e1f80: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e1f83: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8e1f86: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e1f88: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 8e1f8c: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 8e1f90: jl 0x8e1a40 */
  if ((sf != of)) goto L_8e1a40;
L_8e1f96: /* 8e1f96: xor ebp, ebp */
  ebp = 0;
L_8e1f98: /* 8e1f98: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 8e1f9c: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 8e1f9f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8e1fa0: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8e1fa3: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8e1fa6: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e1fa8: mov dword ptr [esp + 0x64], ecx */
  W32((uint32_t)(esp + 0x64u), ecx);
/* 8e1fac: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 8e1fb0: jl 0x8e1a20 */
  if ((sf != of)) goto L_8e1a20;
L_8e1fb6: /* 8e1fb6: mov dword ptr [esp + 0x50], ebp */
  W32((uint32_t)(esp + 0x50u), ebp);
/* 8e1fba: jmp 0x8e1fd0 */
  goto L_8e1fd0;
L_8e1fbc: /* 8e1fbc: lea ecx, [esp + 0x110] */
  ecx = (uint32_t)(esp + 0x110u);
/* 8e1fc3: mov dword ptr [esp + 0x158], edi */
  W32((uint32_t)(esp + 0x158u), edi);
/* 8e1fca: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8e1fd0u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_8e1fd0: /* 8e1fd0: mov ecx, dword ptr [esp + 0x150] */
  ecx = R32((uint32_t)(esp + 0x150u));
/* 8e1fd7: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 8e1fdb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e1fdc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e1fdd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e1fde: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e1fdf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e1fe6: add esp, 0x14c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e1fec: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8e1a19(void) {
  LOAD_REGS();
L_8e1a19: /* 8e1a19: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8e1a20: /* 8e1a20: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e1a22: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 8e1a26: jle 0x8e1f98 */
  if ((zf || sf != of)) goto L_8e1f98;
L_8e1a2c: /* 8e1a2c: lea eax, [ebx + 0x4d0] */
  eax = (uint32_t)(ebx + 0x4d0u);
/* 8e1a32: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 8e1a36: lea edi, [ebx + 0xd4] */
  edi = (uint32_t)(ebx + 0xd4u);
/* 8e1a3c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8e1a40: /* 8e1a40: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 8e1a44: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e1a46: or edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8e1a48: mov eax, edx */
  eax = edx;
/* 8e1a4a: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8e1a4d: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8e1a4f: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 8e1a53: jne 0x8e1bfb */
  if (!zf) goto L_8e1bfb;
L_8e1a59: /* 8e1a59: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8e1a5b: lea ebp, [esi - 8] */
  ebp = (uint32_t)(esi + 0xfffffff8u);
/* 8e1a5e: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1a64: lea ecx, [edi - 4] */
  ecx = (uint32_t)(edi + 0xfffffffcu);
/* 8e1a67: fld dword ptr [esi - 4] */
  { double v = F32((uint32_t)(esi + 0xfffffffcu)); FPUSH(v); }
/* 8e1a6a: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1a70: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e1a72: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 8e1a75: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1a7b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8e1a7d: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 8e1a7f: fld dword ptr [esi - 4] */
  { double v = F32((uint32_t)(esi + 0xfffffffcu)); FPUSH(v); }
/* 8e1a82: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 8e1a84: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8e1a87: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1a8d: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8e1a8f: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1a95: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e1a97: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8e1a99: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1a9f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8e1aa1: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 8e1aa4: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8e1aa8: fsubr dword ptr [edi] */
  ST0 = (F32((uint32_t)(edi))) - ST0;
/* 8e1aaa: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8e1aac: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8e1ab0: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8e1ab2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1ab4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e1ab6: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 8e1ab8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1aba: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 8e1ac0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1ac2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1ac4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e1ac6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1ac8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e1acb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1acd: jne 0x8e1bfb */
  if (!zf) goto L_8e1bfb;
L_8e1ad3: /* 8e1ad3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e1ad4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e1ad5: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 8e1ad9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e1ada: lea edx, [esp + 0xb4] */
  edx = (uint32_t)(esp + 0xb4u);
/* 8e1ae1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e1ae2: call 0x6c4b15 */
  esp -= 4; W32(esp, 0x8e1ae7u); SPILL(); f_6c4b15(); if (g_unwind) return; RELOAD();
/* 8e1ae7: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 8e1aee: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1af4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e1af7: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 8e1afb: lea eax, [esp + 0x2c] */
  eax = (uint32_t)(esp + 0x2cu);
/* 8e1aff: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1b05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e1b06: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 8e1b0d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e1b0f: fstp dword ptr [esp + 0x94] */
  WF32((uint32_t)(esp + 0x94u), ST0); FPOP();
/* 8e1b16: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 8e1b1a: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1b20: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 8e1b24: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 8e1b26: fstp dword ptr [esp + 0x98] */
  WF32((uint32_t)(esp + 0x98u), ST0); FPOP();
/* 8e1b2d: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 8e1b31: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8e1b33: fstp dword ptr [esp + 0x9c] */
  WF32((uint32_t)(esp + 0x9cu), ST0); FPOP();
/* 8e1b3a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1b3c: call dword ptr [0xcfab34] */
  esp -= 4; W32(esp, 0x8e1b42u); SPILL(); f_4e34f4(); if (g_unwind) return; /* Core!?UnsafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8e1b42: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8e1b46: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 8e1b49: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8e1b4d: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8e1b4f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1b51: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 8e1b55: fmul dword ptr [esi - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffffcu)));
/* 8e1b58: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1b5a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e1b60: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e1b62: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e1b65: jp 0x8e1b91 */
  if (pf) goto L_8e1b91;
L_8e1b67: /* 8e1b67: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8e1b6b: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e1b71: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 8e1b75: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 8e1b79: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e1b7f: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 8e1b83: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8e1b87: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e1b8d: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
L_8e1b91: /* 8e1b91: fld dword ptr [esp + 0xac] */
  { double v = F32((uint32_t)(esp + 0xacu)); FPUSH(v); }
/* 8e1b98: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8e1b9c: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 8e1ba0: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 8e1ba4: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 8e1bab: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 8e1baf: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 8e1bb3: mov dword ptr [esp + 0xf0], ecx */
  W32((uint32_t)(esp + 0xf0u), ecx);
/* 8e1bba: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e1bbc: lea ecx, [esp + 0xf4] */
  ecx = (uint32_t)(esp + 0xf4u);
/* 8e1bc3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1bc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e1bc6: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 8e1bcd: mov ecx, ebx */
  ecx = ebx;
/* 8e1bcf: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 8e1bd3: mov dword ptr [esp + 0xfc], edx */
  W32((uint32_t)(esp + 0xfcu), edx);
/* 8e1bda: mov dword ptr [esp + 0x100], eax */
  W32((uint32_t)(esp + 0x100u), eax);
/* 8e1be1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1be3: fstp dword ptr [esp + 0x104] */
  WF32((uint32_t)(esp + 0x104u), ST0); FPOP();
/* 8e1bea: call 0x6c8e45 */
  esp -= 4; W32(esp, 0x8e1befu); SPILL(); f_6c8e45(); if (g_unwind) return; RELOAD();
/* 8e1bef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e1bf1: je 0x8e1fd0 */
  if (zf) goto L_8e1fd0;
L_8e1bf7: /* 8e1bf7: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
L_8e1bfb: /* 8e1bfb: mov eax, edx */
  eax = edx;
/* 8e1bfd: and eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8e1c00: cmp al, 0xc */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8e1c02: jne 0x8e1dbc */
  if (!zf) goto L_8e1dbc;
L_8e1c08: /* 8e1c08: fld dword ptr [esi - 4] */
  { double v = F32((uint32_t)(esi + 0xfffffffcu)); FPUSH(v); }
/* 8e1c0b: lea ebp, [esi - 8] */
  ebp = (uint32_t)(esi + 0xfffffff8u);
/* 8e1c0e: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1c14: lea ecx, [edi - 4] */
  ecx = (uint32_t)(edi + 0xfffffffcu);
/* 8e1c17: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8e1c19: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8e1c1b: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 8e1c1e: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1c24: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8e1c26: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1c2c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e1c2e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8e1c30: fsub dword ptr [ebp] */
  ST0 = ST0 - (F32((uint32_t)(ebp)));
/* 8e1c33: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8e1c35: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1c3b: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8e1c3e: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8e1c40: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8e1c42: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1c48: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8e1c4b: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1c51: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e1c53: fstp dword ptr [esp + 0xdc] */
  WF32((uint32_t)(esp + 0xdcu), ST0); FPOP();
/* 8e1c5a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e1c5c: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 8e1c5e: fst dword ptr [esp + 0xe0] */
  WF32((uint32_t)(esp + 0xe0u), ST0);
/* 8e1c65: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8e1c67: fld dword ptr [esp + 0xdc] */
  { double v = F32((uint32_t)(esp + 0xdcu)); FPUSH(v); }
/* 8e1c6e: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 8e1c70: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1c72: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e1c74: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8e1c76: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1c78: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 8e1c7e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1c80: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e1c82: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 8e1c84: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e1c87: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1c89: jne 0x8e1dbc */
  if (!zf) goto L_8e1dbc;
L_8e1c8f: /* 8e1c8f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e1c90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e1c91: lea ecx, [esp + 0x80] */
  ecx = (uint32_t)(esp + 0x80u);
/* 8e1c98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e1c99: lea edx, [esp + 0xc0] */
  edx = (uint32_t)(esp + 0xc0u);
/* 8e1ca0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e1ca1: call 0x6c4b15 */
  esp -= 4; W32(esp, 0x8e1ca6u); SPILL(); f_6c4b15(); if (g_unwind) return; RELOAD();
/* 8e1ca6: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 8e1cad: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1cb3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e1cb6: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 8e1cbd: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 8e1cc1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e1cc2: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8e1cc4: lea ecx, [esp + 0xc4] */
  ecx = (uint32_t)(esp + 0xc4u);
/* 8e1ccb: fstp dword ptr [esp + 0xc4] */
  WF32((uint32_t)(esp + 0xc4u), ST0); FPOP();
/* 8e1cd2: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 8e1cd6: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1cdc: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 8e1ce3: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1ce9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e1ceb: fstp dword ptr [esp + 0xc8] */
  WF32((uint32_t)(esp + 0xc8u), ST0); FPOP();
/* 8e1cf2: fsub dword ptr [esp + 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x7cu)));
/* 8e1cf6: fstp dword ptr [esp + 0xcc] */
  WF32((uint32_t)(esp + 0xccu), ST0); FPOP();
/* 8e1cfd: call dword ptr [0xcfab34] */
  esp -= 4; W32(esp, 0x8e1d03u); SPILL(); f_4e34f4(); if (g_unwind) return; /* Core!?UnsafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8e1d03: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 8e1d07: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 8e1d0a: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 8e1d0e: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8e1d10: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1d12: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 8e1d16: fmul dword ptr [esi - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffffcu)));
/* 8e1d19: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1d1b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e1d21: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e1d23: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e1d26: jp 0x8e1d52 */
  if (pf) goto L_8e1d52;
L_8e1d28: /* 8e1d28: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 8e1d2c: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e1d32: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8e1d36: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 8e1d3a: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e1d40: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 8e1d44: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 8e1d48: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e1d4e: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
L_8e1d52: /* 8e1d52: fld dword ptr [esp + 0xb8] */
  { double v = F32((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* 8e1d59: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 8e1d5d: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 8e1d61: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 8e1d65: fld dword ptr [esp + 0xbc] */
  { double v = F32((uint32_t)(esp + 0xbcu)); FPUSH(v); }
/* 8e1d6c: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 8e1d70: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 8e1d74: mov dword ptr [esp + 0x100], ecx */
  W32((uint32_t)(esp + 0x100u), ecx);
/* 8e1d7b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e1d7d: lea ecx, [esp + 0x104] */
  ecx = (uint32_t)(esp + 0x104u);
/* 8e1d84: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1d86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e1d87: fld dword ptr [esp + 0xbc] */
  { double v = F32((uint32_t)(esp + 0xbcu)); FPUSH(v); }
/* 8e1d8e: mov ecx, ebx */
  ecx = ebx;
/* 8e1d90: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 8e1d94: mov dword ptr [esp + 0x10c], edx */
  W32((uint32_t)(esp + 0x10cu), edx);
/* 8e1d9b: mov dword ptr [esp + 0x110], eax */
  W32((uint32_t)(esp + 0x110u), eax);
/* 8e1da2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1da4: fstp dword ptr [esp + 0x114] */
  WF32((uint32_t)(esp + 0x114u), ST0); FPOP();
/* 8e1dab: call 0x6c8e45 */
  esp -= 4; W32(esp, 0x8e1db0u); SPILL(); f_6c8e45(); if (g_unwind) return; RELOAD();
/* 8e1db0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e1db2: je 0x8e1fd0 */
  if (zf) goto L_8e1fd0;
L_8e1db8: /* 8e1db8: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
L_8e1dbc: /* 8e1dbc: and edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8e1dbf: cmp dl, 0x30 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8e1dc2: jne 0x8e1f73 */
  if (!zf) goto L_8e1f73;
L_8e1dc8: /* 8e1dc8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8e1dca: lea ebp, [esi - 8] */
  ebp = (uint32_t)(esi + 0xfffffff8u);
/* 8e1dcd: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1dd3: lea ecx, [edi - 4] */
  ecx = (uint32_t)(edi + 0xfffffffcu);
/* 8e1dd6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8e1dd8: fsub dword ptr [esi - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xfffffffcu)));
/* 8e1ddb: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 8e1dde: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 8e1de0: fld dword ptr [esi - 4] */
  { double v = F32((uint32_t)(esi + 0xfffffffcu)); FPUSH(v); }
/* 8e1de3: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1de9: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 8e1dec: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1df2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e1df4: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8e1df7: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1dfd: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8e1dff: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 8e1e01: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8e1e03: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 8e1e05: fstp dword ptr [esp + 0xd0] */
  WF32((uint32_t)(esp + 0xd0u), ST0); FPOP();
/* 8e1e0c: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8e1e0e: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1e14: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8e1e16: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1e1c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e1e1e: fst dword ptr [esp + 0xd4] */
  WF32((uint32_t)(esp + 0xd4u), ST0);
/* 8e1e25: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8e1e27: fld dword ptr [esp + 0xd0] */
  { double v = F32((uint32_t)(esp + 0xd0u)); FPUSH(v); }
/* 8e1e2e: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 8e1e30: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1e32: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e1e34: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 8e1e36: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1e38: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 8e1e3e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1e40: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1e42: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1e44: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e1e46: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1e48: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e1e4b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1e4d: jne 0x8e1f73 */
  if (!zf) goto L_8e1f73;
L_8e1e53: /* 8e1e53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e1e54: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e1e55: lea edx, [esp + 0x8c] */
  edx = (uint32_t)(esp + 0x8cu);
/* 8e1e5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e1e5d: lea eax, [esp + 0xa8] */
  eax = (uint32_t)(esp + 0xa8u);
/* 8e1e64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e1e65: call 0x6c4b15 */
  esp -= 4; W32(esp, 0x8e1e6au); SPILL(); f_6c4b15(); if (g_unwind) return; RELOAD();
/* 8e1e6a: fld dword ptr [esp + 0x9c] */
  { double v = F32((uint32_t)(esp + 0x9cu)); FPUSH(v); }
/* 8e1e71: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1e77: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e1e7a: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 8e1e81: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 8e1e85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e1e86: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 8e1e88: lea ecx, [esp + 0xe8] */
  ecx = (uint32_t)(esp + 0xe8u);
/* 8e1e8f: fstp dword ptr [esp + 0xe8] */
  WF32((uint32_t)(esp + 0xe8u), ST0); FPOP();
/* 8e1e96: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 8e1e9d: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8e1e9f: fstp dword ptr [esp + 0xec] */
  WF32((uint32_t)(esp + 0xecu), ST0); FPOP();
/* 8e1ea6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e1ea8: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 8e1eaf: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1eb5: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 8e1ebc: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e1ec2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e1ec4: fstp dword ptr [esp + 0xf0] */
  WF32((uint32_t)(esp + 0xf0u), ST0); FPOP();
/* 8e1ecb: call dword ptr [0xcfab34] */
  esp -= 4; W32(esp, 0x8e1ed1u); SPILL(); f_4e34f4(); if (g_unwind) return; /* Core!?UnsafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8e1ed1: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 8e1ed5: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8e1ed7: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 8e1edb: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 8e1ede: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1ee0: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 8e1ee4: fmul dword ptr [esi - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffffcu)));
/* 8e1ee7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1ee9: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e1eef: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e1ef1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e1ef4: jp 0x8e1f20 */
  if (pf) goto L_8e1f20;
L_8e1ef6: /* 8e1ef6: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 8e1efa: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e1f00: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 8e1f04: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 8e1f08: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e1f0e: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 8e1f12: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 8e1f16: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e1f1c: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
L_8e1f20: /* 8e1f20: fld dword ptr [esp + 0xa0] */
  { double v = F32((uint32_t)(esp + 0xa0u)); FPUSH(v); }
/* 8e1f27: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 8e1f2b: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 8e1f2f: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 8e1f33: fld dword ptr [esp + 0xa4] */
  { double v = F32((uint32_t)(esp + 0xa4u)); FPUSH(v); }
/* 8e1f3a: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 8e1f3e: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 8e1f42: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 8e1f46: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e1f48: lea edx, [esp + 0x58] */
  edx = (uint32_t)(esp + 0x58u);
/* 8e1f4c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1f4e: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
/* 8e1f52: fld dword ptr [esp + 0xa0] */
  { double v = F32((uint32_t)(esp + 0xa0u)); FPUSH(v); }
/* 8e1f59: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e1f5a: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 8e1f5e: mov ecx, ebx */
  ecx = ebx;
/* 8e1f60: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 8e1f64: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e1f66: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 8e1f6a: call 0x6c8e45 */
  esp -= 4; W32(esp, 0x8e1f6fu); SPILL(); f_6c8e45(); if (g_unwind) return; RELOAD();
/* 8e1f6f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e1f71: je 0x8e1fd0 */
  if (zf) goto L_8e1fd0;
L_8e1f73: /* 8e1f73: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 8e1f77: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 8e1f7b: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* 8e1f7f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8e1f80: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e1f83: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8e1f86: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e1f88: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 8e1f8c: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 8e1f90: jl 0x8e1a40 */
  if ((sf != of)) goto L_8e1a40;
L_8e1f96: /* 8e1f96: xor ebp, ebp */
  ebp = 0;
L_8e1f98: /* 8e1f98: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 8e1f9c: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 8e1f9f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8e1fa0: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8e1fa3: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8e1fa6: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e1fa8: mov dword ptr [esp + 0x64], ecx */
  W32((uint32_t)(esp + 0x64u), ecx);
/* 8e1fac: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 8e1fb0: jl 0x8e1a20 */
  if ((sf != of)) goto L_8e1a20;
L_8e1fb6: /* 8e1fb6: mov dword ptr [esp + 0x50], ebp */
  W32((uint32_t)(esp + 0x50u), ebp);
/* 8e1fba: jmp 0x8e1fd0 */
  goto L_8e1fd0;
L_8e1fd0: /* 8e1fd0: mov ecx, dword ptr [esp + 0x150] */
  ecx = R32((uint32_t)(esp + 0x150u));
/* 8e1fd7: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 8e1fdb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e1fdc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e1fdd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e1fde: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e1fdf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e1fe6: add esp, 0x14c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e1fec: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8e22e0(void) {
  LOAD_REGS();
L_8e22e0: /* 8e22e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e22e1: mov ebp, esp */
  ebp = esp;
/* 8e22e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e22e5: push 0x9d88d0 */
  { uint32_t v = 0x9d88d0u; esp -= 4; W32(esp, v); }
/* 8e22ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e22f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e22f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e22f8: sub esp, 0x6d0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6d0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e22fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e22ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e2300: xor ebx, ebx */
  ebx = 0;
/* 8e2302: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e2303: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e2306: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8e2309: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 8e230c: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8e230f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8e2311: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8e2314: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e2317: add eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e231a: mov ecx, ebx */
  ecx = ebx;
/* 8e231c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8e231e: mov edx, ebx */
  edx = ebx;
/* 8e2320: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8e2323: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8e2326: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8e2329: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8e232c: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8e232f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8e2331: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8e2334: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8e2337: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8e233a: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8e233d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8e2340: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e2343: mov dword ptr [ecx + 0x20], edx */
  W32((uint32_t)(ecx + 0x20u), edx);
/* 8e2346: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e2349: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8e234c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8e234f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8e2352: mov dword ptr [edx + 0x24], ebx */
  W32((uint32_t)(edx + 0x24u), ebx);
/* 8e2355: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e2358: cmp dword ptr [eax + 0x5c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e235b: mov esi, dword ptr [eax + 0x108] */
  esi = R32((uint32_t)(eax + 0x108u));
/* 8e2361: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 8e2364: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 8e2367: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 8e236a: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 8e236d: je 0x8e242f */
  if (zf) goto L_8e242f;
L_8e2373: /* 8e2373: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8e2376: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e2377: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 8e237a: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 8e237d: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 8e2380: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 8e2383: call dword ptr [0xcfa1d8] */
  esp -= 4; W32(esp, 0x8e2389u); SPILL(); f_4e119f(); if (g_unwind) return; /* Core!??9FVector@@QBEHABV0@@Z */ RELOAD();
/* 8e2389: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e238b: je 0x8e2461 */
  if (zf) goto L_8e2461;
L_8e2391: /* 8e2391: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 8e2394: fild dword ptr [ebp + 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 8e2397: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8e2399: jge 0x8e23a1 */
  if ((sf == of)) goto L_8e23a1;
L_8e239b: /* 8e239b: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_8e23a1: /* 8e23a1: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 8e23a4: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 8e23a7: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e23aa: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 8e23ae: mov edx, esp */
  edx = esp;
/* 8e23b0: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8e23b2: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 8e23b5: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8e23b8: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8e23bb: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8e23be: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8e23c1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e23c4: mov ecx, esp */
  ecx = esp;
/* 8e23c6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8e23c8: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8e23cb: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8e23ce: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8e23d1: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8e23d4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e23d7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8e23da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e23db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e23dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e23dd: lea ecx, [ebp - 0x6dc] */
  ecx = (uint32_t)(ebp + 0xfffff924u);
/* 8e23e3: call 0x6ca73b */
  esp -= 4; W32(esp, 0x8e23e8u); SPILL(); f_6ca73b(); if (g_unwind) return; RELOAD();
/* 8e23e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e23e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e23ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e23eb: lea ecx, [ebp - 0x6dc] */
  ecx = (uint32_t)(ebp + 0xfffff924u);
/* 8e23f1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8e23f5: call 0x6c226b */
  esp -= 4; W32(esp, 0x8e23fau); SPILL(); f_6c226b(); if (g_unwind) return; RELOAD();
/* 8e23fa: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8e23fd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e2400: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8e2403: cmp ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e2406: je 0x8e2420 */
  if (zf) goto L_8e2420;
L_8e2408: /* 8e2408: push 0x155 */
  { uint32_t v = 0x155u; esp -= 4; W32(esp, v); }
/* 8e240d: push 0xaed9fc */
  { uint32_t v = 0xaed9fcu; esp -= 4; W32(esp, v); }
/* 8e2412: push 0xaeda08 */
  { uint32_t v = 0xaeda08u; esp -= 4; W32(esp, v); }
/* 8e2417: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8e241du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8e241d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8e2420: /* 8e2420: lea ecx, [ebp - 0x6dc] */
  ecx = (uint32_t)(ebp + 0xfffff924u);
/* 8e2426: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e242a: call 0x6cb06e */
  esp -= 4; W32(esp, 0x8e242fu); SPILL(); f_6cb06e(); if (g_unwind) return; RELOAD();
L_8e242f: /* 8e242f: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 8e2435: mov edx, dword ptr [0xce8358] */
  edx = R32((uint32_t)(0xce8358u));
/* 8e243b: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 8e243e: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8e2440: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8e2443: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e2445: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8e2447: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8e2449: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e244c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e244d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8e244f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e2452: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e2453: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e245a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e245b: mov esp, ebp */
  esp = ebp;
/* 8e245d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e245e: ret 0x24 */
  esp += 40; SPILL(); return;
L_8e2461: /* 8e2461: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8e2464: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e2466: je 0x8e2480 */
  if (zf) goto L_8e2480;
L_8e2468: /* 8e2468: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e246a: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* 8e2470: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e2471: call dword ptr [edx + 0xb8] */
  { uint32_t t = R32((uint32_t)(edx + 0xb8u)); esp -= 4; W32(esp, 0x8e2477u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e2477: mov edx, 1 */
  edx = 0x1u;
/* 8e247c: mov esi, eax */
  esi = eax;
/* 8e247e: jmp 0x8e2489 */
  goto L_8e2489;
L_8e2480: /* 8e2480: mov esi, dword ptr [0xcfa350] */
  esi = R32((uint32_t)(0xcfa350u));
/* 8e2486: mov dl, byte ptr [ebp - 0x1c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffe4u))) & 0xffu);
L_8e2489: /* 8e2489: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8e248e: lea edi, [ebp - 0x78] */
  edi = (uint32_t)(ebp + 0xffffff88u);
/* 8e2491: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8e2493: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e2496: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8e249a: je 0x8e24a8 */
  if (zf) goto L_8e24a8;
L_8e249c: /* 8e249c: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 8e24a2: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8e24a8u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_8e24a8: /* 8e24a8: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* 8e24ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e24af: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8e24b2: call dword ptr [0xcfa590] */
  esp -= 4; W32(esp, 0x8e24b8u); SPILL(); f_4e1e9c(); if (g_unwind) return; /* Core!?TransposeAdjoint@FMatrix@@QBE?AV1@XZ */ RELOAD();
/* 8e24b8: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8e24bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8e24c0: /* 8e24c0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e24c3: mov eax, dword ptr [edx + 0x58] */
  eax = R32((uint32_t)(edx + 0x58u));
/* 8e24c6: mov esi, ebx */
  esi = ebx;
/* 8e24c8: imul ebx, ebx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x78u);
  ebx = (uint32_t)r;
  }
/* 8e24cb: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8e24cd: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 8e24d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e24d4: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8e24d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e24d8: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 8e24db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e24dc: mov ecx, ebx */
  ecx = ebx;
/* 8e24de: call dword ptr [0xcfac64] */
  esp -= 4; W32(esp, 0x8e24e4u); SPILL(); f_4e2ea0(); if (g_unwind) return; /* Core!?TransformByUsingAdjointT@FPlane@@QBE?AV1@ABVFMatrix@@0@Z */ RELOAD();
/* 8e24e4: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8e24e7: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8e24ea: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 8e24ed: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8e24f0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e24f2: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8e24f5: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8e24f7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e24f9: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 8e24fc: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e2502: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e2504: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e2507: jne 0x8e252b */
  if (!zf) goto L_8e252b;
L_8e2509: /* 8e2509: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e250c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e250e: mov eax, 1 */
  eax = 0x1u;
/* 8e2513: jne 0x8e254a */
  if (!zf) goto L_8e254a;
L_8e2515: /* 8e2515: mov cl, byte ptr [ebx + 0x56] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x56u))) & 0xffu);
/* 8e2518: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 8e251a: jbe 0x8e2522 */
  if ((cf | zf)) goto L_8e2522;
L_8e251c: /* 8e251c: test byte ptr [ebx + 0x57], 0x21 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x57u))); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e2520: je 0x8e254a */
  if (zf) goto L_8e254a;
L_8e2522: /* 8e2522: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8e2529: jmp 0x8e254d */
  goto L_8e254d;
L_8e252b: /* 8e252b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e252e: xor eax, eax */
  eax = 0;
/* 8e2530: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e2532: je 0x8e254a */
  if (zf) goto L_8e254a;
L_8e2534: /* 8e2534: mov cl, byte ptr [ebx + 0x56] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x56u))) & 0xffu);
/* 8e2537: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 8e2539: jbe 0x8e2541 */
  if ((cf | zf)) goto L_8e2541;
L_8e253b: /* 8e253b: test byte ptr [ebx + 0x57], 0x21 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x57u))); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e253f: je 0x8e254a */
  if (zf) goto L_8e254a;
L_8e2541: /* 8e2541: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
/* 8e2548: jmp 0x8e254d */
  goto L_8e254d;
L_8e254a: /* 8e254a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_8e254d: /* 8e254d: mov ebx, dword ptr [ebx + eax*4 + 0x20] */
  ebx = R32((uint32_t)(ebx + eax*4 + 0x20u));
/* 8e2551: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e2554: jne 0x8e24c0 */
  if (!zf) goto L_8e24c0;
L_8e255a: /* 8e255a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8e255d: lea eax, [eax + esi*2] */
  eax = (uint32_t)(eax + esi*2);
/* 8e2560: mov dword ptr [ecx + 0x28], eax */
  W32((uint32_t)(ecx + 0x28u), eax);
/* 8e2563: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* 8e2569: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8e256d: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8e2573u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8e2573: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8e2576: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e257a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8e2580u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8e2580: jmp 0x8e242f */
  goto L_8e242f;
}

void f_8e2585(void) {
  LOAD_REGS();
L_8e2585: /* 8e2585: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8e2588: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e258d: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 8e2590: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e2591: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 8e2594: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e2599u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e2599(); return;
}

void f_8e2599(void) {
  LOAD_REGS();
L_8e2599: /* 8e2599: push 0xa1d8fc */
  { uint32_t v = 0xa1d8fcu; esp -= 4; W32(esp, v); }
/* 8e259e: push 0xaeda1c */
  { uint32_t v = 0xaeda1cu; esp -= 4; W32(esp, v); }
/* 8e25a3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e25a9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e25a9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e25ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e25ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e25b0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e25b5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e25b5: guest_badaddr(0x8e25b5); return;
}

void f_8e2680(void) {
  LOAD_REGS();
L_8e2680: /* 8e2680: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e2682: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e2688: push 0x9d88f9 */
  { uint32_t v = 0x9d88f9u; esp -= 4; W32(esp, v); }
/* 8e268d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e268e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8e2692: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e2699: sub esp, 0x140 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x140u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e269f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e26a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e26a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e26a2: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 8e26a5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e26a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e26a8: mov edi, ecx */
  edi = ecx;
/* 8e26aa: je 0x8e2b1a */
  if (zf) goto L_8e2b1a;
L_8e26b0: /* 8e26b0: mov esi, dword ptr [esp + 0x164] */
  esi = R32((uint32_t)(esp + 0x164u));
/* 8e26b7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8e26ba: imul esi, esi, 0x78 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x78u);
  esi = (uint32_t)r;
  }
/* 8e26bd: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* 8e26c0: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 8e26c3: xor ebp, ebp */
  ebp = 0;
/* 8e26c5: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8e26c7: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e26c9: je 0x8e26f1 */
  if (zf) goto L_8e26f1;
L_8e26cb: /* 8e26cb: lea ecx, [edi + 0x90] */
  ecx = (uint32_t)(edi + 0x90u);
/* 8e26d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e26d2: lea edx, [edi + 0xc] */
  edx = (uint32_t)(edi + 0xcu);
/* 8e26d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e26d6: lea eax, [esp + 0x64] */
  eax = (uint32_t)(esp + 0x64u);
/* 8e26da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e26db: mov ecx, esi */
  ecx = esi;
/* 8e26dd: call dword ptr [0xcfac64] */
  esp -= 4; W32(esp, 0x8e26e3u); SPILL(); f_4e2ea0(); if (g_unwind) return; /* Core!?TransformByUsingAdjointT@FPlane@@QBE?AV1@ABVFMatrix@@0@Z */ RELOAD();
/* 8e26e3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8e26e5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8e26e8: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 8e26ec: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8e26ef: jmp 0x8e26ff */
  goto L_8e26ff;
L_8e26f1: /* 8e26f1: mov eax, esi */
  eax = esi;
/* 8e26f3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8e26f5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8e26f8: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 8e26fc: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
L_8e26ff: /* 8e26ff: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 8e2703: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8e2707: fmul dword ptr [edi + 0x5e4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x5e4u)));
/* 8e270d: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 8e2710: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 8e2714: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8e2718: fmul dword ptr [edi + 0x5e8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x5e8u)));
/* 8e271e: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8e2722: mov eax, 0x7fffffff */
  eax = 0x7fffffffu;
/* 8e2727: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e2729: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8e272d: fmul dword ptr [edi + 0x5e0] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x5e0u)));
/* 8e2733: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e2735: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 8e2739: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8e273d: fmul dword ptr [edi + 0x5d4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x5d4u)));
/* 8e2743: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8e2747: fmul dword ptr [edi + 0x5d8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x5d8u)));
/* 8e274d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e274f: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8e2753: fmul dword ptr [edi + 0x5dc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x5dcu)));
/* 8e2759: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e275b: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 8e275f: fld dword ptr [edi + 0x54] */
  { double v = F32((uint32_t)(edi + 0x54u)); FPUSH(v); }
/* 8e2762: fmul dword ptr [0xa10ca8] */
  ST0 = ST0 * (F32((uint32_t)(0xa10ca8u)));
/* 8e2768: fld dword ptr [edi + 0x50] */
  { double v = F32((uint32_t)(edi + 0x50u)); FPUSH(v); }
/* 8e276b: fmul dword ptr [0xa10ca8] */
  ST0 = ST0 * (F32((uint32_t)(0xa10ca8u)));
/* 8e2771: fld dword ptr [edi + 0x4c] */
  { double v = F32((uint32_t)(edi + 0x4cu)); FPUSH(v); }
/* 8e2774: fmul dword ptr [0xa10ca8] */
  ST0 = ST0 * (F32((uint32_t)(0xa10ca8u)));
/* 8e277a: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 8e277e: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 8e2782: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8e2786: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 8e278a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8e278c: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8e278e: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 8e2792: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 8e2796: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 8e279a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e279c: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8e279e: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8e27a2: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 8e27a6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8e27a8: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8e27ac: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 8e27b0: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8e27b2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e27b4: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 8e27b8: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8e27bc: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 8e27c0: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 8e27c4: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8e27c6: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8e27c8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e27ca: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e27cd: jnp 0x8e27e5 */
  if (!pf) goto L_8e27e5;
L_8e27cf: /* 8e27cf: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8e27d1: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8e27d3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e27d5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e27d8: jnp 0x8e27e5 */
  if (!pf) goto L_8e27e5;
L_8e27da: /* 8e27da: mov dword ptr [esp + 0x50], ebp */
  W32((uint32_t)(esp + 0x50u), ebp);
/* 8e27de: mov edx, 1 */
  edx = 0x1u;
/* 8e27e3: jmp 0x8e27ee */
  goto L_8e27ee;
L_8e27e5: /* 8e27e5: mov edx, 1 */
  edx = 0x1u;
/* 8e27ea: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
L_8e27ee: /* 8e27ee: fchs  */
  ST0 = -ST0;
/* 8e27f0: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8e27f2: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8e27f4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e27f6: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e27f9: je 0x8e280e */
  if (zf) goto L_8e280e;
L_8e27fb: /* 8e27fb: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8e27fd: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8e27ff: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e2801: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e2803: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e2806: je 0x8e2810 */
  if (zf) goto L_8e2810;
L_8e2808: /* 8e2808: mov dword ptr [esp + 0x54], ebp */
  W32((uint32_t)(esp + 0x54u), ebp);
/* 8e280c: jmp 0x8e2814 */
  goto L_8e2814;
L_8e280e: /* 8e280e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8e2810: /* 8e2810: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
L_8e2814: /* 8e2814: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e2816: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8e2818: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e281a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e281c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e281f: jne 0x8e2823 */
  if (!zf) goto L_8e2823;
L_8e2821: /* 8e2821: mov ebp, edx */
  ebp = edx;
L_8e2823: /* 8e2823: lea ebx, [ebp*4] */
  ebx = (uint32_t)(ebp*4);
/* 8e282a: mov eax, dword ptr [esp + ebx + 0x50] */
  eax = R32((uint32_t)(esp + ebx + 0x50u));
/* 8e282e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e2830: je 0x8e2884 */
  if (zf) goto L_8e2884;
L_8e2832: /* 8e2832: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e2834: mov eax, dword ptr [esp + 0x16c] */
  eax = R32((uint32_t)(esp + 0x16cu));
/* 8e283b: je 0x8e2852 */
  if (zf) goto L_8e2852;
L_8e283d: /* 8e283d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e283f: jne 0x8e284e */
  if (!zf) goto L_8e284e;
L_8e2841: /* 8e2841: mov al, byte ptr [esi + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x56u))) & 0xffu);
/* 8e2844: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 8e2846: jbe 0x8e2867 */
  if ((cf | zf)) goto L_8e2867;
L_8e2848: /* 8e2848: test byte ptr [esi + 0x57], 0x21 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x57u))); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e284c: jne 0x8e2867 */
  if (!zf) goto L_8e2867;
L_8e284e: /* 8e284e: mov eax, edx */
  eax = edx;
/* 8e2850: jmp 0x8e2869 */
  goto L_8e2869;
L_8e2852: /* 8e2852: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e2854: je 0x8e2867 */
  if (zf) goto L_8e2867;
L_8e2856: /* 8e2856: mov al, byte ptr [esi + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x56u))) & 0xffu);
/* 8e2859: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 8e285b: jbe 0x8e2863 */
  if ((cf | zf)) goto L_8e2863;
L_8e285d: /* 8e285d: test byte ptr [esi + 0x57], 0x21 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x57u))); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e2861: je 0x8e2867 */
  if (zf) goto L_8e2867;
L_8e2863: /* 8e2863: mov eax, edx */
  eax = edx;
/* 8e2865: jmp 0x8e2869 */
  goto L_8e2869;
L_8e2867: /* 8e2867: xor eax, eax */
  eax = 0;
L_8e2869: /* 8e2869: mov ecx, dword ptr [esp + 0x164] */
  ecx = R32((uint32_t)(esp + 0x164u));
/* 8e2870: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e2871: mov eax, dword ptr [esi + ebp*4 + 0x20] */
  eax = R32((uint32_t)(esi + ebp*4 + 0x20u));
/* 8e2875: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e2876: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e2877: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e2878: mov ecx, edi */
  ecx = edi;
/* 8e287a: call 0x6c7423 */
  esp -= 4; W32(esp, 0x8e287fu); SPILL(); f_6c7423(); if (g_unwind) return; RELOAD();
/* 8e287f: mov edx, 1 */
  edx = 0x1u;
L_8e2884: /* 8e2884: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* 8e2888: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8e288a: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e288d: je 0x8e3373 */
  if (zf) goto L_8e3373;
L_8e2893: /* 8e2893: mov ecx, dword ptr [esp + 0x164] */
  ecx = R32((uint32_t)(esp + 0x164u));
/* 8e289a: mov eax, ebp */
  eax = ebp;
/* 8e289c: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 8e289e: mov ebx, dword ptr [esi + eax*4 + 0x24] */
  ebx = R32((uint32_t)(esi + eax*4 + 0x24u));
/* 8e28a2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8e28a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e28a5: mov eax, dword ptr [esp + 0x16c] */
  eax = R32((uint32_t)(esp + 0x16cu));
/* 8e28ac: mov dword ptr [esp + 0x164], ebx */
  W32((uint32_t)(esp + 0x164u), ebx);
/* 8e28b3: je 0x8e28cf */
  if (zf) goto L_8e28cf;
L_8e28b5: /* 8e28b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e28b7: jne 0x8e28c6 */
  if (!zf) goto L_8e28c6;
L_8e28b9: /* 8e28b9: mov al, byte ptr [esi + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x56u))) & 0xffu);
/* 8e28bc: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 8e28be: jbe 0x8e28e9 */
  if ((cf | zf)) goto L_8e28e9;
L_8e28c0: /* 8e28c0: test byte ptr [esi + 0x57], 0x21 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x57u))); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e28c4: jne 0x8e28e9 */
  if (!zf) goto L_8e28e9;
L_8e28c6: /* 8e28c6: mov dword ptr [esp + 0x16c], edx */
  W32((uint32_t)(esp + 0x16cu), edx);
/* 8e28cd: jmp 0x8e28f4 */
  goto L_8e28f4;
L_8e28cf: /* 8e28cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e28d1: je 0x8e28e9 */
  if (zf) goto L_8e28e9;
L_8e28d3: /* 8e28d3: mov al, byte ptr [esi + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x56u))) & 0xffu);
/* 8e28d6: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 8e28d8: jbe 0x8e28e0 */
  if ((cf | zf)) goto L_8e28e0;
L_8e28da: /* 8e28da: test byte ptr [esi + 0x57], 0x21 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x57u))); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e28de: je 0x8e28e9 */
  if (zf) goto L_8e28e9;
L_8e28e0: /* 8e28e0: mov dword ptr [esp + 0x16c], edx */
  W32((uint32_t)(esp + 0x16cu), edx);
/* 8e28e7: jmp 0x8e28f4 */
  goto L_8e28f4;
L_8e28e9: /* 8e28e9: mov dword ptr [esp + 0x16c], 0 */
  W32((uint32_t)(esp + 0x16cu), 0x0u);
L_8e28f4: /* 8e28f4: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e28f7: jne 0x8e26b0 */
  if (!zf) goto L_8e26b0;
L_8e28fd: /* 8e28fd: or ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_8e28ff: /* 8e28ff: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 8e2902: imul ecx, ecx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x78u);
  ecx = (uint32_t)r;
  }
/* 8e2905: add ecx, dword ptr [edx + 0x58] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x58u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e2908: mov eax, ecx */
  eax = ecx;
/* 8e290a: mov ecx, dword ptr [esp + 0x16c] */
  ecx = R32((uint32_t)(esp + 0x16cu));
/* 8e2911: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e2913: jne 0x8e3373 */
  if (!zf) goto L_8e3373;
L_8e2919: /* 8e2919: cmp dword ptr [eax + 0x4c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e291c: je 0x8e3373 */
  if (zf) goto L_8e3373;
L_8e2922: /* 8e2922: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e2923: mov ecx, edi */
  ecx = edi;
/* 8e2925: call 0x6c5231 */
  esp -= 4; W32(esp, 0x8e292au); SPILL(); f_6c5231(); if (g_unwind) return; RELOAD();
/* 8e292a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8e292c: mov dword ptr [edi + 0x88], 0xbf800000 */
  W32((uint32_t)(edi + 0x88u), 0xbf800000u);
/* 8e2936: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 8e2939: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 8e2941: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 8e2945: lea eax, [edi + 0x60] */
  eax = (uint32_t)(edi + 0x60u);
/* 8e2948: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8e294a: mov dword ptr [edi + 0x8c], ecx */
  W32((uint32_t)(edi + 0x8cu), ecx);
/* 8e2950: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 8e2958: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 8e295c: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 8e2964: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 8e2968: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8e296b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8e296e: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* 8e2971: xor esi, esi */
  esi = 0;
/* 8e2973: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8e2975: jle 0x8e29ab */
  if ((zf || sf != of)) goto L_8e29ab;
L_8e2977: /* 8e2977: lea ebp, [edi + 0xd0] */
  ebp = (uint32_t)(edi + 0xd0u);
/* 8e297d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8e2980: /* 8e2980: mov eax, dword ptr [edi + 0x5d0] */
  eax = R32((uint32_t)(edi + 0x5d0u));
/* 8e2986: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 8e2989: and ecx, 0xbfffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xbfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8e298f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e2990: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e2991: mov ecx, edi */
  ecx = edi;
/* 8e2993: call 0x6cbdca */
  esp -= 4; W32(esp, 0x8e2998u); SPILL(); f_6cbdca(); if (g_unwind) return; RELOAD();
/* 8e2998: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e299a: je 0x8e3373 */
  if (zf) goto L_8e3373;
L_8e29a0: /* 8e29a0: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* 8e29a3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8e29a4: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8e29a7: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e29a9: jl 0x8e2980 */
  if ((sf != of)) goto L_8e2980;
L_8e29ab: /* 8e29ab: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 8e29ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e29b0: jne 0x8e2b26 */
  if (!zf) goto L_8e2b26;
L_8e29b6: /* 8e29b6: fld dword ptr [edi + 0x74] */
  { double v = F32((uint32_t)(edi + 0x74u)); FPUSH(v); }
/* 8e29b9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e29ba: fsubr qword ptr [0xa15940] */
  ST0 = (F64((uint32_t)(0xa15940u))) - ST0;
/* 8e29c0: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 8e29c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e29c5: mov ecx, edi */
  ecx = edi;
/* 8e29c7: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8e29cb: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8e29d3: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 8e29db: mov dword ptr [esp + 0x20], 0xbf800000 */
  W32((uint32_t)(esp + 0x20u), 0xbf800000u);
/* 8e29e3: call 0x6cbdca */
  esp -= 4; W32(esp, 0x8e29e8u); SPILL(); f_6cbdca(); if (g_unwind) return; RELOAD();
/* 8e29e8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e29ea: je 0x8e3373 */
  if (zf) goto L_8e3373;
L_8e29f0: /* 8e29f0: fld dword ptr [edi + 0x80] */
  { double v = F32((uint32_t)(edi + 0x80u)); FPUSH(v); }
/* 8e29f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e29f7: fadd qword ptr [0xa15940] */
  ST0 = ST0 + (F64((uint32_t)(0xa15940u)));
/* 8e29fd: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 8e2a01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e2a02: mov ecx, edi */
  ecx = edi;
/* 8e2a04: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8e2a08: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8e2a10: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 8e2a18: mov dword ptr [esp + 0x20], 0x3f800000 */
  W32((uint32_t)(esp + 0x20u), 0x3f800000u);
/* 8e2a20: call 0x6cbdca */
  esp -= 4; W32(esp, 0x8e2a25u); SPILL(); f_6cbdca(); if (g_unwind) return; RELOAD();
/* 8e2a25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e2a27: je 0x8e3373 */
  if (zf) goto L_8e3373;
L_8e2a2d: /* 8e2a2d: fld dword ptr [edi + 0x6c] */
  { double v = F32((uint32_t)(edi + 0x6cu)); FPUSH(v); }
/* 8e2a30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e2a31: fsubr qword ptr [0xa15940] */
  ST0 = (F64((uint32_t)(0xa15940u))) - ST0;
/* 8e2a37: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8e2a3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e2a3c: mov ecx, edi */
  ecx = edi;
/* 8e2a3e: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8e2a42: mov dword ptr [esp + 0x18], 0xbf800000 */
  W32((uint32_t)(esp + 0x18u), 0xbf800000u);
/* 8e2a4a: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 8e2a52: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 8e2a5a: call 0x6cbdca */
  esp -= 4; W32(esp, 0x8e2a5fu); SPILL(); f_6cbdca(); if (g_unwind) return; RELOAD();
/* 8e2a5f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e2a61: je 0x8e3373 */
  if (zf) goto L_8e3373;
L_8e2a67: /* 8e2a67: fld dword ptr [edi + 0x78] */
  { double v = F32((uint32_t)(edi + 0x78u)); FPUSH(v); }
/* 8e2a6a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e2a6b: fsub qword ptr [0xa15940] */
  ST0 = ST0 - (F64((uint32_t)(0xa15940u)));
/* 8e2a71: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 8e2a75: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e2a76: mov ecx, edi */
  ecx = edi;
/* 8e2a78: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8e2a7c: mov dword ptr [esp + 0x18], 0x3f800000 */
  W32((uint32_t)(esp + 0x18u), 0x3f800000u);
/* 8e2a84: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 8e2a8c: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 8e2a94: call 0x6cbdca */
  esp -= 4; W32(esp, 0x8e2a99u); SPILL(); f_6cbdca(); if (g_unwind) return; RELOAD();
/* 8e2a99: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e2a9b: je 0x8e3373 */
  if (zf) goto L_8e3373;
L_8e2aa1: /* 8e2aa1: fld dword ptr [edi + 0x70] */
  { double v = F32((uint32_t)(edi + 0x70u)); FPUSH(v); }
/* 8e2aa4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e2aa5: fsubr qword ptr [0xa15940] */
  ST0 = (F64((uint32_t)(0xa15940u))) - ST0;
/* 8e2aab: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 8e2aaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e2ab0: mov ecx, edi */
  ecx = edi;
/* 8e2ab2: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8e2ab6: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8e2abe: mov dword ptr [esp + 0x1c], 0xbf800000 */
  W32((uint32_t)(esp + 0x1cu), 0xbf800000u);
/* 8e2ac6: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 8e2ace: call 0x6cbdca */
  esp -= 4; W32(esp, 0x8e2ad3u); SPILL(); f_6cbdca(); if (g_unwind) return; RELOAD();
/* 8e2ad3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e2ad5: je 0x8e3373 */
  if (zf) goto L_8e3373;
L_8e2adb: /* 8e2adb: fld dword ptr [edi + 0x7c] */
  { double v = F32((uint32_t)(edi + 0x7cu)); FPUSH(v); }
/* 8e2ade: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e2adf: fsub qword ptr [0xa15940] */
  ST0 = ST0 - (F64((uint32_t)(0xa15940u)));
/* 8e2ae5: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8e2ae9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e2aea: mov ecx, edi */
  ecx = edi;
/* 8e2aec: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8e2af0: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8e2af8: mov dword ptr [esp + 0x1c], 0x3f800000 */
  W32((uint32_t)(esp + 0x1cu), 0x3f800000u);
/* 8e2b00: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 8e2b08: call 0x6cbdca */
  esp -= 4; W32(esp, 0x8e2b0du); SPILL(); f_6cbdca(); if (g_unwind) return; RELOAD();
/* 8e2b0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e2b0f: jne 0x8e2d2f */
  if (!zf) goto L_8e2d2f;
L_8e2b15: /* 8e2b15: jmp 0x8e3373 */
  goto L_8e3373;
L_8e2b1a: /* 8e2b1a: mov ecx, dword ptr [esp + 0x160] */
  ecx = R32((uint32_t)(esp + 0x160u));
/* 8e2b21: jmp 0x8e28ff */
  goto L_8e28ff;
L_8e2b26: /* 8e2b26: lea edx, [esp + 0x110] */
  edx = (uint32_t)(esp + 0x110u);
/* 8e2b2d: lea esi, [edi + 0xc] */
  esi = (uint32_t)(edi + 0xcu);
/* 8e2b30: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e2b31: mov ecx, esi */
  ecx = esi;
/* 8e2b33: call dword ptr [0xcfa590] */
  esp -= 4; W32(esp, 0x8e2b39u); SPILL(); f_4e1e9c(); if (g_unwind) return; /* Core!?TransposeAdjoint@FMatrix@@QBE?AV1@XZ */ RELOAD();
/* 8e2b39: fld dword ptr [edi + 0x74] */
  { double v = F32((uint32_t)(edi + 0x74u)); FPUSH(v); }
/* 8e2b3c: fsubr qword ptr [0xa15940] */
  ST0 = (F64((uint32_t)(0xa15940u))) - ST0;
/* 8e2b42: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e2b43: lea eax, [esp + 0x114] */
  eax = (uint32_t)(esp + 0x114u);
/* 8e2b4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e2b4b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e2b4c: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8e2b50: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 8e2b54: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e2b55: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 8e2b59: mov dword ptr [esp + 0x168], 0 */
  W32((uint32_t)(esp + 0x168u), 0x0u);
/* 8e2b64: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 8e2b6c: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 8e2b74: mov dword ptr [esp + 0x28], 0xbf800000 */
  W32((uint32_t)(esp + 0x28u), 0xbf800000u);
/* 8e2b7c: call dword ptr [0xcfac64] */
  esp -= 4; W32(esp, 0x8e2b82u); SPILL(); f_4e2ea0(); if (g_unwind) return; /* Core!?TransformByUsingAdjointT@FPlane@@QBE?AV1@ABVFMatrix@@0@Z */ RELOAD();
/* 8e2b82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e2b83: mov ecx, edi */
  ecx = edi;
/* 8e2b85: call 0x6cbdca */
  esp -= 4; W32(esp, 0x8e2b8au); SPILL(); f_6cbdca(); if (g_unwind) return; RELOAD();
/* 8e2b8a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e2b8c: je 0x8e335f */
  if (zf) goto L_8e335f;
L_8e2b92: /* 8e2b92: fld dword ptr [edi + 0x80] */
  { double v = F32((uint32_t)(edi + 0x80u)); FPUSH(v); }
/* 8e2b98: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e2b99: fadd qword ptr [0xa15940] */
  ST0 = ST0 + (F64((uint32_t)(0xa15940u)));
/* 8e2b9f: lea edx, [esp + 0x114] */
  edx = (uint32_t)(esp + 0x114u);
/* 8e2ba6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e2ba7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e2ba8: lea eax, [esp + 0x68] */
  eax = (uint32_t)(esp + 0x68u);
/* 8e2bac: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8e2bb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e2bb1: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 8e2bb5: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 8e2bbd: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 8e2bc5: mov dword ptr [esp + 0x28], 0x3f800000 */
  W32((uint32_t)(esp + 0x28u), 0x3f800000u);
/* 8e2bcd: call dword ptr [0xcfac64] */
  esp -= 4; W32(esp, 0x8e2bd3u); SPILL(); f_4e2ea0(); if (g_unwind) return; /* Core!?TransformByUsingAdjointT@FPlane@@QBE?AV1@ABVFMatrix@@0@Z */ RELOAD();
/* 8e2bd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e2bd4: mov ecx, edi */
  ecx = edi;
/* 8e2bd6: call 0x6cbdca */
  esp -= 4; W32(esp, 0x8e2bdbu); SPILL(); f_6cbdca(); if (g_unwind) return; RELOAD();
/* 8e2bdb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e2bdd: je 0x8e335f */
  if (zf) goto L_8e335f;
L_8e2be3: /* 8e2be3: fld dword ptr [edi + 0x6c] */
  { double v = F32((uint32_t)(edi + 0x6cu)); FPUSH(v); }
/* 8e2be6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e2be7: fsubr qword ptr [0xa15940] */
  ST0 = (F64((uint32_t)(0xa15940u))) - ST0;
/* 8e2bed: lea ecx, [esp + 0x114] */
  ecx = (uint32_t)(esp + 0x114u);
/* 8e2bf4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e2bf5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e2bf6: lea edx, [esp + 0x68] */
  edx = (uint32_t)(esp + 0x68u);
/* 8e2bfa: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8e2bfe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e2bff: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 8e2c03: mov dword ptr [esp + 0x20], 0xbf800000 */
  W32((uint32_t)(esp + 0x20u), 0xbf800000u);
/* 8e2c0b: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 8e2c13: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 8e2c1b: call dword ptr [0xcfac64] */
  esp -= 4; W32(esp, 0x8e2c21u); SPILL(); f_4e2ea0(); if (g_unwind) return; /* Core!?TransformByUsingAdjointT@FPlane@@QBE?AV1@ABVFMatrix@@0@Z */ RELOAD();
/* 8e2c21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e2c22: mov ecx, edi */
  ecx = edi;
/* 8e2c24: call 0x6cbdca */
  esp -= 4; W32(esp, 0x8e2c29u); SPILL(); f_6cbdca(); if (g_unwind) return; RELOAD();
/* 8e2c29: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e2c2b: je 0x8e335f */
  if (zf) goto L_8e335f;
L_8e2c31: /* 8e2c31: fld dword ptr [edi + 0x78] */
  { double v = F32((uint32_t)(edi + 0x78u)); FPUSH(v); }
/* 8e2c34: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e2c35: fsub qword ptr [0xa15940] */
  ST0 = ST0 - (F64((uint32_t)(0xa15940u)));
/* 8e2c3b: lea eax, [esp + 0x114] */
  eax = (uint32_t)(esp + 0x114u);
/* 8e2c42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e2c43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e2c44: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 8e2c48: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8e2c4c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e2c4d: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 8e2c51: mov dword ptr [esp + 0x20], 0x3f800000 */
  W32((uint32_t)(esp + 0x20u), 0x3f800000u);
/* 8e2c59: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 8e2c61: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 8e2c69: call dword ptr [0xcfac64] */
  esp -= 4; W32(esp, 0x8e2c6fu); SPILL(); f_4e2ea0(); if (g_unwind) return; /* Core!?TransformByUsingAdjointT@FPlane@@QBE?AV1@ABVFMatrix@@0@Z */ RELOAD();
/* 8e2c6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e2c70: mov ecx, edi */
  ecx = edi;
/* 8e2c72: call 0x6cbdca */
  esp -= 4; W32(esp, 0x8e2c77u); SPILL(); f_6cbdca(); if (g_unwind) return; RELOAD();
/* 8e2c77: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e2c79: je 0x8e335f */
  if (zf) goto L_8e335f;
L_8e2c7f: /* 8e2c7f: fld dword ptr [edi + 0x70] */
  { double v = F32((uint32_t)(edi + 0x70u)); FPUSH(v); }
/* 8e2c82: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e2c83: fsubr qword ptr [0xa15940] */
  ST0 = (F64((uint32_t)(0xa15940u))) - ST0;
/* 8e2c89: lea edx, [esp + 0x114] */
  edx = (uint32_t)(esp + 0x114u);
/* 8e2c90: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e2c91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e2c92: lea eax, [esp + 0x68] */
  eax = (uint32_t)(esp + 0x68u);
/* 8e2c96: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8e2c9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e2c9b: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 8e2c9f: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 8e2ca7: mov dword ptr [esp + 0x24], 0xbf800000 */
  W32((uint32_t)(esp + 0x24u), 0xbf800000u);
/* 8e2caf: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 8e2cb7: call dword ptr [0xcfac64] */
  esp -= 4; W32(esp, 0x8e2cbdu); SPILL(); f_4e2ea0(); if (g_unwind) return; /* Core!?TransformByUsingAdjointT@FPlane@@QBE?AV1@ABVFMatrix@@0@Z */ RELOAD();
/* 8e2cbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e2cbe: mov ecx, edi */
  ecx = edi;
/* 8e2cc0: call 0x6cbdca */
  esp -= 4; W32(esp, 0x8e2cc5u); SPILL(); f_6cbdca(); if (g_unwind) return; RELOAD();
/* 8e2cc5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e2cc7: je 0x8e335f */
  if (zf) goto L_8e335f;
L_8e2ccd: /* 8e2ccd: fld dword ptr [edi + 0x7c] */
  { double v = F32((uint32_t)(edi + 0x7cu)); FPUSH(v); }
/* 8e2cd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e2cd1: fsub qword ptr [0xa15940] */
  ST0 = ST0 - (F64((uint32_t)(0xa15940u)));
/* 8e2cd7: lea ecx, [esp + 0x114] */
  ecx = (uint32_t)(esp + 0x114u);
/* 8e2cde: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e2cdf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e2ce0: lea edx, [esp + 0x68] */
  edx = (uint32_t)(esp + 0x68u);
/* 8e2ce4: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8e2ce8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e2ce9: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 8e2ced: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 8e2cf5: mov dword ptr [esp + 0x24], 0x3f800000 */
  W32((uint32_t)(esp + 0x24u), 0x3f800000u);
/* 8e2cfd: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 8e2d05: call dword ptr [0xcfac64] */
  esp -= 4; W32(esp, 0x8e2d0bu); SPILL(); f_4e2ea0(); if (g_unwind) return; /* Core!?TransformByUsingAdjointT@FPlane@@QBE?AV1@ABVFMatrix@@0@Z */ RELOAD();
/* 8e2d0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e2d0c: mov ecx, edi */
  ecx = edi;
/* 8e2d0e: call 0x6cbdca */
  esp -= 4; W32(esp, 0x8e2d13u); SPILL(); f_6cbdca(); if (g_unwind) return; RELOAD();
/* 8e2d13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e2d15: je 0x8e335f */
  if (zf) goto L_8e335f;
L_8e2d1b: /* 8e2d1b: lea ecx, [esp + 0x110] */
  ecx = (uint32_t)(esp + 0x110u);
/* 8e2d22: mov dword ptr [esp + 0x158], ebx */
  W32((uint32_t)(esp + 0x158u), ebx);
/* 8e2d29: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8e2d2fu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_8e2d2f: /* 8e2d2f: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* 8e2d32: xor ecx, ecx */
  ecx = 0;
/* 8e2d34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8e2d36: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 8e2d3a: jle 0x8e32e5 */
  if ((zf || sf != of)) goto L_8e32e5;
L_8e2d40: /* 8e2d40: lea eax, [edi + 0x4d0] */
  eax = (uint32_t)(edi + 0x4d0u);
/* 8e2d46: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8e2d4a: lea esi, [edi + 0xd8] */
  esi = (uint32_t)(edi + 0xd8u);
L_8e2d50: /* 8e2d50: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8e2d52: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 8e2d5a: jle 0x8e32c7 */
  if ((zf || sf != of)) goto L_8e32c7;
L_8e2d60: /* 8e2d60: lea eax, [edi + 0x4d0] */
  eax = (uint32_t)(edi + 0x4d0u);
/* 8e2d66: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 8e2d6a: lea ebp, [edi + 0xd4] */
  ebp = (uint32_t)(edi + 0xd4u);
L_8e2d70: /* 8e2d70: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 8e2d74: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e2d76: or edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8e2d78: mov eax, edx */
  eax = edx;
/* 8e2d7a: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8e2d7d: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8e2d7f: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 8e2d83: jne 0x8e2f34 */
  if (!zf) goto L_8e2f34;
L_8e2d89: /* 8e2d89: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8e2d8b: lea ebx, [esi - 8] */
  ebx = (uint32_t)(esi + 0xfffffff8u);
/* 8e2d8e: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e2d94: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 8e2d97: fld dword ptr [esi - 4] */
  { double v = F32((uint32_t)(esi + 0xfffffffcu)); FPUSH(v); }
/* 8e2d9a: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e2da0: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e2da2: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 8e2da4: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e2daa: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8e2dac: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 8e2dae: fld dword ptr [esi - 4] */
  { double v = F32((uint32_t)(esi + 0xfffffffcu)); FPUSH(v); }
/* 8e2db1: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 8e2db3: fld dword ptr [ebp + 4] */
  { double v = F32((uint32_t)(ebp + 0x4u)); FPUSH(v); }
/* 8e2db6: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e2dbc: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 8e2dbf: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e2dc5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e2dc7: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8e2dc9: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e2dcf: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8e2dd1: fsub dword ptr [ebp + 4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x4u)));
/* 8e2dd4: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8e2dd8: fsubr dword ptr [ebp] */
  ST0 = (F32((uint32_t)(ebp))) - ST0;
/* 8e2ddb: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8e2ddd: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8e2de1: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8e2de3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e2de5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e2de7: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 8e2de9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e2deb: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 8e2df1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e2df3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e2df5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e2df7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e2df9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e2dfc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e2dfe: jne 0x8e2f34 */
  if (!zf) goto L_8e2f34;
L_8e2e04: /* 8e2e04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e2e05: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e2e06: lea ecx, [esp + 0x80] */
  ecx = (uint32_t)(esp + 0x80u);
/* 8e2e0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e2e0e: lea edx, [esp + 0xb4] */
  edx = (uint32_t)(esp + 0xb4u);
/* 8e2e15: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e2e16: call 0x6c4b15 */
  esp -= 4; W32(esp, 0x8e2e1bu); SPILL(); f_6c4b15(); if (g_unwind) return; RELOAD();
/* 8e2e1b: fld dword ptr [esp + 0x90] */
  { double v = F32((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* 8e2e22: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e2e28: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e2e2b: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 8e2e2f: lea eax, [esp + 0x44] */
  eax = (uint32_t)(esp + 0x44u);
/* 8e2e33: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e2e39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e2e3a: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 8e2e41: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e2e43: fstp dword ptr [esp + 0x94] */
  WF32((uint32_t)(esp + 0x94u), ST0); FPOP();
/* 8e2e4a: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 8e2e4e: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e2e54: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 8e2e5b: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 8e2e5d: fstp dword ptr [esp + 0x98] */
  WF32((uint32_t)(esp + 0x98u), ST0); FPOP();
/* 8e2e64: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 8e2e6b: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8e2e6d: fstp dword ptr [esp + 0x9c] */
  WF32((uint32_t)(esp + 0x9cu), ST0); FPOP();
/* 8e2e74: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e2e76: call dword ptr [0xcfab34] */
  esp -= 4; W32(esp, 0x8e2e7cu); SPILL(); f_4e34f4(); if (g_unwind) return; /* Core!?UnsafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8e2e7c: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 8e2e80: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 8e2e82: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 8e2e86: fmul dword ptr [esi - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffffcu)));
/* 8e2e89: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e2e8b: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 8e2e8f: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8e2e91: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e2e93: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e2e99: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e2e9b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e2e9e: jp 0x8e2eca */
  if (pf) goto L_8e2eca;
L_8e2ea0: /* 8e2ea0: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 8e2ea4: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e2eaa: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 8e2eae: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 8e2eb2: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e2eb8: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 8e2ebc: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 8e2ec0: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e2ec6: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
L_8e2eca: /* 8e2eca: fld dword ptr [esp + 0xac] */
  { double v = F32((uint32_t)(esp + 0xacu)); FPUSH(v); }
/* 8e2ed1: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 8e2ed5: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 8e2ed9: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 8e2edd: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 8e2ee4: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 8e2ee8: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 8e2eec: mov dword ptr [esp + 0xf0], ecx */
  W32((uint32_t)(esp + 0xf0u), ecx);
/* 8e2ef3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e2ef5: lea ecx, [esp + 0xf4] */
  ecx = (uint32_t)(esp + 0xf4u);
/* 8e2efc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e2efe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e2eff: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 8e2f06: mov ecx, edi */
  ecx = edi;
/* 8e2f08: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 8e2f0c: mov dword ptr [esp + 0xfc], edx */
  W32((uint32_t)(esp + 0xfcu), edx);
/* 8e2f13: mov dword ptr [esp + 0x100], eax */
  W32((uint32_t)(esp + 0x100u), eax);
/* 8e2f1a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e2f1c: fstp dword ptr [esp + 0x104] */
  WF32((uint32_t)(esp + 0x104u), ST0); FPOP();
/* 8e2f23: call 0x6cbdca */
  esp -= 4; W32(esp, 0x8e2f28u); SPILL(); f_6cbdca(); if (g_unwind) return; RELOAD();
/* 8e2f28: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e2f2a: je 0x8e3373 */
  if (zf) goto L_8e3373;
L_8e2f30: /* 8e2f30: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
L_8e2f34: /* 8e2f34: mov eax, edx */
  eax = edx;
/* 8e2f36: and eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8e2f39: cmp al, 0xc */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8e2f3b: jne 0x8e30ea */
  if (!zf) goto L_8e30ea;
L_8e2f41: /* 8e2f41: fld dword ptr [esi - 4] */
  { double v = F32((uint32_t)(esi + 0xfffffffcu)); FPUSH(v); }
/* 8e2f44: lea ebx, [esi - 8] */
  ebx = (uint32_t)(esi + 0xfffffff8u);
/* 8e2f47: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e2f4d: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 8e2f50: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8e2f52: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8e2f54: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 8e2f56: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e2f5c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8e2f5e: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e2f64: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e2f66: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8e2f68: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 8e2f6a: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 8e2f6d: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e2f73: fld dword ptr [ebp + 4] */
  { double v = F32((uint32_t)(ebp + 0x4u)); FPUSH(v); }
/* 8e2f76: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8e2f78: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8e2f7a: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e2f80: fld dword ptr [ebp + 4] */
  { double v = F32((uint32_t)(ebp + 0x4u)); FPUSH(v); }
/* 8e2f83: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e2f89: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e2f8b: fstp dword ptr [esp + 0xdc] */
  WF32((uint32_t)(esp + 0xdcu), ST0); FPOP();
/* 8e2f92: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e2f94: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 8e2f96: fst dword ptr [esp + 0xe0] */
  WF32((uint32_t)(esp + 0xe0u), ST0);
/* 8e2f9d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8e2f9f: fld dword ptr [esp + 0xdc] */
  { double v = F32((uint32_t)(esp + 0xdcu)); FPUSH(v); }
/* 8e2fa6: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 8e2fa8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e2faa: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e2fac: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8e2fae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e2fb0: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 8e2fb6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e2fb8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e2fba: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 8e2fbc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e2fbf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e2fc1: jne 0x8e30ea */
  if (!zf) goto L_8e30ea;
L_8e2fc7: /* 8e2fc7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e2fc8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e2fc9: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 8e2fcd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e2fce: lea edx, [esp + 0xc0] */
  edx = (uint32_t)(esp + 0xc0u);
/* 8e2fd5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e2fd6: call 0x6c4b15 */
  esp -= 4; W32(esp, 0x8e2fdbu); SPILL(); f_6c4b15(); if (g_unwind) return; RELOAD();
/* 8e2fdb: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 8e2fe2: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e2fe8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e2feb: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 8e2fef: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 8e2ff3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e2ff4: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8e2ff6: lea ecx, [esp + 0xc4] */
  ecx = (uint32_t)(esp + 0xc4u);
/* 8e2ffd: fstp dword ptr [esp + 0xc4] */
  WF32((uint32_t)(esp + 0xc4u), ST0); FPOP();
/* 8e3004: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 8e3008: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e300e: fld dword ptr [esp + 0x78] */
  { double v = F32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 8e3012: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e3018: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e301a: fstp dword ptr [esp + 0xc8] */
  WF32((uint32_t)(esp + 0xc8u), ST0); FPOP();
/* 8e3021: fsub dword ptr [esp + 0x70] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x70u)));
/* 8e3025: fstp dword ptr [esp + 0xcc] */
  WF32((uint32_t)(esp + 0xccu), ST0); FPOP();
/* 8e302c: call dword ptr [0xcfab34] */
  esp -= 4; W32(esp, 0x8e3032u); SPILL(); f_4e34f4(); if (g_unwind) return; /* Core!?UnsafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8e3032: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 8e3036: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 8e3038: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 8e303c: fmul dword ptr [esi - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffffcu)));
/* 8e303f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e3041: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 8e3045: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8e3047: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e3049: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e304f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e3051: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e3054: jp 0x8e3080 */
  if (pf) goto L_8e3080;
L_8e3056: /* 8e3056: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 8e305a: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e3060: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8e3064: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 8e3068: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e306e: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 8e3072: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 8e3076: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e307c: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
L_8e3080: /* 8e3080: fld dword ptr [esp + 0xb8] */
  { double v = F32((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* 8e3087: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 8e308b: fmul dword ptr [esp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x3cu)));
/* 8e308f: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 8e3093: fld dword ptr [esp + 0xbc] */
  { double v = F32((uint32_t)(esp + 0xbcu)); FPUSH(v); }
/* 8e309a: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 8e309e: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 8e30a2: mov dword ptr [esp + 0x100], ecx */
  W32((uint32_t)(esp + 0x100u), ecx);
/* 8e30a9: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e30ab: lea ecx, [esp + 0x104] */
  ecx = (uint32_t)(esp + 0x104u);
/* 8e30b2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e30b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e30b5: fld dword ptr [esp + 0xbc] */
  { double v = F32((uint32_t)(esp + 0xbcu)); FPUSH(v); }
/* 8e30bc: mov ecx, edi */
  ecx = edi;
/* 8e30be: fmul dword ptr [esp + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x40u)));
/* 8e30c2: mov dword ptr [esp + 0x10c], edx */
  W32((uint32_t)(esp + 0x10cu), edx);
/* 8e30c9: mov dword ptr [esp + 0x110], eax */
  W32((uint32_t)(esp + 0x110u), eax);
/* 8e30d0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e30d2: fstp dword ptr [esp + 0x114] */
  WF32((uint32_t)(esp + 0x114u), ST0); FPOP();
/* 8e30d9: call 0x6cbdca */
  esp -= 4; W32(esp, 0x8e30deu); SPILL(); f_6cbdca(); if (g_unwind) return; RELOAD();
/* 8e30de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e30e0: je 0x8e3373 */
  if (zf) goto L_8e3373;
L_8e30e6: /* 8e30e6: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
L_8e30ea: /* 8e30ea: and edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8e30ed: cmp dl, 0x30 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8e30f0: jne 0x8e32a4 */
  if (!zf) goto L_8e32a4;
L_8e30f6: /* 8e30f6: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8e30f8: lea ebx, [esi - 8] */
  ebx = (uint32_t)(esi + 0xfffffff8u);
/* 8e30fb: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e3101: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 8e3104: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8e3106: fsub dword ptr [esi - 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xfffffffcu)));
/* 8e3109: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 8e310b: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 8e310d: fld dword ptr [esi - 4] */
  { double v = F32((uint32_t)(esi + 0xfffffffcu)); FPUSH(v); }
/* 8e3110: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e3116: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 8e3118: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e311e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e3120: fld dword ptr [ebp + 4] */
  { double v = F32((uint32_t)(ebp + 0x4u)); FPUSH(v); }
/* 8e3123: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e3129: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8e312b: fsub dword ptr [ebp] */
  ST0 = ST0 - (F32((uint32_t)(ebp)));
/* 8e312e: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8e3130: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 8e3132: fstp dword ptr [esp + 0xd0] */
  WF32((uint32_t)(esp + 0xd0u), ST0); FPOP();
/* 8e3139: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 8e313c: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e3142: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8e3144: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e314a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e314c: fst dword ptr [esp + 0xd4] */
  WF32((uint32_t)(esp + 0xd4u), ST0);
/* 8e3153: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8e3155: fld dword ptr [esp + 0xd0] */
  { double v = F32((uint32_t)(esp + 0xd0u)); FPUSH(v); }
/* 8e315c: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 8e315e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e3160: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e3162: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 8e3164: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e3166: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 8e316c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e316e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e3170: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e3172: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e3174: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e3176: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e3179: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e317b: jne 0x8e32a4 */
  if (!zf) goto L_8e32a4;
L_8e3181: /* 8e3181: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e3182: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e3183: lea edx, [esp + 0x8c] */
  edx = (uint32_t)(esp + 0x8cu);
/* 8e318a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e318b: lea eax, [esp + 0xa8] */
  eax = (uint32_t)(esp + 0xa8u);
/* 8e3192: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e3193: call 0x6c4b15 */
  esp -= 4; W32(esp, 0x8e3198u); SPILL(); f_6c4b15(); if (g_unwind) return; RELOAD();
/* 8e3198: fld dword ptr [esp + 0x9c] */
  { double v = F32((uint32_t)(esp + 0x9cu)); FPUSH(v); }
/* 8e319f: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e31a5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e31a8: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 8e31af: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 8e31b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e31b4: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 8e31b6: lea ecx, [esp + 0xe8] */
  ecx = (uint32_t)(esp + 0xe8u);
/* 8e31bd: fstp dword ptr [esp + 0xe8] */
  WF32((uint32_t)(esp + 0xe8u), ST0); FPOP();
/* 8e31c4: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 8e31cb: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8e31cd: fstp dword ptr [esp + 0xec] */
  WF32((uint32_t)(esp + 0xecu), ST0); FPOP();
/* 8e31d4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e31d6: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 8e31dd: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e31e3: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 8e31ea: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 8e31f0: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8e31f2: fstp dword ptr [esp + 0xf0] */
  WF32((uint32_t)(esp + 0xf0u), ST0); FPOP();
/* 8e31f9: call dword ptr [0xcfab34] */
  esp -= 4; W32(esp, 0x8e31ffu); SPILL(); f_4e34f4(); if (g_unwind) return; /* Core!?UnsafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8e31ff: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8e3203: fmul dword ptr [esi - 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffffcu)));
/* 8e3206: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8e320a: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8e320c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e320e: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8e3212: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 8e3214: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e3216: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e321c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e321e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e3221: jp 0x8e324d */
  if (pf) goto L_8e324d;
L_8e3223: /* 8e3223: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8e3227: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e322d: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8e3231: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8e3235: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e323b: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8e323f: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8e3243: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e3249: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
L_8e324d: /* 8e324d: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8e3251: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 8e3255: fmul dword ptr [esp + 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xa4u)));
/* 8e325c: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8e3260: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8e3264: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 8e3268: fmul dword ptr [esp + 0x9c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x9cu)));
/* 8e326f: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 8e3273: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e3275: lea edx, [esp + 0x60] */
  edx = (uint32_t)(esp + 0x60u);
/* 8e3279: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e327b: mov dword ptr [esp + 0x68], ecx */
  W32((uint32_t)(esp + 0x68u), ecx);
/* 8e327f: fld dword ptr [esp + 0xa4] */
  { double v = F32((uint32_t)(esp + 0xa4u)); FPUSH(v); }
/* 8e3286: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e3287: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 8e328b: mov ecx, edi */
  ecx = edi;
/* 8e328d: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 8e3291: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8e3293: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 8e3297: call 0x6cbdca */
  esp -= 4; W32(esp, 0x8e329cu); SPILL(); f_6cbdca(); if (g_unwind) return; RELOAD();
/* 8e329c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e329e: je 0x8e3373 */
  if (zf) goto L_8e3373;
L_8e32a4: /* 8e32a4: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 8e32a8: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 8e32ac: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 8e32b0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8e32b1: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e32b4: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8e32b7: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e32b9: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 8e32bd: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 8e32c1: jl 0x8e2d70 */
  if ((sf != of)) goto L_8e2d70;
L_8e32c7: /* 8e32c7: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 8e32cb: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* 8e32ce: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8e32cf: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8e32d2: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8e32d5: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e32d7: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 8e32db: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 8e32df: jl 0x8e2d50 */
  if ((sf != of)) goto L_8e2d50;
L_8e32e5: /* 8e32e5: fld dword ptr [edi + 0x88] */
  { double v = F32((uint32_t)(edi + 0x88u)); FPUSH(v); }
/* 8e32eb: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 8e32f1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e32f3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e32f6: jne 0x8e3373 */
  if (!zf) goto L_8e3373;
L_8e32fc: /* 8e32fc: fld dword ptr [edi + 0x88] */
  { double v = F32((uint32_t)(edi + 0x88u)); FPUSH(v); }
/* 8e3302: fcomp dword ptr [edi + 0x8c] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x8cu)));
  FPOP();
/* 8e3308: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e330a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e330d: jp 0x8e3373 */
  if (pf) goto L_8e3373;
L_8e330f: /* 8e330f: fld dword ptr [edi + 0x8c] */
  { double v = F32((uint32_t)(edi + 0x8cu)); FPUSH(v); }
/* 8e3315: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e331b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e331d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e3320: jne 0x8e3373 */
  if (!zf) goto L_8e3373;
L_8e3322: /* 8e3322: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8e3324: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* 8e332a: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 8e332d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8e332f: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* 8e3332: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8e3335: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8e3337: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 8e333a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8e333d: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 8e3340: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8e3343: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8e3345: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 8e3348: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8e334b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8e334d: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8e3350: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 8e3353: mov dword ptr [edi + 0x5fc], 1 */
  W32((uint32_t)(edi + 0x5fcu), 0x1u);
/* 8e335d: jmp 0x8e3373 */
  goto L_8e3373;
L_8e335f: /* 8e335f: lea ecx, [esp + 0x110] */
  ecx = (uint32_t)(esp + 0x110u);
/* 8e3366: mov dword ptr [esp + 0x158], ebx */
  W32((uint32_t)(esp + 0x158u), ebx);
/* 8e336d: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8e3373u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_8e3373: /* 8e3373: mov ecx, dword ptr [esp + 0x150] */
  ecx = R32((uint32_t)(esp + 0x150u));
/* 8e337a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e337b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e337c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e337d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e337e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e3385: add esp, 0x14c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e338b: ret 0x10 */
  esp += 20; SPILL(); return;
}
