#include "recomp.h"
#include "rec_mod.h"

void f_540600(void) {
  LOAD_REGS();
L_540600: /* 540600: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 540602: push 0x5591a8 */
  { uint32_t v = 0x5591a8u; esp -= 4; W32(esp, v); }
/* 540607: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54060d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54060e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 540615: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 540616: xor eax, eax */
  eax = 0;
/* 540618: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 540619: mov esi, ecx */
  esi = ecx;
/* 54061b: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 54061f: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 540621: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 540624: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 540627: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 54062b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 54062e: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 540635: call 0x4e29e1 */
  esp -= 4; W32(esp, 0x54063au); SPILL(); f_4e29e1(); if (g_unwind) return; RELOAD();
/* 54063a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 54063e: mov eax, esi */
  eax = esi;
/* 540640: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 540641: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 540648: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54064b: ret  */
  esp += 4; SPILL(); return;
}

void f_540670(void) {
  LOAD_REGS();
L_540670: /* 540670: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 540672: push 0x5591c8 */
  { uint32_t v = 0x5591c8u; esp -= 4; W32(esp, v); }
/* 540677: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54067d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54067e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 540685: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 540686: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 540687: mov esi, ecx */
  esi = ecx;
/* 540689: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 54068d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 540690: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 540692: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 54069a: je 0x5406a8 */
  if (zf) goto L_5406a8;
L_54069c: /* 54069c: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5406a2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5406a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5406a5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x5406a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5406a8: /* 5406a8: mov ecx, esi */
  ecx = esi;
/* 5406aa: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 5406b1: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 5406b8: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 5406c0: call 0x4e1339 */
  esp -= 4; W32(esp, 0x5406c5u); SPILL(); f_4e1339(); if (g_unwind) return; RELOAD();
/* 5406c5: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5406c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5406ca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5406d1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5406d4: ret  */
  esp += 4; SPILL(); return;
}

void f_540700(void) {
  LOAD_REGS();
L_540700: /* 540700: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 540702: push 0x5591e8 */
  { uint32_t v = 0x5591e8u; esp -= 4; W32(esp, v); }
/* 540707: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54070d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54070e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 540715: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 540716: xor eax, eax */
  eax = 0;
/* 540718: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 540719: mov esi, ecx */
  esi = ecx;
/* 54071b: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 54071f: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 540721: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 540724: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 540727: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 54072b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 54072e: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 540735: call 0x4e2581 */
  esp -= 4; W32(esp, 0x54073au); SPILL(); f_4e2581(); if (g_unwind) return; RELOAD();
/* 54073a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 54073e: mov eax, esi */
  eax = esi;
/* 540740: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 540741: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 540748: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54074b: ret  */
  esp += 4; SPILL(); return;
}

void f_540770(void) {
  LOAD_REGS();
L_540770: /* 540770: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 540772: push 0x559208 */
  { uint32_t v = 0x559208u; esp -= 4; W32(esp, v); }
/* 540777: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54077d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54077e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 540785: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 540786: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 540787: mov esi, ecx */
  esi = ecx;
/* 540789: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 54078d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 540790: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 540792: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 54079a: je 0x5407a8 */
  if (zf) goto L_5407a8;
L_54079c: /* 54079c: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5407a2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5407a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5407a5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x5407a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5407a8: /* 5407a8: mov ecx, esi */
  ecx = esi;
/* 5407aa: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 5407b1: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 5407b8: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 5407c0: call 0x4e2905 */
  esp -= 4; W32(esp, 0x5407c5u); SPILL(); f_4e2905(); if (g_unwind) return; RELOAD();
/* 5407c5: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5407c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5407ca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5407d1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5407d4: ret  */
  esp += 4; SPILL(); return;
}

void f_540800(void) {
  LOAD_REGS();
L_540800: /* 540800: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 540801: mov esi, ecx */
  esi = ecx;
/* 540803: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 540806: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 540807: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 54080a: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 54080d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54080f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 540812: jle 0x540830 */
  if ((zf || sf != of)) goto L_540830;
L_540814: /* 540814: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 540817: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 540818: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 54081b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54081d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 540820: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 540824: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 540826: mov ecx, esi */
  ecx = esi;
/* 540828: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 54082b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x540830u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_540830: /* 540830: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 540832: imul edi, edi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x1cu);
  edi = (uint32_t)r;
  }
/* 540835: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  edi = r;
  }
/* 540837: mov ecx, edi */
  ecx = edi;
/* 540839: je 0x54084e */
  if (zf) goto L_54084e;
L_54083b: /* 54083b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 54083f: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 540843: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 540844: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 540845: call 0x4e39ef */
  esp -= 4; W32(esp, 0x54084au); SPILL(); f_4e39ef(); if (g_unwind) return; RELOAD();
/* 54084a: mov edi, eax */
  edi = eax;
/* 54084c: jmp 0x540850 */
  goto L_540850;
L_54084e: /* 54084e: xor edi, edi */
  edi = 0;
L_540850: /* 540850: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 540853: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 540855: je 0x54085c */
  if (zf) goto L_54085c;
L_540857: /* 540857: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 54085a: jmp 0x540861 */
  goto L_540861;
L_54085c: /* 54085c: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_540861: /* 540861: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 540862: call 0x4e1d2a */
  esp -= 4; W32(esp, 0x540867u); SPILL(); f_4e1d2a(); if (g_unwind) return; RELOAD();
/* 540867: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 54086a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 54086d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 540870: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 540871: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 540873: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 540876: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 540878: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 54087b: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 54087e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 54087f: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 540882: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 540885: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 540888: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 54088c: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54088e: jge 0x54089c */
  if ((sf == of)) goto L_54089c;
L_540890: /* 540890: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 540892: mov ecx, esi */
  ecx = esi;
/* 540894: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 540897: call 0x4e2112 */
  esp -= 4; W32(esp, 0x54089cu); SPILL(); f_4e2112(); if (g_unwind) return; RELOAD();
L_54089c: /* 54089c: lea eax, [edi + 0x10] */
  eax = (uint32_t)(edi + 0x10u);
/* 54089f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5408a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5408a1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5408e0(void) {
  LOAD_REGS();
L_5408e0: /* 5408e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5408e1: mov esi, ecx */
  esi = ecx;
/* 5408e3: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 5408e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5408e7: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 5408ea: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 5408ed: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5408ef: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 5408f2: jle 0x540910 */
  if ((zf || sf != of)) goto L_540910;
L_5408f4: /* 5408f4: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 5408f7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5408f8: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5408fb: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5408fd: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 540900: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 540904: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 540906: mov ecx, esi */
  ecx = esi;
/* 540908: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 54090b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x540910u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_540910: /* 540910: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 540912: lea ecx, [edi + edi*4] */
  ecx = (uint32_t)(edi + edi*4);
/* 540915: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 540918: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54091a: je 0x54092f */
  if (zf) goto L_54092f;
L_54091c: /* 54091c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 540920: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 540924: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 540925: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 540926: call 0x4e11d1 */
  esp -= 4; W32(esp, 0x54092bu); SPILL(); f_4e11d1(); if (g_unwind) return; RELOAD();
/* 54092b: mov edi, eax */
  edi = eax;
/* 54092d: jmp 0x540931 */
  goto L_540931;
L_54092f: /* 54092f: xor edi, edi */
  edi = 0;
L_540931: /* 540931: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 540934: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 540936: je 0x54093d */
  if (zf) goto L_54093d;
L_540938: /* 540938: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 54093b: jmp 0x540942 */
  goto L_540942;
L_54093d: /* 54093d: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_540942: /* 540942: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 540943: call 0x4e1d2a */
  esp -= 4; W32(esp, 0x540948u); SPILL(); f_4e1d2a(); if (g_unwind) return; RELOAD();
/* 540948: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 54094b: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 54094e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 540951: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 540952: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 540954: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 540957: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 540959: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 54095c: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 54095f: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 540960: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 540963: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 540966: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 540969: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 54096d: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54096f: jge 0x54097d */
  if ((sf == of)) goto L_54097d;
L_540971: /* 540971: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 540973: mov ecx, esi */
  ecx = esi;
/* 540975: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 540978: call 0x4e22b6 */
  esp -= 4; W32(esp, 0x54097du); SPILL(); f_4e22b6(); if (g_unwind) return; RELOAD();
L_54097d: /* 54097d: lea eax, [edi + 0x10] */
  eax = (uint32_t)(edi + 0x10u);
/* 540980: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 540981: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 540982: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5409c0(void) {
  LOAD_REGS();
L_5409c0: /* 5409c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5409c1: mov esi, ecx */
  esi = ecx;
/* 5409c3: call 0x4e4142 */
  esp -= 4; W32(esp, 0x5409c8u); SPILL(); f_4e4142(); if (g_unwind) return; RELOAD();
/* 5409c8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5409cd: je 0x5409db */
  if (zf) goto L_5409db;
L_5409cf: /* 5409cf: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5409d5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 5409d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5409d8: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x5409dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5409db: /* 5409db: mov eax, esi */
  eax = esi;
/* 5409dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5409de: ret 4 */
  esp += 8; SPILL(); return;
}

void f_540a00(void) {
  LOAD_REGS();
L_540a00: /* 540a00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 540a01: mov esi, ecx */
  esi = ecx;
/* 540a03: call 0x4e14ba */
  esp -= 4; W32(esp, 0x540a08u); SPILL(); f_4e14ba(); if (g_unwind) return; RELOAD();
/* 540a08: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 540a0d: je 0x540a1b */
  if (zf) goto L_540a1b;
L_540a0f: /* 540a0f: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 540a15: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 540a17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 540a18: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x540a1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_540a1b: /* 540a1b: mov eax, esi */
  eax = esi;
/* 540a1d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 540a1e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_540a40(void) {
  LOAD_REGS();
L_540a40: /* 540a40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 540a41: mov esi, ecx */
  esi = ecx;
/* 540a43: call 0x4e12a8 */
  esp -= 4; W32(esp, 0x540a48u); SPILL(); f_4e12a8(); if (g_unwind) return; RELOAD();
/* 540a48: xor eax, eax */
  eax = 0;
/* 540a4a: mov dword ptr [esi + 0xc4], eax */
  W32((uint32_t)(esi + 0xc4u), eax);
/* 540a50: mov dword ptr [esi + 0xc8], eax */
  W32((uint32_t)(esi + 0xc8u), eax);
/* 540a56: mov dword ptr [esi + 0xcc], eax */
  W32((uint32_t)(esi + 0xccu), eax);
/* 540a5c: mov dword ptr [esi + 0xd0], eax */
  W32((uint32_t)(esi + 0xd0u), eax);
/* 540a62: mov dword ptr [esi + 0xe0], eax */
  W32((uint32_t)(esi + 0xe0u), eax);
/* 540a68: mov dword ptr [esi + 0xe4], eax */
  W32((uint32_t)(esi + 0xe4u), eax);
/* 540a6e: mov dword ptr [esi + 0xe8], eax */
  W32((uint32_t)(esi + 0xe8u), eax);
/* 540a74: mov dword ptr [esi + 0xec], eax */
  W32((uint32_t)(esi + 0xecu), eax);
/* 540a7a: mov dword ptr [esi + 0xb4], 0x569110 */
  W32((uint32_t)(esi + 0xb4u), 0x569110u);
/* 540a84: mov dword ptr [esi + 0xb8], 0x7e */
  W32((uint32_t)(esi + 0xb8u), 0x7eu);
/* 540a8e: mov dword ptr [esi + 0xbc], 0x7d0 */
  W32((uint32_t)(esi + 0xbcu), 0x7d0u);
/* 540a98: mov ecx, 1 */
  ecx = 0x1u;
/* 540a9d: mov dword ptr [esi + 0xc0], ecx */
  W32((uint32_t)(esi + 0xc0u), ecx);
/* 540aa3: mov dword ptr [esi + 0xd4], ecx */
  W32((uint32_t)(esi + 0xd4u), ecx);
/* 540aa9: mov dword ptr [esi + 0xd8], ecx */
  W32((uint32_t)(esi + 0xd8u), ecx);
/* 540aaf: mov dword ptr [esi + 0xdc], ecx */
  W32((uint32_t)(esi + 0xdcu), ecx);
/* 540ab5: mov dword ptr [esi + 0xf0], 0xffffffff */
  W32((uint32_t)(esi + 0xf0u), 0xffffffffu);
/* 540abf: mov dword ptr [esi], 0x56cda8 */
  W32((uint32_t)(esi), 0x56cda8u);
/* 540ac5: mov dword ptr [esi + 0xb4], 0x56cd38 */
  W32((uint32_t)(esi + 0xb4u), 0x56cd38u);
/* 540acf: mov dword ptr [esi + 0x4fc], eax */
  W32((uint32_t)(esi + 0x4fcu), eax);
/* 540ad5: mov dword ptr [esi + 0x500], eax */
  W32((uint32_t)(esi + 0x500u), eax);
/* 540adb: mov dword ptr [esi + 0x504], eax */
  W32((uint32_t)(esi + 0x504u), eax);
/* 540ae1: mov eax, esi */
  eax = esi;
/* 540ae3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 540ae4: ret  */
  esp += 4; SPILL(); return;
}

void f_540b20(void) {
  LOAD_REGS();
L_540b20: /* 540b20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 540b21: mov esi, ecx */
  esi = ecx;
/* 540b23: call 0x4e12a8 */
  esp -= 4; W32(esp, 0x540b28u); SPILL(); f_4e12a8(); if (g_unwind) return; RELOAD();
/* 540b28: xor eax, eax */
  eax = 0;
/* 540b2a: mov dword ptr [esi + 0xc4], eax */
  W32((uint32_t)(esi + 0xc4u), eax);
/* 540b30: mov dword ptr [esi + 0xc8], eax */
  W32((uint32_t)(esi + 0xc8u), eax);
/* 540b36: mov dword ptr [esi + 0xcc], eax */
  W32((uint32_t)(esi + 0xccu), eax);
/* 540b3c: mov dword ptr [esi + 0xd0], eax */
  W32((uint32_t)(esi + 0xd0u), eax);
/* 540b42: mov dword ptr [esi + 0xe0], eax */
  W32((uint32_t)(esi + 0xe0u), eax);
/* 540b48: mov dword ptr [esi + 0xe4], eax */
  W32((uint32_t)(esi + 0xe4u), eax);
/* 540b4e: mov dword ptr [esi + 0xe8], eax */
  W32((uint32_t)(esi + 0xe8u), eax);
/* 540b54: mov dword ptr [esi + 0xec], eax */
  W32((uint32_t)(esi + 0xecu), eax);
/* 540b5a: mov dword ptr [esi + 0xb4], 0x569110 */
  W32((uint32_t)(esi + 0xb4u), 0x569110u);
/* 540b64: mov dword ptr [esi + 0xb8], 0x7e */
  W32((uint32_t)(esi + 0xb8u), 0x7eu);
/* 540b6e: mov dword ptr [esi + 0xbc], 0x7d0 */
  W32((uint32_t)(esi + 0xbcu), 0x7d0u);
/* 540b78: mov dword ptr [esi + 0xf0], 0xffffffff */
  W32((uint32_t)(esi + 0xf0u), 0xffffffffu);
/* 540b82: mov ecx, 1 */
  ecx = 0x1u;
/* 540b87: mov dword ptr [esi + 0xc0], ecx */
  W32((uint32_t)(esi + 0xc0u), ecx);
/* 540b8d: mov dword ptr [esi + 0xd4], ecx */
  W32((uint32_t)(esi + 0xd4u), ecx);
/* 540b93: mov dword ptr [esi + 0xd8], ecx */
  W32((uint32_t)(esi + 0xd8u), ecx);
/* 540b99: mov dword ptr [esi + 0xdc], ecx */
  W32((uint32_t)(esi + 0xdcu), ecx);
/* 540b9f: mov dword ptr [esi], 0x56cab0 */
  W32((uint32_t)(esi), 0x56cab0u);
/* 540ba5: mov dword ptr [esi + 0xb4], 0x56ca40 */
  W32((uint32_t)(esi + 0xb4u), 0x56ca40u);
/* 540baf: mov dword ptr [esi + 0xf8], eax */
  W32((uint32_t)(esi + 0xf8u), eax);
/* 540bb5: mov dword ptr [esi + 0xfc], eax */
  W32((uint32_t)(esi + 0xfcu), eax);
/* 540bbb: mov dword ptr [esi + 0x100], eax */
  W32((uint32_t)(esi + 0x100u), eax);
/* 540bc1: mov dword ptr [esi + 0x104], eax */
  W32((uint32_t)(esi + 0x104u), eax);
/* 540bc7: mov dword ptr [esi + 0x108], eax */
  W32((uint32_t)(esi + 0x108u), eax);
/* 540bcd: mov dword ptr [esi + 0x10c], eax */
  W32((uint32_t)(esi + 0x10cu), eax);
/* 540bd3: mov eax, esi */
  eax = esi;
/* 540bd5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 540bd6: ret  */
  esp += 4; SPILL(); return;
}

void f_540c10(void) {
  LOAD_REGS();
L_540c10: /* 540c10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 540c11: mov ebp, esp */
  ebp = esp;
/* 540c13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 540c15: push 0x559220 */
  { uint32_t v = 0x559220u; esp -= 4; W32(esp, v); }
/* 540c1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 540c20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 540c21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 540c28: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 540c2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 540c2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 540c2d: mov esi, ecx */
  esi = ecx;
/* 540c2f: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 540c32: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 540c33: mov edi, dword ptr [esi + 0x1c] */
  edi = R32((uint32_t)(esi + 0x1cu));
/* 540c36: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 540c39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 540c3a: or edi, 0x80000000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 540c40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 540c41: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 540c44: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 540c4b: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* 540c4e: call 0x4e2aa9 */
  esp -= 4; W32(esp, 0x540c53u); SPILL(); f_4e2aa9(); if (g_unwind) return; RELOAD();
/* 540c53: mov eax, dword ptr [0x69f440] */
  eax = R32((uint32_t)(0x69f440u));
/* 540c58: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 540c5b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 540c5d: je 0x540c8a */
  if (zf) goto L_540c8a;
L_540c5f: /* 540c5f: mov eax, dword ptr [0x5b2130] */
  eax = R32((uint32_t)(0x5b2130u));
/* 540c64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 540c66: jne 0x540c8a */
  if (!zf) goto L_540c8a;
L_540c68: /* 540c68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 540c6a: mov ecx, esi */
  ecx = esi;
/* 540c6c: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x540c71u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 540c71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 540c72: mov eax, dword ptr [0x5a0c98] */
  eax = R32((uint32_t)(0x5a0c98u));
/* 540c77: push 0x5aa398 */
  { uint32_t v = 0x5aa398u; esp -= 4; W32(esp, v); }
/* 540c7c: push 0x30b */
  { uint32_t v = 0x30bu; esp -= 4; W32(esp, v); }
/* 540c81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 540c82: call 0x4e30df */
  esp -= 4; W32(esp, 0x540c87u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 540c87: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_540c8a: /* 540c8a: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 540c8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 540c8e: mov ecx, esi */
  ecx = esi;
/* 540c90: call 0x4e1447 */
  esp -= 4; W32(esp, 0x540c95u); SPILL(); f_4e1447(); if (g_unwind) return; RELOAD();
/* 540c95: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 540c98: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 540c9a: je 0x540cb3 */
  if (zf) goto L_540cb3;
L_540c9c: /* 540c9c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 540c9f: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 540ca2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 540ca5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 540cac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 540cad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 540cae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 540caf: mov esp, ebp */
  esp = ebp;
/* 540cb1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 540cb2: ret  */
  esp += 4; SPILL(); return;
L_540cb3: /* 540cb3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 540cb6: xor eax, eax */
  eax = 0;
/* 540cb8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 540cb9: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 540cbc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 540cbd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 540cc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 540cc5: mov esp, ebp */
  esp = ebp;
/* 540cc7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 540cc8: ret  */
  esp += 4; SPILL(); return;
}

void f_540cc9(void) {
  LOAD_REGS();
L_540cc9: /* 540cc9: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 540ccc: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 540cd1: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 540cd4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 540cd5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 540cd8: call 0x554df6 */
  esp -= 4; W32(esp, 0x540cddu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_540cdd(); return;
}

void f_540cdd(void) {
  LOAD_REGS();
L_540cdd: /* 540cdd: push 0x56e784 */
  { uint32_t v = 0x56e784u; esp -= 4; W32(esp, v); }
/* 540ce2: push 0x5aa3b4 */
  { uint32_t v = 0x5aa3b4u; esp -= 4; W32(esp, v); }
/* 540ce7: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x540cecu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 540cec: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 540cef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 540cf2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 540cf4: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x540cf9u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 540cf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 540cfa: push 0x5aa3bc */
  { uint32_t v = 0x5aa3bcu; esp -= 4; W32(esp, v); }
/* 540cff: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x540d04u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 540d04: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 540d07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 540d09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 540d0b: call 0x554df6 */
  esp -= 4; W32(esp, 0x540d10u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_540d10: guest_badaddr(0x540d10); return;
}

void f_540d70(void) {
  LOAD_REGS();
L_540d70: /* 540d70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 540d72: push 0x559238 */
  { uint32_t v = 0x559238u; esp -= 4; W32(esp, v); }
/* 540d77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 540d7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 540d7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 540d85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 540d86: xor eax, eax */
  eax = 0;
/* 540d88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 540d89: mov esi, ecx */
  esi = ecx;
/* 540d8b: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 540d8f: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 540d91: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 540d94: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 540d97: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 540d9b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 540d9e: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 540da5: call 0x4e29e1 */
  esp -= 4; W32(esp, 0x540daau); SPILL(); f_4e29e1(); if (g_unwind) return; RELOAD();
/* 540daa: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 540dae: mov eax, esi */
  eax = esi;
/* 540db0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 540db1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 540db8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 540dbb: ret  */
  esp += 4; SPILL(); return;
}

void f_540de0(void) {
  LOAD_REGS();
L_540de0: /* 540de0: jmp 0x4e3c1a */
  SPILL(); f_4e3c1a(); return;
}

void f_540e00(void) {
  LOAD_REGS();
L_540e00: /* 540e00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 540e02: push 0x559258 */
  { uint32_t v = 0x559258u; esp -= 4; W32(esp, v); }
/* 540e07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 540e0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 540e0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 540e15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 540e16: xor eax, eax */
  eax = 0;
/* 540e18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 540e19: mov esi, ecx */
  esi = ecx;
/* 540e1b: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 540e1f: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 540e21: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 540e24: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 540e27: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 540e2b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 540e2e: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 540e35: call 0x4e2581 */
  esp -= 4; W32(esp, 0x540e3au); SPILL(); f_4e2581(); if (g_unwind) return; RELOAD();
/* 540e3a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 540e3e: mov eax, esi */
  eax = esi;
/* 540e40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 540e41: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 540e48: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 540e4b: ret  */
  esp += 4; SPILL(); return;
}

void f_540e70(void) {
  LOAD_REGS();
L_540e70: /* 540e70: jmp 0x4e4255 */
  SPILL(); f_4e4255(); return;
}

void f_540e90(void) {
  LOAD_REGS();
L_540e90: /* 540e90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 540e91: mov ebp, esp */
  ebp = esp;
/* 540e93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 540e95: push 0x559270 */
  { uint32_t v = 0x559270u; esp -= 4; W32(esp, v); }
/* 540e9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 540ea0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 540ea1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 540ea8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 540eab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 540eac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 540ead: mov esi, ecx */
  esi = ecx;
/* 540eaf: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 540eb2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 540eb4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 540eb5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 540eb8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 540ebf: je 0x540eee */
  if (zf) goto L_540eee;
L_540ec1: /* 540ec1: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 540ec4: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 540eca: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 540ecd: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 540ed2: push 0x5ac7a0 */
  { uint32_t v = 0x5ac7a0u; esp -= 4; W32(esp, v); }
/* 540ed7: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 540eda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 540edb: push 0x5ac7ac */
  { uint32_t v = 0x5ac7acu; esp -= 4; W32(esp, v); }
/* 540ee0: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 540ee5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 540ee6: call 0x4e30df */
  esp -= 4; W32(esp, 0x540eebu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 540eeb: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_540eee: /* 540eee: mov ecx, esi */
  ecx = esi;
/* 540ef0: call 0x4e2a9a */
  esp -= 4; W32(esp, 0x540ef5u); SPILL(); f_4e2a9a(); if (g_unwind) return; RELOAD();
/* 540ef5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 540ef8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 540ef9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 540efa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 540f01: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 540f02: mov esp, ebp */
  esp = ebp;
/* 540f04: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 540f05: ret  */
  esp += 4; SPILL(); return;
}

void f_540f06(void) {
  LOAD_REGS();
L_540f06: /* 540f06: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 540f09: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 540f0e: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 540f11: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 540f12: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 540f15: call 0x554df6 */
  esp -= 4; W32(esp, 0x540f1au); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_540f1a(); return;
}

void f_540f1a(void) {
  LOAD_REGS();
L_540f1a: /* 540f1a: push 0x56e7ac */
  { uint32_t v = 0x56e7acu; esp -= 4; W32(esp, v); }
/* 540f1f: push 0x5ac7cc */
  { uint32_t v = 0x5ac7ccu; esp -= 4; W32(esp, v); }
/* 540f24: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x540f29u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 540f29: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 540f2c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 540f2e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 540f30: call 0x554df6 */
  esp -= 4; W32(esp, 0x540f35u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_540f35: guest_badaddr(0x540f35); return;
}

void f_540f70(void) {
  LOAD_REGS();
L_540f70: /* 540f70: jmp 0x4e2b44 */
  SPILL(); f_4e2b44(); return;
}

void f_540f90(void) {
  LOAD_REGS();
L_540f90: /* 540f90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 540f91: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 540f92: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 540f96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 540f97: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 540f98: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 540f99: mov ebx, ecx */
  ebx = ecx;
/* 540f9b: call 0x4e1d2a */
  esp -= 4; W32(esp, 0x540fa0u); SPILL(); f_4e1d2a(); if (g_unwind) return; RELOAD();
/* 540fa0: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 540fa3: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 540fa6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 540fa9: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 540faa: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 540fac: mov esi, dword ptr [edx + eax*4] */
  esi = R32((uint32_t)(edx + eax*4));
/* 540faf: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 540fb2: je 0x540fe9 */
  if (zf) goto L_540fe9;
L_540fb4: /* 540fb4: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 540fb6: lea edi, [esi + esi*4] */
  edi = (uint32_t)(esi + esi*4);
/* 540fb9: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 540fbc: mov ecx, dword ptr [edi + eax + 8] */
  ecx = R32((uint32_t)(edi + eax + 0x8u));
/* 540fc0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 540fc2: lea eax, [edi + eax + 4] */
  eax = (uint32_t)(edi + eax + 0x4u);
/* 540fc6: je 0x540fcc */
  if (zf) goto L_540fcc;
L_540fc8: /* 540fc8: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 540fca: jmp 0x540fd1 */
  goto L_540fd1;
L_540fcc: /* 540fcc: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_540fd1: /* 540fd1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 540fd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 540fd3: call 0x4e26df */
  esp -= 4; W32(esp, 0x540fd8u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 540fd8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 540fdb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 540fdd: je 0x540ffd */
  if (zf) goto L_540ffd;
L_540fdf: /* 540fdf: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 540fe1: mov esi, dword ptr [edi + ecx] */
  esi = R32((uint32_t)(edi + ecx));
/* 540fe4: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 540fe7: jne 0x540fb4 */
  if (!zf) goto L_540fb4;
L_540fe9: /* 540fe9: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 540fed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 540fee: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 540fef: mov ecx, ebx */
  ecx = ebx;
/* 540ff1: call 0x4e3751 */
  esp -= 4; W32(esp, 0x540ff6u); SPILL(); f_4e3751(); if (g_unwind) return; RELOAD();
/* 540ff6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 540ff7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 540ff8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 540ff9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 540ffa: ret 8 */
  esp += 12; SPILL(); return;
L_540ffd: /* 540ffd: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 540fff: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 541003: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 541005: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 541008: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 541009: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 54100c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54100d: mov dword ptr [eax + edx + 0x10], ecx */
  W32((uint32_t)(eax + edx + 0x10u), ecx);
/* 541011: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 541013: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 541014: lea eax, [eax + edx + 0x10] */
  eax = (uint32_t)(eax + edx + 0x10u);
/* 541018: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 541019: ret 8 */
  esp += 12; SPILL(); return;
}

void f_541050(void) {
  LOAD_REGS();
L_541050: /* 541050: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 541051: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 541055: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 541057: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 541058: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 541059: mov ebp, ecx */
  ebp = ecx;
/* 54105b: jge 0x541074 */
  if ((sf == of)) goto L_541074;
L_54105d: /* 54105d: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 541062: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 541067: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 54106c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x541071u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 541071: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_541074: /* 541074: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 541077: jle 0x541090 */
  if ((zf || sf != of)) goto L_541090;
L_541079: /* 541079: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 54107e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 541083: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 541088: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x54108du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 54108d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_541090: /* 541090: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 541094: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 541097: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54109a: jle 0x5410b3 */
  if ((zf || sf != of)) goto L_5410b3;
L_54109c: /* 54109c: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 5410a1: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5410a6: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 5410ab: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5410b0u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5410b0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5410b3: /* 5410b3: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5410b5: jge 0x5410d1 */
  if ((sf == of)) goto L_5410d1;
L_5410b7: /* 5410b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5410b8: mov esi, ebx */
  esi = ebx;
/* 5410ba: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 5410bd: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 5410bf: nop  */
L_5410c0: /* 5410c0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 5410c3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5410c5: call 0x4e4142 */
  esp -= 4; W32(esp, 0x5410cau); SPILL(); f_4e4142(); if (g_unwind) return; RELOAD();
/* 5410ca: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 5410cd: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 5410ce: jne 0x5410c0 */
  if (!zf) goto L_5410c0;
L_5410d0: /* 5410d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_5410d1: /* 5410d1: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 5410d5: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 5410d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5410d8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5410d9: mov ecx, ebp */
  ecx = ebp;
/* 5410db: call 0x4e438b */
  esp -= 4; W32(esp, 0x5410e0u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 5410e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5410e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5410e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5410e3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_541120(void) {
  LOAD_REGS();
L_541120: /* 541120: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 541121: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 541125: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 541127: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 541128: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 541129: mov ebp, ecx */
  ebp = ecx;
/* 54112b: jge 0x541144 */
  if ((sf == of)) goto L_541144;
L_54112d: /* 54112d: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 541132: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 541137: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 54113c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x541141u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 541141: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_541144: /* 541144: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 541147: jle 0x541160 */
  if ((zf || sf != of)) goto L_541160;
L_541149: /* 541149: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 54114e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 541153: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 541158: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x54115du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 54115d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_541160: /* 541160: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 541164: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 541167: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54116a: jle 0x541183 */
  if ((zf || sf != of)) goto L_541183;
L_54116c: /* 54116c: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 541171: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 541176: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 54117b: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x541180u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 541180: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_541183: /* 541183: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 541185: jge 0x5411a1 */
  if ((sf == of)) goto L_5411a1;
L_541187: /* 541187: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 541188: lea esi, [ebx + ebx*4] */
  esi = (uint32_t)(ebx + ebx*4);
/* 54118b: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 54118e: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
L_541190: /* 541190: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 541193: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 541195: call 0x4e14ba */
  esp -= 4; W32(esp, 0x54119au); SPILL(); f_4e14ba(); if (g_unwind) return; RELOAD();
/* 54119a: add esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54119d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 54119e: jne 0x541190 */
  if (!zf) goto L_541190;
L_5411a0: /* 5411a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_5411a1: /* 5411a1: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 5411a5: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 5411a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5411a8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5411a9: mov ecx, ebp */
  ecx = ebp;
/* 5411ab: call 0x4e438b */
  esp -= 4; W32(esp, 0x5411b0u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 5411b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5411b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5411b2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5411b3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5411f0(void) {
  LOAD_REGS();
L_5411f0: /* 5411f0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 5411f4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5411f6: je 0x5411fd */
  if (zf) goto L_5411fd;
L_5411f8: /* 5411f8: jmp 0x4e2117 */
  SPILL(); f_4e2117(); return;
L_5411fd: /* 5411fd: ret  */
  esp += 4; SPILL(); return;
}

void f_541210(void) {
  LOAD_REGS();
L_541210: /* 541210: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 541214: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 541216: je 0x54121d */
  if (zf) goto L_54121d;
L_541218: /* 541218: jmp 0x4e3c56 */
  SPILL(); f_4e3c56(); return;
L_54121d: /* 54121d: ret  */
  esp += 4; SPILL(); return;
}

void f_541230(void) {
  LOAD_REGS();
L_541230: /* 541230: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 541231: mov ebp, esp */
  ebp = esp;
/* 541233: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 541235: push 0x5592a0 */
  { uint32_t v = 0x5592a0u; esp -= 4; W32(esp, v); }
/* 54123a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 541240: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 541241: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 541248: sub esp, 0xa58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa58u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54124e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54124f: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 541252: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 541254: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 541255: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 541256: mov esi, ecx */
  esi = ecx;
/* 541258: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54125b: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 54125e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 541265: jne 0x54126d */
  if (!zf) goto L_54126d;
L_541267: /* 541267: mov ebx, dword ptr [esi + 0x24] */
  ebx = R32((uint32_t)(esi + 0x24u));
/* 54126a: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
L_54126d: /* 54126d: test byte ptr [ebx + 0x498], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x498u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 541274: je 0x541609 */
  if (zf) goto L_541609;
L_54127a: /* 54127a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54127d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54127f: je 0x541297 */
  if (zf) goto L_541297;
L_541281: /* 541281: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 541284: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 541286: je 0x541297 */
  if (zf) goto L_541297;
L_541288: /* 541288: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 54128b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54128c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54128d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54128e: mov ecx, esi */
  ecx = esi;
/* 541290: call 0x4e2743 */
  esp -= 4; W32(esp, 0x541295u); SPILL(); f_4e2743(); if (g_unwind) return; RELOAD();
/* 541295: jmp 0x54129a */
  goto L_54129a;
L_541297: /* 541297: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
L_54129a: /* 54129a: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 54129d: mov eax, dword ptr [ecx + 0x498] */
  eax = R32((uint32_t)(ecx + 0x498u));
/* 5412a3: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5412a6: je 0x5412b5 */
  if (zf) goto L_5412b5;
L_5412a8: /* 5412a8: cmp dword ptr [esi + 4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5412ac: je 0x5412b5 */
  if (zf) goto L_5412b5;
L_5412ae: /* 5412ae: mov eax, 1 */
  eax = 0x1u;
/* 5412b3: jmp 0x5412b7 */
  goto L_5412b7;
L_5412b5: /* 5412b5: xor eax, eax */
  eax = 0;
L_5412b7: /* 5412b7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5412b9: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 5412bc: je 0x5412c3 */
  if (zf) goto L_5412c3;
L_5412be: /* 5412be: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 5412c1: jmp 0x5412f4 */
  goto L_5412f4;
L_5412c3: /* 5412c3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5412c5: je 0x5412e0 */
  if (zf) goto L_5412e0;
L_5412c7: /* 5412c7: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 5412ca: cmp eax, dword ptr [0x69f458] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x69f458u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5412d0: je 0x5412e0 */
  if (zf) goto L_5412e0;
L_5412d2: /* 5412d2: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 5412d5: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 5412db: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 5412de: jmp 0x5412ee */
  goto L_5412ee;
L_5412e0: /* 5412e0: mov edx, dword ptr [ecx + 0x4b4] */
  edx = R32((uint32_t)(ecx + 0x4b4u));
/* 5412e6: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 5412eb: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
L_5412ee: /* 5412ee: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5412f1: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_5412f4: /* 5412f4: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 5412f7: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 5412fa: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
L_5412fd: /* 5412fd: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 541300: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x541305u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 541305: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 541308: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54130a: je 0x541609 */
  if (zf) goto L_541609;
L_541310: /* 541310: mov eax, dword ptr [ebx + 0x3c] */
  eax = R32((uint32_t)(ebx + 0x3cu));
/* 541313: test ah, 0x40 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 541316: je 0x5414c8 */
  if (zf) goto L_5414c8;
L_54131c: /* 54131c: mov dx, word ptr [0x69f4a4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x69f4a4u))) & 0xffffu);
/* 541323: xor eax, eax */
  eax = 0;
/* 541325: mov word ptr [ebp - 0xa64], dx */
  W16((uint32_t)(ebp + 0xfffff59cu), (edx & 0xffffu));
/* 54132c: mov ecx, 0x1ff */
  ecx = 0x1ffu;
/* 541331: lea edi, [ebp - 0xa62] */
  edi = (uint32_t)(ebp + 0xfffff59eu);
/* 541337: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 541339: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 54133b: test dword ptr [ebx + 0x3c], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x3cu))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 541342: je 0x54134f */
  if (zf) goto L_54134f;
L_541344: /* 541344: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 541346: mov ecx, ebx */
  ecx = ebx;
/* 541348: call dword ptr [eax + 0x74] */
  { uint32_t t = R32((uint32_t)(eax + 0x74u)); esp -= 4; W32(esp, 0x54134bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54134b: mov ecx, eax */
  ecx = eax;
/* 54134d: jmp 0x541352 */
  goto L_541352;
L_54134f: /* 54134f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
L_541352: /* 541352: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 541355: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 541357: je 0x54136c */
  if (zf) goto L_54136c;
L_541359: /* 541359: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54135c: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 54135f: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 541364: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 541367: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 54136a: jmp 0x541377 */
  goto L_541377;
L_54136c: /* 54136c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54136e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 541370: call 0x4e2cde */
  esp -= 4; W32(esp, 0x541375u); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 541375: mov esi, eax */
  esi = eax;
L_541377: /* 541377: cmp dword ptr [ebx + 0x34], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x34u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54137b: jne 0x54138e */
  if (!zf) goto L_54138e;
L_54137d: /* 54137d: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 541380: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 541386: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 541389: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54138c: jmp 0x541394 */
  goto L_541394;
L_54138e: /* 54138e: lea eax, [ebp - 0x264] */
  eax = (uint32_t)(ebp + 0xfffffd9cu);
L_541394: /* 541394: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 541397: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 54139a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_5413a0: /* 5413a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5413a2: je 0x5413b5 */
  if (zf) goto L_5413b5;
L_5413a4: /* 5413a4: cmp eax, 0x6a60e0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a60e0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5413a9: je 0x5413b0 */
  if (zf) goto L_5413b0;
L_5413ab: /* 5413ab: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 5413ae: jmp 0x5413a0 */
  goto L_5413a0;
L_5413b0: /* 5413b0: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
/* 5413b3: jmp 0x5413bc */
  goto L_5413bc;
L_5413b5: /* 5413b5: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
L_5413bc: /* 5413bc: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5413be: je 0x5413d7 */
  if (zf) goto L_5413d7;
L_5413c0: /* 5413c0: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
L_5413c3: /* 5413c3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5413c5: je 0x5413d7 */
  if (zf) goto L_5413d7;
L_5413c7: /* 5413c7: cmp eax, 0x6a7078 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a7078u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5413cc: je 0x5413d3 */
  if (zf) goto L_5413d3;
L_5413ce: /* 5413ce: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 5413d1: jmp 0x5413c3 */
  goto L_5413c3;
L_5413d3: /* 5413d3: mov eax, ebx */
  eax = ebx;
/* 5413d5: jmp 0x5413d9 */
  goto L_5413d9;
L_5413d7: /* 5413d7: xor eax, eax */
  eax = 0;
L_5413d9: /* 5413d9: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 5413dc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5413de: je 0x5414d3 */
  if (zf) goto L_5414d3;
L_5413e4: /* 5413e4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 5413e7: mov ecx, dword ptr [0x5afeec] */
  ecx = R32((uint32_t)(0x5afeecu));
/* 5413ed: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5413ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5413f0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5413f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5413f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5413f5: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x5413f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5413f8: mov edi, eax */
  edi = eax;
/* 5413fa: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5413fc: je 0x5414c8 */
  if (zf) goto L_5414c8;
L_541402: /* 541402: xor eax, eax */
  eax = 0;
/* 541404: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 541407: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 54140a: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 54140d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 541410: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 541411: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 541414: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 541418: call 0x4e13de */
  esp -= 4; W32(esp, 0x54141du); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 54141d: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 541420: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 541421: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 541422: mov ecx, edi */
  ecx = edi;
/* 541424: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 541428: call 0x4e3783 */
  esp -= 4; W32(esp, 0x54142du); SPILL(); f_4e3783(); if (g_unwind) return; RELOAD();
/* 54142d: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 541430: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 541434: call 0x4e1217 */
  esp -= 4; W32(esp, 0x541439u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 541439: mov edi, dword ptr [ebx + 0x48] */
  edi = R32((uint32_t)(ebx + 0x48u));
/* 54143c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54143f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 541442: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 541444: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* 541447: mov esi, dword ptr [ecx + 0x38] */
  esi = R32((uint32_t)(ecx + 0x38u));
/* 54144a: mov ecx, eax */
  ecx = eax;
/* 54144c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 54144e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54144f: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* 541452: mov dword ptr [ebp - 0x3c], esi */
  W32((uint32_t)(ebp + 0xffffffc4u), esi);
/* 541455: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x54145bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54145b: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 54145e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54145f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 541460: mov ecx, edi */
  ecx = edi;
/* 541462: call 0x4e33b4 */
  esp -= 4; W32(esp, 0x541467u); SPILL(); f_4e33b4(); if (g_unwind) return; RELOAD();
/* 541467: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 54146a: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 54146b: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_541472: /* 541472: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 541474: jl 0x5414bc */
  if ((sf != of)) goto L_5414bc;
L_541476: /* 541476: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 541479: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 54147b: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 54147e: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 541481: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 541484: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 541486: je 0x54148c */
  if (zf) goto L_54148c;
L_541488: /* 541488: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 54148a: jmp 0x541491 */
  goto L_541491;
L_54148c: /* 54148c: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_541491: /* 541491: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 541494: imul ebx, dword ptr [ebp - 0x3c] */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffc4u)));
  ebx = (uint32_t)r;
  }
/* 541498: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 54149b: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* 54149e: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 5414a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5414a2: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 5414a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5414a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5414a6: call dword ptr [edi + 0x9c] */
  { uint32_t t = R32((uint32_t)(edi + 0x9cu)); esp -= 4; W32(esp, 0x5414acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5414ac: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 5414af: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 5414b2: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5414b5: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 5414b6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5414b7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 5414ba: jmp 0x541472 */
  goto L_541472;
L_5414bc: /* 5414bc: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5414bf: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5414c3: call 0x4e262b */
  esp -= 4; W32(esp, 0x5414c8u); SPILL(); f_4e262b(); if (g_unwind) return; RELOAD();
L_5414c8: /* 5414c8: mov edx, dword ptr [ebx + 0x2c] */
  edx = R32((uint32_t)(ebx + 0x2cu));
/* 5414cb: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 5414ce: jmp 0x5412fd */
  goto L_5412fd;
L_5414d3: /* 5414d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5414d5: je 0x541542 */
  if (zf) goto L_541542;
L_5414d7: /* 5414d7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 5414da: mov ecx, dword ptr [0x5afeec] */
  ecx = R32((uint32_t)(0x5afeecu));
/* 5414e0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5414e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5414e3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5414e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5414e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5414e8: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x5414ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5414eb: mov edi, eax */
  edi = eax;
/* 5414ed: xor eax, eax */
  eax = 0;
/* 5414ef: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5414f1: je 0x5414c8 */
  if (zf) goto L_5414c8;
L_5414f3: /* 5414f3: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 5414f6: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 5414f9: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 5414fc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5414ff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 541500: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 541503: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 541507: call 0x4e13de */
  esp -= 4; W32(esp, 0x54150cu); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 54150c: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 54150f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 541510: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 541513: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 541514: mov ecx, edi */
  ecx = edi;
/* 541516: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 54151a: call 0x4e3783 */
  esp -= 4; W32(esp, 0x54151fu); SPILL(); f_4e3783(); if (g_unwind) return; RELOAD();
/* 54151f: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 541522: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 541526: call 0x4e1217 */
  esp -= 4; W32(esp, 0x54152bu); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 54152b: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 54152e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 541532: call 0x4e262b */
  esp -= 4; W32(esp, 0x541537u); SPILL(); f_4e262b(); if (g_unwind) return; RELOAD();
/* 541537: mov edx, dword ptr [ebx + 0x2c] */
  edx = R32((uint32_t)(ebx + 0x2cu));
/* 54153a: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 54153d: jmp 0x5412fd */
  goto L_5412fd;
L_541542: /* 541542: xor edi, edi */
  edi = 0;
L_541544: /* 541544: mov eax, dword ptr [ebx + 0x34] */
  eax = R32((uint32_t)(ebx + 0x34u));
/* 541547: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 541549: jge 0x5414c8 */
  if ((sf == of)) goto L_5414c8;
L_54154f: /* 54154f: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 541552: je 0x541579 */
  if (zf) goto L_541579;
L_541554: /* 541554: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 541557: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 54155d: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 541560: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 541561: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 541564: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 541565: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 54156b: push 0x5aa824 */
  { uint32_t v = 0x5aa824u; esp -= 4; W32(esp, v); }
/* 541570: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 541571: call 0x4e4183 */
  esp -= 4; W32(esp, 0x541576u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 541576: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_541579: /* 541579: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 54157c: mov ecx, dword ptr [0x5afeec] */
  ecx = R32((uint32_t)(0x5afeecu));
/* 541582: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 541584: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 541585: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 54158a: lea eax, [ebp - 0xa64] */
  eax = (uint32_t)(ebp + 0xfffff59cu);
/* 541590: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 541591: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 541594: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 541595: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 541596: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x541599u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 541599: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54159b: je 0x5415bf */
  if (zf) goto L_5415bf;
L_54159d: /* 54159d: mov eax, dword ptr [ebx + 0x38] */
  eax = R32((uint32_t)(ebx + 0x38u));
/* 5415a0: mov ecx, dword ptr [ebx + 0x48] */
  ecx = R32((uint32_t)(ebx + 0x48u));
/* 5415a3: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 5415a6: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 5415a8: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5415aa: add eax, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5415ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5415af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5415b0: lea ecx, [ebp - 0xa64] */
  ecx = (uint32_t)(ebp + 0xfffff59cu);
/* 5415b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5415b7: mov ecx, ebx */
  ecx = ebx;
/* 5415b9: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x5415bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5415bf: /* 5415bf: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 5415c0: jmp 0x541544 */
  goto L_541544;
L_541609: /* 541609: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54160c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54160d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54160e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 541615: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 541616: mov esp, ebp */
  esp = ebp;
/* 541618: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 541619: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_5415c2(void) {
  LOAD_REGS();
L_5415c2: /* 5415c2: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 5415c5: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5415ca: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 5415cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5415ce: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 5415d1: call 0x554df6 */
  esp -= 4; W32(esp, 0x5415d6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5415d6(); return;
}

void f_5415d6(void) {
  LOAD_REGS();
L_5415d6: /* 5415d6: push 0x56e7d8 */
  { uint32_t v = 0x56e7d8u; esp -= 4; W32(esp, v); }
/* 5415db: push 0x5aa834 */
  { uint32_t v = 0x5aa834u; esp -= 4; W32(esp, v); }
/* 5415e0: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5415e5u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5415e5: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5415e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5415eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5415ed: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x5415f2u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 5415f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5415f3: push 0x5aa83c */
  { uint32_t v = 0x5aa83cu; esp -= 4; W32(esp, v); }
/* 5415f8: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5415fdu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5415fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 541600: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 541602: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 541604: call 0x554df6 */
  esp -= 4; W32(esp, 0x541609u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 541609: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54160c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54160d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54160e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 541615: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 541616: mov esp, ebp */
  esp = ebp;
/* 541618: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 541619: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_541720(void) {
  LOAD_REGS();
L_541720: /* 541720: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 541721: mov ebp, esp */
  ebp = esp;
/* 541723: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 541725: push 0x5592c0 */
  { uint32_t v = 0x5592c0u; esp -= 4; W32(esp, v); }
/* 54172a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 541730: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 541731: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 541738: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 541739: mov eax, 0xfa14 */
  eax = 0xfa14u;
/* 54173e: call 0x554f80 */
  esp -= 4; W32(esp, 0x541743u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 541743: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 541744: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 541747: mov eax, dword ptr [ebx + 0x4b4] */
  eax = R32((uint32_t)(ebx + 0x4b4u));
/* 54174d: cmp eax, 0x2e8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2e8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 541752: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 541753: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 541754: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 541757: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54175e: jne 0x541767 */
  if (!zf) goto L_541767;
L_541760: /* 541760: mov esi, 0x5aa8c8 */
  esi = 0x5aa8c8u;
/* 541765: jmp 0x541777 */
  goto L_541777;
L_541767: /* 541767: cmp eax, 0x2e9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2e9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54176c: jne 0x54192a */
  if (!zf) goto L_54192a;
L_541772: /* 541772: mov esi, 0x5aa8e0 */
  esi = 0x5aa8e0u;
L_541777: /* 541777: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 541779: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54177b: mov ecx, ebx */
  ecx = ebx;
/* 54177d: call 0x4e2cde */
  esp -= 4; W32(esp, 0x541782u); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 541782: mov ecx, dword ptr [0x5afeec] */
  ecx = R32((uint32_t)(0x5afeecu));
/* 541788: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 54178a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54178b: push 0x7d00 */
  { uint32_t v = 0x7d00u; esp -= 4; W32(esp, v); }
/* 541790: lea esi, [ebp - 0xfa24] */
  esi = (uint32_t)(ebp + 0xffff05dcu);
/* 541796: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 541797: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 541798: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x54179bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54179b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54179d: je 0x54180d */
  if (zf) goto L_54180d;
L_54179f: /* 54179f: lea edi, [ebp - 0xfa24] */
  edi = (uint32_t)(ebp + 0xffff05dcu);
L_5417a5: /* 5417a5: cmp word ptr [edi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 5417a9: je 0x54180d */
  if (zf) goto L_54180d;
L_5417ab: /* 5417ab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5417ac: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x5417b1u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 5417b1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5417b4: push 0x5aa8f8 */
  { uint32_t v = 0x5aa8f8u; esp -= 4; W32(esp, v); }
/* 5417b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5417ba: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 5417bd: call 0x4e2220 */
  esp -= 4; W32(esp, 0x5417c2u); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 5417c2: mov esi, eax */
  esi = eax;
/* 5417c4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5417c7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5417c9: je 0x541804 */
  if (zf) goto L_541804;
L_5417cb: /* 5417cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5417cd: mov word ptr [esi], 0 */
  W16((uint32_t)(esi), 0x0u);
/* 5417d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5417d4: mov ecx, ebx */
  ecx = ebx;
/* 5417d6: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 5417d9: call 0x4e2cde */
  esp -= 4; W32(esp, 0x5417deu); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 5417de: mov edx, dword ptr [ebx + 0x4b4] */
  edx = R32((uint32_t)(ebx + 0x4b4u));
/* 5417e4: mov ebx, dword ptr [0x69a758] */
  ebx = R32((uint32_t)(0x69a758u));
/* 5417ea: mov edx, dword ptr [ebx + edx*4] */
  edx = R32((uint32_t)(ebx + edx*4));
/* 5417ed: mov ecx, dword ptr [0x5afeec] */
  ecx = R32((uint32_t)(0x5afeecu));
/* 5417f3: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 5417f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5417f7: mov edx, eax */
  edx = eax;
/* 5417f9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 5417fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5417fc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5417fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5417fe: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x541801u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 541801: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_541804: /* 541804: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 541807: lea edi, [edi + eax*2 + 2] */
  edi = (uint32_t)(edi + eax*2 + 0x2u);
/* 54180b: jmp 0x5417a5 */
  goto L_5417a5;
L_54180d: /* 54180d: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 541810: mov dword ptr [ebp - 0x18], 0x5f0d80 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x5f0d80u);
/* 541817: mov dword ptr [ebp - 0x14], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffecu), 0xffffffffu);
/* 54181e: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x541823u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 541823: mov edi, dword ptr [0x6a0f04] */
  edi = R32((uint32_t)(0x6a0f04u));
/* 541829: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_541830: /* 541830: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 541833: cmp ecx, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 541839: jge 0x541899 */
  if ((sf == of)) goto L_541899;
L_54183b: /* 54183b: mov eax, dword ptr [edi + ecx*4] */
  eax = R32((uint32_t)(edi + ecx*4));
/* 54183e: mov edi, edi */
  edi = edi;
L_541840: /* 541840: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 541842: je 0x54188f */
  if (zf) goto L_54188f;
L_541844: /* 541844: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 541846: je 0x54184d */
  if (zf) goto L_54184d;
L_541848: /* 541848: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 54184b: jmp 0x541840 */
  goto L_541840;
L_54184d: /* 54184d: mov esi, dword ptr [edi + ecx*4] */
  esi = R32((uint32_t)(edi + ecx*4));
/* 541850: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 541852: mov edi, dword ptr [esi + 0x4ec] */
  edi = R32((uint32_t)(esi + 0x4ecu));
/* 541858: mov ecx, esi */
  ecx = esi;
/* 54185a: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x54185du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54185d: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54185f: je 0x541878 */
  if (zf) goto L_541878;
L_541861: /* 541861: push 0x21b */
  { uint32_t v = 0x21bu; esp -= 4; W32(esp, v); }
/* 541866: push 0x5a3b00 */
  { uint32_t v = 0x5a3b00u; esp -= 4; W32(esp, v); }
/* 54186b: push 0x5a3ad4 */
  { uint32_t v = 0x5a3ad4u; esp -= 4; W32(esp, v); }
/* 541870: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x541875u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 541875: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_541878: /* 541878: mov ecx, dword ptr [esi + 0x4e8] */
  ecx = R32((uint32_t)(esi + 0x4e8u));
/* 54187e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 541880: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 541882: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 541884: call 0x4e2743 */
  esp -= 4; W32(esp, 0x541889u); SPILL(); f_4e2743(); if (g_unwind) return; RELOAD();
/* 541889: mov edi, dword ptr [0x6a0f04] */
  edi = R32((uint32_t)(0x6a0f04u));
L_54188f: /* 54188f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 541892: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x541897u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 541897: jmp 0x541830 */
  goto L_541830;
L_541899: /* 541899: mov dword ptr [ebp - 0x18], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x6a0f20u);
/* 5418a0: mov dword ptr [ebp - 0x14], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffecu), 0xffffffffu);
L_5418a7: /* 5418a7: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5418aa: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x5418afu); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 5418af: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 5418b2: cmp esi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5418b8: jge 0x54192a */
  if ((sf == of)) goto L_54192a;
L_5418ba: /* 5418ba: mov eax, dword ptr [edi + esi*4] */
  eax = R32((uint32_t)(edi + esi*4));
/* 5418bd: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
L_5418c0: /* 5418c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5418c2: je 0x5418cd */
  if (zf) goto L_5418cd;
L_5418c4: /* 5418c4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5418c6: je 0x5418d8 */
  if (zf) goto L_5418d8;
L_5418c8: /* 5418c8: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 5418cb: jmp 0x5418c0 */
  goto L_5418c0;
L_5418cd: /* 5418cd: xor eax, eax */
  eax = 0;
/* 5418cf: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5418d1: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 5418d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5418d6: je 0x5418a7 */
  if (zf) goto L_5418a7;
L_5418d8: /* 5418d8: mov ecx, dword ptr [edi + esi*4] */
  ecx = R32((uint32_t)(edi + esi*4));
/* 5418db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5418dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5418df: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5418e1: call 0x4e2743 */
  esp -= 4; W32(esp, 0x5418e6u); SPILL(); f_4e2743(); if (g_unwind) return; RELOAD();
/* 5418e6: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 5418eb: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 5418ee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5418f0: call dword ptr [edx + 0x44] */
  { uint32_t t = R32((uint32_t)(edx + 0x44u)); esp -= 4; W32(esp, 0x5418f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5418f3: mov edi, dword ptr [0x6a0f04] */
  edi = R32((uint32_t)(0x6a0f04u));
/* 5418f9: jmp 0x5418a7 */
  goto L_5418a7;
L_54192a: /* 54192a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54192d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54192e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54192f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 541936: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 541937: mov esp, ebp */
  esp = ebp;
/* 541939: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54193a: ret  */
  esp += 4; SPILL(); return;
}

void f_5418fb(void) {
  LOAD_REGS();
L_5418fb: /* 5418fb: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 5418fe: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 541903: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 541906: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 541907: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 54190a: call 0x554df6 */
  esp -= 4; W32(esp, 0x54190fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54190f(); return;
}

void f_54190f(void) {
  LOAD_REGS();
L_54190f: /* 54190f: push 0x56e808 */
  { uint32_t v = 0x56e808u; esp -= 4; W32(esp, v); }
/* 541914: push 0x5aa8fc */
  { uint32_t v = 0x5aa8fcu; esp -= 4; W32(esp, v); }
/* 541919: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54191eu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54191e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 541921: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 541923: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 541925: call 0x554df6 */
  esp -= 4; W32(esp, 0x54192au); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 54192a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54192d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54192e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54192f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 541936: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 541937: mov esp, ebp */
  esp = ebp;
/* 541939: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54193a: ret  */
  esp += 4; SPILL(); return;
}

void f_5419d0(void) {
  LOAD_REGS();
L_5419d0: /* 5419d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5419d1: mov esi, ecx */
  esi = ecx;
/* 5419d3: call 0x4e22b1 */
  esp -= 4; W32(esp, 0x5419d8u); SPILL(); f_4e22b1(); if (g_unwind) return; RELOAD();
/* 5419d8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5419dd: je 0x5419eb */
  if (zf) goto L_5419eb;
L_5419df: /* 5419df: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5419e5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 5419e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5419e8: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x5419ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5419eb: /* 5419eb: mov eax, esi */
  eax = esi;
/* 5419ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5419ee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_541a10(void) {
  LOAD_REGS();
L_541a10: /* 541a10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 541a11: mov ebp, esp */
  ebp = esp;
/* 541a13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 541a15: push 0x559312 */
  { uint32_t v = 0x559312u; esp -= 4; W32(esp, v); }
/* 541a1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 541a20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 541a21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 541a28: sub esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 541a2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 541a2c: xor ebx, ebx */
  ebx = 0;
/* 541a2e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 541a2f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 541a30: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 541a33: mov edi, 1 */
  edi = 0x1u;
/* 541a38: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 541a3b: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 541a3e: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 541a41: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 541a44: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 541a47: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 541a4a: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 541a4e: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 541a51: mov dword ptr [ebp - 0x2c], 8 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x8u);
/* 541a58: call 0x4e2581 */
  esp -= 4; W32(esp, 0x541a5du); SPILL(); f_4e2581(); if (g_unwind) return; RELOAD();
/* 541a5d: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 541a60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 541a61: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 541a67: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 541a6b: call 0x4e3044 */
  esp -= 4; W32(esp, 0x541a70u); SPILL(); f_4e3044(); if (g_unwind) return; RELOAD();
/* 541a70: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 541a73: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 541a76: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 541a79: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 541a7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 541a7d: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 541a80: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 541a84: call 0x4e3e63 */
  esp -= 4; W32(esp, 0x541a89u); SPILL(); f_4e3e63(); if (g_unwind) return; RELOAD();
/* 541a89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 541a8b: je 0x541b3a */
  if (zf) goto L_541b3a;
L_541a91: /* 541a91: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 541a93: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 541a96: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 541a99: mov dword ptr [ebp - 0x20], 0x21 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x21u);
/* 541aa0: call 0x4e4502 */
  esp -= 4; W32(esp, 0x541aa5u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 541aa5: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
L_541aa8: /* 541aa8: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 541aaa: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 541aad: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 541aaf: je 0x541ab6 */
  if (zf) goto L_541ab6;
L_541ab1: /* 541ab1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 541ab4: jmp 0x541ab8 */
  goto L_541ab8;
L_541ab6: /* 541ab6: xor eax, eax */
  eax = 0;
L_541ab8: /* 541ab8: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 541abb: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 541abe: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 541abf: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 541ac1: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 541ac4: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
L_541ac7: /* 541ac7: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 541aca: je 0x541ae2 */
  if (zf) goto L_541ae2;
L_541acc: /* 541acc: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 541acf: mov edx, dword ptr [eax + ecx + 4] */
  edx = R32((uint32_t)(eax + ecx + 0x4u));
/* 541ad3: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 541ad5: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 541ad7: jne 0x541ade */
  if (!zf) goto L_541ade;
L_541ad9: /* 541ad9: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 541adc: jmp 0x541ae4 */
  goto L_541ae4;
L_541ade: /* 541ade: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 541ae0: jmp 0x541ac7 */
  goto L_541ac7;
L_541ae2: /* 541ae2: xor eax, eax */
  eax = 0;
L_541ae4: /* 541ae4: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 541ae6: je 0x541b35 */
  if (zf) goto L_541b35;
L_541ae8: /* 541ae8: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 541aeb: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 541aee: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 541af1: mov edi, ecx */
  edi = ecx;
/* 541af3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 541af4: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 541af6: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 541af9: jle 0x541b18 */
  if ((zf || sf != of)) goto L_541b18;
L_541afb: /* 541afb: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 541afe: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 541aff: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 541b02: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 541b04: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 541b07: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 541b0b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 541b0d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 541b10: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 541b13: call 0x4e4502 */
  esp -= 4; W32(esp, 0x541b18u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_541b18: /* 541b18: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 541b1b: lea ecx, [edi*4] */
  ecx = (uint32_t)(edi*4);
/* 541b22: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 541b23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 541b24: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 541b27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 541b28: call 0x4e195b */
  esp -= 4; W32(esp, 0x541b2du); SPILL(); f_4e195b(); if (g_unwind) return; RELOAD();
/* 541b2d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 541b30: jmp 0x541aa8 */
  goto L_541aa8;
L_541b35: /* 541b35: mov edi, 1 */
  edi = 0x1u;
L_541b3a: /* 541b3a: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 541b3d: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 541b40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 541b41: mov ecx, esi */
  ecx = esi;
/* 541b43: call 0x4e3ab7 */
  esp -= 4; W32(esp, 0x541b48u); SPILL(); f_4e3ab7(); if (g_unwind) return; RELOAD();
/* 541b48: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 541b4b: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 541b4d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 541b50: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 541b53: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 541b57: call 0x4e326a */
  esp -= 4; W32(esp, 0x541b5cu); SPILL(); f_4e326a(); if (g_unwind) return; RELOAD();
/* 541b5c: mov dword ptr [ebp - 0x88], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff78u), 0x569110u);
/* 541b66: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 541b69: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 541b6b: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 541b6f: je 0x541b7d */
  if (zf) goto L_541b7d;
L_541b71: /* 541b71: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 541b77: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 541b79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 541b7a: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x541b7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_541b7d: /* 541b7d: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 541b80: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 541b83: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 541b86: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 541b8a: call 0x4e2905 */
  esp -= 4; W32(esp, 0x541b8fu); SPILL(); f_4e2905(); if (g_unwind) return; RELOAD();
/* 541b8f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 541b92: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 541b93: mov eax, esi */
  eax = esi;
/* 541b95: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 541b96: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 541b9d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 541b9e: mov esp, ebp */
  esp = ebp;
/* 541ba0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 541ba1: ret  */
  esp += 4; SPILL(); return;
}

void f_541ba2(void) {
  LOAD_REGS();
L_541ba2: /* 541ba2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 541ba5: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 541baa: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 541bad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 541bae: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 541bb1: call 0x554df6 */
  esp -= 4; W32(esp, 0x541bb6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_541bb6(); return;
}

void f_541bb6(void) {
  LOAD_REGS();
L_541bb6: /* 541bb6: push 0x56e840 */
  { uint32_t v = 0x56e840u; esp -= 4; W32(esp, v); }
/* 541bbb: push 0x5a376c */
  { uint32_t v = 0x5a376cu; esp -= 4; W32(esp, v); }
/* 541bc0: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x541bc5u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 541bc5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 541bc8: xor ebx, ebx */
  ebx = 0;
/* 541bca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 541bcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 541bcc: call 0x554df6 */
  esp -= 4; W32(esp, 0x541bd1u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_541bd1: guest_badaddr(0x541bd1); return;
}

void f_541c60(void) {
  LOAD_REGS();
L_541c60: /* 541c60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 541c61: mov ebp, esp */
  ebp = esp;
/* 541c63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 541c65: push 0x559330 */
  { uint32_t v = 0x559330u; esp -= 4; W32(esp, v); }
/* 541c6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 541c70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 541c71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 541c78: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 541c7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 541c7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 541c7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 541c7e: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 541c81: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 541c83: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 541c86: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 541c8d: jne 0x541ca6 */
  if (!zf) goto L_541ca6;
L_541c8f: /* 541c8f: push 0xd46 */
  { uint32_t v = 0xd46u; esp -= 4; W32(esp, v); }
/* 541c94: push 0x5ac060 */
  { uint32_t v = 0x5ac060u; esp -= 4; W32(esp, v); }
/* 541c99: push 0x5ac06c */
  { uint32_t v = 0x5ac06cu; esp -= 4; W32(esp, v); }
/* 541c9e: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x541ca3u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 541ca3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_541ca6: /* 541ca6: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 541ca9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 541cab: je 0x541d35 */
  if (zf) goto L_541d35;
L_541cb1: /* 541cb1: mov eax, dword ptr [ebx + 0x4b0] */
  eax = R32((uint32_t)(ebx + 0x4b0u));
/* 541cb7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 541cb9: jne 0x541cd2 */
  if (!zf) goto L_541cd2;
L_541cbb: /* 541cbb: push 0xd47 */
  { uint32_t v = 0xd47u; esp -= 4; W32(esp, v); }
/* 541cc0: push 0x5ac074 */
  { uint32_t v = 0x5ac074u; esp -= 4; W32(esp, v); }
/* 541cc5: push 0x5ac080 */
  { uint32_t v = 0x5ac080u; esp -= 4; W32(esp, v); }
/* 541cca: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x541ccfu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 541ccf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_541cd2: /* 541cd2: mov eax, dword ptr [ebx + 0x518] */
  eax = R32((uint32_t)(ebx + 0x518u));
/* 541cd8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 541cda: jne 0x541cf3 */
  if (!zf) goto L_541cf3;
L_541cdc: /* 541cdc: push 0xd48 */
  { uint32_t v = 0xd48u; esp -= 4; W32(esp, v); }
/* 541ce1: push 0x5ac0a4 */
  { uint32_t v = 0x5ac0a4u; esp -= 4; W32(esp, v); }
/* 541ce6: push 0x5ac0b0 */
  { uint32_t v = 0x5ac0b0u; esp -= 4; W32(esp, v); }
/* 541ceb: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x541cf0u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 541cf0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_541cf3: /* 541cf3: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 541cf6: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 541cf9: jne 0x541d4c */
  if (!zf) goto L_541d4c;
L_541cfb: /* 541cfb: mov eax, dword ptr [0x69f44c] */
  eax = R32((uint32_t)(0x69f44cu));
/* 541d00: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 541d02: jne 0x541d4c */
  if (!zf) goto L_541d4c;
L_541d04: /* 541d04: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 541d07: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 541d0d: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 541d10: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 541d13: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 541d14: push 0x5ac10c */
  { uint32_t v = 0x5ac10cu; esp -= 4; W32(esp, v); }
L_541d19: /* 541d19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 541d1a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x541d1fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 541d1f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 541d22: xor eax, eax */
  eax = 0;
/* 541d24: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 541d27: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 541d2e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 541d2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 541d30: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 541d31: mov esp, ebp */
  esp = ebp;
/* 541d33: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 541d34: ret  */
  esp += 4; SPILL(); return;
L_541d35: /* 541d35: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 541d38: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 541d3e: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 541d41: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 541d44: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 541d45: push 0x5ac0d8 */
  { uint32_t v = 0x5ac0d8u; esp -= 4; W32(esp, v); }
/* 541d4a: jmp 0x541d19 */
  goto L_541d19;
L_541d4c: /* 541d4c: test byte ptr [ebx + 0x498], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x498u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 541d53: je 0x541da0 */
  if (zf) goto L_541da0;
L_541d55: /* 541d55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 541d57: push 0x5ac140 */
  { uint32_t v = 0x5ac140u; esp -= 4; W32(esp, v); }
/* 541d5c: push 0x5ac14c */
  { uint32_t v = 0x5ac14cu; esp -= 4; W32(esp, v); }
/* 541d61: call 0x4e1613 */
  esp -= 4; W32(esp, 0x541d66u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 541d66: mov edx, dword ptr [ebx + 0x20] */
  edx = R32((uint32_t)(ebx + 0x20u));
/* 541d69: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 541d6f: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 541d72: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 541d75: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 541d78: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 541d79: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
L_541d7c: /* 541d7c: mov ecx, dword ptr [ecx + edx*4] */
  ecx = R32((uint32_t)(ecx + edx*4));
/* 541d7f: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 541d82: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 541d83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 541d84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 541d85: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x541d8au); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 541d8a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 541d8d: xor eax, eax */
  eax = 0;
/* 541d8f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 541d92: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 541d99: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 541d9a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 541d9b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 541d9c: mov esp, ebp */
  esp = ebp;
/* 541d9e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 541d9f: ret  */
  esp += 4; SPILL(); return;
L_541da0: /* 541da0: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 541da3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 541da5: jne 0x541ddb */
  if (!zf) goto L_541ddb;
L_541da7: /* 541da7: cmp ebx, 0x69ff70 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x69ff70u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 541dad: je 0x541e58 */
  if (zf) goto L_541e58;
L_541db3: /* 541db3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 541db4: push 0x5ac160 */
  { uint32_t v = 0x5ac160u; esp -= 4; W32(esp, v); }
/* 541db9: push 0x5ac16c */
  { uint32_t v = 0x5ac16cu; esp -= 4; W32(esp, v); }
/* 541dbe: call 0x4e1613 */
  esp -= 4; W32(esp, 0x541dc3u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 541dc3: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 541dc9: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 541dcc: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 541dcf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 541dd2: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 541dd5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 541dd6: mov edx, dword ptr [ebx + 0x20] */
  edx = R32((uint32_t)(ebx + 0x20u));
/* 541dd9: jmp 0x541d7c */
  goto L_541d7c;
L_541ddb: /* 541ddb: mov edx, dword ptr [ebx + 0x4b0] */
  edx = R32((uint32_t)(ebx + 0x4b0u));
/* 541de1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 541de2: mov ecx, esi */
  ecx = esi;
/* 541de4: call 0x4e2b3a */
  esp -= 4; W32(esp, 0x541de9u); SPILL(); f_4e2b3a(); if (g_unwind) return; RELOAD();
/* 541de9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 541deb: jne 0x541e58 */
  if (!zf) goto L_541e58;
L_541ded: /* 541ded: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 541df0: mov esi, dword ptr [eax + 0x24] */
  esi = R32((uint32_t)(eax + 0x24u));
/* 541df3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 541df5: push 0x5ac184 */
  { uint32_t v = 0x5ac184u; esp -= 4; W32(esp, v); }
/* 541dfa: push 0x5ac190 */
  { uint32_t v = 0x5ac190u; esp -= 4; W32(esp, v); }
/* 541dff: call 0x4e1613 */
  esp -= 4; W32(esp, 0x541e04u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 541e04: mov ecx, dword ptr [ebx + 0x4b0] */
  ecx = R32((uint32_t)(ebx + 0x4b0u));
/* 541e0a: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 541e0d: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 541e13: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 541e16: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 541e19: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 541e1c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 541e1d: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 541e20: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 541e23: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 541e26: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 541e27: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 541e2a: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 541e2d: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 541e30: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 541e31: mov edx, dword ptr [ebx + 0x20] */
  edx = R32((uint32_t)(ebx + 0x20u));
/* 541e34: mov ecx, dword ptr [ecx + edx*4] */
  ecx = R32((uint32_t)(ecx + edx*4));
/* 541e37: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 541e3a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 541e3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 541e3c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 541e3d: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x541e42u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 541e42: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 541e45: xor eax, eax */
  eax = 0;
/* 541e47: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 541e4a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 541e51: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 541e52: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 541e53: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 541e54: mov esp, ebp */
  esp = ebp;
/* 541e56: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 541e57: ret  */
  esp += 4; SPILL(); return;
L_541e58: /* 541e58: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 541e5b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 541e5d: jne 0x541e72 */
  if (!zf) goto L_541e72;
L_541e5f: /* 541e5f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 541e60: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 541e63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 541e64: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 541e65: call 0x4e2ae5 */
  esp -= 4; W32(esp, 0x541e6au); SPILL(); f_4e2ae5(); if (g_unwind) return; RELOAD();
/* 541e6a: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 541e6c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 541e6f: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
L_541e72: /* 541e72: mov eax, dword ptr [0x5b3190] */
  eax = R32((uint32_t)(0x5b3190u));
/* 541e77: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 541e79: je 0x541edd */
  if (zf) goto L_541edd;
L_541e7b: /* 541e7b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 541e7d: je 0x541edd */
  if (zf) goto L_541edd;
L_541e7f: /* 541e7f: mov eax, edi */
  eax = edi;
/* 541e81: and eax, 0xfff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 541e86: mov esi, dword ptr [eax*4 + 0x69b440] */
  esi = R32((uint32_t)(eax*4 + 0x69b440u));
/* 541e8d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_541e90: /* 541e90: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 541e92: je 0x541edd */
  if (zf) goto L_541edd;
L_541e94: /* 541e94: cmp dword ptr [esi + 0x20], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x20u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 541e97: jne 0x541ed8 */
  if (!zf) goto L_541ed8;
L_541e99: /* 541e99: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 541e9c: cmp dword ptr [esi + 0x18], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 541e9f: jne 0x541ed8 */
  if (!zf) goto L_541ed8;
L_541ea1: /* 541ea1: cmp dword ptr [esi + 0x24], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x24u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 541ea4: je 0x541ed8 */
  if (zf) goto L_541ed8;
L_541ea6: /* 541ea6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 541ea8: mov ecx, esi */
  ecx = esi;
/* 541eaa: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x541eafu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 541eaf: mov edx, dword ptr [ebx + 0x20] */
  edx = R32((uint32_t)(ebx + 0x20u));
/* 541eb2: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 541eb8: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 541ebb: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 541ebe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 541ebf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 541ec0: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 541ec5: push 0x5ac1a4 */
  { uint32_t v = 0x5ac1a4u; esp -= 4; W32(esp, v); }
/* 541eca: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 541ecf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 541ed0: call 0x4e30df */
  esp -= 4; W32(esp, 0x541ed5u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 541ed5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_541ed8: /* 541ed8: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 541edb: jmp 0x541e90 */
  goto L_541e90;
L_541edd: /* 541edd: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 541ee3: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 541ee6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 541ee9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 541eeb: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 541eee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 541eef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 541ef0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 541ef1: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x541ef6u); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 541ef6: mov esi, eax */
  esi = eax;
/* 541ef8: xor ecx, ecx */
  ecx = 0;
/* 541efa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 541efd: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 541eff: je 0x541f19 */
  if (zf) goto L_541f19;
L_541f01: /* 541f01: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
L_541f04: /* 541f04: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 541f06: je 0x541f19 */
  if (zf) goto L_541f19;
L_541f08: /* 541f08: cmp eax, 0x5f0d80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5f0d80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 541f0d: je 0x541f14 */
  if (zf) goto L_541f14;
L_541f0f: /* 541f0f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 541f12: jmp 0x541f04 */
  goto L_541f04;
L_541f14: /* 541f14: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 541f17: jmp 0x541f1c */
  goto L_541f1c;
L_541f19: /* 541f19: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
L_541f1c: /* 541f1c: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 541f1e: mov dword ptr [ebp + 0x1c], 0xffffffff */
  W32((uint32_t)(ebp + 0x1cu), 0xffffffffu);
/* 541f25: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 541f28: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 541f2b: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 541f2e: jne 0x541f68 */
  if (!zf) goto L_541f68;
L_541f30: /* 541f30: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 541f33: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 541f35: je 0x541f3f */
  if (zf) goto L_541f3f;
L_541f37: /* 541f37: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 541f3a: jmp 0x542077 */
  goto L_542077;
L_541f3f: /* 541f3f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 541f41: mov ecx, ebx */
  ecx = ebx;
/* 541f43: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x541f46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 541f46: mov esi, dword ptr [0x69a758] */
  esi = R32((uint32_t)(0x69a758u));
/* 541f4c: mov esi, dword ptr [esi + edi*4] */
  esi = R32((uint32_t)(esi + edi*4));
/* 541f4f: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 541f55: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 541f57: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 541f5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 541f5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 541f5c: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x541f5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 541f5e: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 541f61: mov esi, eax */
  esi = eax;
/* 541f63: jmp 0x542077 */
  goto L_542077;
L_541f68: /* 541f68: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 541f6b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 541f6d: je 0x541f8a */
  if (zf) goto L_541f8a;
L_541f6f: /* 541f6f: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 541f71: je 0x541f8a */
  if (zf) goto L_541f8a;
L_541f73: /* 541f73: push 0xd82 */
  { uint32_t v = 0xd82u; esp -= 4; W32(esp, v); }
/* 541f78: push 0x5ac1c8 */
  { uint32_t v = 0x5ac1c8u; esp -= 4; W32(esp, v); }
/* 541f7d: push 0x5ac1d4 */
  { uint32_t v = 0x5ac1d4u; esp -= 4; W32(esp, v); }
/* 541f82: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x541f87u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 541f87: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_541f8a: /* 541f8a: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 541f8d: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 541f93: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 541f96: mov eax, dword ptr [0x5a0c98] */
  eax = R32((uint32_t)(0x5a0c98u));
/* 541f9b: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 541f9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 541f9f: push 0x5ac1e8 */
  { uint32_t v = 0x5ac1e8u; esp -= 4; W32(esp, v); }
/* 541fa4: push 0x30c */
  { uint32_t v = 0x30cu; esp -= 4; W32(esp, v); }
/* 541fa9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 541faa: call 0x4e30df */
  esp -= 4; W32(esp, 0x541fafu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 541faf: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 541fb2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 541fb5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 541fb7: je 0x541ff9 */
  if (zf) goto L_541ff9;
L_541fb9: /* 541fb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 541fbb: mov ecx, esi */
  ecx = esi;
/* 541fbd: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x541fc2u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 541fc2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 541fc4: push 0x5ac204 */
  { uint32_t v = 0x5ac204u; esp -= 4; W32(esp, v); }
/* 541fc9: push 0x5ac214 */
  { uint32_t v = 0x5ac214u; esp -= 4; W32(esp, v); }
/* 541fce: mov edi, eax */
  edi = eax;
/* 541fd0: call 0x4e1613 */
  esp -= 4; W32(esp, 0x541fd5u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 541fd5: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 541fdb: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 541fde: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 541fe1: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 541fe7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 541fea: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 541fed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 541fee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 541fef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 541ff0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 541ff1: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x541ff6u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 541ff6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_541ff9: /* 541ff9: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 541ffc: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 541fff: and eax, 0xc000100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc000100u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 542004: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 542006: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 542009: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 54200c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54200f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 542011: je 0x542031 */
  if (zf) goto L_542031;
L_542013: /* 542013: mov ecx, dword ptr [eax + 0x4b0] */
  ecx = R32((uint32_t)(eax + 0x4b0u));
/* 542019: mov edx, dword ptr [eax + 0x518] */
  edx = R32((uint32_t)(eax + 0x518u));
/* 54201f: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 542022: mov ecx, dword ptr [eax + 0x498] */
  ecx = R32((uint32_t)(eax + 0x498u));
/* 542028: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 54202b: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 54202e: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
L_542031: /* 542031: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 542033: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 542035: mov ecx, esi */
  ecx = esi;
/* 542037: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x54203au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54203a: mov eax, dword ptr [0x6a2e60] */
  eax = R32((uint32_t)(0x6a2e60u));
/* 54203f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 542041: je 0x542056 */
  if (zf) goto L_542056;
L_542043: /* 542043: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 542045: mov ecx, 0x6a2e5c */
  ecx = 0x6a2e5cu;
/* 54204a: call 0x4e444e */
  esp -= 4; W32(esp, 0x54204fu); SPILL(); f_4e444e(); if (g_unwind) return; RELOAD();
/* 54204f: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 542052: cmp dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 542054: je 0x54206d */
  if (zf) goto L_54206d;
L_542056: /* 542056: push 0xd96 */
  { uint32_t v = 0xd96u; esp -= 4; W32(esp, v); }
/* 54205b: push 0x5ac228 */
  { uint32_t v = 0x5ac228u; esp -= 4; W32(esp, v); }
/* 542060: push 0x5ac234 */
  { uint32_t v = 0x5ac234u; esp -= 4; W32(esp, v); }
/* 542065: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x54206au); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 54206a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54206d: /* 54206d: mov ecx, 0x6a2e5c */
  ecx = 0x6a2e5cu;
/* 542072: call 0x4e4453 */
  esp -= 4; W32(esp, 0x542077u); SPILL(); f_4e4453(); if (g_unwind) return; RELOAD();
L_542077: /* 542077: test byte ptr [ebx + 0x498], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x498u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 54207e: je 0x542086 */
  if (zf) goto L_542086;
L_542080: /* 542080: or edi, 0x4000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_542086: /* 542086: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 542089: xor eax, eax */
  eax = 0;
/* 54208b: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 54208e: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 542091: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 542094: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 542097: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 54209a: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 54209d: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 5420a0: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 5420a3: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* 5420a6: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 5420a9: mov dword ptr [esi + 0x24], ebx */
  W32((uint32_t)(esi + 0x24u), ebx);
/* 5420ac: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 5420ae: mov ecx, ebx */
  ecx = ebx;
/* 5420b0: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x5420b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5420b3: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 5420b6: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 5420b8: mov ecx, ebx */
  ecx = ebx;
/* 5420ba: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x5420bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5420bd: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 5420c0: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 5420c3: and edi, 0x200 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 5420c9: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edi = r;
  }
/* 5420cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5420cc: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 5420cf: sbb edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edi = r;
  }
/* 5420d1: not edi */
  edi = ~edi;
/* 5420d3: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 5420d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5420d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5420d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5420d8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5420d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5420da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5420db: call 0x4e11c7 */
  esp -= 4; W32(esp, 0x5420e0u); SPILL(); f_4e11c7(); if (g_unwind) return; RELOAD();
/* 5420e0: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 5420e3: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5420e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5420e7: mov ecx, esi */
  ecx = esi;
/* 5420e9: call 0x4e282e */
  esp -= 4; W32(esp, 0x5420eeu); SPILL(); f_4e282e(); if (g_unwind) return; RELOAD();
/* 5420ee: mov ecx, esi */
  ecx = esi;
/* 5420f0: call 0x4e1ba9 */
  esp -= 4; W32(esp, 0x5420f5u); SPILL(); f_4e1ba9(); if (g_unwind) return; RELOAD();
/* 5420f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5420f7: jne 0x542110 */
  if (!zf) goto L_542110;
L_5420f9: /* 5420f9: push 0xdae */
  { uint32_t v = 0xdaeu; esp -= 4; W32(esp, v); }
/* 5420fe: push 0x5ac268 */
  { uint32_t v = 0x5ac268u; esp -= 4; W32(esp, v); }
/* 542103: push 0x5ac274 */
  { uint32_t v = 0x5ac274u; esp -= 4; W32(esp, v); }
/* 542108: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x54210du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 54210d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_542110: /* 542110: mov eax, dword ptr [ebx + 0x498] */
  eax = R32((uint32_t)(ebx + 0x498u));
/* 542116: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 542119: je 0x54212f */
  if (zf) goto L_54212f;
L_54211b: /* 54211b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54211d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54211f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 542121: mov ecx, esi */
  ecx = esi;
/* 542123: call 0x4e2743 */
  esp -= 4; W32(esp, 0x542128u); SPILL(); f_4e2743(); if (g_unwind) return; RELOAD();
/* 542128: mov ecx, esi */
  ecx = esi;
/* 54212a: call 0x4e1d66 */
  esp -= 4; W32(esp, 0x54212fu); SPILL(); f_4e1d66(); if (g_unwind) return; RELOAD();
L_54212f: /* 54212f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 542132: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 542134: je 0x542151 */
  if (zf) goto L_542151;
L_542136: /* 542136: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 542139: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54213c: mov dword ptr [eax + 0x4b0], ecx */
  W32((uint32_t)(eax + 0x4b0u), ecx);
/* 542142: or dword ptr [eax + 0x498], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x498u), r);
  }
/* 542148: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 54214b: mov dword ptr [eax + 0x518], ecx */
  W32((uint32_t)(eax + 0x518u), ecx);
L_542151: /* 542151: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 542154: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 542155: mov eax, esi */
  eax = esi;
/* 542157: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 542158: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54215f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 542160: mov esp, ebp */
  esp = ebp;
/* 542162: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 542163: ret  */
  esp += 4; SPILL(); return;
}

void f_542164(void) {
  LOAD_REGS();
L_542164: /* 542164: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 542167: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54216c: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 54216f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 542170: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 542173: call 0x554df6 */
  esp -= 4; W32(esp, 0x542178u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_542178(); return;
}

void f_542178(void) {
  LOAD_REGS();
L_542178: /* 542178: push 0x56e8a4 */
  { uint32_t v = 0x56e8a4u; esp -= 4; W32(esp, v); }
/* 54217d: push 0x5ac284 */
  { uint32_t v = 0x5ac284u; esp -= 4; W32(esp, v); }
/* 542182: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x542187u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 542187: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 54218a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54218d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54218f: je 0x5421a2 */
  if (zf) goto L_5421a2;
L_542191: /* 542191: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 542194: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 54219a: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 54219d: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5421a0: jmp 0x5421a7 */
  goto L_5421a7;
L_5421a2: /* 5421a2: mov eax, 0x5ac28c */
  eax = 0x5ac28cu;
L_5421a7: /* 5421a7: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 5421ad: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 5421b0: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 5421b3: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5421b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5421b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5421b8: push 0x5ac298 */
  { uint32_t v = 0x5ac298u; esp -= 4; W32(esp, v); }
/* 5421bd: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5421c2u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5421c2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5421c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5421c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5421c9: call 0x554df6 */
  esp -= 4; W32(esp, 0x5421ceu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5421ce: guest_badaddr(0x5421ce); return;
}

void f_542330(void) {
  LOAD_REGS();
L_542330: /* 542330: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 542331: mov ebp, esp */
  ebp = esp;
/* 542333: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 542335: push 0x559340 */
  { uint32_t v = 0x559340u; esp -= 4; W32(esp, v); }
/* 54233a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 542340: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 542341: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 542348: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54234b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54234c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54234d: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 542350: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 542352: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 542353: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 542356: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54235d: jne 0x542376 */
  if (!zf) goto L_542376;
L_54235f: /* 54235f: push 0xdd3 */
  { uint32_t v = 0xdd3u; esp -= 4; W32(esp, v); }
/* 542364: push 0x5ac2a8 */
  { uint32_t v = 0x5ac2a8u; esp -= 4; W32(esp, v); }
/* 542369: push 0x5ac2b4 */
  { uint32_t v = 0x5ac2b4u; esp -= 4; W32(esp, v); }
/* 54236e: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x542373u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 542373: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_542376: /* 542376: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 542379: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 54237c: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 54237f: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 542382: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 542383: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 542386: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 542388: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 542389: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54238a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 54238d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54238e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54238f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 542390: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 542391: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x542396u); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 542396: mov esi, eax */
  esi = eax;
/* 542398: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54239b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54239d: je 0x5423a9 */
  if (zf) goto L_5423a9;
L_54239f: /* 54239f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5423a0: call dword ptr [edi + 0x518] */
  { uint32_t t = R32((uint32_t)(edi + 0x518u)); esp -= 4; W32(esp, 0x5423a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5423a6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5423a9: /* 5423a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5423ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5423ad: mov eax, esi */
  eax = esi;
/* 5423af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5423b0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5423b7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5423b8: mov esp, ebp */
  esp = ebp;
/* 5423ba: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5423bb: ret  */
  esp += 4; SPILL(); return;
}

void f_5423bc(void) {
  LOAD_REGS();
L_5423bc: /* 5423bc: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5423bf: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5423c4: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 5423c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5423c8: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 5423cb: call 0x554df6 */
  esp -= 4; W32(esp, 0x5423d0u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5423d0(); return;
}

void f_5423d0(void) {
  LOAD_REGS();
L_5423d0: /* 5423d0: push 0x56e8ec */
  { uint32_t v = 0x56e8ecu; esp -= 4; W32(esp, v); }
/* 5423d5: push 0x5ac2bc */
  { uint32_t v = 0x5ac2bcu; esp -= 4; W32(esp, v); }
/* 5423da: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5423dfu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5423df: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5423e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5423e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5423e6: call 0x554df6 */
  esp -= 4; W32(esp, 0x5423ebu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5423eb: guest_badaddr(0x5423eb); return;
}

void f_542420(void) {
  LOAD_REGS();
L_542420: /* 542420: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 542421: mov ebp, esp */
  ebp = esp;
/* 542423: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 542425: push 0x5593b0 */
  { uint32_t v = 0x5593b0u; esp -= 4; W32(esp, v); }
/* 54242a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 542430: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 542431: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 542438: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 542439: mov eax, 0xf86c */
  eax = 0xf86cu;
/* 54243e: call 0x554f80 */
  esp -= 4; W32(esp, 0x542443u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 542443: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 542446: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 542447: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 542448: xor ebx, ebx */
  ebx = 0;
/* 54244a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54244c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54244d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 542450: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 542453: jne 0x542470 */
  if (!zf) goto L_542470;
L_542455: /* 542455: call 0x4e3ddc */
  esp -= 4; W32(esp, 0x54245au); SPILL(); f_4e3ddc(); if (g_unwind) return; RELOAD();
/* 54245a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54245b: push 0x69f460 */
  { uint32_t v = 0x69f460u; esp -= 4; W32(esp, v); }
/* 542460: call 0x4e26df */
  esp -= 4; W32(esp, 0x542465u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 542465: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 542468: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54246a: je 0x542bf8 */
  if (zf) goto L_542bf8;
L_542470: /* 542470: call 0x4e3ddc */
  esp -= 4; W32(esp, 0x542475u); SPILL(); f_4e3ddc(); if (g_unwind) return; RELOAD();
/* 542475: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 542476: push 0x69f460 */
  { uint32_t v = 0x69f460u; esp -= 4; W32(esp, v); }
/* 54247b: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x542480u); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 542480: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 542483: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 542484: mov ecx, 0x6a0f14 */
  ecx = 0x6a0f14u;
/* 542489: call 0x4e3bf2 */
  esp -= 4; W32(esp, 0x54248eu); SPILL(); f_4e3bf2(); if (g_unwind) return; RELOAD();
/* 54248e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54248f: mov ecx, 0x69fa18 */
  ecx = 0x69fa18u;
/* 542494: call 0x4e2acc */
  esp -= 4; W32(esp, 0x542499u); SPILL(); f_4e2acc(); if (g_unwind) return; RELOAD();
/* 542499: xor esi, esi */
  esi = 0;
L_54249b: /* 54249b: mov eax, dword ptr [0x5afefc] */
  eax = R32((uint32_t)(0x5afefcu));
/* 5424a0: cmp esi, dword ptr [eax + 0x58] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5424a3: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 5424a6: jge 0x542882 */
  if ((sf == of)) goto L_542882;
L_5424ac: /* 5424ac: mov edx, dword ptr [eax + 0x54] */
  edx = R32((uint32_t)(eax + 0x54u));
/* 5424af: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 5424b2: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 5424b5: cmp dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5424b8: je 0x5424be */
  if (zf) goto L_5424be;
L_5424ba: /* 5424ba: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 5424bc: jmp 0x5424c3 */
  goto L_5424c3;
L_5424be: /* 5424be: mov edi, 0x5ed66c */
  edi = 0x5ed66cu;
L_5424c3: /* 5424c3: call 0x4e28d3 */
  esp -= 4; W32(esp, 0x5424c8u); SPILL(); f_4e28d3(); if (g_unwind) return; RELOAD();
/* 5424c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5424c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5424ca: lea eax, [ebp - 0x264] */
  eax = (uint32_t)(ebp + 0xfffffd9cu);
/* 5424d0: push 0x5ac484 */
  { uint32_t v = 0x5ac484u; esp -= 4; W32(esp, v); }
/* 5424d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5424d6: call 0x4e4183 */
  esp -= 4; W32(esp, 0x5424dbu); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 5424db: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5424de: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 5424e4: push 0x5ac490 */
  { uint32_t v = 0x5ac490u; esp -= 4; W32(esp, v); }
/* 5424e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5424ea: call 0x4e2220 */
  esp -= 4; W32(esp, 0x5424efu); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 5424ef: mov edi, eax */
  edi = eax;
/* 5424f1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5424f4: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5424f6: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* 5424f9: je 0x54287c */
  if (zf) goto L_54287c;
L_5424ff: /* 5424ff: push 0x5ac498 */
  { uint32_t v = 0x5ac498u; esp -= 4; W32(esp, v); }
/* 542504: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 542505: call 0x4e4183 */
  esp -= 4; W32(esp, 0x54250au); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 54250a: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 542510: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 542512: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 542515: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 542516: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 542518: lea eax, [ebp - 0x264] */
  eax = (uint32_t)(ebp + 0xfffffd9cu);
/* 54251e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54251f: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 542522: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 542523: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x542526u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 542526: xor eax, eax */
  eax = 0;
/* 542528: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 54252c: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 54252f: nop  */
L_542530: /* 542530: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 542533: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 542535: jge 0x54284e */
  if ((sf == of)) goto L_54284e;
L_54253b: /* 54253b: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54253e: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 542541: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 542544: cmp dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 542547: je 0x54254d */
  if (zf) goto L_54254d;
L_542549: /* 542549: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 54254b: jmp 0x542552 */
  goto L_542552;
L_54254d: /* 54254d: mov esi, 0x5ed66c */
  esi = 0x5ed66cu;
L_542552: /* 542552: call 0x4e28d3 */
  esp -= 4; W32(esp, 0x542557u); SPILL(); f_4e28d3(); if (g_unwind) return; RELOAD();
/* 542557: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 542558: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 542559: push 0x5ac4a4 */
  { uint32_t v = 0x5ac4a4u; esp -= 4; W32(esp, v); }
/* 54255e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54255f: call 0x4e4183 */
  esp -= 4; W32(esp, 0x542564u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 542564: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 542567: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 542568: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x54256du); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 54256d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 542570: lea esi, [edi + eax*2 - 8] */
  esi = (uint32_t)(edi + eax*2 + 0xfffffff8u);
/* 542574: call 0x4e3ddc */
  esp -= 4; W32(esp, 0x542579u); SPILL(); f_4e3ddc(); if (g_unwind) return; RELOAD();
/* 542579: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54257a: push 0x5ac4b0 */
  { uint32_t v = 0x5ac4b0u; esp -= 4; W32(esp, v); }
/* 54257f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 542580: call 0x4e4183 */
  esp -= 4; W32(esp, 0x542585u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 542585: mov ecx, dword ptr [0x5afeec] */
  ecx = R32((uint32_t)(0x5afeecu));
/* 54258b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54258d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 542590: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 542591: push 0x7b0c */
  { uint32_t v = 0x7b0cu; esp -= 4; W32(esp, v); }
/* 542596: lea edx, [ebp - 0xf87c] */
  edx = (uint32_t)(ebp + 0xffff0784u);
/* 54259c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54259d: push 0x5ac4b8 */
  { uint32_t v = 0x5ac4b8u; esp -= 4; W32(esp, v); }
/* 5425a2: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x5425a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5425a5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5425a7: jne 0x5425dc */
  if (!zf) goto L_5425dc;
L_5425a9: /* 5425a9: push 0x5ac4c8 */
  { uint32_t v = 0x5ac4c8u; esp -= 4; W32(esp, v); }
/* 5425ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5425af: call 0x4e4183 */
  esp -= 4; W32(esp, 0x5425b4u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 5425b4: mov ecx, dword ptr [0x5afeec] */
  ecx = R32((uint32_t)(0x5afeecu));
/* 5425ba: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 5425bc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5425bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5425c0: push 0x7b0c */
  { uint32_t v = 0x7b0cu; esp -= 4; W32(esp, v); }
/* 5425c5: lea edx, [ebp - 0xf87c] */
  edx = (uint32_t)(ebp + 0xffff0784u);
/* 5425cb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5425cc: push 0x5ac4d4 */
  { uint32_t v = 0x5ac4d4u; esp -= 4; W32(esp, v); }
/* 5425d1: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x5425d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5425d4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5425d6: je 0x54283c */
  if (zf) goto L_54283c;
L_5425dc: /* 5425dc: lea edi, [ebp - 0xf87c] */
  edi = (uint32_t)(ebp + 0xffff0784u);
L_5425e2: /* 5425e2: cmp word ptr [edi], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 5425e5: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 5425e8: je 0x54283c */
  if (zf) goto L_54283c;
L_5425ee: /* 5425ee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5425ef: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x5425f4u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 5425f4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5425f7: push 0x5ac4e4 */
  { uint32_t v = 0x5ac4e4u; esp -= 4; W32(esp, v); }
/* 5425fc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5425fd: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 542600: call 0x4e2220 */
  esp -= 4; W32(esp, 0x542605u); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 542605: mov esi, eax */
  esi = eax;
/* 542607: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54260a: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54260c: je 0x542830 */
  if (zf) goto L_542830;
L_542612: /* 542612: mov word ptr [esi], bx */
  W16((uint32_t)(esi), (ebx & 0xffffu));
/* 542615: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 542618: cmp word ptr [esi], 0x28 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x28u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54261c: jne 0x542624 */
  if (!zf) goto L_542624;
L_54261e: /* 54261e: mov word ptr [esi], bx */
  W16((uint32_t)(esi), (ebx & 0xffffu));
/* 542621: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_542624: /* 542624: cmp word ptr [esi], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 542627: je 0x542648 */
  if (zf) goto L_542648;
L_542629: /* 542629: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54262a: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x54262fu); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 54262f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 542632: cmp word ptr [esi + eax*2 - 2], 0x29 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + eax*2 + 0xfffffffeu))); uint16_t b = (uint16_t)(0x29u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 542638: jne 0x542648 */
  if (!zf) goto L_542648;
L_54263a: /* 54263a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54263b: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x542640u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 542640: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 542643: mov word ptr [esi + eax*2 - 2], bx */
  W16((uint32_t)(esi + eax*2 + 0xfffffffeu), (ebx & 0xffffu));
L_542648: /* 542648: push 0x5ac4e8 */
  { uint32_t v = 0x5ac4e8u; esp -= 4; W32(esp, v); }
/* 54264d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54264e: call 0x4e26df */
  esp -= 4; W32(esp, 0x542653u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 542653: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 542656: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 542658: jne 0x54273b */
  if (!zf) goto L_54273b;
L_54265e: /* 54265e: mov ecx, dword ptr [0x69fa1c] */
  ecx = R32((uint32_t)(0x69fa1cu));
/* 542664: mov eax, dword ptr [0x69fa20] */
  eax = R32((uint32_t)(0x69fa20u));
/* 542669: mov edi, ecx */
  edi = ecx;
/* 54266b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 54266c: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54266e: mov dword ptr [0x69fa1c], ecx */
  W32((uint32_t)(0x69fa1cu), ecx);
/* 542674: jle 0x542697 */
  if ((zf || sf != of)) goto L_542697;
L_542676: /* 542676: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 542679: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 54267a: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 54267d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54267f: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 542682: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 542686: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 542688: mov ecx, 0x69fa18 */
  ecx = 0x69fa18u;
/* 54268d: mov dword ptr [0x69fa20], eax */
  W32((uint32_t)(0x69fa20u), eax);
/* 542692: call 0x4e4502 */
  esp -= 4; W32(esp, 0x542697u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_542697: /* 542697: mov eax, dword ptr [0x69fa18] */
  eax = R32((uint32_t)(0x69fa18u));
/* 54269c: imul edi, edi, 0x3c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x3cu);
  edi = (uint32_t)r;
  }
/* 54269f: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  edi = r;
  }
/* 5426a1: mov eax, edi */
  eax = edi;
/* 5426a3: je 0x5426d3 */
  if (zf) goto L_5426d3;
L_5426a5: /* 5426a5: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 5426a7: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 5426aa: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 5426ad: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 5426b0: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
/* 5426b3: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 5426b6: mov dword ptr [eax + 0x18], ebx */
  W32((uint32_t)(eax + 0x18u), ebx);
/* 5426b9: mov dword ptr [eax + 0x1c], ebx */
  W32((uint32_t)(eax + 0x1cu), ebx);
/* 5426bc: mov dword ptr [eax + 0x20], ebx */
  W32((uint32_t)(eax + 0x20u), ebx);
/* 5426bf: mov dword ptr [eax + 0x24], ebx */
  W32((uint32_t)(eax + 0x24u), ebx);
/* 5426c2: mov dword ptr [eax + 0x28], ebx */
  W32((uint32_t)(eax + 0x28u), ebx);
/* 5426c5: mov dword ptr [eax + 0x2c], ebx */
  W32((uint32_t)(eax + 0x2cu), ebx);
/* 5426c8: mov dword ptr [eax + 0x30], ebx */
  W32((uint32_t)(eax + 0x30u), ebx);
/* 5426cb: mov dword ptr [eax + 0x34], ebx */
  W32((uint32_t)(eax + 0x34u), ebx);
/* 5426ce: mov dword ptr [eax + 0x38], ebx */
  W32((uint32_t)(eax + 0x38u), ebx);
/* 5426d1: jmp 0x5426d5 */
  goto L_5426d5;
L_5426d3: /* 5426d3: xor edi, edi */
  edi = 0;
L_5426d5: /* 5426d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5426d6: push 0x5ac4f8 */
  { uint32_t v = 0x5ac4f8u; esp -= 4; W32(esp, v); }
/* 5426db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5426dc: call 0x4e1a5a */
  esp -= 4; W32(esp, 0x5426e1u); SPILL(); f_4e1a5a(); if (g_unwind) return; RELOAD();
/* 5426e1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5426e4: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* 5426e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5426e8: push 0x5ac504 */
  { uint32_t v = 0x5ac504u; esp -= 4; W32(esp, v); }
/* 5426ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5426ee: call 0x4e1a5a */
  esp -= 4; W32(esp, 0x5426f3u); SPILL(); f_4e1a5a(); if (g_unwind) return; RELOAD();
/* 5426f3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5426f6: lea edx, [edi + 0x18] */
  edx = (uint32_t)(edi + 0x18u);
/* 5426f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5426fa: push 0x5ac514 */
  { uint32_t v = 0x5ac514u; esp -= 4; W32(esp, v); }
/* 5426ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 542700: call 0x4e1a5a */
  esp -= 4; W32(esp, 0x542705u); SPILL(); f_4e1a5a(); if (g_unwind) return; RELOAD();
/* 542705: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 542708: lea eax, [edi + 0x24] */
  eax = (uint32_t)(edi + 0x24u);
/* 54270b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54270c: push 0x5ac52c */
  { uint32_t v = 0x5ac52cu; esp -= 4; W32(esp, v); }
/* 542711: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 542712: call 0x4e1a5a */
  esp -= 4; W32(esp, 0x542717u); SPILL(); f_4e1a5a(); if (g_unwind) return; RELOAD();
/* 542717: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54271a: add edi, 0x30 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 54271d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54271e: push 0x5ac548 */
  { uint32_t v = 0x5ac548u; esp -= 4; W32(esp, v); }
/* 542723: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 542724: call 0x4e1a5a */
  esp -= 4; W32(esp, 0x542729u); SPILL(); f_4e1a5a(); if (g_unwind) return; RELOAD();
/* 542729: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 54272c: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 54272f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 542732: lea edi, [edi + eax*2 + 2] */
  edi = (uint32_t)(edi + eax*2 + 0x2u);
/* 542736: jmp 0x5425e2 */
  goto L_5425e2;
L_54273b: /* 54273b: push 0x5ac560 */
  { uint32_t v = 0x5ac560u; esp -= 4; W32(esp, v); }
/* 542740: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 542741: call 0x4e26df */
  esp -= 4; W32(esp, 0x542746u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 542746: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 542749: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54274b: jne 0x542830 */
  if (!zf) goto L_542830;
L_542751: /* 542751: mov ecx, dword ptr [0x6a0f18] */
  ecx = R32((uint32_t)(0x6a0f18u));
/* 542757: mov eax, dword ptr [0x6a0f1c] */
  eax = R32((uint32_t)(0x6a0f1cu));
/* 54275c: mov edi, ecx */
  edi = ecx;
/* 54275e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 54275f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 542761: mov dword ptr [0x6a0f18], ecx */
  W32((uint32_t)(0x6a0f18u), ecx);
/* 542767: jle 0x54278b */
  if ((zf || sf != of)) goto L_54278b;
L_542769: /* 542769: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 54276c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 54276d: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 542770: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 542772: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 542775: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 542779: mov dword ptr [0x6a0f1c], ecx */
  W32((uint32_t)(0x6a0f1cu), ecx);
/* 54277f: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 542781: mov ecx, 0x6a0f14 */
  ecx = 0x6a0f14u;
/* 542786: call 0x4e4502 */
  esp -= 4; W32(esp, 0x54278bu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_54278b: /* 54278b: mov eax, dword ptr [0x6a0f14] */
  eax = R32((uint32_t)(0x6a0f14u));
/* 542790: imul edi, edi, 0x2c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x2cu);
  edi = (uint32_t)r;
  }
/* 542793: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  edi = r;
  }
/* 542795: mov eax, edi */
  eax = edi;
/* 542797: je 0x5427bb */
  if (zf) goto L_5427bb;
L_542799: /* 542799: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 54279b: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 54279e: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 5427a1: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 5427a4: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
/* 5427a7: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 5427aa: mov dword ptr [eax + 0x18], ebx */
  W32((uint32_t)(eax + 0x18u), ebx);
/* 5427ad: mov dword ptr [eax + 0x1c], ebx */
  W32((uint32_t)(eax + 0x1cu), ebx);
/* 5427b0: mov dword ptr [eax + 0x20], ebx */
  W32((uint32_t)(eax + 0x20u), ebx);
/* 5427b3: mov dword ptr [eax + 0x24], ebx */
  W32((uint32_t)(eax + 0x24u), ebx);
/* 5427b6: mov dword ptr [eax + 0x28], ebx */
  W32((uint32_t)(eax + 0x28u), ebx);
/* 5427b9: jmp 0x5427bd */
  goto L_5427bd;
L_5427bb: /* 5427bb: xor edi, edi */
  edi = 0;
L_5427bd: /* 5427bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5427be: push 0x5ac578 */
  { uint32_t v = 0x5ac578u; esp -= 4; W32(esp, v); }
/* 5427c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5427c4: call 0x4e1a5a */
  esp -= 4; W32(esp, 0x5427c9u); SPILL(); f_4e1a5a(); if (g_unwind) return; RELOAD();
/* 5427c9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5427cc: lea edx, [edi + 0xc] */
  edx = (uint32_t)(edi + 0xcu);
/* 5427cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5427d0: push 0x5ac58c */
  { uint32_t v = 0x5ac58cu; esp -= 4; W32(esp, v); }
/* 5427d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5427d6: call 0x4e1a5a */
  esp -= 4; W32(esp, 0x5427dbu); SPILL(); f_4e1a5a(); if (g_unwind) return; RELOAD();
/* 5427db: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5427de: lea eax, [edi + 0x18] */
  eax = (uint32_t)(edi + 0x18u);
/* 5427e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5427e2: push 0x5ac59c */
  { uint32_t v = 0x5ac59cu; esp -= 4; W32(esp, v); }
/* 5427e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5427e8: call 0x4e1a5a */
  esp -= 4; W32(esp, 0x5427edu); SPILL(); f_4e1a5a(); if (g_unwind) return; RELOAD();
/* 5427ed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5427f0: lea ebx, [edi + 0x24] */
  ebx = (uint32_t)(edi + 0x24u);
/* 5427f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5427f4: push 0x5ac5ac */
  { uint32_t v = 0x5ac5acu; esp -= 4; W32(esp, v); }
/* 5427f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5427fa: call 0x4e3f67 */
  esp -= 4; W32(esp, 0x5427ffu); SPILL(); f_4e3f67(); if (g_unwind) return; RELOAD();
/* 5427ff: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 542802: add edi, 0x28 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 542805: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 542806: push 0x5ac5c0 */
  { uint32_t v = 0x5ac5c0u; esp -= 4; W32(esp, v); }
/* 54280b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54280c: call 0x4e2d83 */
  esp -= 4; W32(esp, 0x542811u); SPILL(); f_4e2d83(); if (g_unwind) return; RELOAD();
/* 542811: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 542813: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 542819: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 54281c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 54281f: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 542822: or ecx, 0x4000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 542828: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54282b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 54282e: xor ebx, ebx */
  ebx = 0;
L_542830: /* 542830: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 542833: lea edi, [edi + eax*2 + 2] */
  edi = (uint32_t)(edi + eax*2 + 0x2u);
/* 542837: jmp 0x5425e2 */
  goto L_5425e2;
L_54283c: /* 54283c: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 54283f: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 542842: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 542845: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 542846: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 542849: jmp 0x542530 */
  goto L_542530;
L_54284e: /* 54284e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54284f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 542850: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 542853: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 542857: call 0x4e2a63 */
  esp -= 4; W32(esp, 0x54285cu); SPILL(); f_4e2a63(); if (g_unwind) return; RELOAD();
/* 54285c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54285f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 542861: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 542865: je 0x542873 */
  if (zf) goto L_542873;
L_542867: /* 542867: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 54286d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 54286f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 542870: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x542873u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_542873: /* 542873: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 542876: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 542879: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
L_54287c: /* 54287c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 54287d: jmp 0x54249b */
  goto L_54249b;
L_542882: /* 542882: mov ecx, dword ptr [0x5a0ca4] */
  ecx = R32((uint32_t)(0x5a0ca4u));
/* 542888: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 54288a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54288b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 54288d: push 0x5ac5d8 */
  { uint32_t v = 0x5ac5d8u; esp -= 4; W32(esp, v); }
/* 542892: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 542895: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 542896: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x542899u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 542899: xor esi, esi */
  esi = 0;
/* 54289b: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 54289e: mov edi, edi */
  edi = edi;
L_5428a0: /* 5428a0: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 5428a3: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5428a5: jge 0x542bd3 */
  if ((sf == of)) goto L_542bd3;
L_5428ab: /* 5428ab: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 5428ae: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 5428b1: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 5428b4: push 0x5ac5e8 */
  { uint32_t v = 0x5ac5e8u; esp -= 4; W32(esp, v); }
/* 5428b9: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 5428bc: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 5428c0: call 0x4e13de */
  esp -= 4; W32(esp, 0x5428c5u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 5428c5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5428c7: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 5428ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5428cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5428cc: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 5428cf: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 5428d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5428d3: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 5428d6: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 5428d9: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5428db: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 5428df: call 0x4e443a */
  esp -= 4; W32(esp, 0x5428e4u); SPILL(); f_4e443a(); if (g_unwind) return; RELOAD();
/* 5428e4: mov esi, eax */
  esi = eax;
/* 5428e6: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5428e8: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 5428eb: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 5428ef: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 5428f2: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 5428f5: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5428fau); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5428fa: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 5428fd: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 542901: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x542906u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 542906: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 542908: je 0x542ba5 */
  if (zf) goto L_542ba5;
L_54290e: /* 54290e: push 0x5ac5ec */
  { uint32_t v = 0x5ac5ecu; esp -= 4; W32(esp, v); }
/* 542913: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 542916: call 0x4e13de */
  esp -= 4; W32(esp, 0x54291bu); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 54291b: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 54291e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54291f: lea edx, [ebp - 0x60] */
  edx = (uint32_t)(ebp + 0xffffffa0u);
/* 542922: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 542923: mov ecx, eax */
  ecx = eax;
/* 542925: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 542929: call 0x4e4282 */
  esp -= 4; W32(esp, 0x54292eu); SPILL(); f_4e4282(); if (g_unwind) return; RELOAD();
/* 54292e: mov esi, eax */
  esi = eax;
/* 542930: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 542933: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 542935: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 542939: je 0x542974 */
  if (zf) goto L_542974;
L_54293b: /* 54293b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 54293e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 542940: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 542943: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 542946: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 542949: call 0x4e4502 */
  esp -= 4; W32(esp, 0x54294eu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 54294e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 542951: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 542953: je 0x542974 */
  if (zf) goto L_542974;
L_542955: /* 542955: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 542958: je 0x54295e */
  if (zf) goto L_54295e;
L_54295a: /* 54295a: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 54295c: jmp 0x542963 */
  goto L_542963;
L_54295e: /* 54295e: mov esi, 0x5ed66c */
  esi = 0x5ed66cu;
L_542963: /* 542963: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 542966: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 542969: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54296a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54296b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54296c: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x542971u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 542971: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_542974: /* 542974: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 542976: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 542979: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 54297d: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
/* 542980: mov dword ptr [ebp - 0x58], ebx */
  W32((uint32_t)(ebp + 0xffffffa8u), ebx);
/* 542983: call 0x4e4502 */
  esp -= 4; W32(esp, 0x542988u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 542988: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 54298b: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 54298f: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x542994u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 542994: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 542996: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 542999: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 54299d: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* 5429a0: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 5429a3: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5429a8u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5429a8: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 5429ab: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 5429af: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x5429b4u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 5429b4: cmp dword ptr [ebp - 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5429b7: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5429ba: jne 0x5429c1 */
  if (!zf) goto L_5429c1;
L_5429bc: /* 5429bc: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_5429c1: /* 5429c1: push 0x5ac5f0 */
  { uint32_t v = 0x5ac5f0u; esp -= 4; W32(esp, v); }
/* 5429c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5429c7: call 0x4e26df */
  esp -= 4; W32(esp, 0x5429ccu); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 5429cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5429cf: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5429d1: je 0x542ba5 */
  if (zf) goto L_542ba5;
L_5429d7: /* 5429d7: cmp dword ptr [ebp - 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5429da: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5429dd: jne 0x5429e4 */
  if (!zf) goto L_5429e4;
L_5429df: /* 5429df: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_5429e4: /* 5429e4: push 0x5ac5fc */
  { uint32_t v = 0x5ac5fcu; esp -= 4; W32(esp, v); }
/* 5429e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5429ea: call 0x4e26df */
  esp -= 4; W32(esp, 0x5429efu); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 5429ef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5429f2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5429f4: je 0x542ba5 */
  if (zf) goto L_542ba5;
L_5429fa: /* 5429fa: cmp dword ptr [ebp - 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5429fd: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 542a00: jne 0x542a07 */
  if (!zf) goto L_542a07;
L_542a02: /* 542a02: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_542a07: /* 542a07: push 0x5ac604 */
  { uint32_t v = 0x5ac604u; esp -= 4; W32(esp, v); }
/* 542a0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 542a0d: call 0x4e26df */
  esp -= 4; W32(esp, 0x542a12u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 542a12: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 542a15: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 542a17: je 0x542ba5 */
  if (zf) goto L_542ba5;
L_542a1d: /* 542a1d: mov ecx, dword ptr [0x69fa1c] */
  ecx = R32((uint32_t)(0x69fa1cu));
/* 542a23: mov eax, dword ptr [0x69fa20] */
  eax = R32((uint32_t)(0x69fa20u));
/* 542a28: mov esi, ecx */
  esi = ecx;
/* 542a2a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 542a2b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 542a2d: mov dword ptr [0x69fa1c], ecx */
  W32((uint32_t)(0x69fa1cu), ecx);
/* 542a33: jle 0x542a56 */
  if ((zf || sf != of)) goto L_542a56;
L_542a35: /* 542a35: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 542a38: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 542a39: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 542a3c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 542a3e: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 542a41: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 542a45: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 542a47: mov ecx, 0x69fa18 */
  ecx = 0x69fa18u;
/* 542a4c: mov dword ptr [0x69fa20], eax */
  W32((uint32_t)(0x69fa20u), eax);
/* 542a51: call 0x4e4502 */
  esp -= 4; W32(esp, 0x542a56u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_542a56: /* 542a56: mov eax, dword ptr [0x69fa18] */
  eax = R32((uint32_t)(0x69fa18u));
/* 542a5b: imul esi, esi, 0x3c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x3cu);
  esi = (uint32_t)r;
  }
/* 542a5e: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  esi = r;
  }
/* 542a60: mov eax, esi */
  eax = esi;
/* 542a62: je 0x542a94 */
  if (zf) goto L_542a94;
L_542a64: /* 542a64: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 542a66: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 542a69: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 542a6c: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 542a6f: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
/* 542a72: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 542a75: mov dword ptr [eax + 0x18], ebx */
  W32((uint32_t)(eax + 0x18u), ebx);
/* 542a78: mov dword ptr [eax + 0x1c], ebx */
  W32((uint32_t)(eax + 0x1cu), ebx);
/* 542a7b: mov dword ptr [eax + 0x20], ebx */
  W32((uint32_t)(eax + 0x20u), ebx);
/* 542a7e: mov dword ptr [eax + 0x24], ebx */
  W32((uint32_t)(eax + 0x24u), ebx);
/* 542a81: mov dword ptr [eax + 0x28], ebx */
  W32((uint32_t)(eax + 0x28u), ebx);
/* 542a84: mov dword ptr [eax + 0x2c], ebx */
  W32((uint32_t)(eax + 0x2cu), ebx);
/* 542a87: mov dword ptr [eax + 0x30], ebx */
  W32((uint32_t)(eax + 0x30u), ebx);
/* 542a8a: mov dword ptr [eax + 0x34], ebx */
  W32((uint32_t)(eax + 0x34u), ebx);
/* 542a8d: mov dword ptr [eax + 0x38], ebx */
  W32((uint32_t)(eax + 0x38u), ebx);
/* 542a90: mov edi, eax */
  edi = eax;
/* 542a92: jmp 0x542a96 */
  goto L_542a96;
L_542a94: /* 542a94: xor edi, edi */
  edi = 0;
L_542a96: /* 542a96: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 542a99: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 542a9c: cmp dword ptr [ecx + eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 542aa0: je 0x542aa7 */
  if (zf) goto L_542aa7;
L_542aa2: /* 542aa2: mov eax, dword ptr [ecx + eax] */
  eax = R32((uint32_t)(ecx + eax));
/* 542aa5: jmp 0x542aac */
  goto L_542aac;
L_542aa7: /* 542aa7: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_542aac: /* 542aac: push 0x5ac610 */
  { uint32_t v = 0x5ac610u; esp -= 4; W32(esp, v); }
/* 542ab1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 542ab2: call 0x4e2220 */
  esp -= 4; W32(esp, 0x542ab7u); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 542ab7: lea esi, [eax + 2] */
  esi = (uint32_t)(eax + 0x2u);
/* 542aba: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 542abc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 542abf: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 542ac1: je 0x542afc */
  if (zf) goto L_542afc;
L_542ac3: /* 542ac3: cmp word ptr [esi], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 542ac6: je 0x542ad4 */
  if (zf) goto L_542ad4;
L_542ac8: /* 542ac8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 542ac9: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x542aceu); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 542ace: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 542ad1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 542ad2: jmp 0x542ad6 */
  goto L_542ad6;
L_542ad4: /* 542ad4: xor eax, eax */
  eax = 0;
L_542ad6: /* 542ad6: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 542ad8: mov ecx, edi */
  ecx = edi;
/* 542ada: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 542add: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 542ae0: call 0x4e4502 */
  esp -= 4; W32(esp, 0x542ae5u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 542ae5: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 542ae8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 542aea: je 0x542afc */
  if (zf) goto L_542afc;
L_542aec: /* 542aec: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 542aee: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 542af1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 542af2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 542af3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 542af4: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x542af9u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 542af9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_542afc: /* 542afc: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 542aff: cmp eax, 0x5ac614 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5ac614u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 542b04: lea esi, [edi + 0xc] */
  esi = (uint32_t)(edi + 0xcu);
/* 542b07: je 0x542b4d */
  if (zf) goto L_542b4d;
L_542b09: /* 542b09: cmp word ptr [0x5ac614], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(0x5ac614u))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 542b10: je 0x542b22 */
  if (zf) goto L_542b22;
L_542b12: /* 542b12: push 0x5ac614 */
  { uint32_t v = 0x5ac614u; esp -= 4; W32(esp, v); }
/* 542b17: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x542b1cu); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 542b1c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 542b1f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 542b20: jmp 0x542b24 */
  goto L_542b24;
L_542b22: /* 542b22: xor eax, eax */
  eax = 0;
L_542b24: /* 542b24: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 542b26: mov ecx, esi */
  ecx = esi;
/* 542b28: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 542b2b: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 542b2e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x542b33u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 542b33: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 542b36: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 542b38: je 0x542b4d */
  if (zf) goto L_542b4d;
L_542b3a: /* 542b3a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 542b3c: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 542b3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 542b3f: push 0x5ac614 */
  { uint32_t v = 0x5ac614u; esp -= 4; W32(esp, v); }
/* 542b44: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 542b45: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x542b4au); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 542b4a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_542b4d: /* 542b4d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 542b4e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 542b4f: mov ecx, 0x69f4e8 */
  ecx = 0x69f4e8u;
/* 542b54: call 0x4e2cde */
  esp -= 4; W32(esp, 0x542b59u); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 542b59: lea esi, [edi + 0x18] */
  esi = (uint32_t)(edi + 0x18u);
/* 542b5c: mov edx, eax */
  edx = eax;
/* 542b5e: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 542b61: cmp dword ptr [esi], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 542b63: je 0x542ba5 */
  if (zf) goto L_542ba5;
L_542b65: /* 542b65: mov eax, edx */
  eax = edx;
/* 542b67: cmp word ptr [eax], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 542b6a: je 0x542b7a */
  if (zf) goto L_542b7a;
L_542b6c: /* 542b6c: mov ecx, edx */
  ecx = edx;
/* 542b6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 542b6f: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x542b74u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 542b74: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 542b77: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 542b78: jmp 0x542b7c */
  goto L_542b7c;
L_542b7a: /* 542b7a: xor eax, eax */
  eax = 0;
L_542b7c: /* 542b7c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 542b7e: mov ecx, esi */
  ecx = esi;
/* 542b80: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 542b83: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 542b86: call 0x4e4502 */
  esp -= 4; W32(esp, 0x542b8bu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 542b8b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 542b8e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 542b90: je 0x542ba5 */
  if (zf) goto L_542ba5;
L_542b92: /* 542b92: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 542b94: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 542b97: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 542b9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 542b9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 542b9c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 542b9d: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x542ba2u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 542ba2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_542ba5: /* 542ba5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 542ba7: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 542baa: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 542bae: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 542bb1: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 542bb4: call 0x4e4502 */
  esp -= 4; W32(esp, 0x542bb9u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 542bb9: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 542bbc: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 542bc0: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x542bc5u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 542bc5: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 542bc8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 542bc9: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 542bcc: mov esi, eax */
  esi = eax;
/* 542bce: jmp 0x5428a0 */
  goto L_5428a0;
L_542bd3: /* 542bd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 542bd4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 542bd5: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 542bd8: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 542bdc: call 0x4e2a63 */
  esp -= 4; W32(esp, 0x542be1u); SPILL(); f_4e2a63(); if (g_unwind) return; RELOAD();
/* 542be1: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 542be4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 542be6: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 542bea: je 0x542bf8 */
  if (zf) goto L_542bf8;
L_542bec: /* 542bec: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 542bf2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 542bf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 542bf5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x542bf8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_542bf8: /* 542bf8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 542bfb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 542bfc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 542bfd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 542c04: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 542c05: mov esp, ebp */
  esp = ebp;
/* 542c07: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 542c08: ret  */
  esp += 4; SPILL(); return;
}

void f_542c09(void) {
  LOAD_REGS();
L_542c09: /* 542c09: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 542c0c: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 542c11: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 542c14: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 542c15: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 542c18: call 0x554df6 */
  esp -= 4; W32(esp, 0x542c1du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_542c1d(); return;
}

void f_542c1d(void) {
  LOAD_REGS();
L_542c1d: /* 542c1d: push 0x56e938 */
  { uint32_t v = 0x56e938u; esp -= 4; W32(esp, v); }
/* 542c22: push 0x5ac620 */
  { uint32_t v = 0x5ac620u; esp -= 4; W32(esp, v); }
/* 542c27: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x542c2cu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 542c2c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 542c2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 542c31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 542c33: call 0x554df6 */
  esp -= 4; W32(esp, 0x542c38u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_542c38: guest_badaddr(0x542c38); return;
}

void f_542e50(void) {
  LOAD_REGS();
L_542e50: /* 542e50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 542e51: mov ebp, esp */
  ebp = esp;
/* 542e53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 542e55: push 0x5593e0 */
  { uint32_t v = 0x5593e0u; esp -= 4; W32(esp, v); }
/* 542e5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 542e60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 542e61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 542e68: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 542e6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 542e6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 542e6d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 542e6e: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 542e71: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 542e73: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 542e76: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 542e7d: jne 0x542e96 */
  if (!zf) goto L_542e96;
L_542e7f: /* 542e7f: push 0xfaf */
  { uint32_t v = 0xfafu; esp -= 4; W32(esp, v); }
/* 542e84: push 0x5ac628 */
  { uint32_t v = 0x5ac628u; esp -= 4; W32(esp, v); }
/* 542e89: push 0x5ac634 */
  { uint32_t v = 0x5ac634u; esp -= 4; W32(esp, v); }
/* 542e8e: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x542e93u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 542e93: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_542e96: /* 542e96: cmp edi, 0x5f0d80 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x5f0d80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 542e9c: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 542e9f: jne 0x542ebc */
  if (!zf) goto L_542ebc;
L_542ea1: /* 542ea1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 542ea3: jne 0x542ebc */
  if (!zf) goto L_542ebc;
L_542ea5: /* 542ea5: push 0xfb0 */
  { uint32_t v = 0xfb0u; esp -= 4; W32(esp, v); }
/* 542eaa: push 0x5ac63c */
  { uint32_t v = 0x5ac63cu; esp -= 4; W32(esp, v); }
/* 542eaf: push 0x5ac648 */
  { uint32_t v = 0x5ac648u; esp -= 4; W32(esp, v); }
/* 542eb4: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x542eb9u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 542eb9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_542ebc: /* 542ebc: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 542ebf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 542ec0: call 0x4e3a49 */
  esp -= 4; W32(esp, 0x542ec5u); SPILL(); f_4e3a49(); if (g_unwind) return; RELOAD();
/* 542ec5: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 542ec8: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 542ece: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 542ed1: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 542ed4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 542ed7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 542ed9: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 542edc: je 0x542eee */
  if (zf) goto L_542eee;
L_542ede: /* 542ede: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 542ee0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 542ee2: mov ecx, esi */
  ecx = esi;
/* 542ee4: call 0x4e2cde */
  esp -= 4; W32(esp, 0x542ee9u); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 542ee9: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 542eec: jmp 0x542ef5 */
  goto L_542ef5;
L_542eee: /* 542eee: mov dword ptr [ebp + 0xc], 0x69f4d8 */
  W32((uint32_t)(ebp + 0xcu), 0x69f4d8u);
L_542ef5: /* 542ef5: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 542ef8: xor edi, edi */
  edi = 0;
L_542efa: /* 542efa: cmp edi, dword ptr [0x69fa1c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x69fa1cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 542f00: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 542f03: jge 0x542fdd */
  if ((sf == of)) goto L_542fdd;
L_542f09: /* 542f09: mov eax, dword ptr [0x69fa18] */
  eax = R32((uint32_t)(0x69fa18u));
/* 542f0e: mov esi, edi */
  esi = edi;
/* 542f10: imul esi, esi, 0x3c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x3cu);
  esi = (uint32_t)r;
  }
/* 542f13: mov ecx, dword ptr [esi + eax + 0x10] */
  ecx = R32((uint32_t)(esi + eax + 0x10u));
/* 542f17: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 542f19: je 0x542f21 */
  if (zf) goto L_542f21;
L_542f1b: /* 542f1b: mov eax, dword ptr [esi + eax + 0xc] */
  eax = R32((uint32_t)(esi + eax + 0xcu));
/* 542f1f: jmp 0x542f26 */
  goto L_542f26;
L_542f21: /* 542f21: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_542f26: /* 542f26: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 542f29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 542f2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 542f2b: call 0x4e26df */
  esp -= 4; W32(esp, 0x542f30u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 542f30: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 542f33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 542f35: jne 0x542fa8 */
  if (!zf) goto L_542fa8;
L_542f37: /* 542f37: mov eax, dword ptr [0x69fa18] */
  eax = R32((uint32_t)(0x69fa18u));
/* 542f3c: mov ecx, dword ptr [esi + eax + 0x1c] */
  ecx = R32((uint32_t)(esi + eax + 0x1cu));
/* 542f40: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 542f42: je 0x542f4a */
  if (zf) goto L_542f4a;
L_542f44: /* 542f44: mov eax, dword ptr [esi + eax + 0x18] */
  eax = R32((uint32_t)(esi + eax + 0x18u));
/* 542f48: jmp 0x542f4f */
  goto L_542f4f;
L_542f4a: /* 542f4a: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_542f4f: /* 542f4f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 542f52: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 542f53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 542f54: call 0x4e26df */
  esp -= 4; W32(esp, 0x542f59u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 542f59: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 542f5c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 542f5e: jne 0x542fa8 */
  if (!zf) goto L_542fa8;
L_542f60: /* 542f60: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* 542f63: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 542f66: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 542f69: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 542f6b: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 542f6e: jle 0x542f8c */
  if ((zf || sf != of)) goto L_542f8c;
L_542f70: /* 542f70: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 542f73: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 542f74: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 542f77: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 542f79: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 542f7c: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 542f80: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 542f82: mov ecx, ebx */
  ecx = ebx;
/* 542f84: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 542f87: call 0x4e4502 */
  esp -= 4; W32(esp, 0x542f8cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_542f8c: /* 542f8c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 542f8e: imul edi, edi, 0x3c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x3cu);
  edi = (uint32_t)r;
  }
/* 542f91: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  edi = r;
  }
/* 542f93: mov ecx, edi */
  ecx = edi;
/* 542f95: je 0x542fa5 */
  if (zf) goto L_542fa5;
L_542f97: /* 542f97: mov edx, dword ptr [0x69fa18] */
  edx = R32((uint32_t)(0x69fa18u));
/* 542f9d: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 542f9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 542fa0: call 0x4e3efe */
  esp -= 4; W32(esp, 0x542fa5u); SPILL(); f_4e3efe(); if (g_unwind) return; RELOAD();
L_542fa5: /* 542fa5: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_542fa8: /* 542fa8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 542fa9: jmp 0x542efa */
  goto L_542efa;
L_542fdd: /* 542fdd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 542fe0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 542fe1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 542fe2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 542fe9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 542fea: mov esp, ebp */
  esp = ebp;
/* 542fec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 542fed: ret  */
  esp += 4; SPILL(); return;
}

void f_542fae(void) {
  LOAD_REGS();
L_542fae: /* 542fae: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 542fb1: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 542fb6: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 542fb9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 542fba: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 542fbd: call 0x554df6 */
  esp -= 4; W32(esp, 0x542fc2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_542fc2(); return;
}

void f_542fc2(void) {
  LOAD_REGS();
L_542fc2: /* 542fc2: push 0x56e96c */
  { uint32_t v = 0x56e96cu; esp -= 4; W32(esp, v); }
/* 542fc7: push 0x5ac674 */
  { uint32_t v = 0x5ac674u; esp -= 4; W32(esp, v); }
/* 542fcc: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x542fd1u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 542fd1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 542fd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 542fd6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 542fd8: call 0x554df6 */
  esp -= 4; W32(esp, 0x542fddu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 542fdd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 542fe0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 542fe1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 542fe2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 542fe9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 542fea: mov esp, ebp */
  esp = ebp;
/* 542fec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 542fed: ret  */
  esp += 4; SPILL(); return;
}

void f_543060(void) {
  LOAD_REGS();
L_543060: /* 543060: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 543061: mov ebp, esp */
  ebp = esp;
/* 543063: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 543065: push 0x5593f0 */
  { uint32_t v = 0x5593f0u; esp -= 4; W32(esp, v); }
/* 54306a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 543070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 543071: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 543078: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54307b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 54307e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54307f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 543080: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 543081: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 543084: xor esi, esi */
  esi = 0;
/* 543086: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 543087: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 54308a: call 0x4e3a49 */
  esp -= 4; W32(esp, 0x54308fu); SPILL(); f_4e3a49(); if (g_unwind) return; RELOAD();
/* 54308f: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 543092: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 543095: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 543096: mov ecx, ebx */
  ecx = ebx;
/* 543098: call 0x4e3bf2 */
  esp -= 4; W32(esp, 0x54309du); SPILL(); f_4e3bf2(); if (g_unwind) return; RELOAD();
L_54309d: /* 54309d: cmp esi, dword ptr [0x6a0f18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f18u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5430a3: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 5430a6: jge 0x543156 */
  if ((sf == of)) goto L_543156;
L_5430ac: /* 5430ac: mov eax, dword ptr [0x6a0f14] */
  eax = R32((uint32_t)(0x6a0f14u));
/* 5430b1: mov edi, esi */
  edi = esi;
/* 5430b3: imul edi, edi, 0x2c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x2cu);
  edi = (uint32_t)r;
  }
/* 5430b6: mov ecx, dword ptr [edi + eax + 0x10] */
  ecx = R32((uint32_t)(edi + eax + 0x10u));
/* 5430ba: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5430bc: je 0x5430c4 */
  if (zf) goto L_5430c4;
L_5430be: /* 5430be: mov eax, dword ptr [edi + eax + 0xc] */
  eax = R32((uint32_t)(edi + eax + 0xcu));
/* 5430c2: jmp 0x5430c9 */
  goto L_5430c9;
L_5430c4: /* 5430c4: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_5430c9: /* 5430c9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5430cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5430cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5430ce: call 0x4e26df */
  esp -= 4; W32(esp, 0x5430d3u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 5430d3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5430d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5430d8: jne 0x543121 */
  if (!zf) goto L_543121;
L_5430da: /* 5430da: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 5430dd: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 5430e0: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* 5430e3: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5430e5: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 5430e8: jle 0x543106 */
  if ((zf || sf != of)) goto L_543106;
L_5430ea: /* 5430ea: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 5430ed: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5430ee: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5430f1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5430f3: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5430f6: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 5430fa: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 5430fc: mov ecx, ebx */
  ecx = ebx;
/* 5430fe: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 543101: call 0x4e4502 */
  esp -= 4; W32(esp, 0x543106u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_543106: /* 543106: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 543108: imul esi, esi, 0x2c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x2cu);
  esi = (uint32_t)r;
  }
/* 54310b: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  esi = r;
  }
/* 54310d: mov ecx, esi */
  ecx = esi;
/* 54310f: je 0x54311e */
  if (zf) goto L_54311e;
L_543111: /* 543111: mov eax, dword ptr [0x6a0f14] */
  eax = R32((uint32_t)(0x6a0f14u));
/* 543116: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 543118: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 543119: call 0x4e2dec */
  esp -= 4; W32(esp, 0x54311eu); SPILL(); f_4e2dec(); if (g_unwind) return; RELOAD();
L_54311e: /* 54311e: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_543121: /* 543121: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 543122: jmp 0x54309d */
  goto L_54309d;
L_543156: /* 543156: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 543159: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54315a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54315b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 543162: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 543163: mov esp, ebp */
  esp = ebp;
/* 543165: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 543166: ret  */
  esp += 4; SPILL(); return;
}

void f_543127(void) {
  LOAD_REGS();
L_543127: /* 543127: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54312a: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54312f: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 543132: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 543133: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 543136: call 0x554df6 */
  esp -= 4; W32(esp, 0x54313bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54313b(); return;
}

void f_54313b(void) {
  LOAD_REGS();
L_54313b: /* 54313b: push 0x56e9ac */
  { uint32_t v = 0x56e9acu; esp -= 4; W32(esp, v); }
/* 543140: push 0x5ac67c */
  { uint32_t v = 0x5ac67cu; esp -= 4; W32(esp, v); }
/* 543145: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54314au); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54314a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54314d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54314f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 543151: call 0x554df6 */
  esp -= 4; W32(esp, 0x543156u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 543156: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 543159: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54315a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54315b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 543162: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 543163: mov esp, ebp */
  esp = ebp;
/* 543165: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 543166: ret  */
  esp += 4; SPILL(); return;
}

void f_5431c0(void) {
  LOAD_REGS();
L_5431c0: /* 5431c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5431c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5431c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5431c3: mov edi, ecx */
  edi = ecx;
/* 5431c5: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 5431c8: xor ebp, ebp */
  ebp = 0;
/* 5431ca: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 5431cb: js 0x54323f */
  if (sf) goto L_54323f;
L_5431cd: /* 5431cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5431ce: mov ebx, esi */
  ebx = esi;
/* 5431d0: imul ebx, ebx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x1cu);
  ebx = (uint32_t)r;
  }
L_5431d3: /* 5431d3: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 5431d5: mov ecx, dword ptr [ebx + eax + 8] */
  ecx = R32((uint32_t)(ebx + eax + 0x8u));
/* 5431d9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5431db: lea eax, [ebx + eax + 4] */
  eax = (uint32_t)(ebx + eax + 0x4u);
/* 5431df: je 0x5431e5 */
  if (zf) goto L_5431e5;
L_5431e1: /* 5431e1: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 5431e3: jmp 0x5431ea */
  goto L_5431ea;
L_5431e5: /* 5431e5: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_5431ea: /* 5431ea: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 5431ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5431ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5431f0: call 0x4e26df */
  esp -= 4; W32(esp, 0x5431f5u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 5431f5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5431f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5431fa: jne 0x543207 */
  if (!zf) goto L_543207;
L_5431fc: /* 5431fc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5431fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5431ff: mov ecx, edi */
  ecx = edi;
/* 543201: call 0x4e434a */
  esp -= 4; W32(esp, 0x543206u); SPILL(); f_4e434a(); if (g_unwind) return; RELOAD();
/* 543206: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
L_543207: /* 543207: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 543208: sub ebx, 0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 54320b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54320d: jge 0x5431d3 */
  if ((sf == of)) goto L_5431d3;
L_54320f: /* 54320f: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 543211: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 543212: je 0x54323f */
  if (zf) goto L_54323f;
L_543214: /* 543214: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 543217: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 54321a: lea eax, [edx + edx + 8] */
  eax = (uint32_t)(edx + edx + 0x8u);
/* 54321e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 543220: jle 0x543238 */
  if ((zf || sf != of)) goto L_543238;
L_543222: /* 543222: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 543225: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 543226: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 543228: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 54322a: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 54322d: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 543230: lea edx, [ecx + ecx + 8] */
  edx = (uint32_t)(ecx + ecx + 0x8u);
/* 543234: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 543236: jg 0x543222 */
  if ((!zf && sf == of)) goto L_543222;
L_543238: /* 543238: mov ecx, edi */
  ecx = edi;
/* 54323a: call 0x4e2112 */
  esp -= 4; W32(esp, 0x54323fu); SPILL(); f_4e2112(); if (g_unwind) return; RELOAD();
L_54323f: /* 54323f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 543240: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 543241: mov eax, ebp */
  eax = ebp;
/* 543243: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 543244: ret 4 */
  esp += 8; SPILL(); return;
}

void f_543280(void) {
  LOAD_REGS();
L_543280: /* 543280: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 543282: push 0x559408 */
  { uint32_t v = 0x559408u; esp -= 4; W32(esp, v); }
/* 543287: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54328d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54328e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 543295: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 543296: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 543297: mov esi, ecx */
  esi = ecx;
/* 543299: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 54329d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 5432a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5432a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5432a3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 5432ab: call 0x4e2fb8 */
  esp -= 4; W32(esp, 0x5432b0u); SPILL(); f_4e2fb8(); if (g_unwind) return; RELOAD();
/* 5432b0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5432b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5432b4: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 5432bc: je 0x5432ca */
  if (zf) goto L_5432ca;
L_5432be: /* 5432be: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5432c4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5432c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5432c7: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x5432cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5432ca: /* 5432ca: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5432ce: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 5432d4: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 5432db: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 5432e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5432e3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5432ea: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5432ed: ret  */
  esp += 4; SPILL(); return;
}

void f_543310(void) {
  LOAD_REGS();
L_543310: /* 543310: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 543315: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 543319: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 54331d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54331f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 543321: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 543322: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 543326: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 543328: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 543329: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54332a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54332b: push 0x69fa30 */
  { uint32_t v = 0x69fa30u; esp -= 4; W32(esp, v); }
/* 543330: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x543335u); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 543335: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 543338: ret  */
  esp += 4; SPILL(); return;
}

void f_543350(void) {
  LOAD_REGS();
L_543350: /* 543350: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 543355: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 543359: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 54335d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54335f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 543361: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 543362: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 543366: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 543368: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 543369: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54336a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54336b: push 0x6a1980 */
  { uint32_t v = 0x6a1980u; esp -= 4; W32(esp, v); }
/* 543370: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x543375u); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 543375: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 543378: ret  */
  esp += 4; SPILL(); return;
}

void f_543390(void) {
  LOAD_REGS();
L_543390: /* 543390: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 543391: mov ebp, esp */
  ebp = esp;
/* 543393: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 543395: push 0x559420 */
  { uint32_t v = 0x559420u; esp -= 4; W32(esp, v); }
/* 54339a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5433a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5433a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5433a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5433ab: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 5433ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5433af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5433b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5433b1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5433b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5433b6: mov esi, ecx */
  esi = ecx;
/* 5433b8: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 5433bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5433bc: mov dword ptr [esi], 0x56d890 */
  W32((uint32_t)(esi), 0x56d890u);
/* 5433c2: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 5433c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5433c8: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 5433cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5433cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5433ce: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5433d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5433d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5433d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5433d4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5433db: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x5433e0u); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 5433e0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5433e3: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5433e6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5433e7: mov eax, esi */
  eax = esi;
/* 5433e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5433ea: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5433f1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5433f2: mov esp, ebp */
  esp = ebp;
/* 5433f4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5433f5: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_5433f8(void) {
  LOAD_REGS();
L_5433f8: /* 5433f8: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5433fb: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 543400: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 543403: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 543404: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 543407: call 0x554df6 */
  esp -= 4; W32(esp, 0x54340cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54340c(); return;
}

void f_54340c(void) {
  LOAD_REGS();
L_54340c: /* 54340c: push 0x56e9e8 */
  { uint32_t v = 0x56e9e8u; esp -= 4; W32(esp, v); }
/* 543411: push 0x5aa05c */
  { uint32_t v = 0x5aa05cu; esp -= 4; W32(esp, v); }
/* 543416: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54341bu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54341b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54341e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 543420: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 543422: call 0x554df6 */
  esp -= 4; W32(esp, 0x543427u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_543427: guest_badaddr(0x543427); return;
}

void f_543460(void) {
  LOAD_REGS();
L_543460: /* 543460: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 543461: mov ebp, esp */
  ebp = esp;
/* 543463: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 543465: push 0x559430 */
  { uint32_t v = 0x559430u; esp -= 4; W32(esp, v); }
/* 54346a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 543470: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 543471: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 543478: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 543479: mov eax, 0x1228 */
  eax = 0x1228u;
/* 54347e: call 0x554f80 */
  esp -= 4; W32(esp, 0x543483u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 543483: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 543484: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 543485: mov esi, ecx */
  esi = ecx;
/* 543487: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 54348a: mov eax, dword ptr [edx + 0x498] */
  eax = R32((uint32_t)(edx + 0x498u));
/* 543490: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 543491: xor edi, edi */
  edi = 0;
/* 543493: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 543496: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 543499: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 54349c: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 54349f: je 0x5434b0 */
  if (zf) goto L_5434b0;
L_5434a1: /* 5434a1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 5434a4: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5434a7: je 0x5434b0 */
  if (zf) goto L_5434b0;
L_5434a9: /* 5434a9: mov eax, 1 */
  eax = 0x1u;
/* 5434ae: jmp 0x5434b2 */
  goto L_5434b2;
L_5434b0: /* 5434b0: xor eax, eax */
  eax = 0;
L_5434b2: /* 5434b2: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5434b5: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5434b7: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 5434ba: je 0x5434c1 */
  if (zf) goto L_5434c1;
L_5434bc: /* 5434bc: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 5434bf: jmp 0x5434ea */
  goto L_5434ea;
L_5434c1: /* 5434c1: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5434c3: je 0x5434d5 */
  if (zf) goto L_5434d5;
L_5434c5: /* 5434c5: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 5434c8: cmp eax, dword ptr [0x69f458] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x69f458u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5434ce: je 0x5434d5 */
  if (zf) goto L_5434d5;
L_5434d0: /* 5434d0: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 5434d3: jmp 0x5434db */
  goto L_5434db;
L_5434d5: /* 5434d5: mov eax, dword ptr [edx + 0x4b4] */
  eax = R32((uint32_t)(edx + 0x4b4u));
L_5434db: /* 5434db: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 5434e1: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 5434e4: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5434e7: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_5434ea: /* 5434ea: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5434ec: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 5434ef: je 0x5434f9 */
  if (zf) goto L_5434f9;
L_5434f1: /* 5434f1: mov edx, dword ptr [edx + 0x3c] */
  edx = R32((uint32_t)(edx + 0x3cu));
/* 5434f4: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 5434f7: jmp 0x5434fc */
  goto L_5434fc;
L_5434f9: /* 5434f9: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_5434fc: /* 5434fc: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5434ff: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x543504u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
L_543504: /* 543504: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 543507: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 543509: je 0x543752 */
  if (zf) goto L_543752;
L_54350f: /* 54350f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 543512: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 543515: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 543517: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 543519: jne 0x54373c */
  if (!zf) goto L_54373c;
L_54351f: /* 54351f: mov dx, word ptr [0x69f4a8] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x69f4a8u))) & 0xffffu);
/* 543526: xor eax, eax */
  eax = 0;
/* 543528: mov word ptr [ebp - 0x1238], dx */
  W16((uint32_t)(ebp + 0xffffedc8u), (edx & 0xffffu));
/* 54352f: mov ecx, 0x1ff */
  ecx = 0x1ffu;
/* 543534: lea edi, [ebp - 0x1236] */
  edi = (uint32_t)(ebp + 0xffffedcau);
/* 54353a: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 54353c: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 543542: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 543544: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 543547: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 54354a: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54354d: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 543550: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 543553: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 543555: je 0x543565 */
  if (zf) goto L_543565;
L_543557: /* 543557: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54355a: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* 54355d: mov edi, dword ptr [ecx + eax*4] */
  edi = R32((uint32_t)(ecx + eax*4));
/* 543560: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 543563: jmp 0x54358a */
  goto L_54358a;
L_543565: /* 543565: test dword ptr [ebx + 0x3c], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x3cu))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54356c: je 0x543579 */
  if (zf) goto L_543579;
L_54356e: /* 54356e: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 543570: mov ecx, ebx */
  ecx = ebx;
/* 543572: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x543575u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 543575: mov ecx, eax */
  ecx = eax;
/* 543577: jmp 0x54357f */
  goto L_54357f;
L_543579: /* 543579: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54357c: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
L_54357f: /* 54357f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 543581: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 543583: call 0x4e2cde */
  esp -= 4; W32(esp, 0x543588u); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 543588: mov edi, eax */
  edi = eax;
L_54358a: /* 54358a: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 54358d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_543590: /* 543590: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 543592: je 0x5435a4 */
  if (zf) goto L_5435a4;
L_543594: /* 543594: cmp eax, 0x6a60e0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a60e0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 543599: je 0x5435a0 */
  if (zf) goto L_5435a0;
L_54359b: /* 54359b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 54359e: jmp 0x543590 */
  goto L_543590;
L_5435a0: /* 5435a0: mov ecx, ebx */
  ecx = ebx;
/* 5435a2: jmp 0x5435a6 */
  goto L_5435a6;
L_5435a4: /* 5435a4: xor ecx, ecx */
  ecx = 0;
L_5435a6: /* 5435a6: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5435a8: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 5435ab: je 0x5435c4 */
  if (zf) goto L_5435c4;
L_5435ad: /* 5435ad: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
L_5435b0: /* 5435b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5435b2: je 0x5435c4 */
  if (zf) goto L_5435c4;
L_5435b4: /* 5435b4: cmp eax, 0x6a7078 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a7078u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5435b9: je 0x5435c0 */
  if (zf) goto L_5435c0;
L_5435bb: /* 5435bb: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 5435be: jmp 0x5435b0 */
  goto L_5435b0;
L_5435c0: /* 5435c0: mov eax, ebx */
  eax = ebx;
/* 5435c2: jmp 0x5435c6 */
  goto L_5435c6;
L_5435c4: /* 5435c4: xor eax, eax */
  eax = 0;
L_5435c6: /* 5435c6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5435c8: je 0x543684 */
  if (zf) goto L_543684;
L_5435ce: /* 5435ce: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 5435d1: mov ecx, dword ptr [0x5afeec] */
  ecx = R32((uint32_t)(0x5afeecu));
/* 5435d7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5435d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5435da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5435dc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5435de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5435df: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x5435e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5435e2: mov esi, eax */
  esi = eax;
/* 5435e4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5435e6: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 5435e9: jne 0x543602 */
  if (!zf) goto L_543602;
L_5435eb: /* 5435eb: push 0x3d5 */
  { uint32_t v = 0x3d5u; esp -= 4; W32(esp, v); }
/* 5435f0: push 0x5aa884 */
  { uint32_t v = 0x5aa884u; esp -= 4; W32(esp, v); }
/* 5435f5: push 0x5aa890 */
  { uint32_t v = 0x5aa890u; esp -= 4; W32(esp, v); }
/* 5435fa: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5435ffu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5435ff: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_543602: /* 543602: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 543605: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 543606: mov ecx, esi */
  ecx = esi;
/* 543608: call 0x4e13ca */
  esp -= 4; W32(esp, 0x54360du); SPILL(); f_4e13ca(); if (g_unwind) return; RELOAD();
/* 54360d: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 543610: mov esi, dword ptr [edx + 0x48] */
  esi = R32((uint32_t)(edx + 0x48u));
/* 543613: add esi, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 543616: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 543619: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* 54361c: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 54361f: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 543622: xor ebx, ebx */
  ebx = 0;
L_543624: /* 543624: cmp ebx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 543627: jge 0x543739 */
  if ((sf == of)) goto L_543739;
L_54362d: /* 54362d: mov ax, word ptr [0x69f4ac] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x69f4acu))) & 0xffffu);
/* 543633: mov word ptr [ebp - 0xa38], ax */
  W16((uint32_t)(ebp + 0xfffff5c8u), (eax & 0xffffu));
/* 54363a: xor eax, eax */
  eax = 0;
/* 54363c: mov ecx, 0x1ff */
  ecx = 0x1ffu;
/* 543641: lea edi, [ebp - 0xa36] */
  edi = (uint32_t)(ebp + 0xfffff5cau);
/* 543647: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 543649: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 54364b: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 54364d: mov eax, ebx */
  eax = ebx;
/* 54364f: imul eax, dword ptr [ebp - 0x30] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  eax = (uint32_t)r;
  }
/* 543653: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 543655: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 543658: mov ecx, dword ptr [ecx + 0x6c] */
  ecx = R32((uint32_t)(ecx + 0x6cu));
/* 54365b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 54365d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54365f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 543660: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 543661: lea eax, [ebp - 0xa38] */
  eax = (uint32_t)(ebp + 0xfffff5c8u);
/* 543667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 543668: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x54366eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54366e: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 543671: lea ecx, [ebp - 0xa38] */
  ecx = (uint32_t)(ebp + 0xfffff5c8u);
/* 543677: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 543678: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 54367b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54367c: call 0x4e2b44 */
  esp -= 4; W32(esp, 0x543681u); SPILL(); f_4e2b44(); if (g_unwind) return; RELOAD();
/* 543681: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 543682: jmp 0x543624 */
  goto L_543624;
L_543684: /* 543684: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 543686: je 0x5436c6 */
  if (zf) goto L_5436c6;
L_543688: /* 543688: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 54368b: mov ecx, dword ptr [0x5afeec] */
  ecx = R32((uint32_t)(0x5afeecu));
/* 543691: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 543693: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 543694: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 543696: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 543698: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 543699: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x54369cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54369c: mov esi, eax */
  esi = eax;
/* 54369e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5436a0: jne 0x5436b9 */
  if (!zf) goto L_5436b9;
L_5436a2: /* 5436a2: push 0x3e4 */
  { uint32_t v = 0x3e4u; esp -= 4; W32(esp, v); }
/* 5436a7: push 0x5aa894 */
  { uint32_t v = 0x5aa894u; esp -= 4; W32(esp, v); }
/* 5436ac: push 0x5aa8a0 */
  { uint32_t v = 0x5aa8a0u; esp -= 4; W32(esp, v); }
/* 5436b1: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5436b6u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5436b6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5436b9: /* 5436b9: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 5436bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5436bd: mov ecx, esi */
  ecx = esi;
/* 5436bf: call 0x4e13ca */
  esp -= 4; W32(esp, 0x5436c4u); SPILL(); f_4e13ca(); if (g_unwind) return; RELOAD();
/* 5436c4: jmp 0x54373c */
  goto L_54373c;
L_5436c6: /* 5436c6: xor esi, esi */
  esi = 0;
L_5436c8: /* 5436c8: mov eax, dword ptr [ebx + 0x34] */
  eax = R32((uint32_t)(ebx + 0x34u));
/* 5436cb: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5436cd: jge 0x54373c */
  if ((sf == of)) goto L_54373c;
L_5436cf: /* 5436cf: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5436d2: je 0x543702 */
  if (zf) goto L_543702;
L_5436d4: /* 5436d4: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 5436d7: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 5436dd: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 5436e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5436e1: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5436e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5436e5: lea ecx, [ebp - 0x238] */
  ecx = (uint32_t)(ebp + 0xfffffdc8u);
/* 5436eb: push 0x5aa8a4 */
  { uint32_t v = 0x5aa8a4u; esp -= 4; W32(esp, v); }
/* 5436f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5436f1: call 0x4e4183 */
  esp -= 4; W32(esp, 0x5436f6u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 5436f6: lea edx, [ebp - 0x238] */
  edx = (uint32_t)(ebp + 0xfffffdc8u);
/* 5436fc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5436ff: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
L_543702: /* 543702: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 543705: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 543707: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 543709: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54370a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54370b: lea eax, [ebp - 0x1238] */
  eax = (uint32_t)(ebp + 0xffffedc8u);
/* 543711: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 543712: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 543713: mov ecx, ebx */
  ecx = ebx;
/* 543715: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x54371bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54371b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 54371e: mov ecx, dword ptr [0x5afeec] */
  ecx = R32((uint32_t)(0x5afeecu));
/* 543724: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 543726: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 543727: lea eax, [ebp - 0x1238] */
  eax = (uint32_t)(ebp + 0xffffedc8u);
/* 54372d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54372e: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 543731: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 543732: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 543733: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x543736u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 543736: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 543737: jmp 0x5436c8 */
  goto L_5436c8;
L_543739: /* 543739: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
L_54373c: /* 54373c: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* 54373f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 543742: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 543745: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x54374au); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 54374a: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54374d: jmp 0x543504 */
  goto L_543504;
L_543752: /* 543752: mov ecx, dword ptr [0x5afeec] */
  ecx = R32((uint32_t)(0x5afeecu));
/* 543758: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 54375a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54375c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54375e: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0x543761u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 543761: mov ebx, dword ptr [esi + 0x24] */
  ebx = R32((uint32_t)(esi + 0x24u));
/* 543764: mov cl, 4 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x4u) & 0xffu);
L_543766: /* 543766: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 543769: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54376b: je 0x543779 */
  if (zf) goto L_543779;
L_54376d: /* 54376d: test byte ptr [eax + 0x498], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x498u))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 543773: je 0x543779 */
  if (zf) goto L_543779;
L_543775: /* 543775: mov ebx, eax */
  ebx = eax;
/* 543777: jmp 0x543766 */
  goto L_543766;
L_543779: /* 543779: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 54377c: mov dword ptr [ebp - 0x18], 0x5f0d80 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x5f0d80u);
/* 543783: mov dword ptr [ebp - 0x14], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffecu), 0xffffffffu);
/* 54378a: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x54378fu); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 54378f: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
/* 543795: jmp 0x5437a0 */
  goto L_5437a0;
L_5437a0: /* 5437a0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5437a3: cmp ecx, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5437a9: jge 0x543852 */
  if ((sf == of)) goto L_543852;
L_5437af: /* 5437af: mov eax, dword ptr [esi + ecx*4] */
  eax = R32((uint32_t)(esi + ecx*4));
L_5437b2: /* 5437b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5437b4: je 0x543801 */
  if (zf) goto L_543801;
L_5437b6: /* 5437b6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5437b8: je 0x5437bf */
  if (zf) goto L_5437bf;
L_5437ba: /* 5437ba: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 5437bd: jmp 0x5437b2 */
  goto L_5437b2;
L_5437bf: /* 5437bf: mov esi, dword ptr [esi + ecx*4] */
  esi = R32((uint32_t)(esi + ecx*4));
/* 5437c2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5437c4: mov edi, dword ptr [esi + 0x4ec] */
  edi = R32((uint32_t)(esi + 0x4ecu));
/* 5437ca: mov ecx, esi */
  ecx = esi;
/* 5437cc: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x5437cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5437cf: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5437d1: je 0x5437ea */
  if (zf) goto L_5437ea;
L_5437d3: /* 5437d3: push 0x21b */
  { uint32_t v = 0x21bu; esp -= 4; W32(esp, v); }
/* 5437d8: push 0x5a3b00 */
  { uint32_t v = 0x5a3b00u; esp -= 4; W32(esp, v); }
/* 5437dd: push 0x5a3ad4 */
  { uint32_t v = 0x5a3ad4u; esp -= 4; W32(esp, v); }
/* 5437e2: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5437e7u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5437e7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5437ea: /* 5437ea: mov ecx, dword ptr [esi + 0x4e8] */
  ecx = R32((uint32_t)(esi + 0x4e8u));
/* 5437f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5437f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5437f4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5437f6: call 0x4e2743 */
  esp -= 4; W32(esp, 0x5437fbu); SPILL(); f_4e2743(); if (g_unwind) return; RELOAD();
/* 5437fb: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
L_543801: /* 543801: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 543804: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x543809u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 543809: jmp 0x5437a0 */
  goto L_5437a0;
L_543852: /* 543852: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 543855: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 543856: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 543857: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54385e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54385f: mov esp, ebp */
  esp = ebp;
/* 543861: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 543862: ret 8 */
  esp += 12; SPILL(); return;
}

void f_543797(void) {
  LOAD_REGS();
L_543797: /* 543797: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 54379e: mov edi, edi */
  edi = edi;
L_5437a0: /* 5437a0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5437a3: cmp ecx, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5437a9: jge 0x543852 */
  if ((sf == of)) goto L_543852;
L_5437af: /* 5437af: mov eax, dword ptr [esi + ecx*4] */
  eax = R32((uint32_t)(esi + ecx*4));
L_5437b2: /* 5437b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5437b4: je 0x543801 */
  if (zf) goto L_543801;
L_5437b6: /* 5437b6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5437b8: je 0x5437bf */
  if (zf) goto L_5437bf;
L_5437ba: /* 5437ba: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 5437bd: jmp 0x5437b2 */
  goto L_5437b2;
L_5437bf: /* 5437bf: mov esi, dword ptr [esi + ecx*4] */
  esi = R32((uint32_t)(esi + ecx*4));
/* 5437c2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5437c4: mov edi, dword ptr [esi + 0x4ec] */
  edi = R32((uint32_t)(esi + 0x4ecu));
/* 5437ca: mov ecx, esi */
  ecx = esi;
/* 5437cc: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x5437cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5437cf: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5437d1: je 0x5437ea */
  if (zf) goto L_5437ea;
L_5437d3: /* 5437d3: push 0x21b */
  { uint32_t v = 0x21bu; esp -= 4; W32(esp, v); }
/* 5437d8: push 0x5a3b00 */
  { uint32_t v = 0x5a3b00u; esp -= 4; W32(esp, v); }
/* 5437dd: push 0x5a3ad4 */
  { uint32_t v = 0x5a3ad4u; esp -= 4; W32(esp, v); }
/* 5437e2: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5437e7u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5437e7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5437ea: /* 5437ea: mov ecx, dword ptr [esi + 0x4e8] */
  ecx = R32((uint32_t)(esi + 0x4e8u));
/* 5437f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5437f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5437f4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5437f6: call 0x4e2743 */
  esp -= 4; W32(esp, 0x5437fbu); SPILL(); f_4e2743(); if (g_unwind) return; RELOAD();
/* 5437fb: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
L_543801: /* 543801: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 543804: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x543809u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 543809: jmp 0x5437a0 */
  goto L_5437a0;
L_543852: /* 543852: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 543855: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 543856: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 543857: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54385e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54385f: mov esp, ebp */
  esp = ebp;
/* 543861: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 543862: ret 8 */
  esp += 12; SPILL(); return;
}

void f_54380b(void) {
  LOAD_REGS();
L_54380b: /* 54380b: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 54380e: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 543813: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 543816: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 543817: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 54381a: call 0x554df6 */
  esp -= 4; W32(esp, 0x54381fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54381f(); return;
}

void f_54381f(void) {
  LOAD_REGS();
L_54381f: /* 54381f: push 0x56ea10 */
  { uint32_t v = 0x56ea10u; esp -= 4; W32(esp, v); }
/* 543824: push 0x5aa8b4 */
  { uint32_t v = 0x5aa8b4u; esp -= 4; W32(esp, v); }
/* 543829: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54382eu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54382e: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 543831: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 543834: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 543836: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54383bu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54383b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54383c: push 0x5aa8bc */
  { uint32_t v = 0x5aa8bcu; esp -= 4; W32(esp, v); }
/* 543841: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x543846u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 543846: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 543849: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54384b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54384d: call 0x554df6 */
  esp -= 4; W32(esp, 0x543852u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 543852: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 543855: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 543856: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 543857: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54385e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54385f: mov esp, ebp */
  esp = ebp;
/* 543861: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 543862: ret 8 */
  esp += 12; SPILL(); return;
}

void f_543980(void) {
  LOAD_REGS();
L_543980: /* 543980: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 543981: mov ebp, esp */
  ebp = esp;
/* 543983: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 543985: push 0x559440 */
  { uint32_t v = 0x559440u; esp -= 4; W32(esp, v); }
/* 54398a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 543990: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 543991: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 543998: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54399b: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 54399e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5439a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5439a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5439a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5439a3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5439a6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5439ad: je 0x543a36 */
  if (zf) goto L_543a36;
L_5439b3: /* 5439b3: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 5439b6: mov dword ptr [ebp - 0x20], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x6a0f20u);
/* 5439bd: mov dword ptr [ebp - 0x1c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xffffffffu);
/* 5439c4: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x5439c9u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 5439c9: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 5439cc: mov ebx, dword ptr [0x6a0f04] */
  ebx = R32((uint32_t)(0x6a0f04u));
L_5439d2: /* 5439d2: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5439d5: cmp esi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5439db: jge 0x543a39 */
  if ((sf == of)) goto L_543a39;
L_5439dd: /* 5439dd: mov eax, dword ptr [ebx + esi*4] */
  eax = R32((uint32_t)(ebx + esi*4));
/* 5439e0: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
L_5439e3: /* 5439e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5439e5: je 0x5439f1 */
  if (zf) goto L_5439f1;
L_5439e7: /* 5439e7: cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5439ea: je 0x5439ff */
  if (zf) goto L_5439ff;
L_5439ec: /* 5439ec: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 5439ef: jmp 0x5439e3 */
  goto L_5439e3;
L_5439f1: /* 5439f1: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 5439f4: xor eax, eax */
  eax = 0;
/* 5439f6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5439f8: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 5439fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5439fd: je 0x543a2c */
  if (zf) goto L_543a2c;
L_5439ff: /* 5439ff: mov eax, dword ptr [ebx + esi*4] */
  eax = R32((uint32_t)(ebx + esi*4));
/* 543a02: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 543a05: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 543a07: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 543a09: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 543a0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 543a0c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 543a0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 543a10: mov ecx, edi */
  ecx = edi;
/* 543a12: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x543a18u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 543a18: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 543a1e: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 543a21: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 543a23: call dword ptr [edx + 0x44] */
  { uint32_t t = R32((uint32_t)(edx + 0x44u)); esp -= 4; W32(esp, 0x543a26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 543a26: mov ebx, dword ptr [0x6a0f04] */
  ebx = R32((uint32_t)(0x6a0f04u));
L_543a2c: /* 543a2c: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 543a2f: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x543a34u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 543a34: jmp 0x5439d2 */
  goto L_5439d2;
L_543a36: /* 543a36: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
L_543a39: /* 543a39: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 543a3c: mov ecx, dword ptr [esi + 0x4e8] */
  ecx = R32((uint32_t)(esi + 0x4e8u));
/* 543a42: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 543a45: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 543a48: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 543a4a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 543a4c: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 543a4e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 543a4f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 543a50: mov ecx, edi */
  ecx = edi;
/* 543a52: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x543a58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 543a58: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 543a5a: mov edi, dword ptr [esi + 0x4ec] */
  edi = R32((uint32_t)(esi + 0x4ecu));
/* 543a60: mov ecx, esi */
  ecx = esi;
/* 543a62: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x543a65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 543a65: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 543a67: je 0x543a80 */
  if (zf) goto L_543a80;
L_543a69: /* 543a69: push 0x21b */
  { uint32_t v = 0x21bu; esp -= 4; W32(esp, v); }
/* 543a6e: push 0x5a3b00 */
  { uint32_t v = 0x5a3b00u; esp -= 4; W32(esp, v); }
/* 543a73: push 0x5a3ad4 */
  { uint32_t v = 0x5a3ad4u; esp -= 4; W32(esp, v); }
/* 543a78: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x543a7du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 543a7d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_543a80: /* 543a80: mov ecx, dword ptr [esi + 0x4e8] */
  ecx = R32((uint32_t)(esi + 0x4e8u));
/* 543a86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 543a88: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 543a8d: call 0x4e3b84 */
  esp -= 4; W32(esp, 0x543a92u); SPILL(); f_4e3b84(); if (g_unwind) return; RELOAD();
/* 543a92: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 543a95: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 543a96: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 543a97: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 543a9e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 543a9f: mov esp, ebp */
  esp = ebp;
/* 543aa1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 543aa2: ret  */
  esp += 4; SPILL(); return;
}

void f_543aa3(void) {
  LOAD_REGS();
L_543aa3: /* 543aa3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 543aa6: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 543aab: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 543aae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 543aaf: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 543ab2: call 0x554df6 */
  esp -= 4; W32(esp, 0x543ab7u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_543ab7(); return;
}

void f_543ab7(void) {
  LOAD_REGS();
L_543ab7: /* 543ab7: push 0x56ea40 */
  { uint32_t v = 0x56ea40u; esp -= 4; W32(esp, v); }
/* 543abc: push 0x5aa9dc */
  { uint32_t v = 0x5aa9dcu; esp -= 4; W32(esp, v); }
/* 543ac1: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x543ac6u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 543ac6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 543ac9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 543acb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 543acd: call 0x554df6 */
  esp -= 4; W32(esp, 0x543ad2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_543ad2: guest_badaddr(0x543ad2); return;
}

void f_543b40(void) {
  LOAD_REGS();
L_543b40: /* 543b40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 543b41: mov ebp, esp */
  ebp = esp;
/* 543b43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 543b45: push 0x559483 */
  { uint32_t v = 0x559483u; esp -= 4; W32(esp, v); }
/* 543b4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 543b50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 543b51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 543b58: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 543b5b: mov eax, dword ptr [0x69fa28] */
  eax = R32((uint32_t)(0x69fa28u));
/* 543b60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 543b61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 543b62: xor ebx, ebx */
  ebx = 0;
/* 543b64: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 543b66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 543b67: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 543b6a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 543b6d: je 0x543b86 */
  if (zf) goto L_543b86;
L_543b6f: /* 543b6f: push 0x5ce */
  { uint32_t v = 0x5ceu; esp -= 4; W32(esp, v); }
/* 543b74: push 0x5aad98 */
  { uint32_t v = 0x5aad98u; esp -= 4; W32(esp, v); }
/* 543b79: push 0x5aada4 */
  { uint32_t v = 0x5aada4u; esp -= 4; W32(esp, v); }
/* 543b7e: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x543b83u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 543b83: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_543b86: /* 543b86: cmp dword ptr [0x6a2918], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x6a2918u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 543b8c: je 0x543ba5 */
  if (zf) goto L_543ba5;
L_543b8e: /* 543b8e: push 0x5cf */
  { uint32_t v = 0x5cfu; esp -= 4; W32(esp, v); }
/* 543b93: push 0x5aadb8 */
  { uint32_t v = 0x5aadb8u; esp -= 4; W32(esp, v); }
/* 543b98: push 0x5aadc4 */
  { uint32_t v = 0x5aadc4u; esp -= 4; W32(esp, v); }
/* 543b9d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x543ba2u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 543ba2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_543ba5: /* 543ba5: cmp dword ptr [0x69f454], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x69f454u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 543bab: je 0x543bc4 */
  if (zf) goto L_543bc4;
L_543bad: /* 543bad: push 0x5d0 */
  { uint32_t v = 0x5d0u; esp -= 4; W32(esp, v); }
/* 543bb2: push 0x5aade0 */
  { uint32_t v = 0x5aade0u; esp -= 4; W32(esp, v); }
/* 543bb7: push 0x5aadec */
  { uint32_t v = 0x5aadecu; esp -= 4; W32(esp, v); }
/* 543bbc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x543bc1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 543bc1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_543bc4: /* 543bc4: mov ecx, dword ptr [0x69f458] */
  ecx = R32((uint32_t)(0x69f458u));
/* 543bca: call 0x4e211c */
  esp -= 4; W32(esp, 0x543bcfu); SPILL(); f_4e211c(); if (g_unwind) return; RELOAD();
/* 543bcf: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 543bd2: mov dword ptr [ebp - 0x24], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x6a0f20u);
/* 543bd9: mov dword ptr [ebp - 0x20], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xffffffffu);
/* 543be0: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x543be5u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 543be5: mov esi, 0x42 */
  esi = 0x42u;
/* 543bea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_543bf0: /* 543bf0: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 543bf3: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 543bf9: jge 0x543c11 */
  if ((sf == of)) goto L_543c11;
L_543bfb: /* 543bfb: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 543c01: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 543c04: or dword ptr [eax + 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x1cu), r);
  }
/* 543c07: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 543c0a: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x543c0fu); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 543c0f: jmp 0x543bf0 */
  goto L_543bf0;
L_543c11: /* 543c11: xor ecx, ecx */
  ecx = 0;
L_543c13: /* 543c13: cmp ecx, dword ptr [0x69a75c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x69a75cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 543c19: jge 0x543c2f */
  if ((sf == of)) goto L_543c2f;
L_543c1b: /* 543c1b: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 543c21: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 543c24: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 543c26: je 0x543c2c */
  if (zf) goto L_543c2c;
L_543c28: /* 543c28: or dword ptr [eax + 4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
L_543c2c: /* 543c2c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 543c2d: jmp 0x543c13 */
  goto L_543c13;
L_543c2f: /* 543c2f: mov dword ptr [0x5b3194], 1 */
  W32((uint32_t)(0x5b3194u), 0x1u);
/* 543c39: call 0x4e3db4 */
  esp -= 4; W32(esp, 0x543c3eu); SPILL(); f_4e3db4(); if (g_unwind) return; RELOAD();
/* 543c3e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 543c40: mov ecx, 0x6a0f04 */
  ecx = 0x6a0f04u;
/* 543c45: mov dword ptr [0x6a0f08], ebx */
  W32((uint32_t)(0x6a0f08u), ebx);
/* 543c4b: mov dword ptr [0x6a0f0c], ebx */
  W32((uint32_t)(0x6a0f0cu), ebx);
/* 543c51: call 0x4e4502 */
  esp -= 4; W32(esp, 0x543c56u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 543c56: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 543c58: mov ecx, 0x69fa24 */
  ecx = 0x69fa24u;
/* 543c5d: mov dword ptr [0x69fa28], ebx */
  W32((uint32_t)(0x69fa28u), ebx);
/* 543c63: mov dword ptr [0x69fa2c], ebx */
  W32((uint32_t)(0x69fa2cu), ebx);
/* 543c69: call 0x4e4502 */
  esp -= 4; W32(esp, 0x543c6eu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 543c6e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 543c70: mov ecx, 0x6a0f04 */
  ecx = 0x6a0f04u;
/* 543c75: mov dword ptr [0x6a0f08], ebx */
  W32((uint32_t)(0x6a0f08u), ebx);
/* 543c7b: mov dword ptr [0x6a0f0c], ebx */
  W32((uint32_t)(0x6a0f0cu), ebx);
/* 543c81: call 0x4e4502 */
  esp -= 4; W32(esp, 0x543c86u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 543c86: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 543c88: mov ecx, 0x6a2e5c */
  ecx = 0x6a2e5cu;
/* 543c8d: mov dword ptr [0x6a2e60], ebx */
  W32((uint32_t)(0x6a2e60u), ebx);
/* 543c93: mov dword ptr [0x6a2e64], ebx */
  W32((uint32_t)(0x6a2e64u), ebx);
/* 543c99: call 0x4e4502 */
  esp -= 4; W32(esp, 0x543c9eu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 543c9e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 543ca0: mov ecx, 0x69ff60 */
  ecx = 0x69ff60u;
/* 543ca5: mov dword ptr [0x69ff64], ebx */
  W32((uint32_t)(0x69ff64u), ebx);
/* 543cab: mov dword ptr [0x69ff68], ebx */
  W32((uint32_t)(0x69ff68u), ebx);
/* 543cb1: call 0x4e4502 */
  esp -= 4; W32(esp, 0x543cb6u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 543cb6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 543cb8: mov ecx, 0x6a2920 */
  ecx = 0x6a2920u;
/* 543cbd: mov dword ptr [0x6a2924], ebx */
  W32((uint32_t)(0x6a2924u), ebx);
/* 543cc3: mov dword ptr [0x6a2928], ebx */
  W32((uint32_t)(0x6a2928u), ebx);
/* 543cc9: call 0x4e4502 */
  esp -= 4; W32(esp, 0x543cceu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 543cce: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 543cd0: mov ecx, 0x6a2914 */
  ecx = 0x6a2914u;
/* 543cd5: mov dword ptr [0x6a2918], ebx */
  W32((uint32_t)(0x6a2918u), ebx);
/* 543cdb: mov dword ptr [0x6a291c], ebx */
  W32((uint32_t)(0x6a291cu), ebx);
/* 543ce1: call 0x4e4502 */
  esp -= 4; W32(esp, 0x543ce6u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 543ce6: xor esi, esi */
  esi = 0;
/* 543ce8: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 543ceb: jmp 0x543cf0 */
  goto L_543cf0;
L_543cf0: /* 543cf0: cmp esi, dword ptr [0x6a0f18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f18u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 543cf6: jge 0x543d7d */
  if ((sf == of)) goto L_543d7d;
L_543cfc: /* 543cfc: mov ecx, dword ptr [0x6a0f14] */
  ecx = R32((uint32_t)(0x6a0f14u));
/* 543d02: imul esi, esi, 0x2c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x2cu);
  esi = (uint32_t)r;
  }
/* 543d05: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 543d07: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 543d0a: lea edi, [esi + 0x18] */
  edi = (uint32_t)(esi + 0x18u);
/* 543d0d: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 543d10: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 543d12: mov ecx, edi */
  ecx = edi;
/* 543d14: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 543d18: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 543d1b: mov dword ptr [edi + 8], ebx */
  W32((uint32_t)(edi + 0x8u), ebx);
/* 543d1e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x543d23u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 543d23: mov ecx, edi */
  ecx = edi;
/* 543d25: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 543d29: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x543d2eu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 543d2e: lea edi, [esi + 0xc] */
  edi = (uint32_t)(esi + 0xcu);
/* 543d31: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 543d34: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 543d36: mov ecx, edi */
  ecx = edi;
/* 543d38: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 543d3c: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 543d3f: mov dword ptr [edi + 8], ebx */
  W32((uint32_t)(edi + 0x8u), ebx);
/* 543d42: call 0x4e4502 */
  esp -= 4; W32(esp, 0x543d47u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 543d47: mov ecx, edi */
  ecx = edi;
/* 543d49: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 543d4d: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x543d52u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 543d52: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 543d54: mov ecx, esi */
  ecx = esi;
/* 543d56: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 543d5a: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 543d5d: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 543d60: call 0x4e4502 */
  esp -= 4; W32(esp, 0x543d65u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 543d65: mov ecx, esi */
  ecx = esi;
/* 543d67: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 543d6a: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x543d6fu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 543d6f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 543d72: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 543d73: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 543d76: mov esi, eax */
  esi = eax;
/* 543d78: jmp 0x543cf0 */
  goto L_543cf0;
L_543d7d: /* 543d7d: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 543d7f: mov ecx, 0x6a0f14 */
  ecx = 0x6a0f14u;
/* 543d84: mov dword ptr [0x6a0f18], ebx */
  W32((uint32_t)(0x6a0f18u), ebx);
/* 543d8a: mov dword ptr [0x6a0f1c], ebx */
  W32((uint32_t)(0x6a0f1cu), ebx);
/* 543d90: call 0x4e4502 */
  esp -= 4; W32(esp, 0x543d95u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 543d95: xor esi, esi */
  esi = 0;
L_543d97: /* 543d97: cmp esi, dword ptr [0x69fa1c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x69fa1cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 543d9d: jge 0x543db3 */
  if ((sf == of)) goto L_543db3;
L_543d9f: /* 543d9f: mov eax, dword ptr [0x69fa18] */
  eax = R32((uint32_t)(0x69fa18u));
/* 543da4: mov ecx, esi */
  ecx = esi;
/* 543da6: imul ecx, ecx, 0x3c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x3cu);
  ecx = (uint32_t)r;
  }
/* 543da9: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 543dab: call 0x4e3d00 */
  esp -= 4; W32(esp, 0x543db0u); SPILL(); f_4e3d00(); if (g_unwind) return; RELOAD();
/* 543db0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 543db1: jmp 0x543d97 */
  goto L_543d97;
L_543db3: /* 543db3: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 543db5: mov ecx, 0x69fa18 */
  ecx = 0x69fa18u;
/* 543dba: mov dword ptr [0x69fa1c], ebx */
  W32((uint32_t)(0x69fa1cu), ebx);
/* 543dc0: mov dword ptr [0x69fa20], ebx */
  W32((uint32_t)(0x69fa20u), ebx);
/* 543dc6: call 0x4e4502 */
  esp -= 4; W32(esp, 0x543dcbu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 543dcb: mov eax, dword ptr [0x69b43c] */
  eax = R32((uint32_t)(0x69b43cu));
/* 543dd0: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 543dd2: mov edi, eax */
  edi = eax;
/* 543dd4: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 543dd7: je 0x543e0d */
  if (zf) goto L_543e0d;
L_543dd9: /* 543dd9: lea esi, [eax + 0xc] */
  esi = (uint32_t)(eax + 0xcu);
/* 543ddc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 543dde: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 543de0: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 543de4: je 0x543df2 */
  if (zf) goto L_543df2;
L_543de6: /* 543de6: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 543dec: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 543dee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 543def: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x543df2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_543df2: /* 543df2: mov ecx, edi */
  ecx = edi;
/* 543df4: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 543df6: mov dword ptr [edi + 0x10], ebx */
  W32((uint32_t)(edi + 0x10u), ebx);
/* 543df9: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 543dfc: call 0x4e1339 */
  esp -= 4; W32(esp, 0x543e01u); SPILL(); f_4e1339(); if (g_unwind) return; RELOAD();
/* 543e01: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 543e07: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 543e09: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 543e0a: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x543e0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_543e0d: /* 543e0d: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 543e13: push 0x5aae00 */
  { uint32_t v = 0x5aae00u; esp -= 4; W32(esp, v); }
/* 543e18: push 0x2fb */
  { uint32_t v = 0x2fbu; esp -= 4; W32(esp, v); }
/* 543e1d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 543e1e: mov dword ptr [0x69f440], ebx */
  W32((uint32_t)(0x69f440u), ebx);
/* 543e24: call 0x4e30df */
  esp -= 4; W32(esp, 0x543e29u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 543e29: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 543e2c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 543e2f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 543e30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 543e31: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 543e38: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 543e39: mov esp, ebp */
  esp = ebp;
/* 543e3b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 543e3c: ret  */
  esp += 4; SPILL(); return;
}

void f_543ced(void) {
  LOAD_REGS();
L_543ced: /* 543ced: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_543cf0: /* 543cf0: cmp esi, dword ptr [0x6a0f18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f18u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 543cf6: jge 0x543d7d */
  if ((sf == of)) goto L_543d7d;
L_543cfc: /* 543cfc: mov ecx, dword ptr [0x6a0f14] */
  ecx = R32((uint32_t)(0x6a0f14u));
/* 543d02: imul esi, esi, 0x2c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x2cu);
  esi = (uint32_t)r;
  }
/* 543d05: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 543d07: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 543d0a: lea edi, [esi + 0x18] */
  edi = (uint32_t)(esi + 0x18u);
/* 543d0d: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 543d10: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 543d12: mov ecx, edi */
  ecx = edi;
/* 543d14: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 543d18: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 543d1b: mov dword ptr [edi + 8], ebx */
  W32((uint32_t)(edi + 0x8u), ebx);
/* 543d1e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x543d23u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 543d23: mov ecx, edi */
  ecx = edi;
/* 543d25: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 543d29: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x543d2eu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 543d2e: lea edi, [esi + 0xc] */
  edi = (uint32_t)(esi + 0xcu);
/* 543d31: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 543d34: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 543d36: mov ecx, edi */
  ecx = edi;
/* 543d38: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 543d3c: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 543d3f: mov dword ptr [edi + 8], ebx */
  W32((uint32_t)(edi + 0x8u), ebx);
/* 543d42: call 0x4e4502 */
  esp -= 4; W32(esp, 0x543d47u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 543d47: mov ecx, edi */
  ecx = edi;
/* 543d49: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 543d4d: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x543d52u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 543d52: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 543d54: mov ecx, esi */
  ecx = esi;
/* 543d56: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 543d5a: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 543d5d: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 543d60: call 0x4e4502 */
  esp -= 4; W32(esp, 0x543d65u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 543d65: mov ecx, esi */
  ecx = esi;
/* 543d67: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 543d6a: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x543d6fu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 543d6f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 543d72: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 543d73: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 543d76: mov esi, eax */
  esi = eax;
/* 543d78: jmp 0x543cf0 */
  goto L_543cf0;
L_543d7d: /* 543d7d: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 543d7f: mov ecx, 0x6a0f14 */
  ecx = 0x6a0f14u;
/* 543d84: mov dword ptr [0x6a0f18], ebx */
  W32((uint32_t)(0x6a0f18u), ebx);
/* 543d8a: mov dword ptr [0x6a0f1c], ebx */
  W32((uint32_t)(0x6a0f1cu), ebx);
/* 543d90: call 0x4e4502 */
  esp -= 4; W32(esp, 0x543d95u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 543d95: xor esi, esi */
  esi = 0;
L_543d97: /* 543d97: cmp esi, dword ptr [0x69fa1c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x69fa1cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 543d9d: jge 0x543db3 */
  if ((sf == of)) goto L_543db3;
L_543d9f: /* 543d9f: mov eax, dword ptr [0x69fa18] */
  eax = R32((uint32_t)(0x69fa18u));
/* 543da4: mov ecx, esi */
  ecx = esi;
/* 543da6: imul ecx, ecx, 0x3c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x3cu);
  ecx = (uint32_t)r;
  }
/* 543da9: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 543dab: call 0x4e3d00 */
  esp -= 4; W32(esp, 0x543db0u); SPILL(); f_4e3d00(); if (g_unwind) return; RELOAD();
/* 543db0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 543db1: jmp 0x543d97 */
  goto L_543d97;
L_543db3: /* 543db3: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 543db5: mov ecx, 0x69fa18 */
  ecx = 0x69fa18u;
/* 543dba: mov dword ptr [0x69fa1c], ebx */
  W32((uint32_t)(0x69fa1cu), ebx);
/* 543dc0: mov dword ptr [0x69fa20], ebx */
  W32((uint32_t)(0x69fa20u), ebx);
/* 543dc6: call 0x4e4502 */
  esp -= 4; W32(esp, 0x543dcbu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 543dcb: mov eax, dword ptr [0x69b43c] */
  eax = R32((uint32_t)(0x69b43cu));
/* 543dd0: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 543dd2: mov edi, eax */
  edi = eax;
/* 543dd4: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 543dd7: je 0x543e0d */
  if (zf) goto L_543e0d;
L_543dd9: /* 543dd9: lea esi, [eax + 0xc] */
  esi = (uint32_t)(eax + 0xcu);
/* 543ddc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 543dde: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 543de0: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 543de4: je 0x543df2 */
  if (zf) goto L_543df2;
L_543de6: /* 543de6: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 543dec: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 543dee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 543def: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x543df2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_543df2: /* 543df2: mov ecx, edi */
  ecx = edi;
/* 543df4: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 543df6: mov dword ptr [edi + 0x10], ebx */
  W32((uint32_t)(edi + 0x10u), ebx);
/* 543df9: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 543dfc: call 0x4e1339 */
  esp -= 4; W32(esp, 0x543e01u); SPILL(); f_4e1339(); if (g_unwind) return; RELOAD();
/* 543e01: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 543e07: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 543e09: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 543e0a: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x543e0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_543e0d: /* 543e0d: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 543e13: push 0x5aae00 */
  { uint32_t v = 0x5aae00u; esp -= 4; W32(esp, v); }
/* 543e18: push 0x2fb */
  { uint32_t v = 0x2fbu; esp -= 4; W32(esp, v); }
/* 543e1d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 543e1e: mov dword ptr [0x69f440], ebx */
  W32((uint32_t)(0x69f440u), ebx);
/* 543e24: call 0x4e30df */
  esp -= 4; W32(esp, 0x543e29u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 543e29: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 543e2c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 543e2f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 543e30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 543e31: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 543e38: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 543e39: mov esp, ebp */
  esp = ebp;
/* 543e3b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 543e3c: ret  */
  esp += 4; SPILL(); return;
}

void f_543e3d(void) {
  LOAD_REGS();
L_543e3d: /* 543e3d: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 543e40: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 543e45: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 543e48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 543e49: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 543e4c: call 0x554df6 */
  esp -= 4; W32(esp, 0x543e51u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_543e51(); return;
}

void f_543e51(void) {
  LOAD_REGS();
L_543e51: /* 543e51: push 0x56ea80 */
  { uint32_t v = 0x56ea80u; esp -= 4; W32(esp, v); }
/* 543e56: push 0x5aae4c */
  { uint32_t v = 0x5aae4cu; esp -= 4; W32(esp, v); }
/* 543e5b: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x543e60u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 543e60: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 543e63: xor ebx, ebx */
  ebx = 0;
/* 543e65: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 543e66: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 543e67: call 0x554df6 */
  esp -= 4; W32(esp, 0x543e6cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_543e6c: guest_badaddr(0x543e6c); return;
}

void f_543f40(void) {
  LOAD_REGS();
L_543f40: /* 543f40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 543f41: mov ebp, esp */
  ebp = esp;
/* 543f43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 543f45: push 0x5594a0 */
  { uint32_t v = 0x5594a0u; esp -= 4; W32(esp, v); }
/* 543f4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 543f50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 543f51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 543f58: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 543f5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 543f5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 543f5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 543f5e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 543f61: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 543f63: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 543f65: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 543f68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 543f69: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 543f6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 543f6d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 543f74: call 0x4e3341 */
  esp -= 4; W32(esp, 0x543f79u); SPILL(); f_4e3341(); if (g_unwind) return; RELOAD();
/* 543f79: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 543f7c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 543f7f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 543f82: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 543f84: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 543f85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 543f86: push 0x69ff70 */
  { uint32_t v = 0x69ff70u; esp -= 4; W32(esp, v); }
/* 543f8b: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x543f90u); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 543f90: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 543f93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 543f95: jne 0x543fd4 */
  if (!zf) goto L_543fd4;
L_543f97: /* 543f97: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 543f9a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 543f9c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 543f9d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 543fa0: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x543fa5u); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 543fa5: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 543fab: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 543fae: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 543fb1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 543fb3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 543fb5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 543fb6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 543fb8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 543fba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 543fbb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 543fbc: push 0x69ff70 */
  { uint32_t v = 0x69ff70u; esp -= 4; W32(esp, v); }
/* 543fc1: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x543fc6u); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 543fc6: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 543fc9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 543fcb: je 0x543fe5 */
  if (zf) goto L_543fe5;
L_543fcd: /* 543fcd: mov ecx, eax */
  ecx = eax;
/* 543fcf: call 0x4e1951 */
  esp -= 4; W32(esp, 0x543fd4u); SPILL(); f_4e1951(); if (g_unwind) return; RELOAD();
L_543fd4: /* 543fd4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 543fd7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 543fde: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 543fdf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 543fe0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 543fe1: mov esp, ebp */
  esp = ebp;
/* 543fe3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 543fe4: ret  */
  esp += 4; SPILL(); return;
L_543fe5: /* 543fe5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 543fe8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 543fe9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 543fea: xor eax, eax */
  eax = 0;
/* 543fec: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 543ff3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 543ff4: mov esp, ebp */
  esp = ebp;
/* 543ff6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 543ff7: ret  */
  esp += 4; SPILL(); return;
}

void f_543ff8(void) {
  LOAD_REGS();
L_543ff8: /* 543ff8: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 543ffb: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 544000: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 544003: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544004: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 544007: call 0x554df6 */
  esp -= 4; W32(esp, 0x54400cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_54400c(); return;
}

void f_54400c(void) {
  LOAD_REGS();
L_54400c: /* 54400c: push 0x56eab0 */
  { uint32_t v = 0x56eab0u; esp -= 4; W32(esp, v); }
/* 544011: push 0x5ab8dc */
  { uint32_t v = 0x5ab8dcu; esp -= 4; W32(esp, v); }
/* 544016: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54401bu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54401b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54401e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544020: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544022: call 0x554df6 */
  esp -= 4; W32(esp, 0x544027u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_544027: guest_badaddr(0x544027); return;
}

void f_544070(void) {
  LOAD_REGS();
L_544070: /* 544070: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 544071: mov ebp, esp */
  ebp = esp;
/* 544073: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544075: push 0x5594b0 */
  { uint32_t v = 0x5594b0u; esp -= 4; W32(esp, v); }
/* 54407a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 544080: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544081: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 544088: sub esp, 0x20c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54408e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54408f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544090: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 544091: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 544094: cmp dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544097: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54409a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5440a1: jne 0x5440ba */
  if (!zf) goto L_5440ba;
L_5440a3: /* 5440a3: push 0x970 */
  { uint32_t v = 0x970u; esp -= 4; W32(esp, v); }
/* 5440a8: push 0x5ab8e4 */
  { uint32_t v = 0x5ab8e4u; esp -= 4; W32(esp, v); }
/* 5440ad: push 0x5ab8f0 */
  { uint32_t v = 0x5ab8f0u; esp -= 4; W32(esp, v); }
/* 5440b2: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5440b7u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5440b7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5440ba: /* 5440ba: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 5440bc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 5440be: push 0x5ab8f8 */
  { uint32_t v = 0x5ab8f8u; esp -= 4; W32(esp, v); }
/* 5440c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5440c4: call 0x4e2f90 */
  esp -= 4; W32(esp, 0x5440c9u); SPILL(); f_4e2f90(); if (g_unwind) return; RELOAD();
/* 5440c9: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 5440cb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5440ce: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 5440d0: xor ebx, ebx */
  ebx = 0;
/* 5440d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5440d4: push 0x5ab904 */
  { uint32_t v = 0x5ab904u; esp -= 4; W32(esp, v); }
/* 5440d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5440da: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 5440dd: call 0x4e2f90 */
  esp -= 4; W32(esp, 0x5440e2u); SPILL(); f_4e2f90(); if (g_unwind) return; RELOAD();
/* 5440e2: xor edx, edx */
  edx = 0;
/* 5440e4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5440e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5440e9: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 5440ec: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5440ee: mov eax, edx */
  eax = edx;
/* 5440f0: jne 0x5440fa */
  if (!zf) goto L_5440fa;
L_5440f2: /* 5440f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5440f4: je 0x544213 */
  if (zf) goto L_544213;
L_5440fa: /* 5440fa: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 5440fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5440fd: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x544102u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 544102: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544105: cmp eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54410a: jge 0x544213 */
  if ((sf == of)) goto L_544213;
L_544110: /* 544110: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 544112: push 0x5ab910 */
  { uint32_t v = 0x5ab910u; esp -= 4; W32(esp, v); }
/* 544117: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544118: call 0x4e2220 */
  esp -= 4; W32(esp, 0x54411du); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 54411d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544120: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544122: je 0x544213 */
  if (zf) goto L_544213;
L_544128: /* 544128: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 54412a: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 54412f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 544132: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544133: lea eax, [ebp - 0x218] */
  eax = (uint32_t)(ebp + 0xfffffde8u);
/* 544139: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54413a: call 0x4e2be4 */
  esp -= 4; W32(esp, 0x54413fu); SPILL(); f_4e2be4(); if (g_unwind) return; RELOAD();
/* 54413f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544142: lea esi, [ebp - 0x218] */
  esi = (uint32_t)(ebp + 0xfffffde8u);
/* 544148: jmp 0x544150 */
  goto L_544150;
L_544150: /* 544150: push 0x5ab914 */
  { uint32_t v = 0x5ab914u; esp -= 4; W32(esp, v); }
/* 544155: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544156: call 0x4e2220 */
  esp -= 4; W32(esp, 0x54415bu); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 54415b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54415e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544160: je 0x544175 */
  if (zf) goto L_544175;
L_544162: /* 544162: push 0x5ab918 */
  { uint32_t v = 0x5ab918u; esp -= 4; W32(esp, v); }
/* 544167: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544168: call 0x4e2220 */
  esp -= 4; W32(esp, 0x54416du); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 54416d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544170: lea esi, [eax + 2] */
  esi = (uint32_t)(eax + 0x2u);
/* 544173: jmp 0x544150 */
  goto L_544150;
L_544175: /* 544175: lea ecx, [ebp - 0x218] */
  ecx = (uint32_t)(ebp + 0xfffffde8u);
/* 54417b: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54417d: jne 0x544196 */
  if (!zf) goto L_544196;
L_54417f: /* 54417f: push 0x97d */
  { uint32_t v = 0x97du; esp -= 4; W32(esp, v); }
/* 544184: push 0x5ab91c */
  { uint32_t v = 0x5ab91cu; esp -= 4; W32(esp, v); }
/* 544189: push 0x5ab928 */
  { uint32_t v = 0x5ab928u; esp -= 4; W32(esp, v); }
/* 54418e: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x544193u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 544193: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544196: /* 544196: mov word ptr [esi - 2], 0 */
  W16((uint32_t)(esi + 0xfffffffeu), 0x0u);
/* 54419c: call 0x4e292d */
  esp -= 4; W32(esp, 0x5441a1u); SPILL(); f_4e292d(); if (g_unwind) return; RELOAD();
/* 5441a1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5441a3: mov edi, eax */
  edi = eax;
/* 5441a5: mov eax, 0x5ab938 */
  eax = 0x5ab938u;
/* 5441aa: jne 0x5441b1 */
  if (!zf) goto L_5441b1;
L_5441ac: /* 5441ac: mov eax, 0x5ab948 */
  eax = 0x5ab948u;
L_5441b1: /* 5441b1: mov ecx, dword ptr [0x5afeec] */
  ecx = R32((uint32_t)(0x5afeecu));
/* 5441b7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5441b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5441ba: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 5441bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5441c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5441c1: lea eax, [ebp - 0x218] */
  eax = (uint32_t)(ebp + 0xfffffde8u);
/* 5441c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5441c8: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x5441cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5441cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5441cd: jne 0x54420c */
  if (!zf) goto L_54420c;
L_5441cf: /* 5441cf: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 5441d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5441d4: je 0x5441f9 */
  if (zf) goto L_5441f9;
L_5441d6: /* 5441d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5441d8: push 0x5ab954 */
  { uint32_t v = 0x5ab954u; esp -= 4; W32(esp, v); }
/* 5441dd: push 0x5ab960 */
  { uint32_t v = 0x5ab960u; esp -= 4; W32(esp, v); }
/* 5441e2: call 0x4e1613 */
  esp -= 4; W32(esp, 0x5441e7u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 5441e7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5441ea: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5441ec: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5441ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5441f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5441f1: call 0x4e3418 */
  esp -= 4; W32(esp, 0x5441f6u); SPILL(); f_4e3418(); if (g_unwind) return; RELOAD();
/* 5441f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5441f9: /* 5441f9: xor eax, eax */
  eax = 0;
/* 5441fb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5441fe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 544205: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 544206: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 544207: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 544208: mov esp, ebp */
  esp = ebp;
/* 54420a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54420b: ret  */
  esp += 4; SPILL(); return;
L_54420c: /* 54420c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 54420f: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 544211: mov edi, eax */
  edi = eax;
L_544213: /* 544213: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 544216: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 544219: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_544220: /* 544220: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 544222: push 0x5ab980 */
  { uint32_t v = 0x5ab980u; esp -= 4; W32(esp, v); }
/* 544227: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544228: call 0x4e2220 */
  esp -= 4; W32(esp, 0x54422du); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 54422d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544230: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544232: je 0x5442d8 */
  if (zf) goto L_5442d8;
L_544238: /* 544238: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 54423a: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 54423f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544240: lea eax, [ebp - 0x218] */
  eax = (uint32_t)(ebp + 0xfffffde8u);
/* 544246: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544247: call 0x4e2be4 */
  esp -= 4; W32(esp, 0x54424cu); SPILL(); f_4e2be4(); if (g_unwind) return; RELOAD();
/* 54424c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54424f: lea ecx, [ebp - 0x218] */
  ecx = (uint32_t)(ebp + 0xfffffde8u);
/* 544255: push 0x5ab984 */
  { uint32_t v = 0x5ab984u; esp -= 4; W32(esp, v); }
/* 54425a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54425b: call 0x4e2220 */
  esp -= 4; W32(esp, 0x544260u); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 544260: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544263: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544265: mov word ptr [eax], 0 */
  W16((uint32_t)(eax), 0x0u);
/* 54426a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 54426c: je 0x544280 */
  if (zf) goto L_544280;
L_54426e: /* 54426e: lea edx, [ebp - 0x218] */
  edx = (uint32_t)(ebp + 0xfffffde8u);
/* 544274: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544275: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544276: call 0x4e1cb2 */
  esp -= 4; W32(esp, 0x54427bu); SPILL(); f_4e1cb2(); if (g_unwind) return; RELOAD();
/* 54427b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54427e: jmp 0x5442bc */
  goto L_5442bc;
L_544280: /* 544280: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544282: lea ecx, [ebp - 0x218] */
  ecx = (uint32_t)(ebp + 0xfffffde8u);
/* 544288: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544289: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54428a: push 0x69ff70 */
  { uint32_t v = 0x69ff70u; esp -= 4; W32(esp, v); }
/* 54428f: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x544294u); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 544294: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544297: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544299: jne 0x5442bc */
  if (!zf) goto L_5442bc;
L_54429b: /* 54429b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 54429d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54429f: lea edx, [ebp - 0x218] */
  edx = (uint32_t)(ebp + 0xfffffde8u);
/* 5442a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5442a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5442a7: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 5442ac: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x5442b1u); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 5442b1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5442b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5442b6: je 0x5441f9 */
  if (zf) goto L_5441f9;
L_5442bc: /* 5442bc: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 5442be: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 5442c0: push 0x5ab988 */
  { uint32_t v = 0x5ab988u; esp -= 4; W32(esp, v); }
/* 5442c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5442c6: call 0x4e2220 */
  esp -= 4; W32(esp, 0x5442cbu); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 5442cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5442ce: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5442d1: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 5442d3: jmp 0x544220 */
  goto L_544220;
L_5442d8: /* 5442d8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5442db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5442dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5442dd: mov eax, 1 */
  eax = 0x1u;
/* 5442e2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5442e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5442ea: mov esp, ebp */
  esp = ebp;
/* 5442ec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5442ed: ret  */
  esp += 4; SPILL(); return;
}

void f_54414a(void) {
  LOAD_REGS();
L_54414a: /* 54414a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_544150: /* 544150: push 0x5ab914 */
  { uint32_t v = 0x5ab914u; esp -= 4; W32(esp, v); }
/* 544155: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544156: call 0x4e2220 */
  esp -= 4; W32(esp, 0x54415bu); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 54415b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54415e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544160: je 0x544175 */
  if (zf) goto L_544175;
L_544162: /* 544162: push 0x5ab918 */
  { uint32_t v = 0x5ab918u; esp -= 4; W32(esp, v); }
/* 544167: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544168: call 0x4e2220 */
  esp -= 4; W32(esp, 0x54416du); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 54416d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544170: lea esi, [eax + 2] */
  esi = (uint32_t)(eax + 0x2u);
/* 544173: jmp 0x544150 */
  goto L_544150;
L_544175: /* 544175: lea ecx, [ebp - 0x218] */
  ecx = (uint32_t)(ebp + 0xfffffde8u);
/* 54417b: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54417d: jne 0x544196 */
  if (!zf) goto L_544196;
L_54417f: /* 54417f: push 0x97d */
  { uint32_t v = 0x97du; esp -= 4; W32(esp, v); }
/* 544184: push 0x5ab91c */
  { uint32_t v = 0x5ab91cu; esp -= 4; W32(esp, v); }
/* 544189: push 0x5ab928 */
  { uint32_t v = 0x5ab928u; esp -= 4; W32(esp, v); }
/* 54418e: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x544193u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 544193: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544196: /* 544196: mov word ptr [esi - 2], 0 */
  W16((uint32_t)(esi + 0xfffffffeu), 0x0u);
/* 54419c: call 0x4e292d */
  esp -= 4; W32(esp, 0x5441a1u); SPILL(); f_4e292d(); if (g_unwind) return; RELOAD();
/* 5441a1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5441a3: mov edi, eax */
  edi = eax;
/* 5441a5: mov eax, 0x5ab938 */
  eax = 0x5ab938u;
/* 5441aa: jne 0x5441b1 */
  if (!zf) goto L_5441b1;
L_5441ac: /* 5441ac: mov eax, 0x5ab948 */
  eax = 0x5ab948u;
L_5441b1: /* 5441b1: mov ecx, dword ptr [0x5afeec] */
  ecx = R32((uint32_t)(0x5afeecu));
/* 5441b7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5441b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5441ba: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 5441bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5441c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5441c1: lea eax, [ebp - 0x218] */
  eax = (uint32_t)(ebp + 0xfffffde8u);
/* 5441c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5441c8: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x5441cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5441cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5441cd: jne 0x54420c */
  if (!zf) goto L_54420c;
L_5441cf: /* 5441cf: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 5441d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5441d4: je 0x5441f9 */
  if (zf) goto L_5441f9;
L_5441d6: /* 5441d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5441d8: push 0x5ab954 */
  { uint32_t v = 0x5ab954u; esp -= 4; W32(esp, v); }
/* 5441dd: push 0x5ab960 */
  { uint32_t v = 0x5ab960u; esp -= 4; W32(esp, v); }
/* 5441e2: call 0x4e1613 */
  esp -= 4; W32(esp, 0x5441e7u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 5441e7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5441ea: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5441ec: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5441ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5441f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5441f1: call 0x4e3418 */
  esp -= 4; W32(esp, 0x5441f6u); SPILL(); f_4e3418(); if (g_unwind) return; RELOAD();
/* 5441f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5441f9: /* 5441f9: xor eax, eax */
  eax = 0;
/* 5441fb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5441fe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 544205: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 544206: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 544207: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 544208: mov esp, ebp */
  esp = ebp;
/* 54420a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54420b: ret  */
  esp += 4; SPILL(); return;
L_54420c: /* 54420c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 54420f: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 544211: mov edi, eax */
  edi = eax;
/* 544213: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 544216: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 544219: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_544220: /* 544220: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 544222: push 0x5ab980 */
  { uint32_t v = 0x5ab980u; esp -= 4; W32(esp, v); }
/* 544227: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544228: call 0x4e2220 */
  esp -= 4; W32(esp, 0x54422du); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 54422d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544230: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544232: je 0x5442d8 */
  if (zf) goto L_5442d8;
L_544238: /* 544238: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 54423a: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 54423f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544240: lea eax, [ebp - 0x218] */
  eax = (uint32_t)(ebp + 0xfffffde8u);
/* 544246: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544247: call 0x4e2be4 */
  esp -= 4; W32(esp, 0x54424cu); SPILL(); f_4e2be4(); if (g_unwind) return; RELOAD();
/* 54424c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54424f: lea ecx, [ebp - 0x218] */
  ecx = (uint32_t)(ebp + 0xfffffde8u);
/* 544255: push 0x5ab984 */
  { uint32_t v = 0x5ab984u; esp -= 4; W32(esp, v); }
/* 54425a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54425b: call 0x4e2220 */
  esp -= 4; W32(esp, 0x544260u); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 544260: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544263: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544265: mov word ptr [eax], 0 */
  W16((uint32_t)(eax), 0x0u);
/* 54426a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 54426c: je 0x544280 */
  if (zf) goto L_544280;
L_54426e: /* 54426e: lea edx, [ebp - 0x218] */
  edx = (uint32_t)(ebp + 0xfffffde8u);
/* 544274: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544275: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544276: call 0x4e1cb2 */
  esp -= 4; W32(esp, 0x54427bu); SPILL(); f_4e1cb2(); if (g_unwind) return; RELOAD();
/* 54427b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54427e: jmp 0x5442bc */
  goto L_5442bc;
L_544280: /* 544280: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544282: lea ecx, [ebp - 0x218] */
  ecx = (uint32_t)(ebp + 0xfffffde8u);
/* 544288: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544289: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54428a: push 0x69ff70 */
  { uint32_t v = 0x69ff70u; esp -= 4; W32(esp, v); }
/* 54428f: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x544294u); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 544294: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544297: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544299: jne 0x5442bc */
  if (!zf) goto L_5442bc;
L_54429b: /* 54429b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 54429d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54429f: lea edx, [ebp - 0x218] */
  edx = (uint32_t)(ebp + 0xfffffde8u);
/* 5442a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5442a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5442a7: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 5442ac: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x5442b1u); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 5442b1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5442b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5442b6: je 0x5441f9 */
  if (zf) goto L_5441f9;
L_5442bc: /* 5442bc: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 5442be: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 5442c0: push 0x5ab988 */
  { uint32_t v = 0x5ab988u; esp -= 4; W32(esp, v); }
/* 5442c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5442c6: call 0x4e2220 */
  esp -= 4; W32(esp, 0x5442cbu); SPILL(); f_4e2220(); if (g_unwind) return; RELOAD();
/* 5442cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5442ce: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5442d1: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 5442d3: jmp 0x544220 */
  goto L_544220;
L_5442d8: /* 5442d8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5442db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5442dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5442dd: mov eax, 1 */
  eax = 0x1u;
/* 5442e2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5442e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5442ea: mov esp, ebp */
  esp = ebp;
/* 5442ec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5442ed: ret  */
  esp += 4; SPILL(); return;
}

void f_5442ee(void) {
  LOAD_REGS();
L_5442ee: /* 5442ee: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5442f1: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5442f6: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 5442f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5442fa: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 5442fd: call 0x554df6 */
  esp -= 4; W32(esp, 0x544302u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_544302(); return;
}

void f_544302(void) {
  LOAD_REGS();
L_544302: /* 544302: push 0x56eae8 */
  { uint32_t v = 0x56eae8u; esp -= 4; W32(esp, v); }
/* 544307: push 0x5ab98c */
  { uint32_t v = 0x5ab98cu; esp -= 4; W32(esp, v); }
/* 54430c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x544311u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 544311: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544314: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544316: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544318: call 0x554df6 */
  esp -= 4; W32(esp, 0x54431du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54431d: guest_badaddr(0x54431d); return;
}

void f_5443d0(void) {
  LOAD_REGS();
L_5443d0: /* 5443d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5443d1: mov esi, ecx */
  esi = ecx;
/* 5443d3: call 0x4e1a41 */
  esp -= 4; W32(esp, 0x5443d8u); SPILL(); f_4e1a41(); if (g_unwind) return; RELOAD();
/* 5443d8: mov dword ptr [esi], 0x56acf0 */
  W32((uint32_t)(esi), 0x56acf0u);
/* 5443de: mov eax, esi */
  eax = esi;
/* 5443e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5443e1: ret  */
  esp += 4; SPILL(); return;
}

void f_544400(void) {
  LOAD_REGS();
L_544400: /* 544400: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 544401: mov ebp, esp */
  ebp = esp;
/* 544403: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544405: push 0x5594c0 */
  { uint32_t v = 0x5594c0u; esp -= 4; W32(esp, v); }
/* 54440a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 544410: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544411: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 544418: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54441b: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 544420: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 544423: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 544426: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544427: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544428: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 544429: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 54442c: xor ebx, ebx */
  ebx = 0;
/* 54442e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54442f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544430: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544431: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 544434: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544435: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544436: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544437: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544438: push 0x6a1eb8 */
  { uint32_t v = 0x6a1eb8u; esp -= 4; W32(esp, v); }
/* 54443d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 544440: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x544445u); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 544445: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544448: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54444a: je 0x54445a */
  if (zf) goto L_54445a;
L_54444c: /* 54444c: push 0x69f4dc */
  { uint32_t v = 0x69f4dcu; esp -= 4; W32(esp, v); }
/* 544451: mov ecx, eax */
  ecx = eax;
/* 544453: call 0x4e4543 */
  esp -= 4; W32(esp, 0x544458u); SPILL(); f_4e4543(); if (g_unwind) return; RELOAD();
/* 544458: mov ebx, eax */
  ebx = eax;
L_54445a: /* 54445a: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 54445d: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 54445f: mov eax, dword ptr [ebx + 0x34] */
  eax = R32((uint32_t)(ebx + 0x34u));
/* 544462: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544464: lea esi, [ebx + 0x34] */
  esi = (uint32_t)(ebx + 0x34u);
/* 544467: je 0x5444a3 */
  if (zf) goto L_5444a3;
L_544469: /* 544469: cmp word ptr [edi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 54446d: je 0x54447b */
  if (zf) goto L_54447b;
L_54446f: /* 54446f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 544470: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x544475u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 544475: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544478: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 544479: jmp 0x54447d */
  goto L_54447d;
L_54447b: /* 54447b: xor eax, eax */
  eax = 0;
L_54447d: /* 54447d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 54447f: mov ecx, esi */
  ecx = esi;
/* 544481: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 544484: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 544487: call 0x4e4502 */
  esp -= 4; W32(esp, 0x54448cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 54448c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 54448f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544491: je 0x5444a3 */
  if (zf) goto L_5444a3;
L_544493: /* 544493: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 544496: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 544498: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544499: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54449a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54449b: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x5444a0u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 5444a0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5444a3: /* 5444a3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5444a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5444a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5444a8: mov eax, ebx */
  eax = ebx;
/* 5444aa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5444b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5444b2: mov esp, ebp */
  esp = ebp;
/* 5444b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5444b5: ret 0x28 */
  esp += 44; SPILL(); return;
}

void f_5444b8(void) {
  LOAD_REGS();
L_5444b8: /* 5444b8: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5444bb: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5444c0: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 5444c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5444c4: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 5444c7: call 0x554df6 */
  esp -= 4; W32(esp, 0x5444ccu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5444cc(); return;
}

void f_5444cc(void) {
  LOAD_REGS();
L_5444cc: /* 5444cc: push 0x56eb20 */
  { uint32_t v = 0x56eb20u; esp -= 4; W32(esp, v); }
/* 5444d1: push 0x5ac8a4 */
  { uint32_t v = 0x5ac8a4u; esp -= 4; W32(esp, v); }
/* 5444d6: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5444dbu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5444db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5444de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5444e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5444e2: call 0x554df6 */
  esp -= 4; W32(esp, 0x5444e7u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5444e7: guest_badaddr(0x5444e7); return;
}

void f_544530(void) {
  LOAD_REGS();
L_544530: /* 544530: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544532: push 0x5594d8 */
  { uint32_t v = 0x5594d8u; esp -= 4; W32(esp, v); }
/* 544537: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54453d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54453e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 544545: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544546: xor eax, eax */
  eax = 0;
/* 544548: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544549: mov esi, ecx */
  esi = ecx;
/* 54454b: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 54454f: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 544551: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 544554: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 544557: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 54455b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 54455e: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 544565: call 0x4e22b6 */
  esp -= 4; W32(esp, 0x54456au); SPILL(); f_4e22b6(); if (g_unwind) return; RELOAD();
/* 54456a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 54456e: mov eax, esi */
  eax = esi;
/* 544570: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 544571: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 544578: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54457b: ret  */
  esp += 4; SPILL(); return;
}

void f_5445a0(void) {
  LOAD_REGS();
L_5445a0: /* 5445a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5445a2: push 0x5594f8 */
  { uint32_t v = 0x5594f8u; esp -= 4; W32(esp, v); }
/* 5445a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5445ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5445ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5445b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5445b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5445b7: mov esi, ecx */
  esi = ecx;
/* 5445b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 5445bd: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5445c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5445c2: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 5445ca: je 0x5445d8 */
  if (zf) goto L_5445d8;
L_5445cc: /* 5445cc: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5445d2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5445d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5445d5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x5445d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5445d8: /* 5445d8: mov ecx, esi */
  ecx = esi;
/* 5445da: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 5445e1: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 5445e8: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 5445f0: call 0x4e167c */
  esp -= 4; W32(esp, 0x5445f5u); SPILL(); f_4e167c(); if (g_unwind) return; RELOAD();
/* 5445f5: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5445f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5445fa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 544601: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544604: ret  */
  esp += 4; SPILL(); return;
}

void f_544630(void) {
  LOAD_REGS();
L_544630: /* 544630: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 544631: mov ebp, esp */
  ebp = esp;
/* 544633: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544635: push 0x559510 */
  { uint32_t v = 0x559510u; esp -= 4; W32(esp, v); }
/* 54463a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 544640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544641: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 544648: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54464b: mov eax, dword ptr [0x69f440] */
  eax = R32((uint32_t)(0x69f440u));
/* 544650: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544652: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544653: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544654: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 544655: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 544658: mov esi, ecx */
  esi = ecx;
/* 54465a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 544661: jne 0x54467a */
  if (!zf) goto L_54467a;
L_544663: /* 544663: push 0x538 */
  { uint32_t v = 0x538u; esp -= 4; W32(esp, v); }
/* 544668: push 0x5aa9e4 */
  { uint32_t v = 0x5aa9e4u; esp -= 4; W32(esp, v); }
/* 54466d: push 0x5aa9f0 */
  { uint32_t v = 0x5aa9f0u; esp -= 4; W32(esp, v); }
/* 544672: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x544677u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 544677: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54467a: /* 54467a: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 54467d: mov edi, dword ptr [esi + 0x20] */
  edi = R32((uint32_t)(esi + 0x20u));
/* 544680: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544681: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544683: call 0x4e1cb2 */
  esp -= 4; W32(esp, 0x544688u); SPILL(); f_4e1cb2(); if (g_unwind) return; RELOAD();
/* 544688: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54468b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 54468d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54468e: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 544691: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 544694: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x544699u); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 544699: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54469c: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 54469f: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 5446a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5446a4: mov dword ptr [esi + 0x14], 0xffffffff */
  W32((uint32_t)(esi + 0x14u), 0xffffffffu);
/* 5446ab: jne 0x5446cb */
  if (!zf) goto L_5446cb;
L_5446ad: /* 5446ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5446af: mov ecx, esi */
  ecx = esi;
/* 5446b1: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x5446b6u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 5446b6: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 5446bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5446bd: push 0x5aaa00 */
  { uint32_t v = 0x5aaa00u; esp -= 4; W32(esp, v); }
/* 5446c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5446c3: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5446c8u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5446c8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5446cb: /* 5446cb: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 5446ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5446d0: jne 0x5446f0 */
  if (!zf) goto L_5446f0;
L_5446d2: /* 5446d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5446d4: mov ecx, esi */
  ecx = esi;
/* 5446d6: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x5446dbu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 5446db: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 5446e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5446e2: push 0x5aaa50 */
  { uint32_t v = 0x5aaa50u; esp -= 4; W32(esp, v); }
/* 5446e7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5446e8: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5446edu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5446ed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5446f0: /* 5446f0: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 5446f3: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 5446f9: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 5446fc: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 5446ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544701: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 544704: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544705: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544706: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544708: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x54470du); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 54470d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544710: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544712: je 0x544732 */
  if (zf) goto L_544732;
L_544714: /* 544714: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544716: mov ecx, esi */
  ecx = esi;
/* 544718: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x54471du); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 54471d: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 544723: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544724: push 0x5aaaa8 */
  { uint32_t v = 0x5aaaa8u; esp -= 4; W32(esp, v); }
/* 544729: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54472a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54472fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54472f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544732: /* 544732: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544734: mov ecx, esi */
  ecx = esi;
/* 544736: call 0x4e282e */
  esp -= 4; W32(esp, 0x54473bu); SPILL(); f_4e282e(); if (g_unwind) return; RELOAD();
/* 54473b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 54473e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 54473f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 544740: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 544747: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 544748: mov esp, ebp */
  esp = ebp;
/* 54474a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 54474b: ret  */
  esp += 4; SPILL(); return;
}

void f_54474c(void) {
  LOAD_REGS();
L_54474c: /* 54474c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54474f: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 544754: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 544757: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544758: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 54475b: call 0x554df6 */
  esp -= 4; W32(esp, 0x544760u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_544760(); return;
}

void f_544760(void) {
  LOAD_REGS();
L_544760: /* 544760: push 0x56eb7c */
  { uint32_t v = 0x56eb7cu; esp -= 4; W32(esp, v); }
/* 544765: push 0x5aaaf8 */
  { uint32_t v = 0x5aaaf8u; esp -= 4; W32(esp, v); }
/* 54476a: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x54476fu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 54476f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544772: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544774: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544776: call 0x554df6 */
  esp -= 4; W32(esp, 0x54477bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_54477b: guest_badaddr(0x54477b); return;
}

void f_5447e0(void) {
  LOAD_REGS();
L_5447e0: /* 5447e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5447e1: mov ebp, esp */
  ebp = esp;
/* 5447e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5447e5: push 0x559533 */
  { uint32_t v = 0x559533u; esp -= 4; W32(esp, v); }
/* 5447ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5447f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5447f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5447f8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5447fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5447fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5447fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5447fe: xor ebx, ebx */
  ebx = 0;
/* 544800: mov edi, 1 */
  edi = 0x1u;
/* 544805: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 544808: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 54480b: mov dword ptr [0x69f444], edi */
  W32((uint32_t)(0x69f444u), edi);
/* 544811: call 0x4e2987 */
  esp -= 4; W32(esp, 0x544816u); SPILL(); f_4e2987(); if (g_unwind) return; RELOAD();
/* 544816: push 0x5aacd4 */
  { uint32_t v = 0x5aacd4u; esp -= 4; W32(esp, v); }
/* 54481b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54481c: call 0x4e3387 */
  esp -= 4; W32(esp, 0x544821u); SPILL(); f_4e3387(); if (g_unwind) return; RELOAD();
/* 544821: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544824: mov dword ptr [0x5b3190], eax */
  W32((uint32_t)(0x5b3190u), eax);
/* 544829: call 0x4e2987 */
  esp -= 4; W32(esp, 0x54482eu); SPILL(); f_4e2987(); if (g_unwind) return; RELOAD();
/* 54482e: push 0x5aace8 */
  { uint32_t v = 0x5aace8u; esp -= 4; W32(esp, v); }
/* 544833: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544834: call 0x4e3387 */
  esp -= 4; W32(esp, 0x544839u); SPILL(); f_4e3387(); if (g_unwind) return; RELOAD();
/* 544839: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54483c: mov dword ptr [0x5b318c], eax */
  W32((uint32_t)(0x5b318cu), eax);
/* 544841: xor eax, eax */
  eax = 0;
L_544843: /* 544843: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 544848: jae 0x544854 */
  if (!cf) goto L_544854;
L_54484a: /* 54484a: mov dword ptr [eax*4 + 0x69b440], ebx */
  W32((uint32_t)(eax*4 + 0x69b440u), ebx);
/* 544851: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 544852: jmp 0x544843 */
  goto L_544843;
L_544854: /* 544854: mov dword ptr [0x69f440], edi */
  W32((uint32_t)(0x69f440u), edi);
/* 54485a: call 0x4e16d1 */
  esp -= 4; W32(esp, 0x54485fu); SPILL(); f_4e16d1(); if (g_unwind) return; RELOAD();
/* 54485f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 544860: push 0x5aacf4 */
  { uint32_t v = 0x5aacf4u; esp -= 4; W32(esp, v); }
/* 544865: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 544868: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x54486du); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 54486d: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 544872: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 544875: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544876: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544877: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544878: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544879: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54487a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54487b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54487c: push 0x69ff70 */
  { uint32_t v = 0x69ff70u; esp -= 4; W32(esp, v); }
/* 544881: call 0x4e2b1c */
  esp -= 4; W32(esp, 0x544886u); SPILL(); f_4e2b1c(); if (g_unwind) return; RELOAD();
/* 544886: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544889: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54488b: je 0x544898 */
  if (zf) goto L_544898;
L_54488d: /* 54488d: mov ecx, eax */
  ecx = eax;
/* 54488f: call 0x4e1951 */
  esp -= 4; W32(esp, 0x544894u); SPILL(); f_4e1951(); if (g_unwind) return; RELOAD();
/* 544894: mov ecx, eax */
  ecx = eax;
/* 544896: jmp 0x54489a */
  goto L_54489a;
L_544898: /* 544898: xor ecx, ecx */
  ecx = 0;
L_54489a: /* 54489a: mov dword ptr [0x69f458], ecx */
  W32((uint32_t)(0x69f458u), ecx);
/* 5448a0: call 0x4e3ef4 */
  esp -= 4; W32(esp, 0x5448a5u); SPILL(); f_4e3ef4(); if (g_unwind) return; RELOAD();
/* 5448a5: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5448ab: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5448ad: push 0x5a36b0 */
  { uint32_t v = 0x5a36b0u; esp -= 4; W32(esp, v); }
/* 5448b2: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 5448b4: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x5448b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5448b6: mov esi, eax */
  esi = eax;
/* 5448b8: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 5448bb: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5448bd: je 0x5448de */
  if (zf) goto L_5448de;
L_5448bf: /* 5448bf: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 5448c1: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 5448c4: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 5448c7: mov ecx, esi */
  ecx = esi;
/* 5448c9: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 5448cd: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
/* 5448d0: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 5448d7: call 0x4e29e1 */
  esp -= 4; W32(esp, 0x5448dcu); SPILL(); f_4e29e1(); if (g_unwind) return; RELOAD();
/* 5448dc: jmp 0x5448e0 */
  goto L_5448e0;
L_5448de: /* 5448de: xor esi, esi */
  esi = 0;
L_5448e0: /* 5448e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5448e1: push 0x5aad08 */
  { uint32_t v = 0x5aad08u; esp -= 4; W32(esp, v); }
/* 5448e6: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5448e9: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 5448ec: mov dword ptr [0x69b43c], esi */
  W32((uint32_t)(0x69b43cu), esi);
/* 5448f2: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x5448f7u); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 5448f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5448f8: push 0x5aad20 */
  { uint32_t v = 0x5aad20u; esp -= 4; W32(esp, v); }
/* 5448fd: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 544900: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x544905u); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 544905: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 544908: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544909: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 54490c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54490d: mov ecx, dword ptr [0x69b43c] */
  ecx = R32((uint32_t)(0x69b43cu));
/* 544913: call 0x4e33f0 */
  esp -= 4; W32(esp, 0x544918u); SPILL(); f_4e33f0(); if (g_unwind) return; RELOAD();
/* 544918: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 54491e: push 0x5aad30 */
  { uint32_t v = 0x5aad30u; esp -= 4; W32(esp, v); }
/* 544923: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 544928: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544929: call 0x4e30df */
  esp -= 4; W32(esp, 0x54492eu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 54492e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 544931: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544934: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 544935: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 544936: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54493d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54493e: mov esp, ebp */
  esp = ebp;
/* 544940: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 544941: ret  */
  esp += 4; SPILL(); return;
}

void f_544942(void) {
  LOAD_REGS();
L_544942: /* 544942: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 544945: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 54494a: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 54494d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54494e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 544951: call 0x554df6 */
  esp -= 4; W32(esp, 0x544956u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_544956(); return;
}

void f_544956(void) {
  LOAD_REGS();
L_544956: /* 544956: push 0x56eba8 */
  { uint32_t v = 0x56eba8u; esp -= 4; W32(esp, v); }
/* 54495b: push 0x5aad6c */
  { uint32_t v = 0x5aad6cu; esp -= 4; W32(esp, v); }
/* 544960: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x544965u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 544965: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544968: xor ebx, ebx */
  ebx = 0;
/* 54496a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54496b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54496c: call 0x554df6 */
  esp -= 4; W32(esp, 0x544971u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_544971: guest_badaddr(0x544971); return;
}

void f_5449f0(void) {
  LOAD_REGS();
L_5449f0: /* 5449f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5449f1: mov ebp, esp */
  ebp = esp;
/* 5449f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5449f5: push 0x559586 */
  { uint32_t v = 0x559586u; esp -= 4; W32(esp, v); }
/* 5449fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 544a00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544a01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 544a08: sub esp, 0x6b4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6b4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 544a0e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 544a11: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544a12: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544a13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 544a14: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 544a17: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 544a1a: push 0x5ab064 */
  { uint32_t v = 0x5ab064u; esp -= 4; W32(esp, v); }
/* 544a1f: xor ebx, ebx */
  ebx = 0;
/* 544a21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544a22: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 544a25: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 544a28: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544a2du); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544a2d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544a30: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544a32: je 0x544a55 */
  if (zf) goto L_544a55;
L_544a34: /* 544a34: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 544a3a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 544a3c: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x544a3fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_544a3f: /* 544a3f: mov eax, 1 */
  eax = 0x1u;
/* 544a44: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 544a47: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 544a4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 544a4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 544a50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 544a51: mov esp, ebp */
  esp = ebp;
/* 544a53: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 544a54: ret  */
  esp += 4; SPILL(); return;
L_544a55: /* 544a55: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 544a58: push 0x5ab06c */
  { uint32_t v = 0x5ab06cu; esp -= 4; W32(esp, v); }
/* 544a5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544a5e: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544a63u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544a63: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544a66: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544a68: je 0x544a9a */
  if (zf) goto L_544a9a;
L_544a6a: /* 544a6a: xor esi, esi */
  esi = 0;
/* 544a6c: mov edi, 0x4e1f23 */
  edi = 0x4e1f23u;
L_544a71: /* 544a71: cmp esi, 0x1000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544a77: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_544a79: /* 544a79: cmp dword ptr [esi*4 + 0x5f1d90], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi*4 + 0x5f1d90u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544a80: jne 0x544a97 */
  if (!zf) goto L_544a97;
L_544a82: /* 544a82: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 544a88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544a89: push 0x5ab084 */
  { uint32_t v = 0x5ab084u; esp -= 4; W32(esp, v); }
/* 544a8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544a8f: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544a94u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544a94: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544a97: /* 544a97: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 544a98: jmp 0x544a71 */
  goto L_544a71;
L_544a9a: /* 544a9a: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 544a9d: push 0x5ab0c0 */
  { uint32_t v = 0x5ab0c0u; esp -= 4; W32(esp, v); }
/* 544aa2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544aa3: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544aa8u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544aa8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544aab: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544aad: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 544ab0: je 0x544bc4 */
  if (zf) goto L_544bc4;
L_544ab6: /* 544ab6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 544ab8: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 544abd: lea eax, [ebp - 0x2c0] */
  eax = (uint32_t)(ebp + 0xfffffd40u);
/* 544ac3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544ac4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544ac5: call 0x4e3256 */
  esp -= 4; W32(esp, 0x544acau); SPILL(); f_4e3256(); if (g_unwind) return; RELOAD();
/* 544aca: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544acd: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544acf: je 0x544ba2 */
  if (zf) goto L_544ba2;
L_544ad5: /* 544ad5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544ad6: lea edx, [ebp - 0x2c0] */
  edx = (uint32_t)(ebp + 0xfffffd40u);
/* 544adc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544add: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544adf: push 0x5f0d80 */
  { uint32_t v = 0x5f0d80u; esp -= 4; W32(esp, v); }
/* 544ae4: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x544ae9u); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 544ae9: mov esi, eax */
  esi = eax;
/* 544aeb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544aee: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544af0: je 0x544ba2 */
  if (zf) goto L_544ba2;
L_544af6: /* 544af6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 544af8: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 544afd: lea eax, [ebp - 0x4c0] */
  eax = (uint32_t)(ebp + 0xfffffb40u);
/* 544b03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544b04: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 544b07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544b08: call 0x4e3256 */
  esp -= 4; W32(esp, 0x544b0du); SPILL(); f_4e3256(); if (g_unwind) return; RELOAD();
/* 544b0d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544b10: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544b12: je 0x544b80 */
  if (zf) goto L_544b80;
L_544b14: /* 544b14: lea edx, [ebp - 0x4c0] */
  edx = (uint32_t)(ebp + 0xfffffb40u);
/* 544b1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544b1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544b1c: call 0x4e12ee */
  esp -= 4; W32(esp, 0x544b21u); SPILL(); f_4e12ee(); if (g_unwind) return; RELOAD();
/* 544b21: mov edx, eax */
  edx = eax;
/* 544b23: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544b26: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544b28: je 0x544b80 */
  if (zf) goto L_544b80;
L_544b2a: /* 544b2a: mov ax, word ptr [0x69f4b0] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x69f4b0u))) & 0xffffu);
/* 544b30: mov word ptr [ebp - 0x6c0], ax */
  W16((uint32_t)(ebp + 0xfffff940u), (eax & 0xffffu));
/* 544b37: xor eax, eax */
  eax = 0;
/* 544b39: mov ecx, 0x7f */
  ecx = 0x7fu;
/* 544b3e: lea edi, [ebp - 0x6be] */
  edi = (uint32_t)(ebp + 0xfffff942u);
/* 544b44: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 544b46: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 544b48: cmp dword ptr [esi + 0x4ec], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4ecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544b4e: je 0x544b6c */
  if (zf) goto L_544b6c;
L_544b50: /* 544b50: mov eax, dword ptr [esi + 0x4e8] */
  eax = R32((uint32_t)(esi + 0x4e8u));
/* 544b56: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 544b58: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 544b5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544b5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544b5c: lea ecx, [ebp - 0x6c0] */
  ecx = (uint32_t)(ebp + 0xfffff940u);
/* 544b62: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544b63: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544b64: mov ecx, edx */
  ecx = edx;
/* 544b66: call dword ptr [esi + 0xa0] */
  { uint32_t t = R32((uint32_t)(esi + 0xa0u)); esp -= 4; W32(esp, 0x544b6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_544b6c: /* 544b6c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 544b6f: lea edx, [ebp - 0x6c0] */
  edx = (uint32_t)(ebp + 0xfffff940u);
/* 544b75: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544b76: call 0x4e35da */
  esp -= 4; W32(esp, 0x544b7bu); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 544b7b: jmp 0x544a3f */
  goto L_544a3f;
L_544b80: /* 544b80: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 544b83: lea eax, [ebp - 0x4c0] */
  eax = (uint32_t)(ebp + 0xfffffb40u);
/* 544b89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544b8a: push 0x5ab0c8 */
  { uint32_t v = 0x5ab0c8u; esp -= 4; W32(esp, v); }
/* 544b8f: push 0x300 */
  { uint32_t v = 0x300u; esp -= 4; W32(esp, v); }
/* 544b94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544b95: call 0x4e30df */
  esp -= 4; W32(esp, 0x544b9au); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 544b9a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544b9d: jmp 0x544a3f */
  goto L_544a3f;
L_544ba2: /* 544ba2: lea edx, [ebp - 0x2c0] */
  edx = (uint32_t)(ebp + 0xfffffd40u);
/* 544ba8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544ba9: push 0x5ab0fc */
  { uint32_t v = 0x5ab0fcu; esp -= 4; W32(esp, v); }
L_544bae: /* 544bae: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 544bb1: push 0x300 */
  { uint32_t v = 0x300u; esp -= 4; W32(esp, v); }
/* 544bb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544bb7: call 0x4e30df */
  esp -= 4; W32(esp, 0x544bbcu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 544bbc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544bbf: jmp 0x544a3f */
  goto L_544a3f;
L_544bc4: /* 544bc4: push 0x5ab128 */
  { uint32_t v = 0x5ab128u; esp -= 4; W32(esp, v); }
/* 544bc9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544bca: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544bcfu); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544bcf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544bd2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544bd4: je 0x544ca7 */
  if (zf) goto L_544ca7;
L_544bda: /* 544bda: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 544bdc: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 544be1: lea edx, [ebp - 0x4c0] */
  edx = (uint32_t)(ebp + 0xfffffb40u);
/* 544be7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544be8: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 544beb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544bec: call 0x4e3256 */
  esp -= 4; W32(esp, 0x544bf1u); SPILL(); f_4e3256(); if (g_unwind) return; RELOAD();
/* 544bf1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544bf4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544bf6: je 0x544c96 */
  if (zf) goto L_544c96;
L_544bfc: /* 544bfc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544bfd: lea ecx, [ebp - 0x4c0] */
  ecx = (uint32_t)(ebp + 0xfffffb40u);
/* 544c03: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544c04: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544c06: push 0x5f0d80 */
  { uint32_t v = 0x5f0d80u; esp -= 4; W32(esp, v); }
/* 544c0b: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x544c10u); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 544c10: mov esi, eax */
  esi = eax;
/* 544c12: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544c15: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544c17: je 0x544c96 */
  if (zf) goto L_544c96;
L_544c19: /* 544c19: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 544c1b: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 544c20: lea edx, [ebp - 0x2c0] */
  edx = (uint32_t)(ebp + 0xfffffd40u);
/* 544c26: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544c27: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 544c2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544c2b: call 0x4e3256 */
  esp -= 4; W32(esp, 0x544c30u); SPILL(); f_4e3256(); if (g_unwind) return; RELOAD();
/* 544c30: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544c33: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544c35: je 0x544c74 */
  if (zf) goto L_544c74;
L_544c37: /* 544c37: lea ecx, [ebp - 0x2c0] */
  ecx = (uint32_t)(ebp + 0xfffffd40u);
/* 544c3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544c3e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544c3f: call 0x4e12ee */
  esp -= 4; W32(esp, 0x544c44u); SPILL(); f_4e12ee(); if (g_unwind) return; RELOAD();
/* 544c44: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544c47: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544c49: je 0x544c74 */
  if (zf) goto L_544c74;
L_544c4b: /* 544c4b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 544c4e: mov edi, edi */
  edi = edi;
L_544c50: /* 544c50: cmp word ptr [ecx], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 544c54: jne 0x544c5e */
  if (!zf) goto L_544c5e;
L_544c56: /* 544c56: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 544c59: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 544c5c: jmp 0x544c50 */
  goto L_544c50;
L_544c5e: /* 544c5e: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* 544c61: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 544c63: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544c64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544c65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544c66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544c67: call 0x4e3661 */
  esp -= 4; W32(esp, 0x544c6cu); SPILL(); f_4e3661(); if (g_unwind) return; RELOAD();
/* 544c6c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544c6f: jmp 0x544a3f */
  goto L_544a3f;
L_544c74: /* 544c74: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 544c77: lea eax, [ebp - 0x2c0] */
  eax = (uint32_t)(ebp + 0xfffffd40u);
/* 544c7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544c7e: push 0x5ab130 */
  { uint32_t v = 0x5ab130u; esp -= 4; W32(esp, v); }
/* 544c83: push 0x300 */
  { uint32_t v = 0x300u; esp -= 4; W32(esp, v); }
/* 544c88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544c89: call 0x4e30df */
  esp -= 4; W32(esp, 0x544c8eu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 544c8e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544c91: jmp 0x544a3f */
  goto L_544a3f;
L_544c96: /* 544c96: lea edx, [ebp - 0x4c0] */
  edx = (uint32_t)(ebp + 0xfffffb40u);
/* 544c9c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544c9d: push 0x5ab164 */
  { uint32_t v = 0x5ab164u; esp -= 4; W32(esp, v); }
/* 544ca2: jmp 0x544bae */
  goto L_544bae;
L_544ca7: /* 544ca7: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 544caa: push 0x5ab190 */
  { uint32_t v = 0x5ab190u; esp -= 4; W32(esp, v); }
/* 544caf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544cb0: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544cb5u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544cb5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544cb8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544cba: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 544cbd: je 0x5456ec */
  if (zf) goto L_5456ec;
L_544cc3: /* 544cc3: push 0x5ab198 */
  { uint32_t v = 0x5ab198u; esp -= 4; W32(esp, v); }
/* 544cc8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544cc9: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544cceu); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544cce: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544cd1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544cd3: je 0x544d08 */
  if (zf) goto L_544d08;
L_544cd5: /* 544cd5: mov eax, dword ptr [0x5b211c] */
  eax = R32((uint32_t)(0x5b211cu));
/* 544cda: mov esi, dword ptr [0x5b318c] */
  esi = R32((uint32_t)(0x5b318cu));
/* 544ce0: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 544ce2: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 544ce4: and eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 544ce9: or eax, 0x4000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 544cee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544cef: mov dword ptr [0x5b318c], ebx */
  W32((uint32_t)(0x5b318cu), ebx);
/* 544cf5: call 0x4e3fa8 */
  esp -= 4; W32(esp, 0x544cfau); SPILL(); f_4e3fa8(); if (g_unwind) return; RELOAD();
/* 544cfa: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544cfd: mov dword ptr [0x5b318c], esi */
  W32((uint32_t)(0x5b318cu), esi);
/* 544d03: jmp 0x544a3f */
  goto L_544a3f;
L_544d08: /* 544d08: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 544d0b: push 0x5ab1a8 */
  { uint32_t v = 0x5ab1a8u; esp -= 4; W32(esp, v); }
/* 544d10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544d11: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544d16u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544d16: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544d19: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544d1b: je 0x544d69 */
  if (zf) goto L_544d69;
L_544d1d: /* 544d1d: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 544d23: push 0x5ab1b4 */
  { uint32_t v = 0x5ab1b4u; esp -= 4; W32(esp, v); }
/* 544d28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544d29: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544d2eu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544d2e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544d31: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544d36: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544d39: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544d3eu); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544d3e: mov edi, edi */
  edi = edi;
L_544d40: /* 544d40: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544d43: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544d49: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_544d4f: /* 544d4f: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 544d55: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 544d58: or dword ptr [eax + 0x1c], 0x8000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x1cu), r);
  }
/* 544d5f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544d62: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544d67u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544d67: jmp 0x544d40 */
  goto L_544d40;
L_544d69: /* 544d69: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 544d6c: push 0x5ab1d4 */
  { uint32_t v = 0x5ab1d4u; esp -= 4; W32(esp, v); }
/* 544d71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544d72: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544d77u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544d77: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544d7a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544d7c: je 0x544de6 */
  if (zf) goto L_544de6;
L_544d7e: /* 544d7e: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 544d83: push 0x5ab1e8 */
  { uint32_t v = 0x5ab1e8u; esp -= 4; W32(esp, v); }
/* 544d88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544d89: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544d8eu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544d8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544d91: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544d96: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544d99: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544d9eu); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544d9e: mov edi, edi */
  edi = edi;
L_544da0: /* 544da0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544da3: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544da9: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_544daf: /* 544daf: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 544db5: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 544db8: test dword ptr [ecx + 0x1c], 0x8000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1cu))); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544dbf: jne 0x544ddc */
  if (!zf) goto L_544ddc;
L_544dc1: /* 544dc1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544dc2: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544dc7u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544dc7: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 544dcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544dce: push 0x5ab20c */
  { uint32_t v = 0x5ab20cu; esp -= 4; W32(esp, v); }
/* 544dd3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544dd4: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544dd9u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544dd9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544ddc: /* 544ddc: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544ddf: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544de4u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544de4: jmp 0x544da0 */
  goto L_544da0;
L_544de6: /* 544de6: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 544de9: push 0x5ab214 */
  { uint32_t v = 0x5ab214u; esp -= 4; W32(esp, v); }
/* 544dee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544def: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544df4u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544df4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544df7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544df9: je 0x544f9d */
  if (zf) goto L_544f9d;
L_544dff: /* 544dff: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 544e02: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544e04: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 544e07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544e08: push 0x5ab220 */
  { uint32_t v = 0x5ab220u; esp -= 4; W32(esp, v); }
/* 544e0d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544e0e: call 0x4e23a1 */
  esp -= 4; W32(esp, 0x544e13u); SPILL(); f_4e23a1(); if (g_unwind) return; RELOAD();
/* 544e13: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e16: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544e18: je 0x544a3f */
  if (zf) goto L_544a3f;
L_544e1e: /* 544e1e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 544e21: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 544e24: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544e26: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 544e29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544e2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544e2b: push 0x5ab230 */
  { uint32_t v = 0x5ab230u; esp -= 4; W32(esp, v); }
/* 544e30: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544e31: call 0x4e194c */
  esp -= 4; W32(esp, 0x544e36u); SPILL(); f_4e194c(); if (g_unwind) return; RELOAD();
/* 544e36: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e39: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544e3b: je 0x544a3f */
  if (zf) goto L_544a3f;
L_544e41: /* 544e41: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 544e44: push 0x69f4b4 */
  { uint32_t v = 0x69f4b4u; esp -= 4; W32(esp, v); }
/* 544e49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544e4a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544e4fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544e4f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 544e52: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544e57: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544e5cu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544e5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544e5d: push 0x5ab23c */
  { uint32_t v = 0x5ab23cu; esp -= 4; W32(esp, v); }
/* 544e62: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544e63: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544e68u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544e68: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e6b: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544e70: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544e73: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544e78u); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544e78: jmp 0x544e80 */
  goto L_544e80;
L_544e80: /* 544e80: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544e83: cmp esi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544e89: jge 0x544ee5 */
  if ((sf == of)) goto L_544ee5;
L_544e8b: /* 544e8b: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 544e90: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 544e93: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 544e96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544e97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544e98: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 544e9e: call 0x4e1087 */
  esp -= 4; W32(esp, 0x544ea3u); SPILL(); f_4e1087(); if (g_unwind) return; RELOAD();
/* 544ea3: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 544ea6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544ea8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 544eac: je 0x544ecd */
  if (zf) goto L_544ecd;
L_544eae: /* 544eae: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 544eb4: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 544eb7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544eb9: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544ebeu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544ebe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544ebf: push 0x5ab264 */
  { uint32_t v = 0x5ab264u; esp -= 4; W32(esp, v); }
/* 544ec4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544ec5: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544ecau); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544eca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544ecd: /* 544ecd: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544ed0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 544ed4: mov dword ptr [ebp - 0xb4], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x569110u);
/* 544ede: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544ee3u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544ee3: jmp 0x544e80 */
  goto L_544e80;
L_544ee5: /* 544ee5: push 0x69f4b8 */
  { uint32_t v = 0x69f4b8u; esp -= 4; W32(esp, v); }
/* 544eea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544eeb: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544ef0u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544ef0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 544ef3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544ef6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544ef8: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544efdu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544efd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544efe: push 0x5ab270 */
  { uint32_t v = 0x5ab270u; esp -= 4; W32(esp, v); }
/* 544f03: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f04: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f09u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f09: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 544f0c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544f10: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 544f13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544f14: call 0x4e44e4 */
  esp -= 4; W32(esp, 0x544f19u); SPILL(); f_4e44e4(); if (g_unwind) return; RELOAD();
/* 544f19: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f1c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 544f20: xor edi, edi */
  edi = 0;
L_544f22: /* 544f22: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 544f25: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544f27: jge 0x544f6c */
  if ((sf == of)) goto L_544f6c;
L_544f29: /* 544f29: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544f2b: je 0x544f34 */
  if (zf) goto L_544f34;
L_544f2d: /* 544f2d: mov esi, 0x69f4bc */
  esi = 0x69f4bcu;
/* 544f32: jmp 0x544f4c */
  goto L_544f4c;
L_544f34: /* 544f34: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 544f37: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 544f39: test dword ptr [eax + 0x1c], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544f40: mov esi, 0x5ab2c0 */
  esi = 0x5ab2c0u;
/* 544f45: jne 0x544f4c */
  if (!zf) goto L_544f4c;
L_544f47: /* 544f47: mov esi, 0x5ab2d4 */
  esi = 0x5ab2d4u;
L_544f4c: /* 544f4c: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 544f4f: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 544f52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544f54: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544f59u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544f59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544f5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544f5b: push 0x5ab2e4 */
  { uint32_t v = 0x5ab2e4u; esp -= 4; W32(esp, v); }
/* 544f60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f61: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f66u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f66: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f69: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 544f6a: jmp 0x544f22 */
  goto L_544f22;
L_544f6c: /* 544f6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544f6e: jne 0x544f7e */
  if (!zf) goto L_544f7e;
L_544f70: /* 544f70: push 0x5ab2f8 */
  { uint32_t v = 0x5ab2f8u; esp -= 4; W32(esp, v); }
/* 544f75: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f76: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f7bu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f7b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544f7e: /* 544f7e: push 0x69f4c0 */
  { uint32_t v = 0x69f4c0u; esp -= 4; W32(esp, v); }
/* 544f83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f84: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f89u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f89: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544f8c: /* 544f8c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 544f8f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 544f93: call 0x4e326a */
  esp -= 4; W32(esp, 0x544f98u); SPILL(); f_4e326a(); if (g_unwind) return; RELOAD();
/* 544f98: jmp 0x544a3f */
  goto L_544a3f;
L_544f9d: /* 544f9d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 544fa0: push 0x5ab340 */
  { uint32_t v = 0x5ab340u; esp -= 4; W32(esp, v); }
/* 544fa5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544fa6: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544fabu); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544fab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544fae: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544fb0: je 0x545017 */
  if (zf) goto L_545017;
L_544fb2: /* 544fb2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 544fb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544fb6: call 0x4e31de */
  esp -= 4; W32(esp, 0x544fbbu); SPILL(); f_4e31de(); if (g_unwind) return; RELOAD();
/* 544fbb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544fbe: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544fc3: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544fc6: xor esi, esi */
  esi = 0;
/* 544fc8: xor edi, edi */
  edi = 0;
/* 544fca: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544fcfu); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544fcf: nop  */
L_544fd0: /* 544fd0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544fd3: cmp ecx, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544fd9: jge 0x544fe6 */
  if ((sf == of)) goto L_544fe6;
L_544fdb: /* 544fdb: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544fde: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 544fdf: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544fe4u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544fe4: jmp 0x544fd0 */
  goto L_544fd0;
L_544fe6: /* 544fe6: xor edx, edx */
  edx = 0;
/* 544fe8: jmp 0x544ff0 */
  goto L_544ff0;
L_544ff0: /* 544ff0: cmp edx, 0x1000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 544ff6: jae 0x544a3f */
  if (!cf) goto L_544a3f;
L_544ffc: /* 544ffc: mov eax, dword ptr [edx*4 + 0x69b440] */
  eax = R32((uint32_t)(edx*4 + 0x69b440u));
/* 545003: xor ecx, ecx */
  ecx = 0;
L_545005: /* 545005: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545007: je 0x54500f */
  if (zf) goto L_54500f;
L_545009: /* 545009: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 54500c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 54500d: jmp 0x545005 */
  goto L_545005;
L_54500f: /* 54500f: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545011: je 0x545014 */
  if (zf) goto L_545014;
L_545013: /* 545013: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_545014: /* 545014: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 545015: jmp 0x544ff0 */
  goto L_544ff0;
L_545017: /* 545017: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 54501a: push 0x5ab34c */
  { uint32_t v = 0x5ab34cu; esp -= 4; W32(esp, v); }
/* 54501f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545020: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545025u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545025: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545028: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54502a: je 0x545043 */
  if (zf) goto L_545043;
L_54502c: /* 54502c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 54502f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545030: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545031: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 545036: call 0x53fd30 */
  esp -= 4; W32(esp, 0x54503bu); SPILL(); f_53fd30(); if (g_unwind) return; RELOAD();
/* 54503b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54503e: jmp 0x544a3f */
  goto L_544a3f;
L_545043: /* 545043: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 545046: push 0x5ab35c */
  { uint32_t v = 0x5ab35cu; esp -= 4; W32(esp, v); }
/* 54504b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54504c: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545051u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545051: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545054: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545056: je 0x545168 */
  if (zf) goto L_545168;
L_54505c: /* 54505c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 54505f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545060: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 545063: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545064: push 0x5ab378 */
  { uint32_t v = 0x5ab378u; esp -= 4; W32(esp, v); }
/* 545069: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54506a: call 0x4e3b61 */
  esp -= 4; W32(esp, 0x54506fu); SPILL(); f_4e3b61(); if (g_unwind) return; RELOAD();
/* 54506f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545072: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545074: je 0x544a3f */
  if (zf) goto L_544a3f;
L_54507a: /* 54507a: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 54507d: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 545080: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 545083: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 545087: xor esi, esi */
  esi = 0;
/* 545089: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_545090: /* 545090: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545093: jge 0x5450ef */
  if ((sf == of)) goto L_5450ef;
L_545095: /* 545095: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545096: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 54509c: push 0x5ab38c */
  { uint32_t v = 0x5ab38cu; esp -= 4; W32(esp, v); }
/* 5450a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5450a2: call 0x4e4183 */
  esp -= 4; W32(esp, 0x5450a7u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 5450a7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 5450aa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5450ad: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 5450b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5450b1: lea eax, [ebp - 0xac] */
  eax = (uint32_t)(ebp + 0xffffff54u);
/* 5450b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5450b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5450b9: call 0x4e3f67 */
  esp -= 4; W32(esp, 0x5450beu); SPILL(); f_4e3f67(); if (g_unwind) return; RELOAD();
/* 5450be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5450c1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5450c3: je 0x5450ec */
  if (zf) goto L_5450ec;
L_5450c5: /* 5450c5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5450c8: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 5450cd: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 5450d0: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5450d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5450d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5450d5: call 0x4e1cb2 */
  esp -= 4; W32(esp, 0x5450dau); SPILL(); f_4e1cb2(); if (g_unwind) return; RELOAD();
/* 5450da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5450dd: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 5450e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5450e1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5450e4: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 5450e7: call 0x4e17e9 */
  esp -= 4; W32(esp, 0x5450ecu); SPILL(); f_4e17e9(); if (g_unwind) return; RELOAD();
L_5450ec: /* 5450ec: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5450ed: jmp 0x545090 */
  goto L_545090;
L_5450ef: /* 5450ef: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5450f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5450f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5450f4: call 0x4e2cde */
  esp -= 4; W32(esp, 0x5450f9u); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 5450f9: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 5450fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5450fd: push 0x5ab3a4 */
  { uint32_t v = 0x5ab3a4u; esp -= 4; W32(esp, v); }
/* 545102: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545103: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545108u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545108: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54510b: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 545110: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545113: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x545118u); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 545118: jmp 0x545120 */
  goto L_545120;
L_545120: /* 545120: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545123: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545129: jge 0x544f8c */
  if ((sf == of)) goto L_544f8c;
L_54512f: /* 54512f: mov edi, dword ptr [0x6a0f04] */
  edi = R32((uint32_t)(0x6a0f04u));
/* 545135: mov ecx, dword ptr [edi + eax*4] */
  ecx = R32((uint32_t)(edi + eax*4));
/* 545138: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54513b: cmp dword ptr [ecx + 0x18], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54513e: jne 0x54515e */
  if (!zf) goto L_54515e;
L_545140: /* 545140: mov eax, ecx */
  eax = ecx;
/* 545142: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 545145: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545146: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545147: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545148: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545149: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 54514f: call 0x4e3bf7 */
  esp -= 4; W32(esp, 0x545154u); SPILL(); f_4e3bf7(); if (g_unwind) return; RELOAD();
/* 545154: mov dword ptr [ebp - 0xc0], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x569110u);
L_54515e: /* 54515e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545161: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x545166u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 545166: jmp 0x545120 */
  goto L_545120;
L_545168: /* 545168: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 54516b: push 0x5ab3cc */
  { uint32_t v = 0x5ab3ccu; esp -= 4; W32(esp, v); }
/* 545170: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545171: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545176u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545176: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545179: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54517b: je 0x5454fb */
  if (zf) goto L_5454fb;
L_545181: /* 545181: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 545184: push 0x5ab3d8 */
  { uint32_t v = 0x5ab3d8u; esp -= 4; W32(esp, v); }
/* 545189: mov ecx, esi */
  ecx = esi;
/* 54518b: call 0x4e35da */
  esp -= 4; W32(esp, 0x545190u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 545190: push 0x69f4c4 */
  { uint32_t v = 0x69f4c4u; esp -= 4; W32(esp, v); }
/* 545195: mov ecx, esi */
  ecx = esi;
/* 545197: call 0x4e35da */
  esp -= 4; W32(esp, 0x54519cu); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 54519c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54519f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5451a1: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 5451a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5451a5: push 0x5ab3ec */
  { uint32_t v = 0x5ab3ecu; esp -= 4; W32(esp, v); }
/* 5451aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5451ab: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 5451ae: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 5451b1: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 5451b4: call 0x4e23a1 */
  esp -= 4; W32(esp, 0x5451b9u); SPILL(); f_4e23a1(); if (g_unwind) return; RELOAD();
/* 5451b9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 5451bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5451bf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5451c0: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 5451c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5451c4: push 0x5ab3fc */
  { uint32_t v = 0x5ab3fcu; esp -= 4; W32(esp, v); }
/* 5451c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5451ca: call 0x4e3b61 */
  esp -= 4; W32(esp, 0x5451cfu); SPILL(); f_4e3b61(); if (g_unwind) return; RELOAD();
/* 5451cf: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 5451d2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5451d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5451d6: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5451d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5451da: push 0x5ab410 */
  { uint32_t v = 0x5ab410u; esp -= 4; W32(esp, v); }
/* 5451df: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5451e0: call 0x4e3b61 */
  esp -= 4; W32(esp, 0x5451e5u); SPILL(); f_4e3b61(); if (g_unwind) return; RELOAD();
/* 5451e5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5451e8: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 5451eb: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 5451ee: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 5451f1: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 5451f4: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 5451f7: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 5451fa: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 5451ff: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545202: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 545206: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 545209: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 54520c: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 54520f: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x545214u); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 545214: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 545217: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
/* 54521d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_545220: /* 545220: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545223: cmp edi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545229: jge 0x545373 */
  if ((sf == of)) goto L_545373;
L_54522f: /* 54522f: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 545232: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545234: je 0x545243 */
  if (zf) goto L_545243;
L_545236: /* 545236: mov ecx, dword ptr [esi + edi*4] */
  ecx = R32((uint32_t)(esi + edi*4));
/* 545239: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54523a: call 0x4e2b3a */
  esp -= 4; W32(esp, 0x54523fu); SPILL(); f_4e2b3a(); if (g_unwind) return; RELOAD();
/* 54523f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545241: jne 0x545283 */
  if (!zf) goto L_545283;
L_545243: /* 545243: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545245: je 0x54524f */
  if (zf) goto L_54524f;
L_545247: /* 545247: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 54524a: cmp dword ptr [eax + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54524d: je 0x545283 */
  if (zf) goto L_545283;
L_54524f: /* 54524f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 545252: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545254: je 0x545265 */
  if (zf) goto L_545265;
L_545256: /* 545256: mov ecx, dword ptr [esi + edi*4] */
  ecx = R32((uint32_t)(esi + edi*4));
/* 545259: mov edx, eax */
  edx = eax;
/* 54525b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54525c: call 0x4e33cd */
  esp -= 4; W32(esp, 0x545261u); SPILL(); f_4e33cd(); if (g_unwind) return; RELOAD();
/* 545261: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545263: jne 0x545283 */
  if (!zf) goto L_545283;
L_545265: /* 545265: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 545268: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54526a: jne 0x545366 */
  if (!zf) goto L_545366;
L_545270: /* 545270: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545272: jne 0x545366 */
  if (!zf) goto L_545366;
L_545278: /* 545278: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54527b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54527d: jne 0x545366 */
  if (!zf) goto L_545366;
L_545283: /* 545283: mov esi, dword ptr [esi + edi*4] */
  esi = R32((uint32_t)(esi + edi*4));
/* 545286: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545287: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 54528d: call 0x4e186b */
  esp -= 4; W32(esp, 0x545292u); SPILL(); f_4e186b(); if (g_unwind) return; RELOAD();
/* 545292: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 545298: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 54529c: xor esi, esi */
  esi = 0;
/* 54529e: mov edi, edi */
  edi = edi;
L_5452a0: /* 5452a0: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5452a3: jge 0x5452bb */
  if ((sf == of)) goto L_5452bb;
L_5452a5: /* 5452a5: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 5452a8: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 5452ab: mov ebx, dword ptr [ebp - 0x3c] */
  ebx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 5452ae: mov edx, esi */
  edx = esi;
/* 5452b0: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 5452b3: cmp dword ptr [edx + ebx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ebx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452b6: je 0x5452bb */
  if (zf) goto L_5452bb;
L_5452b8: /* 5452b8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5452b9: jmp 0x5452a0 */
  goto L_5452a0;
L_5452bb: /* 5452bb: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 5452be: xor ebx, ebx */
  ebx = 0;
/* 5452c0: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452c2: jne 0x5452e4 */
  if (!zf) goto L_5452e4;
L_5452c4: /* 5452c4: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 5452c7: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 5452ca: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 5452cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5452ce: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5452d1: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 5452d4: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 5452d7: mov dword ptr [ebp - 0x60], ebx */
  W32((uint32_t)(ebp + 0xffffffa0u), ebx);
/* 5452da: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
/* 5452dd: call 0x4e290a */
  esp -= 4; W32(esp, 0x5452e2u); SPILL(); f_4e290a(); if (g_unwind) return; RELOAD();
/* 5452e2: mov esi, eax */
  esi = eax;
L_5452e4: /* 5452e4: cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452e7: jne 0x5452f3 */
  if (!zf) goto L_5452f3;
L_5452e9: /* 5452e9: cmp dword ptr [ebp - 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452ec: jne 0x5452f3 */
  if (!zf) goto L_5452f3;
L_5452ee: /* 5452ee: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452f1: je 0x54531c */
  if (zf) goto L_54531c;
L_5452f3: /* 5452f3: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 5452f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5452f7: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 5452f9: call 0x4e1186 */
  esp -= 4; W32(esp, 0x5452feu); SPILL(); f_4e1186(); if (g_unwind) return; RELOAD();
/* 5452fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545301: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545303: je 0x54531c */
  if (zf) goto L_54531c;
L_545305: /* 545305: mov ebx, dword ptr [0x6a0f04] */
  ebx = R32((uint32_t)(0x6a0f04u));
/* 54530b: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 54530e: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 545311: mov edi, dword ptr [ebx + edi*4] */
  edi = R32((uint32_t)(ebx + edi*4));
/* 545314: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 545316: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 545319: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_54531c: /* 54531c: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 54531f: mov ecx, esi */
  ecx = esi;
/* 545321: lea eax, [ebp - 0xb4] */
  eax = (uint32_t)(ebp + 0xffffff4cu);
/* 545327: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 54532a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54532b: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 54532d: call 0x4e18c0 */
  esp -= 4; W32(esp, 0x545332u); SPILL(); f_4e18c0(); if (g_unwind) return; RELOAD();
/* 545332: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 545335: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 545338: mov esi, dword ptr [ebp - 0x48] */
  esi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 54533b: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 54533e: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 545341: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545343: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 545344: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 545347: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 54534a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54534c: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 54534f: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
/* 545355: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 545358: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 54535c: mov dword ptr [ebp - 0xb4], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x569110u);
L_545366: /* 545366: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545369: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x54536eu); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 54536e: jmp 0x545220 */
  goto L_545220;
L_545373: /* 545373: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 545376: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545378: je 0x5453f7 */
  if (zf) goto L_5453f7;
L_54537e: /* 54537e: push 0x536b20 */
  { uint32_t v = 0x536b20u; esp -= 4; W32(esp, v); }
/* 545383: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 545385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545386: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 545389: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54538a: call 0x4e1785 */
  esp -= 4; W32(esp, 0x54538fu); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 54538f: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 545392: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545395: push 0x5ab420 */
  { uint32_t v = 0x5ab420u; esp -= 4; W32(esp, v); }
/* 54539a: push 0x5ab434 */
  { uint32_t v = 0x5ab434u; esp -= 4; W32(esp, v); }
/* 54539f: push 0x5ab448 */
  { uint32_t v = 0x5ab448u; esp -= 4; W32(esp, v); }
/* 5453a4: push 0x5ab458 */
  { uint32_t v = 0x5ab458u; esp -= 4; W32(esp, v); }
/* 5453a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5453aa: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5453afu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5453af: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5453b2: xor edi, edi */
  edi = 0;
L_5453b4: /* 5453b4: cmp edi, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5453b7: jge 0x5453eb */
  if ((sf == of)) goto L_5453eb;
L_5453b9: /* 5453b9: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 5453bc: lea esi, [edi + edi*2] */
  esi = (uint32_t)(edi + edi*2);
/* 5453bf: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 5453c2: mov ecx, dword ptr [esi + ecx] */
  ecx = R32((uint32_t)(esi + ecx));
/* 5453c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5453c7: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x5453ccu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 5453cc: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 5453cf: mov edx, dword ptr [esi + ecx + 8] */
  edx = R32((uint32_t)(esi + ecx + 0x8u));
/* 5453d3: mov ecx, dword ptr [esi + ecx + 4] */
  ecx = R32((uint32_t)(esi + ecx + 0x4u));
/* 5453d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5453d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5453d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5453da: push 0x5ab47c */
  { uint32_t v = 0x5ab47cu; esp -= 4; W32(esp, v); }
/* 5453df: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5453e0: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5453e5u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5453e5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5453e8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 5453e9: jmp 0x5453b4 */
  goto L_5453b4;
L_5453eb: /* 5453eb: push 0x69f4c8 */
  { uint32_t v = 0x69f4c8u; esp -= 4; W32(esp, v); }
/* 5453f0: mov ecx, ebx */
  ecx = ebx;
/* 5453f2: call 0x4e35da */
  esp -= 4; W32(esp, 0x5453f7u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
L_5453f7: /* 5453f7: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 5453fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5453fc: je 0x545493 */
  if (zf) goto L_545493;
L_545402: /* 545402: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 545405: push 0x536b40 */
  { uint32_t v = 0x536b40u; esp -= 4; W32(esp, v); }
/* 54540a: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 54540c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54540d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54540e: call 0x4e1785 */
  esp -= 4; W32(esp, 0x545413u); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 545413: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 545416: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545419: push 0x5ab4a0 */
  { uint32_t v = 0x5ab4a0u; esp -= 4; W32(esp, v); }
/* 54541e: push 0x5ab4b4 */
  { uint32_t v = 0x5ab4b4u; esp -= 4; W32(esp, v); }
/* 545423: push 0x5ab4c8 */
  { uint32_t v = 0x5ab4c8u; esp -= 4; W32(esp, v); }
/* 545428: push 0x5ab4d4 */
  { uint32_t v = 0x5ab4d4u; esp -= 4; W32(esp, v); }
/* 54542d: push 0x5ab4e0 */
  { uint32_t v = 0x5ab4e0u; esp -= 4; W32(esp, v); }
/* 545432: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 545433: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545438u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545438: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54543b: xor esi, esi */
  esi = 0;
/* 54543d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_545440: /* 545440: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545443: jge 0x545485 */
  if ((sf == of)) goto L_545485;
L_545445: /* 545445: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 545448: mov eax, esi */
  eax = esi;
/* 54544a: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 54544d: mov edx, dword ptr [eax + ecx + 0xc] */
  edx = R32((uint32_t)(eax + ecx + 0xcu));
/* 545451: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 545453: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 545456: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 545459: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54545a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 54545d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 54545f: shr ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 545462: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545463: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 545466: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545467: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 54546d: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 545470: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 545473: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545474: push 0x5ab514 */
  { uint32_t v = 0x5ab514u; esp -= 4; W32(esp, v); }
/* 545479: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54547a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54547fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54547f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545482: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 545483: jmp 0x545440 */
  goto L_545440;
L_545485: /* 545485: push 0x69f4cc */
  { uint32_t v = 0x69f4ccu; esp -= 4; W32(esp, v); }
/* 54548a: mov ecx, edi */
  ecx = edi;
/* 54548c: call 0x4e35da */
  esp -= 4; W32(esp, 0x545491u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 545491: jmp 0x545496 */
  goto L_545496;
L_545493: /* 545493: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_545496: /* 545496: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 545499: fild dword ptr [ebp - 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 54549c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54549e: jge 0x5454a6 */
  if ((sf == of)) goto L_5454a6;
L_5454a0: /* 5454a0: fadd dword ptr [0x56ec14] */
  ST0 = ST0 + (F32((uint32_t)(0x56ec14u)));
L_5454a6: /* 5454a6: fmul qword ptr [0x56ec08] */
  ST0 = ST0 * (F64((uint32_t)(0x56ec08u)));
/* 5454ac: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 5454af: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5454b2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5454b4: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 5454b8: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 5454bb: jge 0x5454c3 */
  if ((sf == of)) goto L_5454c3;
L_5454bd: /* 5454bd: fadd dword ptr [0x56ec14] */
  ST0 = ST0 + (F32((uint32_t)(0x56ec14u)));
L_5454c3: /* 5454c3: fmul qword ptr [0x56ec08] */
  ST0 = ST0 * (F64((uint32_t)(0x56ec08u)));
/* 5454c9: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 5454cc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 5454cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5454d0: push 0x5ab548 */
  { uint32_t v = 0x5ab548u; esp -= 4; W32(esp, v); }
/* 5454d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5454d6: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5454dbu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5454db: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5454de: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5454e1: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 5454e5: call 0x4e1b45 */
  esp -= 4; W32(esp, 0x5454eau); SPILL(); f_4e1b45(); if (g_unwind) return; RELOAD();
/* 5454ea: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5454ed: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5454f1: call 0x4e37b5 */
  esp -= 4; W32(esp, 0x5454f6u); SPILL(); f_4e37b5(); if (g_unwind) return; RELOAD();
/* 5454f6: jmp 0x544a3f */
  goto L_544a3f;
L_5454fb: /* 5454fb: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 5454fe: push 0x5ab580 */
  { uint32_t v = 0x5ab580u; esp -= 4; W32(esp, v); }
/* 545503: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545504: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545509u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545509: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54550c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54550e: je 0x5455a8 */
  if (zf) goto L_5455a8;
L_545514: /* 545514: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 545517: push 0x5ab590 */
  { uint32_t v = 0x5ab590u; esp -= 4; W32(esp, v); }
/* 54551c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54551d: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545522u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545522: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545525: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545528: call 0x4e2874 */
  esp -= 4; W32(esp, 0x54552du); SPILL(); f_4e2874(); if (g_unwind) return; RELOAD();
/* 54552d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_545530: /* 545530: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545533: cmp edi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545539: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_54553f: /* 54553f: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 545545: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 545548: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 54554b: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 545551: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 545554: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545557: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545558: push 0x5ab5b0 */
  { uint32_t v = 0x5ab5b0u; esp -= 4; W32(esp, v); }
/* 54555d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54555e: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545563u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545563: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545566: xor esi, esi */
  esi = 0;
L_545568: /* 545568: cmp esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54556e: jge 0x54559e */
  if ((sf == of)) goto L_54559e;
L_545570: /* 545570: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 545575: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 545578: mov eax, dword ptr [eax + esi*4 + 0x98] */
  eax = R32((uint32_t)(eax + esi*4 + 0x98u));
/* 54557f: xor ecx, ecx */
  ecx = 0;
L_545581: /* 545581: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545583: je 0x54558b */
  if (zf) goto L_54558b;
L_545585: /* 545585: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 545588: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 545589: jmp 0x545581 */
  goto L_545581;
L_54558b: /* 54558b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54558c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54558d: push 0x5ab5b8 */
  { uint32_t v = 0x5ab5b8u; esp -= 4; W32(esp, v); }
/* 545592: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545593: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545598u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545598: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54559b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 54559c: jmp 0x545568 */
  goto L_545568;
L_54559e: /* 54559e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 5455a1: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x5455a6u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 5455a6: jmp 0x545530 */
  goto L_545530;
L_5455a8: /* 5455a8: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 5455ab: push 0x5ab5cc */
  { uint32_t v = 0x5ab5ccu; esp -= 4; W32(esp, v); }
/* 5455b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5455b1: call 0x4e32ec */
  esp -= 4; W32(esp, 0x5455b6u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 5455b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5455b9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5455bb: je 0x5456d9 */
  if (zf) goto L_5456d9;
L_5455c1: /* 5455c1: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 5455c4: push 0x5ab5dc */
  { uint32_t v = 0x5ab5dcu; esp -= 4; W32(esp, v); }
/* 5455c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5455ca: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5455cfu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5455cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5455d2: xor eax, eax */
  eax = 0;
/* 5455d4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5455d7: jmp 0x5455e0 */
  goto L_5455e0;
L_5455e0: /* 5455e0: cmp eax, dword ptr [0x69ff64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x69ff64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5455e6: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_5455ec: /* 5455ec: mov ecx, dword ptr [0x69ff60] */
  ecx = R32((uint32_t)(0x69ff60u));
/* 5455f2: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 5455f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5455f6: call 0x4e2e50 */
  esp -= 4; W32(esp, 0x5455fbu); SPILL(); f_4e2e50(); if (g_unwind) return; RELOAD();
/* 5455fb: xor ebx, ebx */
  ebx = 0;
/* 5455fd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545600: mov esi, eax */
  esi = eax;
/* 545602: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 545605: xor edi, edi */
  edi = 0;
L_545607: /* 545607: cmp edi, dword ptr [esi + 0x70] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54560a: jge 0x545635 */
  if ((sf == of)) goto L_545635;
L_54560c: /* 54560c: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 54560f: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 545612: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545614: je 0x545632 */
  if (zf) goto L_545632;
L_545616: /* 545616: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 54561c: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 54561f: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545622: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545623: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x545628u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 545628: lea ebx, [ebx + eax*2 + 0xe] */
  ebx = (uint32_t)(ebx + eax*2 + 0xeu);
/* 54562c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54562f: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_545632: /* 545632: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 545633: jmp 0x545607 */
  goto L_545607;
L_545635: /* 545635: mov eax, dword ptr [esi + 0x500] */
  eax = R32((uint32_t)(esi + 0x500u));
/* 54563b: mov ecx, dword ptr [esi + 0x64] */
  ecx = R32((uint32_t)(esi + 0x64u));
/* 54563e: mov edx, dword ptr [esi + 0x70] */
  edx = R32((uint32_t)(esi + 0x70u));
/* 545641: mov edi, dword ptr [esi + 0x88] */
  edi = R32((uint32_t)(esi + 0x88u));
/* 545647: mov ebx, dword ptr [esi + 0x7c] */
  ebx = R32((uint32_t)(esi + 0x7cu));
/* 54564a: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 54564d: mov eax, dword ptr [esi + 0x98] */
  eax = R32((uint32_t)(esi + 0x98u));
/* 545653: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545655: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 545658: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 54565b: je 0x545668 */
  if (zf) goto L_545668;
L_54565d: /* 54565d: mov eax, dword ptr [esi + 0x94] */
  eax = R32((uint32_t)(esi + 0x94u));
/* 545663: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 545666: jmp 0x54566f */
  goto L_54566f;
L_545668: /* 545668: mov dword ptr [ebp - 0x24], 0x5ed66c */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x5ed66cu);
L_54566f: /* 54566f: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 545672: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 545674: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x545679u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 545679: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 54567c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54567d: mov ecx, eax */
  ecx = eax;
/* 54567f: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 545682: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545683: mov eax, ebx */
  eax = ebx;
/* 545685: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 545688: lea edx, [edi + edi*8] */
  edx = (uint32_t)(edi + edi*8);
/* 54568b: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 54568e: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 545691: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545692: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 545693: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 545696: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545697: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54569a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 54569b: and edx, 0x3ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5456a1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5456a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5456a4: sar eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5456a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456a8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5456ab: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 5456b2: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 5456b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5456b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456b7: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 5456ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5456bb: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5456be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456bf: push 0x5ab5f0 */
  { uint32_t v = 0x5ab5f0u; esp -= 4; W32(esp, v); }
/* 5456c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5456c5: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5456cau); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5456ca: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5456cd: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5456d0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5456d1: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5456d4: jmp 0x5455e0 */
  goto L_5455e0;
L_5456d9: /* 5456d9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5456dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5456dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5456de: xor eax, eax */
  eax = 0;
/* 5456e0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5456e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5456e8: mov esp, ebp */
  esp = ebp;
/* 5456ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5456eb: ret  */
  esp += 4; SPILL(); return;
L_5456ec: /* 5456ec: push 0x5ab68c */
  { uint32_t v = 0x5ab68cu; esp -= 4; W32(esp, v); }
/* 5456f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5456f2: call 0x4e32ec */
  esp -= 4; W32(esp, 0x5456f7u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 5456f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5456fa: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5456fc: je 0x5456d9 */
  if (zf) goto L_5456d9;
L_5456fe: /* 5456fe: mov eax, dword ptr [0x5b210c] */
  eax = R32((uint32_t)(0x5b210cu));
/* 545703: mov ecx, dword ptr [0x5b2108] */
  ecx = R32((uint32_t)(0x5b2108u));
/* 545709: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 54570f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545710: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545711: push 0x5ab698 */
  { uint32_t v = 0x5ab698u; esp -= 4; W32(esp, v); }
/* 545716: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545717: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54571cu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54571c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54571f: jmp 0x544a3f */
  goto L_544a3f;
}

void f_544a55(void) {
  LOAD_REGS();
  goto L_544a55;
L_544a3f: /* 544a3f: mov eax, 1 */
  eax = 0x1u;
/* 544a44: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 544a47: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 544a4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 544a4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 544a50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 544a51: mov esp, ebp */
  esp = ebp;
/* 544a53: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 544a54: ret  */
  esp += 4; SPILL(); return;
L_544a55: /* 544a55: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 544a58: push 0x5ab06c */
  { uint32_t v = 0x5ab06cu; esp -= 4; W32(esp, v); }
/* 544a5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544a5e: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544a63u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544a63: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544a66: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544a68: je 0x544a9a */
  if (zf) goto L_544a9a;
L_544a6a: /* 544a6a: xor esi, esi */
  esi = 0;
/* 544a6c: mov edi, 0x4e1f23 */
  edi = 0x4e1f23u;
L_544a71: /* 544a71: cmp esi, 0x1000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544a77: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_544a79: /* 544a79: cmp dword ptr [esi*4 + 0x5f1d90], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi*4 + 0x5f1d90u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544a80: jne 0x544a97 */
  if (!zf) goto L_544a97;
L_544a82: /* 544a82: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 544a88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544a89: push 0x5ab084 */
  { uint32_t v = 0x5ab084u; esp -= 4; W32(esp, v); }
/* 544a8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544a8f: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544a94u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544a94: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544a97: /* 544a97: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 544a98: jmp 0x544a71 */
  goto L_544a71;
L_544a9a: /* 544a9a: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 544a9d: push 0x5ab0c0 */
  { uint32_t v = 0x5ab0c0u; esp -= 4; W32(esp, v); }
/* 544aa2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544aa3: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544aa8u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544aa8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544aab: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544aad: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 544ab0: je 0x544bc4 */
  if (zf) goto L_544bc4;
L_544ab6: /* 544ab6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 544ab8: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 544abd: lea eax, [ebp - 0x2c0] */
  eax = (uint32_t)(ebp + 0xfffffd40u);
/* 544ac3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544ac4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544ac5: call 0x4e3256 */
  esp -= 4; W32(esp, 0x544acau); SPILL(); f_4e3256(); if (g_unwind) return; RELOAD();
/* 544aca: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544acd: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544acf: je 0x544ba2 */
  if (zf) goto L_544ba2;
L_544ad5: /* 544ad5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544ad6: lea edx, [ebp - 0x2c0] */
  edx = (uint32_t)(ebp + 0xfffffd40u);
/* 544adc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544add: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544adf: push 0x5f0d80 */
  { uint32_t v = 0x5f0d80u; esp -= 4; W32(esp, v); }
/* 544ae4: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x544ae9u); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 544ae9: mov esi, eax */
  esi = eax;
/* 544aeb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544aee: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544af0: je 0x544ba2 */
  if (zf) goto L_544ba2;
L_544af6: /* 544af6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 544af8: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 544afd: lea eax, [ebp - 0x4c0] */
  eax = (uint32_t)(ebp + 0xfffffb40u);
/* 544b03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544b04: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 544b07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544b08: call 0x4e3256 */
  esp -= 4; W32(esp, 0x544b0du); SPILL(); f_4e3256(); if (g_unwind) return; RELOAD();
/* 544b0d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544b10: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544b12: je 0x544b80 */
  if (zf) goto L_544b80;
L_544b14: /* 544b14: lea edx, [ebp - 0x4c0] */
  edx = (uint32_t)(ebp + 0xfffffb40u);
/* 544b1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544b1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544b1c: call 0x4e12ee */
  esp -= 4; W32(esp, 0x544b21u); SPILL(); f_4e12ee(); if (g_unwind) return; RELOAD();
/* 544b21: mov edx, eax */
  edx = eax;
/* 544b23: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544b26: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544b28: je 0x544b80 */
  if (zf) goto L_544b80;
L_544b2a: /* 544b2a: mov ax, word ptr [0x69f4b0] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x69f4b0u))) & 0xffffu);
/* 544b30: mov word ptr [ebp - 0x6c0], ax */
  W16((uint32_t)(ebp + 0xfffff940u), (eax & 0xffffu));
/* 544b37: xor eax, eax */
  eax = 0;
/* 544b39: mov ecx, 0x7f */
  ecx = 0x7fu;
/* 544b3e: lea edi, [ebp - 0x6be] */
  edi = (uint32_t)(ebp + 0xfffff942u);
/* 544b44: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 544b46: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 544b48: cmp dword ptr [esi + 0x4ec], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4ecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544b4e: je 0x544b6c */
  if (zf) goto L_544b6c;
L_544b50: /* 544b50: mov eax, dword ptr [esi + 0x4e8] */
  eax = R32((uint32_t)(esi + 0x4e8u));
/* 544b56: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 544b58: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 544b5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544b5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544b5c: lea ecx, [ebp - 0x6c0] */
  ecx = (uint32_t)(ebp + 0xfffff940u);
/* 544b62: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544b63: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544b64: mov ecx, edx */
  ecx = edx;
/* 544b66: call dword ptr [esi + 0xa0] */
  { uint32_t t = R32((uint32_t)(esi + 0xa0u)); esp -= 4; W32(esp, 0x544b6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_544b6c: /* 544b6c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 544b6f: lea edx, [ebp - 0x6c0] */
  edx = (uint32_t)(ebp + 0xfffff940u);
/* 544b75: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544b76: call 0x4e35da */
  esp -= 4; W32(esp, 0x544b7bu); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 544b7b: jmp 0x544a3f */
  goto L_544a3f;
L_544b80: /* 544b80: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 544b83: lea eax, [ebp - 0x4c0] */
  eax = (uint32_t)(ebp + 0xfffffb40u);
/* 544b89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544b8a: push 0x5ab0c8 */
  { uint32_t v = 0x5ab0c8u; esp -= 4; W32(esp, v); }
/* 544b8f: push 0x300 */
  { uint32_t v = 0x300u; esp -= 4; W32(esp, v); }
/* 544b94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544b95: call 0x4e30df */
  esp -= 4; W32(esp, 0x544b9au); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 544b9a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544b9d: jmp 0x544a3f */
  goto L_544a3f;
L_544ba2: /* 544ba2: lea edx, [ebp - 0x2c0] */
  edx = (uint32_t)(ebp + 0xfffffd40u);
/* 544ba8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544ba9: push 0x5ab0fc */
  { uint32_t v = 0x5ab0fcu; esp -= 4; W32(esp, v); }
L_544bae: /* 544bae: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 544bb1: push 0x300 */
  { uint32_t v = 0x300u; esp -= 4; W32(esp, v); }
/* 544bb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544bb7: call 0x4e30df */
  esp -= 4; W32(esp, 0x544bbcu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 544bbc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544bbf: jmp 0x544a3f */
  goto L_544a3f;
L_544bc4: /* 544bc4: push 0x5ab128 */
  { uint32_t v = 0x5ab128u; esp -= 4; W32(esp, v); }
/* 544bc9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544bca: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544bcfu); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544bcf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544bd2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544bd4: je 0x544ca7 */
  if (zf) goto L_544ca7;
L_544bda: /* 544bda: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 544bdc: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 544be1: lea edx, [ebp - 0x4c0] */
  edx = (uint32_t)(ebp + 0xfffffb40u);
/* 544be7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544be8: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 544beb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544bec: call 0x4e3256 */
  esp -= 4; W32(esp, 0x544bf1u); SPILL(); f_4e3256(); if (g_unwind) return; RELOAD();
/* 544bf1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544bf4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544bf6: je 0x544c96 */
  if (zf) goto L_544c96;
L_544bfc: /* 544bfc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544bfd: lea ecx, [ebp - 0x4c0] */
  ecx = (uint32_t)(ebp + 0xfffffb40u);
/* 544c03: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544c04: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544c06: push 0x5f0d80 */
  { uint32_t v = 0x5f0d80u; esp -= 4; W32(esp, v); }
/* 544c0b: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x544c10u); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 544c10: mov esi, eax */
  esi = eax;
/* 544c12: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544c15: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544c17: je 0x544c96 */
  if (zf) goto L_544c96;
L_544c19: /* 544c19: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 544c1b: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 544c20: lea edx, [ebp - 0x2c0] */
  edx = (uint32_t)(ebp + 0xfffffd40u);
/* 544c26: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544c27: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 544c2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544c2b: call 0x4e3256 */
  esp -= 4; W32(esp, 0x544c30u); SPILL(); f_4e3256(); if (g_unwind) return; RELOAD();
/* 544c30: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544c33: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544c35: je 0x544c74 */
  if (zf) goto L_544c74;
L_544c37: /* 544c37: lea ecx, [ebp - 0x2c0] */
  ecx = (uint32_t)(ebp + 0xfffffd40u);
/* 544c3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544c3e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544c3f: call 0x4e12ee */
  esp -= 4; W32(esp, 0x544c44u); SPILL(); f_4e12ee(); if (g_unwind) return; RELOAD();
/* 544c44: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544c47: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544c49: je 0x544c74 */
  if (zf) goto L_544c74;
L_544c4b: /* 544c4b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 544c4e: mov edi, edi */
  edi = edi;
L_544c50: /* 544c50: cmp word ptr [ecx], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 544c54: jne 0x544c5e */
  if (!zf) goto L_544c5e;
L_544c56: /* 544c56: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 544c59: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 544c5c: jmp 0x544c50 */
  goto L_544c50;
L_544c5e: /* 544c5e: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* 544c61: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 544c63: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544c64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544c65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544c66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544c67: call 0x4e3661 */
  esp -= 4; W32(esp, 0x544c6cu); SPILL(); f_4e3661(); if (g_unwind) return; RELOAD();
/* 544c6c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544c6f: jmp 0x544a3f */
  goto L_544a3f;
L_544c74: /* 544c74: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 544c77: lea eax, [ebp - 0x2c0] */
  eax = (uint32_t)(ebp + 0xfffffd40u);
/* 544c7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544c7e: push 0x5ab130 */
  { uint32_t v = 0x5ab130u; esp -= 4; W32(esp, v); }
/* 544c83: push 0x300 */
  { uint32_t v = 0x300u; esp -= 4; W32(esp, v); }
/* 544c88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544c89: call 0x4e30df */
  esp -= 4; W32(esp, 0x544c8eu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 544c8e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544c91: jmp 0x544a3f */
  goto L_544a3f;
L_544c96: /* 544c96: lea edx, [ebp - 0x4c0] */
  edx = (uint32_t)(ebp + 0xfffffb40u);
/* 544c9c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544c9d: push 0x5ab164 */
  { uint32_t v = 0x5ab164u; esp -= 4; W32(esp, v); }
/* 544ca2: jmp 0x544bae */
  goto L_544bae;
L_544ca7: /* 544ca7: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 544caa: push 0x5ab190 */
  { uint32_t v = 0x5ab190u; esp -= 4; W32(esp, v); }
/* 544caf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544cb0: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544cb5u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544cb5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544cb8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544cba: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 544cbd: je 0x5456ec */
  if (zf) goto L_5456ec;
L_544cc3: /* 544cc3: push 0x5ab198 */
  { uint32_t v = 0x5ab198u; esp -= 4; W32(esp, v); }
/* 544cc8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544cc9: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544cceu); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544cce: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544cd1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544cd3: je 0x544d08 */
  if (zf) goto L_544d08;
L_544cd5: /* 544cd5: mov eax, dword ptr [0x5b211c] */
  eax = R32((uint32_t)(0x5b211cu));
/* 544cda: mov esi, dword ptr [0x5b318c] */
  esi = R32((uint32_t)(0x5b318cu));
/* 544ce0: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 544ce2: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 544ce4: and eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 544ce9: or eax, 0x4000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 544cee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544cef: mov dword ptr [0x5b318c], ebx */
  W32((uint32_t)(0x5b318cu), ebx);
/* 544cf5: call 0x4e3fa8 */
  esp -= 4; W32(esp, 0x544cfau); SPILL(); f_4e3fa8(); if (g_unwind) return; RELOAD();
/* 544cfa: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544cfd: mov dword ptr [0x5b318c], esi */
  W32((uint32_t)(0x5b318cu), esi);
/* 544d03: jmp 0x544a3f */
  goto L_544a3f;
L_544d08: /* 544d08: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 544d0b: push 0x5ab1a8 */
  { uint32_t v = 0x5ab1a8u; esp -= 4; W32(esp, v); }
/* 544d10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544d11: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544d16u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544d16: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544d19: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544d1b: je 0x544d69 */
  if (zf) goto L_544d69;
L_544d1d: /* 544d1d: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 544d23: push 0x5ab1b4 */
  { uint32_t v = 0x5ab1b4u; esp -= 4; W32(esp, v); }
/* 544d28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544d29: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544d2eu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544d2e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544d31: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544d36: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544d39: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544d3eu); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544d3e: mov edi, edi */
  edi = edi;
L_544d40: /* 544d40: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544d43: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544d49: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_544d4f: /* 544d4f: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 544d55: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 544d58: or dword ptr [eax + 0x1c], 0x8000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x1cu), r);
  }
/* 544d5f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544d62: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544d67u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544d67: jmp 0x544d40 */
  goto L_544d40;
L_544d69: /* 544d69: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 544d6c: push 0x5ab1d4 */
  { uint32_t v = 0x5ab1d4u; esp -= 4; W32(esp, v); }
/* 544d71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544d72: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544d77u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544d77: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544d7a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544d7c: je 0x544de6 */
  if (zf) goto L_544de6;
L_544d7e: /* 544d7e: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 544d83: push 0x5ab1e8 */
  { uint32_t v = 0x5ab1e8u; esp -= 4; W32(esp, v); }
/* 544d88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544d89: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544d8eu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544d8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544d91: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544d96: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544d99: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544d9eu); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544d9e: mov edi, edi */
  edi = edi;
L_544da0: /* 544da0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544da3: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544da9: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_544daf: /* 544daf: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 544db5: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 544db8: test dword ptr [ecx + 0x1c], 0x8000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1cu))); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544dbf: jne 0x544ddc */
  if (!zf) goto L_544ddc;
L_544dc1: /* 544dc1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544dc2: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544dc7u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544dc7: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 544dcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544dce: push 0x5ab20c */
  { uint32_t v = 0x5ab20cu; esp -= 4; W32(esp, v); }
/* 544dd3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544dd4: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544dd9u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544dd9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544ddc: /* 544ddc: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544ddf: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544de4u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544de4: jmp 0x544da0 */
  goto L_544da0;
L_544de6: /* 544de6: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 544de9: push 0x5ab214 */
  { uint32_t v = 0x5ab214u; esp -= 4; W32(esp, v); }
/* 544dee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544def: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544df4u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544df4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544df7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544df9: je 0x544f9d */
  if (zf) goto L_544f9d;
L_544dff: /* 544dff: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 544e02: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544e04: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 544e07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544e08: push 0x5ab220 */
  { uint32_t v = 0x5ab220u; esp -= 4; W32(esp, v); }
/* 544e0d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544e0e: call 0x4e23a1 */
  esp -= 4; W32(esp, 0x544e13u); SPILL(); f_4e23a1(); if (g_unwind) return; RELOAD();
/* 544e13: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e16: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544e18: je 0x544a3f */
  if (zf) goto L_544a3f;
L_544e1e: /* 544e1e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 544e21: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 544e24: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544e26: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 544e29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544e2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544e2b: push 0x5ab230 */
  { uint32_t v = 0x5ab230u; esp -= 4; W32(esp, v); }
/* 544e30: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544e31: call 0x4e194c */
  esp -= 4; W32(esp, 0x544e36u); SPILL(); f_4e194c(); if (g_unwind) return; RELOAD();
/* 544e36: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e39: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544e3b: je 0x544a3f */
  if (zf) goto L_544a3f;
L_544e41: /* 544e41: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 544e44: push 0x69f4b4 */
  { uint32_t v = 0x69f4b4u; esp -= 4; W32(esp, v); }
/* 544e49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544e4a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544e4fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544e4f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 544e52: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544e57: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544e5cu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544e5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544e5d: push 0x5ab23c */
  { uint32_t v = 0x5ab23cu; esp -= 4; W32(esp, v); }
/* 544e62: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544e63: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544e68u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544e68: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e6b: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544e70: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544e73: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544e78u); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544e78: jmp 0x544e80 */
  goto L_544e80;
L_544e80: /* 544e80: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544e83: cmp esi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544e89: jge 0x544ee5 */
  if ((sf == of)) goto L_544ee5;
L_544e8b: /* 544e8b: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 544e90: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 544e93: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 544e96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544e97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544e98: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 544e9e: call 0x4e1087 */
  esp -= 4; W32(esp, 0x544ea3u); SPILL(); f_4e1087(); if (g_unwind) return; RELOAD();
/* 544ea3: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 544ea6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544ea8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 544eac: je 0x544ecd */
  if (zf) goto L_544ecd;
L_544eae: /* 544eae: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 544eb4: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 544eb7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544eb9: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544ebeu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544ebe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544ebf: push 0x5ab264 */
  { uint32_t v = 0x5ab264u; esp -= 4; W32(esp, v); }
/* 544ec4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544ec5: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544ecau); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544eca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544ecd: /* 544ecd: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544ed0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 544ed4: mov dword ptr [ebp - 0xb4], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x569110u);
/* 544ede: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544ee3u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544ee3: jmp 0x544e80 */
  goto L_544e80;
L_544ee5: /* 544ee5: push 0x69f4b8 */
  { uint32_t v = 0x69f4b8u; esp -= 4; W32(esp, v); }
/* 544eea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544eeb: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544ef0u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544ef0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 544ef3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544ef6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544ef8: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544efdu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544efd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544efe: push 0x5ab270 */
  { uint32_t v = 0x5ab270u; esp -= 4; W32(esp, v); }
/* 544f03: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f04: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f09u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f09: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 544f0c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544f10: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 544f13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544f14: call 0x4e44e4 */
  esp -= 4; W32(esp, 0x544f19u); SPILL(); f_4e44e4(); if (g_unwind) return; RELOAD();
/* 544f19: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f1c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 544f20: xor edi, edi */
  edi = 0;
L_544f22: /* 544f22: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 544f25: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544f27: jge 0x544f6c */
  if ((sf == of)) goto L_544f6c;
L_544f29: /* 544f29: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544f2b: je 0x544f34 */
  if (zf) goto L_544f34;
L_544f2d: /* 544f2d: mov esi, 0x69f4bc */
  esi = 0x69f4bcu;
/* 544f32: jmp 0x544f4c */
  goto L_544f4c;
L_544f34: /* 544f34: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 544f37: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 544f39: test dword ptr [eax + 0x1c], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544f40: mov esi, 0x5ab2c0 */
  esi = 0x5ab2c0u;
/* 544f45: jne 0x544f4c */
  if (!zf) goto L_544f4c;
L_544f47: /* 544f47: mov esi, 0x5ab2d4 */
  esi = 0x5ab2d4u;
L_544f4c: /* 544f4c: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 544f4f: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 544f52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544f54: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544f59u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544f59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544f5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544f5b: push 0x5ab2e4 */
  { uint32_t v = 0x5ab2e4u; esp -= 4; W32(esp, v); }
/* 544f60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f61: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f66u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f66: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f69: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 544f6a: jmp 0x544f22 */
  goto L_544f22;
L_544f6c: /* 544f6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544f6e: jne 0x544f7e */
  if (!zf) goto L_544f7e;
L_544f70: /* 544f70: push 0x5ab2f8 */
  { uint32_t v = 0x5ab2f8u; esp -= 4; W32(esp, v); }
/* 544f75: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f76: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f7bu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f7b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544f7e: /* 544f7e: push 0x69f4c0 */
  { uint32_t v = 0x69f4c0u; esp -= 4; W32(esp, v); }
/* 544f83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f84: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f89u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f89: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544f8c: /* 544f8c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 544f8f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 544f93: call 0x4e326a */
  esp -= 4; W32(esp, 0x544f98u); SPILL(); f_4e326a(); if (g_unwind) return; RELOAD();
/* 544f98: jmp 0x544a3f */
  goto L_544a3f;
L_544f9d: /* 544f9d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 544fa0: push 0x5ab340 */
  { uint32_t v = 0x5ab340u; esp -= 4; W32(esp, v); }
/* 544fa5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544fa6: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544fabu); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544fab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544fae: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544fb0: je 0x545017 */
  if (zf) goto L_545017;
L_544fb2: /* 544fb2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 544fb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544fb6: call 0x4e31de */
  esp -= 4; W32(esp, 0x544fbbu); SPILL(); f_4e31de(); if (g_unwind) return; RELOAD();
/* 544fbb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544fbe: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544fc3: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544fc6: xor esi, esi */
  esi = 0;
/* 544fc8: xor edi, edi */
  edi = 0;
/* 544fca: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544fcfu); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544fcf: nop  */
L_544fd0: /* 544fd0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544fd3: cmp ecx, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544fd9: jge 0x544fe6 */
  if ((sf == of)) goto L_544fe6;
L_544fdb: /* 544fdb: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544fde: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 544fdf: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544fe4u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544fe4: jmp 0x544fd0 */
  goto L_544fd0;
L_544fe6: /* 544fe6: xor edx, edx */
  edx = 0;
/* 544fe8: jmp 0x544ff0 */
  goto L_544ff0;
L_544ff0: /* 544ff0: cmp edx, 0x1000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 544ff6: jae 0x544a3f */
  if (!cf) goto L_544a3f;
L_544ffc: /* 544ffc: mov eax, dword ptr [edx*4 + 0x69b440] */
  eax = R32((uint32_t)(edx*4 + 0x69b440u));
/* 545003: xor ecx, ecx */
  ecx = 0;
L_545005: /* 545005: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545007: je 0x54500f */
  if (zf) goto L_54500f;
L_545009: /* 545009: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 54500c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 54500d: jmp 0x545005 */
  goto L_545005;
L_54500f: /* 54500f: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545011: je 0x545014 */
  if (zf) goto L_545014;
L_545013: /* 545013: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_545014: /* 545014: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 545015: jmp 0x544ff0 */
  goto L_544ff0;
L_545017: /* 545017: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 54501a: push 0x5ab34c */
  { uint32_t v = 0x5ab34cu; esp -= 4; W32(esp, v); }
/* 54501f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545020: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545025u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545025: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545028: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54502a: je 0x545043 */
  if (zf) goto L_545043;
L_54502c: /* 54502c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 54502f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545030: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545031: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 545036: call 0x53fd30 */
  esp -= 4; W32(esp, 0x54503bu); SPILL(); f_53fd30(); if (g_unwind) return; RELOAD();
/* 54503b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54503e: jmp 0x544a3f */
  goto L_544a3f;
L_545043: /* 545043: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 545046: push 0x5ab35c */
  { uint32_t v = 0x5ab35cu; esp -= 4; W32(esp, v); }
/* 54504b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54504c: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545051u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545051: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545054: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545056: je 0x545168 */
  if (zf) goto L_545168;
L_54505c: /* 54505c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 54505f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545060: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 545063: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545064: push 0x5ab378 */
  { uint32_t v = 0x5ab378u; esp -= 4; W32(esp, v); }
/* 545069: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54506a: call 0x4e3b61 */
  esp -= 4; W32(esp, 0x54506fu); SPILL(); f_4e3b61(); if (g_unwind) return; RELOAD();
/* 54506f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545072: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545074: je 0x544a3f */
  if (zf) goto L_544a3f;
L_54507a: /* 54507a: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 54507d: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 545080: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 545083: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 545087: xor esi, esi */
  esi = 0;
/* 545089: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_545090: /* 545090: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545093: jge 0x5450ef */
  if ((sf == of)) goto L_5450ef;
L_545095: /* 545095: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545096: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 54509c: push 0x5ab38c */
  { uint32_t v = 0x5ab38cu; esp -= 4; W32(esp, v); }
/* 5450a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5450a2: call 0x4e4183 */
  esp -= 4; W32(esp, 0x5450a7u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 5450a7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 5450aa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5450ad: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 5450b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5450b1: lea eax, [ebp - 0xac] */
  eax = (uint32_t)(ebp + 0xffffff54u);
/* 5450b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5450b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5450b9: call 0x4e3f67 */
  esp -= 4; W32(esp, 0x5450beu); SPILL(); f_4e3f67(); if (g_unwind) return; RELOAD();
/* 5450be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5450c1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5450c3: je 0x5450ec */
  if (zf) goto L_5450ec;
L_5450c5: /* 5450c5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5450c8: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 5450cd: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 5450d0: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5450d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5450d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5450d5: call 0x4e1cb2 */
  esp -= 4; W32(esp, 0x5450dau); SPILL(); f_4e1cb2(); if (g_unwind) return; RELOAD();
/* 5450da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5450dd: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 5450e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5450e1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5450e4: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 5450e7: call 0x4e17e9 */
  esp -= 4; W32(esp, 0x5450ecu); SPILL(); f_4e17e9(); if (g_unwind) return; RELOAD();
L_5450ec: /* 5450ec: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5450ed: jmp 0x545090 */
  goto L_545090;
L_5450ef: /* 5450ef: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5450f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5450f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5450f4: call 0x4e2cde */
  esp -= 4; W32(esp, 0x5450f9u); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 5450f9: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 5450fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5450fd: push 0x5ab3a4 */
  { uint32_t v = 0x5ab3a4u; esp -= 4; W32(esp, v); }
/* 545102: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545103: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545108u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545108: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54510b: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 545110: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545113: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x545118u); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 545118: jmp 0x545120 */
  goto L_545120;
L_545120: /* 545120: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545123: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545129: jge 0x544f8c */
  if ((sf == of)) goto L_544f8c;
L_54512f: /* 54512f: mov edi, dword ptr [0x6a0f04] */
  edi = R32((uint32_t)(0x6a0f04u));
/* 545135: mov ecx, dword ptr [edi + eax*4] */
  ecx = R32((uint32_t)(edi + eax*4));
/* 545138: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54513b: cmp dword ptr [ecx + 0x18], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54513e: jne 0x54515e */
  if (!zf) goto L_54515e;
L_545140: /* 545140: mov eax, ecx */
  eax = ecx;
/* 545142: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 545145: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545146: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545147: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545148: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545149: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 54514f: call 0x4e3bf7 */
  esp -= 4; W32(esp, 0x545154u); SPILL(); f_4e3bf7(); if (g_unwind) return; RELOAD();
/* 545154: mov dword ptr [ebp - 0xc0], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x569110u);
L_54515e: /* 54515e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545161: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x545166u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 545166: jmp 0x545120 */
  goto L_545120;
L_545168: /* 545168: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 54516b: push 0x5ab3cc */
  { uint32_t v = 0x5ab3ccu; esp -= 4; W32(esp, v); }
/* 545170: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545171: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545176u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545176: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545179: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54517b: je 0x5454fb */
  if (zf) goto L_5454fb;
L_545181: /* 545181: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 545184: push 0x5ab3d8 */
  { uint32_t v = 0x5ab3d8u; esp -= 4; W32(esp, v); }
/* 545189: mov ecx, esi */
  ecx = esi;
/* 54518b: call 0x4e35da */
  esp -= 4; W32(esp, 0x545190u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 545190: push 0x69f4c4 */
  { uint32_t v = 0x69f4c4u; esp -= 4; W32(esp, v); }
/* 545195: mov ecx, esi */
  ecx = esi;
/* 545197: call 0x4e35da */
  esp -= 4; W32(esp, 0x54519cu); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 54519c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54519f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5451a1: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 5451a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5451a5: push 0x5ab3ec */
  { uint32_t v = 0x5ab3ecu; esp -= 4; W32(esp, v); }
/* 5451aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5451ab: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 5451ae: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 5451b1: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 5451b4: call 0x4e23a1 */
  esp -= 4; W32(esp, 0x5451b9u); SPILL(); f_4e23a1(); if (g_unwind) return; RELOAD();
/* 5451b9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 5451bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5451bf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5451c0: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 5451c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5451c4: push 0x5ab3fc */
  { uint32_t v = 0x5ab3fcu; esp -= 4; W32(esp, v); }
/* 5451c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5451ca: call 0x4e3b61 */
  esp -= 4; W32(esp, 0x5451cfu); SPILL(); f_4e3b61(); if (g_unwind) return; RELOAD();
/* 5451cf: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 5451d2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5451d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5451d6: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5451d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5451da: push 0x5ab410 */
  { uint32_t v = 0x5ab410u; esp -= 4; W32(esp, v); }
/* 5451df: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5451e0: call 0x4e3b61 */
  esp -= 4; W32(esp, 0x5451e5u); SPILL(); f_4e3b61(); if (g_unwind) return; RELOAD();
/* 5451e5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5451e8: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 5451eb: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 5451ee: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 5451f1: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 5451f4: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 5451f7: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 5451fa: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 5451ff: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545202: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 545206: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 545209: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 54520c: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 54520f: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x545214u); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 545214: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 545217: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
/* 54521d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_545220: /* 545220: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545223: cmp edi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545229: jge 0x545373 */
  if ((sf == of)) goto L_545373;
L_54522f: /* 54522f: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 545232: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545234: je 0x545243 */
  if (zf) goto L_545243;
L_545236: /* 545236: mov ecx, dword ptr [esi + edi*4] */
  ecx = R32((uint32_t)(esi + edi*4));
/* 545239: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54523a: call 0x4e2b3a */
  esp -= 4; W32(esp, 0x54523fu); SPILL(); f_4e2b3a(); if (g_unwind) return; RELOAD();
/* 54523f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545241: jne 0x545283 */
  if (!zf) goto L_545283;
L_545243: /* 545243: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545245: je 0x54524f */
  if (zf) goto L_54524f;
L_545247: /* 545247: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 54524a: cmp dword ptr [eax + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54524d: je 0x545283 */
  if (zf) goto L_545283;
L_54524f: /* 54524f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 545252: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545254: je 0x545265 */
  if (zf) goto L_545265;
L_545256: /* 545256: mov ecx, dword ptr [esi + edi*4] */
  ecx = R32((uint32_t)(esi + edi*4));
/* 545259: mov edx, eax */
  edx = eax;
/* 54525b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54525c: call 0x4e33cd */
  esp -= 4; W32(esp, 0x545261u); SPILL(); f_4e33cd(); if (g_unwind) return; RELOAD();
/* 545261: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545263: jne 0x545283 */
  if (!zf) goto L_545283;
L_545265: /* 545265: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 545268: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54526a: jne 0x545366 */
  if (!zf) goto L_545366;
L_545270: /* 545270: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545272: jne 0x545366 */
  if (!zf) goto L_545366;
L_545278: /* 545278: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54527b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54527d: jne 0x545366 */
  if (!zf) goto L_545366;
L_545283: /* 545283: mov esi, dword ptr [esi + edi*4] */
  esi = R32((uint32_t)(esi + edi*4));
/* 545286: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545287: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 54528d: call 0x4e186b */
  esp -= 4; W32(esp, 0x545292u); SPILL(); f_4e186b(); if (g_unwind) return; RELOAD();
/* 545292: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 545298: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 54529c: xor esi, esi */
  esi = 0;
/* 54529e: mov edi, edi */
  edi = edi;
L_5452a0: /* 5452a0: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5452a3: jge 0x5452bb */
  if ((sf == of)) goto L_5452bb;
L_5452a5: /* 5452a5: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 5452a8: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 5452ab: mov ebx, dword ptr [ebp - 0x3c] */
  ebx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 5452ae: mov edx, esi */
  edx = esi;
/* 5452b0: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 5452b3: cmp dword ptr [edx + ebx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ebx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452b6: je 0x5452bb */
  if (zf) goto L_5452bb;
L_5452b8: /* 5452b8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5452b9: jmp 0x5452a0 */
  goto L_5452a0;
L_5452bb: /* 5452bb: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 5452be: xor ebx, ebx */
  ebx = 0;
/* 5452c0: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452c2: jne 0x5452e4 */
  if (!zf) goto L_5452e4;
L_5452c4: /* 5452c4: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 5452c7: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 5452ca: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 5452cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5452ce: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5452d1: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 5452d4: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 5452d7: mov dword ptr [ebp - 0x60], ebx */
  W32((uint32_t)(ebp + 0xffffffa0u), ebx);
/* 5452da: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
/* 5452dd: call 0x4e290a */
  esp -= 4; W32(esp, 0x5452e2u); SPILL(); f_4e290a(); if (g_unwind) return; RELOAD();
/* 5452e2: mov esi, eax */
  esi = eax;
L_5452e4: /* 5452e4: cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452e7: jne 0x5452f3 */
  if (!zf) goto L_5452f3;
L_5452e9: /* 5452e9: cmp dword ptr [ebp - 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452ec: jne 0x5452f3 */
  if (!zf) goto L_5452f3;
L_5452ee: /* 5452ee: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452f1: je 0x54531c */
  if (zf) goto L_54531c;
L_5452f3: /* 5452f3: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 5452f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5452f7: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 5452f9: call 0x4e1186 */
  esp -= 4; W32(esp, 0x5452feu); SPILL(); f_4e1186(); if (g_unwind) return; RELOAD();
/* 5452fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545301: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545303: je 0x54531c */
  if (zf) goto L_54531c;
L_545305: /* 545305: mov ebx, dword ptr [0x6a0f04] */
  ebx = R32((uint32_t)(0x6a0f04u));
/* 54530b: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 54530e: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 545311: mov edi, dword ptr [ebx + edi*4] */
  edi = R32((uint32_t)(ebx + edi*4));
/* 545314: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 545316: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 545319: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_54531c: /* 54531c: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 54531f: mov ecx, esi */
  ecx = esi;
/* 545321: lea eax, [ebp - 0xb4] */
  eax = (uint32_t)(ebp + 0xffffff4cu);
/* 545327: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 54532a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54532b: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 54532d: call 0x4e18c0 */
  esp -= 4; W32(esp, 0x545332u); SPILL(); f_4e18c0(); if (g_unwind) return; RELOAD();
/* 545332: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 545335: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 545338: mov esi, dword ptr [ebp - 0x48] */
  esi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 54533b: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 54533e: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 545341: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545343: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 545344: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 545347: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 54534a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54534c: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 54534f: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
/* 545355: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 545358: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 54535c: mov dword ptr [ebp - 0xb4], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x569110u);
L_545366: /* 545366: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545369: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x54536eu); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 54536e: jmp 0x545220 */
  goto L_545220;
L_545373: /* 545373: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 545376: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545378: je 0x5453f7 */
  if (zf) goto L_5453f7;
L_54537e: /* 54537e: push 0x536b20 */
  { uint32_t v = 0x536b20u; esp -= 4; W32(esp, v); }
/* 545383: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 545385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545386: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 545389: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54538a: call 0x4e1785 */
  esp -= 4; W32(esp, 0x54538fu); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 54538f: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 545392: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545395: push 0x5ab420 */
  { uint32_t v = 0x5ab420u; esp -= 4; W32(esp, v); }
/* 54539a: push 0x5ab434 */
  { uint32_t v = 0x5ab434u; esp -= 4; W32(esp, v); }
/* 54539f: push 0x5ab448 */
  { uint32_t v = 0x5ab448u; esp -= 4; W32(esp, v); }
/* 5453a4: push 0x5ab458 */
  { uint32_t v = 0x5ab458u; esp -= 4; W32(esp, v); }
/* 5453a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5453aa: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5453afu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5453af: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5453b2: xor edi, edi */
  edi = 0;
L_5453b4: /* 5453b4: cmp edi, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5453b7: jge 0x5453eb */
  if ((sf == of)) goto L_5453eb;
L_5453b9: /* 5453b9: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 5453bc: lea esi, [edi + edi*2] */
  esi = (uint32_t)(edi + edi*2);
/* 5453bf: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 5453c2: mov ecx, dword ptr [esi + ecx] */
  ecx = R32((uint32_t)(esi + ecx));
/* 5453c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5453c7: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x5453ccu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 5453cc: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 5453cf: mov edx, dword ptr [esi + ecx + 8] */
  edx = R32((uint32_t)(esi + ecx + 0x8u));
/* 5453d3: mov ecx, dword ptr [esi + ecx + 4] */
  ecx = R32((uint32_t)(esi + ecx + 0x4u));
/* 5453d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5453d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5453d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5453da: push 0x5ab47c */
  { uint32_t v = 0x5ab47cu; esp -= 4; W32(esp, v); }
/* 5453df: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5453e0: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5453e5u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5453e5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5453e8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 5453e9: jmp 0x5453b4 */
  goto L_5453b4;
L_5453eb: /* 5453eb: push 0x69f4c8 */
  { uint32_t v = 0x69f4c8u; esp -= 4; W32(esp, v); }
/* 5453f0: mov ecx, ebx */
  ecx = ebx;
/* 5453f2: call 0x4e35da */
  esp -= 4; W32(esp, 0x5453f7u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
L_5453f7: /* 5453f7: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 5453fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5453fc: je 0x545493 */
  if (zf) goto L_545493;
L_545402: /* 545402: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 545405: push 0x536b40 */
  { uint32_t v = 0x536b40u; esp -= 4; W32(esp, v); }
/* 54540a: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 54540c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54540d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54540e: call 0x4e1785 */
  esp -= 4; W32(esp, 0x545413u); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 545413: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 545416: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545419: push 0x5ab4a0 */
  { uint32_t v = 0x5ab4a0u; esp -= 4; W32(esp, v); }
/* 54541e: push 0x5ab4b4 */
  { uint32_t v = 0x5ab4b4u; esp -= 4; W32(esp, v); }
/* 545423: push 0x5ab4c8 */
  { uint32_t v = 0x5ab4c8u; esp -= 4; W32(esp, v); }
/* 545428: push 0x5ab4d4 */
  { uint32_t v = 0x5ab4d4u; esp -= 4; W32(esp, v); }
/* 54542d: push 0x5ab4e0 */
  { uint32_t v = 0x5ab4e0u; esp -= 4; W32(esp, v); }
/* 545432: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 545433: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545438u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545438: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54543b: xor esi, esi */
  esi = 0;
/* 54543d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_545440: /* 545440: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545443: jge 0x545485 */
  if ((sf == of)) goto L_545485;
L_545445: /* 545445: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 545448: mov eax, esi */
  eax = esi;
/* 54544a: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 54544d: mov edx, dword ptr [eax + ecx + 0xc] */
  edx = R32((uint32_t)(eax + ecx + 0xcu));
/* 545451: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 545453: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 545456: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 545459: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54545a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 54545d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 54545f: shr ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 545462: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545463: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 545466: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545467: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 54546d: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 545470: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 545473: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545474: push 0x5ab514 */
  { uint32_t v = 0x5ab514u; esp -= 4; W32(esp, v); }
/* 545479: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54547a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54547fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54547f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545482: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 545483: jmp 0x545440 */
  goto L_545440;
L_545485: /* 545485: push 0x69f4cc */
  { uint32_t v = 0x69f4ccu; esp -= 4; W32(esp, v); }
/* 54548a: mov ecx, edi */
  ecx = edi;
/* 54548c: call 0x4e35da */
  esp -= 4; W32(esp, 0x545491u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 545491: jmp 0x545496 */
  goto L_545496;
L_545493: /* 545493: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_545496: /* 545496: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 545499: fild dword ptr [ebp - 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 54549c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54549e: jge 0x5454a6 */
  if ((sf == of)) goto L_5454a6;
L_5454a0: /* 5454a0: fadd dword ptr [0x56ec14] */
  ST0 = ST0 + (F32((uint32_t)(0x56ec14u)));
L_5454a6: /* 5454a6: fmul qword ptr [0x56ec08] */
  ST0 = ST0 * (F64((uint32_t)(0x56ec08u)));
/* 5454ac: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 5454af: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5454b2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5454b4: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 5454b8: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 5454bb: jge 0x5454c3 */
  if ((sf == of)) goto L_5454c3;
L_5454bd: /* 5454bd: fadd dword ptr [0x56ec14] */
  ST0 = ST0 + (F32((uint32_t)(0x56ec14u)));
L_5454c3: /* 5454c3: fmul qword ptr [0x56ec08] */
  ST0 = ST0 * (F64((uint32_t)(0x56ec08u)));
/* 5454c9: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 5454cc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 5454cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5454d0: push 0x5ab548 */
  { uint32_t v = 0x5ab548u; esp -= 4; W32(esp, v); }
/* 5454d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5454d6: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5454dbu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5454db: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5454de: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5454e1: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 5454e5: call 0x4e1b45 */
  esp -= 4; W32(esp, 0x5454eau); SPILL(); f_4e1b45(); if (g_unwind) return; RELOAD();
/* 5454ea: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5454ed: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5454f1: call 0x4e37b5 */
  esp -= 4; W32(esp, 0x5454f6u); SPILL(); f_4e37b5(); if (g_unwind) return; RELOAD();
/* 5454f6: jmp 0x544a3f */
  goto L_544a3f;
L_5454fb: /* 5454fb: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 5454fe: push 0x5ab580 */
  { uint32_t v = 0x5ab580u; esp -= 4; W32(esp, v); }
/* 545503: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545504: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545509u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545509: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54550c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54550e: je 0x5455a8 */
  if (zf) goto L_5455a8;
L_545514: /* 545514: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 545517: push 0x5ab590 */
  { uint32_t v = 0x5ab590u; esp -= 4; W32(esp, v); }
/* 54551c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54551d: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545522u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545522: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545525: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545528: call 0x4e2874 */
  esp -= 4; W32(esp, 0x54552du); SPILL(); f_4e2874(); if (g_unwind) return; RELOAD();
/* 54552d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_545530: /* 545530: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545533: cmp edi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545539: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_54553f: /* 54553f: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 545545: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 545548: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 54554b: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 545551: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 545554: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545557: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545558: push 0x5ab5b0 */
  { uint32_t v = 0x5ab5b0u; esp -= 4; W32(esp, v); }
/* 54555d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54555e: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545563u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545563: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545566: xor esi, esi */
  esi = 0;
L_545568: /* 545568: cmp esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54556e: jge 0x54559e */
  if ((sf == of)) goto L_54559e;
L_545570: /* 545570: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 545575: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 545578: mov eax, dword ptr [eax + esi*4 + 0x98] */
  eax = R32((uint32_t)(eax + esi*4 + 0x98u));
/* 54557f: xor ecx, ecx */
  ecx = 0;
L_545581: /* 545581: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545583: je 0x54558b */
  if (zf) goto L_54558b;
L_545585: /* 545585: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 545588: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 545589: jmp 0x545581 */
  goto L_545581;
L_54558b: /* 54558b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54558c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54558d: push 0x5ab5b8 */
  { uint32_t v = 0x5ab5b8u; esp -= 4; W32(esp, v); }
/* 545592: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545593: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545598u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545598: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54559b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 54559c: jmp 0x545568 */
  goto L_545568;
L_54559e: /* 54559e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 5455a1: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x5455a6u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 5455a6: jmp 0x545530 */
  goto L_545530;
L_5455a8: /* 5455a8: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 5455ab: push 0x5ab5cc */
  { uint32_t v = 0x5ab5ccu; esp -= 4; W32(esp, v); }
/* 5455b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5455b1: call 0x4e32ec */
  esp -= 4; W32(esp, 0x5455b6u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 5455b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5455b9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5455bb: je 0x5456d9 */
  if (zf) goto L_5456d9;
L_5455c1: /* 5455c1: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 5455c4: push 0x5ab5dc */
  { uint32_t v = 0x5ab5dcu; esp -= 4; W32(esp, v); }
/* 5455c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5455ca: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5455cfu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5455cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5455d2: xor eax, eax */
  eax = 0;
/* 5455d4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5455d7: jmp 0x5455e0 */
  goto L_5455e0;
L_5455e0: /* 5455e0: cmp eax, dword ptr [0x69ff64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x69ff64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5455e6: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_5455ec: /* 5455ec: mov ecx, dword ptr [0x69ff60] */
  ecx = R32((uint32_t)(0x69ff60u));
/* 5455f2: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 5455f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5455f6: call 0x4e2e50 */
  esp -= 4; W32(esp, 0x5455fbu); SPILL(); f_4e2e50(); if (g_unwind) return; RELOAD();
/* 5455fb: xor ebx, ebx */
  ebx = 0;
/* 5455fd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545600: mov esi, eax */
  esi = eax;
/* 545602: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 545605: xor edi, edi */
  edi = 0;
L_545607: /* 545607: cmp edi, dword ptr [esi + 0x70] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54560a: jge 0x545635 */
  if ((sf == of)) goto L_545635;
L_54560c: /* 54560c: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 54560f: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 545612: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545614: je 0x545632 */
  if (zf) goto L_545632;
L_545616: /* 545616: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 54561c: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 54561f: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545622: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545623: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x545628u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 545628: lea ebx, [ebx + eax*2 + 0xe] */
  ebx = (uint32_t)(ebx + eax*2 + 0xeu);
/* 54562c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54562f: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_545632: /* 545632: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 545633: jmp 0x545607 */
  goto L_545607;
L_545635: /* 545635: mov eax, dword ptr [esi + 0x500] */
  eax = R32((uint32_t)(esi + 0x500u));
/* 54563b: mov ecx, dword ptr [esi + 0x64] */
  ecx = R32((uint32_t)(esi + 0x64u));
/* 54563e: mov edx, dword ptr [esi + 0x70] */
  edx = R32((uint32_t)(esi + 0x70u));
/* 545641: mov edi, dword ptr [esi + 0x88] */
  edi = R32((uint32_t)(esi + 0x88u));
/* 545647: mov ebx, dword ptr [esi + 0x7c] */
  ebx = R32((uint32_t)(esi + 0x7cu));
/* 54564a: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 54564d: mov eax, dword ptr [esi + 0x98] */
  eax = R32((uint32_t)(esi + 0x98u));
/* 545653: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545655: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 545658: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 54565b: je 0x545668 */
  if (zf) goto L_545668;
L_54565d: /* 54565d: mov eax, dword ptr [esi + 0x94] */
  eax = R32((uint32_t)(esi + 0x94u));
/* 545663: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 545666: jmp 0x54566f */
  goto L_54566f;
L_545668: /* 545668: mov dword ptr [ebp - 0x24], 0x5ed66c */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x5ed66cu);
L_54566f: /* 54566f: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 545672: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 545674: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x545679u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 545679: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 54567c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54567d: mov ecx, eax */
  ecx = eax;
/* 54567f: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 545682: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545683: mov eax, ebx */
  eax = ebx;
/* 545685: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 545688: lea edx, [edi + edi*8] */
  edx = (uint32_t)(edi + edi*8);
/* 54568b: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 54568e: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 545691: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545692: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 545693: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 545696: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545697: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54569a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 54569b: and edx, 0x3ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5456a1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5456a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5456a4: sar eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5456a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456a8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5456ab: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 5456b2: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 5456b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5456b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456b7: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 5456ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5456bb: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5456be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456bf: push 0x5ab5f0 */
  { uint32_t v = 0x5ab5f0u; esp -= 4; W32(esp, v); }
/* 5456c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5456c5: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5456cau); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5456ca: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5456cd: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5456d0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5456d1: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5456d4: jmp 0x5455e0 */
  goto L_5455e0;
L_5456d9: /* 5456d9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5456dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5456dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5456de: xor eax, eax */
  eax = 0;
/* 5456e0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5456e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5456e8: mov esp, ebp */
  esp = ebp;
/* 5456ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5456eb: ret  */
  esp += 4; SPILL(); return;
L_5456ec: /* 5456ec: push 0x5ab68c */
  { uint32_t v = 0x5ab68cu; esp -= 4; W32(esp, v); }
/* 5456f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5456f2: call 0x4e32ec */
  esp -= 4; W32(esp, 0x5456f7u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 5456f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5456fa: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5456fc: je 0x5456d9 */
  if (zf) goto L_5456d9;
L_5456fe: /* 5456fe: mov eax, dword ptr [0x5b210c] */
  eax = R32((uint32_t)(0x5b210cu));
/* 545703: mov ecx, dword ptr [0x5b2108] */
  ecx = R32((uint32_t)(0x5b2108u));
/* 545709: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 54570f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545710: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545711: push 0x5ab698 */
  { uint32_t v = 0x5ab698u; esp -= 4; W32(esp, v); }
/* 545716: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545717: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54571cu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54571c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54571f: jmp 0x544a3f */
  goto L_544a3f;
}
