#include "recomp.h"
#include "rec_mod.h"

void f_51a510(void) {
  LOAD_REGS();
L_51a510: /* 51a510: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51a511: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a512: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 51a516: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51a519: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51a51c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 51a524: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51a527: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51a528: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51a529: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51a52c: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 51a530: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51a531: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a532: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51a539u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51a539: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51a53c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51a53d: mov eax, edx */
  eax = edx;
/* 51a53f: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51a542: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51a545: jne 0x51a557 */
  if (!zf) goto L_51a557;
L_51a547: /* 51a547: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51a54a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51a54c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51a54d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a54e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51a551: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51a557u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51a557: /* 51a557: call 0x4e3d0f */
  esp -= 4; W32(esp, 0x51a55cu); SPILL(); f_4e3d0f(); if (g_unwind) return; RELOAD();
/* 51a55c: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 51a55e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 51a55f: mov ecx, 0xffff */
  ecx = 0xffffu;
/* 51a564: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x51a564);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 51a566: mov esi, edx */
  esi = edx;
/* 51a568: call 0x4e3d0f */
  esp -= 4; W32(esp, 0x51a56du); SPILL(); f_4e3d0f(); if (g_unwind) return; RELOAD();
/* 51a56d: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 51a56f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 51a570: mov ecx, 0xffff */
  ecx = 0xffffu;
/* 51a575: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x51a575);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 51a577: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 51a57b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51a57d: mov edi, edx */
  edi = edx;
/* 51a57f: je 0x51a5a2 */
  if (zf) goto L_51a5a2;
L_51a581: /* 51a581: call 0x4e3d0f */
  esp -= 4; W32(esp, 0x51a586u); SPILL(); f_4e3d0f(); if (g_unwind) return; RELOAD();
/* 51a586: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 51a588: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 51a589: mov ecx, 0xffff */
  ecx = 0xffffu;
/* 51a58e: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x51a58e);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 51a590: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 51a594: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 51a596: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 51a599: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51a59a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51a59b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 51a59e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51a59f: ret 8 */
  esp += 12; SPILL(); return;
L_51a5a2: /* 51a5a2: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 51a5a6: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 51a5a8: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 51a5ab: xor edx, edx */
  edx = 0;
/* 51a5ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51a5ae: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 51a5b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51a5b2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51a5b3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51a5f0(void) {
  LOAD_REGS();
L_51a5f0: /* 51a5f0: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51a5f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a5f4: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 51a5f8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51a5fb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51a5fe: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51a601: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51a602: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51a605: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 51a609: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51a60a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a60b: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51a612u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51a612: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51a615: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51a618: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 51a61c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51a61d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51a620: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51a621: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a622: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51a625: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51a62cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51a62c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51a62f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51a630: mov eax, edx */
  eax = edx;
/* 51a632: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51a635: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51a638: jne 0x51a64a */
  if (!zf) goto L_51a64a;
L_51a63a: /* 51a63a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51a63d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51a63f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51a640: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a641: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51a644: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51a64au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51a64a: /* 51a64a: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 51a64e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51a64f: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51a653: call 0x4e3b5c */
  esp -= 4; W32(esp, 0x51a658u); SPILL(); f_4e3b5c(); if (g_unwind) return; RELOAD();
/* 51a658: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 51a65a: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 51a65e: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 51a662: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 51a665: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 51a667: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 51a66b: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 51a66f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 51a672: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 51a674: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 51a678: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 51a67c: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 51a67e: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 51a682: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51a683: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 51a687: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 51a68b: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 51a68f: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 51a693: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 51a697: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 51a699: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 51a69d: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 51a6a1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 51a6a3: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 51a6a7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 51a6a9: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 51a6ad: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 51a6b1: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 51a6b5: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 51a6b9: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 51a6bd: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 51a6c1: fsub dword ptr [esp] */
  ST0 = ST0 - (F32((uint32_t)(esp)));
/* 51a6c5: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 51a6c9: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 51a6cd: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 51a6d1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 51a6d3: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 51a6d5: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 51a6d9: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 51a6dd: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 51a6e1: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 51a6e3: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 51a6e6: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 51a6ea: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 51a6ee: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 51a6f0: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 51a6f3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 51a6f5: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51a6f8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51a750(void) {
  LOAD_REGS();
L_51a750: /* 51a750: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51a753: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a754: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 51a758: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51a75b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51a75e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51a761: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51a762: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51a765: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51a769: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51a76a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a76b: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51a772u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51a772: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51a775: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51a778: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 51a77c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51a77d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51a780: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51a781: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a782: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51a785: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51a78cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51a78c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51a78f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51a790: mov eax, edx */
  eax = edx;
/* 51a792: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51a795: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51a798: jne 0x51a7aa */
  if (!zf) goto L_51a7aa;
L_51a79a: /* 51a79a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51a79d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51a79f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51a7a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a7a1: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51a7a4: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51a7aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51a7aa: /* 51a7aa: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 51a7ae: cmp edx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51a7b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51a7b3: jne 0x51a7da */
  if (!zf) goto L_51a7da;
L_51a7b5: /* 51a7b5: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 51a7b9: cmp eax, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51a7bd: jne 0x51a7da */
  if (!zf) goto L_51a7da;
L_51a7bf: /* 51a7bf: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 51a7c3: cmp ecx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51a7c7: jne 0x51a7da */
  if (!zf) goto L_51a7da;
L_51a7c9: /* 51a7c9: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 51a7cd: mov eax, 1 */
  eax = 0x1u;
/* 51a7d2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 51a7d4: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51a7d7: ret 8 */
  esp += 12; SPILL(); return;
L_51a7da: /* 51a7da: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 51a7de: xor eax, eax */
  eax = 0;
/* 51a7e0: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 51a7e2: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51a7e5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51a820(void) {
  LOAD_REGS();
L_51a820: /* 51a820: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51a823: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a824: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 51a828: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51a82b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51a82e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51a831: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51a832: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51a835: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51a839: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51a83a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a83b: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51a842u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51a842: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51a845: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51a848: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 51a84c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51a84d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51a850: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51a851: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a852: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51a855: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51a85cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51a85c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51a85f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51a860: mov eax, edx */
  eax = edx;
/* 51a862: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51a865: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51a868: jne 0x51a87a */
  if (!zf) goto L_51a87a;
L_51a86a: /* 51a86a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51a86d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51a86f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51a870: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a871: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51a874: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51a87au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51a87a: /* 51a87a: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 51a87e: cmp edx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51a882: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51a883: jne 0x51a8a7 */
  if (!zf) goto L_51a8a7;
L_51a885: /* 51a885: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 51a889: cmp eax, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51a88d: jne 0x51a8a7 */
  if (!zf) goto L_51a8a7;
L_51a88f: /* 51a88f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 51a893: cmp ecx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51a897: jne 0x51a8a7 */
  if (!zf) goto L_51a8a7;
L_51a899: /* 51a899: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 51a89d: xor eax, eax */
  eax = 0;
/* 51a89f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 51a8a1: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51a8a4: ret 8 */
  esp += 12; SPILL(); return;
L_51a8a7: /* 51a8a7: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 51a8ab: mov eax, 1 */
  eax = 0x1u;
/* 51a8b0: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 51a8b2: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51a8b5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51a8f0(void) {
  LOAD_REGS();
L_51a8f0: /* 51a8f0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51a8f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a8f4: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 51a8f8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51a8fb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51a8fe: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51a901: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51a902: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51a903: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51a906: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 51a90a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51a90b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a90c: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51a913u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51a913: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51a916: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 51a91a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 51a922: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51a925: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51a926: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51a929: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51a92a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a92b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51a92e: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51a935u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51a935: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51a938: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51a939: mov eax, edx */
  eax = edx;
/* 51a93b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51a93e: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51a941: jne 0x51a953 */
  if (!zf) goto L_51a953;
L_51a943: /* 51a943: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51a946: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51a948: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51a949: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a94a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51a94d: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51a953u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51a953: /* 51a953: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 51a957: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 51a95b: call 0x554f00 */
  esp -= 4; W32(esp, 0x51a960u); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 51a960: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 51a964: mov esi, eax */
  esi = eax;
/* 51a966: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 51a96a: call 0x554f00 */
  esp -= 4; W32(esp, 0x51a96fu); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 51a96f: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 51a973: mov edi, eax */
  edi = eax;
/* 51a975: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 51a979: call 0x554f00 */
  esp -= 4; W32(esp, 0x51a97eu); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 51a97e: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 51a982: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 51a984: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 51a987: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51a988: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 51a98b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51a98c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51a98f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51a9d0(void) {
  LOAD_REGS();
L_51a9d0: /* 51a9d0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51a9d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a9d4: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 51a9d8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51a9db: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51a9de: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 51a9e6: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51a9e9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51a9ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51a9eb: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51a9ee: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 51a9f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51a9f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51a9f4: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51a9fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51a9fb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51a9fe: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51aa01: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51aa05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51aa06: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51aa09: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51aa0a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51aa0b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51aa0e: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51aa15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51aa15: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51aa18: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51aa19: mov eax, edx */
  eax = edx;
/* 51aa1b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51aa1e: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51aa21: jne 0x51aa33 */
  if (!zf) goto L_51aa33;
L_51aa23: /* 51aa23: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51aa26: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51aa28: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51aa29: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51aa2a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51aa2d: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51aa33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51aa33: /* 51aa33: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 51aa37: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 51aa3b: call 0x554f00 */
  esp -= 4; W32(esp, 0x51aa40u); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 51aa40: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 51aa44: mov esi, eax */
  esi = eax;
/* 51aa46: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 51aa4a: call 0x554f00 */
  esp -= 4; W32(esp, 0x51aa4fu); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 51aa4f: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 51aa53: mov edi, eax */
  edi = eax;
/* 51aa55: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 51aa59: call 0x554f00 */
  esp -= 4; W32(esp, 0x51aa5eu); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 51aa5e: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 51aa62: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 51aa64: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 51aa67: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51aa68: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 51aa6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51aa6c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51aa6f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51aab0(void) {
  LOAD_REGS();
L_51aab0: /* 51aab0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51aab3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51aab4: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 51aab8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51aabb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51aabe: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51aac1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51aac2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51aac3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51aac6: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 51aaca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51aacb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51aacc: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51aad3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51aad3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51aad6: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 51aada: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 51aae2: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51aae5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51aae6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51aae9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51aaea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51aaeb: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51aaee: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51aaf5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51aaf5: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51aaf8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51aaf9: mov eax, edx */
  eax = edx;
/* 51aafb: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51aafe: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51ab01: jne 0x51ab13 */
  if (!zf) goto L_51ab13;
L_51ab03: /* 51ab03: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51ab06: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51ab08: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51ab09: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51ab0a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51ab0d: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51ab13u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51ab13: /* 51ab13: fld dword ptr [0x5694a4] */
  { double v = F32((uint32_t)(0x5694a4u)); FPUSH(v); }
/* 51ab19: fdiv dword ptr [esp + 0x18] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x18u)));
/* 51ab1d: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 51ab21: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 51ab23: call 0x554f00 */
  esp -= 4; W32(esp, 0x51ab28u); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 51ab28: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 51ab2c: mov esi, eax */
  esi = eax;
/* 51ab2e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 51ab30: call 0x554f00 */
  esp -= 4; W32(esp, 0x51ab35u); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 51ab35: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 51ab39: mov edi, eax */
  edi = eax;
/* 51ab3b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 51ab3d: call 0x554f00 */
  esp -= 4; W32(esp, 0x51ab42u); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 51ab42: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 51ab44: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 51ab48: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 51ab4a: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 51ab4d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51ab4e: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 51ab51: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51ab52: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51ab55: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51ab90(void) {
  LOAD_REGS();
L_51ab90: /* 51ab90: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51ab93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51ab94: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 51ab98: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 51aba2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51aba5: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51aba8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51abab: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51abac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51abad: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51abb0: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 51abb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51abb5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51abb6: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51abbdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51abbd: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 51abc3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51abc5: je 0x51abd2 */
  if (zf) goto L_51abd2;
L_51abc7: /* 51abc7: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 51abcc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 51abce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51abcf: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x51abd2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51abd2: /* 51abd2: mov edi, dword ptr [0x5afecc] */
  edi = R32((uint32_t)(0x5afeccu));
/* 51abd8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51abda: jne 0x51abe0 */
  if (!zf) goto L_51abe0;
L_51abdc: /* 51abdc: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
L_51abe0: /* 51abe0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51abe3: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 51abe7: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 51abef: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51abf2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51abf3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51abf6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51abf7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51abf8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51abfb: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51ac02u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51ac02: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51ac05: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51ac06: mov eax, edx */
  eax = edx;
/* 51ac08: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51ac0b: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51ac0e: jne 0x51ac20 */
  if (!zf) goto L_51ac20;
L_51ac10: /* 51ac10: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51ac13: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51ac15: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51ac16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51ac17: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51ac1a: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51ac20u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51ac20: /* 51ac20: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 51ac24: fild dword ptr [edi] */
  { double v = (double)(int32_t)R32((uint32_t)(edi)); FPUSH(v); }
/* 51ac26: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 51ac2a: call 0x554f00 */
  esp -= 4; W32(esp, 0x51ac2fu); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 51ac2f: fild dword ptr [edi + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 51ac32: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 51ac34: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 51ac36: call 0x554f00 */
  esp -= 4; W32(esp, 0x51ac3bu); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 51ac3b: fild dword ptr [edi + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 51ac3e: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 51ac41: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 51ac43: call 0x554f00 */
  esp -= 4; W32(esp, 0x51ac48u); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 51ac48: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 51ac4a: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 51ac4e: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 51ac51: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 51ac53: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 51ac55: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 51ac58: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 51ac5b: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 51ac5e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51ac5f: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 51ac62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51ac63: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51ac66: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51acb0(void) {
  LOAD_REGS();
L_51acb0: /* 51acb0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51acb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51acb4: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 51acb8: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 51acc2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51acc5: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51acc8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51accb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51accc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51accd: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51acd0: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 51acd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51acd5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51acd6: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51acddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51acdd: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 51ace3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51ace5: je 0x51acf2 */
  if (zf) goto L_51acf2;
L_51ace7: /* 51ace7: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 51acec: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 51acee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51acef: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x51acf2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51acf2: /* 51acf2: mov edi, dword ptr [0x5afecc] */
  edi = R32((uint32_t)(0x5afeccu));
/* 51acf8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51acfa: jne 0x51ad00 */
  if (!zf) goto L_51ad00;
L_51acfc: /* 51acfc: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
L_51ad00: /* 51ad00: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51ad03: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 51ad07: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 51ad0f: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51ad12: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51ad13: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51ad16: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51ad17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51ad18: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51ad1b: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51ad22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51ad22: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51ad25: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51ad26: mov eax, edx */
  eax = edx;
/* 51ad28: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51ad2b: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51ad2e: jne 0x51ad40 */
  if (!zf) goto L_51ad40;
L_51ad30: /* 51ad30: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51ad33: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51ad35: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51ad36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51ad37: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51ad3a: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51ad40u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51ad40: /* 51ad40: fld dword ptr [0x5694a4] */
  { double v = F32((uint32_t)(0x5694a4u)); FPUSH(v); }
/* 51ad46: fdiv dword ptr [esp + 0x18] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x18u)));
/* 51ad4a: fild dword ptr [edi] */
  { double v = (double)(int32_t)R32((uint32_t)(edi)); FPUSH(v); }
/* 51ad4c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 51ad4e: call 0x554f00 */
  esp -= 4; W32(esp, 0x51ad53u); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 51ad53: fild dword ptr [edi + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 51ad56: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 51ad58: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 51ad5a: call 0x554f00 */
  esp -= 4; W32(esp, 0x51ad5fu); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 51ad5f: fild dword ptr [edi + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 51ad62: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 51ad65: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 51ad67: call 0x554f00 */
  esp -= 4; W32(esp, 0x51ad6cu); SPILL(); f_554f00(); if (g_unwind) return; RELOAD();
/* 51ad6c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 51ad6e: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 51ad72: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 51ad75: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 51ad77: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 51ad79: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 51ad7c: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 51ad7f: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 51ad82: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51ad83: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 51ad86: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51ad87: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51ad8a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51add0(void) {
  LOAD_REGS();
L_51add0: /* 51add0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51add3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51add4: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 51add8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51addb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51adde: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51ade1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51ade2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51ade5: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51ade9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51adea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51adeb: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51adf2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51adf2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51adf5: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51adf8: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 51adfc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51adfd: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51ae00: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51ae01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51ae02: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51ae05: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51ae0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51ae0c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51ae0f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51ae10: mov eax, edx */
  eax = edx;
/* 51ae12: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51ae15: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51ae18: jne 0x51ae2a */
  if (!zf) goto L_51ae2a;
L_51ae1a: /* 51ae1a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51ae1d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51ae1f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51ae20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51ae21: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51ae24: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51ae2au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51ae2a: /* 51ae2a: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 51ae2e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 51ae32: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 51ae36: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 51ae3a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 51ae3c: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 51ae40: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 51ae42: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 51ae46: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 51ae48: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 51ae4c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 51ae4e: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 51ae51: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 51ae54: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51ae55: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51ae58: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51ae90(void) {
  LOAD_REGS();
L_51ae90: /* 51ae90: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51ae93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51ae94: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 51ae98: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51ae9b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51ae9e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51aea1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51aea2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51aea5: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51aea9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51aeaa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51aeab: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51aeb2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51aeb2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51aeb5: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51aeb8: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 51aebc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51aebd: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51aec0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51aec1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51aec2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51aec5: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51aeccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51aecc: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51aecf: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51aed0: mov eax, edx */
  eax = edx;
/* 51aed2: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51aed5: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51aed8: jne 0x51aeea */
  if (!zf) goto L_51aeea;
L_51aeda: /* 51aeda: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51aedd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51aedf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51aee0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51aee1: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51aee4: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51aeeau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51aeea: /* 51aeea: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 51aeee: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 51aef2: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 51aef6: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 51aefa: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 51aefc: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 51af00: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 51af02: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 51af06: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 51af08: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 51af0c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 51af0e: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 51af11: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 51af14: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51af15: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51af18: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51af50(void) {
  LOAD_REGS();
L_51af50: /* 51af50: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51af53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51af54: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 51af58: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 51af62: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51af65: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51af68: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51af6b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51af6c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51af6d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51af70: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 51af74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51af75: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51af76: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51af7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51af7d: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 51af83: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51af85: je 0x51af92 */
  if (zf) goto L_51af92;
L_51af87: /* 51af87: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 51af8c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 51af8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51af8f: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x51af92u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51af92: /* 51af92: mov edi, dword ptr [0x5afecc] */
  edi = R32((uint32_t)(0x5afeccu));
/* 51af98: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51af9a: jne 0x51afa0 */
  if (!zf) goto L_51afa0;
L_51af9c: /* 51af9c: lea edi, [esp + 0x14] */
  edi = (uint32_t)(esp + 0x14u);
L_51afa0: /* 51afa0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51afa3: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51afa6: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51afaa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51afab: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51afae: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51afaf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51afb0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51afb3: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51afbau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51afba: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51afbd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51afbe: mov eax, edx */
  eax = edx;
/* 51afc0: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51afc3: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51afc6: jne 0x51afd8 */
  if (!zf) goto L_51afd8;
L_51afc8: /* 51afc8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51afcb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51afcd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51afce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51afcf: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51afd2: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51afd8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51afd8: /* 51afd8: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 51afda: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 51afde: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 51afe1: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 51afe3: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 51afe7: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* 51afe9: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 51afed: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 51afef: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 51aff2: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 51aff5: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 51aff9: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 51affb: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 51affe: mov eax, esi */
  eax = esi;
/* 51b000: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 51b002: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 51b005: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 51b008: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 51b00b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51b00c: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 51b00f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51b010: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51b013: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51b060(void) {
  LOAD_REGS();
L_51b060: /* 51b060: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51b063: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b064: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 51b068: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 51b072: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51b075: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51b078: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51b07b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51b07c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51b07d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51b080: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 51b084: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51b085: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b086: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51b08du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51b08d: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 51b093: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51b095: je 0x51b0a2 */
  if (zf) goto L_51b0a2;
L_51b097: /* 51b097: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 51b09c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 51b09e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51b09f: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x51b0a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51b0a2: /* 51b0a2: mov edi, dword ptr [0x5afecc] */
  edi = R32((uint32_t)(0x5afeccu));
/* 51b0a8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51b0aa: jne 0x51b0b0 */
  if (!zf) goto L_51b0b0;
L_51b0ac: /* 51b0ac: lea edi, [esp + 0x14] */
  edi = (uint32_t)(esp + 0x14u);
L_51b0b0: /* 51b0b0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51b0b3: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51b0b6: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51b0ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51b0bb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51b0be: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51b0bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b0c0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51b0c3: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51b0cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51b0ca: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51b0cd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51b0ce: mov eax, edx */
  eax = edx;
/* 51b0d0: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51b0d3: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51b0d6: jne 0x51b0e8 */
  if (!zf) goto L_51b0e8;
L_51b0d8: /* 51b0d8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51b0db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51b0dd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51b0de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b0df: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51b0e2: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51b0e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51b0e8: /* 51b0e8: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 51b0ea: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 51b0ee: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 51b0f1: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 51b0f3: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 51b0f7: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* 51b0f9: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 51b0fd: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 51b0ff: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 51b102: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 51b105: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 51b109: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 51b10b: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 51b10e: mov eax, esi */
  eax = esi;
/* 51b110: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 51b112: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 51b115: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 51b118: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 51b11b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51b11c: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 51b11f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51b120: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51b123: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51b170(void) {
  LOAD_REGS();
L_51b170: /* 51b170: sub esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51b176: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51b177: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 51b178: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b179: mov esi, dword ptr [esp + 0xa4] */
  esi = R32((uint32_t)(esp + 0xa4u));
/* 51b180: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51b183: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51b186: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51b189: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51b18a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51b18b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51b18e: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* 51b192: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51b193: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b194: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51b19bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51b19b: xor edi, edi */
  edi = 0;
/* 51b19d: mov dword ptr [0x5afecc], edi */
  W32((uint32_t)(0x5afeccu), edi);
/* 51b1a3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51b1a6: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51b1a9: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 51b1ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51b1ae: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51b1b1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51b1b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b1b3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51b1b6: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51b1bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51b1bd: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 51b1c3: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51b1c5: je 0x51b1d2 */
  if (zf) goto L_51b1d2;
L_51b1c7: /* 51b1c7: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 51b1cc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 51b1ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51b1cf: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x51b1d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51b1d2: /* 51b1d2: mov eax, dword ptr [0x5afecc] */
  eax = R32((uint32_t)(0x5afeccu));
/* 51b1d7: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51b1d9: je 0x51b1e1 */
  if (zf) goto L_51b1e1;
L_51b1db: /* 51b1db: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 51b1df: jmp 0x51b1e9 */
  goto L_51b1e9;
L_51b1e1: /* 51b1e1: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 51b1e5: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
L_51b1e9: /* 51b1e9: mov dword ptr [0x5afecc], edi */
  W32((uint32_t)(0x5afeccu), edi);
/* 51b1ef: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51b1f2: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51b1f5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51b1f8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51b1f9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51b1fc: lea eax, [esp + 0x5c] */
  eax = (uint32_t)(esp + 0x5cu);
/* 51b200: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51b201: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b202: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51b209u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51b209: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 51b20f: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51b211: je 0x51b21e */
  if (zf) goto L_51b21e;
L_51b213: /* 51b213: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 51b218: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 51b21a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51b21b: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x51b21eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51b21e: /* 51b21e: mov ebp, dword ptr [0x5afecc] */
  ebp = R32((uint32_t)(0x5afeccu));
/* 51b224: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51b226: jne 0x51b22c */
  if (!zf) goto L_51b22c;
L_51b228: /* 51b228: lea ebp, [esp + 0x5c] */
  ebp = (uint32_t)(esp + 0x5cu);
L_51b22c: /* 51b22c: mov dword ptr [0x5afecc], edi */
  W32((uint32_t)(0x5afeccu), edi);
/* 51b232: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51b235: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51b238: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 51b23c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51b23d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51b240: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51b241: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b242: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51b245: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51b24cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51b24c: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 51b252: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51b254: je 0x51b261 */
  if (zf) goto L_51b261;
L_51b256: /* 51b256: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 51b25b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 51b25d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51b25e: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x51b261u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51b261: /* 51b261: mov ebx, dword ptr [0x5afecc] */
  ebx = R32((uint32_t)(0x5afeccu));
/* 51b267: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51b269: jne 0x51b26f */
  if (!zf) goto L_51b26f;
L_51b26b: /* 51b26b: lea ebx, [esp + 0x44] */
  ebx = (uint32_t)(esp + 0x44u);
L_51b26f: /* 51b26f: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51b272: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51b273: mov eax, edx */
  eax = edx;
/* 51b275: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51b278: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51b27b: jne 0x51b28c */
  if (!zf) goto L_51b28c;
L_51b27d: /* 51b27d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51b280: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51b281: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51b282: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b283: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51b286: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51b28cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51b28c: /* 51b28c: mov ecx, 0xc */
  ecx = 0xcu;
/* 51b291: mov esi, 0x5b31c0 */
  esi = 0x5b31c0u;
/* 51b296: lea edi, [esp + 0x74] */
  edi = (uint32_t)(esp + 0x74u);
/* 51b29a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 51b29c: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 51b2a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51b2a1: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 51b2a5: call 0x4e3a8f */
  esp -= 4; W32(esp, 0x51b2aau); SPILL(); f_4e3a8f(); if (g_unwind) return; RELOAD();
/* 51b2aa: mov esi, eax */
  esi = eax;
/* 51b2ac: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 51b2b0: mov ecx, 0xc */
  ecx = 0xcu;
/* 51b2b5: lea edi, [esp + 0x14] */
  edi = (uint32_t)(esp + 0x14u);
/* 51b2b9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 51b2bb: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 51b2bf: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 51b2c3: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 51b2c5: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 51b2c9: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 51b2cc: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 51b2d0: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 51b2d3: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 51b2d7: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 51b2db: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
/* 51b2de: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 51b2e2: mov dword ptr [ebp + 4], ecx */
  W32((uint32_t)(ebp + 0x4u), ecx);
/* 51b2e5: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 51b2e9: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 51b2ec: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 51b2f0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51b2f1: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 51b2f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51b2f4: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 51b2f7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51b2f8: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 51b2fb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51b2fc: add esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51b302: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51b380(void) {
  LOAD_REGS();
L_51b380: /* 51b380: sub esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51b386: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51b387: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 51b388: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b389: mov esi, dword ptr [esp + 0xa4] */
  esi = R32((uint32_t)(esp + 0xa4u));
/* 51b390: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51b393: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51b396: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51b399: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51b39a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51b39b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51b39e: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* 51b3a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51b3a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b3a4: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51b3abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51b3ab: xor edi, edi */
  edi = 0;
/* 51b3ad: mov dword ptr [0x5afecc], edi */
  W32((uint32_t)(0x5afeccu), edi);
/* 51b3b3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51b3b6: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51b3b9: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 51b3bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51b3be: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51b3c1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51b3c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b3c3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51b3c6: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51b3cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51b3cd: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 51b3d3: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51b3d5: je 0x51b3e2 */
  if (zf) goto L_51b3e2;
L_51b3d7: /* 51b3d7: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 51b3dc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 51b3de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51b3df: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x51b3e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51b3e2: /* 51b3e2: mov eax, dword ptr [0x5afecc] */
  eax = R32((uint32_t)(0x5afeccu));
/* 51b3e7: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51b3e9: je 0x51b3f1 */
  if (zf) goto L_51b3f1;
L_51b3eb: /* 51b3eb: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 51b3ef: jmp 0x51b3f9 */
  goto L_51b3f9;
L_51b3f1: /* 51b3f1: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 51b3f5: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
L_51b3f9: /* 51b3f9: mov dword ptr [0x5afecc], edi */
  W32((uint32_t)(0x5afeccu), edi);
/* 51b3ff: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51b402: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51b405: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51b408: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51b409: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51b40c: lea eax, [esp + 0x5c] */
  eax = (uint32_t)(esp + 0x5cu);
/* 51b410: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51b411: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b412: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51b419u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51b419: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 51b41f: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51b421: je 0x51b42e */
  if (zf) goto L_51b42e;
L_51b423: /* 51b423: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 51b428: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 51b42a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51b42b: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x51b42eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51b42e: /* 51b42e: mov ebp, dword ptr [0x5afecc] */
  ebp = R32((uint32_t)(0x5afeccu));
/* 51b434: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51b436: jne 0x51b43c */
  if (!zf) goto L_51b43c;
L_51b438: /* 51b438: lea ebp, [esp + 0x5c] */
  ebp = (uint32_t)(esp + 0x5cu);
L_51b43c: /* 51b43c: mov dword ptr [0x5afecc], edi */
  W32((uint32_t)(0x5afeccu), edi);
/* 51b442: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51b445: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51b448: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 51b44c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51b44d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51b450: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51b451: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b452: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51b455: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51b45cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51b45c: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 51b462: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51b464: je 0x51b471 */
  if (zf) goto L_51b471;
L_51b466: /* 51b466: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 51b46b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 51b46d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51b46e: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x51b471u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51b471: /* 51b471: mov ebx, dword ptr [0x5afecc] */
  ebx = R32((uint32_t)(0x5afeccu));
/* 51b477: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51b479: jne 0x51b47f */
  if (!zf) goto L_51b47f;
L_51b47b: /* 51b47b: lea ebx, [esp + 0x44] */
  ebx = (uint32_t)(esp + 0x44u);
L_51b47f: /* 51b47f: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51b482: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51b483: mov eax, edx */
  eax = edx;
/* 51b485: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51b488: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51b48b: jne 0x51b49c */
  if (!zf) goto L_51b49c;
L_51b48d: /* 51b48d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51b490: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51b491: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51b492: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b493: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51b496: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51b49cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51b49c: /* 51b49c: mov ecx, 0xc */
  ecx = 0xcu;
/* 51b4a1: mov esi, 0x5b31c0 */
  esi = 0x5b31c0u;
/* 51b4a6: lea edi, [esp + 0x74] */
  edi = (uint32_t)(esp + 0x74u);
/* 51b4aa: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 51b4ac: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 51b4b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51b4b1: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 51b4b5: call 0x4e13e8 */
  esp -= 4; W32(esp, 0x51b4bau); SPILL(); f_4e13e8(); if (g_unwind) return; RELOAD();
/* 51b4ba: mov esi, eax */
  esi = eax;
/* 51b4bc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 51b4c0: mov ecx, 0xc */
  ecx = 0xcu;
/* 51b4c5: lea edi, [esp + 0x14] */
  edi = (uint32_t)(esp + 0x14u);
/* 51b4c9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 51b4cb: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 51b4cf: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 51b4d3: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 51b4d5: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 51b4d9: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 51b4dc: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 51b4e0: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 51b4e3: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 51b4e7: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 51b4eb: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
/* 51b4ee: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 51b4f2: mov dword ptr [ebp + 4], ecx */
  W32((uint32_t)(ebp + 0x4u), ecx);
/* 51b4f5: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 51b4f9: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 51b4fc: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 51b500: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51b501: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 51b503: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51b504: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 51b507: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51b508: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 51b50b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51b50c: add esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51b512: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51b590(void) {
  LOAD_REGS();
L_51b590: /* 51b590: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51b593: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b594: mov esi, dword ptr [esp + 0x68] */
  esi = R32((uint32_t)(esp + 0x68u));
/* 51b598: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51b59b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51b59e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51b5a1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51b5a2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51b5a5: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 51b5a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51b5aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b5ab: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51b5b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51b5b2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51b5b5: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51b5b8: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 51b5bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51b5bd: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51b5c0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51b5c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b5c2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51b5c5: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51b5ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51b5cc: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51b5cf: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51b5d2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51b5d5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51b5d6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51b5d9: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 51b5dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51b5de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b5df: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51b5e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51b5e6: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51b5e9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51b5ea: mov eax, edx */
  eax = edx;
/* 51b5ec: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51b5ef: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51b5f2: jne 0x51b604 */
  if (!zf) goto L_51b604;
L_51b5f4: /* 51b5f4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51b5f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51b5f9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51b5fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b5fb: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51b5fe: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51b604u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51b604: /* 51b604: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 51b60c: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 51b610: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 51b614: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 51b618: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 51b61c: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 51b620: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 51b628: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 51b62c: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 51b634: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 51b638: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 51b63c: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 51b640: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* 51b644: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 51b648: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 51b64c: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 51b650: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 51b654: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 51b658: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 51b65c: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 51b660: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* 51b664: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 51b668: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 51b66c: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 51b670: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 51b674: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 51b678: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51b679: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 51b67d: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 51b681: mov dword ptr [esp + 0x64], eax */
  W32((uint32_t)(esp + 0x64u), eax);
/* 51b685: call 0x4e1a69 */
  esp -= 4; W32(esp, 0x51b68au); SPILL(); f_4e1a69(); if (g_unwind) return; RELOAD();
/* 51b68a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 51b68c: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 51b690: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 51b692: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 51b695: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 51b698: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 51b69b: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 51b69e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51b69f: add esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51b6a2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51b700(void) {
  LOAD_REGS();
L_51b700: /* 51b700: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51b703: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b704: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 51b708: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51b70b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51b70e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51b711: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51b712: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51b715: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51b719: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51b71a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b71b: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51b722u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51b722: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51b725: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51b726: mov eax, edx */
  eax = edx;
/* 51b728: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51b72b: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51b72e: jne 0x51b740 */
  if (!zf) goto L_51b740;
L_51b730: /* 51b730: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51b733: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51b735: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51b736: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b737: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51b73a: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51b740u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51b740: /* 51b740: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 51b744: and edx, 0xffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 51b74a: cmp edx, 0x7fff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51b750: jle 0x51b758 */
  if ((zf || sf != of)) goto L_51b758;
L_51b752: /* 51b752: sub edx, 0x10000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_51b758: /* 51b758: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 51b75c: and ecx, 0xffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 51b762: cmp ecx, 0x7fff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51b768: jle 0x51b770 */
  if ((zf || sf != of)) goto L_51b770;
L_51b76a: /* 51b76a: sub ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_51b770: /* 51b770: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 51b774: and eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 51b779: cmp eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51b77e: jle 0x51b785 */
  if ((zf || sf != of)) goto L_51b785;
L_51b780: /* 51b780: sub eax, 0x10000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_51b785: /* 51b785: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 51b789: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 51b78b: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 51b78e: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 51b791: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51b792: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51b795: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51b7d0(void) {
  LOAD_REGS();
L_51b7d0: /* 51b7d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51b7d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b7d2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 51b7d6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51b7d9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51b7dc: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 51b7e4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51b7e7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51b7e8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51b7eb: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51b7ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51b7f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b7f1: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51b7f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51b7f8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51b7fb: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51b7ff: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 51b807: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51b80a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51b80b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51b80e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51b80f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b810: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51b813: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51b81au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51b81a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51b81d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51b81e: mov eax, edx */
  eax = edx;
/* 51b820: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51b823: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51b826: jne 0x51b838 */
  if (!zf) goto L_51b838;
L_51b828: /* 51b828: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51b82b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51b82d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51b82e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b82f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51b832: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51b838u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51b838: /* 51b838: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 51b83c: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 51b840: and ecx, 0xffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 51b846: and edx, 0xffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 51b84c: mov eax, ecx */
  eax = ecx;
/* 51b84e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 51b850: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51b851: jns 0x51b855 */
  if (!sf) goto L_51b855;
L_51b853: /* 51b853: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_51b855: /* 51b855: cmp eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51b85a: jle 0x51b86d */
  if ((zf || sf != of)) goto L_51b86d;
L_51b85c: /* 51b85c: xor eax, eax */
  eax = 0;
/* 51b85e: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51b860: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 51b864: setl al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 51b867: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 51b869: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51b86a: ret 8 */
  esp += 12; SPILL(); return;
L_51b86d: /* 51b86d: xor eax, eax */
  eax = 0;
/* 51b86f: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51b871: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 51b875: setg al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 51b878: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 51b87a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51b87b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51b8b0(void) {
  LOAD_REGS();
L_51b8b0: /* 51b8b0: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51b8b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b8b4: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 51b8b8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51b8bb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51b8be: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51b8c1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51b8c2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51b8c5: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 51b8c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51b8ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b8cb: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51b8d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51b8d2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51b8d5: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51b8d8: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 51b8dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51b8dd: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51b8e0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51b8e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b8e2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51b8e5: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51b8ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51b8ec: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51b8ef: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51b8f0: mov eax, edx */
  eax = edx;
/* 51b8f2: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51b8f5: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51b8f8: jne 0x51b90a */
  if (!zf) goto L_51b90a;
L_51b8fa: /* 51b8fa: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51b8fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51b8ff: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51b900: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b901: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51b904: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51b90au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51b90a: /* 51b90a: lea edx, [esp + 4] */
  edx = (uint32_t)(esp + 0x4u);
/* 51b90e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51b90f: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 51b913: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51b914: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 51b918: call 0x4e361b */
  esp -= 4; W32(esp, 0x51b91du); SPILL(); f_4e361b(); if (g_unwind) return; RELOAD();
/* 51b91d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 51b91f: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 51b923: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 51b925: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 51b928: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 51b92b: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 51b92e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 51b931: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 51b934: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 51b937: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51b938: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51b93b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51b970(void) {
  LOAD_REGS();
L_51b970: /* 51b970: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51b973: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b974: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 51b978: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51b97b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51b97e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51b981: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51b982: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51b985: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 51b989: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51b98a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b98b: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51b992u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51b992: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51b995: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51b996: mov eax, edx */
  eax = edx;
/* 51b998: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51b99b: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51b99e: jne 0x51b9b0 */
  if (!zf) goto L_51b9b0;
L_51b9a0: /* 51b9a0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51b9a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51b9a5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51b9a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51b9a7: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51b9aa: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51b9b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51b9b0: /* 51b9b0: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 51b9b4: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 51b9b8: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 51b9bc: fchs  */
  ST0 = -ST0;
/* 51b9be: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 51b9c2: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 51b9c6: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 51b9ca: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 51b9cc: fchs  */
  ST0 = -ST0;
/* 51b9ce: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 51b9d2: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 51b9d6: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 51b9da: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 51b9de: fchs  */
  ST0 = -ST0;
/* 51b9e0: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 51b9e3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 51b9e7: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 51b9eb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 51b9ef: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 51b9f2: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 51b9f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51b9f6: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51b9f9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51ba30(void) {
  LOAD_REGS();
L_51ba30: /* 51ba30: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51ba33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51ba34: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 51ba38: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51ba3b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51ba3e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51ba41: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51ba42: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51ba45: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 51ba49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51ba4a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51ba4b: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51ba52u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51ba52: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51ba55: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51ba58: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 51ba5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51ba5d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51ba60: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51ba61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51ba62: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51ba65: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51ba6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51ba6c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51ba6f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51ba70: mov eax, edx */
  eax = edx;
/* 51ba72: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51ba75: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51ba78: jne 0x51ba8a */
  if (!zf) goto L_51ba8a;
L_51ba7a: /* 51ba7a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51ba7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51ba7f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51ba80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51ba81: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51ba84: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51ba8au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51ba8a: /* 51ba8a: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 51ba8e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 51ba92: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51ba95: mov edx, esp */
  edx = esp;
/* 51ba97: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 51ba99: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 51ba9d: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 51baa0: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 51baa4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51baa5: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 51baa9: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 51baac: call 0x4e2135 */
  esp -= 4; W32(esp, 0x51bab1u); SPILL(); f_4e2135(); if (g_unwind) return; RELOAD();
/* 51bab1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 51bab3: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 51bab7: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 51bab9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 51babc: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 51babf: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 51bac2: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 51bac5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51bac6: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51bac9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51bb00(void) {
  LOAD_REGS();
L_51bb00: /* 51bb00: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51bb03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51bb04: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 51bb08: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51bb0b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51bb0e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51bb11: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51bb12: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51bb15: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 51bb19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51bb1a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51bb1b: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51bb22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51bb22: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51bb25: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51bb28: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 51bb2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51bb2d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51bb30: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51bb31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51bb32: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51bb35: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51bb3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51bb3c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51bb3f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51bb40: mov eax, edx */
  eax = edx;
/* 51bb42: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51bb45: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51bb48: jne 0x51bb5a */
  if (!zf) goto L_51bb5a;
L_51bb4a: /* 51bb4a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51bb4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51bb4f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51bb50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51bb51: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51bb54: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51bb5au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51bb5a: /* 51bb5a: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 51bb5e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51bb61: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 51bb65: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 51bb69: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 51bb6d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 51bb6f: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 51bb73: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 51bb77: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 51bb7b: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 51bb7f: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 51bb83: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 51bb85: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 51bb89: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 51bb8d: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 51bb91: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 51bb95: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 51bb99: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 51bb9b: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 51bb9f: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 51bba3: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 51bba7: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 51bbab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 51bbad: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 51bbb1: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 51bbb5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 51bbb7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 51bbba: call 0x4e3cd3 */
  esp -= 4; W32(esp, 0x51bbbfu); SPILL(); f_4e3cd3(); if (g_unwind) return; RELOAD();
/* 51bbbf: fst dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0);
/* 51bbc3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51bbc6: fcomp qword ptr [0x5696b0] */
  fpu_com(ST0, F64((uint32_t)(0x5696b0u)));
  FPOP();
/* 51bbcc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51bbcd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 51bbcf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 51bbd2: jp 0x51bc19 */
  if (pf) goto L_51bc19;
L_51bbd4: /* 51bbd4: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 51bbd8: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 51bbe0: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 51bbe4: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 51bbe6: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 51bbee: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 51bbf2: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 51bbf5: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 51bbfd: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 51bc01: mov dword ptr [esp + 0x38], 0x3f800000 */
  W32((uint32_t)(esp + 0x38u), 0x3f800000u);
/* 51bc09: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 51bc0d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 51bc10: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 51bc13: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51bc16: ret 8 */
  esp += 12; SPILL(); return;
L_51bc19: /* 51bc19: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 51bc1d: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51bc20: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 51bc23: call 0x4e1e0b */
  esp -= 4; W32(esp, 0x51bc28u); SPILL(); f_4e1e0b(); if (g_unwind) return; RELOAD();
/* 51bc28: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 51bc2c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51bc2f: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 51bc33: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 51bc37: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 51bc3b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 51bc3d: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 51bc41: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 51bc45: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 51bc47: fcomp dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
  FPOP();
/* 51bc4d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 51bc4f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 51bc52: jp 0x51bc5a */
  if (pf) goto L_51bc5a;
L_51bc54: /* 51bc54: fsubr qword ptr [0x56bf10] */
  ST0 = (F64((uint32_t)(0x56bf10u))) - ST0;
L_51bc5a: /* 51bc5a: fmul dword ptr [0x569488] */
  ST0 = ST0 * (F32((uint32_t)(0x569488u)));
/* 51bc60: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51bc63: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 51bc67: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 51bc6a: call 0x4e3e0e */
  esp -= 4; W32(esp, 0x51bc6fu); SPILL(); f_4e3e0e(); if (g_unwind) return; RELOAD();
/* 51bc6f: fld dword ptr [0x5694a4] */
  { double v = F32((uint32_t)(0x5694a4u)); FPUSH(v); }
/* 51bc75: fdiv dword ptr [esp + 0x48] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x48u)));
/* 51bc79: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 51bc7d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 51bc7f: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 51bc83: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 51bc85: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 51bc89: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 51bc8d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 51bc8f: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 51bc93: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 51bc95: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 51bc99: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 51bc9b: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 51bc9f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 51bca1: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 51bca5: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 51bca9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 51bcab: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 51bcaf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 51bcb1: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 51bcb5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 51bcb8: call 0x4e1807 */
  esp -= 4; W32(esp, 0x51bcbdu); SPILL(); f_4e1807(); if (g_unwind) return; RELOAD();
/* 51bcbd: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 51bcc1: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 51bcc5: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 51bcc9: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 51bccb: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 51bccf: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 51bcd2: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 51bcd6: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 51bcda: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 51bcdd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51bce0: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 51bce3: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51bce6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51bd70(void) {
  LOAD_REGS();
L_51bd70: /* 51bd70: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51bd73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51bd74: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 51bd78: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51bd7b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51bd7e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51bd81: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51bd82: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51bd85: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 51bd89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51bd8a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51bd8b: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51bd92u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51bd92: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51bd95: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 51bd99: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 51bda1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51bda4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51bda5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51bda8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51bda9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51bdaa: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51bdad: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51bdb4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51bdb4: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51bdb7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51bdb8: mov eax, edx */
  eax = edx;
/* 51bdba: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51bdbd: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51bdc0: jne 0x51bdd2 */
  if (!zf) goto L_51bdd2;
L_51bdc2: /* 51bdc2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51bdc5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51bdc7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51bdc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51bdc9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51bdcc: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51bdd2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51bdd2: /* 51bdd2: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 51bdd6: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51bdd9: fmul dword ptr [0x569488] */
  ST0 = ST0 * (F32((uint32_t)(0x569488u)));
/* 51bddf: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 51bde2: call 0x4e3e0e */
  esp -= 4; W32(esp, 0x51bde7u); SPILL(); f_4e3e0e(); if (g_unwind) return; RELOAD();
/* 51bde7: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 51bdeb: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 51bdef: fmul dword ptr [0x569488] */
  ST0 = ST0 * (F32((uint32_t)(0x569488u)));
/* 51bdf5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 51bdf8: call 0x4e1807 */
  esp -= 4; W32(esp, 0x51bdfdu); SPILL(); f_4e1807(); if (g_unwind) return; RELOAD();
/* 51bdfd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51be00: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 51be04: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 51be08: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51be09: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 51be0d: call 0x4e3b5c */
  esp -= 4; W32(esp, 0x51be12u); SPILL(); f_4e3b5c(); if (g_unwind) return; RELOAD();
/* 51be12: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 51be16: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 51be1a: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 51be1e: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 51be22: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 51be26: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 51be2a: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 51be2e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 51be32: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 51be34: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 51be38: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51be39: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 51be3d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 51be41: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 51be45: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 51be49: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 51be4c: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 51be50: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 51be54: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 51be58: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 51be5b: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 51be5e: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51be61: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51beb0(void) {
  LOAD_REGS();
L_51beb0: /* 51beb0: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51beb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51beb4: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 51beb8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51bebb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51bebe: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51bec1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51bec2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51bec3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51bec6: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 51beca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51becb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51becc: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51bed3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51bed3: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51bed6: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51bed7: mov eax, edx */
  eax = edx;
/* 51bed9: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51bedc: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51bedf: jne 0x51bef1 */
  if (!zf) goto L_51bef1;
L_51bee1: /* 51bee1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51bee4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51bee6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51bee7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51bee8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51beeb: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51bef1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51bef1: /* 51bef1: mov ecx, 0xc */
  ecx = 0xcu;
/* 51bef6: mov esi, 0x5b31c0 */
  esi = 0x5b31c0u;
/* 51befb: lea edi, [esp + 0x24] */
  edi = (uint32_t)(esp + 0x24u);
/* 51beff: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 51bf01: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51bf05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51bf06: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 51bf0a: call 0x4e3a8f */
  esp -= 4; W32(esp, 0x51bf0fu); SPILL(); f_4e3a8f(); if (g_unwind) return; RELOAD();
/* 51bf0f: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51bf12: mov esi, eax */
  esi = eax;
/* 51bf14: mov edi, esp */
  edi = esp;
/* 51bf16: mov ecx, 0xc */
  ecx = 0xcu;
/* 51bf1b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 51bf1d: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 51bf21: call 0x4e3c38 */
  esp -= 4; W32(esp, 0x51bf26u); SPILL(); f_4e3c38(); if (g_unwind) return; RELOAD();
/* 51bf26: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 51bf28: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 51bf2c: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 51bf2e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 51bf31: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 51bf34: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51bf37: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 51bf3a: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 51bf3d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51bf3e: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 51bf41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51bf42: add esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51bf45: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51bf80(void) {
  LOAD_REGS();
L_51bf80: /* 51bf80: sub esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51bf83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51bf84: mov esi, dword ptr [esp + 0x84] */
  esi = R32((uint32_t)(esp + 0x84u));
/* 51bf8b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51bf8e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51bf91: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51bf94: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51bf95: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51bf96: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51bf99: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 51bf9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51bf9e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51bf9f: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51bfa6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51bfa6: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51bfa9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51bfaa: mov eax, edx */
  eax = edx;
/* 51bfac: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51bfaf: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51bfb2: jne 0x51bfc4 */
  if (!zf) goto L_51bfc4;
L_51bfb4: /* 51bfb4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51bfb7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51bfb9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51bfba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51bfbb: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51bfbe: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51bfc4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51bfc4: /* 51bfc4: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 51bfc8: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 51bfcc: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51bfcf: mov ecx, esp */
  ecx = esp;
/* 51bfd1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 51bfd3: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 51bfd7: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 51bfda: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 51bfde: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 51bfe1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 51bfe4: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 51bfe8: call 0x4e17f8 */
  esp -= 4; W32(esp, 0x51bfedu); SPILL(); f_4e17f8(); if (g_unwind) return; RELOAD();
/* 51bfed: mov esi, eax */
  esi = eax;
/* 51bfef: mov ecx, 0xc */
  ecx = 0xcu;
/* 51bff4: lea edi, [esp + 0x24] */
  edi = (uint32_t)(esp + 0x24u);
/* 51bff8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 51bffa: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51bffe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51bfff: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 51c003: call 0x4e1a69 */
  esp -= 4; W32(esp, 0x51c008u); SPILL(); f_4e1a69(); if (g_unwind) return; RELOAD();
/* 51c008: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 51c00a: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 51c011: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 51c013: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 51c016: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 51c019: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 51c01c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51c01d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 51c020: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51c021: add esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51c024: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51c060(void) {
  LOAD_REGS();
L_51c060: /* 51c060: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51c061: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c062: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 51c066: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51c069: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51c06c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 51c074: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51c077: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51c078: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51c07b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51c07f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51c080: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c081: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51c088u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51c088: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51c08b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51c08c: mov eax, edx */
  eax = edx;
/* 51c08e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51c091: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51c094: jne 0x51c0a6 */
  if (!zf) goto L_51c0a6;
L_51c096: /* 51c096: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51c099: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51c09b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51c09c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c09d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51c0a0: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51c0a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51c0a6: /* 51c0a6: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 51c0aa: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 51c0ac: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 51c0b0: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51c0b4: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51c0b6: mov word ptr [esp + 0xc], ax */
  W16((uint32_t)(esp + 0xcu), (eax & 0xffffu));
/* 51c0bb: mov word ptr [esp + 0xe], 0 */
  W16((uint32_t)(esp + 0xeu), 0x0u);
/* 51c0c2: je 0x51c104 */
  if (zf) goto L_51c104;
L_51c0c4: /* 51c0c4: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 51c0c7: je 0x51c0d9 */
  if (zf) goto L_51c0d9;
L_51c0c9: /* 51c0c9: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 51c0cd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51c0ce: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x51c0d3u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 51c0d3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51c0d6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51c0d7: jmp 0x51c0db */
  goto L_51c0db;
L_51c0d9: /* 51c0d9: xor eax, eax */
  eax = 0;
L_51c0db: /* 51c0db: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51c0dd: mov ecx, esi */
  ecx = esi;
/* 51c0df: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 51c0e2: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 51c0e5: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51c0eau); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51c0ea: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 51c0ed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51c0ef: je 0x51c104 */
  if (zf) goto L_51c104;
L_51c0f1: /* 51c0f1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 51c0f3: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 51c0f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51c0f6: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 51c0fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51c0fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51c0fc: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x51c101u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 51c101: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_51c104: /* 51c104: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51c105: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51c106: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51c140(void) {
  LOAD_REGS();
L_51c140: /* 51c140: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51c141: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c142: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 51c146: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51c149: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51c14c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 51c154: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51c157: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51c158: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51c15b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51c15f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51c160: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c161: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51c168u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51c168: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51c16b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51c16f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 51c177: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51c17a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51c17b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51c17e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51c17f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c180: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51c183: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51c18au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51c18a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51c18d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51c18e: mov eax, edx */
  eax = edx;
/* 51c190: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51c193: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51c196: jne 0x51c1a8 */
  if (!zf) goto L_51c1a8;
L_51c198: /* 51c198: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51c19b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51c19d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51c19e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c19f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51c1a2: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51c1a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51c1a8: /* 51c1a8: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 51c1ac: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 51c1b0: xor edx, edx */
  edx = 0;
/* 51c1b2: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51c1b4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 51c1b8: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 51c1bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51c1bc: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 51c1be: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51c1bf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51c200(void) {
  LOAD_REGS();
L_51c200: /* 51c200: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51c201: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c202: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 51c206: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51c209: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51c20c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 51c214: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51c217: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51c218: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51c21b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51c21f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51c220: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c221: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51c228u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51c228: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51c22b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51c22f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 51c237: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51c23a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51c23b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51c23e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51c23f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c240: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51c243: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51c24au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51c24a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51c24d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51c24e: mov eax, edx */
  eax = edx;
/* 51c250: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51c253: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51c256: jne 0x51c268 */
  if (!zf) goto L_51c268;
L_51c258: /* 51c258: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51c25b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51c25d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51c25e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c25f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51c262: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51c268u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51c268: /* 51c268: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 51c26c: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 51c270: xor edx, edx */
  edx = 0;
/* 51c272: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51c274: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 51c278: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 51c27b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51c27c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 51c27e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51c27f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51c2c0(void) {
  LOAD_REGS();
L_51c2c0: /* 51c2c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51c2c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c2c2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 51c2c6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51c2c9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51c2cc: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 51c2d4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51c2d7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51c2d8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51c2db: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51c2df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51c2e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c2e1: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51c2e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51c2e8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51c2eb: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51c2ef: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 51c2f7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51c2fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51c2fb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51c2fe: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51c2ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c300: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51c303: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51c30au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51c30a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51c30d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51c30e: mov eax, edx */
  eax = edx;
/* 51c310: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51c313: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51c316: jne 0x51c328 */
  if (!zf) goto L_51c328;
L_51c318: /* 51c318: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51c31b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51c31d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51c31e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c31f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51c322: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51c328u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51c328: /* 51c328: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 51c32c: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 51c330: xor edx, edx */
  edx = 0;
/* 51c332: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51c334: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 51c338: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 51c33b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51c33c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 51c33e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51c33f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51c380(void) {
  LOAD_REGS();
L_51c380: /* 51c380: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51c381: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c382: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 51c386: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51c389: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51c38c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 51c394: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51c397: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51c398: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51c39b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51c39f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51c3a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c3a1: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51c3a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51c3a8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51c3ab: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51c3af: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 51c3b7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51c3ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51c3bb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51c3be: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51c3bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c3c0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51c3c3: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51c3cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51c3ca: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51c3cd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51c3ce: mov eax, edx */
  eax = edx;
/* 51c3d0: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51c3d3: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51c3d6: jne 0x51c3e8 */
  if (!zf) goto L_51c3e8;
L_51c3d8: /* 51c3d8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51c3db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51c3dd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51c3de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c3df: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51c3e2: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51c3e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51c3e8: /* 51c3e8: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 51c3ec: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 51c3f0: xor edx, edx */
  edx = 0;
/* 51c3f2: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51c3f4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 51c3f8: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 51c3fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51c3fc: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 51c3fe: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51c3ff: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51c440(void) {
  LOAD_REGS();
L_51c440: /* 51c440: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51c441: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c442: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 51c446: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51c449: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51c44c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 51c454: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51c457: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51c458: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51c45b: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 51c45f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51c460: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c461: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51c468u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51c468: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51c46b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51c46f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 51c477: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51c47a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51c47b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51c47e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51c47f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c480: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51c483: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51c48au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51c48a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51c48d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51c48e: mov eax, edx */
  eax = edx;
/* 51c490: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51c493: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51c496: jne 0x51c4a8 */
  if (!zf) goto L_51c4a8;
L_51c498: /* 51c498: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51c49b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51c49d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51c49e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c49f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51c4a2: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51c4a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51c4a8: /* 51c4a8: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 51c4ac: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51c4ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51c4af: je 0x51c4e4 */
  if (zf) goto L_51c4e4;
L_51c4b1: /* 51c4b1: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 51c4b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51c4b7: je 0x51c4e4 */
  if (zf) goto L_51c4e4;
L_51c4b9: /* 51c4b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_51c4c0: /* 51c4c0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51c4c2: je 0x51c4d5 */
  if (zf) goto L_51c4d5;
L_51c4c4: /* 51c4c4: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 51c4c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51c4c9: jne 0x51c4c0 */
  if (!zf) goto L_51c4c0;
L_51c4cb: /* 51c4cb: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 51c4cf: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 51c4d1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51c4d2: ret 8 */
  esp += 12; SPILL(); return;
L_51c4d5: /* 51c4d5: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 51c4d9: mov eax, 1 */
  eax = 0x1u;
/* 51c4de: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 51c4e0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51c4e1: ret 8 */
  esp += 12; SPILL(); return;
L_51c4e4: /* 51c4e4: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 51c4e8: xor eax, eax */
  eax = 0;
/* 51c4ea: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 51c4ec: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51c4ed: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51c520(void) {
  LOAD_REGS();
L_51c520: /* 51c520: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51c521: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51c522: mov ebx, ecx */
  ebx = ecx;
/* 51c524: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 51c527: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51c529: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c52a: je 0x51c53d */
  if (zf) goto L_51c53d;
L_51c52c: /* 51c52c: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 51c52f: cmp eax, dword ptr [ebx + 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51c532: je 0x51c53d */
  if (zf) goto L_51c53d;
L_51c534: /* 51c534: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 51c537: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 51c53b: jmp 0x51c545 */
  goto L_51c545;
L_51c53d: /* 51c53d: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
L_51c545: /* 51c545: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 51c549: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51c54a: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 51c54e: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 51c550: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51c553: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51c557: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 51c55b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51c55e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51c55f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51c562: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51c563: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c564: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51c567: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51c56eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51c56e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51c571: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51c574: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 51c57c: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51c57f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51c580: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51c583: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 51c587: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51c588: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c589: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51c590u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51c590: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51c593: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51c594: mov eax, edx */
  eax = edx;
/* 51c596: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51c599: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51c59c: jne 0x51c5ae */
  if (!zf) goto L_51c5ae;
L_51c59e: /* 51c59e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51c5a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51c5a3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51c5a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c5a5: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51c5a8: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51c5aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51c5ae: /* 51c5ae: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 51c5b2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51c5b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51c5b5: je 0x51c5c4 */
  if (zf) goto L_51c5c4;
L_51c5b7: /* 51c5b7: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 51c5b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51c5ba: mov ecx, ebx */
  ecx = ebx;
/* 51c5bc: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0x51c5bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51c5bf: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51c5c2: jne 0x51c610 */
  if (!zf) goto L_51c610;
L_51c5c4: /* 51c5c4: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 51c5c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51c5ca: jne 0x51c5d1 */
  if (!zf) goto L_51c5d1;
L_51c5cc: /* 51c5cc: mov eax, 0x64 */
  eax = 0x64u;
L_51c5d1: /* 51c5d1: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 51c5d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51c5d4: mov ecx, ebx */
  ecx = ebx;
/* 51c5d6: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x51c5d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51c5d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51c5db: jne 0x51c649 */
  if (!zf) goto L_51c649;
L_51c5dd: /* 51c5dd: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 51c5e1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51c5e3: je 0x51c649 */
  if (zf) goto L_51c649;
L_51c5e5: /* 51c5e5: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 51c5ea: mov ecx, dword ptr [eax + ecx*4] */
  ecx = R32((uint32_t)(eax + ecx*4));
/* 51c5ed: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 51c5f1: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 51c5f4: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 51c5f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51c5f8: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 51c5fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51c5fc: push 0x5a65c8 */
  { uint32_t v = 0x5a65c8u; esp -= 4; W32(esp, v); }
/* 51c601: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c602: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x51c607u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 51c607: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51c60a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51c60b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51c60c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51c60d: ret 8 */
  esp += 12; SPILL(); return;
L_51c610: /* 51c610: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51c612: jne 0x51c649 */
  if (!zf) goto L_51c649;
L_51c614: /* 51c614: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 51c618: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51c61a: je 0x51c649 */
  if (zf) goto L_51c649;
L_51c61c: /* 51c61c: cmp ecx, 0x2b2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2b2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51c622: je 0x51c649 */
  if (zf) goto L_51c649;
L_51c624: /* 51c624: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 51c629: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 51c62d: mov edx, dword ptr [eax + edx*4] */
  edx = R32((uint32_t)(eax + edx*4));
/* 51c630: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 51c633: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 51c636: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51c637: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 51c63a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51c63b: push 0x5a6610 */
  { uint32_t v = 0x5a6610u; esp -= 4; W32(esp, v); }
/* 51c640: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c641: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x51c646u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 51c646: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_51c649: /* 51c649: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51c64a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51c64b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51c64c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51c6a0(void) {
  LOAD_REGS();
L_51c6a0: /* 51c6a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51c6a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51c6a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c6a3: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 51c6a7: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51c6aa: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 51c6b2: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51c6b5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51c6b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51c6b7: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51c6ba: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 51c6be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51c6bf: mov ebx, ecx */
  ebx = ecx;
/* 51c6c1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51c6c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c6c5: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51c6ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51c6cc: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 51c6d0: cmp ecx, 0x12c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x12cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51c6d6: jl 0x51c742 */
  if ((sf != of)) goto L_51c742;
L_51c6d8: /* 51c6d8: cmp ecx, 0x16c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x16cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51c6de: jge 0x51c742 */
  if ((sf == of)) goto L_51c742;
L_51c6e0: /* 51c6e0: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 51c6e3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51c6e5: je 0x51c742 */
  if (zf) goto L_51c742;
L_51c6e7: /* 51c6e7: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 51c6ea: mov edx, dword ptr [ebx + 0x24] */
  edx = R32((uint32_t)(ebx + 0x24u));
/* 51c6ed: mov ebx, dword ptr [edx + 0x80] */
  ebx = R32((uint32_t)(edx + 0x80u));
/* 51c6f3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 51c6f4: or ebx, dword ptr [eax + 0x80] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x80u)));
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 51c6fa: mov ebp, dword ptr [edx + 0x84] */
  ebp = R32((uint32_t)(edx + 0x84u));
/* 51c700: or ebp, dword ptr [eax + 0x84] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x84u)));
  uint32_t r = (uint32_t)(a | b);
  ebp = r;
  }
/* 51c706: add ecx, 0xfffffed4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffed4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 51c70c: mov eax, 1 */
  eax = 0x1u;
/* 51c711: xor edx, edx */
  edx = 0;
/* 51c713: call 0x554ee0 */
  esp -= 4; W32(esp, 0x51c718u); SPILL(); f_554ee0(); if (g_unwind) return; RELOAD();
/* 51c718: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 51c71a: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 51c71d: mov ecx, dword ptr [eax + 0x88] */
  ecx = R32((uint32_t)(eax + 0x88u));
/* 51c723: and ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 51c725: mov edx, dword ptr [eax + 0x8c] */
  edx = R32((uint32_t)(eax + 0x8cu));
/* 51c72b: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 51c72e: and ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 51c730: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 51c733: and ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 51c735: or ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 51c737: or eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 51c739: mov dword ptr [edi + 0x20], ecx */
  W32((uint32_t)(edi + 0x20u), ecx);
/* 51c73c: mov dword ptr [edi + 0x24], eax */
  W32((uint32_t)(edi + 0x24u), eax);
/* 51c73f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51c740: jmp 0x51c75c */
  goto L_51c75c;
L_51c742: /* 51c742: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 51c747: mov ecx, dword ptr [eax + ecx*4] */
  ecx = R32((uint32_t)(eax + ecx*4));
/* 51c74a: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 51c74d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51c74e: push 0x5a6660 */
  { uint32_t v = 0x5a6660u; esp -= 4; W32(esp, v); }
/* 51c753: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c754: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x51c759u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 51c759: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_51c75c: /* 51c75c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51c75f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51c760: mov eax, edx */
  eax = edx;
/* 51c762: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51c765: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51c768: jne 0x51c77a */
  if (!zf) goto L_51c77a;
L_51c76a: /* 51c76a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51c76d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51c76f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51c770: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c771: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51c774: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51c77au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51c77a: /* 51c77a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51c77b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51c77c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51c77d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51c77e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51c7d0(void) {
  LOAD_REGS();
L_51c7d0: /* 51c7d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51c7d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c7d2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 51c7d6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51c7d9: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 51c7e1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51c7e4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51c7e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51c7e6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51c7e9: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 51c7ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51c7ee: mov edi, ecx */
  edi = ecx;
/* 51c7f0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51c7f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c7f4: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51c7fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51c7fb: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51c7fe: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51c7ff: mov eax, edx */
  eax = edx;
/* 51c801: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51c804: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51c807: jne 0x51c819 */
  if (!zf) goto L_51c819;
L_51c809: /* 51c809: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51c80c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51c80e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51c80f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c810: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51c813: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51c819u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51c819: /* 51c819: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 51c81d: cmp eax, 0x12c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51c822: jl 0x51c85e */
  if ((sf != of)) goto L_51c85e;
L_51c824: /* 51c824: cmp eax, 0x16c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x16cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51c829: jge 0x51c85e */
  if ((sf == of)) goto L_51c85e;
L_51c82b: /* 51c82b: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* 51c82e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51c830: je 0x51c85e */
  if (zf) goto L_51c85e;
L_51c832: /* 51c832: lea ecx, [eax - 0x12c] */
  ecx = (uint32_t)(eax + 0xfffffed4u);
/* 51c838: mov eax, 1 */
  eax = 0x1u;
/* 51c83d: xor edx, edx */
  edx = 0;
/* 51c83f: call 0x554ee0 */
  esp -= 4; W32(esp, 0x51c844u); SPILL(); f_554ee0(); if (g_unwind) return; RELOAD();
/* 51c844: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 51c847: not eax */
  eax = ~eax;
/* 51c849: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 51c84b: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 51c84e: not edx */
  edx = ~edx;
/* 51c850: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 51c852: mov dword ptr [edi + 0x20], ecx */
  W32((uint32_t)(edi + 0x20u), ecx);
/* 51c855: mov dword ptr [edi + 0x24], eax */
  W32((uint32_t)(edi + 0x24u), eax);
/* 51c858: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51c859: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51c85a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51c85b: ret 8 */
  esp += 12; SPILL(); return;
L_51c85e: /* 51c85e: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 51c864: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 51c867: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 51c86a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51c86b: push 0x5a66b0 */
  { uint32_t v = 0x5a66b0u; esp -= 4; W32(esp, v); }
/* 51c870: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c871: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x51c876u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 51c876: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51c879: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51c87a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51c87b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51c87c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51c8b0(void) {
  LOAD_REGS();
L_51c8b0: /* 51c8b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 51c8b1: mov ebp, esp */
  ebp = esp;
/* 51c8b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51c8b5: push 0x5572a0 */
  { uint32_t v = 0x5572a0u; esp -= 4; W32(esp, v); }
/* 51c8ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51c8c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51c8c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51c8c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51c8cb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 51c8ce: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 51c8d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51c8d2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51c8d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c8d4: mov esi, ecx */
  esi = ecx;
/* 51c8d6: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 51c8d9: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51c8dc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51c8dd: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 51c8e0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 51c8e7: jne 0x51c8f9 */
  if (!zf) goto L_51c8f9;
L_51c8e9: /* 51c8e9: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51c8ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51c8ee: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51c8ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51c8f0: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 51c8f3: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51c8f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51c8f9: /* 51c8f9: mov esi, dword ptr [esi + 0x24] */
  esi = R32((uint32_t)(esi + 0x24u));
/* 51c8fc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 51c8fe: mov edi, dword ptr [esi + 0x4ec] */
  edi = R32((uint32_t)(esi + 0x4ecu));
/* 51c904: mov ecx, esi */
  ecx = esi;
/* 51c906: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x51c909u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51c909: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51c90b: je 0x51c924 */
  if (zf) goto L_51c924;
L_51c90d: /* 51c90d: push 0x21b */
  { uint32_t v = 0x21bu; esp -= 4; W32(esp, v); }
/* 51c912: push 0x5a3b00 */
  { uint32_t v = 0x5a3b00u; esp -= 4; W32(esp, v); }
/* 51c917: push 0x5a3ad4 */
  { uint32_t v = 0x5a3ad4u; esp -= 4; W32(esp, v); }
/* 51c91c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x51c921u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 51c921: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_51c924: /* 51c924: mov ecx, dword ptr [esi + 0x4e8] */
  ecx = R32((uint32_t)(esi + 0x4e8u));
/* 51c92a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51c92c: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 51c931: call 0x4e3b84 */
  esp -= 4; W32(esp, 0x51c936u); SPILL(); f_4e3b84(); if (g_unwind) return; RELOAD();
/* 51c936: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 51c939: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51c93a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51c93b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51c942: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51c943: mov esp, ebp */
  esp = ebp;
/* 51c945: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51c946: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51c949(void) {
  LOAD_REGS();
L_51c949: /* 51c949: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 51c94c: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 51c951: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 51c954: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51c955: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 51c958: call 0x554df6 */
  esp -= 4; W32(esp, 0x51c95du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_51c95d(); return;
}

void f_51c95d(void) {
  LOAD_REGS();
L_51c95d: /* 51c95d: push 0x56bf1c */
  { uint32_t v = 0x56bf1cu; esp -= 4; W32(esp, v); }
/* 51c962: push 0x5a6714 */
  { uint32_t v = 0x5a6714u; esp -= 4; W32(esp, v); }
/* 51c967: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x51c96cu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 51c96c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51c96f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51c971: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51c973: call 0x554df6 */
  esp -= 4; W32(esp, 0x51c978u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_51c978: guest_badaddr(0x51c978); return;
}

void f_51c9c0(void) {
  LOAD_REGS();
L_51c9c0: /* 51c9c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 51c9c1: mov ebp, esp */
  ebp = esp;
/* 51c9c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51c9c5: push 0x5572b0 */
  { uint32_t v = 0x5572b0u; esp -= 4; W32(esp, v); }
/* 51c9ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51c9d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51c9d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51c9d8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51c9db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51c9dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c9dd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 51c9e0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51c9e3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51c9e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51c9e7: xor edi, edi */
  edi = 0;
/* 51c9e9: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 51c9ec: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51c9ef: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51c9f0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51c9f3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 51c9f6: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 51c9f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51c9fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51c9fb: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 51c9fe: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51ca05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51ca05: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51ca08: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51ca0b: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 51ca0e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51ca11: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51ca12: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51ca15: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 51ca18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51ca19: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51ca1a: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51ca21u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51ca21: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51ca24: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51ca25: mov eax, edx */
  eax = edx;
/* 51ca27: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51ca2a: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51ca2d: jne 0x51ca3e */
  if (!zf) goto L_51ca3e;
L_51ca2f: /* 51ca2f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51ca32: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51ca33: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51ca34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51ca35: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51ca38: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51ca3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51ca3e: /* 51ca3e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 51ca41: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51ca43: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 51ca46: mov dword ptr [ebx], edi */
  W32((uint32_t)(ebx), edi);
/* 51ca48: je 0x51ca9c */
  if (zf) goto L_51ca9c;
L_51ca4a: /* 51ca4a: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 51ca4d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_51ca50: /* 51ca50: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51ca52: je 0x51ca9c */
  if (zf) goto L_51ca9c;
L_51ca54: /* 51ca54: cmp eax, 0x6a23e8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a23e8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51ca59: je 0x51ca60 */
  if (zf) goto L_51ca60;
L_51ca5b: /* 51ca5b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 51ca5e: jmp 0x51ca50 */
  goto L_51ca50;
L_51ca60: /* 51ca60: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51ca62: je 0x51ca9c */
  if (zf) goto L_51ca9c;
L_51ca64: /* 51ca64: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 51ca67: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51ca69: jl 0x51ca9c */
  if ((sf != of)) goto L_51ca9c;
L_51ca6b: /* 51ca6b: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 51ca6e: mov edi, edi */
  edi = edi;
L_51ca70: /* 51ca70: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51ca72: je 0x51ca84 */
  if (zf) goto L_51ca84;
L_51ca74: /* 51ca74: cmp eax, 0x6a23e8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a23e8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51ca79: je 0x51ca80 */
  if (zf) goto L_51ca80;
L_51ca7b: /* 51ca7b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 51ca7e: jmp 0x51ca70 */
  goto L_51ca70;
L_51ca80: /* 51ca80: mov eax, ecx */
  eax = ecx;
/* 51ca82: jmp 0x51ca86 */
  goto L_51ca86;
L_51ca84: /* 51ca84: xor eax, eax */
  eax = 0;
L_51ca86: /* 51ca86: cmp esi, dword ptr [eax + 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51ca89: jge 0x51ca9c */
  if ((sf == of)) goto L_51ca9c;
L_51ca8b: /* 51ca8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51ca8c: call 0x4e27fc */
  esp -= 4; W32(esp, 0x51ca91u); SPILL(); f_4e27fc(); if (g_unwind) return; RELOAD();
/* 51ca91: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 51ca94: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* 51ca97: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51ca9a: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
L_51ca9c: /* 51ca9c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 51ca9f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51caa0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51caa1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51caa8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51caa9: mov esp, ebp */
  esp = ebp;
/* 51caab: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51caac: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51caaf(void) {
  LOAD_REGS();
L_51caaf: /* 51caaf: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 51cab2: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 51cab7: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 51caba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51cabb: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 51cabe: call 0x554df6 */
  esp -= 4; W32(esp, 0x51cac3u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_51cac3(); return;
}

void f_51cac3(void) {
  LOAD_REGS();
L_51cac3: /* 51cac3: push 0x56bf64 */
  { uint32_t v = 0x56bf64u; esp -= 4; W32(esp, v); }
/* 51cac8: push 0x5a672c */
  { uint32_t v = 0x5a672cu; esp -= 4; W32(esp, v); }
/* 51cacd: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x51cad2u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 51cad2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51cad5: xor edi, edi */
  edi = 0;
/* 51cad7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51cad8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51cad9: call 0x554df6 */
  esp -= 4; W32(esp, 0x51cadeu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_51cade: guest_badaddr(0x51cade); return;
}

void f_51cb30(void) {
  LOAD_REGS();
L_51cb30: /* 51cb30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 51cb31: lea ebp, [esp - 0x6c] */
  ebp = (uint32_t)(esp + 0xffffff94u);
/* 51cb35: sub esp, 0x4a8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4a8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51cb3b: mov eax, dword ptr [ebp + 0x7c] */
  eax = R32((uint32_t)(ebp + 0x7cu));
/* 51cb3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51cb3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51cb40: mov dword ptr [ebp + 0x68], ecx */
  W32((uint32_t)(ebp + 0x68u), ecx);
/* 51cb43: cmp word ptr [eax + 0x84], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x84u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 51cb4b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51cb4c: mov dword ptr [ebp + 0x60], 0 */
  W32((uint32_t)(ebp + 0x60u), 0x0u);
/* 51cb53: je 0x51cb75 */
  if (zf) goto L_51cb75;
L_51cb55: /* 51cb55: mov edx, dword ptr [ebp + 0x78] */
  edx = R32((uint32_t)(ebp + 0x78u));
/* 51cb58: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51cb59: mov edx, dword ptr [ebp + 0x74] */
  edx = R32((uint32_t)(ebp + 0x74u));
/* 51cb5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51cb5d: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x51cb63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51cb63: lea esp, [ebp - 0x448] */
  esp = (uint32_t)(ebp + 0xfffffbb8u);
/* 51cb69: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51cb6a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51cb6b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51cb6c: add ebp, 0x6c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 51cb6f: mov esp, ebp */
  esp = ebp;
/* 51cb71: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51cb72: ret 0xc */
  esp += 16; SPILL(); return;
L_51cb75: /* 51cb75: mov edx, dword ptr [eax + 0x80] */
  edx = R32((uint32_t)(eax + 0x80u));
/* 51cb7b: test dh, 4 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 51cb7e: je 0x51cbc5 */
  if (zf) goto L_51cbc5;
L_51cb80: /* 51cb80: mov esi, dword ptr [ebp + 0x74] */
  esi = R32((uint32_t)(ebp + 0x74u));
/* 51cb83: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 51cb85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51cb86: lea esi, [ebp - 0x43c] */
  esi = (uint32_t)(ebp + 0xfffffbc4u);
/* 51cb8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51cb8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51cb8e: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x51cb91u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51cb91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51cb93: jne 0x51cbbb */
  if (!zf) goto L_51cbbb;
L_51cb95: /* 51cb95: mov eax, dword ptr [ebp + 0x78] */
  eax = R32((uint32_t)(ebp + 0x78u));
/* 51cb98: mov ecx, dword ptr [ebp + 0x74] */
  ecx = R32((uint32_t)(ebp + 0x74u));
/* 51cb9b: mov edx, dword ptr [ebp + 0x7c] */
  edx = R32((uint32_t)(ebp + 0x7cu));
/* 51cb9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51cb9f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51cba0: mov ecx, dword ptr [ebp + 0x68] */
  ecx = R32((uint32_t)(ebp + 0x68u));
/* 51cba3: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x51cba9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51cba9: lea esp, [ebp - 0x448] */
  esp = (uint32_t)(ebp + 0xfffffbb8u);
/* 51cbaf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51cbb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51cbb1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51cbb2: add ebp, 0x6c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 51cbb5: mov esp, ebp */
  esp = ebp;
/* 51cbb7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51cbb8: ret 0xc */
  esp += 16; SPILL(); return;
L_51cbbb: /* 51cbbb: mov eax, dword ptr [ebp + 0x7c] */
  eax = R32((uint32_t)(ebp + 0x7cu));
/* 51cbbe: mov dword ptr [ebp + 0x60], 1 */
  W32((uint32_t)(ebp + 0x60u), 0x1u);
L_51cbc5: /* 51cbc5: mov esi, dword ptr [eax + 0x40] */
  esi = R32((uint32_t)(eax + 0x40u));
/* 51cbc8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51cbca: jne 0x51cbd0 */
  if (!zf) goto L_51cbd0;
L_51cbcc: /* 51cbcc: xor edx, edx */
  edx = 0;
/* 51cbce: jmp 0x51cbe3 */
  goto L_51cbe3;
L_51cbd0: /* 51cbd0: lea eax, [esi + 7] */
  eax = (uint32_t)(esi + 0x7u);
/* 51cbd3: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 51cbd6: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 51cbd9: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 51cbdc: call 0x554f80 */
  esp -= 4; W32(esp, 0x51cbe1u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 51cbe1: mov edx, esp */
  edx = esp;
L_51cbe3: /* 51cbe3: mov dword ptr [ebp + 0x5c], edx */
  W32((uint32_t)(ebp + 0x5cu), edx);
/* 51cbe6: mov dword ptr [ebp + 0x64], esi */
  W32((uint32_t)(ebp + 0x64u), esi);
/* 51cbe9: mov ecx, dword ptr [ebp + 0x64] */
  ecx = R32((uint32_t)(ebp + 0x64u));
/* 51cbec: mov edi, dword ptr [ebp + 0x5c] */
  edi = R32((uint32_t)(ebp + 0x5cu));
/* 51cbef: xor eax, eax */
  eax = 0;
/* 51cbf1: mov ebx, ecx */
  ebx = ecx;
/* 51cbf3: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 51cbf6: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 51cbf9: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 51cbfb: mov ecx, ebx */
  ecx = ebx;
/* 51cbfd: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 51cbff: mov eax, dword ptr [ebp + 0x7c] */
  eax = R32((uint32_t)(ebp + 0x7cu));
/* 51cc02: mov ecx, dword ptr [ebp + 0x68] */
  ecx = R32((uint32_t)(ebp + 0x68u));
/* 51cc05: mov dword ptr [ebp + 0x48], eax */
  W32((uint32_t)(ebp + 0x48u), eax);
/* 51cc08: mov dword ptr [ebp + 0x44], 0x5691ec */
  W32((uint32_t)(ebp + 0x44u), 0x5691ecu);
/* 51cc0f: mov dword ptr [ebp + 0x4c], ecx */
  W32((uint32_t)(ebp + 0x4cu), ecx);
/* 51cc12: mov ecx, dword ptr [eax + 0x48] */
  ecx = R32((uint32_t)(eax + 0x48u));
/* 51cc15: mov dword ptr [ebp + 0x50], ecx */
  W32((uint32_t)(ebp + 0x50u), ecx);
/* 51cc18: mov dword ptr [ebp + 0x54], edx */
  W32((uint32_t)(ebp + 0x54u), edx);
/* 51cc1b: mov edi, dword ptr [eax + 0x3c] */
  edi = R32((uint32_t)(eax + 0x3cu));
/* 51cc1e: mov eax, dword ptr [ebp + 0x74] */
  eax = R32((uint32_t)(ebp + 0x74u));
/* 51cc21: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 51cc24: cmp byte ptr [edx], 0x16 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x16u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51cc27: lea ebx, [ebp - 0x3c] */
  ebx = (uint32_t)(ebp + 0xffffffc4u);
/* 51cc2a: je 0x51ccab */
  if (zf) goto L_51ccab;
L_51cc2c: /* 51cc2c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_51cc30: /* 51cc30: xor ecx, ecx */
  ecx = 0;
/* 51cc32: mov dword ptr [0x5afecc], ecx */
  W32((uint32_t)(0x5afeccu), ecx);
/* 51cc38: mov dword ptr [0x5afed0], ecx */
  W32((uint32_t)(0x5afed0u), ecx);
/* 51cc3e: mov ecx, dword ptr [ebp + 0x54] */
  ecx = R32((uint32_t)(ebp + 0x54u));
/* 51cc41: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 51cc44: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 51cc46: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51cc49: mov dword ptr [ebp + 0x64], ecx */
  W32((uint32_t)(ebp + 0x64u), ecx);
/* 51cc4c: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 51cc4f: movzx esi, byte ptr [ecx] */
  esi = (uint32_t)(R8((uint32_t)(ecx)));
/* 51cc52: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 51cc53: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 51cc56: mov ecx, dword ptr [ebp + 0x64] */
  ecx = R32((uint32_t)(ebp + 0x64u));
/* 51cc59: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51cc5a: mov edx, dword ptr [ebp + 0x74] */
  edx = R32((uint32_t)(ebp + 0x74u));
/* 51cc5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51cc5e: call dword ptr [esi*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(esi*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51cc65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51cc65: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 51cc68: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 51cc6b: je 0x51cc9d */
  if (zf) goto L_51cc9d;
L_51cc6d: /* 51cc6d: mov eax, dword ptr [0x5afecc] */
  eax = R32((uint32_t)(0x5afeccu));
/* 51cc72: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51cc74: je 0x51cc9d */
  if (zf) goto L_51cc9d;
L_51cc76: /* 51cc76: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 51cc7c: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 51cc7f: mov dword ptr [ebx], edi */
  W32((uint32_t)(ebx), edi);
/* 51cc81: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 51cc84: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51cc86: je 0x51cc9d */
  if (zf) goto L_51cc9d;
L_51cc88: /* 51cc88: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 51cc8d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51cc8f: je 0x51cc9d */
  if (zf) goto L_51cc9d;
L_51cc91: /* 51cc91: test byte ptr [eax + 0x3c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 51cc95: je 0x51cc9d */
  if (zf) goto L_51cc9d;
L_51cc97: /* 51cc97: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 51cc99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51cc9a: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x51cc9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51cc9d: /* 51cc9d: mov eax, dword ptr [ebp + 0x74] */
  eax = R32((uint32_t)(ebp + 0x74u));
/* 51cca0: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 51cca3: cmp byte ptr [ecx], 0x16 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x16u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51cca6: mov edi, dword ptr [edi + 0x2c] */
  edi = R32((uint32_t)(edi + 0x2cu));
/* 51cca9: jne 0x51cc30 */
  if (!zf) goto L_51cc30;
L_51ccab: /* 51ccab: inc dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 51ccae: mov eax, dword ptr [ebp + 0x74] */
  eax = R32((uint32_t)(ebp + 0x74u));
/* 51ccb1: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 51ccb4: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51ccb7: jne 0x51cccc */
  if (!zf) goto L_51cccc;
L_51ccb9: /* 51ccb9: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51ccbc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51ccbd: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 51ccc0: mov edx, dword ptr [ebp + 0x74] */
  edx = R32((uint32_t)(ebp + 0x74u));
/* 51ccc3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51ccc5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51ccc6: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51ccccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51cccc: /* 51cccc: mov eax, dword ptr [ebp + 0x60] */
  eax = R32((uint32_t)(ebp + 0x60u));
/* 51cccf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51ccd1: jne 0x51cce3 */
  if (!zf) goto L_51cce3;
L_51ccd3: /* 51ccd3: mov eax, dword ptr [ebp + 0x78] */
  eax = R32((uint32_t)(ebp + 0x78u));
/* 51ccd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51ccd7: lea ecx, [ebp + 0x44] */
  ecx = (uint32_t)(ebp + 0x44u);
/* 51ccda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51ccdb: mov ecx, dword ptr [ebp + 0x68] */
  ecx = R32((uint32_t)(ebp + 0x68u));
/* 51ccde: call 0x4e19ab */
  esp -= 4; W32(esp, 0x51cce3u); SPILL(); f_4e19ab(); if (g_unwind) return; RELOAD();
L_51cce3: /* 51cce3: sub ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 51cce6: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 51cce9: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 51cceb: jb 0x51cd13 */
  if (cf) goto L_51cd13;
L_51cced: /* 51cced: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_51ccf0: /* 51ccf0: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 51ccf2: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* 51ccf5: mov esi, dword ptr [ebp + 0x54] */
  esi = R32((uint32_t)(ebp + 0x54u));
/* 51ccf8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 51ccfa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51ccfc: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 51ccfe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51ccff: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 51cd02: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51cd03: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x51cd09u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51cd09: sub ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 51cd0c: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 51cd0f: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 51cd11: jae 0x51ccf0 */
  if (!cf) goto L_51ccf0;
L_51cd13: /* 51cd13: mov ecx, dword ptr [ebp + 0x7c] */
  ecx = R32((uint32_t)(ebp + 0x7cu));
/* 51cd16: mov esi, dword ptr [ecx + 0x6c] */
  esi = R32((uint32_t)(ecx + 0x6cu));
/* 51cd19: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51cd1b: je 0x51cd3a */
  if (zf) goto L_51cd3a;
L_51cd1d: /* 51cd1d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_51cd20: /* 51cd20: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 51cd23: mov edi, dword ptr [ebp + 0x54] */
  edi = R32((uint32_t)(ebp + 0x54u));
/* 51cd26: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 51cd28: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 51cd2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51cd2b: mov ecx, esi */
  ecx = esi;
/* 51cd2d: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x51cd33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51cd33: mov esi, dword ptr [esi + 0x54] */
  esi = R32((uint32_t)(esi + 0x54u));
/* 51cd36: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51cd38: jne 0x51cd20 */
  if (!zf) goto L_51cd20;
L_51cd3a: /* 51cd3a: lea esp, [ebp - 0x448] */
  esp = (uint32_t)(ebp + 0xfffffbb8u);
/* 51cd40: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51cd41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51cd42: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51cd43: add ebp, 0x6c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 51cd46: mov esp, ebp */
  esp = ebp;
/* 51cd48: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51cd49: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_51cde0(void) {
  LOAD_REGS();
L_51cde0: /* 51cde0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 51cde1: mov ebp, esp */
  ebp = esp;
/* 51cde3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51cde5: push 0x5572c0 */
  { uint32_t v = 0x5572c0u; esp -= 4; W32(esp, v); }
/* 51cdea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51cdf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51cdf1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51cdf8: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51cdfb: mov eax, dword ptr [0x5b2118] */
  eax = R32((uint32_t)(0x5b2118u));
/* 51ce00: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51ce02: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51ce03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51ce04: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51ce05: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 51ce08: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 51ce0b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 51ce12: je 0x51ce51 */
  if (zf) goto L_51ce51;
L_51ce14: /* 51ce14: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 51ce17: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 51ce1a: cmp eax, 0x12c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51ce1f: jl 0x51ce67 */
  if ((sf != of)) goto L_51ce67;
L_51ce21: /* 51ce21: cmp eax, 0x16c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x16cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51ce26: jge 0x51ce67 */
  if ((sf == of)) goto L_51ce67;
L_51ce28: /* 51ce28: mov edi, ecx */
  edi = ecx;
/* 51ce2a: mov esi, dword ptr [edi + 0xc] */
  esi = R32((uint32_t)(edi + 0xcu));
/* 51ce2d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51ce2f: je 0x51ce6a */
  if (zf) goto L_51ce6a;
L_51ce31: /* 51ce31: lea ecx, [eax - 0x12c] */
  ecx = (uint32_t)(eax + 0xfffffed4u);
/* 51ce37: mov eax, 1 */
  eax = 0x1u;
/* 51ce3c: xor edx, edx */
  edx = 0;
/* 51ce3e: call 0x554ee0 */
  esp -= 4; W32(esp, 0x51ce43u); SPILL(); f_554ee0(); if (g_unwind) return; RELOAD();
/* 51ce43: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 51ce46: mov ebx, dword ptr [esi + 0x24] */
  ebx = R32((uint32_t)(esi + 0x24u));
/* 51ce49: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 51ce4b: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 51ce4d: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 51ce4f: jne 0x51ce6a */
  if (!zf) goto L_51ce6a;
L_51ce51: /* 51ce51: lea esp, [ebp - 0x48] */
  esp = (uint32_t)(ebp + 0xffffffb8u);
/* 51ce54: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 51ce57: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51ce5e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51ce5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51ce60: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51ce61: mov esp, ebp */
  esp = ebp;
/* 51ce63: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51ce64: ret 0xc */
  esp += 16; SPILL(); return;
L_51ce67: /* 51ce67: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_51ce6a: /* 51ce6a: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 51ce6c: mov ecx, edi */
  ecx = edi;
/* 51ce6e: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x51ce71u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51ce71: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51ce73: jne 0x51ce51 */
  if (!zf) goto L_51ce51;
L_51ce75: /* 51ce75: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 51ce78: cmp word ptr [esi + 0x84], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x84u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 51ce7f: jne 0x51ce51 */
  if (!zf) goto L_51ce51;
L_51ce81: /* 51ce81: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 51ce87: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 51ce8a: je 0x51cea2 */
  if (zf) goto L_51cea2;
L_51ce8c: /* 51ce8c: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 51ce8f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 51ce92: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 51ce94: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51ce96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51ce97: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51ce98: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x51ce9bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51ce9b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51ce9d: jne 0x51ce51 */
  if (!zf) goto L_51ce51;
L_51ce9f: /* 51ce9f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_51cea2: /* 51cea2: mov eax, dword ptr [0x5b2150] */
  eax = R32((uint32_t)(0x5b2150u));
/* 51cea7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51cea8: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51ceab: mov dword ptr [0x5b2150], eax */
  W32((uint32_t)(0x5b2150u), eax);
/* 51ceb0: jne 0x51cec5 */
  if (!zf) goto L_51cec5;
L_51ceb2: /* 51ceb2: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 51ceb4: mov ecx, dword ptr [0x5afec8] */
  ecx = R32((uint32_t)(0x5afec8u));
/* 51ceba: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 51cebd: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 51cebf: mov dword ptr [0x5afec8], ecx */
  W32((uint32_t)(0x5afec8u), ecx);
L_51cec5: /* 51cec5: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 51cec8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51ceca: je 0x51cee2 */
  if (zf) goto L_51cee2;
L_51cecc: /* 51cecc: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 51cecf: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 51ced2: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 51ced5: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 51ced8: call 0x554f80 */
  esp -= 4; W32(esp, 0x51ceddu); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 51cedd: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 51cee0: mov eax, esp */
  eax = esp;
L_51cee2: /* 51cee2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 51cee5: mov dword ptr [ebp - 0x3c], 0x5691ec */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x5691ecu);
/* 51ceec: mov dword ptr [ebp - 0x38], esi */
  W32((uint32_t)(ebp + 0xffffffc8u), esi);
/* 51ceef: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 51cef2: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 51cef5: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 51cef8: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 51cefb: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 51cefe: movzx ecx, word ptr [esi + 0x8a] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0x8au)));
/* 51cf05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51cf06: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51cf07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51cf08: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x51cf0du); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 51cf0d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 51cf10: movzx eax, word ptr [ecx + 0x8a] */
  eax = (uint32_t)(R16((uint32_t)(ecx + 0x8au)));
/* 51cf17: mov ecx, dword ptr [ecx + 0x40] */
  ecx = R32((uint32_t)(ecx + 0x40u));
/* 51cf1a: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 51cf1d: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 51cf1f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 51cf21: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51cf24: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 51cf27: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 51cf2a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 51cf2d: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 51cf30: xor eax, eax */
  eax = 0;
/* 51cf32: mov ebx, ecx */
  ebx = ecx;
/* 51cf34: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 51cf37: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 51cf3a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 51cf3c: mov ecx, ebx */
  ecx = ebx;
/* 51cf3e: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 51cf40: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 51cf43: movzx ecx, word ptr [eax + 0x8c] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x8cu)));
/* 51cf4a: add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 51cf4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51cf4e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 51cf51: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 51cf54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51cf55: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x51cf5bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51cf5b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 51cf5e: movzx ecx, word ptr [eax + 0x8a] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x8au)));
/* 51cf65: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 51cf68: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 51cf6b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51cf6c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51cf6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51cf6e: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x51cf73u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 51cf73: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 51cf76: mov esi, dword ptr [ecx + 0x6c] */
  esi = R32((uint32_t)(ecx + 0x6cu));
/* 51cf79: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51cf7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_51cf80: /* 51cf80: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51cf82: je 0x51cfaa */
  if (zf) goto L_51cfaa;
L_51cf84: /* 51cf84: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 51cf87: movzx ecx, word ptr [edx + 0x8a] */
  ecx = (uint32_t)(R16((uint32_t)(edx + 0x8au)));
/* 51cf8e: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 51cf91: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51cf93: jl 0x51cfa5 */
  if ((sf != of)) goto L_51cfa5;
L_51cf95: /* 51cf95: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 51cf98: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 51cf9a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 51cf9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51cf9d: mov ecx, esi */
  ecx = esi;
/* 51cf9f: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x51cfa5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51cfa5: /* 51cfa5: mov esi, dword ptr [esi + 0x54] */
  esi = R32((uint32_t)(esi + 0x54u));
/* 51cfa8: jmp 0x51cf80 */
  goto L_51cf80;
L_51cfaa: /* 51cfaa: dec dword ptr [0x5b2150] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5b2150u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(0x5b2150u), r);
  }
/* 51cfb0: jne 0x51ce51 */
  if (!zf) goto L_51ce51;
L_51cfb6: /* 51cfb6: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 51cfb8: mov edx, dword ptr [0x5afec8] */
  edx = R32((uint32_t)(0x5afec8u));
/* 51cfbe: lea eax, [edx + eax - 0xc] */
  eax = (uint32_t)(edx + eax + 0xfffffff4u);
/* 51cfc2: mov dword ptr [0x5afec8], eax */
  W32((uint32_t)(0x5afec8u), eax);
/* 51cfc7: jmp 0x51ce51 */
  goto L_51ce51;
}

void f_51cfcc(void) {
  LOAD_REGS();
L_51cfcc: /* 51cfcc: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 51cfcf: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 51cfd4: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 51cfd7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51cfd8: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 51cfdb: call 0x554df6 */
  esp -= 4; W32(esp, 0x51cfe0u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_51cfe0(); return;
}

void f_51cfe0(void) {
  LOAD_REGS();
L_51cfe0: /* 51cfe0: push 0x56bf98 */
  { uint32_t v = 0x56bf98u; esp -= 4; W32(esp, v); }
/* 51cfe5: push 0x5a67ac */
  { uint32_t v = 0x5a67acu; esp -= 4; W32(esp, v); }
/* 51cfea: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x51cfefu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 51cfef: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 51cff2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51cff5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51cff7: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x51cffcu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 51cffc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 51cfff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51d000: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51d002: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x51d007u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 51d007: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51d008: push 0x5a67b4 */
  { uint32_t v = 0x5a67b4u; esp -= 4; W32(esp, v); }
/* 51d00d: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x51d012u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 51d012: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51d015: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51d017: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51d019: call 0x554df6 */
  esp -= 4; W32(esp, 0x51d01eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_51d01e: guest_badaddr(0x51d01e); return;
}

void f_51d0b0(void) {
  LOAD_REGS();
L_51d0b0: /* 51d0b0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 51d0b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51d0b4: xor eax, eax */
  eax = 0;
/* 51d0b6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 51d0b8: jle 0x51d0ce */
  if ((zf || sf != of)) goto L_51d0ce;
L_51d0ba: /* 51d0ba: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 51d0be: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 51d0c0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
L_51d0c2: /* 51d0c2: cmp dword ptr [ecx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51d0c4: je 0x51d0d1 */
  if (zf) goto L_51d0d1;
L_51d0c6: /* 51d0c6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51d0c7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 51d0ca: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51d0cc: jl 0x51d0c2 */
  if ((sf != of)) goto L_51d0c2;
L_51d0ce: /* 51d0ce: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_51d0d1: /* 51d0d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51d0d2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_51d0f0(void) {
  LOAD_REGS();
L_51d0f0: /* 51d0f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 51d0f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51d0f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51d0f7: mov esi, ecx */
  esi = ecx;
/* 51d0f9: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 51d0fb: je 0x51d10e */
  if (zf) goto L_51d10e;
L_51d0fd: /* 51d0fd: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 51d100: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 51d103: call 0x4e103c */
  esp -= 4; W32(esp, 0x51d108u); SPILL(); f_4e103c(); if (g_unwind) return; RELOAD();
/* 51d108: mov eax, esi */
  eax = esi;
/* 51d10a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51d10b: ret 4 */
  esp += 8; SPILL(); return;
L_51d10e: /* 51d10e: xor eax, eax */
  eax = 0;
/* 51d110: mov ecx, esi */
  ecx = esi;
/* 51d112: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 51d115: call 0x4e103c */
  esp -= 4; W32(esp, 0x51d11au); SPILL(); f_4e103c(); if (g_unwind) return; RELOAD();
/* 51d11a: mov eax, esi */
  eax = esi;
/* 51d11c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51d11d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_51d130(void) {
  LOAD_REGS();
L_51d130: /* 51d130: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 51d133: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 51d136: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 51d139: jmp 0x4e103c */
  SPILL(); f_4e103c(); return;
}

void f_51d150(void) {
  LOAD_REGS();
L_51d150: /* 51d150: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51d151: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 51d155: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51d157: je 0x51d179 */
  if (zf) goto L_51d179;
L_51d159: /* 51d159: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 51d15c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51d15e: je 0x51d16e */
  if (zf) goto L_51d16e;
L_51d160: /* 51d160: cmp eax, 0x5f0848 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5f0848u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51d165: je 0x51d1a6 */
  if (zf) goto L_51d1a6;
L_51d167: /* 51d167: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 51d16a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51d16c: jne 0x51d160 */
  if (!zf) goto L_51d160;
L_51d16e: /* 51d16e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51d170: mov ecx, esi */
  ecx = esi;
/* 51d172: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x51d177u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 51d177: jmp 0x51d17e */
  goto L_51d17e;
L_51d179: /* 51d179: mov eax, 0x5a67d0 */
  eax = 0x5a67d0u;
L_51d17e: /* 51d17e: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 51d184: mov ecx, dword ptr [0x5f0868] */
  ecx = R32((uint32_t)(0x5f0868u));
/* 51d18a: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 51d18d: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 51d193: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 51d196: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51d197: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51d198: push 0x5a67dc */
  { uint32_t v = 0x5a67dcu; esp -= 4; W32(esp, v); }
/* 51d19d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51d19e: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x51d1a3u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 51d1a3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_51d1a6: /* 51d1a6: mov eax, esi */
  eax = esi;
/* 51d1a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51d1a9: ret  */
  esp += 4; SPILL(); return;
}

void f_51d1d0(void) {
  LOAD_REGS();
L_51d1d0: /* 51d1d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 51d1d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51d1d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51d1d7: mov esi, ecx */
  esi = ecx;
/* 51d1d9: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 51d1db: je 0x51d1ee */
  if (zf) goto L_51d1ee;
L_51d1dd: /* 51d1dd: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 51d1e0: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 51d1e3: call 0x4e1839 */
  esp -= 4; W32(esp, 0x51d1e8u); SPILL(); f_4e1839(); if (g_unwind) return; RELOAD();
/* 51d1e8: mov eax, esi */
  eax = esi;
/* 51d1ea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51d1eb: ret 4 */
  esp += 8; SPILL(); return;
L_51d1ee: /* 51d1ee: xor eax, eax */
  eax = 0;
/* 51d1f0: mov ecx, esi */
  ecx = esi;
/* 51d1f2: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 51d1f5: call 0x4e1839 */
  esp -= 4; W32(esp, 0x51d1fau); SPILL(); f_4e1839(); if (g_unwind) return; RELOAD();
/* 51d1fa: mov eax, esi */
  eax = esi;
/* 51d1fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51d1fd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_51d210(void) {
  LOAD_REGS();
L_51d210: /* 51d210: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 51d213: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 51d216: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 51d219: jmp 0x4e1839 */
  SPILL(); f_4e1839(); return;
}

void f_51d230(void) {
  LOAD_REGS();
L_51d230: /* 51d230: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 51d231: mov ebp, esp */
  ebp = esp;
/* 51d233: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51d235: push 0x5572d0 */
  { uint32_t v = 0x5572d0u; esp -= 4; W32(esp, v); }
/* 51d23a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51d240: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51d241: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51d248: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51d24b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51d24c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51d24d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51d24e: mov esi, ecx */
  esi = ecx;
/* 51d250: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51d253: xor edi, edi */
  edi = 0;
/* 51d255: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51d257: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 51d25a: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 51d25d: jne 0x51d274 */
  if (!zf) goto L_51d274;
L_51d25f: /* 51d25f: xor eax, eax */
  eax = 0;
/* 51d261: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 51d264: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51d26b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51d26c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51d26d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51d26e: mov esp, ebp */
  esp = ebp;
/* 51d270: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51d271: ret 4 */
  esp += 8; SPILL(); return;
L_51d274: /* 51d274: mov dword ptr [eax + 0x28], edi */
  W32((uint32_t)(eax + 0x28u), edi);
/* 51d277: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51d27a: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 51d27d: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 51d280: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51d282: je 0x51d28c */
  if (zf) goto L_51d28c;
L_51d284: /* 51d284: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 51d287: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 51d28a: jmp 0x51d28f */
  goto L_51d28f;
L_51d28c: /* 51d28c: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_51d28f: /* 51d28f: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 51d292: cmp ebx, 0x2b2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2b2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51d298: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 51d29b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 51d29d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 51d2a0: je 0x51d2b7 */
  if (zf) goto L_51d2b7;
L_51d2a2: /* 51d2a2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51d2a3: mov ecx, esi */
  ecx = esi;
/* 51d2a5: call 0x4e1307 */
  esp -= 4; W32(esp, 0x51d2aau); SPILL(); f_4e1307(); if (g_unwind) return; RELOAD();
/* 51d2aa: mov edi, eax */
  edi = eax;
L_51d2ac: /* 51d2ac: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51d2ae: jne 0x51d2ef */
  if (!zf) goto L_51d2ef;
L_51d2b0: /* 51d2b0: mov edi, dword ptr [esi + 0x24] */
  edi = R32((uint32_t)(esi + 0x24u));
/* 51d2b3: xor ebx, ebx */
  ebx = 0;
/* 51d2b5: jmp 0x51d2fa */
  goto L_51d2fa;
L_51d2b7: /* 51d2b7: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51d2b9: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 51d2bc: je 0x51d2c6 */
  if (zf) goto L_51d2c6;
L_51d2be: /* 51d2be: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* 51d2c1: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 51d2c4: jmp 0x51d2c9 */
  goto L_51d2c9;
L_51d2c6: /* 51d2c6: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
L_51d2c9: /* 51d2c9: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 51d2cc: call 0x4e103c */
  esp -= 4; W32(esp, 0x51d2d1u); SPILL(); f_4e103c(); if (g_unwind) return; RELOAD();
/* 51d2d1: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 51d2d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51d2d6: je 0x51d2ac */
  if (zf) goto L_51d2ac;
L_51d2d8: /* 51d2d8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51d2da: jne 0x51d2ef */
  if (!zf) goto L_51d2ef;
L_51d2dc: /* 51d2dc: test byte ptr [eax + 0x90], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x90u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 51d2e3: je 0x51d2e7 */
  if (zf) goto L_51d2e7;
L_51d2e5: /* 51d2e5: mov edi, eax */
  edi = eax;
L_51d2e7: /* 51d2e7: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 51d2ea: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 51d2ed: jmp 0x51d2c9 */
  goto L_51d2c9;
L_51d2ef: /* 51d2ef: cmp ebx, 0x2b2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2b2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51d2f5: jne 0x51d2fa */
  if (!zf) goto L_51d2fa;
L_51d2f7: /* 51d2f7: mov ebx, dword ptr [edi + 0x20] */
  ebx = R32((uint32_t)(edi + 0x20u));
L_51d2fa: /* 51d2fa: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 51d2fd: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51d2ff: je 0x51d37b */
  if (zf) goto L_51d37b;
L_51d301: /* 51d301: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51d303: je 0x51d37b */
  if (zf) goto L_51d37b;
L_51d305: /* 51d305: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51d308: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51d30a: je 0x51d31a */
  if (zf) goto L_51d31a;
L_51d30c: /* 51d30c: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 51d30f: and eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 51d314: xor ecx, ecx */
  ecx = 0;
/* 51d316: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 51d318: je 0x51d37b */
  if (zf) goto L_51d37b;
L_51d31a: /* 51d31a: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 51d31d: test ah, 0x20 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 51d320: jne 0x51d37b */
  if (!zf) goto L_51d37b;
L_51d322: /* 51d322: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51d324: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51d326: and eax, 0xffffefff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffefffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 51d32b: or eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 51d330: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51d332: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51d333: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 51d336: mov eax, esp */
  eax = esp;
/* 51d338: mov ecx, esi */
  ecx = esi;
/* 51d33a: mov dword ptr [eax], 0x13d */
  W32((uint32_t)(eax), 0x13du);
/* 51d340: call 0x4e2aea */
  esp -= 4; W32(esp, 0x51d345u); SPILL(); f_4e2aea(); if (g_unwind) return; RELOAD();
/* 51d345: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 51d347: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51d348: mov ecx, esi */
  ecx = esi;
/* 51d34a: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x51d34du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51d34d: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 51d350: and edx, 0xffffdfff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffdfffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 51d356: mov eax, edx */
  eax = edx;
/* 51d358: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 51d35b: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 51d35e: je 0x51d378 */
  if (zf) goto L_51d378;
L_51d360: /* 51d360: mov eax, 2 */
  eax = 0x2u;
/* 51d365: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 51d368: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51d36f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51d370: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51d371: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51d372: mov esp, ebp */
  esp = ebp;
/* 51d374: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51d375: ret 4 */
  esp += 8; SPILL(); return;
L_51d378: /* 51d378: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
L_51d37b: /* 51d37b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51d37e: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 51d381: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 51d384: mov dword ptr [ecx + 0x1c], edi */
  W32((uint32_t)(ecx + 0x1cu), edi);
/* 51d387: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51d38a: mov dword ptr [eax + 0xc], 0 */
  W32((uint32_t)(eax + 0xcu), 0x0u);
/* 51d391: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 51d394: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 51d39a: mov eax, dword ptr [eax + 0x84] */
  eax = R32((uint32_t)(eax + 0x84u));
/* 51d3a0: or ecx, dword ptr [edi + 0x80] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x80u)));
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 51d3a6: or eax, dword ptr [edi + 0x84] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x84u)));
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 51d3ac: and ecx, dword ptr [edi + 0x88] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x88u)));
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 51d3b2: and eax, dword ptr [edi + 0x8c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8cu)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 51d3b8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51d3ba: mov edi, dword ptr [esi + 0xc] */
  edi = R32((uint32_t)(esi + 0xcu));
/* 51d3bd: mov dword ptr [edi + 0x20], ecx */
  W32((uint32_t)(edi + 0x20u), ecx);
/* 51d3c0: mov dword ptr [edi + 0x24], eax */
  W32((uint32_t)(edi + 0x24u), eax);
/* 51d3c3: je 0x51d25f */
  if (zf) goto L_51d25f;
L_51d3c9: /* 51d3c9: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51d3cb: je 0x51d418 */
  if (zf) goto L_51d418;
L_51d3cd: /* 51d3cd: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51d3d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51d3d2: je 0x51d3e2 */
  if (zf) goto L_51d3e2;
L_51d3d4: /* 51d3d4: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 51d3d7: and eax, 0x10000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 51d3dc: xor ecx, ecx */
  ecx = 0;
/* 51d3de: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 51d3e0: je 0x51d418 */
  if (zf) goto L_51d418;
L_51d3e2: /* 51d3e2: mov ebx, dword ptr [esi + 0x1c] */
  ebx = R32((uint32_t)(esi + 0x1cu));
/* 51d3e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51d3e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51d3e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51d3eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51d3ec: and ebx, 0xffffefff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffefffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 51d3f2: mov eax, esp */
  eax = esp;
/* 51d3f4: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
/* 51d3f7: mov ecx, esi */
  ecx = esi;
/* 51d3f9: mov dword ptr [eax], 0x13c */
  W32((uint32_t)(eax), 0x13cu);
/* 51d3ff: call 0x4e2aea */
  esp -= 4; W32(esp, 0x51d404u); SPILL(); f_4e2aea(); if (g_unwind) return; RELOAD();
/* 51d404: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 51d406: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51d407: mov ecx, esi */
  ecx = esi;
/* 51d409: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x51d40cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51d40c: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 51d40f: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 51d412: jne 0x51d360 */
  if (!zf) goto L_51d360;
L_51d418: /* 51d418: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 51d41b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 51d41e: or eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 51d423: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 51d426: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51d427: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51d428: mov eax, 1 */
  eax = 0x1u;
/* 51d42d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51d434: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51d435: mov esp, ebp */
  esp = ebp;
/* 51d437: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51d438: ret 4 */
  esp += 8; SPILL(); return;
}

void f_51d43b(void) {
  LOAD_REGS();
L_51d43b: /* 51d43b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 51d43e: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 51d443: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 51d446: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51d447: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 51d44a: call 0x554df6 */
  esp -= 4; W32(esp, 0x51d44fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_51d44f(); return;
}

void f_51d44f(void) {
  LOAD_REGS();
L_51d44f: /* 51d44f: push 0x56bfcc */
  { uint32_t v = 0x56bfccu; esp -= 4; W32(esp, v); }
/* 51d454: push 0x5a5b30 */
  { uint32_t v = 0x5a5b30u; esp -= 4; W32(esp, v); }
/* 51d459: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x51d45eu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 51d45e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51d461: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51d463: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51d465: call 0x554df6 */
  esp -= 4; W32(esp, 0x51d46au); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_51d46a: guest_badaddr(0x51d46a); return;
}

void f_51d500(void) {
  LOAD_REGS();
L_51d500: /* 51d500: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 51d501: mov ebp, esp */
  ebp = esp;
/* 51d503: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51d505: push 0x5572e0 */
  { uint32_t v = 0x5572e0u; esp -= 4; W32(esp, v); }
/* 51d50a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51d510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51d511: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51d518: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51d51b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 51d51e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51d51f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51d520: xor esi, esi */
  esi = 0;
/* 51d522: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 51d525: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 51d528: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51d52b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51d52c: movzx edi, byte ptr [edx] */
  edi = (uint32_t)(R8((uint32_t)(edx)));
/* 51d52f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51d530: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 51d533: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 51d536: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 51d539: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 51d53c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51d53d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51d53e: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 51d541: call dword ptr [edi*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edi*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51d548u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51d548: cmp dword ptr [ebp - 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51d54b: je 0x51d5b4 */
  if (zf) goto L_51d5b4;
L_51d54d: /* 51d54d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 51d550: add dword ptr [eax + 0xc], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 51d554: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 51d557: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 51d559: mov edi, dword ptr [ecx + 0x4ec] */
  edi = R32((uint32_t)(ecx + 0x4ecu));
/* 51d55f: mov esi, ecx */
  esi = ecx;
/* 51d561: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x51d564u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51d564: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51d566: je 0x51d57f */
  if (zf) goto L_51d57f;
L_51d568: /* 51d568: push 0x21b */
  { uint32_t v = 0x21bu; esp -= 4; W32(esp, v); }
/* 51d56d: push 0x5a3b00 */
  { uint32_t v = 0x5a3b00u; esp -= 4; W32(esp, v); }
/* 51d572: push 0x5a3ad4 */
  { uint32_t v = 0x5a3ad4u; esp -= 4; W32(esp, v); }
/* 51d577: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x51d57cu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 51d57c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_51d57f: /* 51d57f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 51d582: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 51d585: mov ecx, dword ptr [esi + 0x4e8] */
  ecx = R32((uint32_t)(esi + 0x4e8u));
/* 51d58b: movzx esi, byte ptr [eax] */
  esi = (uint32_t)(R8((uint32_t)(eax)));
/* 51d58e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51d58f: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 51d592: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 51d595: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 51d598: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51d599: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51d59a: call dword ptr [esi*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(esi*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51d5a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51d5a1: /* 51d5a1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 51d5a4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51d5ab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51d5ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51d5ad: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51d5ae: mov esp, ebp */
  esp = ebp;
/* 51d5b0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51d5b1: ret 8 */
  esp += 12; SPILL(); return;
L_51d5b4: /* 51d5b4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 51d5b7: push 0x5a5b7c */
  { uint32_t v = 0x5a5b7cu; esp -= 4; W32(esp, v); }
/* 51d5bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51d5bd: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x51d5c2u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 51d5c2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 51d5c5: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 51d5c8: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 51d5cb: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 51d5ce: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 51d5d1: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 51d5d4: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 51d5d7: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 51d5d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51d5dc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51d5dd: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 51d5e0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 51d5e3: add dword ptr [eax + 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 51d5e6: cmp dword ptr [ebp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51d5e9: mov dword ptr [0x5afecc], esi */
  W32((uint32_t)(0x5afeccu), esi);
/* 51d5ef: mov dword ptr [0x5afed0], esi */
  W32((uint32_t)(0x5afed0u), esi);
/* 51d5f5: mov dword ptr [0x5afec4], esi */
  W32((uint32_t)(0x5afec4u), esi);
/* 51d5fb: je 0x51d5a1 */
  if (zf) goto L_51d5a1;
L_51d5fd: /* 51d5fd: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 51d600: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 51d603: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 51d606: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 51d609: xor eax, eax */
  eax = 0;
/* 51d60b: mov ebx, ecx */
  ebx = ecx;
/* 51d60d: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 51d610: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 51d613: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 51d615: mov ecx, ebx */
  ecx = ebx;
/* 51d617: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 51d619: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 51d61c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51d61d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51d61e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51d625: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51d626: mov esp, ebp */
  esp = ebp;
/* 51d628: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51d629: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51d62c(void) {
  LOAD_REGS();
L_51d62c: /* 51d62c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 51d62f: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 51d634: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 51d637: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51d638: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 51d63b: call 0x554df6 */
  esp -= 4; W32(esp, 0x51d640u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_51d640(); return;
}

void f_51d640(void) {
  LOAD_REGS();
L_51d640: /* 51d640: push 0x56bffc */
  { uint32_t v = 0x56bffcu; esp -= 4; W32(esp, v); }
/* 51d645: push 0x5a5bb4 */
  { uint32_t v = 0x5a5bb4u; esp -= 4; W32(esp, v); }
/* 51d64a: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x51d64fu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 51d64f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 51d652: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 51d655: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 51d658: mov edi, dword ptr [ecx + 0x48] */
  edi = R32((uint32_t)(ecx + 0x48u));
/* 51d65b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51d65e: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 51d660: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51d661: xor esi, esi */
  esi = 0;
/* 51d663: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51d664: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x51d669u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 51d669: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51d66a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 51d66d: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51d670: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51d671: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x51d676u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 51d676: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51d677: push 0x5a5bbc */
  { uint32_t v = 0x5a5bbcu; esp -= 4; W32(esp, v); }
/* 51d67c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x51d681u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 51d681: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51d684: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51d685: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51d686: call 0x554df6 */
  esp -= 4; W32(esp, 0x51d68bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_51d68b: guest_badaddr(0x51d68b); return;
}

void f_51d700(void) {
  LOAD_REGS();
L_51d700: /* 51d700: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51d703: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 51d707: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51d708: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 51d70c: xor ebx, ebx */
  ebx = 0;
/* 51d70e: mov dword ptr [esp + 4], ebx */
  W32((uint32_t)(esp + 0x4u), ebx);
/* 51d712: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 51d715: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51d718: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51d719: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 51d71c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51d71d: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 51d720: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 51d724: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 51d728: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51d729: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51d72a: call dword ptr [esi*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(esi*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51d731u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51d731: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 51d735: mov dword ptr [0x5afec4], ebx */
  W32((uint32_t)(0x5afec4u), ebx);
/* 51d73b: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 51d73e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51d741: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51d742: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 51d745: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 51d749: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 51d74d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51d74e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51d74f: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51d756u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51d756: mov esi, dword ptr [0x5afec4] */
  esi = R32((uint32_t)(0x5afec4u));
/* 51d75c: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51d75e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 51d762: mov dword ptr [0x5afed0], ecx */
  W32((uint32_t)(0x5afed0u), ecx);
/* 51d768: je 0x51d838 */
  if (zf) goto L_51d838;
L_51d76e: /* 51d76e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51d76f: mov edi, dword ptr [0x5afecc] */
  edi = R32((uint32_t)(0x5afeccu));
/* 51d775: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51d777: je 0x51d837 */
  if (zf) goto L_51d837;
L_51d77d: /* 51d77d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 51d780: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 51d784: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51d786: jge 0x51d78c */
  if ((sf == of)) goto L_51d78c;
L_51d788: /* 51d788: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51d78a: jge 0x51d7ac */
  if ((sf == of)) goto L_51d7ac;
L_51d78c: /* 51d78c: cmp dword ptr [esp + 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51d790: jne 0x51d7dd */
  if (!zf) goto L_51d7dd;
L_51d792: /* 51d792: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51d794: jl 0x51d7dd */
  if ((sf != of)) goto L_51d7dd;
L_51d796: /* 51d796: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 51d799: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 51d79b: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* 51d79e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 51d79f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51d7a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51d7a1: mov ecx, edi */
  ecx = edi;
/* 51d7a3: call 0x4e33b4 */
  esp -= 4; W32(esp, 0x51d7a8u); SPILL(); f_4e33b4(); if (g_unwind) return; RELOAD();
/* 51d7a8: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
L_51d7ac: /* 51d7ac: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 51d7af: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* 51d7b2: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 51d7b4: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 51d7b7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 51d7b9: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 51d7bd: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51d7bf: mov dword ptr [0x5afecc], eax */
  W32((uint32_t)(0x5afeccu), eax);
/* 51d7c4: je 0x51d837 */
  if (zf) goto L_51d837;
L_51d7c6: /* 51d7c6: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 51d7c9: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 51d7cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51d7cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51d7cd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51d7ce: call dword ptr [esi + 0xa4] */
  { uint32_t t = R32((uint32_t)(esi + 0xa4u)); esp -= 4; W32(esp, 0x51d7d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51d7d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51d7d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51d7d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51d7d7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51d7da: ret 8 */
  esp += 12; SPILL(); return;
L_51d7dd: /* 51d7dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51d7de: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 51d7e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51d7e2: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 51d7e8: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 51d7eb: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 51d7ef: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 51d7f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51d7f3: push 0x5a5c40 */
  { uint32_t v = 0x5a5c40u; esp -= 4; W32(esp, v); }
/* 51d7f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51d7f9: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x51d7feu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 51d7fe: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 51d802: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51d805: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51d807: mov dword ptr [0x5afecc], ebx */
  W32((uint32_t)(0x5afeccu), ebx);
/* 51d80d: mov dword ptr [0x5afed0], ebx */
  W32((uint32_t)(0x5afed0u), ebx);
/* 51d813: je 0x51d837 */
  if (zf) goto L_51d837;
L_51d815: /* 51d815: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 51d818: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 51d81b: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 51d81f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 51d823: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 51d827: xor eax, eax */
  eax = 0;
/* 51d829: mov ebx, ecx */
  ebx = ecx;
/* 51d82b: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 51d82e: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 51d831: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 51d833: mov ecx, ebx */
  ecx = ebx;
/* 51d835: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
L_51d837: /* 51d837: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_51d838: /* 51d838: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51d839: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51d83a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51d83d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51d890(void) {
  LOAD_REGS();
L_51d890: /* 51d890: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51d891: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 51d892: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51d893: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 51d897: mov dword ptr [0x5afed0], ecx */
  W32((uint32_t)(0x5afed0u), ecx);
/* 51d89d: mov dword ptr [0x5afec4], 0 */
  W32((uint32_t)(0x5afec4u), 0x0u);
/* 51d8a7: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51d8aa: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51d8ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51d8ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51d8b0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51d8b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51d8b2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51d8b5: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51d8bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51d8bc: mov ecx, dword ptr [0x5afec4] */
  ecx = R32((uint32_t)(0x5afec4u));
/* 51d8c2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51d8c4: je 0x51d8de */
  if (zf) goto L_51d8de;
L_51d8c6: /* 51d8c6: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 51d8c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51d8cb: je 0x51d8de */
  if (zf) goto L_51d8de;
L_51d8cd: /* 51d8cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_51d8d0: /* 51d8d0: cmp eax, 0x6a60e0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a60e0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51d8d5: je 0x51d94d */
  if (zf) goto L_51d94d;
L_51d8d7: /* 51d8d7: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 51d8da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51d8dc: jne 0x51d8d0 */
  if (!zf) goto L_51d8d0;
L_51d8de: /* 51d8de: xor ebp, ebp */
  ebp = 0;
L_51d8e0: /* 51d8e0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51d8e3: mov edi, dword ptr [0x5afecc] */
  edi = R32((uint32_t)(0x5afeccu));
/* 51d8e9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51d8ec: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 51d8f4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51d8f7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51d8f8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51d8fb: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 51d8ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51d900: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51d901: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51d908u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51d908: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51d90b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51d90f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 51d917: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51d91a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51d91b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51d91e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51d91f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51d920: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51d923: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51d92au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51d92a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51d92c: je 0x51d99f */
  if (zf) goto L_51d99f;
L_51d92e: /* 51d92e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 51d932: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 51d934: je 0x51d99f */
  if (zf) goto L_51d99f;
L_51d936: /* 51d936: jge 0x51d951 */
  if ((sf == of)) goto L_51d951;
L_51d938: /* 51d938: push 0x5a5ca0 */
  { uint32_t v = 0x5a5ca0u; esp -= 4; W32(esp, v); }
/* 51d93d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51d93e: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x51d943u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 51d943: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51d946: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51d947: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51d948: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51d949: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51d94a: ret 8 */
  esp += 12; SPILL(); return;
L_51d94d: /* 51d94d: mov ebp, ecx */
  ebp = ecx;
/* 51d94f: jmp 0x51d8e0 */
  goto L_51d8e0;
L_51d951: /* 51d951: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 51d955: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 51d957: jl 0x51d95e */
  if ((sf != of)) goto L_51d95e;
L_51d959: /* 51d959: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51d95c: jle 0x51d98b */
  if ((zf || sf != of)) goto L_51d98b;
L_51d95e: /* 51d95e: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 51d961: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51d962: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51d963: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51d964: push 0x5a5d00 */
  { uint32_t v = 0x5a5d00u; esp -= 4; W32(esp, v); }
/* 51d969: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51d96a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x51d96fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 51d96f: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 51d973: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 51d976: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51d979: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 51d97b: jge 0x51d981 */
  if ((sf == of)) goto L_51d981;
L_51d97d: /* 51d97d: xor eax, eax */
  eax = 0;
/* 51d97f: jmp 0x51d987 */
  goto L_51d987;
L_51d981: /* 51d981: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51d983: jl 0x51d98b */
  if ((sf != of)) goto L_51d98b;
L_51d985: /* 51d985: mov eax, ecx */
  eax = ecx;
L_51d987: /* 51d987: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_51d98b: /* 51d98b: mov ecx, dword ptr [ebp + 0x6c] */
  ecx = R32((uint32_t)(ebp + 0x6cu));
/* 51d98e: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 51d991: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 51d995: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51d996: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51d997: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51d998: mov ecx, edi */
  ecx = edi;
/* 51d99a: call 0x4e2f09 */
  esp -= 4; W32(esp, 0x51d99fu); SPILL(); f_4e2f09(); if (g_unwind) return; RELOAD();
L_51d99f: /* 51d99f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51d9a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51d9a1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51d9a2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51d9a3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51da00(void) {
  LOAD_REGS();
L_51da00: /* 51da00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 51da01: mov ebp, esp */
  ebp = esp;
/* 51da03: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51da06: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 51da09: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 51da0c: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 51da0f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51da10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51da11: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 51da13: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 51da16: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 51da19: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 51da1c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51da1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51da1e: call 0x4e21bc */
  esp -= 4; W32(esp, 0x51da23u); SPILL(); f_4e21bc(); if (g_unwind) return; RELOAD();
/* 51da23: mov edi, dword ptr [eax + 0x40] */
  edi = R32((uint32_t)(eax + 0x40u));
/* 51da26: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51da29: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51da2b: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 51da2e: jne 0x51da35 */
  if (!zf) goto L_51da35;
L_51da30: /* 51da30: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 51da33: jmp 0x51da49 */
  goto L_51da49;
L_51da35: /* 51da35: lea eax, [edi + 7] */
  eax = (uint32_t)(edi + 0x7u);
/* 51da38: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 51da3b: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 51da3e: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 51da41: call 0x554f80 */
  esp -= 4; W32(esp, 0x51da46u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 51da46: mov dword ptr [ebp - 4], esp */
  W32((uint32_t)(ebp + 0xfffffffcu), esp);
L_51da49: /* 51da49: mov dword ptr [ebp - 0xc], edi */
  W32((uint32_t)(ebp + 0xfffffff4u), edi);
/* 51da4c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 51da4f: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 51da52: xor eax, eax */
  eax = 0;
/* 51da54: mov ebx, ecx */
  ebx = ecx;
/* 51da56: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 51da59: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 51da5c: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 51da5e: mov ecx, ebx */
  ecx = ebx;
/* 51da60: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 51da62: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 51da65: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 51da6f: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 51da72: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51da75: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51da76: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 51da79: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 51da7c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 51da7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51da80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51da81: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 51da84: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51da8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51da8b: mov eax, dword ptr [0x5afecc] */
  eax = R32((uint32_t)(0x5afeccu));
/* 51da90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51da92: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 51da95: mov dword ptr [0x5afec4], esi */
  W32((uint32_t)(0x5afec4u), esi);
/* 51da9b: mov dword ptr [0x5afed0], edx */
  W32((uint32_t)(0x5afed0u), edx);
/* 51daa1: je 0x51daab */
  if (zf) goto L_51daab;
L_51daa3: /* 51daa3: add eax, dword ptr [esi + 0x48] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x48u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 51daa6: mov dword ptr [0x5afecc], eax */
  W32((uint32_t)(0x5afeccu), eax);
L_51daab: /* 51daab: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 51daae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51dab0: mov ebx, dword ptr [ebp - 4] */
  ebx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 51dab3: je 0x51dac8 */
  if (zf) goto L_51dac8;
L_51dab5: /* 51dab5: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 51dab8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 51daba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51dabc: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 51dabe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51dabf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51dac0: mov ecx, esi */
  ecx = esi;
/* 51dac2: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x51dac8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51dac8: /* 51dac8: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 51dacb: mov edi, dword ptr [edx + 0x6c] */
  edi = R32((uint32_t)(edx + 0x6cu));
/* 51dace: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51dad0: je 0x51dae9 */
  if (zf) goto L_51dae9;
L_51dad2: /* 51dad2: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 51dad5: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 51dad7: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 51dad9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51dada: mov ecx, edi */
  ecx = edi;
/* 51dadc: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x51dae2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51dae2: mov edi, dword ptr [edi + 0x54] */
  edi = R32((uint32_t)(edi + 0x54u));
/* 51dae5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51dae7: jne 0x51dad2 */
  if (!zf) goto L_51dad2;
L_51dae9: /* 51dae9: lea esp, [ebp - 0x1c] */
  esp = (uint32_t)(ebp + 0xffffffe4u);
/* 51daec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51daed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51daee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51daef: mov esp, ebp */
  esp = ebp;
/* 51daf1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51daf2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51db40(void) {
  LOAD_REGS();
L_51db40: /* 51db40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51db41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51db42: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 51db46: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51db49: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 51db51: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51db54: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51db55: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51db56: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51db59: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 51db5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51db5e: mov edi, ecx */
  edi = ecx;
/* 51db60: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51db63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51db64: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51db6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51db6b: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 51db6f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 51db71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51db72: mov ecx, edi */
  ecx = edi;
/* 51db74: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x51db77u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51db77: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51db79: jne 0x51db9a */
  if (!zf) goto L_51db9a;
L_51db7b: /* 51db7b: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 51db7f: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 51db85: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 51db88: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 51db8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51db8c: push 0x5a6000 */
  { uint32_t v = 0x5a6000u; esp -= 4; W32(esp, v); }
/* 51db91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51db92: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x51db97u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 51db97: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_51db9a: /* 51db9a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51db9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51db9c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51db9d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51dbc0(void) {
  LOAD_REGS();
L_51dbc0: /* 51dbc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51dbc1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51dbc2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51dbc3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 51dbc7: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 51dbca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51dbcc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51dbcd: call 0x4e161d */
  esp -= 4; W32(esp, 0x51dbd2u); SPILL(); f_4e161d(); if (g_unwind) return; RELOAD();
/* 51dbd2: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 51dbd6: mov ebx, eax */
  ebx = eax;
/* 51dbd8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 51dbda: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51dbdd: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51dbdf: je 0x51dc1b */
  if (zf) goto L_51dc1b;
L_51dbe1: /* 51dbe1: cmp word ptr [ebx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 51dbe5: je 0x51dbf3 */
  if (zf) goto L_51dbf3;
L_51dbe7: /* 51dbe7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51dbe8: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x51dbedu); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 51dbed: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51dbf0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51dbf1: jmp 0x51dbf5 */
  goto L_51dbf5;
L_51dbf3: /* 51dbf3: xor eax, eax */
  eax = 0;
L_51dbf5: /* 51dbf5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51dbf7: mov ecx, esi */
  ecx = esi;
/* 51dbf9: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 51dbfc: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 51dbff: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51dc04u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51dc04: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 51dc07: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51dc09: je 0x51dc1b */
  if (zf) goto L_51dc1b;
L_51dc0b: /* 51dc0b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 51dc0d: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 51dc10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51dc11: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51dc12: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51dc13: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x51dc18u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 51dc18: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_51dc1b: /* 51dc1b: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 51dc1e: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51dc21: je 0x51dc2f */
  if (zf) goto L_51dc2f;
L_51dc23: /* 51dc23: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 51dc26: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 51dc27: mov dword ptr [edi + 0xc], ecx */
  W32((uint32_t)(edi + 0xcu), ecx);
/* 51dc2a: cmp byte ptr [ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51dc2d: jne 0x51dc23 */
  if (!zf) goto L_51dc23;
L_51dc2f: /* 51dc2f: inc dword ptr [edi + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi + 0xcu), r);
  }
/* 51dc32: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51dc33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51dc34: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51dc35: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51dc60(void) {
  LOAD_REGS();
L_51dc60: /* 51dc60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51dc61: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 51dc62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51dc63: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 51dc67: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51dc6a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51dc6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51dc6c: call 0x4e1177 */
  esp -= 4; W32(esp, 0x51dc71u); SPILL(); f_4e1177(); if (g_unwind) return; RELOAD();
/* 51dc71: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 51dc75: mov ebx, eax */
  ebx = eax;
/* 51dc77: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 51dc79: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51dc7c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51dc7e: mov ebp, 2 */
  ebp = 0x2u;
/* 51dc83: je 0x51dcbe */
  if (zf) goto L_51dcbe;
L_51dc85: /* 51dc85: cmp word ptr [ebx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 51dc89: je 0x51dc97 */
  if (zf) goto L_51dc97;
L_51dc8b: /* 51dc8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51dc8c: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x51dc91u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 51dc91: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51dc94: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51dc95: jmp 0x51dc99 */
  goto L_51dc99;
L_51dc97: /* 51dc97: xor eax, eax */
  eax = 0;
L_51dc99: /* 51dc99: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 51dc9a: mov ecx, edi */
  ecx = edi;
/* 51dc9c: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 51dc9f: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 51dca2: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51dca7u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51dca7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 51dcaa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51dcac: je 0x51dcbe */
  if (zf) goto L_51dcbe;
L_51dcae: /* 51dcae: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 51dcb0: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 51dcb3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51dcb4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51dcb5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51dcb6: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x51dcbbu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 51dcbb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_51dcbe: /* 51dcbe: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51dcc1: cmp word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 51dcc5: je 0x51dcd5 */
  if (zf) goto L_51dcd5;
L_51dcc7: /* 51dcc7: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 51dcca: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 51dccc: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 51dccf: cmp word ptr [ecx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 51dcd3: jne 0x51dcc7 */
  if (!zf) goto L_51dcc7;
L_51dcd5: /* 51dcd5: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51dcd8: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 51dcda: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51dcdb: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51dcde: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51dcdf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51dce0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51dce1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51dd20(void) {
  LOAD_REGS();
L_51dd20: /* 51dd20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 51dd24: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 51dd27: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51dd28: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 51dd29: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51dd2a: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 51dd2c: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 51dd2f: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 51dd32: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 51dd3a: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 51dd3d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 51dd3e: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 51dd41: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 51dd45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51dd46: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51dd49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51dd4a: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51dd51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51dd51: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 51dd55: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51dd57: je 0x51dd7a */
  if (zf) goto L_51dd7a;
L_51dd59: /* 51dd59: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 51dd5c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51dd5e: je 0x51dd6b */
  if (zf) goto L_51dd6b;
L_51dd60: /* 51dd60: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51dd62: je 0x51dd76 */
  if (zf) goto L_51dd76;
L_51dd64: /* 51dd64: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 51dd67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51dd69: jne 0x51dd60 */
  if (!zf) goto L_51dd60;
L_51dd6b: /* 51dd6b: xor eax, eax */
  eax = 0;
/* 51dd6d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51dd6f: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 51dd72: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51dd74: je 0x51dd7a */
  if (zf) goto L_51dd7a;
L_51dd76: /* 51dd76: mov eax, ebx */
  eax = ebx;
/* 51dd78: jmp 0x51dd7c */
  goto L_51dd7c;
L_51dd7a: /* 51dd7a: xor eax, eax */
  eax = 0;
L_51dd7c: /* 51dd7c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51dd7e: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 51dd82: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
/* 51dd85: jne 0x51ddd7 */
  if (!zf) goto L_51ddd7;
L_51dd87: /* 51dd87: test dword ptr [edi + 0x498], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x498u))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51dd91: je 0x51ddd7 */
  if (zf) goto L_51ddd7;
L_51dd93: /* 51dd93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51dd94: mov esi, dword ptr [ebx + 0x24] */
  esi = R32((uint32_t)(ebx + 0x24u));
/* 51dd97: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51dd99: je 0x51ddd6 */
  if (zf) goto L_51ddd6;
L_51dd9b: /* 51dd9b: jmp 0x51dda0 */
  goto L_51dda0;
L_51dda0: /* 51dda0: mov edx, dword ptr [esi + 0x510] */
  edx = R32((uint32_t)(esi + 0x510u));
/* 51dda6: xor eax, eax */
  eax = 0;
/* 51dda8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 51ddaa: jle 0x51ddc5 */
  if ((zf || sf != of)) goto L_51ddc5;
L_51ddac: /* 51ddac: mov ecx, dword ptr [esi + 0x50c] */
  ecx = R32((uint32_t)(esi + 0x50cu));
L_51ddb2: /* 51ddb2: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51ddb4: je 0x51ddc0 */
  if (zf) goto L_51ddc0;
L_51ddb6: /* 51ddb6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51ddb7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 51ddba: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51ddbc: jl 0x51ddb2 */
  if ((sf != of)) goto L_51ddb2;
L_51ddbe: /* 51ddbe: jmp 0x51ddc5 */
  goto L_51ddc5;
L_51ddc0: /* 51ddc0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51ddc3: jne 0x51ddd3 */
  if (!zf) goto L_51ddd3;
L_51ddc5: /* 51ddc5: mov esi, dword ptr [esi + 0x28] */
  esi = R32((uint32_t)(esi + 0x28u));
/* 51ddc8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51ddca: jne 0x51dda0 */
  if (!zf) goto L_51dda0;
L_51ddcc: /* 51ddcc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51ddcd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51ddce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51ddcf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51ddd0: ret 8 */
  esp += 12; SPILL(); return;
L_51ddd3: /* 51ddd3: mov dword ptr [ebp], ebx */
  W32((uint32_t)(ebp), ebx);
L_51ddd6: /* 51ddd6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_51ddd7: /* 51ddd7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51ddd8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51ddd9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51ddda: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51dd9d(void) {
  LOAD_REGS();
L_51dd9d: /* 51dd9d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_51dda0: /* 51dda0: mov edx, dword ptr [esi + 0x510] */
  edx = R32((uint32_t)(esi + 0x510u));
/* 51dda6: xor eax, eax */
  eax = 0;
/* 51dda8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 51ddaa: jle 0x51ddc5 */
  if ((zf || sf != of)) goto L_51ddc5;
L_51ddac: /* 51ddac: mov ecx, dword ptr [esi + 0x50c] */
  ecx = R32((uint32_t)(esi + 0x50cu));
L_51ddb2: /* 51ddb2: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51ddb4: je 0x51ddc0 */
  if (zf) goto L_51ddc0;
L_51ddb6: /* 51ddb6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51ddb7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 51ddba: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51ddbc: jl 0x51ddb2 */
  if ((sf != of)) goto L_51ddb2;
L_51ddbe: /* 51ddbe: jmp 0x51ddc5 */
  goto L_51ddc5;
L_51ddc0: /* 51ddc0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51ddc3: jne 0x51ddd3 */
  if (!zf) goto L_51ddd3;
L_51ddc5: /* 51ddc5: mov esi, dword ptr [esi + 0x28] */
  esi = R32((uint32_t)(esi + 0x28u));
/* 51ddc8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51ddca: jne 0x51dda0 */
  if (!zf) goto L_51dda0;
L_51ddcc: /* 51ddcc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51ddcd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51ddce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51ddcf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51ddd0: ret 8 */
  esp += 12; SPILL(); return;
L_51ddd3: /* 51ddd3: mov dword ptr [ebp], ebx */
  W32((uint32_t)(ebp), ebx);
/* 51ddd6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51ddd7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51ddd8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51ddd9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51ddda: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51de10(void) {
  LOAD_REGS();
L_51de10: /* 51de10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 51de14: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 51de17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51de18: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 51de1a: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 51de1d: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 51de20: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 51de28: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 51de2b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 51de2c: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 51de2f: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51de33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51de34: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51de37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51de38: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51de3fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51de3f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 51de43: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51de45: je 0x51de5e */
  if (zf) goto L_51de5e;
L_51de47: /* 51de47: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 51de4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51de4c: je 0x51de5e */
  if (zf) goto L_51de5e;
L_51de4e: /* 51de4e: mov edi, edi */
  edi = edi;
L_51de50: /* 51de50: cmp eax, 0x5f0d80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5f0d80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51de55: je 0x51de6a */
  if (zf) goto L_51de6a;
L_51de57: /* 51de57: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 51de5a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51de5c: jne 0x51de50 */
  if (!zf) goto L_51de50;
L_51de5e: /* 51de5e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 51de62: xor eax, eax */
  eax = 0;
/* 51de64: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 51de66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51de67: ret 8 */
  esp += 12; SPILL(); return;
L_51de6a: /* 51de6a: mov eax, ecx */
  eax = ecx;
/* 51de6c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_51de70: /* 51de70: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51de72: je 0x51de85 */
  if (zf) goto L_51de85;
L_51de74: /* 51de74: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 51de77: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51de79: jne 0x51de70 */
  if (!zf) goto L_51de70;
L_51de7b: /* 51de7b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 51de7f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 51de81: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51de82: ret 8 */
  esp += 12; SPILL(); return;
L_51de85: /* 51de85: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 51de89: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 51de8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51de8c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51deb0(void) {
  LOAD_REGS();
L_51deb0: /* 51deb0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51deb2: push 0x557300 */
  { uint32_t v = 0x557300u; esp -= 4; W32(esp, v); }
/* 51deb7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51debd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51debe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51dec5: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51dec8: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 51decc: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 51decf: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51ded2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51ded3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51ded4: xor ebx, ebx */
  ebx = 0;
/* 51ded6: mov byte ptr [esp + 0xb], bl */
  W8((uint32_t)(esp + 0xbu), (ebx & 0xffu));
/* 51deda: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 51dedd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51dede: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51dedf: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 51dee2: lea edx, [esp + 0xf] */
  edx = (uint32_t)(esp + 0xfu);
/* 51dee6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51dee7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51dee8: call dword ptr [esi*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(esi*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51deefu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51deef: movzx eax, byte ptr [esp + 0xf] */
  eax = (uint32_t)(R8((uint32_t)(esp + 0xfu)));
/* 51def4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51def5: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 51def9: push 0x5a61b4 */
  { uint32_t v = 0x5a61b4u; esp -= 4; W32(esp, v); }
/* 51defe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51deff: call 0x4e17e4 */
  esp -= 4; W32(esp, 0x51df04u); SPILL(); f_4e17e4(); if (g_unwind) return; RELOAD();
/* 51df04: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51df07: mov edi, eax */
  edi = eax;
/* 51df09: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 51df0d: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51df0f: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 51df13: je 0x51df4c */
  if (zf) goto L_51df4c;
L_51df15: /* 51df15: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 51df18: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51df1a: mov ecx, esi */
  ecx = esi;
/* 51df1c: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 51df1f: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 51df22: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51df27u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51df27: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 51df2a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51df2c: je 0x51df4c */
  if (zf) goto L_51df4c;
L_51df2e: /* 51df2e: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51df31: je 0x51df37 */
  if (zf) goto L_51df37;
L_51df33: /* 51df33: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 51df35: jmp 0x51df3c */
  goto L_51df3c;
L_51df37: /* 51df37: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
L_51df3c: /* 51df3c: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 51df3f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 51df41: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51df42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51df43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51df44: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x51df49u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 51df49: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_51df4c: /* 51df4c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51df4e: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 51df52: mov dword ptr [esp + 0x28], 1 */
  W32((uint32_t)(esp + 0x28u), 0x1u);
/* 51df5a: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 51df5e: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 51df62: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51df67u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51df67: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 51df6b: mov dword ptr [esp + 0x24], 0xffffffff */
  W32((uint32_t)(esp + 0x24u), 0xffffffffu);
/* 51df73: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51df78u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51df78: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 51df7c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51df7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51df7e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51df7f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51df86: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51df89: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51dfd0(void) {
  LOAD_REGS();
L_51dfd0: /* 51dfd0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51dfd2: push 0x557320 */
  { uint32_t v = 0x557320u; esp -= 4; W32(esp, v); }
/* 51dfd7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51dfdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51dfde: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51dfe5: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51dfe8: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 51dfec: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 51dfef: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51dff2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51dff3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51dff4: xor ebx, ebx */
  ebx = 0;
/* 51dff6: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* 51dffa: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 51dffd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51dffe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51dfff: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 51e002: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 51e006: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51e007: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e008: call dword ptr [esi*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(esi*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51e00fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51e00f: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 51e013: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e014: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 51e018: push 0x5a61cc */
  { uint32_t v = 0x5a61ccu; esp -= 4; W32(esp, v); }
/* 51e01d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51e01e: call 0x4e17e4 */
  esp -= 4; W32(esp, 0x51e023u); SPILL(); f_4e17e4(); if (g_unwind) return; RELOAD();
/* 51e023: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51e026: mov edi, eax */
  edi = eax;
/* 51e028: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 51e02c: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51e02e: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 51e032: je 0x51e06b */
  if (zf) goto L_51e06b;
L_51e034: /* 51e034: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 51e037: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51e039: mov ecx, esi */
  ecx = esi;
/* 51e03b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 51e03e: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 51e041: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51e046u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51e046: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 51e049: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51e04b: je 0x51e06b */
  if (zf) goto L_51e06b;
L_51e04d: /* 51e04d: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51e050: je 0x51e056 */
  if (zf) goto L_51e056;
L_51e052: /* 51e052: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 51e054: jmp 0x51e05b */
  goto L_51e05b;
L_51e056: /* 51e056: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
L_51e05b: /* 51e05b: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 51e05e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 51e060: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51e061: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51e062: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e063: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x51e068u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 51e068: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_51e06b: /* 51e06b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51e06d: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 51e071: mov dword ptr [esp + 0x28], 1 */
  W32((uint32_t)(esp + 0x28u), 0x1u);
/* 51e079: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 51e07d: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 51e081: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51e086u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51e086: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 51e08a: mov dword ptr [esp + 0x24], 0xffffffff */
  W32((uint32_t)(esp + 0x24u), 0xffffffffu);
/* 51e092: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51e097u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51e097: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 51e09b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51e09c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51e09d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51e09e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51e0a5: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51e0a8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51e0f0(void) {
  LOAD_REGS();
L_51e0f0: /* 51e0f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51e0f2: push 0x557340 */
  { uint32_t v = 0x557340u; esp -= 4; W32(esp, v); }
/* 51e0f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51e0fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e0fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51e105: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51e108: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 51e10c: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 51e10f: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51e112: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51e113: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 51e11b: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 51e11e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51e11f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51e120: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 51e123: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 51e127: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51e128: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e129: call dword ptr [esi*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(esi*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51e130u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51e130: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51e133: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 51e137: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 51e13b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 51e13e: push 0x5a61f4 */
  { uint32_t v = 0x5a61f4u; esp -= 4; W32(esp, v); }
/* 51e143: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e144: call 0x4e17e4 */
  esp -= 4; W32(esp, 0x51e149u); SPILL(); f_4e17e4(); if (g_unwind) return; RELOAD();
/* 51e149: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51e14c: mov edi, eax */
  edi = eax;
/* 51e14e: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 51e152: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51e154: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 51e15c: je 0x51e197 */
  if (zf) goto L_51e197;
L_51e15e: /* 51e15e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 51e161: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51e163: mov ecx, esi */
  ecx = esi;
/* 51e165: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 51e168: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 51e16b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51e170u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51e170: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 51e173: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51e175: je 0x51e197 */
  if (zf) goto L_51e197;
L_51e177: /* 51e177: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 51e17a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51e17c: je 0x51e182 */
  if (zf) goto L_51e182;
L_51e17e: /* 51e17e: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 51e180: jmp 0x51e187 */
  goto L_51e187;
L_51e182: /* 51e182: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
L_51e187: /* 51e187: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 51e189: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 51e18c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51e18d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51e18e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51e18f: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x51e194u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 51e194: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_51e197: /* 51e197: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51e199: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 51e19d: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 51e1a5: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 51e1ad: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 51e1b5: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51e1bau); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51e1ba: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51e1be: mov dword ptr [esp + 0x20], 0xffffffff */
  W32((uint32_t)(esp + 0x20u), 0xffffffffu);
/* 51e1c6: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51e1cbu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51e1cb: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 51e1cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51e1d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51e1d1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51e1d8: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51e1db: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51e220(void) {
  LOAD_REGS();
L_51e220: /* 51e220: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51e221: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 51e225: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 51e228: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 51e230: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 51e233: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 51e234: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51e235: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 51e238: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51e239: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51e23d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51e23e: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51e241: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e242: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51e249u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51e249: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 51e24e: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 51e252: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 51e255: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 51e259: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 51e25b: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 51e25e: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51e260: je 0x51e29c */
  if (zf) goto L_51e29c;
L_51e262: /* 51e262: cmp word ptr [esi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 51e266: je 0x51e274 */
  if (zf) goto L_51e274;
L_51e268: /* 51e268: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51e269: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x51e26eu); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 51e26e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51e271: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51e272: jmp 0x51e276 */
  goto L_51e276;
L_51e274: /* 51e274: xor eax, eax */
  eax = 0;
L_51e276: /* 51e276: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51e278: mov ecx, edi */
  ecx = edi;
/* 51e27a: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 51e27d: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 51e280: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51e285u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51e285: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 51e288: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51e28a: je 0x51e29c */
  if (zf) goto L_51e29c;
L_51e28c: /* 51e28c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 51e28e: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 51e291: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51e292: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51e293: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51e294: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x51e299u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 51e299: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_51e29c: /* 51e29c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51e29d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51e29e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51e29f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51e2e0(void) {
  LOAD_REGS();
L_51e2e0: /* 51e2e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51e2e2: push 0x557360 */
  { uint32_t v = 0x557360u; esp -= 4; W32(esp, v); }
/* 51e2e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51e2ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e2ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51e2f5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51e2f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51e2f9: xor esi, esi */
  esi = 0;
/* 51e2fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51e2fc: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 51e300: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 51e304: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 51e308: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 51e30c: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 51e30f: movzx edi, byte ptr [edx] */
  edi = (uint32_t)(R8((uint32_t)(edx)));
/* 51e312: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51e315: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51e316: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 51e319: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 51e31d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51e31e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e31f: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 51e323: call dword ptr [edi*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edi*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51e32au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51e32a: cmp dword ptr [esp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51e32e: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 51e332: jne 0x51e339 */
  if (!zf) goto L_51e339;
L_51e334: /* 51e334: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_51e339: /* 51e339: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e33a: call 0x4e3fe9 */
  esp -= 4; W32(esp, 0x51e33fu); SPILL(); f_4e3fe9(); if (g_unwind) return; RELOAD();
/* 51e33f: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 51e343: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51e346: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 51e348: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51e34a: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51e34e: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
/* 51e356: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 51e35a: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 51e35e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51e363u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51e363: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51e367: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* 51e36f: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51e374u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51e374: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 51e378: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51e379: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51e37a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51e381: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51e384: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51e3c0(void) {
  LOAD_REGS();
L_51e3c0: /* 51e3c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51e3c2: push 0x557380 */
  { uint32_t v = 0x557380u; esp -= 4; W32(esp, v); }
/* 51e3c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51e3cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e3ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51e3d5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51e3d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51e3d9: xor esi, esi */
  esi = 0;
/* 51e3db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51e3dc: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 51e3e0: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 51e3e4: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 51e3e8: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 51e3ec: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 51e3ef: movzx edi, byte ptr [edx] */
  edi = (uint32_t)(R8((uint32_t)(edx)));
/* 51e3f2: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51e3f5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51e3f6: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 51e3f9: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 51e3fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51e3fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e3ff: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 51e403: call dword ptr [edi*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edi*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51e40au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51e40a: cmp dword ptr [esp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51e40e: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 51e412: jne 0x51e419 */
  if (!zf) goto L_51e419;
L_51e414: /* 51e414: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_51e419: /* 51e419: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e41a: call 0x4e3fe9 */
  esp -= 4; W32(esp, 0x51e41fu); SPILL(); f_4e3fe9(); if (g_unwind) return; RELOAD();
/* 51e41f: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 51e423: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51e426: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 51e428: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51e42a: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51e42e: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
/* 51e436: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 51e43a: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 51e43e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51e443u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51e443: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51e447: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* 51e44f: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51e454u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51e454: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 51e458: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51e459: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51e45a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51e461: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51e464: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51e4a0(void) {
  LOAD_REGS();
L_51e4a0: /* 51e4a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51e4a2: push 0x5573a0 */
  { uint32_t v = 0x5573a0u; esp -= 4; W32(esp, v); }
/* 51e4a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51e4ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e4ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51e4b5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51e4b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51e4b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51e4ba: xor edi, edi */
  edi = 0;
/* 51e4bc: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 51e4c0: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 51e4c4: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 51e4c8: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 51e4cc: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 51e4cf: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 51e4d2: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51e4d5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51e4d6: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 51e4d9: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 51e4dd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51e4de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e4df: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 51e4e3: call dword ptr [esi*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(esi*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51e4eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51e4ea: cmp dword ptr [esp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51e4ee: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 51e4f2: jne 0x51e4f9 */
  if (!zf) goto L_51e4f9;
L_51e4f4: /* 51e4f4: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_51e4f9: /* 51e4f9: push 0x5a6228 */
  { uint32_t v = 0x5a6228u; esp -= 4; W32(esp, v); }
/* 51e4fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e4ff: call 0x4e26df */
  esp -= 4; W32(esp, 0x51e504u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 51e504: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51e507: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51e509: je 0x51e5a0 */
  if (zf) goto L_51e5a0;
L_51e50f: /* 51e50f: cmp dword ptr [esp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51e513: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 51e517: jne 0x51e51e */
  if (!zf) goto L_51e51e;
L_51e519: /* 51e519: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_51e51e: /* 51e51e: push 0x5a0da8 */
  { uint32_t v = 0x5a0da8u; esp -= 4; W32(esp, v); }
/* 51e523: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e524: call 0x4e26df */
  esp -= 4; W32(esp, 0x51e529u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 51e529: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51e52c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51e52e: je 0x51e5a0 */
  if (zf) goto L_51e5a0;
L_51e530: /* 51e530: cmp dword ptr [esp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51e534: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 51e538: jne 0x51e53f */
  if (!zf) goto L_51e53f;
L_51e53a: /* 51e53a: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_51e53f: /* 51e53f: push 0x5a6234 */
  { uint32_t v = 0x5a6234u; esp -= 4; W32(esp, v); }
/* 51e544: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e545: call 0x4e26df */
  esp -= 4; W32(esp, 0x51e54au); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 51e54a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51e54d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51e54f: je 0x51e598 */
  if (zf) goto L_51e598;
L_51e551: /* 51e551: cmp dword ptr [esp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51e555: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 51e559: jne 0x51e560 */
  if (!zf) goto L_51e560;
L_51e55b: /* 51e55b: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_51e560: /* 51e560: push 0x5a0e28 */
  { uint32_t v = 0x5a0e28u; esp -= 4; W32(esp, v); }
/* 51e565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e566: call 0x4e26df */
  esp -= 4; W32(esp, 0x51e56bu); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 51e56b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51e56e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51e570: je 0x51e598 */
  if (zf) goto L_51e598;
L_51e572: /* 51e572: cmp dword ptr [esp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51e576: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 51e57a: jne 0x51e581 */
  if (!zf) goto L_51e581;
L_51e57c: /* 51e57c: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_51e581: /* 51e581: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e582: call 0x4e3fe9 */
  esp -= 4; W32(esp, 0x51e587u); SPILL(); f_4e3fe9(); if (g_unwind) return; RELOAD();
/* 51e587: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 51e58b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51e58e: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 51e590: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 51e592: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 51e594: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 51e596: jmp 0x51e5aa */
  goto L_51e5aa;
L_51e598: /* 51e598: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 51e59c: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 51e59e: jmp 0x51e5aa */
  goto L_51e5aa;
L_51e5a0: /* 51e5a0: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 51e5a4: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
L_51e5aa: /* 51e5aa: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51e5ac: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51e5b0: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
/* 51e5b8: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 51e5bc: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 51e5c0: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51e5c5u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51e5c5: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51e5c9: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* 51e5d1: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51e5d6u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51e5d6: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 51e5da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51e5db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51e5dc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51e5e3: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51e5e6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51e650(void) {
  LOAD_REGS();
L_51e650: /* 51e650: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51e652: push 0x5573c0 */
  { uint32_t v = 0x5573c0u; esp -= 4; W32(esp, v); }
/* 51e657: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51e65d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e65e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51e665: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51e668: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51e669: xor esi, esi */
  esi = 0;
/* 51e66b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51e66c: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 51e670: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 51e674: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 51e678: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 51e67c: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 51e67f: movzx edi, byte ptr [edx] */
  edi = (uint32_t)(R8((uint32_t)(edx)));
/* 51e682: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51e685: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51e686: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 51e689: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 51e68d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51e68e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e68f: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 51e693: call dword ptr [edi*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edi*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51e69au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51e69a: cmp dword ptr [esp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51e69e: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 51e6a2: jne 0x51e6a9 */
  if (!zf) goto L_51e6a9;
L_51e6a4: /* 51e6a4: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_51e6a9: /* 51e6a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e6aa: call 0x4e3d69 */
  esp -= 4; W32(esp, 0x51e6afu); SPILL(); f_4e3d69(); if (g_unwind) return; RELOAD();
/* 51e6af: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 51e6b3: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 51e6b5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51e6b8: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51e6ba: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51e6be: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
/* 51e6c6: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 51e6ca: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 51e6ce: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51e6d3u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51e6d3: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51e6d7: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* 51e6df: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51e6e4u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51e6e4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 51e6e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51e6e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51e6ea: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51e6f1: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51e6f4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51e730(void) {
  LOAD_REGS();
L_51e730: /* 51e730: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51e732: push 0x5573e0 */
  { uint32_t v = 0x5573e0u; esp -= 4; W32(esp, v); }
/* 51e737: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51e73d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e73e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51e745: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51e748: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51e749: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51e74a: xor edi, edi */
  edi = 0;
/* 51e74c: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 51e750: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 51e754: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 51e758: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 51e75c: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 51e75f: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 51e762: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51e765: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51e766: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 51e769: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 51e76d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51e76e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e76f: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 51e773: call dword ptr [esi*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(esi*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51e77au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51e77a: cmp dword ptr [esp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51e77e: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 51e782: jne 0x51e789 */
  if (!zf) goto L_51e789;
L_51e784: /* 51e784: mov esi, 0x5ed66c */
  esi = 0x5ed66cu;
L_51e789: /* 51e789: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51e78a: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 51e792: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 51e79a: call 0x4e3d69 */
  esp -= 4; W32(esp, 0x51e79fu); SPILL(); f_4e3d69(); if (g_unwind) return; RELOAD();
/* 51e79f: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 51e7a3: push 0x5a638c */
  { uint32_t v = 0x5a638cu; esp -= 4; W32(esp, v); }
/* 51e7a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51e7a9: call 0x4e2220 */
  esp -= 4; W32(esp, 0x51e7aeu); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 51e7ae: mov esi, eax */
  esi = eax;
/* 51e7b0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51e7b3: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51e7b5: je 0x51e7e6 */
  if (zf) goto L_51e7e6;
L_51e7b7: /* 51e7b7: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 51e7ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51e7bb: call 0x4e3d69 */
  esp -= 4; W32(esp, 0x51e7c0u); SPILL(); f_4e3d69(); if (g_unwind) return; RELOAD();
/* 51e7c0: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 51e7c4: push 0x5a6390 */
  { uint32_t v = 0x5a6390u; esp -= 4; W32(esp, v); }
/* 51e7c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51e7ca: call 0x4e2220 */
  esp -= 4; W32(esp, 0x51e7cfu); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 51e7cf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51e7d2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51e7d4: je 0x51e7e6 */
  if (zf) goto L_51e7e6;
L_51e7d6: /* 51e7d6: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 51e7d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e7da: call 0x4e3d69 */
  esp -= 4; W32(esp, 0x51e7dfu); SPILL(); f_4e3d69(); if (g_unwind) return; RELOAD();
/* 51e7df: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 51e7e3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_51e7e6: /* 51e7e6: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 51e7ea: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 51e7ee: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 51e7f2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 51e7f4: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 51e7f8: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 51e7fb: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 51e7fe: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51e800: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51e804: mov dword ptr [esp + 0x2c], 1 */
  W32((uint32_t)(esp + 0x2cu), 0x1u);
/* 51e80c: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 51e810: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 51e814: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51e819u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51e819: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51e81d: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 51e825: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51e82au); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51e82a: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 51e82e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51e82f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51e830: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51e837: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51e83a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51e890(void) {
  LOAD_REGS();
L_51e890: /* 51e890: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51e892: push 0x557400 */
  { uint32_t v = 0x557400u; esp -= 4; W32(esp, v); }
/* 51e897: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51e89d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e89e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51e8a5: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51e8a8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51e8a9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 51e8aa: xor ebp, ebp */
  ebp = 0;
/* 51e8ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51e8ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51e8ae: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 51e8b2: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 51e8b6: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 51e8ba: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 51e8be: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 51e8c1: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 51e8c4: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51e8c7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51e8c8: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 51e8cb: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 51e8cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51e8d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e8d1: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* 51e8d5: call dword ptr [esi*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(esi*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51e8dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51e8dc: cmp dword ptr [esp + 0x14], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51e8e0: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 51e8e4: jne 0x51e8eb */
  if (!zf) goto L_51e8eb;
L_51e8e6: /* 51e8e6: mov esi, 0x5ed66c */
  esi = 0x5ed66cu;
L_51e8eb: /* 51e8eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51e8ec: xor edi, edi */
  edi = 0;
/* 51e8ee: xor ebx, ebx */
  ebx = 0;
/* 51e8f0: call 0x4e3fe9 */
  esp -= 4; W32(esp, 0x51e8f5u); SPILL(); f_4e3fe9(); if (g_unwind) return; RELOAD();
/* 51e8f5: push 0x5a6398 */
  { uint32_t v = 0x5a6398u; esp -= 4; W32(esp, v); }
/* 51e8fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51e8fb: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 51e8ff: call 0x4e2220 */
  esp -= 4; W32(esp, 0x51e904u); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 51e904: mov esi, eax */
  esi = eax;
/* 51e906: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51e909: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51e90b: je 0x51e938 */
  if (zf) goto L_51e938;
L_51e90d: /* 51e90d: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 51e910: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51e911: call 0x4e3fe9 */
  esp -= 4; W32(esp, 0x51e916u); SPILL(); f_4e3fe9(); if (g_unwind) return; RELOAD();
/* 51e916: push 0x5a639c */
  { uint32_t v = 0x5a639cu; esp -= 4; W32(esp, v); }
/* 51e91b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51e91c: mov edi, eax */
  edi = eax;
/* 51e91e: call 0x4e2220 */
  esp -= 4; W32(esp, 0x51e923u); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 51e923: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51e926: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51e928: je 0x51e938 */
  if (zf) goto L_51e938;
L_51e92a: /* 51e92a: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 51e92d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e92e: call 0x4e3fe9 */
  esp -= 4; W32(esp, 0x51e933u); SPILL(); f_4e3fe9(); if (g_unwind) return; RELOAD();
/* 51e933: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51e936: mov ebx, eax */
  ebx = eax;
L_51e938: /* 51e938: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 51e93c: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 51e940: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 51e942: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 51e945: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 51e948: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51e94a: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 51e94e: mov dword ptr [esp + 0x34], 1 */
  W32((uint32_t)(esp + 0x34u), 0x1u);
/* 51e956: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 51e95a: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* 51e95e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51e963u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51e963: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 51e967: mov dword ptr [esp + 0x30], 0xffffffff */
  W32((uint32_t)(esp + 0x30u), 0xffffffffu);
/* 51e96f: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51e974u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51e974: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 51e978: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51e979: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51e97a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51e97b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51e97c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51e983: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51e986: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51e9d0(void) {
  LOAD_REGS();
L_51e9d0: /* 51e9d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51e9d2: push 0x557420 */
  { uint32_t v = 0x557420u; esp -= 4; W32(esp, v); }
/* 51e9d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51e9dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51e9de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51e9e5: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51e9e8: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 51e9ec: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 51e9ef: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51e9f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51e9f3: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 51e9f6: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51e9f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51e9f8: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 51e9fb: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 51e9ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51ea00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51ea01: call dword ptr [esi*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(esi*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51ea08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51ea08: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51ea0b: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 51ea0f: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 51ea13: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 51ea17: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 51ea1b: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 51ea1f: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 51ea23: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 51ea26: push 0x5a63a8 */
  { uint32_t v = 0x5a63a8u; esp -= 4; W32(esp, v); }
/* 51ea2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51ea2c: call 0x4e17e4 */
  esp -= 4; W32(esp, 0x51ea31u); SPILL(); f_4e17e4(); if (g_unwind) return; RELOAD();
/* 51ea31: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51ea34: mov edi, eax */
  edi = eax;
/* 51ea36: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 51ea3a: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51ea3c: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 51ea44: je 0x51ea7f */
  if (zf) goto L_51ea7f;
L_51ea46: /* 51ea46: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 51ea49: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51ea4b: mov ecx, esi */
  ecx = esi;
/* 51ea4d: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 51ea50: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 51ea53: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51ea58u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51ea58: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 51ea5b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51ea5d: je 0x51ea7f */
  if (zf) goto L_51ea7f;
L_51ea5f: /* 51ea5f: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 51ea62: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51ea64: je 0x51ea6a */
  if (zf) goto L_51ea6a;
L_51ea66: /* 51ea66: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 51ea68: jmp 0x51ea6f */
  goto L_51ea6f;
L_51ea6a: /* 51ea6a: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
L_51ea6f: /* 51ea6f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 51ea71: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 51ea74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51ea75: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51ea76: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51ea77: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x51ea7cu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 51ea7c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_51ea7f: /* 51ea7f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51ea81: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51ea85: mov dword ptr [esp + 0x2c], 1 */
  W32((uint32_t)(esp + 0x2cu), 0x1u);
/* 51ea8d: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 51ea95: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 51ea9d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51eaa2u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51eaa2: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51eaa6: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 51eaae: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51eab3u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51eab3: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 51eab7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51eab8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51eab9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51eac0: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51eac3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51eb10(void) {
  LOAD_REGS();
L_51eb10: /* 51eb10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51eb12: push 0x557440 */
  { uint32_t v = 0x557440u; esp -= 4; W32(esp, v); }
/* 51eb17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51eb1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51eb1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51eb25: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51eb28: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 51eb2c: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 51eb2f: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51eb32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51eb33: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 51eb36: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51eb37: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51eb38: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 51eb3b: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 51eb3f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51eb40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51eb41: call dword ptr [esi*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(esi*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51eb48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51eb48: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 51eb4c: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 51eb50: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 51eb54: and eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 51eb59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51eb5a: and ecx, 0xffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 51eb60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51eb61: and edx, 0xffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 51eb67: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51eb68: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 51eb6c: push 0x5a63d8 */
  { uint32_t v = 0x5a63d8u; esp -= 4; W32(esp, v); }
/* 51eb71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51eb72: call 0x4e17e4 */
  esp -= 4; W32(esp, 0x51eb77u); SPILL(); f_4e17e4(); if (g_unwind) return; RELOAD();
/* 51eb77: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51eb7a: mov edi, eax */
  edi = eax;
/* 51eb7c: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 51eb80: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51eb82: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 51eb8a: je 0x51ebc5 */
  if (zf) goto L_51ebc5;
L_51eb8c: /* 51eb8c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 51eb8f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51eb91: mov ecx, esi */
  ecx = esi;
/* 51eb93: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 51eb96: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 51eb99: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51eb9eu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51eb9e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 51eba1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51eba3: je 0x51ebc5 */
  if (zf) goto L_51ebc5;
L_51eba5: /* 51eba5: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 51eba8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51ebaa: je 0x51ebb0 */
  if (zf) goto L_51ebb0;
L_51ebac: /* 51ebac: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 51ebae: jmp 0x51ebb5 */
  goto L_51ebb5;
L_51ebb0: /* 51ebb0: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
L_51ebb5: /* 51ebb5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 51ebb7: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 51ebba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51ebbb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51ebbc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51ebbd: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x51ebc2u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 51ebc2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_51ebc5: /* 51ebc5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51ebc7: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51ebcb: mov dword ptr [esp + 0x2c], 1 */
  W32((uint32_t)(esp + 0x2cu), 0x1u);
/* 51ebd3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 51ebdb: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 51ebe3: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51ebe8u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51ebe8: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51ebec: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 51ebf4: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51ebf9u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51ebf9: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 51ebfd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51ebfe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51ebff: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51ec06: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51ec09: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51ec50(void) {
  LOAD_REGS();
L_51ec50: /* 51ec50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51ec52: push 0x557460 */
  { uint32_t v = 0x557460u; esp -= 4; W32(esp, v); }
/* 51ec57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51ec5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51ec5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51ec65: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51ec68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51ec69: xor esi, esi */
  esi = 0;
/* 51ec6b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51ec6c: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 51ec70: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 51ec74: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 51ec78: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 51ec7c: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 51ec7f: movzx edi, byte ptr [edx] */
  edi = (uint32_t)(R8((uint32_t)(edx)));
/* 51ec82: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51ec83: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 51ec86: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 51ec8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51ec8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51ec8c: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 51ec90: call dword ptr [edi*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edi*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51ec97u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51ec97: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51ec99: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51ec9d: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
/* 51eca5: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 51eca9: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 51ecad: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51ecb2u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51ecb2: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51ecb6: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* 51ecbe: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51ecc3u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51ecc3: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 51ecc7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51ecc8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51ecc9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51ecd0: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51ecd3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51ed10(void) {
  LOAD_REGS();
L_51ed10: /* 51ed10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51ed12: push 0x5574a0 */
  { uint32_t v = 0x5574a0u; esp -= 4; W32(esp, v); }
/* 51ed17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51ed1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51ed1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51ed25: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51ed28: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51ed29: xor ebx, ebx */
  ebx = 0;
/* 51ed2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51ed2c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51ed2d: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 51ed31: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 51ed35: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 51ed39: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 51ed3d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51ed40: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51ed43: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51ed46: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51ed47: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51ed4a: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 51ed4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51ed4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51ed50: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 51ed54: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51ed5bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51ed5b: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 51ed5f: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 51ed63: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 51ed67: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51ed6a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51ed6d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51ed70: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51ed71: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51ed74: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 51ed78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51ed79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51ed7a: mov byte ptr [esp + 0x40], 1 */
  W8((uint32_t)(esp + 0x40u), 0x1u);
/* 51ed7f: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51ed86u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51ed86: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51ed89: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51ed8a: mov eax, edx */
  eax = edx;
/* 51ed8c: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51ed8f: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51ed92: jne 0x51eda3 */
  if (!zf) goto L_51eda3;
L_51ed94: /* 51ed94: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51ed97: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51ed98: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51ed99: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51ed9a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51ed9d: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51eda3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51eda3: /* 51eda3: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51eda7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51eda8: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 51edac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51edad: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 51edb1: call 0x4e4282 */
  esp -= 4; W32(esp, 0x51edb6u); SPILL(); f_4e4282(); if (g_unwind) return; RELOAD();
/* 51edb6: mov edi, eax */
  edi = eax;
/* 51edb8: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 51edbc: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51edbe: mov byte ptr [esp + 0x38], 2 */
  W8((uint32_t)(esp + 0x38u), 0x2u);
/* 51edc3: je 0x51edfb */
  if (zf) goto L_51edfb;
L_51edc5: /* 51edc5: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 51edc8: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51edca: mov ecx, esi */
  ecx = esi;
/* 51edcc: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 51edcf: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 51edd2: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51edd7u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51edd7: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 51edda: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51eddc: je 0x51edfb */
  if (zf) goto L_51edfb;
L_51edde: /* 51edde: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51ede1: je 0x51ede7 */
  if (zf) goto L_51ede7;
L_51ede3: /* 51ede3: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 51ede5: jmp 0x51edec */
  goto L_51edec;
L_51ede7: /* 51ede7: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
L_51edec: /* 51edec: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 51edee: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 51edf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51edf1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51edf2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51edf3: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x51edf8u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 51edf8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_51edfb: /* 51edfb: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51edfd: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 51ee01: mov byte ptr [esp + 0x3c], 3 */
  W8((uint32_t)(esp + 0x3cu), 0x3u);
/* 51ee06: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 51ee0a: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 51ee0e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51ee13u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51ee13: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 51ee17: mov byte ptr [esp + 0x38], 1 */
  W8((uint32_t)(esp + 0x38u), 0x1u);
/* 51ee1c: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51ee21u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51ee21: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51ee23: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 51ee27: mov byte ptr [esp + 0x3c], 4 */
  W8((uint32_t)(esp + 0x3cu), 0x4u);
/* 51ee2c: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 51ee30: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 51ee34: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51ee39u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51ee39: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51ee3d: mov byte ptr [esp + 0x38], bl */
  W8((uint32_t)(esp + 0x38u), (ebx & 0xffu));
/* 51ee41: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51ee46u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51ee46: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51ee48: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 51ee4c: mov dword ptr [esp + 0x3c], 5 */
  W32((uint32_t)(esp + 0x3cu), 0x5u);
/* 51ee54: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 51ee58: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 51ee5c: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51ee61u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51ee61: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 51ee65: mov dword ptr [esp + 0x38], 0xffffffff */
  W32((uint32_t)(esp + 0x38u), 0xffffffffu);
/* 51ee6d: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51ee72u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51ee72: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 51ee76: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51ee77: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51ee78: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51ee79: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51ee80: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51ee83: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51eef0(void) {
  LOAD_REGS();
L_51eef0: /* 51eef0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51eef2: push 0x557500 */
  { uint32_t v = 0x557500u; esp -= 4; W32(esp, v); }
/* 51eef7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51eefd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51eefe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51ef05: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51ef08: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51ef09: xor ebx, ebx */
  ebx = 0;
/* 51ef0b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51ef0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51ef0d: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 51ef11: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 51ef15: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 51ef19: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* 51ef1d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51ef20: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51ef23: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51ef26: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51ef27: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51ef2a: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 51ef2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51ef2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51ef30: mov dword ptr [esp + 0x4c], ebx */
  W32((uint32_t)(esp + 0x4cu), ebx);
/* 51ef34: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51ef3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51ef3b: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 51ef3f: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 51ef43: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 51ef47: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51ef4a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51ef4d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51ef50: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51ef51: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51ef54: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 51ef58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51ef59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51ef5a: mov byte ptr [esp + 0x4c], 1 */
  W8((uint32_t)(esp + 0x4cu), 0x1u);
/* 51ef5f: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51ef66u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51ef66: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51ef69: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51ef6a: mov eax, edx */
  eax = edx;
/* 51ef6c: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51ef6f: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51ef72: jne 0x51ef83 */
  if (!zf) goto L_51ef83;
L_51ef74: /* 51ef74: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51ef77: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51ef78: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51ef79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51ef7a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51ef7d: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51ef83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51ef83: /* 51ef83: push 0x5a64d8 */
  { uint32_t v = 0x5a64d8u; esp -= 4; W32(esp, v); }
/* 51ef88: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 51ef8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51ef8d: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 51ef91: call 0x4e2149 */
  esp -= 4; W32(esp, 0x51ef96u); SPILL(); f_4e2149(); if (g_unwind) return; RELOAD();
/* 51ef96: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 51ef9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51ef9b: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 51ef9f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51efa0: mov ecx, eax */
  ecx = eax;
/* 51efa2: mov byte ptr [esp + 0x4c], 2 */
  W8((uint32_t)(esp + 0x4cu), 0x2u);
/* 51efa7: call 0x4e4282 */
  esp -= 4; W32(esp, 0x51efacu); SPILL(); f_4e4282(); if (g_unwind) return; RELOAD();
/* 51efac: mov edi, eax */
  edi = eax;
/* 51efae: mov esi, dword ptr [esp + 0x50] */
  esi = R32((uint32_t)(esp + 0x50u));
/* 51efb2: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51efb4: mov byte ptr [esp + 0x44], 3 */
  W8((uint32_t)(esp + 0x44u), 0x3u);
/* 51efb9: je 0x51eff2 */
  if (zf) goto L_51eff2;
L_51efbb: /* 51efbb: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 51efbe: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51efc0: mov ecx, esi */
  ecx = esi;
/* 51efc2: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 51efc5: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 51efc8: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51efcdu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51efcd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 51efd0: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51efd2: je 0x51eff2 */
  if (zf) goto L_51eff2;
L_51efd4: /* 51efd4: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51efd7: je 0x51efdd */
  if (zf) goto L_51efdd;
L_51efd9: /* 51efd9: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 51efdb: jmp 0x51efe2 */
  goto L_51efe2;
L_51efdd: /* 51efdd: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
L_51efe2: /* 51efe2: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 51efe5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 51efe7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51efe8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51efe9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51efea: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x51efefu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 51efef: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_51eff2: /* 51eff2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51eff4: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 51eff8: mov byte ptr [esp + 0x48], 4 */
  W8((uint32_t)(esp + 0x48u), 0x4u);
/* 51effd: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 51f001: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 51f005: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51f00au); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51f00a: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 51f00e: mov byte ptr [esp + 0x44], 2 */
  W8((uint32_t)(esp + 0x44u), 0x2u);
/* 51f013: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51f018u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51f018: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51f01a: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 51f01e: mov byte ptr [esp + 0x48], 5 */
  W8((uint32_t)(esp + 0x48u), 0x5u);
/* 51f023: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 51f027: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 51f02b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51f030u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51f030: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 51f034: mov byte ptr [esp + 0x44], 1 */
  W8((uint32_t)(esp + 0x44u), 0x1u);
/* 51f039: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51f03eu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51f03e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51f040: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 51f044: mov byte ptr [esp + 0x48], 6 */
  W8((uint32_t)(esp + 0x48u), 0x6u);
/* 51f049: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 51f04d: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 51f051: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51f056u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51f056: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51f05a: mov byte ptr [esp + 0x44], bl */
  W8((uint32_t)(esp + 0x44u), (ebx & 0xffu));
/* 51f05e: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51f063u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51f063: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51f065: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 51f069: mov dword ptr [esp + 0x48], 7 */
  W32((uint32_t)(esp + 0x48u), 0x7u);
/* 51f071: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 51f075: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 51f079: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51f07eu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51f07e: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 51f082: mov dword ptr [esp + 0x44], 0xffffffff */
  W32((uint32_t)(esp + 0x44u), 0xffffffffu);
/* 51f08a: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51f08fu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51f08f: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 51f093: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51f094: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51f095: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51f096: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51f09d: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51f0a0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51f120(void) {
  LOAD_REGS();
L_51f120: /* 51f120: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51f122: push 0x557540 */
  { uint32_t v = 0x557540u; esp -= 4; W32(esp, v); }
/* 51f127: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51f12d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51f12e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51f135: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51f138: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51f139: xor ebx, ebx */
  ebx = 0;
/* 51f13b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51f13c: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 51f140: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 51f144: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 51f148: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 51f14c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51f14f: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51f152: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51f155: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51f156: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51f159: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 51f15d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51f15e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51f15f: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 51f163: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51f16au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51f16a: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* 51f16e: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 51f172: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 51f176: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51f179: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51f17c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51f17f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51f180: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51f183: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 51f187: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51f188: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51f189: mov byte ptr [esp + 0x30], 1 */
  W8((uint32_t)(esp + 0x30u), 0x1u);
/* 51f18e: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51f195u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51f195: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51f198: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51f199: mov eax, edx */
  eax = edx;
/* 51f19b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51f19e: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51f1a1: jne 0x51f1b2 */
  if (!zf) goto L_51f1b2;
L_51f1a3: /* 51f1a3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51f1a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51f1a7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51f1a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51f1a9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51f1ac: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51f1b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51f1b2: /* 51f1b2: cmp dword ptr [esp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51f1b6: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 51f1ba: jne 0x51f1c1 */
  if (!zf) goto L_51f1c1;
L_51f1bc: /* 51f1bc: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_51f1c1: /* 51f1c1: cmp dword ptr [esp + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51f1c5: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 51f1c9: jne 0x51f1d0 */
  if (!zf) goto L_51f1d0;
L_51f1cb: /* 51f1cb: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_51f1d0: /* 51f1d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51f1d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51f1d2: call 0x4e4192 */
  esp -= 4; W32(esp, 0x51f1d7u); SPILL(); f_4e4192(); if (g_unwind) return; RELOAD();
/* 51f1d7: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 51f1db: xor ecx, ecx */
  ecx = 0;
/* 51f1dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51f1e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 51f1e2: setl cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 51f1e5: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 51f1e7: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51f1e9: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51f1ed: mov byte ptr [esp + 0x2c], 2 */
  W8((uint32_t)(esp + 0x2cu), 0x2u);
/* 51f1f2: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 51f1f6: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 51f1fa: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51f1ffu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51f1ff: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51f203: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 51f207: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51f20cu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51f20c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51f20e: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 51f212: mov dword ptr [esp + 0x2c], 3 */
  W32((uint32_t)(esp + 0x2cu), 0x3u);
/* 51f21a: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 51f21e: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 51f222: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51f227u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51f227: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 51f22b: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 51f233: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51f238u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51f238: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 51f23c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51f23d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51f23e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51f245: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51f248: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51f2a0(void) {
  LOAD_REGS();
L_51f2a0: /* 51f2a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51f2a2: push 0x557580 */
  { uint32_t v = 0x557580u; esp -= 4; W32(esp, v); }
/* 51f2a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51f2ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51f2ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51f2b5: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51f2b8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51f2b9: xor ebx, ebx */
  ebx = 0;
/* 51f2bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51f2bc: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 51f2c0: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 51f2c4: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 51f2c8: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 51f2cc: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51f2cf: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51f2d2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51f2d5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51f2d6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51f2d9: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 51f2dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51f2de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51f2df: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 51f2e3: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51f2eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51f2ea: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* 51f2ee: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 51f2f2: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 51f2f6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51f2f9: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51f2fc: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51f2ff: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51f300: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51f303: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 51f307: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51f308: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51f309: mov byte ptr [esp + 0x30], 1 */
  W8((uint32_t)(esp + 0x30u), 0x1u);
/* 51f30e: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51f315u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51f315: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51f318: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51f319: mov eax, edx */
  eax = edx;
/* 51f31b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51f31e: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51f321: jne 0x51f332 */
  if (!zf) goto L_51f332;
L_51f323: /* 51f323: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51f326: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51f327: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51f328: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51f329: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51f32c: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51f332u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51f332: /* 51f332: cmp dword ptr [esp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51f336: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 51f33a: jne 0x51f341 */
  if (!zf) goto L_51f341;
L_51f33c: /* 51f33c: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_51f341: /* 51f341: cmp dword ptr [esp + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51f345: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 51f349: jne 0x51f350 */
  if (!zf) goto L_51f350;
L_51f34b: /* 51f34b: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_51f350: /* 51f350: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51f351: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51f352: call 0x4e4192 */
  esp -= 4; W32(esp, 0x51f357u); SPILL(); f_4e4192(); if (g_unwind) return; RELOAD();
/* 51f357: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 51f35b: xor ecx, ecx */
  ecx = 0;
/* 51f35d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51f360: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 51f362: setg cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 51f365: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 51f367: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51f369: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51f36d: mov byte ptr [esp + 0x2c], 2 */
  W8((uint32_t)(esp + 0x2cu), 0x2u);
/* 51f372: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 51f376: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 51f37a: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51f37fu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51f37f: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51f383: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 51f387: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51f38cu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51f38c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51f38e: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 51f392: mov dword ptr [esp + 0x2c], 3 */
  W32((uint32_t)(esp + 0x2cu), 0x3u);
/* 51f39a: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 51f39e: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 51f3a2: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51f3a7u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51f3a7: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 51f3ab: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 51f3b3: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51f3b8u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51f3b8: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 51f3bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51f3bd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51f3be: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51f3c5: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51f3c8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51f420(void) {
  LOAD_REGS();
L_51f420: /* 51f420: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51f422: push 0x5575c0 */
  { uint32_t v = 0x5575c0u; esp -= 4; W32(esp, v); }
/* 51f427: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51f42d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51f42e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51f435: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51f438: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51f439: xor ebx, ebx */
  ebx = 0;
/* 51f43b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51f43c: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 51f440: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 51f444: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 51f448: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 51f44c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51f44f: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51f452: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51f455: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51f456: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51f459: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 51f45d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51f45e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51f45f: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 51f463: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51f46au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51f46a: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* 51f46e: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 51f472: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 51f476: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51f479: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51f47c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51f47f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51f480: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51f483: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 51f487: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51f488: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51f489: mov byte ptr [esp + 0x30], 1 */
  W8((uint32_t)(esp + 0x30u), 0x1u);
/* 51f48e: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51f495u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51f495: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51f498: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51f499: mov eax, edx */
  eax = edx;
/* 51f49b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51f49e: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51f4a1: jne 0x51f4b2 */
  if (!zf) goto L_51f4b2;
L_51f4a3: /* 51f4a3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51f4a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51f4a7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51f4a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51f4a9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51f4ac: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51f4b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51f4b2: /* 51f4b2: cmp dword ptr [esp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51f4b6: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 51f4ba: jne 0x51f4c1 */
  if (!zf) goto L_51f4c1;
L_51f4bc: /* 51f4bc: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_51f4c1: /* 51f4c1: cmp dword ptr [esp + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51f4c5: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 51f4c9: jne 0x51f4d0 */
  if (!zf) goto L_51f4d0;
L_51f4cb: /* 51f4cb: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_51f4d0: /* 51f4d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51f4d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51f4d2: call 0x4e4192 */
  esp -= 4; W32(esp, 0x51f4d7u); SPILL(); f_4e4192(); if (g_unwind) return; RELOAD();
/* 51f4d7: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 51f4db: xor ecx, ecx */
  ecx = 0;
/* 51f4dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51f4e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 51f4e2: setle cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 51f4e5: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 51f4e7: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51f4e9: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51f4ed: mov byte ptr [esp + 0x2c], 2 */
  W8((uint32_t)(esp + 0x2cu), 0x2u);
/* 51f4f2: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 51f4f6: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 51f4fa: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51f4ffu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51f4ff: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51f503: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 51f507: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51f50cu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51f50c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51f50e: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 51f512: mov dword ptr [esp + 0x2c], 3 */
  W32((uint32_t)(esp + 0x2cu), 0x3u);
/* 51f51a: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 51f51e: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 51f522: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51f527u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51f527: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 51f52b: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 51f533: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51f538u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51f538: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 51f53c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51f53d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51f53e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51f545: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51f548: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51f5a0(void) {
  LOAD_REGS();
L_51f5a0: /* 51f5a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51f5a2: push 0x557600 */
  { uint32_t v = 0x557600u; esp -= 4; W32(esp, v); }
/* 51f5a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51f5ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51f5ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51f5b5: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51f5b8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51f5b9: xor ebx, ebx */
  ebx = 0;
/* 51f5bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51f5bc: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 51f5c0: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 51f5c4: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 51f5c8: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 51f5cc: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51f5cf: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51f5d2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51f5d5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51f5d6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51f5d9: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 51f5dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51f5de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51f5df: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 51f5e3: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51f5eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51f5ea: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* 51f5ee: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 51f5f2: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 51f5f6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51f5f9: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51f5fc: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51f5ff: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51f600: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51f603: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 51f607: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51f608: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51f609: mov byte ptr [esp + 0x30], 1 */
  W8((uint32_t)(esp + 0x30u), 0x1u);
/* 51f60e: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51f615u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51f615: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51f618: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51f619: mov eax, edx */
  eax = edx;
/* 51f61b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51f61e: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51f621: jne 0x51f632 */
  if (!zf) goto L_51f632;
L_51f623: /* 51f623: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51f626: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51f627: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51f628: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51f629: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51f62c: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51f632u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51f632: /* 51f632: cmp dword ptr [esp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51f636: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 51f63a: jne 0x51f641 */
  if (!zf) goto L_51f641;
L_51f63c: /* 51f63c: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_51f641: /* 51f641: cmp dword ptr [esp + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51f645: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 51f649: jne 0x51f650 */
  if (!zf) goto L_51f650;
L_51f64b: /* 51f64b: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_51f650: /* 51f650: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51f651: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51f652: call 0x4e4192 */
  esp -= 4; W32(esp, 0x51f657u); SPILL(); f_4e4192(); if (g_unwind) return; RELOAD();
/* 51f657: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 51f65b: xor ecx, ecx */
  ecx = 0;
/* 51f65d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51f660: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 51f662: setge cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* 51f665: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 51f667: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51f669: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51f66d: mov byte ptr [esp + 0x2c], 2 */
  W8((uint32_t)(esp + 0x2cu), 0x2u);
/* 51f672: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 51f676: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 51f67a: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51f67fu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51f67f: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51f683: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 51f687: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51f68cu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51f68c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51f68e: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 51f692: mov dword ptr [esp + 0x2c], 3 */
  W32((uint32_t)(esp + 0x2cu), 0x3u);
/* 51f69a: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 51f69e: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 51f6a2: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51f6a7u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51f6a7: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 51f6ab: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 51f6b3: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51f6b8u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51f6b8: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 51f6bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51f6bd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51f6be: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51f6c5: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51f6c8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51f720(void) {
  LOAD_REGS();
L_51f720: /* 51f720: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51f722: push 0x557640 */
  { uint32_t v = 0x557640u; esp -= 4; W32(esp, v); }
/* 51f727: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51f72d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51f72e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51f735: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51f738: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51f739: xor ebx, ebx */
  ebx = 0;
/* 51f73b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51f73c: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 51f740: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 51f744: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 51f748: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 51f74c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51f74f: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51f752: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51f755: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51f756: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51f759: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 51f75d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51f75e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51f75f: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 51f763: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51f76au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51f76a: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* 51f76e: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 51f772: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 51f776: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51f779: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51f77c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51f77f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51f780: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51f783: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 51f787: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51f788: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51f789: mov byte ptr [esp + 0x30], 1 */
  W8((uint32_t)(esp + 0x30u), 0x1u);
/* 51f78e: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51f795u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51f795: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51f798: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51f799: mov eax, edx */
  eax = edx;
/* 51f79b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51f79e: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51f7a1: jne 0x51f7b2 */
  if (!zf) goto L_51f7b2;
L_51f7a3: /* 51f7a3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51f7a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51f7a7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51f7a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51f7a9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51f7ac: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51f7b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51f7b2: /* 51f7b2: cmp dword ptr [esp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51f7b6: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 51f7ba: jne 0x51f7c1 */
  if (!zf) goto L_51f7c1;
L_51f7bc: /* 51f7bc: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_51f7c1: /* 51f7c1: cmp dword ptr [esp + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51f7c5: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 51f7c9: jne 0x51f7d0 */
  if (!zf) goto L_51f7d0;
L_51f7cb: /* 51f7cb: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_51f7d0: /* 51f7d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51f7d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51f7d2: call 0x4e4192 */
  esp -= 4; W32(esp, 0x51f7d7u); SPILL(); f_4e4192(); if (g_unwind) return; RELOAD();
/* 51f7d7: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 51f7db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51f7de: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 51f7e0: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 51f7e2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51f7e3: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 51f7e5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51f7e7: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51f7eb: mov byte ptr [esp + 0x2c], 2 */
  W8((uint32_t)(esp + 0x2cu), 0x2u);
/* 51f7f0: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 51f7f4: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 51f7f8: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51f7fdu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51f7fd: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51f801: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 51f805: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51f80au); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51f80a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51f80c: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 51f810: mov dword ptr [esp + 0x2c], 3 */
  W32((uint32_t)(esp + 0x2cu), 0x3u);
/* 51f818: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 51f81c: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 51f820: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51f825u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51f825: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 51f829: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 51f831: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51f836u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51f836: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 51f83a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51f83b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51f83c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51f843: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51f846: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51f8a0(void) {
  LOAD_REGS();
L_51f8a0: /* 51f8a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51f8a2: push 0x557680 */
  { uint32_t v = 0x557680u; esp -= 4; W32(esp, v); }
/* 51f8a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51f8ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51f8ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51f8b5: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51f8b8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51f8b9: xor ebx, ebx */
  ebx = 0;
/* 51f8bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51f8bc: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 51f8c0: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 51f8c4: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 51f8c8: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 51f8cc: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51f8cf: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51f8d2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51f8d5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51f8d6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51f8d9: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 51f8dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51f8de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51f8df: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 51f8e3: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51f8eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51f8ea: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* 51f8ee: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 51f8f2: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 51f8f6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51f8f9: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51f8fc: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51f8ff: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51f900: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51f903: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 51f907: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51f908: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51f909: mov byte ptr [esp + 0x30], 1 */
  W8((uint32_t)(esp + 0x30u), 0x1u);
/* 51f90e: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51f915u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51f915: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51f918: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51f919: mov eax, edx */
  eax = edx;
/* 51f91b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51f91e: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51f921: jne 0x51f932 */
  if (!zf) goto L_51f932;
L_51f923: /* 51f923: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51f926: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51f927: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51f928: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51f929: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51f92c: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51f932u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51f932: /* 51f932: cmp dword ptr [esp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51f936: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 51f93a: jne 0x51f941 */
  if (!zf) goto L_51f941;
L_51f93c: /* 51f93c: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_51f941: /* 51f941: cmp dword ptr [esp + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51f945: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 51f949: jne 0x51f950 */
  if (!zf) goto L_51f950;
L_51f94b: /* 51f94b: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_51f950: /* 51f950: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51f951: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51f952: call 0x4e4192 */
  esp -= 4; W32(esp, 0x51f957u); SPILL(); f_4e4192(); if (g_unwind) return; RELOAD();
/* 51f957: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 51f95b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51f95e: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 51f960: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 51f962: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 51f964: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 51f966: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51f968: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51f96c: mov byte ptr [esp + 0x2c], 2 */
  W8((uint32_t)(esp + 0x2cu), 0x2u);
/* 51f971: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 51f975: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 51f979: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51f97eu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51f97e: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51f982: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 51f986: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51f98bu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51f98b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51f98d: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 51f991: mov dword ptr [esp + 0x2c], 3 */
  W32((uint32_t)(esp + 0x2cu), 0x3u);
/* 51f999: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 51f99d: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 51f9a1: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51f9a6u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51f9a6: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 51f9aa: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 51f9b2: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51f9b7u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51f9b7: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 51f9bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51f9bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51f9bd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51f9c4: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51f9c7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51fa20(void) {
  LOAD_REGS();
L_51fa20: /* 51fa20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51fa22: push 0x5576c0 */
  { uint32_t v = 0x5576c0u; esp -= 4; W32(esp, v); }
/* 51fa27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51fa2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51fa2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51fa35: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51fa38: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51fa39: xor ebx, ebx */
  ebx = 0;
/* 51fa3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51fa3c: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 51fa40: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 51fa44: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 51fa48: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 51fa4c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51fa4f: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51fa52: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51fa55: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51fa56: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51fa59: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 51fa5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51fa5e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51fa5f: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 51fa63: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51fa6au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51fa6a: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* 51fa6e: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 51fa72: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 51fa76: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51fa79: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51fa7c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51fa7f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51fa80: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51fa83: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 51fa87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51fa88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51fa89: mov byte ptr [esp + 0x30], 1 */
  W8((uint32_t)(esp + 0x30u), 0x1u);
/* 51fa8e: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51fa95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51fa95: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51fa98: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51fa99: mov eax, edx */
  eax = edx;
/* 51fa9b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51fa9e: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51faa1: jne 0x51fab2 */
  if (!zf) goto L_51fab2;
L_51faa3: /* 51faa3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51faa6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51faa7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51faa8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51faa9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51faac: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51fab2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51fab2: /* 51fab2: cmp dword ptr [esp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51fab6: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 51faba: jne 0x51fac1 */
  if (!zf) goto L_51fac1;
L_51fabc: /* 51fabc: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_51fac1: /* 51fac1: cmp dword ptr [esp + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51fac5: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 51fac9: jne 0x51fad0 */
  if (!zf) goto L_51fad0;
L_51facb: /* 51facb: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_51fad0: /* 51fad0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51fad1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51fad2: call 0x4e26df */
  esp -= 4; W32(esp, 0x51fad7u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 51fad7: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 51fadb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51fade: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 51fae0: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 51fae2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51fae3: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 51fae5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51fae7: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51faeb: mov byte ptr [esp + 0x2c], 2 */
  W8((uint32_t)(esp + 0x2cu), 0x2u);
/* 51faf0: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 51faf4: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 51faf8: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51fafdu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51fafd: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51fb01: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 51fb05: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51fb0au); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51fb0a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51fb0c: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 51fb10: mov dword ptr [esp + 0x2c], 3 */
  W32((uint32_t)(esp + 0x2cu), 0x3u);
/* 51fb18: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 51fb1c: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 51fb20: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51fb25u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51fb25: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 51fb29: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 51fb31: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51fb36u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51fb36: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 51fb3a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51fb3b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51fb3c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51fb43: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51fb46: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51fba0(void) {
  LOAD_REGS();
L_51fba0: /* 51fba0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51fba2: push 0x5576f0 */
  { uint32_t v = 0x5576f0u; esp -= 4; W32(esp, v); }
/* 51fba7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51fbad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51fbae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51fbb5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51fbb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51fbb9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51fbba: xor edi, edi */
  edi = 0;
/* 51fbbc: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* 51fbc0: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 51fbc4: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 51fbc8: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 51fbcc: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51fbcf: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51fbd2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51fbd5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51fbd6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51fbd9: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 51fbdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51fbde: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51fbdf: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 51fbe3: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51fbeau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51fbea: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51fbed: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51fbee: mov eax, edx */
  eax = edx;
/* 51fbf0: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51fbf3: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51fbf6: jne 0x51fc07 */
  if (!zf) goto L_51fc07;
L_51fbf8: /* 51fbf8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51fbfb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51fbfc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51fbfd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51fbfe: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51fc01: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51fc07u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51fc07: /* 51fc07: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 51fc0b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51fc0d: je 0x51fc12 */
  if (zf) goto L_51fc12;
L_51fc0f: /* 51fc0f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 51fc10: jmp 0x51fc14 */
  goto L_51fc14;
L_51fc12: /* 51fc12: xor eax, eax */
  eax = 0;
L_51fc14: /* 51fc14: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 51fc18: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 51fc1a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51fc1c: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51fc20: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
/* 51fc28: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 51fc2c: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 51fc30: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51fc35u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51fc35: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51fc39: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* 51fc41: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51fc46u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51fc46: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 51fc4a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51fc4b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51fc4c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51fc53: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51fc56: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51fc90(void) {
  LOAD_REGS();
L_51fc90: /* 51fc90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51fc92: push 0x557720 */
  { uint32_t v = 0x557720u; esp -= 4; W32(esp, v); }
/* 51fc97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51fc9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51fc9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51fca5: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51fca8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51fca9: xor ebx, ebx */
  ebx = 0;
/* 51fcab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51fcac: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 51fcb0: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 51fcb4: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 51fcb8: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 51fcbc: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51fcbf: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51fcc2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51fcc5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51fcc6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51fcc9: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 51fccd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51fcce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51fccf: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 51fcd3: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51fcdau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51fcda: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* 51fcde: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 51fce2: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 51fce6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51fce9: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51fcec: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51fcef: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51fcf0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51fcf3: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 51fcf7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51fcf8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51fcf9: mov byte ptr [esp + 0x30], 1 */
  W8((uint32_t)(esp + 0x30u), 0x1u);
/* 51fcfe: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51fd05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51fd05: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51fd08: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51fd09: mov eax, edx */
  eax = edx;
/* 51fd0b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51fd0e: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51fd11: jne 0x51fd22 */
  if (!zf) goto L_51fd22;
L_51fd13: /* 51fd13: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51fd16: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51fd17: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51fd18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51fd19: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51fd1c: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51fd22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51fd22: /* 51fd22: cmp dword ptr [esp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51fd26: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 51fd2a: jne 0x51fd31 */
  if (!zf) goto L_51fd31;
L_51fd2c: /* 51fd2c: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_51fd31: /* 51fd31: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51fd32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51fd33: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 51fd37: call 0x4e1055 */
  esp -= 4; W32(esp, 0x51fd3cu); SPILL(); f_4e1055(); if (g_unwind) return; RELOAD();
/* 51fd3c: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 51fd40: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 51fd42: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51fd44: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51fd48: mov byte ptr [esp + 0x2c], 2 */
  W8((uint32_t)(esp + 0x2cu), 0x2u);
/* 51fd4d: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 51fd51: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 51fd55: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51fd5au); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51fd5a: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 51fd5e: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 51fd62: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51fd67u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51fd67: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51fd69: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 51fd6d: mov dword ptr [esp + 0x2c], 3 */
  W32((uint32_t)(esp + 0x2cu), 0x3u);
/* 51fd75: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 51fd79: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 51fd7d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51fd82u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51fd82: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 51fd86: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 51fd8e: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51fd93u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51fd93: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 51fd97: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51fd98: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51fd99: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51fda0: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51fda3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51fe00(void) {
  LOAD_REGS();
L_51fe00: /* 51fe00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51fe02: push 0x557760 */
  { uint32_t v = 0x557760u; esp -= 4; W32(esp, v); }
/* 51fe07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51fe0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51fe0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51fe15: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51fe18: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51fe19: xor ebx, ebx */
  ebx = 0;
/* 51fe1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51fe1c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51fe1d: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 51fe21: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 51fe25: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 51fe29: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 51fe2d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51fe30: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51fe33: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51fe36: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51fe37: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51fe3a: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 51fe3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51fe3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51fe40: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 51fe44: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51fe4bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51fe4b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51fe4e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51fe51: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 51fe55: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51fe58: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51fe59: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51fe5c: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 51fe60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51fe61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51fe62: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51fe69u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51fe69: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51fe6c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51fe6d: mov eax, edx */
  eax = edx;
/* 51fe6f: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 51fe72: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 51fe75: jne 0x51fe86 */
  if (!zf) goto L_51fe86;
L_51fe77: /* 51fe77: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51fe7a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51fe7b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51fe7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51fe7d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51fe80: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51fe86u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51fe86: /* 51fe86: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 51fe8a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51fe8b: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 51fe8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51fe90: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 51fe94: call 0x4e174e */
  esp -= 4; W32(esp, 0x51fe99u); SPILL(); f_4e174e(); if (g_unwind) return; RELOAD();
/* 51fe99: mov edi, eax */
  edi = eax;
/* 51fe9b: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 51fe9f: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51fea1: mov byte ptr [esp + 0x2c], 1 */
  W8((uint32_t)(esp + 0x2cu), 0x1u);
/* 51fea6: je 0x51fede */
  if (zf) goto L_51fede;
L_51fea8: /* 51fea8: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 51feab: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51fead: mov ecx, esi */
  ecx = esi;
/* 51feaf: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 51feb2: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 51feb5: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51febau); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51feba: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 51febd: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51febf: je 0x51fede */
  if (zf) goto L_51fede;
L_51fec1: /* 51fec1: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51fec4: je 0x51feca */
  if (zf) goto L_51feca;
L_51fec6: /* 51fec6: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 51fec8: jmp 0x51fecf */
  goto L_51fecf;
L_51feca: /* 51feca: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
L_51fecf: /* 51fecf: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 51fed1: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 51fed3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51fed4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51fed5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51fed6: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x51fedbu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 51fedb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_51fede: /* 51fede: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51fee0: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 51fee4: mov byte ptr [esp + 0x30], 2 */
  W8((uint32_t)(esp + 0x30u), 0x2u);
/* 51fee9: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 51feed: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 51fef1: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51fef6u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51fef6: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 51fefa: mov byte ptr [esp + 0x2c], bl */
  W8((uint32_t)(esp + 0x2cu), (ebx & 0xffu));
/* 51fefe: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51ff03u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51ff03: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 51ff05: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 51ff09: mov dword ptr [esp + 0x30], 3 */
  W32((uint32_t)(esp + 0x30u), 0x3u);
/* 51ff11: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 51ff15: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 51ff19: call 0x4e4502 */
  esp -= 4; W32(esp, 0x51ff1eu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 51ff1e: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 51ff22: mov dword ptr [esp + 0x2c], 0xffffffff */
  W32((uint32_t)(esp + 0x2cu), 0xffffffffu);
/* 51ff2a: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x51ff2fu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 51ff2f: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 51ff33: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51ff34: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51ff35: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51ff36: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51ff3d: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51ff40: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51ffb0(void) {
  LOAD_REGS();
L_51ffb0: /* 51ffb0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 51ffb2: push 0x5577a0 */
  { uint32_t v = 0x5577a0u; esp -= 4; W32(esp, v); }
/* 51ffb7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51ffbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51ffbe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 51ffc5: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51ffc8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51ffc9: xor ebx, ebx */
  ebx = 0;
/* 51ffcb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51ffcc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51ffcd: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 51ffd1: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 51ffd5: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 51ffd9: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* 51ffdd: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51ffe0: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51ffe3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51ffe6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51ffe7: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51ffea: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 51ffee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51ffef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51fff0: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* 51fff4: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51fffbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51fffb: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 51fffe: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51ffff: mov eax, edx */
  eax = edx;
/* 520001: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 520004: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 520007: jne 0x520018 */
  if (!zf) goto L_520018;
L_520009: /* 520009: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 52000c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 52000d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 52000e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 52000f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 520012: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x520018u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_520018: /* 520018: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 52001c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 52001d: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 520021: call 0x4e3c01 */
  esp -= 4; W32(esp, 0x520026u); SPILL(); f_4e3c01(); if (g_unwind) return; RELOAD();
/* 520026: mov edi, eax */
  edi = eax;
/* 520028: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 52002c: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52002e: mov byte ptr [esp + 0x2c], 1 */
  W8((uint32_t)(esp + 0x2cu), 0x1u);
/* 520033: je 0x52006c */
  if (zf) goto L_52006c;
L_520035: /* 520035: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 520038: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 52003a: mov ecx, esi */
  ecx = esi;
/* 52003c: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 52003f: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 520042: call 0x4e4502 */
  esp -= 4; W32(esp, 0x520047u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 520047: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 52004a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52004c: je 0x52006c */
  if (zf) goto L_52006c;
L_52004e: /* 52004e: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 520051: je 0x520057 */
  if (zf) goto L_520057;
L_520053: /* 520053: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 520055: jmp 0x52005c */
  goto L_52005c;
L_520057: /* 520057: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
L_52005c: /* 52005c: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 52005f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 520061: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 520062: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 520063: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 520064: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x520069u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 520069: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_52006c: /* 52006c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 52006e: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 520072: mov byte ptr [esp + 0x30], 2 */
  W8((uint32_t)(esp + 0x30u), 0x2u);
/* 520077: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 52007b: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 52007f: call 0x4e4502 */
  esp -= 4; W32(esp, 0x520084u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 520084: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 520088: mov byte ptr [esp + 0x2c], bl */
  W8((uint32_t)(esp + 0x2cu), (ebx & 0xffu));
/* 52008c: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x520091u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 520091: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 520093: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 520097: mov dword ptr [esp + 0x30], 3 */
  W32((uint32_t)(esp + 0x30u), 0x3u);
/* 52009f: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 5200a3: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 5200a7: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5200acu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5200ac: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 5200b0: mov dword ptr [esp + 0x2c], 0xffffffff */
  W32((uint32_t)(esp + 0x2cu), 0xffffffffu);
/* 5200b8: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x5200bdu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 5200bd: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 5200c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5200c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5200c3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5200c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5200cb: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5200ce: ret 8 */
  esp += 12; SPILL(); return;
}

void f_52003a(void) {
  LOAD_REGS();
L_52003a: /* 52003a: mov ecx, esi */
  ecx = esi;
/* 52003c: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 52003f: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 520042: call 0x4e4502 */
  esp -= 4; W32(esp, 0x520047u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 520047: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 52004a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 52004c: je 0x52006c */
  if (zf) goto L_52006c;
L_52004e: /* 52004e: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 520051: je 0x520057 */
  if (zf) goto L_520057;
L_520053: /* 520053: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 520055: jmp 0x52005c */
  goto L_52005c;
L_520057: /* 520057: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
L_52005c: /* 52005c: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 52005f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 520061: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 520062: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 520063: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 520064: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x520069u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 520069: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_52006c: /* 52006c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 52006e: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 520072: mov byte ptr [esp + 0x30], 2 */
  W8((uint32_t)(esp + 0x30u), 0x2u);
/* 520077: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 52007b: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 52007f: call 0x4e4502 */
  esp -= 4; W32(esp, 0x520084u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 520084: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 520088: mov byte ptr [esp + 0x2c], bl */
  W8((uint32_t)(esp + 0x2cu), (ebx & 0xffu));
/* 52008c: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x520091u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 520091: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 520093: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 520097: mov dword ptr [esp + 0x30], 3 */
  W32((uint32_t)(esp + 0x30u), 0x3u);
/* 52009f: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 5200a3: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 5200a7: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5200acu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5200ac: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 5200b0: mov dword ptr [esp + 0x2c], 0xffffffff */
  W32((uint32_t)(esp + 0x2cu), 0xffffffffu);
/* 5200b8: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x5200bdu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 5200bd: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 5200c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5200c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5200c3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5200c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5200cb: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5200ce: ret 8 */
  esp += 12; SPILL(); return;
}

void f_520055(void) {
  LOAD_REGS();
L_520055: /* 520055: jmp 0x52005c */
  goto L_52005c;
L_52005c: /* 52005c: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 52005f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 520061: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 520062: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 520063: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 520064: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x520069u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 520069: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52006c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 52006e: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 520072: mov byte ptr [esp + 0x30], 2 */
  W8((uint32_t)(esp + 0x30u), 0x2u);
/* 520077: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 52007b: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 52007f: call 0x4e4502 */
  esp -= 4; W32(esp, 0x520084u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 520084: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 520088: mov byte ptr [esp + 0x2c], bl */
  W8((uint32_t)(esp + 0x2cu), (ebx & 0xffu));
/* 52008c: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x520091u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 520091: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 520093: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 520097: mov dword ptr [esp + 0x30], 3 */
  W32((uint32_t)(esp + 0x30u), 0x3u);
/* 52009f: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 5200a3: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 5200a7: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5200acu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5200ac: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 5200b0: mov dword ptr [esp + 0x2c], 0xffffffff */
  W32((uint32_t)(esp + 0x2cu), 0xffffffffu);
/* 5200b8: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x5200bdu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 5200bd: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 5200c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5200c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5200c3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5200c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5200cb: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5200ce: ret 8 */
  esp += 12; SPILL(); return;
}

void f_520063(void) {
  LOAD_REGS();
L_520063: /* 520063: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 520064: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x520069u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 520069: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52006c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 52006e: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 520072: mov byte ptr [esp + 0x30], 2 */
  W8((uint32_t)(esp + 0x30u), 0x2u);
/* 520077: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 52007b: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 52007f: call 0x4e4502 */
  esp -= 4; W32(esp, 0x520084u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 520084: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 520088: mov byte ptr [esp + 0x2c], bl */
  W8((uint32_t)(esp + 0x2cu), (ebx & 0xffu));
/* 52008c: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x520091u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 520091: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 520093: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 520097: mov dword ptr [esp + 0x30], 3 */
  W32((uint32_t)(esp + 0x30u), 0x3u);
/* 52009f: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 5200a3: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 5200a7: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5200acu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5200ac: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 5200b0: mov dword ptr [esp + 0x2c], 0xffffffff */
  W32((uint32_t)(esp + 0x2cu), 0xffffffffu);
/* 5200b8: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x5200bdu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 5200bd: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 5200c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5200c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5200c3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5200c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5200cb: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5200ce: ret 8 */
  esp += 12; SPILL(); return;
}

void f_520064(void) {
  LOAD_REGS();
L_520064: /* 520064: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x520069u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 520069: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 52006c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 52006e: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 520072: mov byte ptr [esp + 0x30], 2 */
  W8((uint32_t)(esp + 0x30u), 0x2u);
/* 520077: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 52007b: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 52007f: call 0x4e4502 */
  esp -= 4; W32(esp, 0x520084u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 520084: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 520088: mov byte ptr [esp + 0x2c], bl */
  W8((uint32_t)(esp + 0x2cu), (ebx & 0xffu));
/* 52008c: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x520091u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 520091: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 520093: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 520097: mov dword ptr [esp + 0x30], 3 */
  W32((uint32_t)(esp + 0x30u), 0x3u);
/* 52009f: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 5200a3: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 5200a7: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5200acu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5200ac: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 5200b0: mov dword ptr [esp + 0x2c], 0xffffffff */
  W32((uint32_t)(esp + 0x2cu), 0xffffffffu);
/* 5200b8: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x5200bdu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 5200bd: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 5200c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5200c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5200c3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5200c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5200cb: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5200ce: ret 8 */
  esp += 12; SPILL(); return;
}
