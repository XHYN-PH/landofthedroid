#include "recomp.h"
#include "rec_mod.h"

void f_8cb2f4(void) {
  LOAD_REGS();
L_8cb2f4: /* 8cb2f4: mov eax, dword ptr [ebp - 0xa4] */
  eax = R32((uint32_t)(ebp + 0xffffff5cu));
/* 8cb2fa: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8cb2ff: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 8cb305: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cb306: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 8cb30c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cb311u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8cb311(); return;
}

void f_8cb311(void) {
  LOAD_REGS();
L_8cb311: /* 8cb311: push 0xa1c2d4 */
  { uint32_t v = 0xa1c2d4u; esp -= 4; W32(esp, v); }
/* 8cb316: push 0xaecb98 */
  { uint32_t v = 0xaecb98u; esp -= 4; W32(esp, v); }
/* 8cb31b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8cb321u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8cb321: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cb324: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cb326: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cb328: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cb32du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8cb32d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cb330: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cb331: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cb332: mov eax, 1 */
  eax = 0x1u;
/* 8cb337: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cb33e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cb33f: mov esp, ebp */
  esp = ebp;
/* 8cb341: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cb342: ret 0x30 */
  esp += 52; SPILL(); return;
}

void f_8cb550(void) {
  LOAD_REGS();
L_8cb550: /* 8cb550: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8cb551: mov ebp, esp */
  ebp = esp;
/* 8cb553: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8cb555: push 0x9d7c70 */
  { uint32_t v = 0x9d7c70u; esp -= 4; W32(esp, v); }
/* 8cb55a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8cb560: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cb561: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8cb568: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cb56b: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8cb56e: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8cb571: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 8cb574: fadd dword ptr [ebp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x20u)));
/* 8cb577: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8cb57a: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cb57d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8cb580: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8cb583: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cb584: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8cb587: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8cb58a: mov edx, eax */
  edx = eax;
/* 8cb58c: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8cb58f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cb590: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 8cb593: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8cb596: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8cb599: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 8cb59c: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 8cb59f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cb5a0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8cb5a3: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 8cb5a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cb5a7: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8cb5aa: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 8cb5ad: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8cb5b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cb5b2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cb5b5: mov edx, esp */
  edx = esp;
/* 8cb5b7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8cb5b9: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cb5bc: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8cb5bf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cb5c2: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8cb5c9: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cb5cc: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8cb5cf: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8cb5d2: mov edx, esp */
  edx = esp;
/* 8cb5d4: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8cb5d6: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8cb5d9: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8cb5dc: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8cb5df: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8cb5e2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8cb5e5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cb5e8: mov edx, esp */
  edx = esp;
/* 8cb5ea: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8cb5ec: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8cb5ef: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8cb5f2: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8cb5f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cb5f6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8cb5fd: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8cb600: call 0x6c23d3 */
  esp -= 4; W32(esp, 0x8cb605u); SPILL(); f_6c23d3(); if (g_unwind) return; RELOAD();
/* 8cb605: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cb607: jne 0x8cb625 */
  if (!zf) goto L_8cb625;
L_8cb609: /* 8cb609: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 8cb60c: fadd dword ptr [esi + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x10u)));
/* 8cb60f: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 8cb612: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cb615: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cb61c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cb61d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cb61e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cb61f: mov esp, ebp */
  esp = ebp;
/* 8cb621: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cb622: ret 0x20 */
  esp += 36; SPILL(); return;
L_8cb625: /* 8cb625: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cb628: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cb629: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cb62a: mov eax, 1 */
  eax = 0x1u;
/* 8cb62f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cb636: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cb637: mov esp, ebp */
  esp = ebp;
/* 8cb639: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cb63a: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_8cb63d(void) {
  LOAD_REGS();
L_8cb63d: /* 8cb63d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cb640: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8cb645: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8cb648: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cb649: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8cb64c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cb651u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8cb651(); return;
}

void f_8cb651(void) {
  LOAD_REGS();
L_8cb651: /* 8cb651: push 0xa1c310 */
  { uint32_t v = 0xa1c310u; esp -= 4; W32(esp, v); }
/* 8cb656: push 0xaecba0 */
  { uint32_t v = 0xaecba0u; esp -= 4; W32(esp, v); }
/* 8cb65b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8cb661u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8cb661: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cb664: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cb666: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cb668: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cb66du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8cb66d: guest_badaddr(0x8cb66d); return;
}

void f_8cb6c0(void) {
  LOAD_REGS();
L_8cb6c0: /* 8cb6c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cb6c1: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 8cb6c5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8cb6c6: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 8cb6ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cb6cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cb6cc: mov edi, ecx */
  edi = ecx;
/* 8cb6ce: mov esi, dword ptr [edi + 0x1310] */
  esi = R32((uint32_t)(edi + 0x1310u));
/* 8cb6d4: xor eax, eax */
  eax = 0;
/* 8cb6d6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8cb6d8: jle 0x8cb6f7 */
  if ((zf || sf != of)) goto L_8cb6f7;
L_8cb6da: /* 8cb6da: mov edx, dword ptr [edi + 0x130c] */
  edx = R32((uint32_t)(edi + 0x130cu));
/* 8cb6e0: lea ecx, [edi + 0x130c] */
  ecx = (uint32_t)(edi + 0x130cu);
L_8cb6e6: /* 8cb6e6: cmp dword ptr [edx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8cb6e8: jne 0x8cb6ef */
  if (!zf) goto L_8cb6ef;
L_8cb6ea: /* 8cb6ea: cmp dword ptr [edx + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8cb6ed: je 0x8cb733 */
  if (zf) goto L_8cb733;
L_8cb6ef: /* 8cb6ef: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cb6f0: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cb6f3: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cb6f5: jl 0x8cb6e6 */
  if ((sf != of)) goto L_8cb6e6;
L_8cb6f7: /* 8cb6f7: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8cb6f9: lea esi, [edi + 0x130c] */
  esi = (uint32_t)(edi + 0x130cu);
/* 8cb6ff: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cb701: mov ecx, esi */
  ecx = esi;
/* 8cb703: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cb709u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cb709: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8cb70b: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8cb70e: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8cb711: mov dword ptr [eax + ecx], ebp */
  W32((uint32_t)(eax + ecx), ebp);
/* 8cb714: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8cb716: mov dword ptr [eax + edx + 4], ebx */
  W32((uint32_t)(eax + edx + 0x4u), ebx);
/* 8cb71a: mov ecx, dword ptr [0xb18ffc] */
  ecx = R32((uint32_t)(0xb18ffcu));
/* 8cb720: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cb722: je 0x8cb744 */
  if (zf) goto L_8cb744;
L_8cb724: /* 8cb724: mov ecx, dword ptr [0xb19048] */
  ecx = R32((uint32_t)(0xb19048u));
/* 8cb72a: mov edx, dword ptr [ecx + 0x5c] */
  edx = R32((uint32_t)(ecx + 0x5cu));
/* 8cb72d: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 8cb731: jmp 0x8cb74e */
  goto L_8cb74e;
L_8cb733: /* 8cb733: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cb735: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cb736: call 0x6c55e2 */
  esp -= 4; W32(esp, 0x8cb73bu); SPILL(); f_6c55e2(); if (g_unwind) return; RELOAD();
/* 8cb73b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cb73c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cb73d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cb73e: xor eax, eax */
  eax = 0;
/* 8cb740: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cb741: ret 8 */
  esp += 12; SPILL(); return;
L_8cb744: /* 8cb744: mov ecx, dword ptr [0xb1907c] */
  ecx = R32((uint32_t)(0xb1907cu));
/* 8cb74a: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
L_8cb74e: /* 8cb74e: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8cb752: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8cb754: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 8cb75a: fstp dword ptr [eax + edx + 0xc] */
  WF32((uint32_t)(eax + edx + 0xcu), ST0); FPOP();
/* 8cb75e: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 8cb764: mov dl, byte ptr [ecx + 0x38] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x38u))) & 0xffu);
/* 8cb767: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8cb769: je 0x8cb78b */
  if (zf) goto L_8cb78b;
L_8cb76b: /* 8cb76b: cmp dl, 0xa */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8cb76e: je 0x8cb774 */
  if (zf) goto L_8cb774;
L_8cb770: /* 8cb770: xor ecx, ecx */
  ecx = 0;
/* 8cb772: jmp 0x8cb7a2 */
  goto L_8cb7a2;
L_8cb774: /* 8cb774: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 8cb777: mov ecx, dword ptr [ecx + 0xac] */
  ecx = R32((uint32_t)(ecx + 0xacu));
/* 8cb77d: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 8cb780: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* 8cb783: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cb785: mov cx, word ptr [ecx + edx*2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + edx*2))) & 0xffffu);
/* 8cb789: jmp 0x8cb7a2 */
  goto L_8cb7a2;
L_8cb78b: /* 8cb78b: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 8cb78e: mov ecx, dword ptr [ecx + 0xac] */
  ecx = R32((uint32_t)(ecx + 0xacu));
/* 8cb794: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 8cb797: add edx, dword ptr [ecx + 0x1c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1cu)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cb79a: movzx cx, byte ptr [edx + ebp] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(edx + ebp)))) & 0xffffu);
/* 8cb79f: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
L_8cb7a2: /* 8cb7a2: movzx edx, cx */
  edx = (uint32_t)((ecx & 0xffffu));
/* 8cb7a5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8cb7a7: mov dword ptr [eax + ecx + 8], edx */
  W32((uint32_t)(eax + ecx + 0x8u), edx);
/* 8cb7ab: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8cb7ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cb7ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cb7af: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cb7b0: mov dword ptr [eax + edx + 0x10], 0 */
  W32((uint32_t)(eax + edx + 0x10u), 0x0u);
/* 8cb7b8: mov eax, 1 */
  eax = 0x1u;
/* 8cb7bd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cb7be: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8cb820(void) {
  LOAD_REGS();
L_8cb820: /* 8cb820: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8cb821: mov ebp, esp */
  ebp = esp;
/* 8cb823: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8cb825: push 0x9d7c80 */
  { uint32_t v = 0x9d7c80u; esp -= 4; W32(esp, v); }
/* 8cb82a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8cb830: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cb831: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8cb838: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cb83b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cb83c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cb83d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cb83e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8cb841: mov esi, ecx */
  esi = ecx;
/* 8cb843: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8cb846: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cb847: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8cb84a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cb84b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cb84d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 8cb850: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cb851: mov ecx, esi */
  ecx = esi;
/* 8cb853: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8cb85a: call 0x6c6c3a */
  esp -= 4; W32(esp, 0x8cb85fu); SPILL(); f_6c6c3a(); if (g_unwind) return; RELOAD();
/* 8cb85f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cb861: je 0x8cb924 */
  if (zf) goto L_8cb924;
L_8cb867: /* 8cb867: mov eax, dword ptr [0xb19008] */
  eax = R32((uint32_t)(0xb19008u));
/* 8cb86c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cb86e: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cb871: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cb874: je 0x8cb891 */
  if (zf) goto L_8cb891;
L_8cb876: /* 8cb876: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cb877: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cb878: mov ecx, esi */
  ecx = esi;
/* 8cb87a: call 0x6cae8e */
  esp -= 4; W32(esp, 0x8cb87fu); SPILL(); f_6cae8e(); if (g_unwind) return; RELOAD();
/* 8cb87f: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 8cb882: mov dword ptr [0xb19018], eax */
  W32((uint32_t)(0xb19018u), eax);
/* 8cb887: mov dword ptr [0xb19008], 0 */
  W32((uint32_t)(0xb19008u), 0x0u);
L_8cb891: /* 8cb891: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cb892: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cb893: mov ecx, esi */
  ecx = esi;
/* 8cb895: call 0x6c9020 */
  esp -= 4; W32(esp, 0x8cb89au); SPILL(); f_6c9020(); if (g_unwind) return; RELOAD();
/* 8cb89a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cb89c: je 0x8cb924 */
  if (zf) goto L_8cb924;
L_8cb8a2: /* 8cb8a2: mov eax, dword ptr [0xb18ffc] */
  eax = R32((uint32_t)(0xb18ffcu));
/* 8cb8a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cb8a9: je 0x8cb8b6 */
  if (zf) goto L_8cb8b6;
L_8cb8ab: /* 8cb8ab: mov ecx, dword ptr [0xb19048] */
  ecx = R32((uint32_t)(0xb19048u));
/* 8cb8b1: mov eax, dword ptr [ecx + 0x64] */
  eax = R32((uint32_t)(ecx + 0x64u));
/* 8cb8b4: jmp 0x8cb8bb */
  goto L_8cb8bb;
L_8cb8b6: /* 8cb8b6: mov eax, dword ptr [0xb19084] */
  eax = R32((uint32_t)(0xb19084u));
L_8cb8bb: /* 8cb8bb: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8cb8bc: je 0x8cb939 */
  if (zf) goto L_8cb939;
L_8cb8be: /* 8cb8be: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8cb8bf: je 0x8cb90c */
  if (zf) goto L_8cb90c;
L_8cb8c1: /* 8cb8c1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8cb8c2: jne 0x8cb951 */
  if (!zf) goto L_8cb951;
L_8cb8c8: /* 8cb8c8: mov edx, dword ptr [esi + 0x340] */
  edx = R32((uint32_t)(esi + 0x340u));
/* 8cb8ce: mov eax, dword ptr [edx + 0x40] */
  eax = R32((uint32_t)(edx + 0x40u));
/* 8cb8d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cb8d2: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8cb8d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cb8d5: mov ecx, esi */
  ecx = esi;
/* 8cb8d7: call 0x6c9020 */
  esp -= 4; W32(esp, 0x8cb8dcu); SPILL(); f_6c9020(); if (g_unwind) return; RELOAD();
/* 8cb8dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cb8de: je 0x8cb924 */
  if (zf) goto L_8cb924;
L_8cb8e0: /* 8cb8e0: mov ecx, dword ptr [esi + 0x340] */
  ecx = R32((uint32_t)(esi + 0x340u));
/* 8cb8e6: mov edx, dword ptr [ecx + 0x44] */
  edx = R32((uint32_t)(ecx + 0x44u));
/* 8cb8e9: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8cb8eb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cb8ec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cb8ed: mov ecx, esi */
  ecx = esi;
/* 8cb8ef: call 0x6c9020 */
  esp -= 4; W32(esp, 0x8cb8f4u); SPILL(); f_6c9020(); if (g_unwind) return; RELOAD();
/* 8cb8f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cb8f6: je 0x8cb924 */
  if (zf) goto L_8cb924;
L_8cb8f8: /* 8cb8f8: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* 8cb8fe: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* 8cb901: mov edx, dword ptr [eax + 0x40] */
  edx = R32((uint32_t)(eax + 0x40u));
/* 8cb904: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8cb906: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cb907: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8cb909: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cb90a: jmp 0x8cb919 */
  goto L_8cb919;
L_8cb90c: /* 8cb90c: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* 8cb912: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* 8cb915: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8cb917: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cb918: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
L_8cb919: /* 8cb919: mov ecx, esi */
  ecx = esi;
/* 8cb91b: call 0x6c9020 */
  esp -= 4; W32(esp, 0x8cb920u); SPILL(); f_6c9020(); if (g_unwind) return; RELOAD();
/* 8cb920: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cb922: jne 0x8cb951 */
  if (!zf) goto L_8cb951;
L_8cb924: /* 8cb924: xor eax, eax */
  eax = 0;
/* 8cb926: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cb929: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cb930: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cb931: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cb932: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cb933: mov esp, ebp */
  esp = ebp;
/* 8cb935: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cb936: ret 0xc */
  esp += 16; SPILL(); return;
L_8cb939: /* 8cb939: mov edx, dword ptr [esi + 0x340] */
  edx = R32((uint32_t)(esi + 0x340u));
/* 8cb93f: mov eax, dword ptr [edx + 0x40] */
  eax = R32((uint32_t)(edx + 0x40u));
/* 8cb942: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cb943: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8cb945: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cb946: mov ecx, esi */
  ecx = esi;
/* 8cb948: call 0x6c9020 */
  esp -= 4; W32(esp, 0x8cb94du); SPILL(); f_6c9020(); if (g_unwind) return; RELOAD();
/* 8cb94d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cb94f: je 0x8cb924 */
  if (zf) goto L_8cb924;
L_8cb951: /* 8cb951: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cb954: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cb955: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cb956: mov eax, 1 */
  eax = 0x1u;
/* 8cb95b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cb962: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cb963: mov esp, ebp */
  esp = ebp;
/* 8cb965: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cb966: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8cb969(void) {
  LOAD_REGS();
L_8cb969: /* 8cb969: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cb96c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8cb971: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 8cb974: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cb975: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8cb978: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cb97du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8cb97d(); return;
}

void f_8cb97d(void) {
  LOAD_REGS();
L_8cb97d: /* 8cb97d: push 0xa1c34c */
  { uint32_t v = 0xa1c34cu; esp -= 4; W32(esp, v); }
/* 8cb982: push 0xaecba8 */
  { uint32_t v = 0xaecba8u; esp -= 4; W32(esp, v); }
/* 8cb987: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8cb98du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8cb98d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cb990: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cb992: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cb994: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cb999u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8cb999: guest_badaddr(0x8cb999); return;
}

void f_8cba00(void) {
  LOAD_REGS();
L_8cba00: /* 8cba00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8cba01: mov ebp, esp */
  ebp = esp;
/* 8cba03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8cba05: push 0x9d7c98 */
  { uint32_t v = 0x9d7c98u; esp -= 4; W32(esp, v); }
/* 8cba0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8cba10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cba11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8cba18: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cba1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cba1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cba1d: mov esi, ecx */
  esi = ecx;
/* 8cba1f: mov ecx, dword ptr [esi + 0x340] */
  ecx = R32((uint32_t)(esi + 0x340u));
/* 8cba25: mov al, byte ptr [ecx + 0x38] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x38u))) & 0xffu);
/* 8cba28: xor ebx, ebx */
  ebx = 0;
/* 8cba2a: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8cba2c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cba2d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8cba30: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8cba33: jne 0x8cbae1 */
  if (!zf) goto L_8cbae1;
L_8cba39: /* 8cba39: mov eax, dword ptr [ecx + 0x44] */
  eax = R32((uint32_t)(ecx + 0x44u));
/* 8cba3c: imul eax, dword ptr [ecx + 0x40] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ecx + 0x40u)));
  eax = (uint32_t)r;
  }
/* 8cba40: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cba42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cba43: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cba46: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x8cba4cu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 8cba4c: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* 8cba52: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* 8cba55: imul ecx, dword ptr [eax + 0x40] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(eax + 0x40u)));
  ecx = (uint32_t)r;
  }
/* 8cba59: mov edx, dword ptr [eax + 0xac] */
  edx = R32((uint32_t)(eax + 0xacu));
/* 8cba5f: mov eax, dword ptr [edx + 0x1c] */
  eax = R32((uint32_t)(edx + 0x1cu));
/* 8cba62: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cba63: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8cba66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cba67: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cba68: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8cba6c: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8cba71u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8cba71: mov edx, dword ptr [esi + 0x340] */
  edx = R32((uint32_t)(esi + 0x340u));
/* 8cba77: mov dword ptr [edx + 0x50], ebx */
  W32((uint32_t)(edx + 0x50u), ebx);
/* 8cba7a: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* 8cba80: mov byte ptr [eax + 0x38], 0xa */
  W8((uint32_t)(eax + 0x38u), 0xau);
/* 8cba84: mov ecx, dword ptr [esi + 0x340] */
  ecx = R32((uint32_t)(esi + 0x340u));
/* 8cba8a: mov eax, dword ptr [ecx + 0x44] */
  eax = R32((uint32_t)(ecx + 0x44u));
/* 8cba8d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8cba8f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cba92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cba93: mov eax, dword ptr [ecx + 0x40] */
  eax = R32((uint32_t)(ecx + 0x40u));
/* 8cba96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cba97: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x8cba9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cba9d: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* 8cbaa3: or dword ptr [eax + 0x7c], 0x80 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x7cu))); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x7cu), r);
  }
/* 8cbaaa: xor eax, eax */
  eax = 0;
/* 8cbaac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8cbab0: /* 8cbab0: cmp eax, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cbab3: jge 0x8cbad6 */
  if ((sf == of)) goto L_8cbad6;
L_8cbab5: /* 8cbab5: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8cbab8: movzx dx, byte ptr [eax + ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax + ecx)))) & 0xffffu);
/* 8cbabd: mov ecx, dword ptr [esi + 0x340] */
  ecx = R32((uint32_t)(esi + 0x340u));
/* 8cbac3: mov ecx, dword ptr [ecx + 0xac] */
  ecx = R32((uint32_t)(ecx + 0xacu));
/* 8cbac9: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* 8cbacc: shl edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8cbacf: mov word ptr [ecx + eax*2], dx */
  W16((uint32_t)(ecx + eax*2), (edx & 0xffffu));
/* 8cbad3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cbad4: jmp 0x8cbab0 */
  goto L_8cbab0;
L_8cbad6: /* 8cbad6: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cbad9: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8cbadc: call 0x6c3e13 */
  esp -= 4; W32(esp, 0x8cbae1u); SPILL(); f_6c3e13(); if (g_unwind) return; RELOAD();
L_8cbae1: /* 8cbae1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cbae4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cbae5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cbae6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cbaed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cbaee: mov esp, ebp */
  esp = ebp;
/* 8cbaf0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cbaf1: ret  */
  esp += 4; SPILL(); return;
}

void f_8cbaf2(void) {
  LOAD_REGS();
L_8cbaf2: /* 8cbaf2: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cbaf5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8cbafa: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8cbafd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cbafe: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8cbb01: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cbb06u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8cbb06(); return;
}

void f_8cbb06(void) {
  LOAD_REGS();
L_8cbb06: /* 8cbb06: push 0xa1c390 */
  { uint32_t v = 0xa1c390u; esp -= 4; W32(esp, v); }
/* 8cbb0b: push 0xaecbb0 */
  { uint32_t v = 0xaecbb0u; esp -= 4; W32(esp, v); }
/* 8cbb10: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8cbb16u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8cbb16: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cbb19: xor ebx, ebx */
  ebx = 0;
/* 8cbb1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cbb1c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cbb1d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cbb22u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8cbb22: guest_badaddr(0x8cbb22); return;
}

void f_8cbb80(void) {
  LOAD_REGS();
L_8cbb80: /* 8cbb80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8cbb81: mov ebp, esp */
  ebp = esp;
/* 8cbb83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8cbb85: push 0x9d7cb0 */
  { uint32_t v = 0x9d7cb0u; esp -= 4; W32(esp, v); }
/* 8cbb8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8cbb90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cbb91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8cbb98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cbb9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cbb9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cbb9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cbb9e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8cbba1: mov edi, ecx */
  edi = ecx;
/* 8cbba3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8cbbaa: xor esi, esi */
  esi = 0;
/* 8cbbac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8cbbb0: /* 8cbbb0: cmp esi, dword ptr [edi + 0x1310] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cbbb6: jge 0x8cbc14 */
  if ((sf == of)) goto L_8cbc14;
L_8cbbb8: /* 8cbbb8: mov edx, dword ptr [edi + 0x130c] */
  edx = R32((uint32_t)(edi + 0x130cu));
/* 8cbbbe: lea ecx, [edi + 0x130c] */
  ecx = (uint32_t)(edi + 0x130cu);
/* 8cbbc4: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 8cbbc7: fld dword ptr [edx + eax*4 + 0xc] */
  { double v = F32((uint32_t)(edx + eax*4 + 0xcu)); FPUSH(v); }
/* 8cbbcb: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 8cbbd1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8cbbd3: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8cbbd6: jnp 0x8cbbe1 */
  if (!pf) goto L_8cbbe1;
L_8cbbd8: /* 8cbbd8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cbbda: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cbbdb: call 0x6c55e2 */
  esp -= 4; W32(esp, 0x8cbbe0u); SPILL(); f_6c55e2(); if (g_unwind) return; RELOAD();
/* 8cbbe0: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_8cbbe1: /* 8cbbe1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8cbbe2: jmp 0x8cbbb0 */
  goto L_8cbbb0;
L_8cbc14: /* 8cbc14: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cbc17: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cbc18: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cbc19: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cbc20: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cbc21: mov esp, ebp */
  esp = ebp;
/* 8cbc23: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cbc24: ret  */
  esp += 4; SPILL(); return;
}

void f_8cbbe4(void) {
  LOAD_REGS();
L_8cbbe4: /* 8cbbe4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cbbe7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8cbbec: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8cbbef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cbbf0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cbbf3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cbbf8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8cbbf8(); return;
}

void f_8cbbf8(void) {
  LOAD_REGS();
L_8cbbf8: /* 8cbbf8: push 0xa1c3e8 */
  { uint32_t v = 0xa1c3e8u; esp -= 4; W32(esp, v); }
/* 8cbbfd: push 0xaecbc0 */
  { uint32_t v = 0xaecbc0u; esp -= 4; W32(esp, v); }
/* 8cbc02: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8cbc08u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8cbc08: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cbc0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cbc0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cbc0f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cbc14u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8cbc14: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cbc17: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cbc18: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cbc19: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cbc20: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cbc21: mov esp, ebp */
  esp = ebp;
/* 8cbc23: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cbc24: ret  */
  esp += 4; SPILL(); return;
}

void f_8cbc60(void) {
  LOAD_REGS();
L_8cbc60: /* 8cbc60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8cbc61: mov ebp, esp */
  ebp = esp;
/* 8cbc63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8cbc65: push 0x9d7cc0 */
  { uint32_t v = 0x9d7cc0u; esp -= 4; W32(esp, v); }
/* 8cbc6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8cbc70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cbc71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8cbc78: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cbc7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cbc7c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8cbc7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cbc80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cbc81: mov esi, ecx */
  esi = ecx;
/* 8cbc83: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8cbc86: lea edi, [esi + 0x12dc] */
  edi = (uint32_t)(esi + 0x12dcu);
/* 8cbc8c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cbc8d: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 8cbc90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cbc91: mov ecx, ebx */
  ecx = ebx;
/* 8cbc93: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 8cbc96: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8cbc9d: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x8cbca3u); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8cbca3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8cbca5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8cbca8: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8cbcab: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 8cbcae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cbcaf: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 8cbcb2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cbcb3: lea ecx, [ebx + 0xc] */
  ecx = (uint32_t)(ebx + 0xcu);
/* 8cbcb6: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8cbcb9: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8cbcbc: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x8cbcc2u); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8cbcc2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8cbcc4: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8cbcc7: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 8cbcca: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8cbccd: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8cbcd0: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8cbcd3: lea ecx, [esi + 0x130c] */
  ecx = (uint32_t)(esi + 0x130cu);
/* 8cbcd9: xor eax, eax */
  eax = 0;
/* 8cbcdb: jmp 0x8cbce0 */
  goto L_8cbce0;
L_8cbce0: /* 8cbce0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cbce3: jge 0x8cbce8 */
  if ((sf == of)) goto L_8cbce8;
L_8cbce5: /* 8cbce5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cbce6: jmp 0x8cbce0 */
  goto L_8cbce0;
L_8cbce8: /* 8cbce8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cbcea: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8cbcec: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8cbcf2u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8cbcf2: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8cbcf5: call 0x99c958 */
  esp -= 4; W32(esp, 0x8cbcfau); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8cbcfa: mov ebx, eax */
  ebx = eax;
/* 8cbcfc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8cbd00: /* 8cbd00: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8cbd03: call 0x99c958 */
  esp -= 4; W32(esp, 0x8cbd08u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8cbd08: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cbd0a: jg 0x8cbdf6 */
  if ((!zf && sf == of)) goto L_8cbdf6;
L_8cbd10: /* 8cbd10: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8cbd13: call 0x99c958 */
  esp -= 4; W32(esp, 0x8cbd18u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8cbd18: mov edi, eax */
  edi = eax;
/* 8cbd1a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8cbd20: /* 8cbd20: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8cbd23: call 0x99c958 */
  esp -= 4; W32(esp, 0x8cbd28u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8cbd28: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cbd2a: jg 0x8cbdc0 */
  if ((!zf && sf == of)) goto L_8cbdc0;
L_8cbd30: /* 8cbd30: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8cbd32: add esi, 0x130c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x130cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8cbd38: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cbd3a: mov ecx, esi */
  ecx = esi;
/* 8cbd3c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cbd42u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cbd42: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8cbd44: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8cbd47: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8cbd4a: mov dword ptr [eax + ecx], edi */
  W32((uint32_t)(eax + ecx), edi);
/* 8cbd4d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8cbd4f: mov dword ptr [eax + edx + 4], ebx */
  W32((uint32_t)(eax + edx + 0x4u), ebx);
/* 8cbd53: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8cbd55: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cbd58: mov dword ptr [eax + ecx + 0xc], 0x3f800000 */
  W32((uint32_t)(eax + ecx + 0xcu), 0x3f800000u);
/* 8cbd60: mov ecx, dword ptr [edx + 0x340] */
  ecx = R32((uint32_t)(edx + 0x340u));
/* 8cbd66: mov dl, byte ptr [ecx + 0x38] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x38u))) & 0xffu);
/* 8cbd69: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8cbd6b: je 0x8cbd8d */
  if (zf) goto L_8cbd8d;
L_8cbd6d: /* 8cbd6d: cmp dl, 0xa */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8cbd70: je 0x8cbd76 */
  if (zf) goto L_8cbd76;
L_8cbd72: /* 8cbd72: xor ecx, ecx */
  ecx = 0;
/* 8cbd74: jmp 0x8cbda4 */
  goto L_8cbda4;
L_8cbd76: /* 8cbd76: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 8cbd79: mov ecx, dword ptr [ecx + 0xac] */
  ecx = R32((uint32_t)(ecx + 0xacu));
/* 8cbd7f: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 8cbd82: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* 8cbd85: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cbd87: mov cx, word ptr [ecx + edx*2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + edx*2))) & 0xffffu);
/* 8cbd8b: jmp 0x8cbda4 */
  goto L_8cbda4;
L_8cbd8d: /* 8cbd8d: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 8cbd90: mov ecx, dword ptr [ecx + 0xac] */
  ecx = R32((uint32_t)(ecx + 0xacu));
/* 8cbd96: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 8cbd99: add edx, dword ptr [ecx + 0x1c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1cu)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cbd9c: movzx cx, byte ptr [edx + edi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(edx + edi)))) & 0xffffu);
/* 8cbda1: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
L_8cbda4: /* 8cbda4: movzx edx, cx */
  edx = (uint32_t)((ecx & 0xffffu));
/* 8cbda7: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8cbda9: mov dword ptr [eax + ecx + 8], edx */
  W32((uint32_t)(eax + ecx + 0x8u), edx);
/* 8cbdad: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8cbdaf: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cbdb2: mov dword ptr [eax + edx + 0x10], 0 */
  W32((uint32_t)(eax + edx + 0x10u), 0x0u);
/* 8cbdba: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8cbdbb: jmp 0x8cbd20 */
  goto L_8cbd20;
L_8cbdc0: /* 8cbdc0: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8cbdc1: jmp 0x8cbd00 */
  goto L_8cbd00;
L_8cbdf6: /* 8cbdf6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cbdf9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cbdfa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cbdfb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cbe02: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cbe03: mov esp, ebp */
  esp = ebp;
/* 8cbe05: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cbe06: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8cbcdd(void) {
  LOAD_REGS();
L_8cbcdd: /* 8cbcdd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8cbce0: /* 8cbce0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cbce3: jge 0x8cbce8 */
  if ((sf == of)) goto L_8cbce8;
L_8cbce5: /* 8cbce5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cbce6: jmp 0x8cbce0 */
  goto L_8cbce0;
L_8cbce8: /* 8cbce8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cbcea: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8cbcec: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8cbcf2u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8cbcf2: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8cbcf5: call 0x99c958 */
  esp -= 4; W32(esp, 0x8cbcfau); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8cbcfa: mov ebx, eax */
  ebx = eax;
/* 8cbcfc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8cbd00: /* 8cbd00: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8cbd03: call 0x99c958 */
  esp -= 4; W32(esp, 0x8cbd08u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8cbd08: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cbd0a: jg 0x8cbdf6 */
  if ((!zf && sf == of)) goto L_8cbdf6;
L_8cbd10: /* 8cbd10: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8cbd13: call 0x99c958 */
  esp -= 4; W32(esp, 0x8cbd18u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8cbd18: mov edi, eax */
  edi = eax;
/* 8cbd1a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8cbd20: /* 8cbd20: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8cbd23: call 0x99c958 */
  esp -= 4; W32(esp, 0x8cbd28u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8cbd28: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cbd2a: jg 0x8cbdc0 */
  if ((!zf && sf == of)) goto L_8cbdc0;
L_8cbd30: /* 8cbd30: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8cbd32: add esi, 0x130c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x130cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8cbd38: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cbd3a: mov ecx, esi */
  ecx = esi;
/* 8cbd3c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cbd42u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cbd42: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8cbd44: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8cbd47: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8cbd4a: mov dword ptr [eax + ecx], edi */
  W32((uint32_t)(eax + ecx), edi);
/* 8cbd4d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8cbd4f: mov dword ptr [eax + edx + 4], ebx */
  W32((uint32_t)(eax + edx + 0x4u), ebx);
/* 8cbd53: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8cbd55: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cbd58: mov dword ptr [eax + ecx + 0xc], 0x3f800000 */
  W32((uint32_t)(eax + ecx + 0xcu), 0x3f800000u);
/* 8cbd60: mov ecx, dword ptr [edx + 0x340] */
  ecx = R32((uint32_t)(edx + 0x340u));
/* 8cbd66: mov dl, byte ptr [ecx + 0x38] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x38u))) & 0xffu);
/* 8cbd69: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8cbd6b: je 0x8cbd8d */
  if (zf) goto L_8cbd8d;
L_8cbd6d: /* 8cbd6d: cmp dl, 0xa */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8cbd70: je 0x8cbd76 */
  if (zf) goto L_8cbd76;
L_8cbd72: /* 8cbd72: xor ecx, ecx */
  ecx = 0;
/* 8cbd74: jmp 0x8cbda4 */
  goto L_8cbda4;
L_8cbd76: /* 8cbd76: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 8cbd79: mov ecx, dword ptr [ecx + 0xac] */
  ecx = R32((uint32_t)(ecx + 0xacu));
/* 8cbd7f: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 8cbd82: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* 8cbd85: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cbd87: mov cx, word ptr [ecx + edx*2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + edx*2))) & 0xffffu);
/* 8cbd8b: jmp 0x8cbda4 */
  goto L_8cbda4;
L_8cbd8d: /* 8cbd8d: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 8cbd90: mov ecx, dword ptr [ecx + 0xac] */
  ecx = R32((uint32_t)(ecx + 0xacu));
/* 8cbd96: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 8cbd99: add edx, dword ptr [ecx + 0x1c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1cu)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cbd9c: movzx cx, byte ptr [edx + edi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(edx + edi)))) & 0xffffu);
/* 8cbda1: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
L_8cbda4: /* 8cbda4: movzx edx, cx */
  edx = (uint32_t)((ecx & 0xffffu));
/* 8cbda7: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8cbda9: mov dword ptr [eax + ecx + 8], edx */
  W32((uint32_t)(eax + ecx + 0x8u), edx);
/* 8cbdad: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8cbdaf: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cbdb2: mov dword ptr [eax + edx + 0x10], 0 */
  W32((uint32_t)(eax + edx + 0x10u), 0x0u);
/* 8cbdba: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8cbdbb: jmp 0x8cbd20 */
  goto L_8cbd20;
L_8cbdc0: /* 8cbdc0: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8cbdc1: jmp 0x8cbd00 */
  goto L_8cbd00;
L_8cbdf6: /* 8cbdf6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cbdf9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cbdfa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cbdfb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cbe02: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cbe03: mov esp, ebp */
  esp = ebp;
/* 8cbe05: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cbe06: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8cbdc6(void) {
  LOAD_REGS();
L_8cbdc6: /* 8cbdc6: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cbdc9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8cbdce: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8cbdd1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cbdd2: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8cbdd5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cbddau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8cbdda(); return;
}

void f_8cbdda(void) {
  LOAD_REGS();
L_8cbdda: /* 8cbdda: push 0xa1c428 */
  { uint32_t v = 0xa1c428u; esp -= 4; W32(esp, v); }
/* 8cbddf: push 0xaecbc8 */
  { uint32_t v = 0xaecbc8u; esp -= 4; W32(esp, v); }
/* 8cbde4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8cbdeau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8cbdea: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cbded: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cbdef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cbdf1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cbdf6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8cbdf6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cbdf9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cbdfa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cbdfb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cbe02: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cbe03: mov esp, ebp */
  esp = ebp;
/* 8cbe05: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cbe06: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8cbe80(void) {
  LOAD_REGS();
L_8cbe80: /* 8cbe80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8cbe81: mov ebp, esp */
  ebp = esp;
/* 8cbe83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8cbe85: push 0x9d7cdb */
  { uint32_t v = 0x9d7cdbu; esp -= 4; W32(esp, v); }
/* 8cbe8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8cbe90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cbe91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8cbe98: sub esp, 0x274 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x274u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cbe9e: mov eax, 0x2aaaaaab */
  eax = 0x2aaaaaabu;
/* 8cbea3: imul dword ptr [ebp + 0x1c] */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x1cu))); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8cbea6: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8cbea9: mov eax, edx */
  eax = edx;
/* 8cbeab: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8cbeae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cbeaf: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cbeb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cbeb2: mov eax, 0x20 */
  eax = 0x20u;
/* 8cbeb7: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cbeb9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cbeba: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8cbebd: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8cbec4: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8cbec7: jle 0x8cbece */
  if ((zf || sf != of)) goto L_8cbece;
L_8cbec9: /* 8cbec9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cbecc: jmp 0x8cbeda */
  goto L_8cbeda;
L_8cbece: /* 8cbece: cmp edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cbed1: jge 0x8cbeda */
  if ((sf == of)) goto L_8cbeda;
L_8cbed3: /* 8cbed3: mov dword ptr [ebp - 0x14], 8 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x8u);
L_8cbeda: /* 8cbeda: mov ebx, dword ptr [0xcfa1e0] */
  ebx = R32((uint32_t)(0xcfa1e0u));
/* 8cbee0: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8cbee3: mov edi, 0xc */
  edi = 0xcu;
/* 8cbee8: lea esi, [ebp - 0x280] */
  esi = (uint32_t)(ebp + 0xfffffd80u);
/* 8cbeee: mov edi, edi */
  edi = edi;
L_8cbef0: /* 8cbef0: dec dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8cbef3: js 0x8cbefd */
  if (sf) goto L_8cbefd;
L_8cbef5: /* 8cbef5: mov ecx, esi */
  ecx = esi;
/* 8cbef7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8cbef9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cbef9: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8cbefb: jmp 0x8cbef0 */
  goto L_8cbef0;
L_8cbefd: /* 8cbefd: mov eax, 0x10000 */
  eax = 0x10000u;
/* 8cbf02: fild dword ptr [ebp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 8cbf05: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8cbf06: idiv dword ptr [ebp - 0x14] */
  { int32_t d = (int32_t)R32((uint32_t)(ebp + 0xffffffecu)); if (!d) d = (int32_t)guest_divzero(0x8cbf06);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8cbf09: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 8cbf0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cbf0e: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8cbf11: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 8cbf18: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 8cbf1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cbf20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cbf22: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x8cbf28u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 8cbf28: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8cbf2b: mov ebx, dword ptr [ecx + 0x1260] */
  ebx = R32((uint32_t)(ecx + 0x1260u));
/* 8cbf31: and bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8cbf34: xor edi, edi */
  edi = 0;
/* 8cbf36: neg bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8cbf38: mov dword ptr [ebp - 0x8c], edi */
  W32((uint32_t)(ebp + 0xffffff74u), edi);
/* 8cbf3e: sbb ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ebx = r;
  }
/* 8cbf40: and ebx, 0xfffffffe */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8cbf43: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_8cbf44: /* 8cbf44: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cbf47: mov dword ptr [ebp + 0x1c], edi */
  W32((uint32_t)(ebp + 0x1cu), edi);
/* 8cbf4a: jge 0x8cc0bc */
  if ((sf == of)) goto L_8cc0bc;
L_8cbf50: /* 8cbf50: fild dword ptr [ebp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 8cbf53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cbf54: lea edx, [ebp - 0xd0] */
  edx = (uint32_t)(ebp + 0xffffff30u);
/* 8cbf5a: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8cbf5d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8cbf60: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cbf61: call dword ptr [0xcfaab4] */
  esp -= 4; W32(esp, 0x8cbf67u); SPILL(); f_4e3553(); if (g_unwind) return; /* Core!??DFRotator@@QBE?AV0@M@Z */ RELOAD();
/* 8cbf67: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 8cbf6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cbf6e: lea eax, [ebp - 0x100] */
  eax = (uint32_t)(ebp + 0xffffff00u);
/* 8cbf74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cbf75: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cbf78: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x8cbf7eu); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 8cbf7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cbf7f: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* 8cbf85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cbf86: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8cbf89: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x8cbf8fu); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8cbf8f: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 8cbf92: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8cbf95: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cbf97: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8cbf9a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cbf9c: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8cbf9f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cbfa2: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8cbfa5: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 8cbfac: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8cbfae: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 8cbfb1: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8cbfb4: lea esi, [ebp + eax - 0x280] */
  esi = (uint32_t)(ebp + eax + 0xfffffd80u);
/* 8cbfbb: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 8cbfbe: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8cbfc1: mov edx, esi */
  edx = esi;
/* 8cbfc3: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8cbfc5: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8cbfc8: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8cbfcb: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8cbfce: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8cbfd1: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8cbfd4: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8cbfd7: mov edx, ebx */
  edx = ebx;
/* 8cbfd9: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 8cbfdb: mov dword ptr [ebp + 0x1c], edx */
  W32((uint32_t)(ebp + 0x1cu), edx);
/* 8cbfde: fild dword ptr [ebp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 8cbfe1: mov dword ptr [ebp + eax - 0x278], 0x48000000 */
  W32((uint32_t)(ebp + eax + 0xfffffd88u), 0x48000000u);
/* 8cbfec: fld dword ptr [0xa1188c] */
  { double v = F32((uint32_t)(0xa1188cu)); FPUSH(v); }
/* 8cbff2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8cbff4: mov ecx, eax */
  ecx = eax;
/* 8cbff6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8cbff8: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 8cbffb: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8cbffe: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8cc001: fsubr dword ptr [esi + 8] */
  ST0 = (F32((uint32_t)(esi + 0x8u))) - ST0;
/* 8cc004: mov edx, esp */
  edx = esp;
/* 8cc006: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8cc009: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8cc00b: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8cc00e: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 8cc015: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8cc018: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8cc01b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8cc01e: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 8cc025: fmul dword ptr [0xa1188c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1188cu)));
/* 8cc02b: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8cc02e: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8cc031: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8cc034: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 8cc037: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8cc03a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8cc03d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cc040: mov ecx, esp */
  ecx = esp;
/* 8cc042: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8cc045: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8cc047: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8cc04a: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8cc04d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8cc050: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cc053: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8cc056: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8cc059: mov eax, esp */
  eax = esp;
/* 8cc05b: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cc05e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8cc060: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cc063: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8cc066: lea edx, [ebp - 0xb8] */
  edx = (uint32_t)(ebp + 0xffffff48u);
/* 8cc06c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8cc06f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8cc072: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cc073: call 0x6c23d3 */
  esp -= 4; W32(esp, 0x8cc078u); SPILL(); f_6c23d3(); if (g_unwind) return; RELOAD();
/* 8cc078: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc07a: jne 0x8cc09c */
  if (!zf) goto L_8cc09c;
L_8cc07c: /* 8cc07c: mov eax, dword ptr [ebp - 0xb0] */
  eax = R32((uint32_t)(ebp + 0xffffff50u));
/* 8cc082: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 8cc088: mov edx, dword ptr [ebp - 0xa8] */
  edx = R32((uint32_t)(ebp + 0xffffff58u));
/* 8cc08e: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 8cc090: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 8cc093: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 8cc096: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8cc097: jmp 0x8cbf44 */
  goto L_8cbf44;
L_8cc09c: /* 8cc09c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8cc09e: lea eax, [esi - 0xc] */
  eax = (uint32_t)(esi + 0xfffffff4u);
/* 8cc0a1: jg 0x8cc0a6 */
  if ((!zf && sf == of)) goto L_8cc0a6;
L_8cc0a3: /* 8cc0a3: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
L_8cc0a6: /* 8cc0a6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8cc0a8: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 8cc0aa: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8cc0ad: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 8cc0b0: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8cc0b3: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 8cc0b6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8cc0b7: jmp 0x8cbf44 */
  goto L_8cbf44;
L_8cc0bc: /* 8cc0bc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8cc0bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cc0c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cc0c2: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8cc0c8: call 0x6c460b */
  esp -= 4; W32(esp, 0x8cc0cdu); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 8cc0cd: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 8cc0d0: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8cc0d4: xor ecx, ecx */
  ecx = 0;
L_8cc0d6: /* 8cc0d6: cmp ecx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc0d9: jge 0x8cc132 */
  if ((sf == of)) goto L_8cc132;
L_8cc0db: /* 8cc0db: lea esi, [ecx + 1] */
  esi = (uint32_t)(ecx + 0x1u);
/* 8cc0de: mov eax, esi */
  eax = esi;
/* 8cc0e0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8cc0e1: idiv dword ptr [ebp - 0x14] */
  { int32_t d = (int32_t)R32((uint32_t)(ebp + 0xffffffecu)); if (!d) d = (int32_t)guest_divzero(0x8cc0e1);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8cc0e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cc0e5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cc0e8: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 8cc0eb: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 8cc0ee: lea eax, [ebp + edx*4 - 0x280] */
  eax = (uint32_t)(ebp + edx*4 + 0xfffffd80u);
/* 8cc0f5: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8cc0f7: mov edx, esp */
  edx = esp;
/* 8cc0f9: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 8cc0fb: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8cc0fe: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8cc101: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 8cc104: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8cc107: lea edx, [ebp + ecx*4 - 0x280] */
  edx = (uint32_t)(ebp + ecx*4 + 0xfffffd80u);
/* 8cc10e: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8cc110: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cc113: mov eax, esp */
  eax = esp;
/* 8cc115: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8cc117: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8cc11a: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8cc11d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8cc120: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8cc126: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8cc129: call 0x6cc74d */
  esp -= 4; W32(esp, 0x8cc12eu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 8cc12e: mov ecx, esi */
  ecx = esi;
/* 8cc130: jmp 0x8cc0d6 */
  goto L_8cc0d6;
L_8cc132: /* 8cc132: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cc134: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8cc13a: call 0x6c6f6e */
  esp -= 4; W32(esp, 0x8cc13fu); SPILL(); f_6c6f6e(); if (g_unwind) return; RELOAD();
/* 8cc13f: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8cc145: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8cc149: call 0x6cadcb */
  esp -= 4; W32(esp, 0x8cc14eu); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
/* 8cc14e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cc151: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cc152: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cc153: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cc15a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cc15b: mov esp, ebp */
  esp = ebp;
/* 8cc15d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cc15e: ret  */
  esp += 4; SPILL(); return;
}

void f_8cc15f(void) {
  LOAD_REGS();
L_8cc15f: /* 8cc15f: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8cc162: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8cc167: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 8cc16a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cc16b: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 8cc16e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cc173u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8cc173(); return;
}

void f_8cc173(void) {
  LOAD_REGS();
L_8cc173: /* 8cc173: push 0xa1c47c */
  { uint32_t v = 0xa1c47cu; esp -= 4; W32(esp, v); }
/* 8cc178: push 0xaecc0c */
  { uint32_t v = 0xaecc0cu; esp -= 4; W32(esp, v); }
/* 8cc17d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8cc183u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8cc183: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cc186: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cc188: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cc18a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cc18fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8cc18f: guest_badaddr(0x8cc18f); return;
}

void f_8cc260(void) {
  LOAD_REGS();
L_8cc260: /* 8cc260: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8cc261: mov ebp, esp */
  ebp = esp;
/* 8cc263: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8cc265: push 0x9d7cf0 */
  { uint32_t v = 0x9d7cf0u; esp -= 4; W32(esp, v); }
/* 8cc26a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8cc270: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cc271: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8cc278: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cc27b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8cc27e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cc27f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cc280: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cc281: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8cc284: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8cc287: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cc288: mov ebx, ecx */
  ebx = ecx;
/* 8cc28a: mov esi, edx */
  esi = edx;
/* 8cc28c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cc28d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cc290: mov ecx, esi */
  ecx = esi;
/* 8cc292: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8cc294: mov edx, esp */
  edx = esp;
/* 8cc296: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8cc298: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8cc29b: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8cc29e: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8cc2a1: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8cc2a4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8cc2a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cc2a8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cc2a9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8cc2b0: call 0x8cbe80 */
  esp -= 4; W32(esp, 0x8cc2b5u); SPILL(); f_8cbe80(); if (g_unwind) return; RELOAD();
/* 8cc2b5: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cc2b8: lea eax, [edi + 0x12dc] */
  eax = (uint32_t)(edi + 0x12dcu);
/* 8cc2be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cc2bf: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8cc2c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cc2c3: mov ecx, esi */
  ecx = esi;
/* 8cc2c5: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x8cc2cbu); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8cc2cb: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8cc2cd: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8cc2d0: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8cc2d3: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8cc2d6: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8cc2d9: mov eax, dword ptr [edi + 0x340] */
  eax = R32((uint32_t)(edi + 0x340u));
/* 8cc2df: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8cc2e2: fild dword ptr [eax + 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x40u)); FPUSH(v); }
/* 8cc2e5: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8cc2e8: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8cc2eb: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8cc2ee: fild dword ptr [eax + 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x44u)); FPUSH(v); }
/* 8cc2f1: lea eax, [edi + 0x12ac] */
  eax = (uint32_t)(edi + 0x12acu);
/* 8cc2f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cc2f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cc2f9: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8cc2fc: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cc2ff: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8cc302: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x8cc308u); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8cc308: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8cc30a: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8cc30d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8cc310: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8cc313: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8cc316: mov eax, dword ptr [0xb18ffc] */
  eax = R32((uint32_t)(0xb18ffcu));
/* 8cc31b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc31d: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8cc320: je 0x8cc32c */
  if (zf) goto L_8cc32c;
L_8cc322: /* 8cc322: mov eax, dword ptr [0xb19048] */
  eax = R32((uint32_t)(0xb19048u));
/* 8cc327: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 8cc32a: jmp 0x8cc331 */
  goto L_8cc331;
L_8cc32c: /* 8cc32c: mov eax, dword ptr [0xb19084] */
  eax = R32((uint32_t)(0xb19084u));
L_8cc331: /* 8cc331: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8cc332: je 0x8cc408 */
  if (zf) goto L_8cc408;
L_8cc338: /* 8cc338: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8cc339: je 0x8cc401 */
  if (zf) goto L_8cc401;
L_8cc33f: /* 8cc33f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8cc340: jne 0x8cc3f0 */
  if (!zf) goto L_8cc3f0;
L_8cc346: /* 8cc346: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8cc349: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8cc34c: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8cc34f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8cc352: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cc353: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8cc356: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8cc359: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cc35a: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8cc35d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cc360: mov eax, esp */
  eax = esp;
/* 8cc362: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8cc364: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8cc367: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8cc36a: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8cc36d: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8cc370: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cc371: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cc372: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8cc375: call 0x8cbe80 */
  esp -= 4; W32(esp, 0x8cc37au); SPILL(); f_8cbe80(); if (g_unwind) return; RELOAD();
/* 8cc37a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8cc37d: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8cc380: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8cc383: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8cc385: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cc388: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cc38b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cc38c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cc38d: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8cc390: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8cc393: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8cc396: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8cc399: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cc39c: mov eax, esp */
  eax = esp;
/* 8cc39e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8cc3a0: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8cc3a3: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8cc3a6: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8cc3a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cc3aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cc3ab: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8cc3ae: call 0x8cbe80 */
  esp -= 4; W32(esp, 0x8cc3b3u); SPILL(); f_8cbe80(); if (g_unwind) return; RELOAD();
/* 8cc3b3: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8cc3b6: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8cc3b9: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8cc3bc: /* 8cc3bc: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8cc3bf: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8cc3c2: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cc3c5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cc3c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cc3c7: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8cc3ca: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cc3cd: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8cc3d0: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8cc3d3: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8cc3d6: mov eax, esp */
  eax = esp;
/* 8cc3d8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8cc3da: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8cc3dd: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8cc3e0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8cc3e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cc3e4: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8cc3e7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_8cc3e8: /* 8cc3e8: call 0x8cbe80 */
  esp -= 4; W32(esp, 0x8cc3edu); SPILL(); f_8cbe80(); if (g_unwind) return; RELOAD();
/* 8cc3ed: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8cc3f0: /* 8cc3f0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cc3f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cc3f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cc3f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cc3fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cc3fd: mov esp, ebp */
  esp = ebp;
/* 8cc3ff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cc400: ret  */
  esp += 4; SPILL(); return;
L_8cc401: /* 8cc401: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8cc404: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8cc406: jmp 0x8cc3bc */
  goto L_8cc3bc;
L_8cc408: /* 8cc408: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8cc40b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8cc40e: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8cc411: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8cc414: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cc415: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8cc418: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8cc41b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cc41c: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8cc41f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cc422: mov edx, esp */
  edx = esp;
/* 8cc424: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8cc426: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8cc429: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8cc42c: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8cc42f: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8cc432: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cc433: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8cc436: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cc437: jmp 0x8cc3e8 */
  goto L_8cc3e8;
}

void f_8cc439(void) {
  LOAD_REGS();
L_8cc439: /* 8cc439: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cc43c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8cc441: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8cc444: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cc445: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8cc448: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cc44du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8cc44d(); return;
}

void f_8cc44d(void) {
  LOAD_REGS();
L_8cc44d: /* 8cc44d: push 0xa1c4ac */
  { uint32_t v = 0xa1c4acu; esp -= 4; W32(esp, v); }
/* 8cc452: push 0xaecc14 */
  { uint32_t v = 0xaecc14u; esp -= 4; W32(esp, v); }
/* 8cc457: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8cc45du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8cc45d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cc460: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cc462: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cc464: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cc469u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8cc469: guest_badaddr(0x8cc469); return;
}

void f_8cc500(void) {
  LOAD_REGS();
L_8cc500: /* 8cc500: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8cc501: mov ebp, esp */
  ebp = esp;
/* 8cc503: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8cc505: push 0x9d7d00 */
  { uint32_t v = 0x9d7d00u; esp -= 4; W32(esp, v); }
/* 8cc50a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8cc510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cc511: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8cc518: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cc51b: test byte ptr [ecx + 0x30], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x30u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc51f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cc520: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cc521: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cc522: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8cc525: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8cc52c: jne 0x8cc59a */
  if (!zf) goto L_8cc59a;
L_8cc52e: /* 8cc52e: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 8cc531: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc533: je 0x8cc59a */
  if (zf) goto L_8cc59a;
L_8cc535: /* 8cc535: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 8cc538: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 8cc53a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc53c: je 0x8cc59a */
  if (zf) goto L_8cc59a;
L_8cc53e: /* 8cc53e: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 8cc543: mov ecx, esi */
  ecx = esi;
/* 8cc545: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8cc54bu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8cc54b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc54d: je 0x8cc59a */
  if (zf) goto L_8cc59a;
L_8cc54f: /* 8cc54f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8cc551: mov ecx, esi */
  ecx = esi;
/* 8cc553: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x8cc559u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cc559: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cc55c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cc563: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cc564: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cc565: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cc566: mov esp, ebp */
  esp = ebp;
/* 8cc568: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cc569: ret  */
  esp += 4; SPILL(); return;
L_8cc59a: /* 8cc59a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cc59d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cc59e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cc59f: xor eax, eax */
  eax = 0;
/* 8cc5a1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cc5a8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cc5a9: mov esp, ebp */
  esp = ebp;
/* 8cc5ab: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cc5ac: ret  */
  esp += 4; SPILL(); return;
}

void f_8cc56a(void) {
  LOAD_REGS();
L_8cc56a: /* 8cc56a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cc56d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8cc572: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8cc575: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cc576: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cc579: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cc57eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8cc57e(); return;
}

void f_8cc57e(void) {
  LOAD_REGS();
L_8cc57e: /* 8cc57e: push 0xa1c4dc */
  { uint32_t v = 0xa1c4dcu; esp -= 4; W32(esp, v); }
/* 8cc583: push 0xaecc3c */
  { uint32_t v = 0xaecc3cu; esp -= 4; W32(esp, v); }
/* 8cc588: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8cc58eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8cc58e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cc591: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cc593: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cc595: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cc59au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8cc59a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cc59d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cc59e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cc59f: xor eax, eax */
  eax = 0;
/* 8cc5a1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cc5a8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cc5a9: mov esp, ebp */
  esp = ebp;
/* 8cc5ab: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cc5ac: ret  */
  esp += 4; SPILL(); return;
}

void f_8cc5e0(void) {
  LOAD_REGS();
L_8cc5e0: /* 8cc5e0: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cc5e3: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 8cc5e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cc5e8: mov ebx, ecx */
  ebx = ecx;
/* 8cc5ea: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* 8cc5ed: mov dword ptr [esp + 0x5c], eax */
  W32((uint32_t)(esp + 0x5cu), eax);
/* 8cc5f1: cmp edx, dword ptr [ebx + 0x1c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc5f4: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 8cc5f8: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* 8cc5fc: jg 0x8cc96e */
  if ((!zf && sf == of)) goto L_8cc96e;
L_8cc602: /* 8cc602: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8cc603: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cc604: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_8cc605: /* 8cc605: mov ebp, dword ptr [ebx + 0x10] */
  ebp = R32((uint32_t)(ebx + 0x10u));
/* 8cc608: cmp ebp, dword ptr [ebx + 0x18] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc60b: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 8cc60f: jg 0x8cc95b */
  if ((!zf && sf == of)) goto L_8cc95b;
L_8cc615: /* 8cc615: jmp 0x8cc620 */
  goto L_8cc620;
L_8cc620: /* 8cc620: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 8cc623: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 8cc626: movzx ecx, word ptr [esi + 0x90] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0x90u)));
/* 8cc62d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cc62e: mov edi, eax */
  edi = eax;
/* 8cc630: imul edi, edx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(edx);
  edi = (uint32_t)r;
  }
/* 8cc633: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8cc635: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8cc637: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8cc638: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 8cc63b: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 8cc63e: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc640: lea ecx, [edx + ebp + 1] */
  ecx = (uint32_t)(edx + ebp + 0x1u);
/* 8cc644: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8cc647: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 8cc64b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8cc64f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc651: imul eax, dword ptr [edx + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edx + 0x128cu)));
  eax = (uint32_t)r;
  }
/* 8cc658: add eax, dword ptr [esi + 0x68] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x68u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc65b: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 8cc65e: lea ecx, [edx + ecx + 1] */
  ecx = (uint32_t)(edx + ecx + 0x1u);
/* 8cc662: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8cc665: imul ecx, dword ptr [edx + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(edx + 0x128cu)));
  ecx = (uint32_t)r;
  }
/* 8cc66c: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8cc66f: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc671: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cc673: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8cc676: mov edx, dword ptr [edx + 0x1280] */
  edx = R32((uint32_t)(edx + 0x1280u));
/* 8cc67c: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 8cc67f: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 8cc683: lea ebx, [eax + eax*2] */
  ebx = (uint32_t)(eax + eax*2);
/* 8cc686: lea ebx, [edx + ebx*4] */
  ebx = (uint32_t)(edx + ebx*4);
/* 8cc689: lea eax, [eax + eax*2 + 3] */
  eax = (uint32_t)(eax + eax*2 + 0x3u);
/* 8cc68d: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8cc690: lea ecx, [ecx + ebp + 1] */
  ecx = (uint32_t)(ecx + ebp + 0x1u);
/* 8cc694: mov ebp, dword ptr [ebx] */
  ebp = R32((uint32_t)(ebx));
/* 8cc696: mov dword ptr [esp + 0x34], ebp */
  W32((uint32_t)(esp + 0x34u), ebp);
/* 8cc69a: mov ebp, dword ptr [ebx + 4] */
  ebp = R32((uint32_t)(ebx + 0x4u));
/* 8cc69d: mov ebx, dword ptr [ebx + 8] */
  ebx = R32((uint32_t)(ebx + 0x8u));
/* 8cc6a0: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 8cc6a4: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8cc6a6: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 8cc6aa: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8cc6ad: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8cc6b0: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 8cc6b4: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 8cc6b7: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8cc6ba: mov dword ptr [esp + 0x44], ebx */
  W32((uint32_t)(esp + 0x44u), ebx);
/* 8cc6be: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8cc6c0: mov dword ptr [esp + 0x4c], ebx */
  W32((uint32_t)(esp + 0x4cu), ebx);
/* 8cc6c4: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8cc6c7: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8cc6ca: lea ecx, [ecx + ecx*2 - 3] */
  ecx = (uint32_t)(ecx + ecx*2 + 0xfffffffdu);
/* 8cc6ce: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 8cc6d1: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 8cc6d5: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8cc6d7: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8cc6da: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8cc6dd: mov dword ptr [esp + 0x50], ebx */
  W32((uint32_t)(esp + 0x50u), ebx);
/* 8cc6e1: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 8cc6e5: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 8cc6e9: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 8cc6ec: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 8cc6f0: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 8cc6f4: lea ecx, [eax + 0xbc] */
  ecx = (uint32_t)(eax + 0xbcu);
/* 8cc6fa: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 8cc6fe: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* 8cc702: call 0x8c3e30 */
  esp -= 4; W32(esp, 0x8cc707u); SPILL(); f_8c3e30(); if (g_unwind) return; RELOAD();
/* 8cc707: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 8cc70b: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 8cc70f: call 0x8c3e30 */
  esp -= 4; W32(esp, 0x8cc714u); SPILL(); f_8c3e30(); if (g_unwind) return; RELOAD();
/* 8cc714: lea edx, [esp + 0x4c] */
  edx = (uint32_t)(esp + 0x4cu);
/* 8cc718: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8cc71c: call 0x8c3e30 */
  esp -= 4; W32(esp, 0x8cc721u); SPILL(); f_8c3e30(); if (g_unwind) return; RELOAD();
/* 8cc721: lea edx, [esp + 0x58] */
  edx = (uint32_t)(esp + 0x58u);
/* 8cc725: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8cc729: call 0x8c3e30 */
  esp -= 4; W32(esp, 0x8cc72eu); SPILL(); f_8c3e30(); if (g_unwind) return; RELOAD();
/* 8cc72e: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 8cc731: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8cc735: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8cc739: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8cc73c: mov ebp, dword ptr [esi + 0x68] */
  ebp = R32((uint32_t)(esi + 0x68u));
/* 8cc73f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cc741: imul ecx, dword ptr [edx + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(edx + 0x128cu)));
  ecx = (uint32_t)r;
  }
/* 8cc748: mov edx, dword ptr [edx + 0x1328] */
  edx = R32((uint32_t)(edx + 0x1328u));
/* 8cc74e: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cc750: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 8cc754: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cc756: mov eax, ecx */
  eax = ecx;
/* 8cc758: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8cc75b: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  cf = ((int32_t)(int32_t)a >> (c - 1)) & 1;
  of = 0;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  eax = r;
  }
/* 8cc75e: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 8cc761: mov esi, 1 */
  esi = 0x1u;
/* 8cc766: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 8cc768: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8cc76a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 8cc76c: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 8cc76e: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  zf = (r) == 0;
  eax = r;
  }
/* 8cc770: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 8cc774: je 0x8cc7f0 */
  if (zf) goto L_8cc7f0;
L_8cc776: /* 8cc776: xor ecx, ecx */
  ecx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 8cc778: jmp 0x8cc780 */
  goto L_8cc780;
L_8cc780: /* 8cc780: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 8cc784: mov eax, 1 */
  eax = 0x1u;
/* 8cc789: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 8cc78b: test edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc78d: je 0x8cc7a3 */
  if (zf) goto L_8cc7a3;
L_8cc78f: /* 8cc78f: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8cc793: test edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc795: je 0x8cc7a3 */
  if (zf) goto L_8cc7a3;
L_8cc797: /* 8cc797: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 8cc79b: test edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc79d: jne 0x8cc867 */
  if (!zf) goto L_8cc867;
L_8cc7a3: /* 8cc7a3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cc7a4: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc7a7: jl 0x8cc780 */
  if ((sf != of)) goto L_8cc780;
L_8cc7a9: /* 8cc7a9: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 8cc7ad: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8cc7b1: mov cx, word ptr [esp + 0x28] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x28u))) & 0xffffu);
/* 8cc7b6: mov word ptr [edx], di */
  W16((uint32_t)(edx), (edi & 0xffffu));
/* 8cc7b9: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc7bc: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* 8cc7bf: mov word ptr [edx], ax */
  W16((uint32_t)(edx), (eax & 0xffffu));
/* 8cc7c2: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc7c5: mov word ptr [edx], cx */
  W16((uint32_t)(edx), (ecx & 0xffffu));
/* 8cc7c8: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 8cc7cb: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc7ce: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cc7cf: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 8cc7d2: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* 8cc7d5: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc7d7: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 8cc7db: jg 0x8cc7df */
  if ((!zf && sf == of)) goto L_8cc7df;
L_8cc7dd: /* 8cc7dd: mov edi, ecx */
  edi = ecx;
L_8cc7df: /* 8cc7df: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 8cc7e2: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc7e4: mov dword ptr [ebx + 0x24], edi */
  W32((uint32_t)(ebx + 0x24u), edi);
/* 8cc7e7: jl 0x8cc7eb */
  if ((sf != of)) goto L_8cc7eb;
L_8cc7e9: /* 8cc7e9: mov eax, ecx */
  eax = ecx;
L_8cc7eb: /* 8cc7eb: mov dword ptr [ebx + 0x28], eax */
  W32((uint32_t)(ebx + 0x28u), eax);
/* 8cc7ee: jmp 0x8cc86f */
  goto L_8cc86f;
L_8cc7f0: /* 8cc7f0: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8cc7f4: xor ecx, ecx */
  ecx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 8cc7f6: jmp 0x8cc800 */
  goto L_8cc800;
L_8cc800: /* 8cc800: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 8cc804: mov eax, 1 */
  eax = 0x1u;
/* 8cc809: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 8cc80b: test esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc80d: je 0x8cc81f */
  if (zf) goto L_8cc81f;
L_8cc80f: /* 8cc80f: test edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc811: je 0x8cc81f */
  if (zf) goto L_8cc81f;
L_8cc813: /* 8cc813: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 8cc817: test esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc819: jne 0x8cc8cc */
  if (!zf) goto L_8cc8cc;
L_8cc81f: /* 8cc81f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cc820: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc823: jl 0x8cc800 */
  if ((sf != of)) goto L_8cc800;
L_8cc825: /* 8cc825: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 8cc829: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8cc82d: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 8cc830: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc833: lea ecx, [esi - 1] */
  ecx = (uint32_t)(esi + 0xffffffffu);
/* 8cc836: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 8cc839: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc83c: mov word ptr [eax], si */
  W16((uint32_t)(eax), (esi & 0xffffu));
/* 8cc83f: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 8cc842: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc845: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cc846: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 8cc849: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* 8cc84c: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc84e: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 8cc852: jle 0x8cc856 */
  if ((zf || sf != of)) goto L_8cc856;
L_8cc854: /* 8cc854: mov ecx, edi */
  ecx = edi;
L_8cc856: /* 8cc856: mov dword ptr [ebx + 0x24], ecx */
  W32((uint32_t)(ebx + 0x24u), ecx);
/* 8cc859: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 8cc85c: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc85e: jge 0x8cc862 */
  if ((sf == of)) goto L_8cc862;
L_8cc860: /* 8cc860: mov ecx, esi */
  ecx = esi;
L_8cc862: /* 8cc862: mov dword ptr [ebx + 0x28], ecx */
  W32((uint32_t)(ebx + 0x28u), ecx);
/* 8cc865: jmp 0x8cc8d4 */
  goto L_8cc8d4;
L_8cc867: /* 8cc867: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8cc86b: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
L_8cc86f: /* 8cc86f: xor ecx, ecx */
  ecx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
L_8cc871: /* 8cc871: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 8cc875: mov eax, 1 */
  eax = 0x1u;
/* 8cc87a: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 8cc87c: test edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc87e: je 0x8cc894 */
  if (zf) goto L_8cc894;
L_8cc880: /* 8cc880: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 8cc884: test edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc886: je 0x8cc894 */
  if (zf) goto L_8cc894;
L_8cc888: /* 8cc888: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 8cc88c: test edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc88e: jne 0x8cc947 */
  if (!zf) goto L_8cc947;
L_8cc894: /* 8cc894: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cc895: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc898: jl 0x8cc871 */
  if ((sf != of)) goto L_8cc871;
L_8cc89a: /* 8cc89a: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 8cc89e: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* 8cc8a1: mov word ptr [edx], ax */
  W16((uint32_t)(edx), (eax & 0xffffu));
/* 8cc8a4: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc8a7: mov word ptr [edx], si */
  W16((uint32_t)(edx), (esi & 0xffffu));
/* 8cc8aa: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc8ad: mov word ptr [edx], cx */
  W16((uint32_t)(edx), (ecx & 0xffffu));
/* 8cc8b0: mov edi, dword ptr [ebx + 0x20] */
  edi = R32((uint32_t)(ebx + 0x20u));
/* 8cc8b3: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 8cc8b6: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc8b9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8cc8ba: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc8bc: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 8cc8c0: mov dword ptr [ebx + 0x20], edi */
  W32((uint32_t)(ebx + 0x20u), edi);
/* 8cc8c3: jle 0x8cc8c7 */
  if ((zf || sf != of)) goto L_8cc8c7;
L_8cc8c5: /* 8cc8c5: mov eax, ecx */
  eax = ecx;
L_8cc8c7: /* 8cc8c7: mov dword ptr [ebx + 0x24], eax */
  W32((uint32_t)(ebx + 0x24u), eax);
/* 8cc8ca: jmp 0x8cc93b */
  goto L_8cc93b;
L_8cc8cc: /* 8cc8cc: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8cc8d0: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
L_8cc8d4: /* 8cc8d4: xor ecx, ecx */
  ecx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 8cc8d6: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 8cc8da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8cc8e0: /* 8cc8e0: mov edx, 1 */
  edx = 0x1u;
/* 8cc8e5: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 8cc8e7: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 8cc8eb: test ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc8ed: je 0x8cc8ff */
  if (zf) goto L_8cc8ff;
L_8cc8ef: /* 8cc8ef: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 8cc8f3: test ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc8f5: je 0x8cc8ff */
  if (zf) goto L_8cc8ff;
L_8cc8f7: /* 8cc8f7: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 8cc8fb: test ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc8fd: jne 0x8cc947 */
  if (!zf) goto L_8cc947;
L_8cc8ff: /* 8cc8ff: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8cc903: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cc904: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc907: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 8cc90b: jl 0x8cc8e0 */
  if ((sf != of)) goto L_8cc8e0;
L_8cc90d: /* 8cc90d: mov dx, word ptr [esp + 0x28] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x28u))) & 0xffffu);
/* 8cc912: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 8cc915: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc918: mov word ptr [eax], si */
  W16((uint32_t)(eax), (esi & 0xffffu));
/* 8cc91b: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc91e: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 8cc921: mov edx, dword ptr [ebx + 0x20] */
  edx = R32((uint32_t)(ebx + 0x20u));
/* 8cc924: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc927: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 8cc92b: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 8cc92e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8cc92f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc931: mov dword ptr [ebx + 0x20], edx */
  W32((uint32_t)(ebx + 0x20u), edx);
/* 8cc934: jg 0x8cc938 */
  if ((!zf && sf == of)) goto L_8cc938;
L_8cc936: /* 8cc936: mov edi, eax */
  edi = eax;
L_8cc938: /* 8cc938: mov dword ptr [ebx + 0x24], edi */
  W32((uint32_t)(ebx + 0x24u), edi);
L_8cc93b: /* 8cc93b: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 8cc93e: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc940: jge 0x8cc944 */
  if ((sf == of)) goto L_8cc944;
L_8cc942: /* 8cc942: mov eax, esi */
  eax = esi;
L_8cc944: /* 8cc944: mov dword ptr [ebx + 0x28], eax */
  W32((uint32_t)(ebx + 0x28u), eax);
L_8cc947: /* 8cc947: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 8cc94a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8cc94e: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8cc94f: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc951: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 8cc955: jle 0x8cc620 */
  if ((zf || sf != of)) goto L_8cc620;
L_8cc95b: /* 8cc95b: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* 8cc95e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8cc95f: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc961: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 8cc965: jle 0x8cc605 */
  if ((zf || sf != of)) goto L_8cc605;
L_8cc96b: /* 8cc96b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cc96c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cc96d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_8cc96e: /* 8cc96e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cc96f: add esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cc972: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8cc617(void) {
  LOAD_REGS();
  goto L_8cc617;
L_8cc605: /* 8cc605: mov ebp, dword ptr [ebx + 0x10] */
  ebp = R32((uint32_t)(ebx + 0x10u));
/* 8cc608: cmp ebp, dword ptr [ebx + 0x18] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc60b: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 8cc60f: jg 0x8cc95b */
  if ((!zf && sf == of)) goto L_8cc95b;
L_8cc615: /* 8cc615: jmp 0x8cc620 */
  goto L_8cc620;
L_8cc617: /* 8cc617: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 8cc61e: mov edi, edi */
  edi = edi;
L_8cc620: /* 8cc620: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 8cc623: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 8cc626: movzx ecx, word ptr [esi + 0x90] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0x90u)));
/* 8cc62d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cc62e: mov edi, eax */
  edi = eax;
/* 8cc630: imul edi, edx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(edx);
  edi = (uint32_t)r;
  }
/* 8cc633: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8cc635: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8cc637: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8cc638: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 8cc63b: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 8cc63e: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc640: lea ecx, [edx + ebp + 1] */
  ecx = (uint32_t)(edx + ebp + 0x1u);
/* 8cc644: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8cc647: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 8cc64b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8cc64f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc651: imul eax, dword ptr [edx + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edx + 0x128cu)));
  eax = (uint32_t)r;
  }
/* 8cc658: add eax, dword ptr [esi + 0x68] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x68u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc65b: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 8cc65e: lea ecx, [edx + ecx + 1] */
  ecx = (uint32_t)(edx + ecx + 0x1u);
/* 8cc662: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8cc665: imul ecx, dword ptr [edx + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(edx + 0x128cu)));
  ecx = (uint32_t)r;
  }
/* 8cc66c: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8cc66f: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc671: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cc673: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8cc676: mov edx, dword ptr [edx + 0x1280] */
  edx = R32((uint32_t)(edx + 0x1280u));
/* 8cc67c: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 8cc67f: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 8cc683: lea ebx, [eax + eax*2] */
  ebx = (uint32_t)(eax + eax*2);
/* 8cc686: lea ebx, [edx + ebx*4] */
  ebx = (uint32_t)(edx + ebx*4);
/* 8cc689: lea eax, [eax + eax*2 + 3] */
  eax = (uint32_t)(eax + eax*2 + 0x3u);
/* 8cc68d: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8cc690: lea ecx, [ecx + ebp + 1] */
  ecx = (uint32_t)(ecx + ebp + 0x1u);
/* 8cc694: mov ebp, dword ptr [ebx] */
  ebp = R32((uint32_t)(ebx));
/* 8cc696: mov dword ptr [esp + 0x34], ebp */
  W32((uint32_t)(esp + 0x34u), ebp);
/* 8cc69a: mov ebp, dword ptr [ebx + 4] */
  ebp = R32((uint32_t)(ebx + 0x4u));
/* 8cc69d: mov ebx, dword ptr [ebx + 8] */
  ebx = R32((uint32_t)(ebx + 0x8u));
/* 8cc6a0: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 8cc6a4: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8cc6a6: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 8cc6aa: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8cc6ad: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8cc6b0: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 8cc6b4: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 8cc6b7: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8cc6ba: mov dword ptr [esp + 0x44], ebx */
  W32((uint32_t)(esp + 0x44u), ebx);
/* 8cc6be: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8cc6c0: mov dword ptr [esp + 0x4c], ebx */
  W32((uint32_t)(esp + 0x4cu), ebx);
/* 8cc6c4: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8cc6c7: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8cc6ca: lea ecx, [ecx + ecx*2 - 3] */
  ecx = (uint32_t)(ecx + ecx*2 + 0xfffffffdu);
/* 8cc6ce: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 8cc6d1: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 8cc6d5: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8cc6d7: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8cc6da: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8cc6dd: mov dword ptr [esp + 0x50], ebx */
  W32((uint32_t)(esp + 0x50u), ebx);
/* 8cc6e1: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 8cc6e5: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 8cc6e9: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 8cc6ec: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 8cc6f0: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 8cc6f4: lea ecx, [eax + 0xbc] */
  ecx = (uint32_t)(eax + 0xbcu);
/* 8cc6fa: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 8cc6fe: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* 8cc702: call 0x8c3e30 */
  esp -= 4; W32(esp, 0x8cc707u); SPILL(); f_8c3e30(); if (g_unwind) return; RELOAD();
/* 8cc707: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 8cc70b: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 8cc70f: call 0x8c3e30 */
  esp -= 4; W32(esp, 0x8cc714u); SPILL(); f_8c3e30(); if (g_unwind) return; RELOAD();
/* 8cc714: lea edx, [esp + 0x4c] */
  edx = (uint32_t)(esp + 0x4cu);
/* 8cc718: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8cc71c: call 0x8c3e30 */
  esp -= 4; W32(esp, 0x8cc721u); SPILL(); f_8c3e30(); if (g_unwind) return; RELOAD();
/* 8cc721: lea edx, [esp + 0x58] */
  edx = (uint32_t)(esp + 0x58u);
/* 8cc725: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8cc729: call 0x8c3e30 */
  esp -= 4; W32(esp, 0x8cc72eu); SPILL(); f_8c3e30(); if (g_unwind) return; RELOAD();
/* 8cc72e: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 8cc731: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8cc735: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8cc739: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8cc73c: mov ebp, dword ptr [esi + 0x68] */
  ebp = R32((uint32_t)(esi + 0x68u));
/* 8cc73f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cc741: imul ecx, dword ptr [edx + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(edx + 0x128cu)));
  ecx = (uint32_t)r;
  }
/* 8cc748: mov edx, dword ptr [edx + 0x1328] */
  edx = R32((uint32_t)(edx + 0x1328u));
/* 8cc74e: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cc750: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 8cc754: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cc756: mov eax, ecx */
  eax = ecx;
/* 8cc758: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8cc75b: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  cf = ((int32_t)(int32_t)a >> (c - 1)) & 1;
  of = 0;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  eax = r;
  }
/* 8cc75e: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 8cc761: mov esi, 1 */
  esi = 0x1u;
/* 8cc766: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 8cc768: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8cc76a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 8cc76c: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 8cc76e: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  zf = (r) == 0;
  eax = r;
  }
/* 8cc770: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 8cc774: je 0x8cc7f0 */
  if (zf) goto L_8cc7f0;
L_8cc776: /* 8cc776: xor ecx, ecx */
  ecx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 8cc778: jmp 0x8cc780 */
  goto L_8cc780;
L_8cc780: /* 8cc780: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 8cc784: mov eax, 1 */
  eax = 0x1u;
/* 8cc789: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 8cc78b: test edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc78d: je 0x8cc7a3 */
  if (zf) goto L_8cc7a3;
L_8cc78f: /* 8cc78f: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8cc793: test edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc795: je 0x8cc7a3 */
  if (zf) goto L_8cc7a3;
L_8cc797: /* 8cc797: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 8cc79b: test edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc79d: jne 0x8cc867 */
  if (!zf) goto L_8cc867;
L_8cc7a3: /* 8cc7a3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cc7a4: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc7a7: jl 0x8cc780 */
  if ((sf != of)) goto L_8cc780;
L_8cc7a9: /* 8cc7a9: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 8cc7ad: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8cc7b1: mov cx, word ptr [esp + 0x28] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x28u))) & 0xffffu);
/* 8cc7b6: mov word ptr [edx], di */
  W16((uint32_t)(edx), (edi & 0xffffu));
/* 8cc7b9: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc7bc: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* 8cc7bf: mov word ptr [edx], ax */
  W16((uint32_t)(edx), (eax & 0xffffu));
/* 8cc7c2: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc7c5: mov word ptr [edx], cx */
  W16((uint32_t)(edx), (ecx & 0xffffu));
/* 8cc7c8: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 8cc7cb: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc7ce: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cc7cf: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 8cc7d2: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* 8cc7d5: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc7d7: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 8cc7db: jg 0x8cc7df */
  if ((!zf && sf == of)) goto L_8cc7df;
L_8cc7dd: /* 8cc7dd: mov edi, ecx */
  edi = ecx;
L_8cc7df: /* 8cc7df: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 8cc7e2: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc7e4: mov dword ptr [ebx + 0x24], edi */
  W32((uint32_t)(ebx + 0x24u), edi);
/* 8cc7e7: jl 0x8cc7eb */
  if ((sf != of)) goto L_8cc7eb;
L_8cc7e9: /* 8cc7e9: mov eax, ecx */
  eax = ecx;
L_8cc7eb: /* 8cc7eb: mov dword ptr [ebx + 0x28], eax */
  W32((uint32_t)(ebx + 0x28u), eax);
/* 8cc7ee: jmp 0x8cc86f */
  goto L_8cc86f;
L_8cc7f0: /* 8cc7f0: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8cc7f4: xor ecx, ecx */
  ecx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 8cc7f6: jmp 0x8cc800 */
  goto L_8cc800;
L_8cc800: /* 8cc800: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 8cc804: mov eax, 1 */
  eax = 0x1u;
/* 8cc809: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 8cc80b: test esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc80d: je 0x8cc81f */
  if (zf) goto L_8cc81f;
L_8cc80f: /* 8cc80f: test edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc811: je 0x8cc81f */
  if (zf) goto L_8cc81f;
L_8cc813: /* 8cc813: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 8cc817: test esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc819: jne 0x8cc8cc */
  if (!zf) goto L_8cc8cc;
L_8cc81f: /* 8cc81f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cc820: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc823: jl 0x8cc800 */
  if ((sf != of)) goto L_8cc800;
L_8cc825: /* 8cc825: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 8cc829: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8cc82d: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 8cc830: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc833: lea ecx, [esi - 1] */
  ecx = (uint32_t)(esi + 0xffffffffu);
/* 8cc836: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 8cc839: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc83c: mov word ptr [eax], si */
  W16((uint32_t)(eax), (esi & 0xffffu));
/* 8cc83f: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 8cc842: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc845: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cc846: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 8cc849: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* 8cc84c: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc84e: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 8cc852: jle 0x8cc856 */
  if ((zf || sf != of)) goto L_8cc856;
L_8cc854: /* 8cc854: mov ecx, edi */
  ecx = edi;
L_8cc856: /* 8cc856: mov dword ptr [ebx + 0x24], ecx */
  W32((uint32_t)(ebx + 0x24u), ecx);
/* 8cc859: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 8cc85c: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc85e: jge 0x8cc862 */
  if ((sf == of)) goto L_8cc862;
L_8cc860: /* 8cc860: mov ecx, esi */
  ecx = esi;
L_8cc862: /* 8cc862: mov dword ptr [ebx + 0x28], ecx */
  W32((uint32_t)(ebx + 0x28u), ecx);
/* 8cc865: jmp 0x8cc8d4 */
  goto L_8cc8d4;
L_8cc867: /* 8cc867: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8cc86b: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
L_8cc86f: /* 8cc86f: xor ecx, ecx */
  ecx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
L_8cc871: /* 8cc871: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 8cc875: mov eax, 1 */
  eax = 0x1u;
/* 8cc87a: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 8cc87c: test edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc87e: je 0x8cc894 */
  if (zf) goto L_8cc894;
L_8cc880: /* 8cc880: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 8cc884: test edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc886: je 0x8cc894 */
  if (zf) goto L_8cc894;
L_8cc888: /* 8cc888: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 8cc88c: test edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc88e: jne 0x8cc947 */
  if (!zf) goto L_8cc947;
L_8cc894: /* 8cc894: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cc895: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc898: jl 0x8cc871 */
  if ((sf != of)) goto L_8cc871;
L_8cc89a: /* 8cc89a: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 8cc89e: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* 8cc8a1: mov word ptr [edx], ax */
  W16((uint32_t)(edx), (eax & 0xffffu));
/* 8cc8a4: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc8a7: mov word ptr [edx], si */
  W16((uint32_t)(edx), (esi & 0xffffu));
/* 8cc8aa: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc8ad: mov word ptr [edx], cx */
  W16((uint32_t)(edx), (ecx & 0xffffu));
/* 8cc8b0: mov edi, dword ptr [ebx + 0x20] */
  edi = R32((uint32_t)(ebx + 0x20u));
/* 8cc8b3: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 8cc8b6: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc8b9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8cc8ba: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc8bc: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 8cc8c0: mov dword ptr [ebx + 0x20], edi */
  W32((uint32_t)(ebx + 0x20u), edi);
/* 8cc8c3: jle 0x8cc8c7 */
  if ((zf || sf != of)) goto L_8cc8c7;
L_8cc8c5: /* 8cc8c5: mov eax, ecx */
  eax = ecx;
L_8cc8c7: /* 8cc8c7: mov dword ptr [ebx + 0x24], eax */
  W32((uint32_t)(ebx + 0x24u), eax);
/* 8cc8ca: jmp 0x8cc93b */
  goto L_8cc93b;
L_8cc8cc: /* 8cc8cc: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8cc8d0: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
L_8cc8d4: /* 8cc8d4: xor ecx, ecx */
  ecx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 8cc8d6: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 8cc8da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8cc8e0: /* 8cc8e0: mov edx, 1 */
  edx = 0x1u;
/* 8cc8e5: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 8cc8e7: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 8cc8eb: test ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc8ed: je 0x8cc8ff */
  if (zf) goto L_8cc8ff;
L_8cc8ef: /* 8cc8ef: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 8cc8f3: test ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc8f5: je 0x8cc8ff */
  if (zf) goto L_8cc8ff;
L_8cc8f7: /* 8cc8f7: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 8cc8fb: test ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc8fd: jne 0x8cc947 */
  if (!zf) goto L_8cc947;
L_8cc8ff: /* 8cc8ff: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8cc903: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cc904: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc907: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 8cc90b: jl 0x8cc8e0 */
  if ((sf != of)) goto L_8cc8e0;
L_8cc90d: /* 8cc90d: mov dx, word ptr [esp + 0x28] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x28u))) & 0xffffu);
/* 8cc912: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 8cc915: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc918: mov word ptr [eax], si */
  W16((uint32_t)(eax), (esi & 0xffffu));
/* 8cc91b: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc91e: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 8cc921: mov edx, dword ptr [ebx + 0x20] */
  edx = R32((uint32_t)(ebx + 0x20u));
/* 8cc924: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc927: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 8cc92b: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 8cc92e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8cc92f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc931: mov dword ptr [ebx + 0x20], edx */
  W32((uint32_t)(ebx + 0x20u), edx);
/* 8cc934: jg 0x8cc938 */
  if ((!zf && sf == of)) goto L_8cc938;
L_8cc936: /* 8cc936: mov edi, eax */
  edi = eax;
L_8cc938: /* 8cc938: mov dword ptr [ebx + 0x24], edi */
  W32((uint32_t)(ebx + 0x24u), edi);
L_8cc93b: /* 8cc93b: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 8cc93e: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc940: jge 0x8cc944 */
  if ((sf == of)) goto L_8cc944;
L_8cc942: /* 8cc942: mov eax, esi */
  eax = esi;
L_8cc944: /* 8cc944: mov dword ptr [ebx + 0x28], eax */
  W32((uint32_t)(ebx + 0x28u), eax);
L_8cc947: /* 8cc947: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 8cc94a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8cc94e: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8cc94f: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc951: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 8cc955: jle 0x8cc620 */
  if ((zf || sf != of)) goto L_8cc620;
L_8cc95b: /* 8cc95b: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* 8cc95e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8cc95f: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc961: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 8cc965: jle 0x8cc605 */
  if ((zf || sf != of)) goto L_8cc605;
L_8cc96b: /* 8cc96b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cc96c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cc96d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cc96e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cc96f: add esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cc972: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8cc77a(void) {
  LOAD_REGS();
  goto L_8cc77a;
L_8cc605: /* 8cc605: mov ebp, dword ptr [ebx + 0x10] */
  ebp = R32((uint32_t)(ebx + 0x10u));
/* 8cc608: cmp ebp, dword ptr [ebx + 0x18] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc60b: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 8cc60f: jg 0x8cc95b */
  if ((!zf && sf == of)) goto L_8cc95b;
L_8cc615: /* 8cc615: jmp 0x8cc620 */
  goto L_8cc620;
L_8cc620: /* 8cc620: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 8cc623: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 8cc626: movzx ecx, word ptr [esi + 0x90] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0x90u)));
/* 8cc62d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cc62e: mov edi, eax */
  edi = eax;
/* 8cc630: imul edi, edx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(edx);
  edi = (uint32_t)r;
  }
/* 8cc633: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8cc635: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8cc637: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8cc638: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 8cc63b: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 8cc63e: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc640: lea ecx, [edx + ebp + 1] */
  ecx = (uint32_t)(edx + ebp + 0x1u);
/* 8cc644: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8cc647: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 8cc64b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8cc64f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc651: imul eax, dword ptr [edx + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edx + 0x128cu)));
  eax = (uint32_t)r;
  }
/* 8cc658: add eax, dword ptr [esi + 0x68] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x68u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc65b: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 8cc65e: lea ecx, [edx + ecx + 1] */
  ecx = (uint32_t)(edx + ecx + 0x1u);
/* 8cc662: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8cc665: imul ecx, dword ptr [edx + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(edx + 0x128cu)));
  ecx = (uint32_t)r;
  }
/* 8cc66c: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8cc66f: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc671: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cc673: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8cc676: mov edx, dword ptr [edx + 0x1280] */
  edx = R32((uint32_t)(edx + 0x1280u));
/* 8cc67c: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 8cc67f: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 8cc683: lea ebx, [eax + eax*2] */
  ebx = (uint32_t)(eax + eax*2);
/* 8cc686: lea ebx, [edx + ebx*4] */
  ebx = (uint32_t)(edx + ebx*4);
/* 8cc689: lea eax, [eax + eax*2 + 3] */
  eax = (uint32_t)(eax + eax*2 + 0x3u);
/* 8cc68d: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8cc690: lea ecx, [ecx + ebp + 1] */
  ecx = (uint32_t)(ecx + ebp + 0x1u);
/* 8cc694: mov ebp, dword ptr [ebx] */
  ebp = R32((uint32_t)(ebx));
/* 8cc696: mov dword ptr [esp + 0x34], ebp */
  W32((uint32_t)(esp + 0x34u), ebp);
/* 8cc69a: mov ebp, dword ptr [ebx + 4] */
  ebp = R32((uint32_t)(ebx + 0x4u));
/* 8cc69d: mov ebx, dword ptr [ebx + 8] */
  ebx = R32((uint32_t)(ebx + 0x8u));
/* 8cc6a0: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 8cc6a4: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8cc6a6: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 8cc6aa: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8cc6ad: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8cc6b0: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 8cc6b4: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 8cc6b7: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8cc6ba: mov dword ptr [esp + 0x44], ebx */
  W32((uint32_t)(esp + 0x44u), ebx);
/* 8cc6be: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8cc6c0: mov dword ptr [esp + 0x4c], ebx */
  W32((uint32_t)(esp + 0x4cu), ebx);
/* 8cc6c4: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8cc6c7: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8cc6ca: lea ecx, [ecx + ecx*2 - 3] */
  ecx = (uint32_t)(ecx + ecx*2 + 0xfffffffdu);
/* 8cc6ce: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 8cc6d1: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 8cc6d5: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8cc6d7: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8cc6da: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8cc6dd: mov dword ptr [esp + 0x50], ebx */
  W32((uint32_t)(esp + 0x50u), ebx);
/* 8cc6e1: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 8cc6e5: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 8cc6e9: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 8cc6ec: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 8cc6f0: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 8cc6f4: lea ecx, [eax + 0xbc] */
  ecx = (uint32_t)(eax + 0xbcu);
/* 8cc6fa: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 8cc6fe: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* 8cc702: call 0x8c3e30 */
  esp -= 4; W32(esp, 0x8cc707u); SPILL(); f_8c3e30(); if (g_unwind) return; RELOAD();
/* 8cc707: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 8cc70b: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 8cc70f: call 0x8c3e30 */
  esp -= 4; W32(esp, 0x8cc714u); SPILL(); f_8c3e30(); if (g_unwind) return; RELOAD();
/* 8cc714: lea edx, [esp + 0x4c] */
  edx = (uint32_t)(esp + 0x4cu);
/* 8cc718: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8cc71c: call 0x8c3e30 */
  esp -= 4; W32(esp, 0x8cc721u); SPILL(); f_8c3e30(); if (g_unwind) return; RELOAD();
/* 8cc721: lea edx, [esp + 0x58] */
  edx = (uint32_t)(esp + 0x58u);
/* 8cc725: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8cc729: call 0x8c3e30 */
  esp -= 4; W32(esp, 0x8cc72eu); SPILL(); f_8c3e30(); if (g_unwind) return; RELOAD();
/* 8cc72e: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 8cc731: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8cc735: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8cc739: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8cc73c: mov ebp, dword ptr [esi + 0x68] */
  ebp = R32((uint32_t)(esi + 0x68u));
/* 8cc73f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cc741: imul ecx, dword ptr [edx + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(edx + 0x128cu)));
  ecx = (uint32_t)r;
  }
/* 8cc748: mov edx, dword ptr [edx + 0x1328] */
  edx = R32((uint32_t)(edx + 0x1328u));
/* 8cc74e: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cc750: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 8cc754: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cc756: mov eax, ecx */
  eax = ecx;
/* 8cc758: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8cc75b: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  cf = ((int32_t)(int32_t)a >> (c - 1)) & 1;
  of = 0;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  eax = r;
  }
/* 8cc75e: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 8cc761: mov esi, 1 */
  esi = 0x1u;
/* 8cc766: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 8cc768: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8cc76a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 8cc76c: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 8cc76e: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  zf = (r) == 0;
  eax = r;
  }
/* 8cc770: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 8cc774: je 0x8cc7f0 */
  if (zf) goto L_8cc7f0;
L_8cc776: /* 8cc776: xor ecx, ecx */
  ecx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 8cc778: jmp 0x8cc780 */
  goto L_8cc780;
L_8cc77a: /* 8cc77a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8cc780: /* 8cc780: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 8cc784: mov eax, 1 */
  eax = 0x1u;
/* 8cc789: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 8cc78b: test edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc78d: je 0x8cc7a3 */
  if (zf) goto L_8cc7a3;
L_8cc78f: /* 8cc78f: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8cc793: test edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc795: je 0x8cc7a3 */
  if (zf) goto L_8cc7a3;
L_8cc797: /* 8cc797: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 8cc79b: test edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc79d: jne 0x8cc867 */
  if (!zf) goto L_8cc867;
L_8cc7a3: /* 8cc7a3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cc7a4: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc7a7: jl 0x8cc780 */
  if ((sf != of)) goto L_8cc780;
L_8cc7a9: /* 8cc7a9: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 8cc7ad: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8cc7b1: mov cx, word ptr [esp + 0x28] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x28u))) & 0xffffu);
/* 8cc7b6: mov word ptr [edx], di */
  W16((uint32_t)(edx), (edi & 0xffffu));
/* 8cc7b9: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc7bc: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* 8cc7bf: mov word ptr [edx], ax */
  W16((uint32_t)(edx), (eax & 0xffffu));
/* 8cc7c2: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc7c5: mov word ptr [edx], cx */
  W16((uint32_t)(edx), (ecx & 0xffffu));
/* 8cc7c8: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 8cc7cb: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc7ce: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cc7cf: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 8cc7d2: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* 8cc7d5: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc7d7: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 8cc7db: jg 0x8cc7df */
  if ((!zf && sf == of)) goto L_8cc7df;
L_8cc7dd: /* 8cc7dd: mov edi, ecx */
  edi = ecx;
L_8cc7df: /* 8cc7df: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 8cc7e2: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc7e4: mov dword ptr [ebx + 0x24], edi */
  W32((uint32_t)(ebx + 0x24u), edi);
/* 8cc7e7: jl 0x8cc7eb */
  if ((sf != of)) goto L_8cc7eb;
L_8cc7e9: /* 8cc7e9: mov eax, ecx */
  eax = ecx;
L_8cc7eb: /* 8cc7eb: mov dword ptr [ebx + 0x28], eax */
  W32((uint32_t)(ebx + 0x28u), eax);
/* 8cc7ee: jmp 0x8cc86f */
  goto L_8cc86f;
L_8cc7f0: /* 8cc7f0: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8cc7f4: xor ecx, ecx */
  ecx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 8cc7f6: jmp 0x8cc800 */
  goto L_8cc800;
L_8cc800: /* 8cc800: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 8cc804: mov eax, 1 */
  eax = 0x1u;
/* 8cc809: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 8cc80b: test esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc80d: je 0x8cc81f */
  if (zf) goto L_8cc81f;
L_8cc80f: /* 8cc80f: test edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc811: je 0x8cc81f */
  if (zf) goto L_8cc81f;
L_8cc813: /* 8cc813: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 8cc817: test esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc819: jne 0x8cc8cc */
  if (!zf) goto L_8cc8cc;
L_8cc81f: /* 8cc81f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cc820: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc823: jl 0x8cc800 */
  if ((sf != of)) goto L_8cc800;
L_8cc825: /* 8cc825: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 8cc829: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8cc82d: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 8cc830: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc833: lea ecx, [esi - 1] */
  ecx = (uint32_t)(esi + 0xffffffffu);
/* 8cc836: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 8cc839: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc83c: mov word ptr [eax], si */
  W16((uint32_t)(eax), (esi & 0xffffu));
/* 8cc83f: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 8cc842: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc845: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cc846: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 8cc849: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* 8cc84c: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc84e: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 8cc852: jle 0x8cc856 */
  if ((zf || sf != of)) goto L_8cc856;
L_8cc854: /* 8cc854: mov ecx, edi */
  ecx = edi;
L_8cc856: /* 8cc856: mov dword ptr [ebx + 0x24], ecx */
  W32((uint32_t)(ebx + 0x24u), ecx);
/* 8cc859: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 8cc85c: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc85e: jge 0x8cc862 */
  if ((sf == of)) goto L_8cc862;
L_8cc860: /* 8cc860: mov ecx, esi */
  ecx = esi;
L_8cc862: /* 8cc862: mov dword ptr [ebx + 0x28], ecx */
  W32((uint32_t)(ebx + 0x28u), ecx);
/* 8cc865: jmp 0x8cc8d4 */
  goto L_8cc8d4;
L_8cc867: /* 8cc867: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8cc86b: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
L_8cc86f: /* 8cc86f: xor ecx, ecx */
  ecx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
L_8cc871: /* 8cc871: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 8cc875: mov eax, 1 */
  eax = 0x1u;
/* 8cc87a: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 8cc87c: test edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc87e: je 0x8cc894 */
  if (zf) goto L_8cc894;
L_8cc880: /* 8cc880: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 8cc884: test edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc886: je 0x8cc894 */
  if (zf) goto L_8cc894;
L_8cc888: /* 8cc888: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 8cc88c: test edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc88e: jne 0x8cc947 */
  if (!zf) goto L_8cc947;
L_8cc894: /* 8cc894: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cc895: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc898: jl 0x8cc871 */
  if ((sf != of)) goto L_8cc871;
L_8cc89a: /* 8cc89a: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 8cc89e: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* 8cc8a1: mov word ptr [edx], ax */
  W16((uint32_t)(edx), (eax & 0xffffu));
/* 8cc8a4: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc8a7: mov word ptr [edx], si */
  W16((uint32_t)(edx), (esi & 0xffffu));
/* 8cc8aa: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc8ad: mov word ptr [edx], cx */
  W16((uint32_t)(edx), (ecx & 0xffffu));
/* 8cc8b0: mov edi, dword ptr [ebx + 0x20] */
  edi = R32((uint32_t)(ebx + 0x20u));
/* 8cc8b3: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 8cc8b6: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc8b9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8cc8ba: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc8bc: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 8cc8c0: mov dword ptr [ebx + 0x20], edi */
  W32((uint32_t)(ebx + 0x20u), edi);
/* 8cc8c3: jle 0x8cc8c7 */
  if ((zf || sf != of)) goto L_8cc8c7;
L_8cc8c5: /* 8cc8c5: mov eax, ecx */
  eax = ecx;
L_8cc8c7: /* 8cc8c7: mov dword ptr [ebx + 0x24], eax */
  W32((uint32_t)(ebx + 0x24u), eax);
/* 8cc8ca: jmp 0x8cc93b */
  goto L_8cc93b;
L_8cc8cc: /* 8cc8cc: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8cc8d0: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
L_8cc8d4: /* 8cc8d4: xor ecx, ecx */
  ecx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 8cc8d6: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 8cc8da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8cc8e0: /* 8cc8e0: mov edx, 1 */
  edx = 0x1u;
/* 8cc8e5: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 8cc8e7: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 8cc8eb: test ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc8ed: je 0x8cc8ff */
  if (zf) goto L_8cc8ff;
L_8cc8ef: /* 8cc8ef: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 8cc8f3: test ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc8f5: je 0x8cc8ff */
  if (zf) goto L_8cc8ff;
L_8cc8f7: /* 8cc8f7: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 8cc8fb: test ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc8fd: jne 0x8cc947 */
  if (!zf) goto L_8cc947;
L_8cc8ff: /* 8cc8ff: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8cc903: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cc904: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc907: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 8cc90b: jl 0x8cc8e0 */
  if ((sf != of)) goto L_8cc8e0;
L_8cc90d: /* 8cc90d: mov dx, word ptr [esp + 0x28] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x28u))) & 0xffffu);
/* 8cc912: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 8cc915: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc918: mov word ptr [eax], si */
  W16((uint32_t)(eax), (esi & 0xffffu));
/* 8cc91b: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc91e: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 8cc921: mov edx, dword ptr [ebx + 0x20] */
  edx = R32((uint32_t)(ebx + 0x20u));
/* 8cc924: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc927: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 8cc92b: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 8cc92e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8cc92f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc931: mov dword ptr [ebx + 0x20], edx */
  W32((uint32_t)(ebx + 0x20u), edx);
/* 8cc934: jg 0x8cc938 */
  if ((!zf && sf == of)) goto L_8cc938;
L_8cc936: /* 8cc936: mov edi, eax */
  edi = eax;
L_8cc938: /* 8cc938: mov dword ptr [ebx + 0x24], edi */
  W32((uint32_t)(ebx + 0x24u), edi);
L_8cc93b: /* 8cc93b: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 8cc93e: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc940: jge 0x8cc944 */
  if ((sf == of)) goto L_8cc944;
L_8cc942: /* 8cc942: mov eax, esi */
  eax = esi;
L_8cc944: /* 8cc944: mov dword ptr [ebx + 0x28], eax */
  W32((uint32_t)(ebx + 0x28u), eax);
L_8cc947: /* 8cc947: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 8cc94a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8cc94e: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8cc94f: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc951: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 8cc955: jle 0x8cc620 */
  if ((zf || sf != of)) goto L_8cc620;
L_8cc95b: /* 8cc95b: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* 8cc95e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8cc95f: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc961: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 8cc965: jle 0x8cc605 */
  if ((zf || sf != of)) goto L_8cc605;
L_8cc96b: /* 8cc96b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cc96c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cc96d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cc96e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cc96f: add esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cc972: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8cc7f8(void) {
  LOAD_REGS();
  goto L_8cc7f8;
L_8cc605: /* 8cc605: mov ebp, dword ptr [ebx + 0x10] */
  ebp = R32((uint32_t)(ebx + 0x10u));
/* 8cc608: cmp ebp, dword ptr [ebx + 0x18] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc60b: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 8cc60f: jg 0x8cc95b */
  if ((!zf && sf == of)) goto L_8cc95b;
L_8cc615: /* 8cc615: jmp 0x8cc620 */
  goto L_8cc620;
L_8cc620: /* 8cc620: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 8cc623: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 8cc626: movzx ecx, word ptr [esi + 0x90] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0x90u)));
/* 8cc62d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cc62e: mov edi, eax */
  edi = eax;
/* 8cc630: imul edi, edx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(edx);
  edi = (uint32_t)r;
  }
/* 8cc633: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8cc635: add edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8cc637: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8cc638: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 8cc63b: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 8cc63e: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc640: lea ecx, [edx + ebp + 1] */
  ecx = (uint32_t)(edx + ebp + 0x1u);
/* 8cc644: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8cc647: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 8cc64b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8cc64f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc651: imul eax, dword ptr [edx + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edx + 0x128cu)));
  eax = (uint32_t)r;
  }
/* 8cc658: add eax, dword ptr [esi + 0x68] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x68u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc65b: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 8cc65e: lea ecx, [edx + ecx + 1] */
  ecx = (uint32_t)(edx + ecx + 0x1u);
/* 8cc662: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8cc665: imul ecx, dword ptr [edx + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(edx + 0x128cu)));
  ecx = (uint32_t)r;
  }
/* 8cc66c: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8cc66f: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc671: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cc673: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8cc676: mov edx, dword ptr [edx + 0x1280] */
  edx = R32((uint32_t)(edx + 0x1280u));
/* 8cc67c: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 8cc67f: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 8cc683: lea ebx, [eax + eax*2] */
  ebx = (uint32_t)(eax + eax*2);
/* 8cc686: lea ebx, [edx + ebx*4] */
  ebx = (uint32_t)(edx + ebx*4);
/* 8cc689: lea eax, [eax + eax*2 + 3] */
  eax = (uint32_t)(eax + eax*2 + 0x3u);
/* 8cc68d: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8cc690: lea ecx, [ecx + ebp + 1] */
  ecx = (uint32_t)(ecx + ebp + 0x1u);
/* 8cc694: mov ebp, dword ptr [ebx] */
  ebp = R32((uint32_t)(ebx));
/* 8cc696: mov dword ptr [esp + 0x34], ebp */
  W32((uint32_t)(esp + 0x34u), ebp);
/* 8cc69a: mov ebp, dword ptr [ebx + 4] */
  ebp = R32((uint32_t)(ebx + 0x4u));
/* 8cc69d: mov ebx, dword ptr [ebx + 8] */
  ebx = R32((uint32_t)(ebx + 0x8u));
/* 8cc6a0: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 8cc6a4: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8cc6a6: mov dword ptr [esp + 0x40], ebx */
  W32((uint32_t)(esp + 0x40u), ebx);
/* 8cc6aa: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8cc6ad: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8cc6b0: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 8cc6b4: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 8cc6b7: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8cc6ba: mov dword ptr [esp + 0x44], ebx */
  W32((uint32_t)(esp + 0x44u), ebx);
/* 8cc6be: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8cc6c0: mov dword ptr [esp + 0x4c], ebx */
  W32((uint32_t)(esp + 0x4cu), ebx);
/* 8cc6c4: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8cc6c7: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8cc6ca: lea ecx, [ecx + ecx*2 - 3] */
  ecx = (uint32_t)(ecx + ecx*2 + 0xfffffffdu);
/* 8cc6ce: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 8cc6d1: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 8cc6d5: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8cc6d7: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8cc6da: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8cc6dd: mov dword ptr [esp + 0x50], ebx */
  W32((uint32_t)(esp + 0x50u), ebx);
/* 8cc6e1: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 8cc6e5: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 8cc6e9: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 8cc6ec: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 8cc6f0: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 8cc6f4: lea ecx, [eax + 0xbc] */
  ecx = (uint32_t)(eax + 0xbcu);
/* 8cc6fa: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 8cc6fe: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* 8cc702: call 0x8c3e30 */
  esp -= 4; W32(esp, 0x8cc707u); SPILL(); f_8c3e30(); if (g_unwind) return; RELOAD();
/* 8cc707: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 8cc70b: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 8cc70f: call 0x8c3e30 */
  esp -= 4; W32(esp, 0x8cc714u); SPILL(); f_8c3e30(); if (g_unwind) return; RELOAD();
/* 8cc714: lea edx, [esp + 0x4c] */
  edx = (uint32_t)(esp + 0x4cu);
/* 8cc718: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8cc71c: call 0x8c3e30 */
  esp -= 4; W32(esp, 0x8cc721u); SPILL(); f_8c3e30(); if (g_unwind) return; RELOAD();
/* 8cc721: lea edx, [esp + 0x58] */
  edx = (uint32_t)(esp + 0x58u);
/* 8cc725: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8cc729: call 0x8c3e30 */
  esp -= 4; W32(esp, 0x8cc72eu); SPILL(); f_8c3e30(); if (g_unwind) return; RELOAD();
/* 8cc72e: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 8cc731: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8cc735: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8cc739: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8cc73c: mov ebp, dword ptr [esi + 0x68] */
  ebp = R32((uint32_t)(esi + 0x68u));
/* 8cc73f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cc741: imul ecx, dword ptr [edx + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(edx + 0x128cu)));
  ecx = (uint32_t)r;
  }
/* 8cc748: mov edx, dword ptr [edx + 0x1328] */
  edx = R32((uint32_t)(edx + 0x1328u));
/* 8cc74e: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cc750: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 8cc754: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cc756: mov eax, ecx */
  eax = ecx;
/* 8cc758: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8cc75b: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  cf = ((int32_t)(int32_t)a >> (c - 1)) & 1;
  of = 0;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  eax = r;
  }
/* 8cc75e: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 8cc761: mov esi, 1 */
  esi = 0x1u;
/* 8cc766: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 8cc768: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8cc76a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 8cc76c: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 8cc76e: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  zf = (r) == 0;
  eax = r;
  }
/* 8cc770: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 8cc774: je 0x8cc7f0 */
  if (zf) goto L_8cc7f0;
L_8cc776: /* 8cc776: xor ecx, ecx */
  ecx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 8cc778: jmp 0x8cc780 */
  goto L_8cc780;
L_8cc780: /* 8cc780: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 8cc784: mov eax, 1 */
  eax = 0x1u;
/* 8cc789: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 8cc78b: test edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc78d: je 0x8cc7a3 */
  if (zf) goto L_8cc7a3;
L_8cc78f: /* 8cc78f: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8cc793: test edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc795: je 0x8cc7a3 */
  if (zf) goto L_8cc7a3;
L_8cc797: /* 8cc797: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 8cc79b: test edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc79d: jne 0x8cc867 */
  if (!zf) goto L_8cc867;
L_8cc7a3: /* 8cc7a3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cc7a4: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc7a7: jl 0x8cc780 */
  if ((sf != of)) goto L_8cc780;
L_8cc7a9: /* 8cc7a9: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 8cc7ad: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8cc7b1: mov cx, word ptr [esp + 0x28] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x28u))) & 0xffffu);
/* 8cc7b6: mov word ptr [edx], di */
  W16((uint32_t)(edx), (edi & 0xffffu));
/* 8cc7b9: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc7bc: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* 8cc7bf: mov word ptr [edx], ax */
  W16((uint32_t)(edx), (eax & 0xffffu));
/* 8cc7c2: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc7c5: mov word ptr [edx], cx */
  W16((uint32_t)(edx), (ecx & 0xffffu));
/* 8cc7c8: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 8cc7cb: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc7ce: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cc7cf: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 8cc7d2: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* 8cc7d5: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc7d7: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 8cc7db: jg 0x8cc7df */
  if ((!zf && sf == of)) goto L_8cc7df;
L_8cc7dd: /* 8cc7dd: mov edi, ecx */
  edi = ecx;
L_8cc7df: /* 8cc7df: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 8cc7e2: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc7e4: mov dword ptr [ebx + 0x24], edi */
  W32((uint32_t)(ebx + 0x24u), edi);
/* 8cc7e7: jl 0x8cc7eb */
  if ((sf != of)) goto L_8cc7eb;
L_8cc7e9: /* 8cc7e9: mov eax, ecx */
  eax = ecx;
L_8cc7eb: /* 8cc7eb: mov dword ptr [ebx + 0x28], eax */
  W32((uint32_t)(ebx + 0x28u), eax);
/* 8cc7ee: jmp 0x8cc86f */
  goto L_8cc86f;
L_8cc7f0: /* 8cc7f0: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8cc7f4: xor ecx, ecx */
  ecx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 8cc7f6: jmp 0x8cc800 */
  goto L_8cc800;
L_8cc7f8: /* 8cc7f8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 8cc7ff: nop  */
L_8cc800: /* 8cc800: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 8cc804: mov eax, 1 */
  eax = 0x1u;
/* 8cc809: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 8cc80b: test esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc80d: je 0x8cc81f */
  if (zf) goto L_8cc81f;
L_8cc80f: /* 8cc80f: test edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc811: je 0x8cc81f */
  if (zf) goto L_8cc81f;
L_8cc813: /* 8cc813: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 8cc817: test esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc819: jne 0x8cc8cc */
  if (!zf) goto L_8cc8cc;
L_8cc81f: /* 8cc81f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cc820: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc823: jl 0x8cc800 */
  if ((sf != of)) goto L_8cc800;
L_8cc825: /* 8cc825: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 8cc829: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8cc82d: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 8cc830: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc833: lea ecx, [esi - 1] */
  ecx = (uint32_t)(esi + 0xffffffffu);
/* 8cc836: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 8cc839: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc83c: mov word ptr [eax], si */
  W16((uint32_t)(eax), (esi & 0xffffu));
/* 8cc83f: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 8cc842: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc845: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cc846: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 8cc849: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* 8cc84c: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc84e: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 8cc852: jle 0x8cc856 */
  if ((zf || sf != of)) goto L_8cc856;
L_8cc854: /* 8cc854: mov ecx, edi */
  ecx = edi;
L_8cc856: /* 8cc856: mov dword ptr [ebx + 0x24], ecx */
  W32((uint32_t)(ebx + 0x24u), ecx);
/* 8cc859: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 8cc85c: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc85e: jge 0x8cc862 */
  if ((sf == of)) goto L_8cc862;
L_8cc860: /* 8cc860: mov ecx, esi */
  ecx = esi;
L_8cc862: /* 8cc862: mov dword ptr [ebx + 0x28], ecx */
  W32((uint32_t)(ebx + 0x28u), ecx);
/* 8cc865: jmp 0x8cc8d4 */
  goto L_8cc8d4;
L_8cc867: /* 8cc867: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8cc86b: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
L_8cc86f: /* 8cc86f: xor ecx, ecx */
  ecx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
L_8cc871: /* 8cc871: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 8cc875: mov eax, 1 */
  eax = 0x1u;
/* 8cc87a: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 8cc87c: test edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc87e: je 0x8cc894 */
  if (zf) goto L_8cc894;
L_8cc880: /* 8cc880: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 8cc884: test edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc886: je 0x8cc894 */
  if (zf) goto L_8cc894;
L_8cc888: /* 8cc888: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 8cc88c: test edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc88e: jne 0x8cc947 */
  if (!zf) goto L_8cc947;
L_8cc894: /* 8cc894: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cc895: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc898: jl 0x8cc871 */
  if ((sf != of)) goto L_8cc871;
L_8cc89a: /* 8cc89a: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 8cc89e: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* 8cc8a1: mov word ptr [edx], ax */
  W16((uint32_t)(edx), (eax & 0xffffu));
/* 8cc8a4: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc8a7: mov word ptr [edx], si */
  W16((uint32_t)(edx), (esi & 0xffffu));
/* 8cc8aa: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc8ad: mov word ptr [edx], cx */
  W16((uint32_t)(edx), (ecx & 0xffffu));
/* 8cc8b0: mov edi, dword ptr [ebx + 0x20] */
  edi = R32((uint32_t)(ebx + 0x20u));
/* 8cc8b3: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 8cc8b6: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cc8b9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8cc8ba: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc8bc: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 8cc8c0: mov dword ptr [ebx + 0x20], edi */
  W32((uint32_t)(ebx + 0x20u), edi);
/* 8cc8c3: jle 0x8cc8c7 */
  if ((zf || sf != of)) goto L_8cc8c7;
L_8cc8c5: /* 8cc8c5: mov eax, ecx */
  eax = ecx;
L_8cc8c7: /* 8cc8c7: mov dword ptr [ebx + 0x24], eax */
  W32((uint32_t)(ebx + 0x24u), eax);
/* 8cc8ca: jmp 0x8cc93b */
  goto L_8cc93b;
L_8cc8cc: /* 8cc8cc: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8cc8d0: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
L_8cc8d4: /* 8cc8d4: xor ecx, ecx */
  ecx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 8cc8d6: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 8cc8da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8cc8e0: /* 8cc8e0: mov edx, 1 */
  edx = 0x1u;
/* 8cc8e5: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 8cc8e7: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 8cc8eb: test ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc8ed: je 0x8cc8ff */
  if (zf) goto L_8cc8ff;
L_8cc8ef: /* 8cc8ef: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 8cc8f3: test ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc8f5: je 0x8cc8ff */
  if (zf) goto L_8cc8ff;
L_8cc8f7: /* 8cc8f7: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 8cc8fb: test ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cc8fd: jne 0x8cc947 */
  if (!zf) goto L_8cc947;
L_8cc8ff: /* 8cc8ff: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8cc903: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cc904: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc907: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 8cc90b: jl 0x8cc8e0 */
  if ((sf != of)) goto L_8cc8e0;
L_8cc90d: /* 8cc90d: mov dx, word ptr [esp + 0x28] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x28u))) & 0xffffu);
/* 8cc912: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 8cc915: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc918: mov word ptr [eax], si */
  W16((uint32_t)(eax), (esi & 0xffffu));
/* 8cc91b: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc91e: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 8cc921: mov edx, dword ptr [ebx + 0x20] */
  edx = R32((uint32_t)(ebx + 0x20u));
/* 8cc924: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cc927: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 8cc92b: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 8cc92e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8cc92f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc931: mov dword ptr [ebx + 0x20], edx */
  W32((uint32_t)(ebx + 0x20u), edx);
/* 8cc934: jg 0x8cc938 */
  if ((!zf && sf == of)) goto L_8cc938;
L_8cc936: /* 8cc936: mov edi, eax */
  edi = eax;
L_8cc938: /* 8cc938: mov dword ptr [ebx + 0x24], edi */
  W32((uint32_t)(ebx + 0x24u), edi);
L_8cc93b: /* 8cc93b: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 8cc93e: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc940: jge 0x8cc944 */
  if ((sf == of)) goto L_8cc944;
L_8cc942: /* 8cc942: mov eax, esi */
  eax = esi;
L_8cc944: /* 8cc944: mov dword ptr [ebx + 0x28], eax */
  W32((uint32_t)(ebx + 0x28u), eax);
L_8cc947: /* 8cc947: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 8cc94a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8cc94e: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8cc94f: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc951: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 8cc955: jle 0x8cc620 */
  if ((zf || sf != of)) goto L_8cc620;
L_8cc95b: /* 8cc95b: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* 8cc95e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8cc95f: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cc961: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 8cc965: jle 0x8cc605 */
  if ((zf || sf != of)) goto L_8cc605;
L_8cc96b: /* 8cc96b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cc96c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cc96d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cc96e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cc96f: add esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cc972: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8cca70(void) {
  LOAD_REGS();
L_8cca70: /* 8cca70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8cca71: mov ebp, esp */
  ebp = esp;
/* 8cca73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8cca75: push 0x9d7d10 */
  { uint32_t v = 0x9d7d10u; esp -= 4; W32(esp, v); }
/* 8cca7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8cca80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cca81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8cca88: sub esp, 0x1e4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1e4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cca8e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cca8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cca90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cca91: mov esi, ecx */
  esi = ecx;
/* 8cca93: mov eax, dword ptr [esi + 0x126c] */
  eax = R32((uint32_t)(esi + 0x126cu));
/* 8cca99: xor edi, edi */
  edi = 0;
/* 8cca9b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8cca9d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ccaa0: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8ccaa3: jne 0x8ccb18 */
  if (!zf) goto L_8ccb18;
L_8ccaa5: /* 8ccaa5: mov eax, dword ptr [esi + 0x1254] */
  eax = R32((uint32_t)(esi + 0x1254u));
/* 8ccaab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ccaac: lea ebx, [esi + 0x1268] */
  ebx = (uint32_t)(esi + 0x1268u);
/* 8ccab2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8ccab4: mov ecx, ebx */
  ecx = ebx;
/* 8ccab6: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ccaba: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8ccac0u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
L_8ccac0: /* 8ccac0: cmp edi, dword ptr [esi + 0x1254] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1254u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ccac6: jge 0x8ccb18 */
  if ((sf == of)) goto L_8ccb18;
L_8ccac8: /* 8ccac8: mov eax, dword ptr [esi + 0x1278] */
  eax = R32((uint32_t)(esi + 0x1278u));
/* 8ccace: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8ccad0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ccad1: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 8ccad4: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8ccad7: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8ccad9: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8ccadfu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8ccadf: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8ccae0: jmp 0x8ccac0 */
  goto L_8ccac0;
L_8ccb18: /* 8ccb18: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8ccb1b: mov edx, dword ptr [esi + 0x1274] */
  edx = R32((uint32_t)(esi + 0x1274u));
/* 8ccb21: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 8ccb24: xor eax, eax */
  eax = 0;
/* 8ccb26: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ccb2d: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
L_8ccb30: /* 8ccb30: cmp eax, dword ptr [esi + 0x1254] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1254u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ccb36: jge 0x8cd48f */
  if ((sf == of)) goto L_8cd48f;
L_8ccb3c: /* 8ccb3c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8ccb3f: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 8ccb42: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8ccb45: mov eax, dword ptr [esi + 0x1268] */
  eax = R32((uint32_t)(esi + 0x1268u));
/* 8ccb4b: add ecx, dword ptr [eax + edx*4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + edx*4)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ccb4e: xor eax, eax */
  eax = 0;
L_8ccb50: /* 8ccb50: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ccb53: jge 0x8ccb58 */
  if ((sf == of)) goto L_8ccb58;
L_8ccb55: /* 8ccb55: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8ccb56: jmp 0x8ccb50 */
  goto L_8ccb50;
L_8ccb58: /* 8ccb58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ccb5a: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 8ccb5c: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8ccb62u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8ccb62: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8ccb65: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8ccb68: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 8ccb6b: mov ebx, dword ptr [esi + 0x1268] */
  ebx = R32((uint32_t)(esi + 0x1268u));
/* 8ccb71: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8ccb74: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8ccb77: mov ebx, dword ptr [ebx + eax] */
  ebx = R32((uint32_t)(ebx + eax));
/* 8ccb7a: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8ccb7d: lea ecx, [ebx + ecx + 0xc] */
  ecx = (uint32_t)(ebx + ecx + 0xcu);
/* 8ccb81: lea edx, [edi + 0x70] */
  edx = (uint32_t)(edi + 0x70u);
/* 8ccb84: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8ccb86: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8ccb88: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 8ccb8b: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8ccb8e: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8ccb91: mov ebx, dword ptr [ebp - 0x44] */
  ebx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8ccb94: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8ccb97: imul ebx, ebx, 0x5c */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x5cu);
  ebx = (uint32_t)r;
  }
/* 8ccb9a: mov ecx, dword ptr [esi + 0x1268] */
  ecx = R32((uint32_t)(esi + 0x1268u));
/* 8ccba0: mov edx, dword ptr [ecx + eax] */
  edx = R32((uint32_t)(ecx + eax));
/* 8ccba3: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 8ccba6: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ccba9: mov dword ptr [edx + ecx + 0x18], eax */
  W32((uint32_t)(edx + ecx + 0x18u), eax);
/* 8ccbad: mov ecx, dword ptr [esi + 0x1250] */
  ecx = R32((uint32_t)(esi + 0x1250u));
/* 8ccbb3: mov eax, dword ptr [ebx + ecx + 0x10] */
  eax = R32((uint32_t)(ebx + ecx + 0x10u));
/* 8ccbb7: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8ccbb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ccbbb: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 8ccbbe: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 8ccbc5: je 0x8cd44a */
  if (zf) goto L_8cd44a;
L_8ccbcb: /* 8ccbcb: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 8ccbce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ccbd0: mov dword ptr [ebp - 0x9c], eax */
  W32((uint32_t)(ebp + 0xffffff64u), eax);
/* 8ccbd6: je 0x8cd44a */
  if (zf) goto L_8cd44a;
L_8ccbdc: /* 8ccbdc: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 8ccbdf: mov ecx, dword ptr [ebx + 0x40] */
  ecx = R32((uint32_t)(ebx + 0x40u));
/* 8ccbe2: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 8ccbe5: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 8ccbe8: add ecx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ccbeb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ccbec: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 8ccbef: call dword ptr [0xcfac58] */
  esp -= 4; W32(esp, 0x8ccbf5u); SPILL(); f_4e2991(); if (g_unwind) return; /* Core!?appSRandInit@@YAXH@Z */ RELOAD();
/* 8ccbf5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ccbf8: xor ecx, ecx */
  ecx = 0;
L_8ccbfa: /* 8ccbfa: cmp ecx, dword ptr [edi + 0x64] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ccbfd: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
/* 8ccc00: jge 0x8cd44a */
  if ((sf == of)) goto L_8cd44a;
L_8ccc06: /* 8ccc06: xor edx, edx */
  edx = 0;
L_8ccc08: /* 8ccc08: cmp edx, dword ptr [edi + 0x60] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ccc0b: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 8ccc0e: jge 0x8cd444 */
  if ((sf == of)) goto L_8cd444;
L_8ccc14: /* 8ccc14: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 8ccc17: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8ccc19: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* 8ccc1c: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8ccc1e: mov ecx, dword ptr [ebx + 0x4c] */
  ecx = R32((uint32_t)(ebx + 0x4cu));
/* 8ccc21: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ccc23: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 8ccc26: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 8ccc29: jne 0x8ccc5d */
  if (!zf) goto L_8ccc5d;
L_8ccc2b: /* 8ccc2b: mov ecx, dword ptr [esi + 0x128c] */
  ecx = R32((uint32_t)(esi + 0x128cu));
/* 8ccc31: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8ccc34: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ccc36: mov eax, dword ptr [esi + 0x131c] */
  eax = R32((uint32_t)(esi + 0x131cu));
/* 8ccc3c: mov edx, ecx */
  edx = ecx;
/* 8ccc3e: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8ccc41: mov ebx, 1 */
  ebx = 0x1u;
/* 8ccc46: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8ccc48: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8ccc4b: test dword ptr [eax + edx*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ccc4e: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8ccc51: je 0x8cd438 */
  if (zf) goto L_8cd438;
L_8ccc57: /* 8ccc57: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8ccc5a: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
L_8ccc5d: /* 8ccc5d: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
L_8ccc64: /* 8ccc64: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8ccc67: cmp ecx, dword ptr [ebx + 0x3c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ccc6a: jge 0x8cd438 */
  if ((sf == of)) goto L_8cd438;
L_8ccc70: /* 8ccc70: mov ecx, dword ptr [ebp - 0x9c] */
  ecx = R32((uint32_t)(ebp + 0xffffff64u));
/* 8ccc76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ccc77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ccc79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ccc7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ccc7b: mov ecx, esi */
  ecx = esi;
/* 8ccc7d: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8ccc82u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8ccc82: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* 8ccc85: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8ccc88: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ccc8b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ccc91: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8ccc94: call dword ptr [0xcfaae4] */
  esp -= 4; W32(esp, 0x8ccc9au); SPILL(); f_4e37ba(); if (g_unwind) return; /* Core!?appSRand@@YAMXZ */ RELOAD();
/* 8ccc9a: lea ecx, [ebx + 0x34] */
  ecx = (uint32_t)(ebx + 0x34u);
/* 8ccc9d: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8ccca0: call dword ptr [0xcfac54] */
  esp -= 4; W32(esp, 0x8ccca6u); SPILL(); f_4e1e29(); if (g_unwind) return; /* Core!?GetSRand@FRange@@QBEMXZ */ RELOAD();
/* 8ccca6: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 8ccca9: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8cccac: fcomp dword ptr [ebp - 0x20] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe0u)));
  FPOP();
/* 8cccaf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8cccb1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8cccb4: jne 0x8cd423 */
  if (!zf) goto L_8cd423;
L_8cccba: /* 8cccba: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8cccbd: mov ebx, dword ptr [ebp - 0x44] */
  ebx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8cccc0: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 8cccc3: mov ecx, dword ptr [esi + 0x1268] */
  ecx = R32((uint32_t)(esi + 0x1268u));
/* 8cccc9: lea ebx, [ebx + ebx*2] */
  ebx = (uint32_t)(ebx + ebx*2);
/* 8ccccc: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 8ccccf: mov ecx, dword ptr [ecx + ebx] */
  ecx = R32((uint32_t)(ecx + ebx));
/* 8cccd2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cccd4: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cccd6: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 8cccd8: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8cccdb: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8ccce1u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8ccce1: imul eax, eax, 0x38 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x38u);
  eax = (uint32_t)r;
  }
/* 8ccce4: mov edx, dword ptr [esi + 0x1268] */
  edx = R32((uint32_t)(esi + 0x1268u));
/* 8cccea: mov ecx, dword ptr [edx + ebx] */
  ecx = R32((uint32_t)(edx + ebx));
/* 8ccced: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cccf0: add eax, dword ptr [ecx + edx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + edx)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cccf3: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8cccf6: call dword ptr [0xcfaae4] */
  esp -= 4; W32(esp, 0x8cccfcu); SPILL(); f_4e37ba(); if (g_unwind) return; /* Core!?appSRand@@YAMXZ */ RELOAD();
/* 8cccfc: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8cccff: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ccd02: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 8ccd05: call dword ptr [0xcfaae4] */
  esp -= 4; W32(esp, 0x8ccd0bu); SPILL(); f_4e37ba(); if (g_unwind) return; /* Core!?appSRand@@YAMXZ */ RELOAD();
/* 8ccd0b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8ccd0e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ccd11: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8ccd14: mov ebx, dword ptr [edi + 0x68] */
  ebx = R32((uint32_t)(edi + 0x68u));
/* 8ccd17: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 8ccd1a: fcomp dword ptr [ebp - 0x48] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb8u)));
  FPOP();
/* 8ccd1d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ccd1f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ccd22: jne 0x8cce97 */
  if (!zf) goto L_8cce97;
L_8ccd28: /* 8ccd28: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8ccd2b: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 8ccd2e: mov ecx, dword ptr [ecx + 0x128c] */
  ecx = R32((uint32_t)(ecx + 0x128cu));
/* 8ccd34: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* 8ccd37: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8ccd39: mov eax, ecx */
  eax = ecx;
/* 8ccd3b: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 8ccd3e: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8ccd40: add eax, dword ptr [ebp - 0x3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8ccd43: mov ebx, dword ptr [esi + 0x1280] */
  ebx = R32((uint32_t)(esi + 0x1280u));
/* 8ccd49: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8ccd4c: lea eax, [ebx + eax*4] */
  eax = (uint32_t)(ebx + eax*4);
/* 8ccd4f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8ccd50: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* 8ccd53: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8ccd56: fsub dword ptr [eax + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x14u)));
/* 8ccd59: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8ccd5c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8ccd5f: fsub dword ptr [eax + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x10u)));
/* 8ccd62: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8ccd65: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* 8ccd68: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8ccd6a: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8ccd6c: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 8ccd6f: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8ccd72: lea ecx, [edx + ecx + 1] */
  ecx = (uint32_t)(edx + ecx + 0x1u);
/* 8ccd76: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 8ccd79: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 8ccd7f: lea ecx, [ebx + edx*4] */
  ecx = (uint32_t)(ebx + edx*4);
/* 8ccd82: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8ccd85: fsub dword ptr [eax + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x14u)));
/* 8ccd88: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8ccd8b: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8ccd8e: fsub dword ptr [eax + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x10u)));
/* 8ccd91: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8ccd94: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8ccd96: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 8ccd99: fstp dword ptr [ebp - 0xec] */
  WF32((uint32_t)(ebp + 0xffffff14u), ST0); FPOP();
/* 8ccd9f: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8ccda2: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8ccda5: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8ccda8: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8ccdab: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 8ccdae: fld dword ptr [ebp - 0xec] */
  { double v = F32((uint32_t)(ebp + 0xffffff14u)); FPUSH(v); }
/* 8ccdb4: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8ccdb7: fstp dword ptr [ebp - 0x18c] */
  WF32((uint32_t)(ebp + 0xfffffe74u), ST0); FPOP();
/* 8ccdbd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8ccdc3: fsub dword ptr [ebp - 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8ccdc6: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ccdc9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ccdcb: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ccdcd: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8ccdd0: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8ccdd3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ccdd5: fmul dword ptr [ebp - 0xf8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff08u)));
/* 8ccddb: fstp dword ptr [ebp - 0x198] */
  WF32((uint32_t)(ebp + 0xfffffe68u), ST0); FPOP();
/* 8ccde1: fadd dword ptr [eax + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x14u)));
/* 8ccde4: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 8ccde7: fadd dword ptr [eax + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x10u)));
/* 8ccdea: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8ccded: fld dword ptr [ebp - 0x198] */
  { double v = F32((uint32_t)(ebp + 0xfffffe68u)); FPUSH(v); }
/* 8ccdf3: fadd dword ptr [eax + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xcu)));
/* 8ccdf6: fstp dword ptr [ebp - 0x150] */
  WF32((uint32_t)(ebp + 0xfffffeb0u), ST0); FPOP();
/* 8ccdfc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ccdfe: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 8cce01: fadd dword ptr [ebp - 0x68] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff98u)));
/* 8cce04: fld dword ptr [ebp - 0x150] */
  { double v = F32((uint32_t)(ebp + 0xfffffeb0u)); FPUSH(v); }
/* 8cce0a: fadd dword ptr [ebp - 0x18c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe74u)));
/* 8cce10: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 8cce16: mov eax, dword ptr [ebp - 0x98] */
  eax = R32((uint32_t)(ebp + 0xffffff68u));
/* 8cce1c: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 8cce1f: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 8cce25: mov ecx, dword ptr [ebp - 0x94] */
  ecx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 8cce2b: mov dword ptr [ebp - 0x70], ecx */
  W32((uint32_t)(ebp + 0xffffff90u), ecx);
/* 8cce2e: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 8cce34: mov edx, dword ptr [ebp - 0x90] */
  edx = R32((uint32_t)(ebp + 0xffffff70u));
/* 8cce3a: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8cce3d: mov dword ptr [ebp - 0x6c], edx */
  W32((uint32_t)(ebp + 0xffffff94u), edx);
/* 8cce40: fmul dword ptr [ebp - 0xf8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff08u)));
/* 8cce46: fld dword ptr [ebp - 0xec] */
  { double v = F32((uint32_t)(ebp + 0xffffff14u)); FPUSH(v); }
/* 8cce4c: lea eax, [ebp - 0x1cc] */
  eax = (uint32_t)(ebp + 0xfffffe34u);
/* 8cce52: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8cce55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cce56: lea ecx, [ebp - 0x104] */
  ecx = (uint32_t)(ebp + 0xfffffefcu);
/* 8cce5c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8cce5e: fld dword ptr [ebp - 0xec] */
  { double v = F32((uint32_t)(ebp + 0xffffff14u)); FPUSH(v); }
/* 8cce64: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8cce67: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8cce6a: fmul dword ptr [ebp - 0xf8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff08u)));
/* 8cce70: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8cce72: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8cce75: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8cce78: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8cce7b: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8cce7e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8cce80: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 8cce86: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 8cce8c: fstp dword ptr [ebp - 0xfc] */
  WF32((uint32_t)(ebp + 0xffffff04u), ST0); FPOP();
/* 8cce92: jmp 0x8cd007 */
  goto L_8cd007;
L_8cce97: /* 8cce97: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 8cce9a: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8cce9d: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 8ccea0: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8ccea2: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8ccea8: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 8cceab: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 8cceae: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8cceb1: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* 8cceb4: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cceb6: mov ebx, dword ptr [ebp - 0x3c] */
  ebx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8cceb9: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ccebb: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8ccebe: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8ccec0: mov ebx, dword ptr [esi + 0x1280] */
  ebx = R32((uint32_t)(esi + 0x1280u));
/* 8ccec6: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ccec8: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 8ccecb: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* 8ccece: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8cced1: lea eax, [ebx + eax*4] */
  eax = (uint32_t)(ebx + eax*4);
/* 8cced4: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8cced7: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 8cceda: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8ccedd: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8ccee0: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8ccee3: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8ccee6: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8ccee8: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8cceea: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 8ccef0: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 8ccef3: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 8ccef6: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8ccef9: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 8ccefc: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8cceff: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8ccf02: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 8ccf05: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8ccf07: fstp dword ptr [ebp - 0x134] */
  WF32((uint32_t)(ebp + 0xfffffeccu), ST0); FPOP();
/* 8ccf0d: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8ccf13: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8ccf16: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ccf19: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ccf1b: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8ccf1e: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8ccf21: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ccf23: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8ccf26: fld dword ptr [ebp - 0x134] */
  { double v = F32((uint32_t)(ebp + 0xfffffeccu)); FPUSH(v); }
/* 8ccf2c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ccf2e: fstp dword ptr [ebp - 0x168] */
  WF32((uint32_t)(ebp + 0xfffffe98u), ST0); FPOP();
/* 8ccf34: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ccf36: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8ccf39: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8ccf3c: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8ccf3f: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8ccf42: fld dword ptr [ebp - 0xe0] */
  { double v = F32((uint32_t)(ebp + 0xffffff20u)); FPUSH(v); }
/* 8ccf48: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8ccf4b: fstp dword ptr [ebp - 0x180] */
  WF32((uint32_t)(ebp + 0xfffffe80u), ST0); FPOP();
/* 8ccf51: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ccf53: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8ccf56: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 8ccf59: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8ccf5c: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8ccf5f: fld dword ptr [ebp - 0x180] */
  { double v = F32((uint32_t)(ebp + 0xfffffe80u)); FPUSH(v); }
/* 8ccf65: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8ccf67: fstp dword ptr [ebp - 0x174] */
  WF32((uint32_t)(ebp + 0xfffffe8cu), ST0); FPOP();
/* 8ccf6d: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 8ccf70: fadd dword ptr [ebp - 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 8ccf73: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8ccf76: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8ccf79: fld dword ptr [ebp - 0x174] */
  { double v = F32((uint32_t)(ebp + 0xfffffe8cu)); FPUSH(v); }
/* 8ccf7f: fadd dword ptr [ebp - 0x168] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe98u)));
/* 8ccf85: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* 8ccf8b: mov edx, dword ptr [ebp - 0xa8] */
  edx = R32((uint32_t)(ebp + 0xffffff58u));
/* 8ccf91: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 8ccf94: fstp dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0); FPOP();
/* 8ccf9a: mov eax, dword ptr [ebp - 0xa4] */
  eax = R32((uint32_t)(ebp + 0xffffff5cu));
/* 8ccfa0: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 8ccfa3: fstp dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0); FPOP();
/* 8ccfa9: mov ecx, dword ptr [ebp - 0xa0] */
  ecx = R32((uint32_t)(ebp + 0xffffff60u));
/* 8ccfaf: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* 8ccfb2: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8ccfb5: lea edx, [ebp - 0x1d8] */
  edx = (uint32_t)(ebp + 0xfffffe28u);
/* 8ccfbb: fmul dword ptr [ebp - 0xe0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff20u)));
/* 8ccfc1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ccfc2: fld dword ptr [ebp - 0x134] */
  { double v = F32((uint32_t)(ebp + 0xfffffeccu)); FPUSH(v); }
/* 8ccfc8: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 8ccfce: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8ccfd1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ccfd3: fld dword ptr [ebp - 0x134] */
  { double v = F32((uint32_t)(ebp + 0xfffffeccu)); FPUSH(v); }
/* 8ccfd9: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 8ccfdc: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ccfdf: fmul dword ptr [ebp - 0xe0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff20u)));
/* 8ccfe5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ccfe7: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ccfea: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8ccfed: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8ccff0: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 8ccff3: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ccff5: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 8ccffb: fstp dword ptr [ebp - 0xd0] */
  WF32((uint32_t)(ebp + 0xffffff30u), ST0); FPOP();
/* 8cd001: fstp dword ptr [ebp - 0xcc] */
  WF32((uint32_t)(ebp + 0xffffff34u), ST0); FPOP();
L_8cd007: /* 8cd007: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8cd00du); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8cd00d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8cd00f: mov ebx, dword ptr [ebp - 0x78] */
  ebx = R32((uint32_t)(ebp + 0xffffff88u));
/* 8cd012: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8cd015: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8cd018: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8cd01b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8cd01e: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8cd021: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8cd024: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8cd02a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8cd02c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8cd02f: jp 0x8cd055 */
  if (pf) goto L_8cd055;
L_8cd031: /* 8cd031: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8cd034: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8cd03a: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8cd03d: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8cd040: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8cd046: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8cd049: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8cd04c: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8cd052: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
L_8cd055: /* 8cd055: mov eax, dword ptr [esi + 0x1260] */
  eax = R32((uint32_t)(esi + 0x1260u));
/* 8cd05b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 8cd05e: je 0x8cd084 */
  if (zf) goto L_8cd084;
L_8cd060: /* 8cd060: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8cd063: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8cd069: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8cd06c: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8cd06f: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8cd075: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8cd078: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8cd07b: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8cd081: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
L_8cd084: /* 8cd084: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8cd087: mov edx, dword ptr [ecx + 0x44] */
  edx = R32((uint32_t)(ecx + 0x44u));
/* 8cd08a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cd08c: je 0x8cd093 */
  if (zf) goto L_8cd093;
L_8cd08e: /* 8cd08e: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 8cd091: jmp 0x8cd0e1 */
  goto L_8cd0e1;
L_8cd093: /* 8cd093: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cd095: je 0x8cd0bd */
  if (zf) goto L_8cd0bd;
L_8cd097: /* 8cd097: mov dword ptr [ebp - 0x110], 0 */
  W32((uint32_t)(ebp + 0xfffffef0u), 0x0u);
/* 8cd0a1: mov dword ptr [ebp - 0x10c], 0 */
  W32((uint32_t)(ebp + 0xfffffef4u), 0x0u);
/* 8cd0ab: mov dword ptr [ebp - 0x108], 0xbf800000 */
  W32((uint32_t)(ebp + 0xfffffef8u), 0xbf800000u);
/* 8cd0b5: lea eax, [ebp - 0x110] */
  eax = (uint32_t)(ebp + 0xfffffef0u);
/* 8cd0bb: jmp 0x8cd0e1 */
  goto L_8cd0e1;
L_8cd0bd: /* 8cd0bd: mov dword ptr [ebp - 0x128], 0 */
  W32((uint32_t)(ebp + 0xfffffed8u), 0x0u);
/* 8cd0c7: mov dword ptr [ebp - 0x124], 0 */
  W32((uint32_t)(ebp + 0xfffffedcu), 0x0u);
/* 8cd0d1: mov dword ptr [ebp - 0x120], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffee0u), 0x3f800000u);
/* 8cd0db: lea eax, [ebp - 0x128] */
  eax = (uint32_t)(ebp + 0xfffffed8u);
L_8cd0e1: /* 8cd0e1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8cd0e3: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 8cd0e6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8cd0e9: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8cd0ec: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8cd0ef: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 8cd0f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cd0f6: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8cd0f9: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8cd0fc: call dword ptr [0xcfaa94] */
  esp -= 4; W32(esp, 0x8cd102u); SPILL(); f_4e2dfb(); if (g_unwind) return; /* Core!?Rotation@FVector@@QAE?AVFRotator@@XZ */ RELOAD();
/* 8cd102: sub dword ptr [ebp - 0x8c], 0x4000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff74u))); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xffffff74u), r);
  }
/* 8cd10c: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8cd10f: mov eax, dword ptr [ecx + 0x58] */
  eax = R32((uint32_t)(ecx + 0x58u));
/* 8cd112: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cd114: je 0x8cd130 */
  if (zf) goto L_8cd130;
L_8cd116: /* 8cd116: call dword ptr [0xcfaae4] */
  esp -= 4; W32(esp, 0x8cd11cu); SPILL(); f_4e37ba(); if (g_unwind) return; /* Core!?appSRand@@YAMXZ */ RELOAD();
/* 8cd11c: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 8cd11f: fmul dword ptr [0xa14724] */
  ST0 = ST0 * (F32((uint32_t)(0xa14724u)));
/* 8cd125: call 0x99c958 */
  esp -= 4; W32(esp, 0x8cd12au); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8cd12a: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
L_8cd130: /* 8cd130: fld dword ptr [esi + 0x125c] */
  { double v = F32((uint32_t)(esi + 0x125cu)); FPUSH(v); }
/* 8cd136: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cd139: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8cd13c: mov edx, eax */
  edx = eax;
/* 8cd13e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8cd140: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cd143: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8cd146: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8cd149: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8cd14b: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8cd14e: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8cd151: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8cd153: fstp dword ptr [ebp - 0x15c] */
  WF32((uint32_t)(ebp + 0xfffffea4u), ST0); FPOP();
/* 8cd159: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8cd15b: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 8cd15e: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8cd161: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 8cd164: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 8cd167: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 8cd16a: fadd dword ptr [ebp - 0x15c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffea4u)));
/* 8cd170: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 8cd176: mov ecx, dword ptr [ebp - 0xb8] */
  ecx = R32((uint32_t)(ebp + 0xffffff48u));
/* 8cd17c: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8cd17e: fstp dword ptr [ebp - 0xb4] */
  WF32((uint32_t)(ebp + 0xffffff4cu), ST0); FPOP();
/* 8cd184: mov ecx, dword ptr [ebp - 0xb4] */
  ecx = R32((uint32_t)(ebp + 0xffffff4cu));
/* 8cd18a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8cd18d: fstp dword ptr [ebp - 0xb0] */
  WF32((uint32_t)(ebp + 0xffffff50u), ST0); FPOP();
/* 8cd193: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 8cd199: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8cd19c: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* 8cd1a2: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8cd1a4: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 8cd1aa: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8cd1ad: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 8cd1b3: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8cd1b6: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8cd1b9: lea eax, [ebp - 0x1f0] */
  eax = (uint32_t)(ebp + 0xfffffe10u);
/* 8cd1bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cd1c0: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cd1c3: call dword ptr [0xcfac50] */
  esp -= 4; W32(esp, 0x8cd1c9u); SPILL(); f_4e1c7b(); if (g_unwind) return; /* Core!?GetSRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 8cd1c9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8cd1cb: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cd1ce: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cd1d1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8cd1d3: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8cd1d6: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8cd1d9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8cd1dc: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8cd1df: mov eax, dword ptr [ebp - 0x7c] */
  eax = R32((uint32_t)(ebp + 0xffffff84u));
/* 8cd1e2: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cd1e5: mov dword ptr [ecx + 0x34], eax */
  W32((uint32_t)(ecx + 0x34u), eax);
/* 8cd1e8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cd1e9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cd1eb: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 8cd1ee: je 0x8cd2db */
  if (zf) goto L_8cd2db;
L_8cd1f4: /* 8cd1f4: mov eax, dword ptr [ebx + 0x40] */
  eax = R32((uint32_t)(ebx + 0x40u));
/* 8cd1f7: imul eax, dword ptr [ebp - 0x60] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffa0u)));
  eax = (uint32_t)r;
  }
/* 8cd1fb: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8cd1fc: idiv dword ptr [esi + 0x128c] */
  { int32_t d = (int32_t)R32((uint32_t)(esi + 0x128cu)); if (!d) d = (int32_t)guest_divzero(0x8cd1fc);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8cd202: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cd203: lea ecx, [ebp - 0x1c0] */
  ecx = (uint32_t)(ebp + 0xfffffe40u);
/* 8cd209: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8cd210: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 8cd213: mov eax, dword ptr [ebx + 0x44] */
  eax = R32((uint32_t)(ebx + 0x44u));
/* 8cd216: imul eax, dword ptr [ebp - 0x58] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffa8u)));
  eax = (uint32_t)r;
  }
/* 8cd21a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8cd21b: idiv dword ptr [esi + 0x1290] */
  { int32_t d = (int32_t)R32((uint32_t)(esi + 0x1290u)); if (!d) d = (int32_t)guest_divzero(0x8cd21b);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8cd221: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cd224: call 0x6c2f36 */
  esp -= 4; W32(esp, 0x8cd229u); SPILL(); f_6c2f36(); if (g_unwind) return; RELOAD();
/* 8cd229: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cd22b: lea ecx, [ebp - 0x1c0] */
  ecx = (uint32_t)(ebp + 0xfffffe40u);
/* 8cd231: call 0x6c68b6 */
  esp -= 4; W32(esp, 0x8cd236u); SPILL(); f_6c68b6(); if (g_unwind) return; RELOAD();
/* 8cd236: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cd238: je 0x8cd252 */
  if (zf) goto L_8cd252;
L_8cd23a: /* 8cd23a: cmp byte ptr [ebx + 0x38], 5 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x38u))); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8cd23e: jne 0x8cd252 */
  if (!zf) goto L_8cd252;
L_8cd240: /* 8cd240: mov ecx, dword ptr [ebx + 0x40] */
  ecx = R32((uint32_t)(ebx + 0x40u));
/* 8cd243: imul ecx, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  ecx = (uint32_t)r;
  }
/* 8cd247: add ecx, dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cd24a: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 8cd24d: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8cd250: jmp 0x8cd255 */
  goto L_8cd255;
L_8cd252: /* 8cd252: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
L_8cd255: /* 8cd255: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cd258: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* 8cd25b: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8cd25e: movzx eax, ah */
  eax = (uint32_t)(((eax >> 8) & 0xffu));
/* 8cd261: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8cd264: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8cd267: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8cd26d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cd270: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 8cd273: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8cd276: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8cd279: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8cd27f: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8cd282: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8cd288: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 8cd28e: mov edx, dword ptr [ebp - 0xc8] */
  edx = R32((uint32_t)(ebp + 0xffffff38u));
/* 8cd294: mov dword ptr [ebp - 0x140], edx */
  W32((uint32_t)(ebp + 0xfffffec0u), edx);
/* 8cd29a: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 8cd2a0: mov eax, dword ptr [ebp - 0xc4] */
  eax = R32((uint32_t)(ebp + 0xffffff3cu));
/* 8cd2a6: lea edx, [ebp - 0x140] */
  edx = (uint32_t)(ebp + 0xfffffec0u);
/* 8cd2ac: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 8cd2b2: mov ecx, dword ptr [ebp - 0xc0] */
  ecx = R32((uint32_t)(ebp + 0xffffff40u));
/* 8cd2b8: mov dword ptr [ebp - 0x138], ecx */
  W32((uint32_t)(ebp + 0xfffffec8u), ecx);
/* 8cd2be: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cd2c1: mov dword ptr [ebp - 0x13c], eax */
  W32((uint32_t)(ebp + 0xfffffec4u), eax);
/* 8cd2c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cd2c8: lea eax, [ebp - 0x1e4] */
  eax = (uint32_t)(ebp + 0xfffffe1cu);
/* 8cd2ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cd2cf: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cd2d2: call dword ptr [0xcfa528] */
  esp -= 4; W32(esp, 0x8cd2d8u); SPILL(); f_4e2374(); if (g_unwind) return; /* Core!??XFVector@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8cd2d8: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
L_8cd2db: /* 8cd2db: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8cd2de: mov eax, dword ptr [edx + 0x54] */
  eax = R32((uint32_t)(edx + 0x54u));
/* 8cd2e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cd2e3: je 0x8cd2fa */
  if (zf) goto L_8cd2fa;
L_8cd2e5: /* 8cd2e5: mov byte ptr [ebp - 0x5c], 0x7f */
  W8((uint32_t)(ebp + 0xffffffa4u), 0x7fu);
/* 8cd2e9: mov byte ptr [ebp - 0x5b], 0x7f */
  W8((uint32_t)(ebp + 0xffffffa5u), 0x7fu);
/* 8cd2ed: mov byte ptr [ebp - 0x5a], 0x7f */
  W8((uint32_t)(ebp + 0xffffffa6u), 0x7fu);
/* 8cd2f1: mov byte ptr [ebp - 0x59], 0xff */
  W8((uint32_t)(ebp + 0xffffffa7u), 0xffu);
/* 8cd2f5: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8cd2f8: jmp 0x8cd32a */
  goto L_8cd32a;
L_8cd2fa: /* 8cd2fa: mov edx, dword ptr [edi + 0x60] */
  edx = R32((uint32_t)(edi + 0x60u));
/* 8cd2fd: movzx eax, word ptr [edi + 0x90] */
  eax = (uint32_t)(R16((uint32_t)(edi + 0x90u)));
/* 8cd304: mov ebx, dword ptr [ebp - 0x3c] */
  ebx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8cd307: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8cd308: imul edx, dword ptr [ebp - 0x54] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffacu)));
  edx = (uint32_t)r;
  }
/* 8cd30c: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8cd30e: mov edx, dword ptr [edi + 0x8c] */
  edx = R32((uint32_t)(edi + 0x8cu));
/* 8cd314: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cd316: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 8cd319: mov ebx, dword ptr [esi + 0x134c] */
  ebx = R32((uint32_t)(esi + 0x134cu));
/* 8cd31f: mov edx, dword ptr [edx + ebx + 4] */
  edx = R32((uint32_t)(edx + ebx + 0x4u));
/* 8cd323: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 8cd326: mov eax, dword ptr [edx + eax*4 + 0x18] */
  eax = R32((uint32_t)(edx + eax*4 + 0x18u));
L_8cd32a: /* 8cd32a: mov dword ptr [ecx + 0x30], eax */
  W32((uint32_t)(ecx + 0x30u), eax);
/* 8cd32d: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 8cd330: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cd332: je 0x8cd423 */
  if (zf) goto L_8cd423;
L_8cd338: /* 8cd338: mov ebx, eax */
  ebx = eax;
/* 8cd33a: mov eax, dword ptr [ebx + 0x40] */
  eax = R32((uint32_t)(ebx + 0x40u));
/* 8cd33d: imul eax, dword ptr [ebp - 0x60] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffa0u)));
  eax = (uint32_t)r;
  }
/* 8cd341: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8cd342: idiv dword ptr [esi + 0x128c] */
  { int32_t d = (int32_t)R32((uint32_t)(esi + 0x128cu)); if (!d) d = (int32_t)guest_divzero(0x8cd342);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8cd348: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cd349: lea ecx, [ebp - 0x1ac] */
  ecx = (uint32_t)(ebp + 0xfffffe54u);
/* 8cd34f: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8cd356: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 8cd359: mov eax, dword ptr [ebx + 0x44] */
  eax = R32((uint32_t)(ebx + 0x44u));
/* 8cd35c: imul eax, dword ptr [ebp - 0x58] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffa8u)));
  eax = (uint32_t)r;
  }
/* 8cd360: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8cd361: idiv dword ptr [esi + 0x1290] */
  { int32_t d = (int32_t)R32((uint32_t)(esi + 0x1290u)); if (!d) d = (int32_t)guest_divzero(0x8cd361);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8cd367: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cd36a: call 0x6c2f36 */
  esp -= 4; W32(esp, 0x8cd36fu); SPILL(); f_6c2f36(); if (g_unwind) return; RELOAD();
/* 8cd36f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cd371: lea ecx, [ebp - 0x1ac] */
  ecx = (uint32_t)(ebp + 0xfffffe54u);
/* 8cd377: call 0x6c68b6 */
  esp -= 4; W32(esp, 0x8cd37cu); SPILL(); f_6c68b6(); if (g_unwind) return; RELOAD();
/* 8cd37c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cd37e: je 0x8cd398 */
  if (zf) goto L_8cd398;
L_8cd380: /* 8cd380: cmp byte ptr [ebx + 0x38], 5 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x38u))); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8cd384: jne 0x8cd398 */
  if (!zf) goto L_8cd398;
L_8cd386: /* 8cd386: mov ecx, dword ptr [ebx + 0x40] */
  ecx = R32((uint32_t)(ebx + 0x40u));
/* 8cd389: imul ecx, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  ecx = (uint32_t)r;
  }
/* 8cd38d: add ecx, dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cd390: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 8cd393: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8cd396: jmp 0x8cd39b */
  goto L_8cd39b;
L_8cd398: /* 8cd398: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
L_8cd39b: /* 8cd39b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cd39e: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cd3a1: shr edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8cd3a4: movzx edx, dl */
  edx = (uint32_t)((edx & 0xffu));
/* 8cd3a7: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8cd3aa: movzx ecx, ah */
  ecx = (uint32_t)(((eax >> 8) & 0xffu));
/* 8cd3ad: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8cd3b0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8cd3b3: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8cd3b9: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* 8cd3bc: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8cd3bf: movzx eax, byte ptr [ebx + 0x32] */
  eax = (uint32_t)(R8((uint32_t)(ebx + 0x32u)));
/* 8cd3c3: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8cd3c9: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8cd3cc: fstp dword ptr [ebp - 0x118] */
  WF32((uint32_t)(ebp + 0xfffffee8u), ST0); FPOP();
/* 8cd3d2: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8cd3d5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cd3d8: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8cd3de: fstp dword ptr [ebp - 0x114] */
  WF32((uint32_t)(ebp + 0xfffffeecu), ST0); FPOP();
/* 8cd3e4: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8cd3e7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8cd3e9: call 0x99c958 */
  esp -= 4; W32(esp, 0x8cd3eeu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8cd3ee: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8cd3f0: movzx ecx, byte ptr [ebx + 0x31] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x31u)));
/* 8cd3f4: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8cd3f7: mov byte ptr [ebx + 0x32], al */
  W8((uint32_t)(ebx + 0x32u), (eax & 0xffu));
/* 8cd3fa: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8cd3fd: fmul dword ptr [ebp - 0x118] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffee8u)));
/* 8cd403: call 0x99c958 */
  esp -= 4; W32(esp, 0x8cd408u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8cd408: movzx edx, byte ptr [ebx + 0x30] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x30u)));
/* 8cd40c: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8cd40f: mov byte ptr [ebx + 0x31], al */
  W8((uint32_t)(ebx + 0x31u), (eax & 0xffu));
/* 8cd412: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8cd415: fmul dword ptr [ebp - 0x114] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffeecu)));
/* 8cd41b: call 0x99c958 */
  esp -= 4; W32(esp, 0x8cd420u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8cd420: mov byte ptr [ebx + 0x30], al */
  W8((uint32_t)(ebx + 0x30u), (eax & 0xffu));
L_8cd423: /* 8cd423: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8cd426: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8cd429: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8cd42c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cd42d: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 8cd430: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8cd433: jmp 0x8ccc64 */
  goto L_8ccc64;
L_8cd438: /* 8cd438: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8cd43b: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8cd43e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8cd43f: jmp 0x8ccc08 */
  goto L_8ccc08;
L_8cd444: /* 8cd444: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cd445: jmp 0x8ccbfa */
  goto L_8ccbfa;
L_8cd44a: /* 8cd44a: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8cd44d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cd44e: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 8cd451: jmp 0x8ccb30 */
  goto L_8ccb30;
L_8cd48f: /* 8cd48f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cd492: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cd493: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cd494: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cd49b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cd49c: mov esp, ebp */
  esp = ebp;
/* 8cd49e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cd49f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8ccae2(void) {
  LOAD_REGS();
L_8ccae2: /* 8ccae2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ccae5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ccaea: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 8ccaf0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ccaf1: mov dword ptr [ebp - 0xac], eax */
  W32((uint32_t)(ebp + 0xffffff54u), eax);
/* 8ccaf7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ccafcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ccafc(); return;
}

void f_8ccafc(void) {
  LOAD_REGS();
L_8ccafc: /* 8ccafc: push 0xa1c578 */
  { uint32_t v = 0xa1c578u; esp -= 4; W32(esp, v); }
/* 8ccb01: push 0xaecca4 */
  { uint32_t v = 0xaecca4u; esp -= 4; W32(esp, v); }
/* 8ccb06: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ccb0cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ccb0c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ccb0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ccb11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ccb13: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ccb18u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8ccb18: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8ccb1b: mov edx, dword ptr [esi + 0x1274] */
  edx = R32((uint32_t)(esi + 0x1274u));
/* 8ccb21: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 8ccb24: xor eax, eax */
  eax = 0;
/* 8ccb26: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ccb2d: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
L_8ccb30: /* 8ccb30: cmp eax, dword ptr [esi + 0x1254] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1254u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ccb36: jge 0x8cd48f */
  if ((sf == of)) goto L_8cd48f;
L_8ccb3c: /* 8ccb3c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8ccb3f: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 8ccb42: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8ccb45: mov eax, dword ptr [esi + 0x1268] */
  eax = R32((uint32_t)(esi + 0x1268u));
/* 8ccb4b: add ecx, dword ptr [eax + edx*4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + edx*4)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ccb4e: xor eax, eax */
  eax = 0;
L_8ccb50: /* 8ccb50: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ccb53: jge 0x8ccb58 */
  if ((sf == of)) goto L_8ccb58;
L_8ccb55: /* 8ccb55: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8ccb56: jmp 0x8ccb50 */
  goto L_8ccb50;
L_8ccb58: /* 8ccb58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ccb5a: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 8ccb5c: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8ccb62u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8ccb62: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8ccb65: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8ccb68: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 8ccb6b: mov ebx, dword ptr [esi + 0x1268] */
  ebx = R32((uint32_t)(esi + 0x1268u));
/* 8ccb71: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8ccb74: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8ccb77: mov ebx, dword ptr [ebx + eax] */
  ebx = R32((uint32_t)(ebx + eax));
/* 8ccb7a: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8ccb7d: lea ecx, [ebx + ecx + 0xc] */
  ecx = (uint32_t)(ebx + ecx + 0xcu);
/* 8ccb81: lea edx, [edi + 0x70] */
  edx = (uint32_t)(edi + 0x70u);
/* 8ccb84: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8ccb86: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8ccb88: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 8ccb8b: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8ccb8e: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8ccb91: mov ebx, dword ptr [ebp - 0x44] */
  ebx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8ccb94: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8ccb97: imul ebx, ebx, 0x5c */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x5cu);
  ebx = (uint32_t)r;
  }
/* 8ccb9a: mov ecx, dword ptr [esi + 0x1268] */
  ecx = R32((uint32_t)(esi + 0x1268u));
/* 8ccba0: mov edx, dword ptr [ecx + eax] */
  edx = R32((uint32_t)(ecx + eax));
/* 8ccba3: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 8ccba6: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ccba9: mov dword ptr [edx + ecx + 0x18], eax */
  W32((uint32_t)(edx + ecx + 0x18u), eax);
/* 8ccbad: mov ecx, dword ptr [esi + 0x1250] */
  ecx = R32((uint32_t)(esi + 0x1250u));
/* 8ccbb3: mov eax, dword ptr [ebx + ecx + 0x10] */
  eax = R32((uint32_t)(ebx + ecx + 0x10u));
/* 8ccbb7: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8ccbb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ccbbb: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 8ccbbe: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 8ccbc5: je 0x8cd44a */
  if (zf) goto L_8cd44a;
L_8ccbcb: /* 8ccbcb: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 8ccbce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ccbd0: mov dword ptr [ebp - 0x9c], eax */
  W32((uint32_t)(ebp + 0xffffff64u), eax);
/* 8ccbd6: je 0x8cd44a */
  if (zf) goto L_8cd44a;
L_8ccbdc: /* 8ccbdc: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 8ccbdf: mov ecx, dword ptr [ebx + 0x40] */
  ecx = R32((uint32_t)(ebx + 0x40u));
/* 8ccbe2: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 8ccbe5: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 8ccbe8: add ecx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ccbeb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ccbec: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 8ccbef: call dword ptr [0xcfac58] */
  esp -= 4; W32(esp, 0x8ccbf5u); SPILL(); f_4e2991(); if (g_unwind) return; /* Core!?appSRandInit@@YAXH@Z */ RELOAD();
/* 8ccbf5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ccbf8: xor ecx, ecx */
  ecx = 0;
L_8ccbfa: /* 8ccbfa: cmp ecx, dword ptr [edi + 0x64] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ccbfd: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
/* 8ccc00: jge 0x8cd44a */
  if ((sf == of)) goto L_8cd44a;
L_8ccc06: /* 8ccc06: xor edx, edx */
  edx = 0;
L_8ccc08: /* 8ccc08: cmp edx, dword ptr [edi + 0x60] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ccc0b: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 8ccc0e: jge 0x8cd444 */
  if ((sf == of)) goto L_8cd444;
L_8ccc14: /* 8ccc14: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 8ccc17: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8ccc19: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* 8ccc1c: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8ccc1e: mov ecx, dword ptr [ebx + 0x4c] */
  ecx = R32((uint32_t)(ebx + 0x4cu));
/* 8ccc21: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ccc23: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 8ccc26: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 8ccc29: jne 0x8ccc5d */
  if (!zf) goto L_8ccc5d;
L_8ccc2b: /* 8ccc2b: mov ecx, dword ptr [esi + 0x128c] */
  ecx = R32((uint32_t)(esi + 0x128cu));
/* 8ccc31: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8ccc34: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ccc36: mov eax, dword ptr [esi + 0x131c] */
  eax = R32((uint32_t)(esi + 0x131cu));
/* 8ccc3c: mov edx, ecx */
  edx = ecx;
/* 8ccc3e: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8ccc41: mov ebx, 1 */
  ebx = 0x1u;
/* 8ccc46: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8ccc48: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8ccc4b: test dword ptr [eax + edx*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ccc4e: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8ccc51: je 0x8cd438 */
  if (zf) goto L_8cd438;
L_8ccc57: /* 8ccc57: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8ccc5a: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
L_8ccc5d: /* 8ccc5d: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
L_8ccc64: /* 8ccc64: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8ccc67: cmp ecx, dword ptr [ebx + 0x3c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ccc6a: jge 0x8cd438 */
  if ((sf == of)) goto L_8cd438;
L_8ccc70: /* 8ccc70: mov ecx, dword ptr [ebp - 0x9c] */
  ecx = R32((uint32_t)(ebp + 0xffffff64u));
/* 8ccc76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ccc77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ccc79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ccc7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ccc7b: mov ecx, esi */
  ecx = esi;
/* 8ccc7d: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8ccc82u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8ccc82: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* 8ccc85: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8ccc88: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ccc8b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ccc91: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8ccc94: call dword ptr [0xcfaae4] */
  esp -= 4; W32(esp, 0x8ccc9au); SPILL(); f_4e37ba(); if (g_unwind) return; /* Core!?appSRand@@YAMXZ */ RELOAD();
/* 8ccc9a: lea ecx, [ebx + 0x34] */
  ecx = (uint32_t)(ebx + 0x34u);
/* 8ccc9d: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8ccca0: call dword ptr [0xcfac54] */
  esp -= 4; W32(esp, 0x8ccca6u); SPILL(); f_4e1e29(); if (g_unwind) return; /* Core!?GetSRand@FRange@@QBEMXZ */ RELOAD();
/* 8ccca6: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 8ccca9: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8cccac: fcomp dword ptr [ebp - 0x20] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe0u)));
  FPOP();
/* 8cccaf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8cccb1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8cccb4: jne 0x8cd423 */
  if (!zf) goto L_8cd423;
L_8cccba: /* 8cccba: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8cccbd: mov ebx, dword ptr [ebp - 0x44] */
  ebx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8cccc0: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 8cccc3: mov ecx, dword ptr [esi + 0x1268] */
  ecx = R32((uint32_t)(esi + 0x1268u));
/* 8cccc9: lea ebx, [ebx + ebx*2] */
  ebx = (uint32_t)(ebx + ebx*2);
/* 8ccccc: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 8ccccf: mov ecx, dword ptr [ecx + ebx] */
  ecx = R32((uint32_t)(ecx + ebx));
/* 8cccd2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cccd4: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cccd6: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 8cccd8: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8cccdb: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8ccce1u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8ccce1: imul eax, eax, 0x38 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x38u);
  eax = (uint32_t)r;
  }
/* 8ccce4: mov edx, dword ptr [esi + 0x1268] */
  edx = R32((uint32_t)(esi + 0x1268u));
/* 8cccea: mov ecx, dword ptr [edx + ebx] */
  ecx = R32((uint32_t)(edx + ebx));
/* 8ccced: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cccf0: add eax, dword ptr [ecx + edx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + edx)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cccf3: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8cccf6: call dword ptr [0xcfaae4] */
  esp -= 4; W32(esp, 0x8cccfcu); SPILL(); f_4e37ba(); if (g_unwind) return; /* Core!?appSRand@@YAMXZ */ RELOAD();
/* 8cccfc: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8cccff: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ccd02: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 8ccd05: call dword ptr [0xcfaae4] */
  esp -= 4; W32(esp, 0x8ccd0bu); SPILL(); f_4e37ba(); if (g_unwind) return; /* Core!?appSRand@@YAMXZ */ RELOAD();
/* 8ccd0b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8ccd0e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ccd11: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8ccd14: mov ebx, dword ptr [edi + 0x68] */
  ebx = R32((uint32_t)(edi + 0x68u));
/* 8ccd17: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 8ccd1a: fcomp dword ptr [ebp - 0x48] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb8u)));
  FPOP();
/* 8ccd1d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ccd1f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ccd22: jne 0x8cce97 */
  if (!zf) goto L_8cce97;
L_8ccd28: /* 8ccd28: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8ccd2b: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 8ccd2e: mov ecx, dword ptr [ecx + 0x128c] */
  ecx = R32((uint32_t)(ecx + 0x128cu));
/* 8ccd34: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* 8ccd37: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8ccd39: mov eax, ecx */
  eax = ecx;
/* 8ccd3b: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 8ccd3e: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8ccd40: add eax, dword ptr [ebp - 0x3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8ccd43: mov ebx, dword ptr [esi + 0x1280] */
  ebx = R32((uint32_t)(esi + 0x1280u));
/* 8ccd49: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8ccd4c: lea eax, [ebx + eax*4] */
  eax = (uint32_t)(ebx + eax*4);
/* 8ccd4f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8ccd50: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* 8ccd53: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8ccd56: fsub dword ptr [eax + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x14u)));
/* 8ccd59: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8ccd5c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8ccd5f: fsub dword ptr [eax + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x10u)));
/* 8ccd62: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8ccd65: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* 8ccd68: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8ccd6a: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8ccd6c: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 8ccd6f: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8ccd72: lea ecx, [edx + ecx + 1] */
  ecx = (uint32_t)(edx + ecx + 0x1u);
/* 8ccd76: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 8ccd79: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 8ccd7f: lea ecx, [ebx + edx*4] */
  ecx = (uint32_t)(ebx + edx*4);
/* 8ccd82: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8ccd85: fsub dword ptr [eax + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x14u)));
/* 8ccd88: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8ccd8b: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8ccd8e: fsub dword ptr [eax + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x10u)));
/* 8ccd91: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8ccd94: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8ccd96: fsub dword ptr [eax + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xcu)));
/* 8ccd99: fstp dword ptr [ebp - 0xec] */
  WF32((uint32_t)(ebp + 0xffffff14u), ST0); FPOP();
/* 8ccd9f: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8ccda2: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8ccda5: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8ccda8: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8ccdab: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 8ccdae: fld dword ptr [ebp - 0xec] */
  { double v = F32((uint32_t)(ebp + 0xffffff14u)); FPUSH(v); }
/* 8ccdb4: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8ccdb7: fstp dword ptr [ebp - 0x18c] */
  WF32((uint32_t)(ebp + 0xfffffe74u), ST0); FPOP();
/* 8ccdbd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8ccdc3: fsub dword ptr [ebp - 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8ccdc6: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ccdc9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ccdcb: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ccdcd: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8ccdd0: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8ccdd3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ccdd5: fmul dword ptr [ebp - 0xf8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff08u)));
/* 8ccddb: fstp dword ptr [ebp - 0x198] */
  WF32((uint32_t)(ebp + 0xfffffe68u), ST0); FPOP();
/* 8ccde1: fadd dword ptr [eax + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x14u)));
/* 8ccde4: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 8ccde7: fadd dword ptr [eax + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x10u)));
/* 8ccdea: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8ccded: fld dword ptr [ebp - 0x198] */
  { double v = F32((uint32_t)(ebp + 0xfffffe68u)); FPUSH(v); }
/* 8ccdf3: fadd dword ptr [eax + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xcu)));
/* 8ccdf6: fstp dword ptr [ebp - 0x150] */
  WF32((uint32_t)(ebp + 0xfffffeb0u), ST0); FPOP();
/* 8ccdfc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ccdfe: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 8cce01: fadd dword ptr [ebp - 0x68] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff98u)));
/* 8cce04: fld dword ptr [ebp - 0x150] */
  { double v = F32((uint32_t)(ebp + 0xfffffeb0u)); FPUSH(v); }
/* 8cce0a: fadd dword ptr [ebp - 0x18c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe74u)));
/* 8cce10: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 8cce16: mov eax, dword ptr [ebp - 0x98] */
  eax = R32((uint32_t)(ebp + 0xffffff68u));
/* 8cce1c: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 8cce1f: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 8cce25: mov ecx, dword ptr [ebp - 0x94] */
  ecx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 8cce2b: mov dword ptr [ebp - 0x70], ecx */
  W32((uint32_t)(ebp + 0xffffff90u), ecx);
/* 8cce2e: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 8cce34: mov edx, dword ptr [ebp - 0x90] */
  edx = R32((uint32_t)(ebp + 0xffffff70u));
/* 8cce3a: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8cce3d: mov dword ptr [ebp - 0x6c], edx */
  W32((uint32_t)(ebp + 0xffffff94u), edx);
/* 8cce40: fmul dword ptr [ebp - 0xf8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff08u)));
/* 8cce46: fld dword ptr [ebp - 0xec] */
  { double v = F32((uint32_t)(ebp + 0xffffff14u)); FPUSH(v); }
/* 8cce4c: lea eax, [ebp - 0x1cc] */
  eax = (uint32_t)(ebp + 0xfffffe34u);
/* 8cce52: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8cce55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cce56: lea ecx, [ebp - 0x104] */
  ecx = (uint32_t)(ebp + 0xfffffefcu);
/* 8cce5c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8cce5e: fld dword ptr [ebp - 0xec] */
  { double v = F32((uint32_t)(ebp + 0xffffff14u)); FPUSH(v); }
/* 8cce64: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8cce67: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8cce6a: fmul dword ptr [ebp - 0xf8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff08u)));
/* 8cce70: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8cce72: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8cce75: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8cce78: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8cce7b: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8cce7e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8cce80: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 8cce86: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 8cce8c: fstp dword ptr [ebp - 0xfc] */
  WF32((uint32_t)(ebp + 0xffffff04u), ST0); FPOP();
/* 8cce92: jmp 0x8cd007 */
  goto L_8cd007;
L_8cce97: /* 8cce97: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 8cce9a: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8cce9d: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 8ccea0: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8ccea2: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8ccea8: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 8cceab: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 8cceae: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8cceb1: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* 8cceb4: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cceb6: mov ebx, dword ptr [ebp - 0x3c] */
  ebx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8cceb9: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ccebb: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8ccebe: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8ccec0: mov ebx, dword ptr [esi + 0x1280] */
  ebx = R32((uint32_t)(esi + 0x1280u));
/* 8ccec6: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ccec8: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 8ccecb: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* 8ccece: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8cced1: lea eax, [ebx + eax*4] */
  eax = (uint32_t)(ebx + eax*4);
/* 8cced4: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8cced7: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 8cceda: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8ccedd: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8ccee0: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8ccee3: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8ccee6: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8ccee8: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8cceea: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 8ccef0: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 8ccef3: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 8ccef6: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8ccef9: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 8ccefc: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8cceff: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8ccf02: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 8ccf05: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8ccf07: fstp dword ptr [ebp - 0x134] */
  WF32((uint32_t)(ebp + 0xfffffeccu), ST0); FPOP();
/* 8ccf0d: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8ccf13: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8ccf16: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ccf19: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ccf1b: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8ccf1e: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8ccf21: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ccf23: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8ccf26: fld dword ptr [ebp - 0x134] */
  { double v = F32((uint32_t)(ebp + 0xfffffeccu)); FPUSH(v); }
/* 8ccf2c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ccf2e: fstp dword ptr [ebp - 0x168] */
  WF32((uint32_t)(ebp + 0xfffffe98u), ST0); FPOP();
/* 8ccf34: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ccf36: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8ccf39: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8ccf3c: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8ccf3f: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8ccf42: fld dword ptr [ebp - 0xe0] */
  { double v = F32((uint32_t)(ebp + 0xffffff20u)); FPUSH(v); }
/* 8ccf48: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8ccf4b: fstp dword ptr [ebp - 0x180] */
  WF32((uint32_t)(ebp + 0xfffffe80u), ST0); FPOP();
/* 8ccf51: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ccf53: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8ccf56: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 8ccf59: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8ccf5c: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8ccf5f: fld dword ptr [ebp - 0x180] */
  { double v = F32((uint32_t)(ebp + 0xfffffe80u)); FPUSH(v); }
/* 8ccf65: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8ccf67: fstp dword ptr [ebp - 0x174] */
  WF32((uint32_t)(ebp + 0xfffffe8cu), ST0); FPOP();
/* 8ccf6d: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 8ccf70: fadd dword ptr [ebp - 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 8ccf73: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8ccf76: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8ccf79: fld dword ptr [ebp - 0x174] */
  { double v = F32((uint32_t)(ebp + 0xfffffe8cu)); FPUSH(v); }
/* 8ccf7f: fadd dword ptr [ebp - 0x168] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe98u)));
/* 8ccf85: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* 8ccf8b: mov edx, dword ptr [ebp - 0xa8] */
  edx = R32((uint32_t)(ebp + 0xffffff58u));
/* 8ccf91: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 8ccf94: fstp dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0); FPOP();
/* 8ccf9a: mov eax, dword ptr [ebp - 0xa4] */
  eax = R32((uint32_t)(ebp + 0xffffff5cu));
/* 8ccfa0: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 8ccfa3: fstp dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0); FPOP();
/* 8ccfa9: mov ecx, dword ptr [ebp - 0xa0] */
  ecx = R32((uint32_t)(ebp + 0xffffff60u));
/* 8ccfaf: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* 8ccfb2: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8ccfb5: lea edx, [ebp - 0x1d8] */
  edx = (uint32_t)(ebp + 0xfffffe28u);
/* 8ccfbb: fmul dword ptr [ebp - 0xe0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff20u)));
/* 8ccfc1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ccfc2: fld dword ptr [ebp - 0x134] */
  { double v = F32((uint32_t)(ebp + 0xfffffeccu)); FPUSH(v); }
/* 8ccfc8: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 8ccfce: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8ccfd1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ccfd3: fld dword ptr [ebp - 0x134] */
  { double v = F32((uint32_t)(ebp + 0xfffffeccu)); FPUSH(v); }
/* 8ccfd9: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 8ccfdc: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ccfdf: fmul dword ptr [ebp - 0xe0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff20u)));
/* 8ccfe5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ccfe7: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ccfea: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8ccfed: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8ccff0: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 8ccff3: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ccff5: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 8ccffb: fstp dword ptr [ebp - 0xd0] */
  WF32((uint32_t)(ebp + 0xffffff30u), ST0); FPOP();
/* 8cd001: fstp dword ptr [ebp - 0xcc] */
  WF32((uint32_t)(ebp + 0xffffff34u), ST0); FPOP();
L_8cd007: /* 8cd007: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8cd00du); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8cd00d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8cd00f: mov ebx, dword ptr [ebp - 0x78] */
  ebx = R32((uint32_t)(ebp + 0xffffff88u));
/* 8cd012: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8cd015: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8cd018: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8cd01b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8cd01e: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8cd021: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8cd024: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8cd02a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8cd02c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8cd02f: jp 0x8cd055 */
  if (pf) goto L_8cd055;
L_8cd031: /* 8cd031: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8cd034: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8cd03a: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8cd03d: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8cd040: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8cd046: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8cd049: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8cd04c: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8cd052: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
L_8cd055: /* 8cd055: mov eax, dword ptr [esi + 0x1260] */
  eax = R32((uint32_t)(esi + 0x1260u));
/* 8cd05b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 8cd05e: je 0x8cd084 */
  if (zf) goto L_8cd084;
L_8cd060: /* 8cd060: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8cd063: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8cd069: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8cd06c: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8cd06f: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8cd075: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8cd078: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8cd07b: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8cd081: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
L_8cd084: /* 8cd084: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8cd087: mov edx, dword ptr [ecx + 0x44] */
  edx = R32((uint32_t)(ecx + 0x44u));
/* 8cd08a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cd08c: je 0x8cd093 */
  if (zf) goto L_8cd093;
L_8cd08e: /* 8cd08e: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 8cd091: jmp 0x8cd0e1 */
  goto L_8cd0e1;
L_8cd093: /* 8cd093: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cd095: je 0x8cd0bd */
  if (zf) goto L_8cd0bd;
L_8cd097: /* 8cd097: mov dword ptr [ebp - 0x110], 0 */
  W32((uint32_t)(ebp + 0xfffffef0u), 0x0u);
/* 8cd0a1: mov dword ptr [ebp - 0x10c], 0 */
  W32((uint32_t)(ebp + 0xfffffef4u), 0x0u);
/* 8cd0ab: mov dword ptr [ebp - 0x108], 0xbf800000 */
  W32((uint32_t)(ebp + 0xfffffef8u), 0xbf800000u);
/* 8cd0b5: lea eax, [ebp - 0x110] */
  eax = (uint32_t)(ebp + 0xfffffef0u);
/* 8cd0bb: jmp 0x8cd0e1 */
  goto L_8cd0e1;
L_8cd0bd: /* 8cd0bd: mov dword ptr [ebp - 0x128], 0 */
  W32((uint32_t)(ebp + 0xfffffed8u), 0x0u);
/* 8cd0c7: mov dword ptr [ebp - 0x124], 0 */
  W32((uint32_t)(ebp + 0xfffffedcu), 0x0u);
/* 8cd0d1: mov dword ptr [ebp - 0x120], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffee0u), 0x3f800000u);
/* 8cd0db: lea eax, [ebp - 0x128] */
  eax = (uint32_t)(ebp + 0xfffffed8u);
L_8cd0e1: /* 8cd0e1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8cd0e3: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 8cd0e6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8cd0e9: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8cd0ec: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8cd0ef: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 8cd0f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cd0f6: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8cd0f9: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8cd0fc: call dword ptr [0xcfaa94] */
  esp -= 4; W32(esp, 0x8cd102u); SPILL(); f_4e2dfb(); if (g_unwind) return; /* Core!?Rotation@FVector@@QAE?AVFRotator@@XZ */ RELOAD();
/* 8cd102: sub dword ptr [ebp - 0x8c], 0x4000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff74u))); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xffffff74u), r);
  }
/* 8cd10c: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8cd10f: mov eax, dword ptr [ecx + 0x58] */
  eax = R32((uint32_t)(ecx + 0x58u));
/* 8cd112: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cd114: je 0x8cd130 */
  if (zf) goto L_8cd130;
L_8cd116: /* 8cd116: call dword ptr [0xcfaae4] */
  esp -= 4; W32(esp, 0x8cd11cu); SPILL(); f_4e37ba(); if (g_unwind) return; /* Core!?appSRand@@YAMXZ */ RELOAD();
/* 8cd11c: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 8cd11f: fmul dword ptr [0xa14724] */
  ST0 = ST0 * (F32((uint32_t)(0xa14724u)));
/* 8cd125: call 0x99c958 */
  esp -= 4; W32(esp, 0x8cd12au); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8cd12a: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
L_8cd130: /* 8cd130: fld dword ptr [esi + 0x125c] */
  { double v = F32((uint32_t)(esi + 0x125cu)); FPUSH(v); }
/* 8cd136: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cd139: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8cd13c: mov edx, eax */
  edx = eax;
/* 8cd13e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8cd140: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cd143: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8cd146: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8cd149: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8cd14b: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8cd14e: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8cd151: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8cd153: fstp dword ptr [ebp - 0x15c] */
  WF32((uint32_t)(ebp + 0xfffffea4u), ST0); FPOP();
/* 8cd159: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8cd15b: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 8cd15e: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8cd161: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 8cd164: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 8cd167: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 8cd16a: fadd dword ptr [ebp - 0x15c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffea4u)));
/* 8cd170: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 8cd176: mov ecx, dword ptr [ebp - 0xb8] */
  ecx = R32((uint32_t)(ebp + 0xffffff48u));
/* 8cd17c: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8cd17e: fstp dword ptr [ebp - 0xb4] */
  WF32((uint32_t)(ebp + 0xffffff4cu), ST0); FPOP();
/* 8cd184: mov ecx, dword ptr [ebp - 0xb4] */
  ecx = R32((uint32_t)(ebp + 0xffffff4cu));
/* 8cd18a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8cd18d: fstp dword ptr [ebp - 0xb0] */
  WF32((uint32_t)(ebp + 0xffffff50u), ST0); FPOP();
/* 8cd193: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 8cd199: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8cd19c: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* 8cd1a2: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8cd1a4: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 8cd1aa: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8cd1ad: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 8cd1b3: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8cd1b6: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8cd1b9: lea eax, [ebp - 0x1f0] */
  eax = (uint32_t)(ebp + 0xfffffe10u);
/* 8cd1bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cd1c0: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cd1c3: call dword ptr [0xcfac50] */
  esp -= 4; W32(esp, 0x8cd1c9u); SPILL(); f_4e1c7b(); if (g_unwind) return; /* Core!?GetSRand@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 8cd1c9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8cd1cb: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cd1ce: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cd1d1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8cd1d3: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8cd1d6: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8cd1d9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8cd1dc: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8cd1df: mov eax, dword ptr [ebp - 0x7c] */
  eax = R32((uint32_t)(ebp + 0xffffff84u));
/* 8cd1e2: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cd1e5: mov dword ptr [ecx + 0x34], eax */
  W32((uint32_t)(ecx + 0x34u), eax);
/* 8cd1e8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cd1e9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cd1eb: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 8cd1ee: je 0x8cd2db */
  if (zf) goto L_8cd2db;
L_8cd1f4: /* 8cd1f4: mov eax, dword ptr [ebx + 0x40] */
  eax = R32((uint32_t)(ebx + 0x40u));
/* 8cd1f7: imul eax, dword ptr [ebp - 0x60] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffa0u)));
  eax = (uint32_t)r;
  }
/* 8cd1fb: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8cd1fc: idiv dword ptr [esi + 0x128c] */
  { int32_t d = (int32_t)R32((uint32_t)(esi + 0x128cu)); if (!d) d = (int32_t)guest_divzero(0x8cd1fc);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8cd202: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cd203: lea ecx, [ebp - 0x1c0] */
  ecx = (uint32_t)(ebp + 0xfffffe40u);
/* 8cd209: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8cd210: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 8cd213: mov eax, dword ptr [ebx + 0x44] */
  eax = R32((uint32_t)(ebx + 0x44u));
/* 8cd216: imul eax, dword ptr [ebp - 0x58] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffa8u)));
  eax = (uint32_t)r;
  }
/* 8cd21a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8cd21b: idiv dword ptr [esi + 0x1290] */
  { int32_t d = (int32_t)R32((uint32_t)(esi + 0x1290u)); if (!d) d = (int32_t)guest_divzero(0x8cd21b);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8cd221: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cd224: call 0x6c2f36 */
  esp -= 4; W32(esp, 0x8cd229u); SPILL(); f_6c2f36(); if (g_unwind) return; RELOAD();
/* 8cd229: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cd22b: lea ecx, [ebp - 0x1c0] */
  ecx = (uint32_t)(ebp + 0xfffffe40u);
/* 8cd231: call 0x6c68b6 */
  esp -= 4; W32(esp, 0x8cd236u); SPILL(); f_6c68b6(); if (g_unwind) return; RELOAD();
/* 8cd236: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cd238: je 0x8cd252 */
  if (zf) goto L_8cd252;
L_8cd23a: /* 8cd23a: cmp byte ptr [ebx + 0x38], 5 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x38u))); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8cd23e: jne 0x8cd252 */
  if (!zf) goto L_8cd252;
L_8cd240: /* 8cd240: mov ecx, dword ptr [ebx + 0x40] */
  ecx = R32((uint32_t)(ebx + 0x40u));
/* 8cd243: imul ecx, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  ecx = (uint32_t)r;
  }
/* 8cd247: add ecx, dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cd24a: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 8cd24d: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8cd250: jmp 0x8cd255 */
  goto L_8cd255;
L_8cd252: /* 8cd252: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
L_8cd255: /* 8cd255: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cd258: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* 8cd25b: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8cd25e: movzx eax, ah */
  eax = (uint32_t)(((eax >> 8) & 0xffu));
/* 8cd261: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8cd264: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8cd267: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8cd26d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cd270: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 8cd273: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8cd276: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8cd279: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8cd27f: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8cd282: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8cd288: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 8cd28e: mov edx, dword ptr [ebp - 0xc8] */
  edx = R32((uint32_t)(ebp + 0xffffff38u));
/* 8cd294: mov dword ptr [ebp - 0x140], edx */
  W32((uint32_t)(ebp + 0xfffffec0u), edx);
/* 8cd29a: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 8cd2a0: mov eax, dword ptr [ebp - 0xc4] */
  eax = R32((uint32_t)(ebp + 0xffffff3cu));
/* 8cd2a6: lea edx, [ebp - 0x140] */
  edx = (uint32_t)(ebp + 0xfffffec0u);
/* 8cd2ac: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 8cd2b2: mov ecx, dword ptr [ebp - 0xc0] */
  ecx = R32((uint32_t)(ebp + 0xffffff40u));
/* 8cd2b8: mov dword ptr [ebp - 0x138], ecx */
  W32((uint32_t)(ebp + 0xfffffec8u), ecx);
/* 8cd2be: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cd2c1: mov dword ptr [ebp - 0x13c], eax */
  W32((uint32_t)(ebp + 0xfffffec4u), eax);
/* 8cd2c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cd2c8: lea eax, [ebp - 0x1e4] */
  eax = (uint32_t)(ebp + 0xfffffe1cu);
/* 8cd2ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cd2cf: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cd2d2: call dword ptr [0xcfa528] */
  esp -= 4; W32(esp, 0x8cd2d8u); SPILL(); f_4e2374(); if (g_unwind) return; /* Core!??XFVector@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8cd2d8: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
L_8cd2db: /* 8cd2db: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8cd2de: mov eax, dword ptr [edx + 0x54] */
  eax = R32((uint32_t)(edx + 0x54u));
/* 8cd2e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cd2e3: je 0x8cd2fa */
  if (zf) goto L_8cd2fa;
L_8cd2e5: /* 8cd2e5: mov byte ptr [ebp - 0x5c], 0x7f */
  W8((uint32_t)(ebp + 0xffffffa4u), 0x7fu);
/* 8cd2e9: mov byte ptr [ebp - 0x5b], 0x7f */
  W8((uint32_t)(ebp + 0xffffffa5u), 0x7fu);
/* 8cd2ed: mov byte ptr [ebp - 0x5a], 0x7f */
  W8((uint32_t)(ebp + 0xffffffa6u), 0x7fu);
/* 8cd2f1: mov byte ptr [ebp - 0x59], 0xff */
  W8((uint32_t)(ebp + 0xffffffa7u), 0xffu);
/* 8cd2f5: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8cd2f8: jmp 0x8cd32a */
  goto L_8cd32a;
L_8cd2fa: /* 8cd2fa: mov edx, dword ptr [edi + 0x60] */
  edx = R32((uint32_t)(edi + 0x60u));
/* 8cd2fd: movzx eax, word ptr [edi + 0x90] */
  eax = (uint32_t)(R16((uint32_t)(edi + 0x90u)));
/* 8cd304: mov ebx, dword ptr [ebp - 0x3c] */
  ebx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8cd307: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8cd308: imul edx, dword ptr [ebp - 0x54] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffacu)));
  edx = (uint32_t)r;
  }
/* 8cd30c: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8cd30e: mov edx, dword ptr [edi + 0x8c] */
  edx = R32((uint32_t)(edi + 0x8cu));
/* 8cd314: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cd316: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 8cd319: mov ebx, dword ptr [esi + 0x134c] */
  ebx = R32((uint32_t)(esi + 0x134cu));
/* 8cd31f: mov edx, dword ptr [edx + ebx + 4] */
  edx = R32((uint32_t)(edx + ebx + 0x4u));
/* 8cd323: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 8cd326: mov eax, dword ptr [edx + eax*4 + 0x18] */
  eax = R32((uint32_t)(edx + eax*4 + 0x18u));
L_8cd32a: /* 8cd32a: mov dword ptr [ecx + 0x30], eax */
  W32((uint32_t)(ecx + 0x30u), eax);
/* 8cd32d: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 8cd330: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cd332: je 0x8cd423 */
  if (zf) goto L_8cd423;
L_8cd338: /* 8cd338: mov ebx, eax */
  ebx = eax;
/* 8cd33a: mov eax, dword ptr [ebx + 0x40] */
  eax = R32((uint32_t)(ebx + 0x40u));
/* 8cd33d: imul eax, dword ptr [ebp - 0x60] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffa0u)));
  eax = (uint32_t)r;
  }
/* 8cd341: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8cd342: idiv dword ptr [esi + 0x128c] */
  { int32_t d = (int32_t)R32((uint32_t)(esi + 0x128cu)); if (!d) d = (int32_t)guest_divzero(0x8cd342);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8cd348: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cd349: lea ecx, [ebp - 0x1ac] */
  ecx = (uint32_t)(ebp + 0xfffffe54u);
/* 8cd34f: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8cd356: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 8cd359: mov eax, dword ptr [ebx + 0x44] */
  eax = R32((uint32_t)(ebx + 0x44u));
/* 8cd35c: imul eax, dword ptr [ebp - 0x58] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffa8u)));
  eax = (uint32_t)r;
  }
/* 8cd360: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8cd361: idiv dword ptr [esi + 0x1290] */
  { int32_t d = (int32_t)R32((uint32_t)(esi + 0x1290u)); if (!d) d = (int32_t)guest_divzero(0x8cd361);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8cd367: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cd36a: call 0x6c2f36 */
  esp -= 4; W32(esp, 0x8cd36fu); SPILL(); f_6c2f36(); if (g_unwind) return; RELOAD();
/* 8cd36f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cd371: lea ecx, [ebp - 0x1ac] */
  ecx = (uint32_t)(ebp + 0xfffffe54u);
/* 8cd377: call 0x6c68b6 */
  esp -= 4; W32(esp, 0x8cd37cu); SPILL(); f_6c68b6(); if (g_unwind) return; RELOAD();
/* 8cd37c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cd37e: je 0x8cd398 */
  if (zf) goto L_8cd398;
L_8cd380: /* 8cd380: cmp byte ptr [ebx + 0x38], 5 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x38u))); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8cd384: jne 0x8cd398 */
  if (!zf) goto L_8cd398;
L_8cd386: /* 8cd386: mov ecx, dword ptr [ebx + 0x40] */
  ecx = R32((uint32_t)(ebx + 0x40u));
/* 8cd389: imul ecx, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  ecx = (uint32_t)r;
  }
/* 8cd38d: add ecx, dword ptr [ebp - 0x40] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cd390: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 8cd393: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8cd396: jmp 0x8cd39b */
  goto L_8cd39b;
L_8cd398: /* 8cd398: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
L_8cd39b: /* 8cd39b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cd39e: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cd3a1: shr edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8cd3a4: movzx edx, dl */
  edx = (uint32_t)((edx & 0xffu));
/* 8cd3a7: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8cd3aa: movzx ecx, ah */
  ecx = (uint32_t)(((eax >> 8) & 0xffu));
/* 8cd3ad: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8cd3b0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8cd3b3: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8cd3b9: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* 8cd3bc: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8cd3bf: movzx eax, byte ptr [ebx + 0x32] */
  eax = (uint32_t)(R8((uint32_t)(ebx + 0x32u)));
/* 8cd3c3: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8cd3c9: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8cd3cc: fstp dword ptr [ebp - 0x118] */
  WF32((uint32_t)(ebp + 0xfffffee8u), ST0); FPOP();
/* 8cd3d2: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8cd3d5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cd3d8: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8cd3de: fstp dword ptr [ebp - 0x114] */
  WF32((uint32_t)(ebp + 0xfffffeecu), ST0); FPOP();
/* 8cd3e4: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8cd3e7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8cd3e9: call 0x99c958 */
  esp -= 4; W32(esp, 0x8cd3eeu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8cd3ee: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8cd3f0: movzx ecx, byte ptr [ebx + 0x31] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x31u)));
/* 8cd3f4: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8cd3f7: mov byte ptr [ebx + 0x32], al */
  W8((uint32_t)(ebx + 0x32u), (eax & 0xffu));
/* 8cd3fa: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8cd3fd: fmul dword ptr [ebp - 0x118] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffee8u)));
/* 8cd403: call 0x99c958 */
  esp -= 4; W32(esp, 0x8cd408u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8cd408: movzx edx, byte ptr [ebx + 0x30] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x30u)));
/* 8cd40c: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8cd40f: mov byte ptr [ebx + 0x31], al */
  W8((uint32_t)(ebx + 0x31u), (eax & 0xffu));
/* 8cd412: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8cd415: fmul dword ptr [ebp - 0x114] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffeecu)));
/* 8cd41b: call 0x99c958 */
  esp -= 4; W32(esp, 0x8cd420u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8cd420: mov byte ptr [ebx + 0x30], al */
  W8((uint32_t)(ebx + 0x30u), (eax & 0xffu));
L_8cd423: /* 8cd423: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8cd426: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8cd429: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8cd42c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cd42d: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 8cd430: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8cd433: jmp 0x8ccc64 */
  goto L_8ccc64;
L_8cd438: /* 8cd438: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8cd43b: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8cd43e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8cd43f: jmp 0x8ccc08 */
  goto L_8ccc08;
L_8cd444: /* 8cd444: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cd445: jmp 0x8ccbfa */
  goto L_8ccbfa;
L_8cd44a: /* 8cd44a: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8cd44d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cd44e: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 8cd451: jmp 0x8ccb30 */
  goto L_8ccb30;
L_8cd48f: /* 8cd48f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cd492: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cd493: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cd494: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cd49b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cd49c: mov esp, ebp */
  esp = ebp;
/* 8cd49e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cd49f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8cd456(void) {
  LOAD_REGS();
L_8cd456: /* 8cd456: mov eax, dword ptr [ebp - 0x144] */
  eax = R32((uint32_t)(ebp + 0xfffffebcu));
/* 8cd45c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8cd461: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 8cd467: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cd468: mov dword ptr [ebp - 0xbc], eax */
  W32((uint32_t)(ebp + 0xffffff44u), eax);
/* 8cd46e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cd473u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8cd473(); return;
}

void f_8cd473(void) {
  LOAD_REGS();
L_8cd473: /* 8cd473: push 0xa1c528 */
  { uint32_t v = 0xa1c528u; esp -= 4; W32(esp, v); }
/* 8cd478: push 0xaeccac */
  { uint32_t v = 0xaeccacu; esp -= 4; W32(esp, v); }
/* 8cd47d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8cd483u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8cd483: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cd486: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cd488: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cd48a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cd48fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8cd48f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cd492: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cd493: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cd494: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cd49b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cd49c: mov esp, ebp */
  esp = ebp;
/* 8cd49e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cd49f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8cd740(void) {
  LOAD_REGS();
L_8cd740: /* 8cd740: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8cd741: mov ebp, esp */
  ebp = esp;
/* 8cd743: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8cd745: push 0x9d7d20 */
  { uint32_t v = 0x9d7d20u; esp -= 4; W32(esp, v); }
/* 8cd74a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8cd750: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cd751: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8cd758: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cd75b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cd75c: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 8cd75f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cd760: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8cd763: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cd764: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8cd767: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8cd769: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cd76a: mov ecx, ebx */
  ecx = ebx;
/* 8cd76c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8cd773: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8cd779u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8cd779: mov ecx, esi */
  ecx = esi;
/* 8cd77b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8cd781u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8cd781: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cd783: je 0x8cd815 */
  if (zf) goto L_8cd815;
L_8cd789: /* 8cd789: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8cd78c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cd78d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cd78e: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8cd794u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8cd794: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cd797: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cd79a: xor eax, eax */
  eax = 0;
/* 8cd79c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8cd7a0: /* 8cd7a0: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cd7a3: jge 0x8cd7a8 */
  if ((sf == of)) goto L_8cd7a8;
L_8cd7a5: /* 8cd7a5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cd7a6: jmp 0x8cd7a0 */
  goto L_8cd7a0;
L_8cd7a8: /* 8cd7a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cd7a9: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8cd7ab: mov ecx, ebx */
  ecx = ebx;
/* 8cd7ad: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8cd7b3u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8cd7b3: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
/* 8cd7b9: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_8cd7c0: /* 8cd7c0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cd7c3: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cd7c6: jge 0x8cd872 */
  if ((sf == of)) goto L_8cd872;
L_8cd7cc: /* 8cd7cc: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8cd7ce: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cd7d0: mov ecx, ebx */
  ecx = ebx;
/* 8cd7d2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cd7d8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cd7d8: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8cd7da: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8cd7dd: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cd7df: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8cd7e2: mov esi, eax */
  esi = eax;
/* 8cd7e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cd7e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cd7e6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8cd7e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cd7e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cd7eb: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8cd7ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cd7ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cd7f0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8cd7f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cd7f2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cd7f5: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 8cd7f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cd7f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cd7fa: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8cd7fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cd7fc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cd7ff: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8cd802: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cd803: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cd804: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8cd806u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cd806: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cd809: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8cd80c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cd80f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cd810: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cd813: jmp 0x8cd7c0 */
  goto L_8cd7c0;
L_8cd815: /* 8cd815: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* 8cd818: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cd819: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cd81a: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8cd820u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8cd820: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
/* 8cd826: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cd829: xor esi, esi */
  esi = 0;
/* 8cd82b: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 8cd82e: mov edi, edi */
  edi = edi;
L_8cd830: /* 8cd830: cmp esi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cd833: jge 0x8cd86f */
  if ((sf == of)) goto L_8cd86f;
L_8cd835: /* 8cd835: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8cd837: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8cd83a: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8cd83d: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8cd83f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cd840: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cd841: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8cd843u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cd843: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cd846: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8cd849: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cd84a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cd84b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8cd84du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cd84d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cd850: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 8cd853: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cd854: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cd855: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8cd857u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cd857: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cd85a: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8cd85d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cd85e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cd85f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8cd861u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cd861: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cd864: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cd867: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cd868: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cd86b: mov esi, eax */
  esi = eax;
/* 8cd86d: jmp 0x8cd830 */
  goto L_8cd830;
L_8cd86f: /* 8cd86f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_8cd872: /* 8cd872: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cd875: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cd876: mov eax, esi */
  eax = esi;
/* 8cd878: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cd879: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cd880: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cd881: mov esp, ebp */
  esp = ebp;
/* 8cd883: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cd884: ret  */
  esp += 4; SPILL(); return;
}

void f_8cd885(void) {
  LOAD_REGS();
L_8cd885: /* 8cd885: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cd888: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8cd88d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8cd890: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cd891: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8cd894: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cd899u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8cd899(); return;
}

void f_8cd899(void) {
  LOAD_REGS();
L_8cd899: /* 8cd899: push 0xa1c5f0 */
  { uint32_t v = 0xa1c5f0u; esp -= 4; W32(esp, v); }
/* 8cd89e: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8cd8a3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8cd8a9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8cd8a9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cd8ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cd8ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cd8b0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cd8b5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8cd8b5: guest_badaddr(0x8cd8b5); return;
}

void f_8cd920(void) {
  LOAD_REGS();
L_8cd920: /* 8cd920: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8cd921: mov ebp, esp */
  ebp = esp;
/* 8cd923: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8cd925: push 0x9d7d30 */
  { uint32_t v = 0x9d7d30u; esp -= 4; W32(esp, v); }
/* 8cd92a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8cd930: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cd931: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8cd938: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cd93b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cd93c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cd93d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8cd940: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cd941: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8cd944: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8cd947: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8cd949: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cd94a: mov ecx, esi */
  ecx = esi;
/* 8cd94c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8cd953: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8cd959u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8cd959: mov ecx, edi */
  ecx = edi;
/* 8cd95b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8cd961u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8cd961: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cd963: je 0x8cd9b1 */
  if (zf) goto L_8cd9b1;
L_8cd965: /* 8cd965: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8cd968: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cd969: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cd96a: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8cd970u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8cd970: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cd973: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cd976: xor eax, eax */
  eax = 0;
L_8cd978: /* 8cd978: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cd97b: jge 0x8cd980 */
  if ((sf == of)) goto L_8cd980;
L_8cd97d: /* 8cd97d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cd97e: jmp 0x8cd978 */
  goto L_8cd978;
L_8cd980: /* 8cd980: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cd981: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8cd983: mov ecx, esi */
  ecx = esi;
/* 8cd985: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8cd98bu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8cd98b: xor ebx, ebx */
  ebx = 0;
/* 8cd98d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8cd990: /* 8cd990: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cd993: jge 0x8cd9d6 */
  if ((sf == of)) goto L_8cd9d6;
L_8cd995: /* 8cd995: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8cd997: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cd999: mov ecx, esi */
  ecx = esi;
/* 8cd99b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cd9a1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cd9a1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8cd9a3: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8cd9a5: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8cd9a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cd9a9: mov ecx, edi */
  ecx = edi;
/* 8cd9ab: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8cd9aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cd9ae: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8cd9af: jmp 0x8cd990 */
  goto L_8cd990;
L_8cd9b1: /* 8cd9b1: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 8cd9b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cd9b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cd9b6: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8cd9bcu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8cd9bc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cd9bf: xor ebx, ebx */
  ebx = 0;
L_8cd9c1: /* 8cd9c1: cmp ebx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cd9c4: jge 0x8cd9d6 */
  if ((sf == of)) goto L_8cd9d6;
L_8cd9c6: /* 8cd9c6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8cd9c8: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8cd9ca: lea eax, [eax + ebx*4] */
  eax = (uint32_t)(eax + ebx*4);
/* 8cd9cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cd9ce: mov ecx, edi */
  ecx = edi;
/* 8cd9d0: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8cd9d3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cd9d3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8cd9d4: jmp 0x8cd9c1 */
  goto L_8cd9c1;
L_8cd9d6: /* 8cd9d6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cd9d9: mov eax, edi */
  eax = edi;
/* 8cd9db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cd9dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cd9dd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cd9e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cd9e5: mov esp, ebp */
  esp = ebp;
/* 8cd9e7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cd9e8: ret  */
  esp += 4; SPILL(); return;
}

void f_8cd9e9(void) {
  LOAD_REGS();
L_8cd9e9: /* 8cd9e9: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cd9ec: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8cd9f1: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8cd9f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cd9f5: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8cd9f8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cd9fdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8cd9fd(); return;
}

void f_8cd9fd(void) {
  LOAD_REGS();
L_8cd9fd: /* 8cd9fd: push 0xa1c608 */
  { uint32_t v = 0xa1c608u; esp -= 4; W32(esp, v); }
/* 8cda02: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8cda07: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8cda0du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8cda0d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cda10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cda12: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cda14: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cda19u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8cda19: guest_badaddr(0x8cda19); return;
}

void f_8cda60(void) {
  LOAD_REGS();
L_8cda60: /* 8cda60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8cda61: mov ebp, esp */
  ebp = esp;
/* 8cda63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8cda65: push 0x9d7d40 */
  { uint32_t v = 0x9d7d40u; esp -= 4; W32(esp, v); }
/* 8cda6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8cda70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cda71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8cda78: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cda7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cda7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cda7d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8cda80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cda81: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8cda84: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8cda87: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 8cda89: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cda8a: mov ecx, esi */
  ecx = esi;
/* 8cda8c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8cda93: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8cda99u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8cda99: mov ecx, edi */
  ecx = edi;
/* 8cda9b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8cdaa1u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8cdaa1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cdaa3: je 0x8cdb48 */
  if (zf) goto L_8cdb48;
L_8cdaa9: /* 8cdaa9: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8cdaac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdaad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cdaae: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8cdab4u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8cdab4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cdab7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdaba: xor eax, eax */
  eax = 0;
/* 8cdabc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8cdac0: /* 8cdac0: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cdac3: jge 0x8cdac8 */
  if ((sf == of)) goto L_8cdac8;
L_8cdac5: /* 8cdac5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cdac6: jmp 0x8cdac0 */
  goto L_8cdac0;
L_8cdac8: /* 8cdac8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cdac9: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 8cdacb: mov ecx, esi */
  ecx = esi;
/* 8cdacd: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8cdad3u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8cdad3: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
/* 8cdad9: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_8cdae0: /* 8cdae0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cdae3: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cdae6: jge 0x8cdbb6 */
  if ((sf == of)) goto L_8cdbb6;
L_8cdaec: /* 8cdaec: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 8cdaee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cdaf0: mov ecx, esi */
  ecx = esi;
/* 8cdaf2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cdaf8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cdaf8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8cdafb: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8cdafe: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8cdb00: lea esi, [eax + edx*8] */
  esi = (uint32_t)(eax + edx*8);
/* 8cdb03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cdb04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cdb05: lea ebx, [esi + 0xc] */
  ebx = (uint32_t)(esi + 0xcu);
/* 8cdb08: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8cdb0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdb0a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdb0d: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 8cdb10: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cdb11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdb12: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8cdb14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdb14: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdb17: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8cdb1a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cdb1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdb1c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8cdb1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdb1e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdb21: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cdb22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdb23: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8cdb25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdb25: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdb28: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 8cdb2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cdb2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdb2d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8cdb2fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdb2f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdb32: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8cdb35: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cdb36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdb37: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8cdb39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdb39: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cdb3c: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8cdb3f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdb42: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cdb43: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cdb46: jmp 0x8cdae0 */
  goto L_8cdae0;
L_8cdb48: /* 8cdb48: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 8cdb4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdb4c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cdb4d: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8cdb53u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8cdb53: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
/* 8cdb59: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdb5c: xor eax, eax */
  eax = 0;
/* 8cdb5e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_8cdb61: /* 8cdb61: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cdb64: jge 0x8cdbb6 */
  if ((sf == of)) goto L_8cdbb6;
L_8cdb66: /* 8cdb66: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8cdb69: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8cdb6c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8cdb6e: lea esi, [eax + edx*8] */
  esi = (uint32_t)(eax + edx*8);
/* 8cdb71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cdb72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cdb73: lea ebx, [esi + 0xc] */
  ebx = (uint32_t)(esi + 0xcu);
/* 8cdb76: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8cdb78u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdb78: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdb7b: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 8cdb7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cdb7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdb80: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8cdb82u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdb82: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdb85: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8cdb88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cdb89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdb8a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8cdb8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdb8c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdb8f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cdb90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdb91: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8cdb93u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdb93: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdb96: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 8cdb99: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cdb9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdb9b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8cdb9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdb9d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdba0: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8cdba3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cdba4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdba5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8cdba7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdba7: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cdbaa: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8cdbad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdbb0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cdbb1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cdbb4: jmp 0x8cdb61 */
  goto L_8cdb61;
L_8cdbb6: /* 8cdbb6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cdbb9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8cdbbc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cdbbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cdbbe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cdbc5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cdbc6: mov esp, ebp */
  esp = ebp;
/* 8cdbc8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cdbc9: ret  */
  esp += 4; SPILL(); return;
}

void f_8cdbca(void) {
  LOAD_REGS();
L_8cdbca: /* 8cdbca: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cdbcd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8cdbd2: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8cdbd5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdbd6: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8cdbd9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cdbdeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8cdbde(); return;
}

void f_8cdbde(void) {
  LOAD_REGS();
L_8cdbde: /* 8cdbde: push 0xa1c620 */
  { uint32_t v = 0xa1c620u; esp -= 4; W32(esp, v); }
/* 8cdbe3: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8cdbe8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8cdbeeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8cdbee: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdbf1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cdbf3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cdbf5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cdbfau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8cdbfa: guest_badaddr(0x8cdbfa); return;
}

void f_8cdc70(void) {
  LOAD_REGS();
L_8cdc70: /* 8cdc70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8cdc71: mov ebp, esp */
  ebp = esp;
/* 8cdc73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8cdc75: push 0x9d7d50 */
  { uint32_t v = 0x9d7d50u; esp -= 4; W32(esp, v); }
/* 8cdc7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8cdc80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdc81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8cdc88: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cdc8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cdc8c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8cdc8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cdc90: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8cdc93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cdc94: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8cdc97: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8cdc99: xor edi, edi */
  edi = 0;
/* 8cdc9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cdc9c: mov ecx, esi */
  ecx = esi;
/* 8cdc9e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8cdca1: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8cdca7u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8cdca7: mov ecx, ebx */
  ecx = ebx;
/* 8cdca9: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8cdcafu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8cdcaf: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8cdcb1: je 0x8cdd57 */
  if (zf) goto L_8cdd57;
L_8cdcb7: /* 8cdcb7: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8cdcba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdcbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cdcbc: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8cdcc2u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8cdcc2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cdcc5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdcc8: xor eax, eax */
  eax = 0;
/* 8cdcca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8cdcd0: /* 8cdcd0: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cdcd3: jge 0x8cdcd8 */
  if ((sf == of)) goto L_8cdcd8;
L_8cdcd5: /* 8cdcd5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cdcd6: jmp 0x8cdcd0 */
  goto L_8cdcd0;
L_8cdcd8: /* 8cdcd8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cdcd9: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8cdcdb: mov ecx, esi */
  ecx = esi;
/* 8cdcdd: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8cdce3u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8cdce3: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8cdce6: mov edi, dword ptr [0xcfa280] */
  edi = R32((uint32_t)(0xcfa280u));
/* 8cdcec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8cdcf0: /* 8cdcf0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cdcf3: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cdcf6: jge 0x8cddc0 */
  if ((sf == of)) goto L_8cddc0;
L_8cdcfc: /* 8cdcfc: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8cdcfe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cdd00: mov ecx, esi */
  ecx = esi;
/* 8cdd02: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cdd08u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cdd08: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8cdd0b: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8cdd0e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8cdd10: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 8cdd13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cdd14: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cdd15: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8cdd17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdd17: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdd1a: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 8cdd1d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cdd1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdd1f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8cdd21u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdd21: mov ebx, dword ptr [0xcfa1b4] */
  ebx = R32((uint32_t)(0xcfa1b4u));
/* 8cdd27: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdd2a: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 8cdd2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cdd2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdd2f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8cdd31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdd31: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdd34: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 8cdd37: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cdd38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdd39: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8cdd3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdd3b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdd3e: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8cdd41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cdd42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdd43: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8cdd45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdd45: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cdd48: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8cdd4b: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8cdd4e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdd51: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cdd52: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cdd55: jmp 0x8cdcf0 */
  goto L_8cdcf0;
L_8cdd57: /* 8cdd57: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 8cdd5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdd5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cdd5c: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8cdd62u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8cdd62: mov ebx, dword ptr [0xcfa280] */
  ebx = R32((uint32_t)(0xcfa280u));
/* 8cdd68: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdd6b: jmp 0x8cdd70 */
  goto L_8cdd70;
L_8cdd70: /* 8cdd70: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cdd73: jge 0x8cddbd */
  if ((sf == of)) goto L_8cddbd;
L_8cdd75: /* 8cdd75: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8cdd77: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8cdd7a: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 8cdd7d: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 8cdd80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cdd81: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cdd82: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8cdd84u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdd84: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdd87: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8cdd8a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cdd8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdd8c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8cdd8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdd8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdd91: lea edx, [esi + 0xc] */
  edx = (uint32_t)(esi + 0xcu);
/* 8cdd94: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cdd95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdd96: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x8cdd9cu); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 8cdd9c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdd9f: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 8cdda2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cdda3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdda4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8cdda6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdda6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdda9: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8cddac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cddad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cddae: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x8cddb4u); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 8cddb4: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8cddb7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cddba: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8cddbb: jmp 0x8cdd70 */
  goto L_8cdd70;
L_8cddbd: /* 8cddbd: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_8cddc0: /* 8cddc0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cddc3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cddc4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cddc5: mov eax, ebx */
  eax = ebx;
/* 8cddc7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cddce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cddcf: mov esp, ebp */
  esp = ebp;
/* 8cddd1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cddd2: ret  */
  esp += 4; SPILL(); return;
}

void f_8cdd6d(void) {
  LOAD_REGS();
L_8cdd6d: /* 8cdd6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8cdd70: /* 8cdd70: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cdd73: jge 0x8cddbd */
  if ((sf == of)) goto L_8cddbd;
L_8cdd75: /* 8cdd75: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8cdd77: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8cdd7a: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 8cdd7d: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 8cdd80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cdd81: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cdd82: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8cdd84u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdd84: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdd87: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8cdd8a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cdd8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdd8c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8cdd8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdd8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdd91: lea edx, [esi + 0xc] */
  edx = (uint32_t)(esi + 0xcu);
/* 8cdd94: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cdd95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdd96: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x8cdd9cu); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 8cdd9c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdd9f: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 8cdda2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cdda3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdda4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8cdda6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdda6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdda9: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8cddac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cddad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cddae: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x8cddb4u); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 8cddb4: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8cddb7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cddba: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8cddbb: jmp 0x8cdd70 */
  goto L_8cdd70;
L_8cddbd: /* 8cddbd: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8cddc0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cddc3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cddc4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cddc5: mov eax, ebx */
  eax = ebx;
/* 8cddc7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cddce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cddcf: mov esp, ebp */
  esp = ebp;
/* 8cddd1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cddd2: ret  */
  esp += 4; SPILL(); return;
}

void f_8cddd3(void) {
  LOAD_REGS();
L_8cddd3: /* 8cddd3: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cddd6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8cdddb: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8cddde: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdddf: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8cdde2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cdde7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8cdde7(); return;
}

void f_8cdde7(void) {
  LOAD_REGS();
L_8cdde7: /* 8cdde7: push 0xa1c638 */
  { uint32_t v = 0xa1c638u; esp -= 4; W32(esp, v); }
/* 8cddec: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8cddf1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8cddf7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8cddf7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cddfa: xor edi, edi */
  edi = 0;
/* 8cddfc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cddfd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cddfe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cde03u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8cde03: guest_badaddr(0x8cde03); return;
}

void f_8cde80(void) {
  LOAD_REGS();
L_8cde80: /* 8cde80: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8cde84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cde85: mov esi, dword ptr [0xcfa280] */
  esi = R32((uint32_t)(0xcfa280u));
/* 8cde8b: lea ecx, [eax + 0x20] */
  ecx = (uint32_t)(eax + 0x20u);
/* 8cde8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cde8f: lea edx, [eax + 0x1c] */
  edx = (uint32_t)(eax + 0x1cu);
/* 8cde92: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cde93: lea ecx, [eax + 0x18] */
  ecx = (uint32_t)(eax + 0x18u);
/* 8cde96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cde97: lea edx, [eax + 0x14] */
  edx = (uint32_t)(eax + 0x14u);
/* 8cde9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cde9b: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8cde9f: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 8cdea2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cdea3: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cdea6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdea7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cdea8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8cdeaau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdeaa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdead: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdeae: call 0x6c67cb */
  esp -= 4; W32(esp, 0x8cdeb3u); SPILL(); f_6c67cb(); if (g_unwind) return; RELOAD();
/* 8cdeb3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdeb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdeb7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8cdeb9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdeb9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdebc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdebd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8cdebfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdebf: mov esi, dword ptr [0xcfa27c] */
  esi = R32((uint32_t)(0xcfa27cu));
/* 8cdec5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdec8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdec9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8cdecbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdecb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdece: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdecf: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8cded1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cded1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cded4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cded5: ret  */
  esp += 4; SPILL(); return;
}

void f_8cdf00(void) {
  LOAD_REGS();
L_8cdf00: /* 8cdf00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cdf01: mov esi, ecx */
  esi = ecx;
/* 8cdf03: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8cdf06: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8cdf0cu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8cdf0c: mov eax, esi */
  eax = esi;
/* 8cdf0e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cdf0f: ret  */
  esp += 4; SPILL(); return;
}

void f_8cdf20(void) {
  LOAD_REGS();
L_8cdf20: /* 8cdf20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8cdf24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cdf25: mov esi, ecx */
  esi = ecx;
/* 8cdf27: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8cdf2a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 8cdf2c: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8cdf32u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8cdf32: mov eax, esi */
  eax = esi;
/* 8cdf34: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cdf35: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8cdf50(void) {
  LOAD_REGS();
L_8cdf50: /* 8cdf50: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8cdf54: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 8cdf57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cdf58: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8cdf5c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8cdf5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdf5f: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8cdf62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cdf62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdf63: call 0x6c90c5 */
  esp -= 4; W32(esp, 0x8cdf68u); SPILL(); f_6c90c5(); if (g_unwind) return; RELOAD();
/* 8cdf68: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdf6b: ret  */
  esp += 4; SPILL(); return;
}

void f_8cdf80(void) {
  LOAD_REGS();
L_8cdf80: /* 8cdf80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8cdf81: mov ebp, esp */
  ebp = esp;
/* 8cdf83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8cdf85: push 0x9d7d60 */
  { uint32_t v = 0x9d7d60u; esp -= 4; W32(esp, v); }
/* 8cdf8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8cdf90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdf91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8cdf98: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cdf9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cdf9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cdf9d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8cdfa0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cdfa1: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8cdfa4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8cdfa7: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 8cdfa9: xor ebx, ebx */
  ebx = 0;
/* 8cdfab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cdfac: mov ecx, esi */
  ecx = esi;
/* 8cdfae: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8cdfb1: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8cdfb7u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8cdfb7: mov ecx, edi */
  ecx = edi;
/* 8cdfb9: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8cdfbfu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8cdfbf: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8cdfc1: je 0x8ce02c */
  if (zf) goto L_8ce02c;
L_8cdfc3: /* 8cdfc3: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8cdfc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cdfc7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cdfc8: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8cdfceu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8cdfce: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cdfd1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cdfd4: xor eax, eax */
  eax = 0;
L_8cdfd6: /* 8cdfd6: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cdfd9: jge 0x8cdfde */
  if ((sf == of)) goto L_8cdfde;
L_8cdfdb: /* 8cdfdb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cdfdc: jmp 0x8cdfd6 */
  goto L_8cdfd6;
L_8cdfde: /* 8cdfde: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cdfdf: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 8cdfe1: mov ecx, esi */
  ecx = esi;
/* 8cdfe3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8cdfe9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8cdfe9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8cdff0: /* 8cdff0: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cdff3: jge 0x8ce060 */
  if ((sf == of)) goto L_8ce060;
L_8cdff5: /* 8cdff5: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 8cdff7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cdff9: mov ecx, esi */
  ecx = esi;
/* 8cdffb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8ce001u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8ce001: imul eax, eax, 0x38 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x38u);
  eax = (uint32_t)r;
  }
/* 8ce004: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8ce006: mov edi, eax */
  edi = eax;
/* 8ce008: je 0x8ce017 */
  if (zf) goto L_8ce017;
L_8ce00a: /* 8ce00a: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* 8ce00d: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x8ce013u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 8ce013: mov eax, edi */
  eax = edi;
/* 8ce015: jmp 0x8ce019 */
  goto L_8ce019;
L_8ce017: /* 8ce017: xor eax, eax */
  eax = 0;
L_8ce019: /* 8ce019: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8ce01c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ce01d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ce01e: call 0x6ca501 */
  esp -= 4; W32(esp, 0x8ce023u); SPILL(); f_6ca501(); if (g_unwind) return; RELOAD();
/* 8ce023: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8ce026: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ce029: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8ce02a: jmp 0x8cdff0 */
  goto L_8cdff0;
L_8ce02c: /* 8ce02c: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 8ce02f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ce030: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ce031: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8ce037u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8ce037: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ce03a: xor edi, edi */
  edi = 0;
/* 8ce03c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8ce040: /* 8ce040: cmp edi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ce042: jge 0x8ce05d */
  if ((sf == of)) goto L_8ce05d;
L_8ce044: /* 8ce044: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8ce046: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8ce049: mov edx, edi */
  edx = edi;
/* 8ce04b: imul edx, edx, 0x38 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x38u);
  edx = (uint32_t)r;
  }
/* 8ce04e: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8ce050: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ce051: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ce052: call 0x6ca501 */
  esp -= 4; W32(esp, 0x8ce057u); SPILL(); f_6ca501(); if (g_unwind) return; RELOAD();
/* 8ce057: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ce05a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8ce05b: jmp 0x8ce040 */
  goto L_8ce040;
L_8ce05d: /* 8ce05d: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_8ce060: /* 8ce060: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ce063: mov eax, edi */
  eax = edi;
/* 8ce065: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ce066: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ce067: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ce06e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ce06f: mov esp, ebp */
  esp = ebp;
/* 8ce071: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ce072: ret  */
  esp += 4; SPILL(); return;
}

void f_8ce073(void) {
  LOAD_REGS();
L_8ce073: /* 8ce073: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ce076: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ce07b: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 8ce07e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ce07f: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8ce082: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ce087u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ce087(); return;
}

void f_8ce087(void) {
  LOAD_REGS();
L_8ce087: /* 8ce087: push 0xa1c650 */
  { uint32_t v = 0xa1c650u; esp -= 4; W32(esp, v); }
/* 8ce08c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8ce091: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ce097u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ce097: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ce09a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ce09c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ce09e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ce0a3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ce0a3: guest_badaddr(0x8ce0a3); return;
}

void f_8ce100(void) {
  LOAD_REGS();
L_8ce100: /* 8ce100: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ce101: mov ebp, esp */
  ebp = esp;
/* 8ce103: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ce105: push 0x9d7d70 */
  { uint32_t v = 0x9d7d70u; esp -= 4; W32(esp, v); }
/* 8ce10a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ce110: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ce111: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ce118: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ce11b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ce11c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ce11d: mov esi, ecx */
  esi = ecx;
/* 8ce11f: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 8ce122: cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ce125: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ce126: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ce129: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ce130: je 0x8ce14a */
  if (zf) goto L_8ce14a;
L_8ce132: /* 8ce132: push 0x37e */
  { uint32_t v = 0x37eu; esp -= 4; W32(esp, v); }
/* 8ce137: push 0xaec900 */
  { uint32_t v = 0xaec900u; esp -= 4; W32(esp, v); }
/* 8ce13c: push 0xaec910 */
  { uint32_t v = 0xaec910u; esp -= 4; W32(esp, v); }
/* 8ce141: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8ce147u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8ce147: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8ce14a: /* 8ce14a: mov ecx, dword ptr [ebp + 0x38] */
  ecx = R32((uint32_t)(ebp + 0x38u));
/* 8ce14d: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 8ce150: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ce152: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ce153: mov ecx, dword ptr [ebp + 0x2c] */
  ecx = R32((uint32_t)(ebp + 0x2cu));
/* 8ce156: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ce159: mov edx, esp */
  edx = esp;
/* 8ce15b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8ce15d: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 8ce160: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8ce163: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8ce166: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 8ce169: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 8ce16c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ce16f: mov ecx, esp */
  ecx = esp;
/* 8ce171: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8ce173: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 8ce176: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8ce179: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8ce17c: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8ce17f: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8ce182: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ce185: mov eax, esp */
  eax = esp;
/* 8ce187: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8ce189: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8ce18c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8ce18f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8ce192: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8ce195: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 8ce198: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ce199: call 0x6c23d3 */
  esp -= 4; W32(esp, 0x8ce19eu); SPILL(); f_6c23d3(); if (g_unwind) return; RELOAD();
/* 8ce19e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ce1a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ce1a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ce1a3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ce1aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ce1ab: mov esp, ebp */
  esp = ebp;
/* 8ce1ad: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ce1ae: ret 0x34 */
  esp += 56; SPILL(); return;
}

void f_8ce1b1(void) {
  LOAD_REGS();
L_8ce1b1: /* 8ce1b1: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ce1b4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ce1b9: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8ce1bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ce1bd: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8ce1c0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ce1c5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ce1c5(); return;
}

void f_8ce1c5(void) {
  LOAD_REGS();
L_8ce1c5: /* 8ce1c5: push 0xa1c668 */
  { uint32_t v = 0xa1c668u; esp -= 4; W32(esp, v); }
/* 8ce1ca: push 0xaec91c */
  { uint32_t v = 0xaec91cu; esp -= 4; W32(esp, v); }
/* 8ce1cf: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ce1d5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ce1d5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ce1d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ce1da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ce1dc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ce1e1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ce1e1: guest_badaddr(0x8ce1e1); return;
}

void f_8ce230(void) {
  LOAD_REGS();
L_8ce230: /* 8ce230: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ce231: mov ebp, esp */
  ebp = esp;
/* 8ce233: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ce235: push 0x9d7d80 */
  { uint32_t v = 0x9d7d80u; esp -= 4; W32(esp, v); }
/* 8ce23a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ce240: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ce241: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ce248: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ce24b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ce24c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ce24d: mov esi, ecx */
  esi = ecx;
/* 8ce24f: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 8ce252: cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ce255: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ce256: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ce259: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ce260: je 0x8ce27a */
  if (zf) goto L_8ce27a;
L_8ce262: /* 8ce262: push 0x386 */
  { uint32_t v = 0x386u; esp -= 4; W32(esp, v); }
/* 8ce267: push 0xaec924 */
  { uint32_t v = 0xaec924u; esp -= 4; W32(esp, v); }
/* 8ce26c: push 0xaec934 */
  { uint32_t v = 0xaec934u; esp -= 4; W32(esp, v); }
/* 8ce271: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8ce277u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8ce277: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8ce27a: /* 8ce27a: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 8ce27d: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 8ce280: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ce282: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ce285: mov ecx, esp */
  ecx = esp;
/* 8ce287: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8ce289: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 8ce28c: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8ce28f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8ce292: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8ce295: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8ce298: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ce29b: mov eax, esp */
  eax = esp;
/* 8ce29d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8ce29f: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8ce2a2: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8ce2a5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8ce2a8: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8ce2ab: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 8ce2ae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ce2af: call 0x6c597f */
  esp -= 4; W32(esp, 0x8ce2b4u); SPILL(); f_6c597f(); if (g_unwind) return; RELOAD();
/* 8ce2b4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ce2b7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ce2b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ce2b9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ce2c0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ce2c1: mov esp, ebp */
  esp = ebp;
/* 8ce2c3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ce2c4: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_8ce2c7(void) {
  LOAD_REGS();
L_8ce2c7: /* 8ce2c7: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ce2ca: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ce2cf: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8ce2d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ce2d3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8ce2d6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ce2dbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ce2db(); return;
}

void f_8ce2db(void) {
  LOAD_REGS();
L_8ce2db: /* 8ce2db: push 0xa1c6b0 */
  { uint32_t v = 0xa1c6b0u; esp -= 4; W32(esp, v); }
/* 8ce2e0: push 0xaec940 */
  { uint32_t v = 0xaec940u; esp -= 4; W32(esp, v); }
/* 8ce2e5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ce2ebu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ce2eb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ce2ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ce2f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ce2f2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ce2f7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ce2f7: guest_badaddr(0x8ce2f7); return;
}

void f_8ce340(void) {
  LOAD_REGS();
L_8ce340: /* 8ce340: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ce341: mov ebp, esp */
  ebp = esp;
/* 8ce343: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ce345: push 0x9d7d90 */
  { uint32_t v = 0x9d7d90u; esp -= 4; W32(esp, v); }
/* 8ce34a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ce350: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ce351: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ce358: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ce35b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ce35c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8ce35f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ce360: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ce361: mov edi, ecx */
  edi = ecx;
/* 8ce363: xor eax, eax */
  eax = 0;
/* 8ce365: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ce368: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8ce36b: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 8ce36e: mov edi, edi */
  edi = edi;
L_8ce370: /* 8ce370: cmp eax, dword ptr [edi + 0x1344] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1344u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ce376: jge 0x8ce3bc */
  if ((sf == of)) goto L_8ce3bc;
L_8ce378: /* 8ce378: mov edx, dword ptr [edi + 0x1340] */
  edx = R32((uint32_t)(edi + 0x1340u));
/* 8ce37e: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 8ce381: mov esi, dword ptr [edx + ecx*4 + 0xc] */
  esi = R32((uint32_t)(edx + ecx*4 + 0xcu));
/* 8ce385: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 8ce388: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8ce38b: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ce38d: jne 0x8ce3b9 */
  if (!zf) goto L_8ce3b9;
L_8ce38f: /* 8ce38f: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 8ce392: cmp dword ptr [edx + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ce395: jne 0x8ce3b9 */
  if (!zf) goto L_8ce3b9;
L_8ce397: /* 8ce397: xor ecx, ecx */
  ecx = 0;
/* 8ce399: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8ce3a0: /* 8ce3a0: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ce3a2: jge 0x8ce421 */
  if ((sf == of)) goto L_8ce421;
L_8ce3a4: /* 8ce3a4: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 8ce3a6: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8ce3a8: mov edi, dword ptr [edi + ecx*4] */
  edi = R32((uint32_t)(edi + ecx*4));
/* 8ce3ab: cmp edi, dword ptr [ebx + ecx*4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + ecx*4)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ce3ae: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8ce3b1: jne 0x8ce3b6 */
  if (!zf) goto L_8ce3b6;
L_8ce3b3: /* 8ce3b3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8ce3b4: jmp 0x8ce3a0 */
  goto L_8ce3a0;
L_8ce3b6: /* 8ce3b6: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_8ce3b9: /* 8ce3b9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8ce3ba: jmp 0x8ce370 */
  goto L_8ce370;
L_8ce3bc: /* 8ce3bc: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8ce3be: lea esi, [edi + 0x1340] */
  esi = (uint32_t)(edi + 0x1340u);
/* 8ce3c4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ce3c6: mov ecx, esi */
  ecx = esi;
/* 8ce3c8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8ce3ceu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8ce3ce: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8ce3d1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8ce3d3: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 8ce3d6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ce3d8: je 0x8ce3e4 */
  if (zf) goto L_8ce3e4;
L_8ce3da: /* 8ce3da: mov ecx, esi */
  ecx = esi;
/* 8ce3dc: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8ce3e2u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8ce3e2: jmp 0x8ce3e6 */
  goto L_8ce3e6;
L_8ce3e4: /* 8ce3e4: xor esi, esi */
  esi = 0;
L_8ce3e6: /* 8ce3e6: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 8ce3ed: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 8ce3f0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8ce3f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ce3f3: mov ecx, esi */
  ecx = esi;
/* 8ce3f5: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8ce3fbu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8ce3fb: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 8ce3fe: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8ce400: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 8ce407: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8ce409: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ce40a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ce40b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ce40c: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8ce411u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8ce411: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8ce414: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 8ce417: mov eax, dword ptr [edi + 0x1344] */
  eax = R32((uint32_t)(edi + 0x1344u));
/* 8ce41d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ce420: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
L_8ce421: /* 8ce421: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ce424: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ce425: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ce426: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ce42d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ce42e: mov esp, ebp */
  esp = ebp;
/* 8ce430: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ce431: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8ce434(void) {
  LOAD_REGS();
L_8ce434: /* 8ce434: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ce437: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ce43c: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8ce43f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ce440: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8ce443: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ce448u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ce448(); return;
}

void f_8ce448(void) {
  LOAD_REGS();
L_8ce448: /* 8ce448: push 0xa1c6f8 */
  { uint32_t v = 0xa1c6f8u; esp -= 4; W32(esp, v); }
/* 8ce44d: push 0xaec9dc */
  { uint32_t v = 0xaec9dcu; esp -= 4; W32(esp, v); }
/* 8ce452: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ce458u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ce458: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ce45b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ce45d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ce45f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ce464u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ce464: guest_badaddr(0x8ce464); return;
}

void f_8ce4c0(void) {
  LOAD_REGS();
L_8ce4c0: /* 8ce4c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ce4c1: mov ebp, esp */
  ebp = esp;
/* 8ce4c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ce4c5: push 0x9d7da0 */
  { uint32_t v = 0x9d7da0u; esp -= 4; W32(esp, v); }
/* 8ce4ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ce4d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ce4d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ce4d8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ce4db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ce4dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ce4dd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8ce4e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ce4e1: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8ce4e4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ce4e7: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 8ce4e9: xor ebx, ebx */
  ebx = 0;
/* 8ce4eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ce4ec: mov ecx, edi */
  ecx = edi;
/* 8ce4ee: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8ce4f1: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8ce4f7u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8ce4f7: mov ecx, esi */
  ecx = esi;
/* 8ce4f9: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8ce4ffu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8ce4ff: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ce501: je 0x8ce57f */
  if (zf) goto L_8ce57f;
L_8ce503: /* 8ce503: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8ce506: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ce507: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ce508: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8ce50eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8ce50e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ce511: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ce514: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ce515: mov ecx, edi */
  ecx = edi;
/* 8ce517: call 0x6c7c0c */
  esp -= 4; W32(esp, 0x8ce51cu); SPILL(); f_6c7c0c(); if (g_unwind) return; RELOAD();
/* 8ce51c: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8ce51f: nop  */
L_8ce520: /* 8ce520: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ce523: cmp edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ce526: jge 0x8ce5af */
  if ((sf == of)) goto L_8ce5af;
L_8ce52c: /* 8ce52c: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 8ce52e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ce530: mov ecx, edi */
  ecx = edi;
/* 8ce532: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8ce538u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8ce538: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8ce53a: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 8ce53d: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 8ce540: xor ebx, ebx */
  ebx = 0;
/* 8ce542: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ce544: je 0x8ce564 */
  if (zf) goto L_8ce564;
L_8ce546: /* 8ce546: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 8ce549: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* 8ce550: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x8ce556u); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 8ce556: mov dword ptr [esi + 0x14], ebx */
  W32((uint32_t)(esi + 0x14u), ebx);
/* 8ce559: mov dword ptr [esi + 0x18], ebx */
  W32((uint32_t)(esi + 0x18u), ebx);
/* 8ce55c: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
/* 8ce55f: mov dword ptr [esi + 0x20], ebx */
  W32((uint32_t)(esi + 0x20u), ebx);
/* 8ce562: jmp 0x8ce566 */
  goto L_8ce566;
L_8ce564: /* 8ce564: xor esi, esi */
  esi = 0;
L_8ce566: /* 8ce566: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8ce569: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ce56a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ce56b: call 0x6c957f */
  esp -= 4; W32(esp, 0x8ce570u); SPILL(); f_6c957f(); if (g_unwind) return; RELOAD();
/* 8ce570: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ce573: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8ce576: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ce579: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8ce57a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8ce57d: jmp 0x8ce520 */
  goto L_8ce520;
L_8ce57f: /* 8ce57f: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* 8ce582: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ce583: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ce584: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8ce58au); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8ce58a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ce58d: xor esi, esi */
  esi = 0;
/* 8ce58f: nop  */
L_8ce590: /* 8ce590: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ce592: jge 0x8ce5ac */
  if ((sf == of)) goto L_8ce5ac;
L_8ce594: /* 8ce594: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8ce596: lea eax, [esi + esi*8] */
  eax = (uint32_t)(esi + esi*8);
/* 8ce599: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 8ce59c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8ce59f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ce5a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ce5a1: call 0x6c957f */
  esp -= 4; W32(esp, 0x8ce5a6u); SPILL(); f_6c957f(); if (g_unwind) return; RELOAD();
/* 8ce5a6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ce5a9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8ce5aa: jmp 0x8ce590 */
  goto L_8ce590;
L_8ce5ac: /* 8ce5ac: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_8ce5af: /* 8ce5af: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ce5b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ce5b3: mov eax, esi */
  eax = esi;
/* 8ce5b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ce5b6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ce5bd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ce5be: mov esp, ebp */
  esp = ebp;
/* 8ce5c0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ce5c1: ret  */
  esp += 4; SPILL(); return;
}

void f_8ce5c2(void) {
  LOAD_REGS();
L_8ce5c2: /* 8ce5c2: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8ce5c5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ce5ca: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 8ce5cd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ce5ce: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8ce5d1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ce5d6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ce5d6(); return;
}

void f_8ce5d6(void) {
  LOAD_REGS();
L_8ce5d6: /* 8ce5d6: push 0xa1c74c */
  { uint32_t v = 0xa1c74cu; esp -= 4; W32(esp, v); }
/* 8ce5db: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8ce5e0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ce5e6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ce5e6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ce5e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ce5eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ce5ed: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ce5f2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ce5f2: guest_badaddr(0x8ce5f2); return;
}

void f_8ce650(void) {
  LOAD_REGS();
L_8ce650: /* 8ce650: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ce651: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ce652: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ce653: mov esi, ecx */
  esi = ecx;
/* 8ce655: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ce656: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8ce659: mov dword ptr [esi], 0x9f8570 */
  W32((uint32_t)(esi), 0x9f8570u);
/* 8ce65f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8ce665u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8ce665: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 8ce66b: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 8ce66e: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 8ce671: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ce673: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 8ce678: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ce679: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ce67a: call 0x99c910 */
  esp -= 4; W32(esp, 0x8ce67fu); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 8ce67f: add eax, 0xe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 8ce684: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 8ce687: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 8ce68a: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 8ce68d: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 8ce693: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 8ce696: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8ce699: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ce69a: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 8ce69d: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 8ce6a0: mov dword ptr [esi + 0x18], 0 */
  W32((uint32_t)(esi + 0x18u), 0x0u);
/* 8ce6a7: mov eax, esi */
  eax = esi;
/* 8ce6a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ce6aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ce6ab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ce6ac: ret  */
  esp += 4; SPILL(); return;
}

void f_8ce6d0(void) {
  LOAD_REGS();
L_8ce6d0: /* 8ce6d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8ce6d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ce6d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ce6d6: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 8ce6da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ce6db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ce6dc: lea esi, [edi + 0xc] */
  esi = (uint32_t)(edi + 0xcu);
/* 8ce6df: call 0x6c265d */
  esp -= 4; W32(esp, 0x8ce6e4u); SPILL(); f_6c265d(); if (g_unwind) return; RELOAD();
/* 8ce6e4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ce6e7: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8ce6ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ce6eb: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 8ce6ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ce6ef: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 8ce6f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ce6f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ce6f4: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 8ce6fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ce6fb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8ce6fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ce6fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ce700: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ce701: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8ce703u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ce703: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ce706: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ce707: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8ce709u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ce709: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ce70c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ce70d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8ce70fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ce70f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ce712: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ce713: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ce714: ret  */
  esp += 4; SPILL(); return;
}

void f_8ce740(void) {
  LOAD_REGS();
L_8ce740: /* 8ce740: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8ce744: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ce745: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 8ce749: lea eax, [esi + 0xc] */
  eax = (uint32_t)(esi + 0xcu);
/* 8ce74c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ce74d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ce74e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ce74f: call 0x6c90bb */
  esp -= 4; W32(esp, 0x8ce754u); SPILL(); f_6c90bb(); if (g_unwind) return; RELOAD();
/* 8ce754: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ce757: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ce758: call dword ptr [0xcfa1b8] */
  esp -= 4; W32(esp, 0x8ce75eu); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* 8ce75e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8ce760: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ce763: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8ce766: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ce767: mov ecx, eax */
  ecx = eax;
/* 8ce769: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8ce76cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ce76c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ce76d: ret  */
  esp += 4; SPILL(); return;
}

void f_8ce780(void) {
  LOAD_REGS();
L_8ce780: /* 8ce780: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ce781: mov esi, ecx */
  esi = ecx;
/* 8ce783: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8ce789u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8ce789: mov eax, esi */
  eax = esi;
/* 8ce78b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ce78c: ret  */
  esp += 4; SPILL(); return;
}

void f_8ce7a0(void) {
  LOAD_REGS();
L_8ce7a0: /* 8ce7a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ce7a1: mov ebp, esp */
  ebp = esp;
/* 8ce7a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ce7a5: push 0x9d7dc0 */
  { uint32_t v = 0x9d7dc0u; esp -= 4; W32(esp, v); }
/* 8ce7aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ce7b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ce7b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ce7b8: sub esp, 0x90 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ce7be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ce7bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ce7c0: mov esi, ecx */
  esi = ecx;
/* 8ce7c2: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8ce7c5: mov edx, dword ptr [eax + 0x340] */
  edx = R32((uint32_t)(eax + 0x340u));
/* 8ce7cb: xor ecx, ecx */
  ecx = 0;
/* 8ce7cd: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ce7cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ce7d0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ce7d3: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 8ce7d6: je 0x8cf4d6 */
  if (zf) goto L_8cf4d6;
L_8ce7dc: /* 8ce7dc: cmp dword ptr [esi + 0x8c], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ce7e3: jne 0x8ce891 */
  if (!zf) goto L_8ce891;
L_8ce7e9: /* 8ce7e9: mov edi, dword ptr [esi + 0x64] */
  edi = R32((uint32_t)(esi + 0x64u));
/* 8ce7ec: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 8ce7ef: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8ce7f0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8ce7f1: imul edi, edx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(edx);
  edi = (uint32_t)r;
  }
/* 8ce7f4: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 8ce7fa: cmp dword ptr [edx], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ce7fc: jne 0x8ce82b */
  if (!zf) goto L_8ce82b;
L_8ce7fe: /* 8ce7fe: mov edi, edi */
  edi = edi;
L_8ce800: /* 8ce800: cmp ecx, dword ptr [eax + 0x1350] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1350u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ce806: jge 0x8ce82b */
  if ((sf == of)) goto L_8ce82b;
L_8ce808: /* 8ce808: mov ebx, dword ptr [eax + 0x134c] */
  ebx = R32((uint32_t)(eax + 0x134cu));
/* 8ce80e: mov edx, ecx */
  edx = ecx;
/* 8ce810: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 8ce813: mov edx, dword ptr [ebx + edx + 8] */
  edx = R32((uint32_t)(ebx + edx + 0x8u));
/* 8ce817: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8ce819: cmp edx, 0xffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ce81f: jge 0x8ce9ce */
  if ((sf == of)) goto L_8ce9ce;
L_8ce825: /* 8ce825: mov dword ptr [esi + 0x8c], ecx */
  W32((uint32_t)(esi + 0x8cu), ecx);
L_8ce82b: /* 8ce82b: cmp dword ptr [esi + 0x8c], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ce832: jne 0x8ce864 */
  if (!zf) goto L_8ce864;
L_8ce834: /* 8ce834: lea ebx, [eax + 0x134c] */
  ebx = (uint32_t)(eax + 0x134cu);
/* 8ce83a: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8ce83c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ce83e: mov ecx, ebx */
  ecx = ebx;
/* 8ce840: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8ce846u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8ce846: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 8ce849: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8ce84b: je 0x8ce854 */
  if (zf) goto L_8ce854;
L_8ce84d: /* 8ce84d: mov ecx, eax */
  ecx = eax;
/* 8ce84f: call 0x6cbf82 */
  esp -= 4; W32(esp, 0x8ce854u); SPILL(); f_6cbf82(); if (g_unwind) return; RELOAD();
L_8ce854: /* 8ce854: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8ce857: mov ecx, dword ptr [eax + 0x1350] */
  ecx = R32((uint32_t)(eax + 0x1350u));
/* 8ce85d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8ce85e: mov dword ptr [esi + 0x8c], ecx */
  W32((uint32_t)(esi + 0x8cu), ecx);
L_8ce864: /* 8ce864: mov ecx, dword ptr [esi + 0x8c] */
  ecx = R32((uint32_t)(esi + 0x8cu));
/* 8ce86a: mov edx, dword ptr [eax + 0x134c] */
  edx = R32((uint32_t)(eax + 0x134cu));
/* 8ce870: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 8ce873: mov edx, dword ptr [edx + ecx + 8] */
  edx = R32((uint32_t)(edx + ecx + 0x8u));
/* 8ce877: mov word ptr [esi + 0x90], dx */
  W16((uint32_t)(esi + 0x90u), (edx & 0xffffu));
/* 8ce87e: mov eax, dword ptr [eax + 0x134c] */
  eax = R32((uint32_t)(eax + 0x134cu));
/* 8ce884: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ce885: lea ecx, [eax + ecx + 4] */
  ecx = (uint32_t)(eax + ecx + 0x4u);
/* 8ce889: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 8ce88b: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8ce891u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
L_8ce891: /* 8ce891: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 8ce894: call dword ptr [0xcfa644] */
  esp -= 4; W32(esp, 0x8ce89au); SPILL(); f_4e303a(); if (g_unwind) return; /* Core!?Init@FBox@@QAEXXZ */ RELOAD();
/* 8ce89a: mov ecx, dword ptr [esi + 0x8c] */
  ecx = R32((uint32_t)(esi + 0x8cu));
/* 8ce8a0: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8ce8a3: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 8ce8a6: movzx eax, word ptr [esi + 0x90] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x90u)));
/* 8ce8ad: mov edx, dword ptr [edx + 0x134c] */
  edx = R32((uint32_t)(edx + 0x134cu));
/* 8ce8b3: mov ecx, dword ptr [ecx + edx + 4] */
  ecx = R32((uint32_t)(ecx + edx + 0x4u));
/* 8ce8b7: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 8ce8ba: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8ce8bd: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_8ce8c4: /* 8ce8c4: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ce8c7: cmp edx, dword ptr [esi + 0x64] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x64u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ce8ca: jg 0x8ce9dc */
  if ((!zf && sf == of)) goto L_8ce9dc;
L_8ce8d0: /* 8ce8d0: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8ce8d7: jmp 0x8ce8e0 */
  goto L_8ce8e0;
L_8ce8e0: /* 8ce8e0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ce8e3: cmp eax, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ce8e6: jg 0x8ce9d4 */
  if ((!zf && sf == of)) goto L_8ce9d4;
L_8ce8ec: /* 8ce8ec: mov edi, dword ptr [esi + 0x6c] */
  edi = R32((uint32_t)(esi + 0x6cu));
/* 8ce8ef: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ce8f2: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8ce8f5: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8ce8f8: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8ce8fa: imul edi, dword ptr [eax + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(eax + 0x128cu)));
  edi = (uint32_t)r;
  }
/* 8ce901: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ce904: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8ce906: mov edx, dword ptr [eax + 0x1280] */
  edx = R32((uint32_t)(eax + 0x1280u));
/* 8ce90c: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8ce90e: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 8ce911: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8ce914: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8ce916: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8ce919: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ce91a: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 8ce91d: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x8ce923u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 8ce923: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8ce926: mov ecx, dword ptr [eax + 0x1280] */
  ecx = R32((uint32_t)(eax + 0x1280u));
/* 8ce92c: add ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ce92f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ce931: mov edx, ebx */
  edx = ebx;
/* 8ce933: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8ce935: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8ce938: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8ce93b: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8ce93e: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8ce941: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 8ce944: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ce947: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8ce94a: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8ce94c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ce94d: add eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8ce950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ce951: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 8ce957: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ce958: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8ce95b: call 0x6c1677 */
  esp -= 4; W32(esp, 0x8ce960u); SPILL(); f_6c1677(); if (g_unwind) return; RELOAD();
/* 8ce960: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8ce962: lea edx, [ebx + 0xc] */
  edx = (uint32_t)(ebx + 0xcu);
/* 8ce965: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8ce967: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8ce96a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8ce96d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8ce970: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8ce973: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8ce976: mov edx, dword ptr [ecx + 0x1358] */
  edx = R32((uint32_t)(ecx + 0x1358u));
/* 8ce97c: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 8ce97f: mov dword ptr [ebx + 0x18], eax */
  W32((uint32_t)(ebx + 0x18u), eax);
/* 8ce982: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* 8ce985: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ce988: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8ce98b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ce98d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8ce990: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ce993: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ce996: add ebx, 0x24 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8ce999: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 8ce99f: fidiv dword ptr [edx + 0x128c] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(edx + 0x128cu)));
/* 8ce9a5: fstp dword ptr [ebx - 8] */
  WF32((uint32_t)(ebx + 0xfffffff8u), ST0); FPOP();
/* 8ce9a8: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 8ce9ab: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8ce9ae: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ce9b0: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8ce9b3: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ce9b6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8ce9b7: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8ce9ba: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 8ce9c0: fidiv dword ptr [edx + 0x1290] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(edx + 0x1290u)));
/* 8ce9c6: fstp dword ptr [ebx - 4] */
  WF32((uint32_t)(ebx + 0xfffffffcu), ST0); FPOP();
/* 8ce9c9: jmp 0x8ce8e0 */
  goto L_8ce8e0;
L_8ce9ce: /* 8ce9ce: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8ce9cf: jmp 0x8ce800 */
  goto L_8ce800;
L_8ce9d4: /* 8ce9d4: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 8ce9d7: jmp 0x8ce8c4 */
  goto L_8ce8c4;
L_8ce9dc: /* 8ce9dc: mov eax, dword ptr [esi + 0x8c] */
  eax = R32((uint32_t)(esi + 0x8cu));
/* 8ce9e2: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8ce9e5: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 8ce9e8: mov edx, dword ptr [ecx + 0x134c] */
  edx = R32((uint32_t)(ecx + 0x134cu));
/* 8ce9ee: mov ecx, dword ptr [eax + edx + 0x18] */
  ecx = R32((uint32_t)(eax + edx + 0x18u));
/* 8ce9f2: lea eax, [eax + edx + 0x18] */
  eax = (uint32_t)(eax + edx + 0x18u);
/* 8ce9f6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8ce9f7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8ce9f9: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 8ce9fc: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8cea02u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8cea02: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8cea06: xor edi, edi */
  edi = 0;
/* 8cea08: jmp 0x8cea10 */
  goto L_8cea10;
L_8cea10: /* 8cea10: cmp edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8cea13: jae 0x8ceaa7 */
  if (!cf) goto L_8ceaa7;
L_8cea19: /* 8cea19: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8cea1c: mov eax, edi */
  eax = edi;
/* 8cea1e: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 8cea21: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cea23: mov ecx, dword ptr [eax + 0x354] */
  ecx = R32((uint32_t)(eax + 0x354u));
/* 8cea29: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cea2b: je 0x8ceaa7 */
  if (zf) goto L_8ceaa7;
L_8cea2d: /* 8cea2d: mov ecx, dword ptr [eax + 0x350] */
  ecx = R32((uint32_t)(eax + 0x350u));
/* 8cea33: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cea35: je 0x8ceaa7 */
  if (zf) goto L_8ceaa7;
L_8cea37: /* 8cea37: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cea39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cea3a: mov ecx, esi */
  ecx = esi;
/* 8cea3c: call 0x6c290a */
  esp -= 4; W32(esp, 0x8cea41u); SPILL(); f_6c290a(); if (g_unwind) return; RELOAD();
/* 8cea41: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cea43: jne 0x8ceaa1 */
  if (!zf) goto L_8ceaa1;
L_8cea45: /* 8cea45: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
L_8cea48: /* 8cea48: cmp ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8cea4b: jae 0x8cea8e */
  if (!cf) goto L_8cea8e;
L_8cea4d: /* 8cea4d: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8cea50: mov edx, ebx */
  edx = ebx;
/* 8cea52: imul edx, edx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x78u);
  edx = (uint32_t)r;
  }
/* 8cea55: mov ecx, dword ptr [eax + edx + 0x354] */
  ecx = R32((uint32_t)(eax + edx + 0x354u));
/* 8cea5c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cea5e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cea60: je 0x8cea8e */
  if (zf) goto L_8cea8e;
L_8cea62: /* 8cea62: mov eax, dword ptr [eax + 0x350] */
  eax = R32((uint32_t)(eax + 0x350u));
/* 8cea68: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cea6a: je 0x8cea8e */
  if (zf) goto L_8cea8e;
L_8cea6c: /* 8cea6c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8cea6e: mov ecx, eax */
  ecx = eax;
/* 8cea70: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x8cea76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cea76: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cea78: jne 0x8cea8b */
  if (!zf) goto L_8cea8b;
L_8cea7a: /* 8cea7a: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* 8cea7f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cea80: mov ecx, esi */
  ecx = esi;
/* 8cea82: call 0x6c290a */
  esp -= 4; W32(esp, 0x8cea87u); SPILL(); f_6c290a(); if (g_unwind) return; RELOAD();
/* 8cea87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cea89: jne 0x8ceaa1 */
  if (!zf) goto L_8ceaa1;
L_8cea8b: /* 8cea8b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8cea8c: jmp 0x8cea48 */
  goto L_8cea48;
L_8cea8e: /* 8cea8e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8cea90: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cea92: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 8cea95: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cea9bu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cea9b: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8cea9e: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
L_8ceaa1: /* 8ceaa1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8ceaa2: jmp 0x8cea10 */
  goto L_8cea10;
L_8ceaa7: /* 8ceaa7: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8ceaaa: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 8ceab0: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8ceab3: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 8ceab6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceab8: je 0x8ceace */
  if (zf) goto L_8ceace;
L_8ceaba: /* 8ceaba: mov edx, ecx */
  edx = ecx;
/* 8ceabc: mov ecx, dword ptr [edx + 0x38] */
  ecx = R32((uint32_t)(edx + 0x38u));
/* 8ceabf: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ceac1: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x8ceac7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ceac7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8ceac9: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8ceacc: jmp 0x8cead5 */
  goto L_8cead5;
L_8ceace: /* 8ceace: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
L_8cead5: /* 8cead5: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 8ceadb: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ceade: jne 0x8ceb08 */
  if (!zf) goto L_8ceb08;
L_8ceae0: /* 8ceae0: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8ceae3: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 8ceae9: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8ceaec: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 8ceaef: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceaf1: je 0x8ceaff */
  if (zf) goto L_8ceaff;
L_8ceaf3: /* 8ceaf3: mov edx, ecx */
  edx = ecx;
/* 8ceaf5: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* 8ceaf8: mov ecx, dword ptr [eax + 0x60] */
  ecx = R32((uint32_t)(eax + 0x60u));
/* 8ceafb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceafd: jne 0x8ceb08 */
  if (!zf) goto L_8ceb08;
L_8ceaff: /* 8ceaff: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8ceb06: jmp 0x8ceb0f */
  goto L_8ceb0f;
L_8ceb08: /* 8ceb08: mov dword ptr [ebp - 0x34], 1 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x1u);
L_8ceb0f: /* 8ceb0f: lea edi, [esi + 0x28] */
  edi = (uint32_t)(esi + 0x28u);
/* 8ceb12: xor ebx, ebx */
  ebx = 0;
L_8ceb14: /* 8ceb14: cmp ebx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ceb17: jge 0x8ceb2d */
  if ((sf == of)) goto L_8ceb2d;
L_8ceb19: /* 8ceb19: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8ceb1b: lea ecx, [ebx + ebx*8] */
  ecx = (uint32_t)(ebx + ebx*8);
/* 8ceb1e: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8ceb21: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 8ceb24: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x8ceb2au); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 8ceb2a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8ceb2b: jmp 0x8ceb14 */
  goto L_8ceb14;
L_8ceb2d: /* 8ceb2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ceb2f: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 8ceb31: mov ecx, edi */
  ecx = edi;
/* 8ceb33: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8ceb39u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8ceb39: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8ceb3c: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8ceb42u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8ceb42: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8ceb46: xor edi, edi */
  edi = 0;
/* 8ceb48: jmp 0x8ceb50 */
  goto L_8ceb50;
L_8ceb50: /* 8ceb50: cmp edi, dword ptr [ebp - 0x60] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ceb53: jge 0x8ced45 */
  if ((sf == of)) goto L_8ced45;
L_8ceb59: /* 8ceb59: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8ceb5c: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 8ceb5f: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8ceb62: imul ecx, ecx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x78u);
  ecx = (uint32_t)r;
  }
/* 8ceb65: mov ebx, dword ptr [ecx + edx + 0x350] */
  ebx = R32((uint32_t)(ecx + edx + 0x350u));
/* 8ceb6c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceb6e: je 0x8ceb85 */
  if (zf) goto L_8ceb85;
L_8ceb70: /* 8ceb70: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 8ceb75: mov ecx, ebx */
  ecx = ebx;
/* 8ceb77: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8ceb7du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8ceb7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceb7f: je 0x8ceb85 */
  if (zf) goto L_8ceb85;
L_8ceb81: /* 8ceb81: mov ecx, ebx */
  ecx = ebx;
/* 8ceb83: jmp 0x8ceb87 */
  goto L_8ceb87;
L_8ceb85: /* 8ceb85: xor ecx, ecx */
  ecx = 0;
L_8ceb87: /* 8ceb87: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8ceb8a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceb8c: jne 0x8cecc2 */
  if (!zf) goto L_8cecc2;
L_8ceb92: /* 8ceb92: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceb94: je 0x8cecc2 */
  if (zf) goto L_8cecc2;
L_8ceb9a: /* 8ceb9a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ceb9c: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0x8ceba2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ceba2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceba4: jne 0x8cecc2 */
  if (!zf) goto L_8cecc2;
L_8cebaa: /* 8cebaa: mov ecx, dword ptr [0xcfa278] */
  ecx = R32((uint32_t)(0xcfa278u));
/* 8cebb0: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8cebb3: jne 0x8cecc2 */
  if (!zf) goto L_8cecc2;
L_8cebb9: /* 8cebb9: mov edx, dword ptr [0xcfab30] */
  edx = R32((uint32_t)(0xcfab30u));
/* 8cebbf: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8cebc2: jne 0x8cecc2 */
  if (!zf) goto L_8cecc2;
L_8cebc8: /* 8cebc8: cmp edi, dword ptr [ebp - 0x60] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cebcb: jge 0x8cec2a */
  if ((sf == of)) goto L_8cec2a;
L_8cebcd: /* 8cebcd: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8cebd0: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 8cebd3: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8cebd6: imul ecx, ecx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x78u);
  ecx = (uint32_t)r;
  }
/* 8cebd9: mov ebx, dword ptr [ecx + edx + 0x350] */
  ebx = R32((uint32_t)(ecx + edx + 0x350u));
/* 8cebe0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cebe2: je 0x8cec29 */
  if (zf) goto L_8cec29;
L_8cebe4: /* 8cebe4: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 8cebe9: mov ecx, ebx */
  ecx = ebx;
/* 8cebeb: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8cebf1u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8cebf1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cebf3: je 0x8cec29 */
  if (zf) goto L_8cec29;
L_8cebf5: /* 8cebf5: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8cebf7: mov ecx, ebx */
  ecx = ebx;
/* 8cebf9: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0x8cebffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cebff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cec01: jne 0x8cec29 */
  if (!zf) goto L_8cec29;
L_8cec03: /* 8cec03: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8cec06: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8cec08: lea ebx, [ecx + edi*4] */
  ebx = (uint32_t)(ecx + edi*4);
/* 8cec0b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cec0d: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8cec10: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cec16u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cec16: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8cec18: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8cec1b: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8cec1e: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8cec21: cmp edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cec24: jge 0x8cec2a */
  if ((sf == of)) goto L_8cec2a;
L_8cec26: /* 8cec26: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8cec27: jmp 0x8cebc8 */
  goto L_8cebc8;
L_8cec29: /* 8cec29: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_8cec2a: /* 8cec2a: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8cec2d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cec2f: je 0x8ced3f */
  if (zf) goto L_8ced3f;
L_8cec35: /* 8cec35: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 8cec37: lea ebx, [esi + 0x28] */
  ebx = (uint32_t)(esi + 0x28u);
/* 8cec3a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cec3c: mov ecx, ebx */
  ecx = ebx;
/* 8cec3e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cec44u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cec44: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8cec46: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 8cec49: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8cec4c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cec4e: je 0x8cec70 */
  if (zf) goto L_8cec70;
L_8cec50: /* 8cec50: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 8cec53: mov dword ptr [ebx + 4], 0xffffffff */
  W32((uint32_t)(ebx + 0x4u), 0xffffffffu);
/* 8cec5a: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x8cec60u); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 8cec60: xor eax, eax */
  eax = 0;
/* 8cec62: mov dword ptr [ebx + 0x14], eax */
  W32((uint32_t)(ebx + 0x14u), eax);
/* 8cec65: mov dword ptr [ebx + 0x18], eax */
  W32((uint32_t)(ebx + 0x18u), eax);
/* 8cec68: mov dword ptr [ebx + 0x1c], eax */
  W32((uint32_t)(ebx + 0x1cu), eax);
/* 8cec6b: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 8cec6e: jmp 0x8cec72 */
  goto L_8cec72;
L_8cec70: /* 8cec70: xor ebx, ebx */
  ebx = 0;
L_8cec72: /* 8cec72: cmp dword ptr [ebp - 0x54], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cec76: jle 0x8cec9e */
  if ((zf || sf != of)) goto L_8cec9e;
L_8cec78: /* 8cec78: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8cec7b: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 8cec81: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 8cec84: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 8cec87: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8cec89: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x8cec8fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cec8f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8cec92: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cec94: je 0x8cec9e */
  if (zf) goto L_8cec9e;
L_8cec96: /* 8cec96: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cec98: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 8cec9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cec9c: jmp 0x8ceca4 */
  goto L_8ceca4;
L_8cec9e: /* 8cec9e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ceca0: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8ceca3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_8ceca4: /* 8ceca4: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8ceca7: call 0x6c9309 */
  esp -= 4; W32(esp, 0x8cecacu); SPILL(); f_6c9309(); if (g_unwind) return; RELOAD();
/* 8cecac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cecae: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8cecb0: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8cecb3: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 8cecb6: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8cecbcu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8cecbc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8cecbd: jmp 0x8ceb50 */
  goto L_8ceb50;
L_8cecc2: /* 8cecc2: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8cecc5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8cecc7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cecc9: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8ceccc: lea ebx, [edx + edi*4] */
  ebx = (uint32_t)(edx + edi*4);
/* 8ceccf: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cecd5u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cecd5: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8cecd7: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8cecda: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 8cecdc: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 8cecdf: lea ebx, [esi + 0x28] */
  ebx = (uint32_t)(esi + 0x28u);
/* 8cece2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cece4: mov ecx, ebx */
  ecx = ebx;
/* 8cece6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cececu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cecec: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8cecee: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 8cecf1: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8cecf4: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cecf6: je 0x8ced18 */
  if (zf) goto L_8ced18;
L_8cecf8: /* 8cecf8: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 8cecfb: mov dword ptr [ebx + 4], 0xffffffff */
  W32((uint32_t)(ebx + 0x4u), 0xffffffffu);
/* 8ced02: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x8ced08u); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 8ced08: xor eax, eax */
  eax = 0;
/* 8ced0a: mov dword ptr [ebx + 0x14], eax */
  W32((uint32_t)(ebx + 0x14u), eax);
/* 8ced0d: mov dword ptr [ebx + 0x18], eax */
  W32((uint32_t)(ebx + 0x18u), eax);
/* 8ced10: mov dword ptr [ebx + 0x1c], eax */
  W32((uint32_t)(ebx + 0x1cu), eax);
/* 8ced13: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 8ced16: jmp 0x8ced1a */
  goto L_8ced1a;
L_8ced18: /* 8ced18: xor ebx, ebx */
  ebx = 0;
L_8ced1a: /* 8ced1a: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8ced1d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8ced1f: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* 8ced22: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ced23: call 0x6c9309 */
  esp -= 4; W32(esp, 0x8ced28u); SPILL(); f_6c9309(); if (g_unwind) return; RELOAD();
/* 8ced28: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ced2a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8ced2c: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8ced2f: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 8ced32: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8ced38u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8ced38: mov dword ptr [ebp - 0x34], 1 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x1u);
L_8ced3f: /* 8ced3f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8ced40: jmp 0x8ceb50 */
  goto L_8ceb50;
L_8ced45: /* 8ced45: xor ebx, ebx */
  ebx = 0;
L_8ced47: /* 8ced47: cmp ebx, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ced4a: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 8ced4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ced4f: jge 0x8cf10c */
  if ((sf == of)) goto L_8cf10c;
L_8ced55: /* 8ced55: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8ced58: lea edi, [ebx + ebx*8] */
  edi = (uint32_t)(ebx + ebx*8);
/* 8ced5b: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8ced5e: lea ecx, [edi + eax + 8] */
  ecx = (uint32_t)(edi + eax + 0x8u);
/* 8ced62: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8ced68u); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 8ced68: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8ced6b: xor ecx, ecx */
  ecx = 0;
/* 8ced6d: mov dword ptr [edi + edx + 0x14], ecx */
  W32((uint32_t)(edi + edx + 0x14u), ecx);
L_8ced71: /* 8ced71: cmp ecx, dword ptr [esi + 0x64] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ced74: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ced77: jge 0x8cf02c */
  if ((sf == of)) goto L_8cf02c;
L_8ced7d: /* 8ced7d: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
L_8ced84: /* 8ced84: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8ced87: cmp eax, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ced8a: jge 0x8cf026 */
  if ((sf == of)) goto L_8cf026;
L_8ced90: /* 8ced90: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8ced93: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 8ced96: mov edi, dword ptr [esi + 0x68] */
  edi = R32((uint32_t)(esi + 0x68u));
/* 8ced99: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8ced9c: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8ced9e: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8ceda4: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8ceda7: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ceda9: mov edi, dword ptr [eax + 0x131c] */
  edi = R32((uint32_t)(eax + 0x131cu));
/* 8cedaf: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cedb1: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 8cedb4: mov edx, ecx */
  edx = ecx;
/* 8cedb6: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8cedb9: mov ebx, 1 */
  ebx = 0x1u;
/* 8cedbe: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8cedc0: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8cedc3: test dword ptr [edi + edx*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + edx*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cedc6: je 0x8cf014 */
  if (zf) goto L_8cf014;
L_8cedcc: /* 8cedcc: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 8cedcf: movzx edx, word ptr [esi + 0x90] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x90u)));
/* 8cedd6: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cedd9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cedda: mov edi, ecx */
  edi = ecx;
/* 8ceddc: imul edi, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  edi = (uint32_t)r;
  }
/* 8cede0: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8cede2: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8cede4: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 8cede7: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8cedea: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ceded: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8cedee: imul ebx, ecx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(ecx);
  ebx = (uint32_t)r;
  }
/* 8cedf1: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8cedf3: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cedf6: lea ecx, [ebx + edx + 1] */
  ecx = (uint32_t)(ebx + edx + 0x1u);
/* 8cedfa: mov ebx, dword ptr [esi + 0x68] */
  ebx = R32((uint32_t)(esi + 0x68u));
/* 8cedfd: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8cee00: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8cee06: imul ecx, dword ptr [ebp - 0x30] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  ecx = (uint32_t)r;
  }
/* 8cee0a: mov eax, dword ptr [eax + 0x1328] */
  eax = R32((uint32_t)(eax + 0x1328u));
/* 8cee10: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cee12: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cee14: mov edx, ecx */
  edx = ecx;
/* 8cee16: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8cee19: mov ebx, 1 */
  ebx = 0x1u;
/* 8cee1e: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8cee20: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8cee23: test dword ptr [eax + edx*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cee26: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8cee29: je 0x8cef1d */
  if (zf) goto L_8cef1d;
L_8cee2f: /* 8cee2f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cee31: je 0x8cee4b */
  if (zf) goto L_8cee4b;
L_8cee33: /* 8cee33: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cee36: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cee39: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cee3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cee3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cee3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cee3f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cee40: mov ecx, esi */
  ecx = esi;
/* 8cee42: call 0x6cc1df */
  esp -= 4; W32(esp, 0x8cee47u); SPILL(); f_6cc1df(); if (g_unwind) return; RELOAD();
/* 8cee47: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cee49: je 0x8cee9d */
  if (zf) goto L_8cee9d;
L_8cee4b: /* 8cee4b: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8cee4e: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 8cee51: lea edi, [ebx + ebx*8] */
  edi = (uint32_t)(ebx + ebx*8);
/* 8cee54: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 8cee57: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8cee5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cee5b: lea ecx, [edi + ecx + 8] */
  ecx = (uint32_t)(edi + ecx + 0x8u);
/* 8cee5f: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cee65u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cee65: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cee68: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8cee69: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8cee6c: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cee6f: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 8cee72: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cee73: lea ecx, [edi + eax + 8] */
  ecx = (uint32_t)(edi + eax + 0x8u);
/* 8cee77: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cee7du); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cee7d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cee80: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cee83: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 8cee86: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8cee89: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cee8a: lea ecx, [edi + eax + 8] */
  ecx = (uint32_t)(edi + eax + 0x8u);
/* 8cee8e: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cee94u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cee94: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8cee97: lea eax, [edi + ecx + 0x14] */
  eax = (uint32_t)(edi + ecx + 0x14u);
/* 8cee9b: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
L_8cee9d: /* 8cee9d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cee9f: je 0x8ceebd */
  if (zf) goto L_8ceebd;
L_8ceea1: /* 8ceea1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ceea4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8ceea7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ceea9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ceeab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ceeac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ceead: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ceeae: mov ecx, esi */
  ecx = esi;
/* 8ceeb0: call 0x6cc1df */
  esp -= 4; W32(esp, 0x8ceeb5u); SPILL(); f_6cc1df(); if (g_unwind) return; RELOAD();
/* 8ceeb5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceeb7: je 0x8cf017 */
  if (zf) goto L_8cf017;
L_8ceebd: /* 8ceebd: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ceec0: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8ceec3: lea edi, [ebx + ebx*8] */
  edi = (uint32_t)(ebx + ebx*8);
/* 8ceec6: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8ceec9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8ceeca: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8ceecd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ceece: lea ecx, [edi + edx + 8] */
  ecx = (uint32_t)(edi + edx + 0x8u);
/* 8ceed2: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8ceed5: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8ceedbu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8ceedb: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8ceede: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ceee1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8ceee4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ceee5: lea ecx, [edi + edx + 8] */
  ecx = (uint32_t)(edi + edx + 0x8u);
/* 8ceee9: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8ceeec: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8ceef2u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8ceef2: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8ceef5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ceef8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8ceefb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ceefc: lea ecx, [edi + edx + 8] */
  ecx = (uint32_t)(edi + edx + 0x8u);
/* 8cef00: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8cef03: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cef09u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cef09: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cef0c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cef0f: lea edi, [edi + eax + 0x14] */
  edi = (uint32_t)(edi + eax + 0x14u);
/* 8cef13: inc dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi), r);
  }
/* 8cef15: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 8cef18: jmp 0x8ced84 */
  goto L_8ced84;
L_8cef1d: /* 8cef1d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cef1f: je 0x8cef39 */
  if (zf) goto L_8cef39;
L_8cef21: /* 8cef21: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cef24: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cef27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cef29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cef2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cef2c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cef2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cef2e: mov ecx, esi */
  ecx = esi;
/* 8cef30: call 0x6cc1df */
  esp -= 4; W32(esp, 0x8cef35u); SPILL(); f_6cc1df(); if (g_unwind) return; RELOAD();
/* 8cef35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cef37: je 0x8cef97 */
  if (zf) goto L_8cef97;
L_8cef39: /* 8cef39: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8cef3c: lea eax, [ebx + ebx*8] */
  eax = (uint32_t)(ebx + ebx*8);
/* 8cef3f: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8cef42: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cef45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cef46: lea ecx, [eax + edx + 8] */
  ecx = (uint32_t)(eax + edx + 0x8u);
/* 8cef4a: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8cef4d: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8cef50: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cef56u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cef56: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cef59: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8cef5c: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8cef5f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8cef60: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cef63: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 8cef66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cef67: lea ecx, [edx + ecx + 8] */
  ecx = (uint32_t)(edx + ecx + 0x8u);
/* 8cef6b: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cef71u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cef71: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cef74: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8cef77: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cef7a: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8cef7d: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cef80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cef81: lea ecx, [eax + edx + 8] */
  ecx = (uint32_t)(eax + edx + 0x8u);
/* 8cef85: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cef8bu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cef8b: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8cef8e: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8cef91: lea eax, [edx + ecx + 0x14] */
  eax = (uint32_t)(edx + ecx + 0x14u);
/* 8cef95: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
L_8cef97: /* 8cef97: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cef99: je 0x8cefb3 */
  if (zf) goto L_8cefb3;
L_8cef9b: /* 8cef9b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cef9e: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cefa1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cefa3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cefa5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cefa6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cefa7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cefa8: mov ecx, esi */
  ecx = esi;
/* 8cefaa: call 0x6cc1df */
  esp -= 4; W32(esp, 0x8cefafu); SPILL(); f_6cc1df(); if (g_unwind) return; RELOAD();
/* 8cefaf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cefb1: je 0x8cf017 */
  if (zf) goto L_8cf017;
L_8cefb3: /* 8cefb3: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cefb6: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8cefb9: lea edi, [ebx + ebx*8] */
  edi = (uint32_t)(ebx + ebx*8);
/* 8cefbc: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cefbf: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8cefc2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cefc3: lea ecx, [edi + eax + 8] */
  ecx = (uint32_t)(edi + eax + 0x8u);
/* 8cefc7: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cefcdu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cefcd: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cefd0: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cefd3: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cefd6: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8cefd9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cefda: lea ecx, [edi + eax + 8] */
  ecx = (uint32_t)(edi + eax + 0x8u);
/* 8cefde: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cefe4u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cefe4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cefe7: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cefea: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cefed: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8ceff0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ceff1: lea ecx, [edi + eax + 8] */
  ecx = (uint32_t)(edi + eax + 0x8u);
/* 8ceff5: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8ceffbu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8ceffb: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8ceffe: mov eax, dword ptr [edi + ecx + 0x14] */
  eax = R32((uint32_t)(edi + ecx + 0x14u));
/* 8cf002: lea edi, [edi + ecx + 0x14] */
  edi = (uint32_t)(edi + ecx + 0x14u);
/* 8cf006: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf009: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cf00a: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 8cf00c: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 8cf00f: jmp 0x8ced84 */
  goto L_8ced84;
L_8cf014: /* 8cf014: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
L_8cf017: /* 8cf017: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cf01a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf01d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cf01e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8cf021: jmp 0x8ced84 */
  goto L_8ced84;
L_8cf026: /* 8cf026: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cf027: jmp 0x8ced71 */
  goto L_8ced71;
L_8cf02c: /* 8cf02c: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8cf02f: lea edi, [ebx + ebx*8] */
  edi = (uint32_t)(ebx + ebx*8);
/* 8cf032: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8cf035: mov ecx, dword ptr [edi + edx + 0xc] */
  ecx = R32((uint32_t)(edi + edx + 0xcu));
/* 8cf039: lea eax, [edi + edx] */
  eax = (uint32_t)(edi + edx);
/* 8cf03c: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 8cf03f: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cf042: mov edx, dword ptr [eax + edi + 0x18] */
  edx = R32((uint32_t)(eax + edi + 0x18u));
/* 8cf046: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cf048: xor ecx, ecx */
  ecx = 0;
/* 8cf04a: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8cf04c: je 0x8cf0fa */
  if (zf) goto L_8cf0fa;
L_8cf052: /* 8cf052: mov dword ptr [eax + 0x1c], 0x7fffffff */
  W32((uint32_t)(eax + 0x1cu), 0x7fffffffu);
/* 8cf059: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8cf05c: mov dword ptr [edi + edx + 0x20], ecx */
  W32((uint32_t)(edi + edx + 0x20u), ecx);
/* 8cf060: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
L_8cf063: /* 8cf063: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cf066: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cf069: mov edx, dword ptr [eax + edi + 0x18] */
  edx = R32((uint32_t)(eax + edi + 0x18u));
/* 8cf06d: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cf06f: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cf071: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cf074: jge 0x8cf106 */
  if ((sf == of)) goto L_8cf106;
L_8cf07a: /* 8cf07a: mov edx, ecx */
  edx = ecx;
/* 8cf07c: mov ecx, eax */
  ecx = eax;
/* 8cf07e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cf07f: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cf082: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf088u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf088: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf08b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf08e: cmp eax, dword ptr [ecx + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8cf091: jae 0x8cf0b2 */
  if (!cf) goto L_8cf0b2;
L_8cf093: /* 8cf093: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8cf096: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cf099: lea eax, [edi + edx] */
  eax = (uint32_t)(edi + edx);
/* 8cf09c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf09d: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 8cf0a0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cf0a3: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf0a9u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf0a9: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf0ac: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf0af: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
L_8cf0b2: /* 8cf0b2: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8cf0b5: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cf0b8: lea eax, [edi + ecx] */
  eax = (uint32_t)(edi + ecx);
/* 8cf0bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cf0bc: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 8cf0bf: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cf0c2: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf0c8u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf0c8: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf0cb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf0ce: cmp eax, dword ptr [ecx + 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8cf0d1: jbe 0x8cf0f2 */
  if ((cf | zf)) goto L_8cf0f2;
L_8cf0d3: /* 8cf0d3: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8cf0d6: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cf0d9: lea eax, [edi + edx] */
  eax = (uint32_t)(edi + edx);
/* 8cf0dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf0dd: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 8cf0e0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cf0e3: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf0e9u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf0e9: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf0ec: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf0ef: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
L_8cf0f2: /* 8cf0f2: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 8cf0f5: jmp 0x8cf063 */
  goto L_8cf063;
L_8cf0fa: /* 8cf0fa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cf0fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cf0fd: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 8cf100: call 0x6cab8c */
  esp -= 4; W32(esp, 0x8cf105u); SPILL(); f_6cab8c(); if (g_unwind) return; RELOAD();
/* 8cf105: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
L_8cf106: /* 8cf106: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8cf107: jmp 0x8ced47 */
  goto L_8ced47;
L_8cf10c: /* 8cf10c: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* 8cf112: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8cf118u); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 8cf118: mov dword ptr [esi + 0xb0], 0 */
  W32((uint32_t)(esi + 0xb0u), 0x0u);
/* 8cf122: xor ecx, ecx */
  ecx = 0;
L_8cf124: /* 8cf124: cmp ecx, dword ptr [esi + 0x64] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cf127: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8cf12a: jge 0x8cf2b3 */
  if ((sf == of)) goto L_8cf2b3;
L_8cf130: /* 8cf130: xor ebx, ebx */
  ebx = 0;
L_8cf132: /* 8cf132: cmp ebx, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cf135: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 8cf138: jge 0x8cf2ad */
  if ((sf == of)) goto L_8cf2ad;
L_8cf13e: /* 8cf13e: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8cf141: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 8cf144: mov edi, dword ptr [esi + 0x68] */
  edi = R32((uint32_t)(esi + 0x68u));
/* 8cf147: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cf149: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8cf14f: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8cf152: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cf154: mov edi, dword ptr [eax + 0x131c] */
  edi = R32((uint32_t)(eax + 0x131cu));
/* 8cf15a: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cf15c: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8cf15f: mov edx, ecx */
  edx = ecx;
/* 8cf161: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8cf164: mov ebx, 1 */
  ebx = 0x1u;
/* 8cf169: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8cf16b: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8cf16e: test dword ptr [edi + edx*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + edx*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cf171: je 0x8cf2a1 */
  if (zf) goto L_8cf2a1;
L_8cf177: /* 8cf177: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 8cf17a: movzx edx, word ptr [esi + 0x90] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x90u)));
/* 8cf181: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8cf184: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cf185: mov edi, ecx */
  edi = ecx;
/* 8cf187: imul edi, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  edi = (uint32_t)r;
  }
/* 8cf18b: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8cf18d: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8cf18f: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 8cf192: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8cf195: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf198: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8cf199: imul ebx, ecx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(ecx);
  ebx = (uint32_t)r;
  }
/* 8cf19c: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8cf19e: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8cf1a1: lea ecx, [ebx + edx + 1] */
  ecx = (uint32_t)(ebx + edx + 0x1u);
/* 8cf1a5: mov ebx, dword ptr [esi + 0x68] */
  ebx = R32((uint32_t)(esi + 0x68u));
/* 8cf1a8: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8cf1ab: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8cf1b1: imul ecx, dword ptr [ebp - 0x24] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  ecx = (uint32_t)r;
  }
/* 8cf1b5: mov eax, dword ptr [eax + 0x1328] */
  eax = R32((uint32_t)(eax + 0x1328u));
/* 8cf1bb: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cf1bd: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cf1bf: mov edx, ecx */
  edx = ecx;
/* 8cf1c1: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8cf1c4: mov ebx, 1 */
  ebx = 0x1u;
/* 8cf1c9: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8cf1cb: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8cf1ce: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 8cf1d1: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8cf1d4: test ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cf1d6: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf1d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf1da: je 0x8cf234 */
  if (zf) goto L_8cf234;
L_8cf1dc: /* 8cf1dc: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 8cf1e2: mov ecx, edi */
  ecx = edi;
/* 8cf1e4: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf1eau); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf1ea: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cf1ed: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf1f0: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 8cf1f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cf1f2: mov ecx, edi */
  ecx = edi;
/* 8cf1f4: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 8cf1f7: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf1fdu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf1fd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cf200: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf203: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf204: mov ecx, edi */
  ecx = edi;
/* 8cf206: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cf209: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf20fu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf20f: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf212: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cf213: mov ecx, edi */
  ecx = edi;
/* 8cf215: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 8cf218: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf21eu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf21e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cf221: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf224: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf225: mov ecx, edi */
  ecx = edi;
/* 8cf227: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cf22a: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf230u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf230: mov ecx, edi */
  ecx = edi;
/* 8cf232: jmp 0x8cf28a */
  goto L_8cf28a;
L_8cf234: /* 8cf234: lea ebx, [esi + 0x98] */
  ebx = (uint32_t)(esi + 0x98u);
/* 8cf23a: mov ecx, ebx */
  ecx = ebx;
/* 8cf23c: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf242u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf242: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cf245: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf248: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8cf249: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cf24a: mov ecx, ebx */
  ecx = ebx;
/* 8cf24c: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cf24f: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf255u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf255: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cf258: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf25b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf25c: mov ecx, ebx */
  ecx = ebx;
/* 8cf25e: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cf261: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf267u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf267: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf26a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cf26b: mov ecx, ebx */
  ecx = ebx;
/* 8cf26d: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8cf270: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf276u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf276: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cf279: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf27c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf27d: mov ecx, ebx */
  ecx = ebx;
/* 8cf27f: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cf282: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf288u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf288: mov ecx, ebx */
  ecx = ebx;
L_8cf28a: /* 8cf28a: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cf28d: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf290: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cf291: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8cf294: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf29au); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf29a: add dword ptr [esi + 0xb0], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xb0u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0xb0u), r);
  }
L_8cf2a1: /* 8cf2a1: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8cf2a4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf2a7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8cf2a8: jmp 0x8cf132 */
  goto L_8cf132;
L_8cf2ad: /* 8cf2ad: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cf2ae: jmp 0x8cf124 */
  goto L_8cf124;
L_8cf2b3: /* 8cf2b3: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 8cf2b9: xor edi, edi */
  edi = 0;
/* 8cf2bb: mov dword ptr [esi + 0xb4], eax */
  W32((uint32_t)(esi + 0xb4u), eax);
/* 8cf2c1: mov dword ptr [esi + 0xb8], 0x7fffffff */
  W32((uint32_t)(esi + 0xb8u), 0x7fffffffu);
/* 8cf2cb: mov dword ptr [esi + 0xbc], edi */
  W32((uint32_t)(esi + 0xbcu), edi);
L_8cf2d1: /* 8cf2d1: cmp edi, dword ptr [esi + 0xb4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cf2d7: jge 0x8cf32e */
  if ((sf == of)) goto L_8cf32e;
L_8cf2d9: /* 8cf2d9: lea ebx, [esi + 0x98] */
  ebx = (uint32_t)(esi + 0x98u);
/* 8cf2df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cf2e0: mov ecx, ebx */
  ecx = ebx;
/* 8cf2e2: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf2e8u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf2e8: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf2eb: cmp ecx, dword ptr [esi + 0xb8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xb8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8cf2f1: jae 0x8cf305 */
  if (!cf) goto L_8cf305;
L_8cf2f3: /* 8cf2f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cf2f4: mov ecx, ebx */
  ecx = ebx;
/* 8cf2f6: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf2fcu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf2fc: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf2ff: mov dword ptr [esi + 0xb8], edx */
  W32((uint32_t)(esi + 0xb8u), edx);
L_8cf305: /* 8cf305: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cf306: mov ecx, ebx */
  ecx = ebx;
/* 8cf308: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf30eu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf30e: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf311: cmp eax, dword ptr [esi + 0xbc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xbcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8cf317: jbe 0x8cf32b */
  if ((cf | zf)) goto L_8cf32b;
L_8cf319: /* 8cf319: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cf31a: mov ecx, ebx */
  ecx = ebx;
/* 8cf31c: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf322u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf322: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf325: mov dword ptr [esi + 0xbc], ecx */
  W32((uint32_t)(esi + 0xbcu), ecx);
L_8cf32b: /* 8cf32b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8cf32c: jmp 0x8cf2d1 */
  goto L_8cf2d1;
L_8cf32e: /* 8cf32e: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* 8cf334: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 8cf337: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cf338: mov dword ptr [esi + 0xac], eax */
  W32((uint32_t)(esi + 0xacu), eax);
/* 8cf33e: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8cf341: mov edi, dword ptr [eax + 0x128c] */
  edi = R32((uint32_t)(eax + 0x128cu));
/* 8cf347: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8cf34a: mov ebx, edi */
  ebx = edi;
/* 8cf34c: imul ebx, ecx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(ecx);
  ebx = (uint32_t)r;
  }
/* 8cf34f: lea ecx, [ebx + edx] */
  ecx = (uint32_t)(ebx + edx);
/* 8cf352: mov edx, dword ptr [eax + 0x1280] */
  edx = R32((uint32_t)(eax + 0x1280u));
/* 8cf358: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 8cf35b: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8cf35e: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8cf360: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 8cf363: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8cf366: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8cf369: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 8cf36c: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 8cf36f: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 8cf372: add eax, dword ptr [esi + 0x6c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x6cu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cf375: mov ebx, dword ptr [esi + 0x68] */
  ebx = R32((uint32_t)(esi + 0x68u));
/* 8cf378: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 8cf37b: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cf37d: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8cf380: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8cf383: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 8cf385: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 8cf388: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 8cf38b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8cf38e: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8cf391: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 8cf394: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cf396: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8cf399: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 8cf39c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8cf39e: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8cf3a1: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8cf3a4: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8cf3a7: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 8cf3aa: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8cf3ad: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8cf3b0: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8cf3b3: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 8cf3b6: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8cf3b9: push 0x40000000 */
  { uint32_t v = 0x40000000u; esp -= 4; W32(esp, v); }
/* 8cf3be: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8cf3c1: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 8cf3c7: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8cf3ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cf3cb: fsub dword ptr [ebp - 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8cf3ce: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8cf3d1: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 8cf3d4: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 8cf3d7: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 8cf3da: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8cf3dd: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8cf3e0: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8cf3e3: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8cf3e6: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8cf3e9: fsub dword ptr [ebp - 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8cf3ec: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8cf3ef: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8cf3f2: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8cf3f5: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8cf3fbu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8cf3fb: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8cf3fe: push 0x40000000 */
  { uint32_t v = 0x40000000u; esp -= 4; W32(esp, v); }
/* 8cf403: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8cf406: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 8cf40c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf40d: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 8cf410: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8cf413: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8cf416: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8cf419: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8cf41c: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8cf41f: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8cf421: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 8cf427: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8cf42du); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8cf42d: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8cf430: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8cf433: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cf436: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8cf439: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8cf43c: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 8cf442: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8cf444: lea eax, [esi + 0x70] */
  eax = (uint32_t)(esi + 0x70u);
/* 8cf447: mov edx, eax */
  edx = eax;
/* 8cf449: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8cf44c: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8cf44f: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8cf451: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8cf454: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8cf457: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8cf45a: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8cf45d: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8cf460: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8cf463: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8cf466: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8cf468: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8cf46b: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8cf46e: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8cf471: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 8cf474: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8cf476: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8cf478: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8cf47a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8cf47c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8cf47e: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8cf480: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8cf482: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8cf484: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8cf487: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8cf489: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8cf48b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8cf48d: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8cf493u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8cf493: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8cf496: fst qword ptr [ebp - 0x28] */
  WF64((uint32_t)(ebp + 0xffffffd8u), ST0);
/* 8cf499: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cf49c: fstp dword ptr [esi + 0x7c] */
  WF32((uint32_t)(esi + 0x7cu), ST0); FPOP();
/* 8cf49f: add eax, 0x1274 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1274u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cf4a4: xor ecx, ecx */
  ecx = 0;
L_8cf4a6: /* 8cf4a6: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cf4a9: jge 0x8cf4be */
  if ((sf == of)) goto L_8cf4be;
L_8cf4ab: /* 8cf4ab: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8cf4ad: cmp dword ptr [edx + ecx*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8cf4b0: je 0x8cf4b5 */
  if (zf) goto L_8cf4b5;
L_8cf4b2: /* 8cf4b2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cf4b3: jmp 0x8cf4a6 */
  goto L_8cf4a6;
L_8cf4b5: /* 8cf4b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf4b6: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8cf4b9: call 0x6cc4be */
  esp -= 4; W32(esp, 0x8cf4beu); SPILL(); f_6cc4be(); if (g_unwind) return; RELOAD();
L_8cf4be: /* 8cf4be: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8cf4c1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8cf4c5: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8cf4cau); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8cf4ca: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 8cf4cd: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8cf4d1: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8cf4d6u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
L_8cf4d6: /* 8cf4d6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cf4d9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cf4da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cf4db: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cf4e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cf4e3: mov esp, ebp */
  esp = ebp;
/* 8cf4e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cf4e6: ret  */
  esp += 4; SPILL(); return;
}

void f_8ce8d9(void) {
  LOAD_REGS();
  goto L_8ce8d9;
L_8ce8c4: /* 8ce8c4: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ce8c7: cmp edx, dword ptr [esi + 0x64] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x64u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ce8ca: jg 0x8ce9dc */
  if ((!zf && sf == of)) goto L_8ce9dc;
L_8ce8d0: /* 8ce8d0: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8ce8d7: jmp 0x8ce8e0 */
  goto L_8ce8e0;
L_8ce8d9: /* 8ce8d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8ce8e0: /* 8ce8e0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ce8e3: cmp eax, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ce8e6: jg 0x8ce9d4 */
  if ((!zf && sf == of)) goto L_8ce9d4;
L_8ce8ec: /* 8ce8ec: mov edi, dword ptr [esi + 0x6c] */
  edi = R32((uint32_t)(esi + 0x6cu));
/* 8ce8ef: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ce8f2: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8ce8f5: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8ce8f8: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8ce8fa: imul edi, dword ptr [eax + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(eax + 0x128cu)));
  edi = (uint32_t)r;
  }
/* 8ce901: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ce904: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8ce906: mov edx, dword ptr [eax + 0x1280] */
  edx = R32((uint32_t)(eax + 0x1280u));
/* 8ce90c: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8ce90e: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 8ce911: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8ce914: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8ce916: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8ce919: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ce91a: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 8ce91d: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x8ce923u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 8ce923: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8ce926: mov ecx, dword ptr [eax + 0x1280] */
  ecx = R32((uint32_t)(eax + 0x1280u));
/* 8ce92c: add ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ce92f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ce931: mov edx, ebx */
  edx = ebx;
/* 8ce933: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8ce935: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8ce938: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8ce93b: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8ce93e: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8ce941: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 8ce944: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ce947: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8ce94a: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8ce94c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ce94d: add eax, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8ce950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ce951: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 8ce957: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ce958: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8ce95b: call 0x6c1677 */
  esp -= 4; W32(esp, 0x8ce960u); SPILL(); f_6c1677(); if (g_unwind) return; RELOAD();
/* 8ce960: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8ce962: lea edx, [ebx + 0xc] */
  edx = (uint32_t)(ebx + 0xcu);
/* 8ce965: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8ce967: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8ce96a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8ce96d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8ce970: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8ce973: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8ce976: mov edx, dword ptr [ecx + 0x1358] */
  edx = R32((uint32_t)(ecx + 0x1358u));
/* 8ce97c: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 8ce97f: mov dword ptr [ebx + 0x18], eax */
  W32((uint32_t)(ebx + 0x18u), eax);
/* 8ce982: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* 8ce985: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ce988: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8ce98b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ce98d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8ce990: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ce993: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ce996: add ebx, 0x24 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8ce999: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 8ce99f: fidiv dword ptr [edx + 0x128c] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(edx + 0x128cu)));
/* 8ce9a5: fstp dword ptr [ebx - 8] */
  WF32((uint32_t)(ebx + 0xfffffff8u), ST0); FPOP();
/* 8ce9a8: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 8ce9ab: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8ce9ae: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ce9b0: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8ce9b3: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ce9b6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8ce9b7: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8ce9ba: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 8ce9c0: fidiv dword ptr [edx + 0x1290] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(edx + 0x1290u)));
/* 8ce9c6: fstp dword ptr [ebx - 4] */
  WF32((uint32_t)(ebx + 0xfffffffcu), ST0); FPOP();
/* 8ce9c9: jmp 0x8ce8e0 */
  goto L_8ce8e0;
L_8ce9d4: /* 8ce9d4: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 8ce9d7: jmp 0x8ce8c4 */
  goto L_8ce8c4;
L_8ce9dc: /* 8ce9dc: mov eax, dword ptr [esi + 0x8c] */
  eax = R32((uint32_t)(esi + 0x8cu));
/* 8ce9e2: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8ce9e5: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 8ce9e8: mov edx, dword ptr [ecx + 0x134c] */
  edx = R32((uint32_t)(ecx + 0x134cu));
/* 8ce9ee: mov ecx, dword ptr [eax + edx + 0x18] */
  ecx = R32((uint32_t)(eax + edx + 0x18u));
/* 8ce9f2: lea eax, [eax + edx + 0x18] */
  eax = (uint32_t)(eax + edx + 0x18u);
/* 8ce9f6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8ce9f7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8ce9f9: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 8ce9fc: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8cea02u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8cea02: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8cea06: xor edi, edi */
  edi = 0;
/* 8cea08: jmp 0x8cea10 */
  goto L_8cea10;
L_8cea10: /* 8cea10: cmp edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8cea13: jae 0x8ceaa7 */
  if (!cf) goto L_8ceaa7;
L_8cea19: /* 8cea19: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8cea1c: mov eax, edi */
  eax = edi;
/* 8cea1e: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 8cea21: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cea23: mov ecx, dword ptr [eax + 0x354] */
  ecx = R32((uint32_t)(eax + 0x354u));
/* 8cea29: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cea2b: je 0x8ceaa7 */
  if (zf) goto L_8ceaa7;
L_8cea2d: /* 8cea2d: mov ecx, dword ptr [eax + 0x350] */
  ecx = R32((uint32_t)(eax + 0x350u));
/* 8cea33: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cea35: je 0x8ceaa7 */
  if (zf) goto L_8ceaa7;
L_8cea37: /* 8cea37: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cea39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cea3a: mov ecx, esi */
  ecx = esi;
/* 8cea3c: call 0x6c290a */
  esp -= 4; W32(esp, 0x8cea41u); SPILL(); f_6c290a(); if (g_unwind) return; RELOAD();
/* 8cea41: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cea43: jne 0x8ceaa1 */
  if (!zf) goto L_8ceaa1;
L_8cea45: /* 8cea45: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
L_8cea48: /* 8cea48: cmp ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8cea4b: jae 0x8cea8e */
  if (!cf) goto L_8cea8e;
L_8cea4d: /* 8cea4d: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8cea50: mov edx, ebx */
  edx = ebx;
/* 8cea52: imul edx, edx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x78u);
  edx = (uint32_t)r;
  }
/* 8cea55: mov ecx, dword ptr [eax + edx + 0x354] */
  ecx = R32((uint32_t)(eax + edx + 0x354u));
/* 8cea5c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cea5e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cea60: je 0x8cea8e */
  if (zf) goto L_8cea8e;
L_8cea62: /* 8cea62: mov eax, dword ptr [eax + 0x350] */
  eax = R32((uint32_t)(eax + 0x350u));
/* 8cea68: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cea6a: je 0x8cea8e */
  if (zf) goto L_8cea8e;
L_8cea6c: /* 8cea6c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8cea6e: mov ecx, eax */
  ecx = eax;
/* 8cea70: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x8cea76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cea76: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cea78: jne 0x8cea8b */
  if (!zf) goto L_8cea8b;
L_8cea7a: /* 8cea7a: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* 8cea7f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cea80: mov ecx, esi */
  ecx = esi;
/* 8cea82: call 0x6c290a */
  esp -= 4; W32(esp, 0x8cea87u); SPILL(); f_6c290a(); if (g_unwind) return; RELOAD();
/* 8cea87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cea89: jne 0x8ceaa1 */
  if (!zf) goto L_8ceaa1;
L_8cea8b: /* 8cea8b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8cea8c: jmp 0x8cea48 */
  goto L_8cea48;
L_8cea8e: /* 8cea8e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8cea90: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cea92: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 8cea95: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cea9bu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cea9b: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8cea9e: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
L_8ceaa1: /* 8ceaa1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8ceaa2: jmp 0x8cea10 */
  goto L_8cea10;
L_8ceaa7: /* 8ceaa7: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8ceaaa: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 8ceab0: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8ceab3: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 8ceab6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceab8: je 0x8ceace */
  if (zf) goto L_8ceace;
L_8ceaba: /* 8ceaba: mov edx, ecx */
  edx = ecx;
/* 8ceabc: mov ecx, dword ptr [edx + 0x38] */
  ecx = R32((uint32_t)(edx + 0x38u));
/* 8ceabf: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ceac1: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x8ceac7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ceac7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8ceac9: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8ceacc: jmp 0x8cead5 */
  goto L_8cead5;
L_8ceace: /* 8ceace: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
L_8cead5: /* 8cead5: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 8ceadb: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ceade: jne 0x8ceb08 */
  if (!zf) goto L_8ceb08;
L_8ceae0: /* 8ceae0: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8ceae3: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 8ceae9: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8ceaec: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 8ceaef: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceaf1: je 0x8ceaff */
  if (zf) goto L_8ceaff;
L_8ceaf3: /* 8ceaf3: mov edx, ecx */
  edx = ecx;
/* 8ceaf5: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* 8ceaf8: mov ecx, dword ptr [eax + 0x60] */
  ecx = R32((uint32_t)(eax + 0x60u));
/* 8ceafb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceafd: jne 0x8ceb08 */
  if (!zf) goto L_8ceb08;
L_8ceaff: /* 8ceaff: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8ceb06: jmp 0x8ceb0f */
  goto L_8ceb0f;
L_8ceb08: /* 8ceb08: mov dword ptr [ebp - 0x34], 1 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x1u);
L_8ceb0f: /* 8ceb0f: lea edi, [esi + 0x28] */
  edi = (uint32_t)(esi + 0x28u);
/* 8ceb12: xor ebx, ebx */
  ebx = 0;
L_8ceb14: /* 8ceb14: cmp ebx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ceb17: jge 0x8ceb2d */
  if ((sf == of)) goto L_8ceb2d;
L_8ceb19: /* 8ceb19: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8ceb1b: lea ecx, [ebx + ebx*8] */
  ecx = (uint32_t)(ebx + ebx*8);
/* 8ceb1e: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8ceb21: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 8ceb24: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x8ceb2au); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 8ceb2a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8ceb2b: jmp 0x8ceb14 */
  goto L_8ceb14;
L_8ceb2d: /* 8ceb2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ceb2f: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 8ceb31: mov ecx, edi */
  ecx = edi;
/* 8ceb33: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8ceb39u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8ceb39: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8ceb3c: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8ceb42u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8ceb42: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8ceb46: xor edi, edi */
  edi = 0;
/* 8ceb48: jmp 0x8ceb50 */
  goto L_8ceb50;
L_8ceb50: /* 8ceb50: cmp edi, dword ptr [ebp - 0x60] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ceb53: jge 0x8ced45 */
  if ((sf == of)) goto L_8ced45;
L_8ceb59: /* 8ceb59: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8ceb5c: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 8ceb5f: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8ceb62: imul ecx, ecx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x78u);
  ecx = (uint32_t)r;
  }
/* 8ceb65: mov ebx, dword ptr [ecx + edx + 0x350] */
  ebx = R32((uint32_t)(ecx + edx + 0x350u));
/* 8ceb6c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceb6e: je 0x8ceb85 */
  if (zf) goto L_8ceb85;
L_8ceb70: /* 8ceb70: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 8ceb75: mov ecx, ebx */
  ecx = ebx;
/* 8ceb77: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8ceb7du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8ceb7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceb7f: je 0x8ceb85 */
  if (zf) goto L_8ceb85;
L_8ceb81: /* 8ceb81: mov ecx, ebx */
  ecx = ebx;
/* 8ceb83: jmp 0x8ceb87 */
  goto L_8ceb87;
L_8ceb85: /* 8ceb85: xor ecx, ecx */
  ecx = 0;
L_8ceb87: /* 8ceb87: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8ceb8a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceb8c: jne 0x8cecc2 */
  if (!zf) goto L_8cecc2;
L_8ceb92: /* 8ceb92: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceb94: je 0x8cecc2 */
  if (zf) goto L_8cecc2;
L_8ceb9a: /* 8ceb9a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ceb9c: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0x8ceba2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ceba2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceba4: jne 0x8cecc2 */
  if (!zf) goto L_8cecc2;
L_8cebaa: /* 8cebaa: mov ecx, dword ptr [0xcfa278] */
  ecx = R32((uint32_t)(0xcfa278u));
/* 8cebb0: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8cebb3: jne 0x8cecc2 */
  if (!zf) goto L_8cecc2;
L_8cebb9: /* 8cebb9: mov edx, dword ptr [0xcfab30] */
  edx = R32((uint32_t)(0xcfab30u));
/* 8cebbf: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8cebc2: jne 0x8cecc2 */
  if (!zf) goto L_8cecc2;
L_8cebc8: /* 8cebc8: cmp edi, dword ptr [ebp - 0x60] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cebcb: jge 0x8cec2a */
  if ((sf == of)) goto L_8cec2a;
L_8cebcd: /* 8cebcd: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8cebd0: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 8cebd3: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8cebd6: imul ecx, ecx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x78u);
  ecx = (uint32_t)r;
  }
/* 8cebd9: mov ebx, dword ptr [ecx + edx + 0x350] */
  ebx = R32((uint32_t)(ecx + edx + 0x350u));
/* 8cebe0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cebe2: je 0x8cec29 */
  if (zf) goto L_8cec29;
L_8cebe4: /* 8cebe4: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 8cebe9: mov ecx, ebx */
  ecx = ebx;
/* 8cebeb: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8cebf1u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8cebf1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cebf3: je 0x8cec29 */
  if (zf) goto L_8cec29;
L_8cebf5: /* 8cebf5: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8cebf7: mov ecx, ebx */
  ecx = ebx;
/* 8cebf9: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0x8cebffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cebff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cec01: jne 0x8cec29 */
  if (!zf) goto L_8cec29;
L_8cec03: /* 8cec03: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8cec06: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8cec08: lea ebx, [ecx + edi*4] */
  ebx = (uint32_t)(ecx + edi*4);
/* 8cec0b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cec0d: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8cec10: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cec16u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cec16: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8cec18: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8cec1b: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8cec1e: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8cec21: cmp edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cec24: jge 0x8cec2a */
  if ((sf == of)) goto L_8cec2a;
L_8cec26: /* 8cec26: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8cec27: jmp 0x8cebc8 */
  goto L_8cebc8;
L_8cec29: /* 8cec29: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_8cec2a: /* 8cec2a: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8cec2d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cec2f: je 0x8ced3f */
  if (zf) goto L_8ced3f;
L_8cec35: /* 8cec35: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 8cec37: lea ebx, [esi + 0x28] */
  ebx = (uint32_t)(esi + 0x28u);
/* 8cec3a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cec3c: mov ecx, ebx */
  ecx = ebx;
/* 8cec3e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cec44u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cec44: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8cec46: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 8cec49: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8cec4c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cec4e: je 0x8cec70 */
  if (zf) goto L_8cec70;
L_8cec50: /* 8cec50: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 8cec53: mov dword ptr [ebx + 4], 0xffffffff */
  W32((uint32_t)(ebx + 0x4u), 0xffffffffu);
/* 8cec5a: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x8cec60u); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 8cec60: xor eax, eax */
  eax = 0;
/* 8cec62: mov dword ptr [ebx + 0x14], eax */
  W32((uint32_t)(ebx + 0x14u), eax);
/* 8cec65: mov dword ptr [ebx + 0x18], eax */
  W32((uint32_t)(ebx + 0x18u), eax);
/* 8cec68: mov dword ptr [ebx + 0x1c], eax */
  W32((uint32_t)(ebx + 0x1cu), eax);
/* 8cec6b: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 8cec6e: jmp 0x8cec72 */
  goto L_8cec72;
L_8cec70: /* 8cec70: xor ebx, ebx */
  ebx = 0;
L_8cec72: /* 8cec72: cmp dword ptr [ebp - 0x54], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cec76: jle 0x8cec9e */
  if ((zf || sf != of)) goto L_8cec9e;
L_8cec78: /* 8cec78: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8cec7b: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 8cec81: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 8cec84: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 8cec87: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8cec89: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x8cec8fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cec8f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8cec92: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cec94: je 0x8cec9e */
  if (zf) goto L_8cec9e;
L_8cec96: /* 8cec96: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cec98: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 8cec9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cec9c: jmp 0x8ceca4 */
  goto L_8ceca4;
L_8cec9e: /* 8cec9e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ceca0: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8ceca3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_8ceca4: /* 8ceca4: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8ceca7: call 0x6c9309 */
  esp -= 4; W32(esp, 0x8cecacu); SPILL(); f_6c9309(); if (g_unwind) return; RELOAD();
/* 8cecac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cecae: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8cecb0: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8cecb3: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 8cecb6: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8cecbcu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8cecbc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8cecbd: jmp 0x8ceb50 */
  goto L_8ceb50;
L_8cecc2: /* 8cecc2: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8cecc5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8cecc7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cecc9: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8ceccc: lea ebx, [edx + edi*4] */
  ebx = (uint32_t)(edx + edi*4);
/* 8ceccf: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cecd5u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cecd5: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8cecd7: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8cecda: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 8cecdc: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 8cecdf: lea ebx, [esi + 0x28] */
  ebx = (uint32_t)(esi + 0x28u);
/* 8cece2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cece4: mov ecx, ebx */
  ecx = ebx;
/* 8cece6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cececu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cecec: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8cecee: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 8cecf1: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8cecf4: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cecf6: je 0x8ced18 */
  if (zf) goto L_8ced18;
L_8cecf8: /* 8cecf8: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 8cecfb: mov dword ptr [ebx + 4], 0xffffffff */
  W32((uint32_t)(ebx + 0x4u), 0xffffffffu);
/* 8ced02: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x8ced08u); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 8ced08: xor eax, eax */
  eax = 0;
/* 8ced0a: mov dword ptr [ebx + 0x14], eax */
  W32((uint32_t)(ebx + 0x14u), eax);
/* 8ced0d: mov dword ptr [ebx + 0x18], eax */
  W32((uint32_t)(ebx + 0x18u), eax);
/* 8ced10: mov dword ptr [ebx + 0x1c], eax */
  W32((uint32_t)(ebx + 0x1cu), eax);
/* 8ced13: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 8ced16: jmp 0x8ced1a */
  goto L_8ced1a;
L_8ced18: /* 8ced18: xor ebx, ebx */
  ebx = 0;
L_8ced1a: /* 8ced1a: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8ced1d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8ced1f: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* 8ced22: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ced23: call 0x6c9309 */
  esp -= 4; W32(esp, 0x8ced28u); SPILL(); f_6c9309(); if (g_unwind) return; RELOAD();
/* 8ced28: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ced2a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8ced2c: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8ced2f: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 8ced32: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8ced38u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8ced38: mov dword ptr [ebp - 0x34], 1 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x1u);
L_8ced3f: /* 8ced3f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8ced40: jmp 0x8ceb50 */
  goto L_8ceb50;
L_8ced45: /* 8ced45: xor ebx, ebx */
  ebx = 0;
L_8ced47: /* 8ced47: cmp ebx, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ced4a: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 8ced4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ced4f: jge 0x8cf10c */
  if ((sf == of)) goto L_8cf10c;
L_8ced55: /* 8ced55: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8ced58: lea edi, [ebx + ebx*8] */
  edi = (uint32_t)(ebx + ebx*8);
/* 8ced5b: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8ced5e: lea ecx, [edi + eax + 8] */
  ecx = (uint32_t)(edi + eax + 0x8u);
/* 8ced62: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8ced68u); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 8ced68: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8ced6b: xor ecx, ecx */
  ecx = 0;
/* 8ced6d: mov dword ptr [edi + edx + 0x14], ecx */
  W32((uint32_t)(edi + edx + 0x14u), ecx);
L_8ced71: /* 8ced71: cmp ecx, dword ptr [esi + 0x64] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ced74: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ced77: jge 0x8cf02c */
  if ((sf == of)) goto L_8cf02c;
L_8ced7d: /* 8ced7d: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
L_8ced84: /* 8ced84: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8ced87: cmp eax, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ced8a: jge 0x8cf026 */
  if ((sf == of)) goto L_8cf026;
L_8ced90: /* 8ced90: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8ced93: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 8ced96: mov edi, dword ptr [esi + 0x68] */
  edi = R32((uint32_t)(esi + 0x68u));
/* 8ced99: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8ced9c: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8ced9e: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8ceda4: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8ceda7: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ceda9: mov edi, dword ptr [eax + 0x131c] */
  edi = R32((uint32_t)(eax + 0x131cu));
/* 8cedaf: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cedb1: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 8cedb4: mov edx, ecx */
  edx = ecx;
/* 8cedb6: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8cedb9: mov ebx, 1 */
  ebx = 0x1u;
/* 8cedbe: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8cedc0: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8cedc3: test dword ptr [edi + edx*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + edx*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cedc6: je 0x8cf014 */
  if (zf) goto L_8cf014;
L_8cedcc: /* 8cedcc: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 8cedcf: movzx edx, word ptr [esi + 0x90] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x90u)));
/* 8cedd6: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cedd9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cedda: mov edi, ecx */
  edi = ecx;
/* 8ceddc: imul edi, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  edi = (uint32_t)r;
  }
/* 8cede0: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8cede2: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8cede4: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 8cede7: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8cedea: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ceded: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8cedee: imul ebx, ecx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(ecx);
  ebx = (uint32_t)r;
  }
/* 8cedf1: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8cedf3: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cedf6: lea ecx, [ebx + edx + 1] */
  ecx = (uint32_t)(ebx + edx + 0x1u);
/* 8cedfa: mov ebx, dword ptr [esi + 0x68] */
  ebx = R32((uint32_t)(esi + 0x68u));
/* 8cedfd: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8cee00: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8cee06: imul ecx, dword ptr [ebp - 0x30] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  ecx = (uint32_t)r;
  }
/* 8cee0a: mov eax, dword ptr [eax + 0x1328] */
  eax = R32((uint32_t)(eax + 0x1328u));
/* 8cee10: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cee12: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cee14: mov edx, ecx */
  edx = ecx;
/* 8cee16: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8cee19: mov ebx, 1 */
  ebx = 0x1u;
/* 8cee1e: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8cee20: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8cee23: test dword ptr [eax + edx*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cee26: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8cee29: je 0x8cef1d */
  if (zf) goto L_8cef1d;
L_8cee2f: /* 8cee2f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cee31: je 0x8cee4b */
  if (zf) goto L_8cee4b;
L_8cee33: /* 8cee33: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cee36: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cee39: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cee3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cee3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cee3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cee3f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cee40: mov ecx, esi */
  ecx = esi;
/* 8cee42: call 0x6cc1df */
  esp -= 4; W32(esp, 0x8cee47u); SPILL(); f_6cc1df(); if (g_unwind) return; RELOAD();
/* 8cee47: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cee49: je 0x8cee9d */
  if (zf) goto L_8cee9d;
L_8cee4b: /* 8cee4b: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8cee4e: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 8cee51: lea edi, [ebx + ebx*8] */
  edi = (uint32_t)(ebx + ebx*8);
/* 8cee54: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 8cee57: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8cee5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cee5b: lea ecx, [edi + ecx + 8] */
  ecx = (uint32_t)(edi + ecx + 0x8u);
/* 8cee5f: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cee65u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cee65: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cee68: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8cee69: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8cee6c: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cee6f: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 8cee72: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cee73: lea ecx, [edi + eax + 8] */
  ecx = (uint32_t)(edi + eax + 0x8u);
/* 8cee77: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cee7du); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cee7d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cee80: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cee83: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 8cee86: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8cee89: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cee8a: lea ecx, [edi + eax + 8] */
  ecx = (uint32_t)(edi + eax + 0x8u);
/* 8cee8e: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cee94u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cee94: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8cee97: lea eax, [edi + ecx + 0x14] */
  eax = (uint32_t)(edi + ecx + 0x14u);
/* 8cee9b: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
L_8cee9d: /* 8cee9d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cee9f: je 0x8ceebd */
  if (zf) goto L_8ceebd;
L_8ceea1: /* 8ceea1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ceea4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8ceea7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ceea9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ceeab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ceeac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ceead: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ceeae: mov ecx, esi */
  ecx = esi;
/* 8ceeb0: call 0x6cc1df */
  esp -= 4; W32(esp, 0x8ceeb5u); SPILL(); f_6cc1df(); if (g_unwind) return; RELOAD();
/* 8ceeb5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceeb7: je 0x8cf017 */
  if (zf) goto L_8cf017;
L_8ceebd: /* 8ceebd: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ceec0: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8ceec3: lea edi, [ebx + ebx*8] */
  edi = (uint32_t)(ebx + ebx*8);
/* 8ceec6: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8ceec9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8ceeca: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8ceecd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ceece: lea ecx, [edi + edx + 8] */
  ecx = (uint32_t)(edi + edx + 0x8u);
/* 8ceed2: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8ceed5: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8ceedbu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8ceedb: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8ceede: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ceee1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8ceee4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ceee5: lea ecx, [edi + edx + 8] */
  ecx = (uint32_t)(edi + edx + 0x8u);
/* 8ceee9: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8ceeec: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8ceef2u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8ceef2: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8ceef5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ceef8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8ceefb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ceefc: lea ecx, [edi + edx + 8] */
  ecx = (uint32_t)(edi + edx + 0x8u);
/* 8cef00: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8cef03: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cef09u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cef09: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cef0c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cef0f: lea edi, [edi + eax + 0x14] */
  edi = (uint32_t)(edi + eax + 0x14u);
/* 8cef13: inc dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi), r);
  }
/* 8cef15: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 8cef18: jmp 0x8ced84 */
  goto L_8ced84;
L_8cef1d: /* 8cef1d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cef1f: je 0x8cef39 */
  if (zf) goto L_8cef39;
L_8cef21: /* 8cef21: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cef24: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cef27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cef29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cef2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cef2c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cef2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cef2e: mov ecx, esi */
  ecx = esi;
/* 8cef30: call 0x6cc1df */
  esp -= 4; W32(esp, 0x8cef35u); SPILL(); f_6cc1df(); if (g_unwind) return; RELOAD();
/* 8cef35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cef37: je 0x8cef97 */
  if (zf) goto L_8cef97;
L_8cef39: /* 8cef39: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8cef3c: lea eax, [ebx + ebx*8] */
  eax = (uint32_t)(ebx + ebx*8);
/* 8cef3f: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8cef42: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cef45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cef46: lea ecx, [eax + edx + 8] */
  ecx = (uint32_t)(eax + edx + 0x8u);
/* 8cef4a: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8cef4d: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8cef50: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cef56u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cef56: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cef59: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8cef5c: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8cef5f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8cef60: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cef63: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 8cef66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cef67: lea ecx, [edx + ecx + 8] */
  ecx = (uint32_t)(edx + ecx + 0x8u);
/* 8cef6b: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cef71u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cef71: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cef74: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8cef77: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cef7a: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8cef7d: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cef80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cef81: lea ecx, [eax + edx + 8] */
  ecx = (uint32_t)(eax + edx + 0x8u);
/* 8cef85: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cef8bu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cef8b: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8cef8e: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8cef91: lea eax, [edx + ecx + 0x14] */
  eax = (uint32_t)(edx + ecx + 0x14u);
/* 8cef95: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
L_8cef97: /* 8cef97: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cef99: je 0x8cefb3 */
  if (zf) goto L_8cefb3;
L_8cef9b: /* 8cef9b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cef9e: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cefa1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cefa3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cefa5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cefa6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cefa7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cefa8: mov ecx, esi */
  ecx = esi;
/* 8cefaa: call 0x6cc1df */
  esp -= 4; W32(esp, 0x8cefafu); SPILL(); f_6cc1df(); if (g_unwind) return; RELOAD();
/* 8cefaf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cefb1: je 0x8cf017 */
  if (zf) goto L_8cf017;
L_8cefb3: /* 8cefb3: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cefb6: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8cefb9: lea edi, [ebx + ebx*8] */
  edi = (uint32_t)(ebx + ebx*8);
/* 8cefbc: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cefbf: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8cefc2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cefc3: lea ecx, [edi + eax + 8] */
  ecx = (uint32_t)(edi + eax + 0x8u);
/* 8cefc7: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cefcdu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cefcd: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cefd0: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cefd3: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cefd6: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8cefd9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cefda: lea ecx, [edi + eax + 8] */
  ecx = (uint32_t)(edi + eax + 0x8u);
/* 8cefde: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cefe4u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cefe4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cefe7: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cefea: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cefed: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8ceff0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ceff1: lea ecx, [edi + eax + 8] */
  ecx = (uint32_t)(edi + eax + 0x8u);
/* 8ceff5: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8ceffbu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8ceffb: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8ceffe: mov eax, dword ptr [edi + ecx + 0x14] */
  eax = R32((uint32_t)(edi + ecx + 0x14u));
/* 8cf002: lea edi, [edi + ecx + 0x14] */
  edi = (uint32_t)(edi + ecx + 0x14u);
/* 8cf006: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf009: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cf00a: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 8cf00c: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 8cf00f: jmp 0x8ced84 */
  goto L_8ced84;
L_8cf014: /* 8cf014: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
L_8cf017: /* 8cf017: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cf01a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf01d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cf01e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8cf021: jmp 0x8ced84 */
  goto L_8ced84;
L_8cf026: /* 8cf026: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cf027: jmp 0x8ced71 */
  goto L_8ced71;
L_8cf02c: /* 8cf02c: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8cf02f: lea edi, [ebx + ebx*8] */
  edi = (uint32_t)(ebx + ebx*8);
/* 8cf032: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8cf035: mov ecx, dword ptr [edi + edx + 0xc] */
  ecx = R32((uint32_t)(edi + edx + 0xcu));
/* 8cf039: lea eax, [edi + edx] */
  eax = (uint32_t)(edi + edx);
/* 8cf03c: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 8cf03f: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cf042: mov edx, dword ptr [eax + edi + 0x18] */
  edx = R32((uint32_t)(eax + edi + 0x18u));
/* 8cf046: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cf048: xor ecx, ecx */
  ecx = 0;
/* 8cf04a: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8cf04c: je 0x8cf0fa */
  if (zf) goto L_8cf0fa;
L_8cf052: /* 8cf052: mov dword ptr [eax + 0x1c], 0x7fffffff */
  W32((uint32_t)(eax + 0x1cu), 0x7fffffffu);
/* 8cf059: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8cf05c: mov dword ptr [edi + edx + 0x20], ecx */
  W32((uint32_t)(edi + edx + 0x20u), ecx);
/* 8cf060: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
L_8cf063: /* 8cf063: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cf066: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cf069: mov edx, dword ptr [eax + edi + 0x18] */
  edx = R32((uint32_t)(eax + edi + 0x18u));
/* 8cf06d: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cf06f: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cf071: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cf074: jge 0x8cf106 */
  if ((sf == of)) goto L_8cf106;
L_8cf07a: /* 8cf07a: mov edx, ecx */
  edx = ecx;
/* 8cf07c: mov ecx, eax */
  ecx = eax;
/* 8cf07e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cf07f: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cf082: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf088u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf088: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf08b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf08e: cmp eax, dword ptr [ecx + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8cf091: jae 0x8cf0b2 */
  if (!cf) goto L_8cf0b2;
L_8cf093: /* 8cf093: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8cf096: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cf099: lea eax, [edi + edx] */
  eax = (uint32_t)(edi + edx);
/* 8cf09c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf09d: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 8cf0a0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cf0a3: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf0a9u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf0a9: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf0ac: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf0af: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
L_8cf0b2: /* 8cf0b2: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8cf0b5: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cf0b8: lea eax, [edi + ecx] */
  eax = (uint32_t)(edi + ecx);
/* 8cf0bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cf0bc: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 8cf0bf: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cf0c2: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf0c8u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf0c8: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf0cb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf0ce: cmp eax, dword ptr [ecx + 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8cf0d1: jbe 0x8cf0f2 */
  if ((cf | zf)) goto L_8cf0f2;
L_8cf0d3: /* 8cf0d3: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8cf0d6: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cf0d9: lea eax, [edi + edx] */
  eax = (uint32_t)(edi + edx);
/* 8cf0dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf0dd: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 8cf0e0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cf0e3: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf0e9u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf0e9: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf0ec: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf0ef: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
L_8cf0f2: /* 8cf0f2: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 8cf0f5: jmp 0x8cf063 */
  goto L_8cf063;
L_8cf0fa: /* 8cf0fa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cf0fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cf0fd: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 8cf100: call 0x6cab8c */
  esp -= 4; W32(esp, 0x8cf105u); SPILL(); f_6cab8c(); if (g_unwind) return; RELOAD();
/* 8cf105: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
L_8cf106: /* 8cf106: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8cf107: jmp 0x8ced47 */
  goto L_8ced47;
L_8cf10c: /* 8cf10c: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* 8cf112: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8cf118u); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 8cf118: mov dword ptr [esi + 0xb0], 0 */
  W32((uint32_t)(esi + 0xb0u), 0x0u);
/* 8cf122: xor ecx, ecx */
  ecx = 0;
L_8cf124: /* 8cf124: cmp ecx, dword ptr [esi + 0x64] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cf127: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8cf12a: jge 0x8cf2b3 */
  if ((sf == of)) goto L_8cf2b3;
L_8cf130: /* 8cf130: xor ebx, ebx */
  ebx = 0;
L_8cf132: /* 8cf132: cmp ebx, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cf135: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 8cf138: jge 0x8cf2ad */
  if ((sf == of)) goto L_8cf2ad;
L_8cf13e: /* 8cf13e: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8cf141: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 8cf144: mov edi, dword ptr [esi + 0x68] */
  edi = R32((uint32_t)(esi + 0x68u));
/* 8cf147: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cf149: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8cf14f: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8cf152: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cf154: mov edi, dword ptr [eax + 0x131c] */
  edi = R32((uint32_t)(eax + 0x131cu));
/* 8cf15a: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cf15c: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8cf15f: mov edx, ecx */
  edx = ecx;
/* 8cf161: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8cf164: mov ebx, 1 */
  ebx = 0x1u;
/* 8cf169: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8cf16b: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8cf16e: test dword ptr [edi + edx*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + edx*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cf171: je 0x8cf2a1 */
  if (zf) goto L_8cf2a1;
L_8cf177: /* 8cf177: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 8cf17a: movzx edx, word ptr [esi + 0x90] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x90u)));
/* 8cf181: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8cf184: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cf185: mov edi, ecx */
  edi = ecx;
/* 8cf187: imul edi, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  edi = (uint32_t)r;
  }
/* 8cf18b: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8cf18d: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8cf18f: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 8cf192: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8cf195: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf198: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8cf199: imul ebx, ecx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(ecx);
  ebx = (uint32_t)r;
  }
/* 8cf19c: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8cf19e: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8cf1a1: lea ecx, [ebx + edx + 1] */
  ecx = (uint32_t)(ebx + edx + 0x1u);
/* 8cf1a5: mov ebx, dword ptr [esi + 0x68] */
  ebx = R32((uint32_t)(esi + 0x68u));
/* 8cf1a8: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8cf1ab: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8cf1b1: imul ecx, dword ptr [ebp - 0x24] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  ecx = (uint32_t)r;
  }
/* 8cf1b5: mov eax, dword ptr [eax + 0x1328] */
  eax = R32((uint32_t)(eax + 0x1328u));
/* 8cf1bb: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cf1bd: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cf1bf: mov edx, ecx */
  edx = ecx;
/* 8cf1c1: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8cf1c4: mov ebx, 1 */
  ebx = 0x1u;
/* 8cf1c9: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8cf1cb: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8cf1ce: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 8cf1d1: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8cf1d4: test ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cf1d6: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf1d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf1da: je 0x8cf234 */
  if (zf) goto L_8cf234;
L_8cf1dc: /* 8cf1dc: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 8cf1e2: mov ecx, edi */
  ecx = edi;
/* 8cf1e4: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf1eau); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf1ea: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cf1ed: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf1f0: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 8cf1f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cf1f2: mov ecx, edi */
  ecx = edi;
/* 8cf1f4: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 8cf1f7: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf1fdu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf1fd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cf200: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf203: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf204: mov ecx, edi */
  ecx = edi;
/* 8cf206: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cf209: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf20fu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf20f: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf212: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cf213: mov ecx, edi */
  ecx = edi;
/* 8cf215: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 8cf218: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf21eu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf21e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cf221: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf224: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf225: mov ecx, edi */
  ecx = edi;
/* 8cf227: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cf22a: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf230u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf230: mov ecx, edi */
  ecx = edi;
/* 8cf232: jmp 0x8cf28a */
  goto L_8cf28a;
L_8cf234: /* 8cf234: lea ebx, [esi + 0x98] */
  ebx = (uint32_t)(esi + 0x98u);
/* 8cf23a: mov ecx, ebx */
  ecx = ebx;
/* 8cf23c: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf242u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf242: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cf245: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf248: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8cf249: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cf24a: mov ecx, ebx */
  ecx = ebx;
/* 8cf24c: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cf24f: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf255u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf255: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cf258: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf25b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf25c: mov ecx, ebx */
  ecx = ebx;
/* 8cf25e: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cf261: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf267u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf267: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf26a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cf26b: mov ecx, ebx */
  ecx = ebx;
/* 8cf26d: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8cf270: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf276u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf276: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cf279: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf27c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf27d: mov ecx, ebx */
  ecx = ebx;
/* 8cf27f: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cf282: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf288u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf288: mov ecx, ebx */
  ecx = ebx;
L_8cf28a: /* 8cf28a: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cf28d: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf290: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cf291: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8cf294: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf29au); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf29a: add dword ptr [esi + 0xb0], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xb0u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0xb0u), r);
  }
L_8cf2a1: /* 8cf2a1: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8cf2a4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf2a7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8cf2a8: jmp 0x8cf132 */
  goto L_8cf132;
L_8cf2ad: /* 8cf2ad: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cf2ae: jmp 0x8cf124 */
  goto L_8cf124;
L_8cf2b3: /* 8cf2b3: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 8cf2b9: xor edi, edi */
  edi = 0;
/* 8cf2bb: mov dword ptr [esi + 0xb4], eax */
  W32((uint32_t)(esi + 0xb4u), eax);
/* 8cf2c1: mov dword ptr [esi + 0xb8], 0x7fffffff */
  W32((uint32_t)(esi + 0xb8u), 0x7fffffffu);
/* 8cf2cb: mov dword ptr [esi + 0xbc], edi */
  W32((uint32_t)(esi + 0xbcu), edi);
L_8cf2d1: /* 8cf2d1: cmp edi, dword ptr [esi + 0xb4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cf2d7: jge 0x8cf32e */
  if ((sf == of)) goto L_8cf32e;
L_8cf2d9: /* 8cf2d9: lea ebx, [esi + 0x98] */
  ebx = (uint32_t)(esi + 0x98u);
/* 8cf2df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cf2e0: mov ecx, ebx */
  ecx = ebx;
/* 8cf2e2: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf2e8u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf2e8: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf2eb: cmp ecx, dword ptr [esi + 0xb8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xb8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8cf2f1: jae 0x8cf305 */
  if (!cf) goto L_8cf305;
L_8cf2f3: /* 8cf2f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cf2f4: mov ecx, ebx */
  ecx = ebx;
/* 8cf2f6: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf2fcu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf2fc: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf2ff: mov dword ptr [esi + 0xb8], edx */
  W32((uint32_t)(esi + 0xb8u), edx);
L_8cf305: /* 8cf305: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cf306: mov ecx, ebx */
  ecx = ebx;
/* 8cf308: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf30eu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf30e: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf311: cmp eax, dword ptr [esi + 0xbc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xbcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8cf317: jbe 0x8cf32b */
  if ((cf | zf)) goto L_8cf32b;
L_8cf319: /* 8cf319: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cf31a: mov ecx, ebx */
  ecx = ebx;
/* 8cf31c: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf322u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf322: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf325: mov dword ptr [esi + 0xbc], ecx */
  W32((uint32_t)(esi + 0xbcu), ecx);
L_8cf32b: /* 8cf32b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8cf32c: jmp 0x8cf2d1 */
  goto L_8cf2d1;
L_8cf32e: /* 8cf32e: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* 8cf334: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 8cf337: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cf338: mov dword ptr [esi + 0xac], eax */
  W32((uint32_t)(esi + 0xacu), eax);
/* 8cf33e: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8cf341: mov edi, dword ptr [eax + 0x128c] */
  edi = R32((uint32_t)(eax + 0x128cu));
/* 8cf347: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8cf34a: mov ebx, edi */
  ebx = edi;
/* 8cf34c: imul ebx, ecx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(ecx);
  ebx = (uint32_t)r;
  }
/* 8cf34f: lea ecx, [ebx + edx] */
  ecx = (uint32_t)(ebx + edx);
/* 8cf352: mov edx, dword ptr [eax + 0x1280] */
  edx = R32((uint32_t)(eax + 0x1280u));
/* 8cf358: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 8cf35b: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8cf35e: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8cf360: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 8cf363: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8cf366: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8cf369: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 8cf36c: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 8cf36f: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 8cf372: add eax, dword ptr [esi + 0x6c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x6cu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cf375: mov ebx, dword ptr [esi + 0x68] */
  ebx = R32((uint32_t)(esi + 0x68u));
/* 8cf378: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 8cf37b: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cf37d: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8cf380: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8cf383: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 8cf385: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 8cf388: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 8cf38b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8cf38e: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8cf391: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 8cf394: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cf396: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8cf399: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 8cf39c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8cf39e: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8cf3a1: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8cf3a4: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8cf3a7: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 8cf3aa: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8cf3ad: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8cf3b0: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8cf3b3: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 8cf3b6: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8cf3b9: push 0x40000000 */
  { uint32_t v = 0x40000000u; esp -= 4; W32(esp, v); }
/* 8cf3be: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8cf3c1: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 8cf3c7: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8cf3ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cf3cb: fsub dword ptr [ebp - 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8cf3ce: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8cf3d1: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 8cf3d4: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 8cf3d7: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 8cf3da: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8cf3dd: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8cf3e0: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8cf3e3: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8cf3e6: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8cf3e9: fsub dword ptr [ebp - 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8cf3ec: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8cf3ef: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8cf3f2: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8cf3f5: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8cf3fbu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8cf3fb: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8cf3fe: push 0x40000000 */
  { uint32_t v = 0x40000000u; esp -= 4; W32(esp, v); }
/* 8cf403: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8cf406: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 8cf40c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf40d: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 8cf410: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8cf413: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8cf416: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8cf419: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8cf41c: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8cf41f: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8cf421: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 8cf427: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8cf42du); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8cf42d: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8cf430: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8cf433: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cf436: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8cf439: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8cf43c: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 8cf442: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8cf444: lea eax, [esi + 0x70] */
  eax = (uint32_t)(esi + 0x70u);
/* 8cf447: mov edx, eax */
  edx = eax;
/* 8cf449: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8cf44c: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8cf44f: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8cf451: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8cf454: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8cf457: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8cf45a: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8cf45d: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8cf460: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8cf463: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8cf466: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8cf468: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8cf46b: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8cf46e: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8cf471: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 8cf474: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8cf476: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8cf478: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8cf47a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8cf47c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8cf47e: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8cf480: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8cf482: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8cf484: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8cf487: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8cf489: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8cf48b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8cf48d: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8cf493u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8cf493: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8cf496: fst qword ptr [ebp - 0x28] */
  WF64((uint32_t)(ebp + 0xffffffd8u), ST0);
/* 8cf499: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cf49c: fstp dword ptr [esi + 0x7c] */
  WF32((uint32_t)(esi + 0x7cu), ST0); FPOP();
/* 8cf49f: add eax, 0x1274 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1274u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cf4a4: xor ecx, ecx */
  ecx = 0;
L_8cf4a6: /* 8cf4a6: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cf4a9: jge 0x8cf4be */
  if ((sf == of)) goto L_8cf4be;
L_8cf4ab: /* 8cf4ab: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8cf4ad: cmp dword ptr [edx + ecx*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8cf4b0: je 0x8cf4b5 */
  if (zf) goto L_8cf4b5;
L_8cf4b2: /* 8cf4b2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cf4b3: jmp 0x8cf4a6 */
  goto L_8cf4a6;
L_8cf4b5: /* 8cf4b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf4b6: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8cf4b9: call 0x6cc4be */
  esp -= 4; W32(esp, 0x8cf4beu); SPILL(); f_6cc4be(); if (g_unwind) return; RELOAD();
L_8cf4be: /* 8cf4be: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8cf4c1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8cf4c5: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8cf4cau); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8cf4ca: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 8cf4cd: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8cf4d1: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8cf4d6u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8cf4d6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cf4d9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cf4da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cf4db: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cf4e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cf4e3: mov esp, ebp */
  esp = ebp;
/* 8cf4e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cf4e6: ret  */
  esp += 4; SPILL(); return;
}
