#include "recomp.h"
#include "rec_mod.h"

void f_50f3ec(void) {
  LOAD_REGS();
L_50f3ec: /* 50f3ec: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 50f3ef: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50f3f4: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 50f3f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50f3f8: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 50f3fb: call 0x554df6 */
  esp -= 4; W32(esp, 0x50f400u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50f400(); return;
}

void f_50f400(void) {
  LOAD_REGS();
L_50f400: /* 50f400: push 0x56ba3c */
  { uint32_t v = 0x56ba3cu; esp -= 4; W32(esp, v); }
/* 50f405: push 0x5a5478 */
  { uint32_t v = 0x5a5478u; esp -= 4; W32(esp, v); }
/* 50f40a: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50f40fu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50f40f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 50f412: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 50f415: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 50f41b: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 50f41e: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50f421: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50f422: push 0x5a5480 */
  { uint32_t v = 0x5a5480u; esp -= 4; W32(esp, v); }
/* 50f427: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50f42cu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50f42c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50f42f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50f431: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50f433: call 0x554df6 */
  esp -= 4; W32(esp, 0x50f438u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50f438: guest_badaddr(0x50f438); return;
}

void f_50f4e0(void) {
  LOAD_REGS();
L_50f4e0: /* 50f4e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50f4e1: mov ebp, esp */
  ebp = esp;
/* 50f4e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50f4e5: push 0x556f50 */
  { uint32_t v = 0x556f50u; esp -= 4; W32(esp, v); }
/* 50f4ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50f4f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50f4f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50f4f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50f4fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50f4fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50f4fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50f4fe: xor ebx, ebx */
  ebx = 0;
/* 50f500: mov edi, ecx */
  edi = ecx;
/* 50f502: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50f505: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 50f508: lea ecx, [edi + 0x4c4] */
  ecx = (uint32_t)(edi + 0x4c4u);
/* 50f50e: xor eax, eax */
  eax = 0;
L_50f510: /* 50f510: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50f513: jge 0x50f518 */
  if ((sf == of)) goto L_50f518;
L_50f515: /* 50f515: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 50f516: jmp 0x50f510 */
  goto L_50f510;
L_50f518: /* 50f518: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 50f51a: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 50f51d: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 50f520: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50f525u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 50f525: lea ecx, [edi + 0x4d0] */
  ecx = (uint32_t)(edi + 0x4d0u);
/* 50f52b: xor eax, eax */
  eax = 0;
/* 50f52d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_50f530: /* 50f530: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50f533: jge 0x50f538 */
  if ((sf == of)) goto L_50f538;
L_50f535: /* 50f535: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 50f536: jmp 0x50f530 */
  goto L_50f530;
L_50f538: /* 50f538: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 50f53a: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 50f53d: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 50f540: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50f545u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 50f545: lea ecx, [edi + 0x4dc] */
  ecx = (uint32_t)(edi + 0x4dcu);
/* 50f54b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 50f54d: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 50f550: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 50f553: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50f558u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 50f558: mov eax, dword ptr [edi + 0x4e8] */
  eax = R32((uint32_t)(edi + 0x4e8u));
/* 50f55e: lea esi, [edi + 0x4e8] */
  esi = (uint32_t)(edi + 0x4e8u);
/* 50f564: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50f565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50f566: call 0x4e2aa9 */
  esp -= 4; W32(esp, 0x50f56bu); SPILL(); f_4e2aa9(); if (g_unwind) return; RELOAD();
/* 50f56b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50f56e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 50f570: mov ecx, esi */
  ecx = esi;
/* 50f572: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 50f575: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 50f578: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50f57du); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 50f57d: mov eax, dword ptr [edi + 0x520] */
  eax = R32((uint32_t)(edi + 0x520u));
/* 50f583: cmp eax, 0x5ef380 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5ef380u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50f588: lea esi, [edi + 0x520] */
  esi = (uint32_t)(edi + 0x520u);
/* 50f58e: je 0x50f5d5 */
  if (zf) goto L_50f5d5;
L_50f590: /* 50f590: cmp word ptr [0x5ef380], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(0x5ef380u))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 50f597: je 0x50f5a9 */
  if (zf) goto L_50f5a9;
L_50f599: /* 50f599: push 0x5ef380 */
  { uint32_t v = 0x5ef380u; esp -= 4; W32(esp, v); }
/* 50f59e: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x50f5a3u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 50f5a3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50f5a6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 50f5a7: jmp 0x50f5ab */
  goto L_50f5ab;
L_50f5a9: /* 50f5a9: xor eax, eax */
  eax = 0;
L_50f5ab: /* 50f5ab: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 50f5ad: mov ecx, esi */
  ecx = esi;
/* 50f5af: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 50f5b2: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 50f5b5: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50f5bau); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 50f5ba: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 50f5bd: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50f5bf: je 0x50f5d5 */
  if (zf) goto L_50f5d5;
L_50f5c1: /* 50f5c1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 50f5c3: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 50f5c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50f5c7: push 0x5ef380 */
  { uint32_t v = 0x5ef380u; esp -= 4; W32(esp, v); }
/* 50f5cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50f5cd: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x50f5d2u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 50f5d2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50f5d5: /* 50f5d5: mov ecx, edi */
  ecx = edi;
/* 50f5d7: call 0x4e3bbb */
  esp -= 4; W32(esp, 0x50f5dcu); SPILL(); f_4e3bbb(); if (g_unwind) return; RELOAD();
/* 50f5dc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50f5df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50f5e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50f5e1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50f5e8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50f5e9: mov esp, ebp */
  esp = ebp;
/* 50f5eb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50f5ec: ret  */
  esp += 4; SPILL(); return;
}

void f_50f5ed(void) {
  LOAD_REGS();
L_50f5ed: /* 50f5ed: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50f5f0: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50f5f5: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 50f5f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50f5f9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 50f5fc: call 0x554df6 */
  esp -= 4; W32(esp, 0x50f601u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50f601(); return;
}

void f_50f601(void) {
  LOAD_REGS();
L_50f601: /* 50f601: push 0x56ba64 */
  { uint32_t v = 0x56ba64u; esp -= 4; W32(esp, v); }
/* 50f606: push 0x5a55a0 */
  { uint32_t v = 0x5a55a0u; esp -= 4; W32(esp, v); }
/* 50f60b: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50f610u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50f610: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50f613: xor ebx, ebx */
  ebx = 0;
/* 50f615: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50f616: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50f617: call 0x554df6 */
  esp -= 4; W32(esp, 0x50f61cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50f61c: guest_badaddr(0x50f61c); return;
}

void f_50f670(void) {
  LOAD_REGS();
L_50f670: /* 50f670: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 50f674: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50f676: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50f677: mov esi, ecx */
  esi = ecx;
/* 50f679: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 50f67d: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50f67f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 50f682: je 0x50f6be */
  if (zf) goto L_50f6be;
L_50f684: /* 50f684: mov eax, dword ptr [eax + 0x34] */
  eax = R32((uint32_t)(eax + 0x34u));
/* 50f687: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50f689: je 0x50f6be */
  if (zf) goto L_50f6be;
L_50f68b: /* 50f68b: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 50f68e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50f690: je 0x50f6a7 */
  if (zf) goto L_50f6a7;
L_50f692: /* 50f692: mov eax, dword ptr [eax + 0x34] */
  eax = R32((uint32_t)(eax + 0x34u));
/* 50f695: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50f696: call 0x4e2b8f */
  esp -= 4; W32(esp, 0x50f69bu); SPILL(); f_4e2b8f(); if (g_unwind) return; RELOAD();
/* 50f69b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 50f69e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50f6a1: mov eax, esi */
  eax = esi;
/* 50f6a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50f6a4: ret 8 */
  esp += 12; SPILL(); return;
L_50f6a7: /* 50f6a7: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
/* 50f6ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50f6ad: call 0x4e2b8f */
  esp -= 4; W32(esp, 0x50f6b2u); SPILL(); f_4e2b8f(); if (g_unwind) return; RELOAD();
/* 50f6b2: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 50f6b5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50f6b8: mov eax, esi */
  eax = esi;
/* 50f6ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50f6bb: ret 8 */
  esp += 12; SPILL(); return;
L_50f6be: /* 50f6be: xor eax, eax */
  eax = 0;
/* 50f6c0: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 50f6c3: mov eax, esi */
  eax = esi;
/* 50f6c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50f6c6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_50f6f0(void) {
  LOAD_REGS();
L_50f6f0: /* 50f6f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50f6f1: mov ebp, esp */
  ebp = esp;
/* 50f6f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50f6f5: push 0x556f60 */
  { uint32_t v = 0x556f60u; esp -= 4; W32(esp, v); }
/* 50f6fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50f700: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50f701: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50f708: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50f70b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50f70c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50f70d: mov esi, ecx */
  esi = ecx;
/* 50f70f: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50f712: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50f713: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50f716: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50f71d: jne 0x50f736 */
  if (!zf) goto L_50f736;
L_50f71f: /* 50f71f: push 0x488 */
  { uint32_t v = 0x488u; esp -= 4; W32(esp, v); }
/* 50f724: push 0x5a5704 */
  { uint32_t v = 0x5a5704u; esp -= 4; W32(esp, v); }
/* 50f729: push 0x5a5710 */
  { uint32_t v = 0x5a5710u; esp -= 4; W32(esp, v); }
/* 50f72e: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50f733u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50f733: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50f736: /* 50f736: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50f738: mov eax, dword ptr [eax + 0x34] */
  eax = R32((uint32_t)(eax + 0x34u));
/* 50f73b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50f73d: je 0x50f793 */
  if (zf) goto L_50f793;
L_50f73f: /* 50f73f: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 50f742: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50f744: je 0x50f754 */
  if (zf) goto L_50f754;
L_50f746: /* 50f746: mov eax, dword ptr [eax + 0x34] */
  eax = R32((uint32_t)(eax + 0x34u));
/* 50f749: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50f74a: call 0x4e2b8f */
  esp -= 4; W32(esp, 0x50f74fu); SPILL(); f_4e2b8f(); if (g_unwind) return; RELOAD();
/* 50f74f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50f752: jmp 0x50f795 */
  goto L_50f795;
L_50f754: /* 50f754: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
/* 50f759: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50f75a: call 0x4e2b8f */
  esp -= 4; W32(esp, 0x50f75fu); SPILL(); f_4e2b8f(); if (g_unwind) return; RELOAD();
/* 50f75f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50f762: jmp 0x50f795 */
  goto L_50f795;
L_50f793: /* 50f793: xor eax, eax */
  eax = 0;
L_50f795: /* 50f795: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 50f798: xor edx, edx */
  edx = 0;
/* 50f79a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50f79c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50f79f: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 50f7a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50f7a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50f7a4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50f7ab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50f7ac: mov eax, edx */
  eax = edx;
/* 50f7ae: mov esp, ebp */
  esp = ebp;
/* 50f7b0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50f7b1: ret  */
  esp += 4; SPILL(); return;
}

void f_50f764(void) {
  LOAD_REGS();
L_50f764: /* 50f764: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50f767: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50f76c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 50f76f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50f770: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 50f773: call 0x554df6 */
  esp -= 4; W32(esp, 0x50f778u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50f778(); return;
}

void f_50f778(void) {
  LOAD_REGS();
L_50f778: /* 50f778: push 0x56ba8c */
  { uint32_t v = 0x56ba8cu; esp -= 4; W32(esp, v); }
/* 50f77d: push 0x5a571c */
  { uint32_t v = 0x5a571cu; esp -= 4; W32(esp, v); }
/* 50f782: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50f787u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50f787: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50f78a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50f78c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50f78e: call 0x554df6 */
  esp -= 4; W32(esp, 0x50f793u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 50f793: xor eax, eax */
  eax = 0;
/* 50f795: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 50f798: xor edx, edx */
  edx = 0;
/* 50f79a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50f79c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50f79f: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 50f7a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50f7a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50f7a4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50f7ab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50f7ac: mov eax, edx */
  eax = edx;
/* 50f7ae: mov esp, ebp */
  esp = ebp;
/* 50f7b0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50f7b1: ret  */
  esp += 4; SPILL(); return;
}

void f_50f800(void) {
  LOAD_REGS();
L_50f800: /* 50f800: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 50f804: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50f805: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50f806: mov esi, ecx */
  esi = ecx;
/* 50f808: call 0x4e15a5 */
  esp -= 4; W32(esp, 0x50f80du); SPILL(); f_4e15a5(); if (g_unwind) return; RELOAD();
/* 50f80d: mov dword ptr [esi], 0x569888 */
  W32((uint32_t)(esi), 0x569888u);
/* 50f813: mov eax, esi */
  eax = esi;
/* 50f815: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50f816: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50f830(void) {
  LOAD_REGS();
L_50f830: /* 50f830: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50f831: mov ebp, esp */
  ebp = esp;
/* 50f833: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50f835: push 0x556f70 */
  { uint32_t v = 0x556f70u; esp -= 4; W32(esp, v); }
/* 50f83a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50f840: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50f841: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50f848: sub esp, 0x20c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50f84e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50f84f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50f850: mov esi, ecx */
  esi = ecx;
/* 50f852: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 50f858: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 50f85b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50f85c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50f85f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50f866: jne 0x50f8a4 */
  if (!zf) goto L_50f8a4;
L_50f868: /* 50f868: cmp word ptr [esi + 0x84], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x84u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 50f870: je 0x50f889 */
  if (zf) goto L_50f889;
L_50f872: /* 50f872: push 0x64d */
  { uint32_t v = 0x64du; esp -= 4; W32(esp, v); }
/* 50f877: push 0x5a57a0 */
  { uint32_t v = 0x5a57a0u; esp -= 4; W32(esp, v); }
/* 50f87c: push 0x5a57ac */
  { uint32_t v = 0x5a57acu; esp -= 4; W32(esp, v); }
/* 50f881: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50f886u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50f886: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50f889: /* 50f889: mov dword ptr [esi + 0x90], 0x4e19ab */
  W32((uint32_t)(esi + 0x90u), 0x4e19abu);
L_50f893: /* 50f893: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50f896: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50f89d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50f89e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50f89f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50f8a0: mov esp, ebp */
  esp = ebp;
/* 50f8a2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50f8a3: ret  */
  esp += 4; SPILL(); return;
L_50f8a4: /* 50f8a4: mov ax, word ptr [esi + 0x84] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x84u))) & 0xffffu);
/* 50f8ab: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 50f8ae: je 0x50f91b */
  if (zf) goto L_50f91b;
L_50f8b0: /* 50f8b0: cmp ax, 0x1000 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x1000u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 50f8b4: jb 0x50f8cd */
  if (cf) goto L_50f8cd;
L_50f8b6: /* 50f8b6: push 0x653 */
  { uint32_t v = 0x653u; esp -= 4; W32(esp, v); }
/* 50f8bb: push 0x5a57b8 */
  { uint32_t v = 0x5a57b8u; esp -= 4; W32(esp, v); }
/* 50f8c0: push 0x5a57c4 */
  { uint32_t v = 0x5a57c4u; esp -= 4; W32(esp, v); }
/* 50f8c5: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50f8cau); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50f8ca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50f8cd: /* 50f8cd: movzx eax, word ptr [esi + 0x84] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x84u)));
/* 50f8d4: mov ecx, dword ptr [eax*4 + 0x5f1d90] */
  ecx = R32((uint32_t)(eax*4 + 0x5f1d90u));
/* 50f8db: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50f8dd: jne 0x50f8f6 */
  if (!zf) goto L_50f8f6;
L_50f8df: /* 50f8df: push 0x654 */
  { uint32_t v = 0x654u; esp -= 4; W32(esp, v); }
/* 50f8e4: push 0x5a57d4 */
  { uint32_t v = 0x5a57d4u; esp -= 4; W32(esp, v); }
/* 50f8e9: push 0x5a57e0 */
  { uint32_t v = 0x5a57e0u; esp -= 4; W32(esp, v); }
/* 50f8ee: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50f8f3u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50f8f3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50f8f6: /* 50f8f6: movzx ecx, word ptr [esi + 0x84] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0x84u)));
/* 50f8fd: mov edx, dword ptr [ecx*4 + 0x5f1d90] */
  edx = R32((uint32_t)(ecx*4 + 0x5f1d90u));
/* 50f904: mov dword ptr [esi + 0x90], edx */
  W32((uint32_t)(esi + 0x90u), edx);
/* 50f90a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50f90d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50f914: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50f915: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50f916: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50f917: mov esp, ebp */
  esp = ebp;
/* 50f919: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50f91a: ret  */
  esp += 4; SPILL(); return;
L_50f91b: /* 50f91b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50f91d: mov ecx, esi */
  ecx = esi;
/* 50f91f: call dword ptr [eax + 0x74] */
  { uint32_t t = R32((uint32_t)(eax + 0x74u)); esp -= 4; W32(esp, 0x50f922u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50f922: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 50f924: mov ecx, eax */
  ecx = eax;
/* 50f926: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x50f92cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50f92c: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 50f932: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 50f935: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 50f938: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 50f93b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50f93c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50f93d: lea edx, [ebp - 0x218] */
  edx = (uint32_t)(ebp + 0xfffffde8u);
/* 50f943: push 0x5a57f8 */
  { uint32_t v = 0x5a57f8u; esp -= 4; W32(esp, v); }
/* 50f948: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50f949: call 0x4e4183 */
  esp -= 4; W32(esp, 0x50f94eu); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 50f94e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50f950: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50f953: mov ecx, esi */
  ecx = esi;
/* 50f955: call dword ptr [eax + 0x74] */
  { uint32_t t = R32((uint32_t)(eax + 0x74u)); esp -= 4; W32(esp, 0x50f958u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50f958: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 50f95b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 50f95d: lea edx, [ebp - 0x218] */
  edx = (uint32_t)(ebp + 0xfffffde8u);
/* 50f963: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50f964: call 0x4e402a */
  esp -= 4; W32(esp, 0x50f969u); SPILL(); f_4e402a(); if (g_unwind) return; RELOAD();
/* 50f969: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50f96b: je 0x50f893 */
  if (zf) goto L_50f893;
L_50f971: /* 50f971: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 50f973: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50f976: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50f977: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* 50f97d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50f97e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50f985: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50f986: mov esp, ebp */
  esp = ebp;
/* 50f988: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50f989: ret  */
  esp += 4; SPILL(); return;
}

void f_50f98a(void) {
  LOAD_REGS();
L_50f98a: /* 50f98a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50f98d: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50f992: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 50f995: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50f996: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 50f999: call 0x554df6 */
  esp -= 4; W32(esp, 0x50f99eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50f99e(); return;
}

void f_50f99e(void) {
  LOAD_REGS();
L_50f99e: /* 50f99e: push 0x56bac8 */
  { uint32_t v = 0x56bac8u; esp -= 4; W32(esp, v); }
/* 50f9a3: push 0x5a5810 */
  { uint32_t v = 0x5a5810u; esp -= 4; W32(esp, v); }
/* 50f9a8: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50f9adu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50f9ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50f9b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50f9b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50f9b4: call 0x554df6 */
  esp -= 4; W32(esp, 0x50f9b9u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50f9b9: guest_badaddr(0x50f9b9); return;
}

void f_50fa30(void) {
  LOAD_REGS();
L_50fa30: /* 50fa30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50fa32: push 0x556f88 */
  { uint32_t v = 0x556f88u; esp -= 4; W32(esp, v); }
/* 50fa37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50fa3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50fa3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50fa45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50fa46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50fa47: mov esi, ecx */
  esi = ecx;
/* 50fa49: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 50fa4d: call 0x4e245a */
  esp -= 4; W32(esp, 0x50fa52u); SPILL(); f_4e245a(); if (g_unwind) return; RELOAD();
/* 50fa52: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 50fa56: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 50fa59: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 50fa5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50fa5e: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 50fa61: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 50fa69: mov dword ptr [esi], 0x569a90 */
  W32((uint32_t)(esi), 0x569a90u);
/* 50fa6f: call 0x4e13de */
  esp -= 4; W32(esp, 0x50fa74u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 50fa74: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 50fa78: mov eax, esi */
  eax = esi;
/* 50fa7a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50fa7b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50fa82: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50fa85: ret 8 */
  esp += 12; SPILL(); return;
}

void f_50fab0(void) {
  LOAD_REGS();
L_50fab0: /* 50fab0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50fab1: mov ebp, esp */
  ebp = esp;
/* 50fab3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50fab5: push 0x556fa0 */
  { uint32_t v = 0x556fa0u; esp -= 4; W32(esp, v); }
/* 50faba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50fac0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50fac1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50fac8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50facb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50facc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 50facf: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 50fad1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50fad2: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 50fad5: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 50fad8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50fad9: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 50fadc: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 50fadf: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50fae2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50fae3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 50fae6: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* 50fae9: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 50faec: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 50faef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50faf0: mov ecx, ebx */
  ecx = ebx;
/* 50faf2: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50faf9: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x50fafcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50fafc: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 50faff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50fb01: je 0x50fbab */
  if (zf) goto L_50fbab;
L_50fb07: /* 50fb07: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 50fb0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50fb0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50fb0c: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x50fb11u); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 50fb11: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 50fb14: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50fb17: xor eax, eax */
  eax = 0;
/* 50fb19: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_50fb20: /* 50fb20: cmp eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50fb22: jge 0x50fb27 */
  if ((sf == of)) goto L_50fb27;
L_50fb24: /* 50fb24: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 50fb25: jmp 0x50fb20 */
  goto L_50fb20;
L_50fb27: /* 50fb27: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 50fb2a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 50fb2c: mov ecx, esi */
  ecx = esi;
/* 50fb2e: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
/* 50fb34: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50fb39u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 50fb39: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
L_50fb40: /* 50fb40: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 50fb43: cmp eax, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50fb46: jge 0x50fbf8 */
  if ((sf == of)) goto L_50fbf8;
L_50fb4c: /* 50fb4c: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 50fb4f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 50fb52: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 50fb55: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50fb57: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 50fb5a: jle 0x50fb78 */
  if ((zf || sf != of)) goto L_50fb78;
L_50fb5c: /* 50fb5c: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 50fb5f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 50fb60: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 50fb63: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50fb65: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50fb68: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 50fb6c: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 50fb6f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 50fb71: mov ecx, esi */
  ecx = esi;
/* 50fb73: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50fb78u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_50fb78: /* 50fb78: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50fb7a: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 50fb7d: lea edi, [eax + edx*4] */
  edi = (uint32_t)(eax + edx*4);
/* 50fb80: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 50fb82: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50fb83: mov ecx, ebx */
  ecx = ebx;
/* 50fb85: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x50fb88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50fb88: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 50fb8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50fb8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50fb8d: call 0x4e4160 */
  esp -= 4; W32(esp, 0x50fb92u); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 50fb92: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50fb95: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 50fb98: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50fb99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50fb9a: call 0x4e4165 */
  esp -= 4; W32(esp, 0x50fb9fu); SPILL(); f_4e4165(); if (g_unwind) return; RELOAD();
/* 50fb9f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 50fba2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50fba5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 50fba6: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 50fba9: jmp 0x50fb40 */
  goto L_50fb40;
L_50fbab: /* 50fbab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50fbac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50fbad: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x50fbb2u); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 50fbb2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50fbb5: xor eax, eax */
  eax = 0;
/* 50fbb7: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 50fbba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_50fbc0: /* 50fbc0: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50fbc3: jge 0x50fbf8 */
  if ((sf == of)) goto L_50fbf8;
L_50fbc5: /* 50fbc5: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 50fbc8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50fbca: lea edi, [eax + edx*4] */
  edi = (uint32_t)(eax + edx*4);
/* 50fbcd: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 50fbcf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50fbd0: mov ecx, ebx */
  ecx = ebx;
/* 50fbd2: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x50fbd5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50fbd5: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 50fbd8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50fbd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50fbda: call 0x4e4160 */
  esp -= 4; W32(esp, 0x50fbdfu); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 50fbdf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50fbe2: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 50fbe5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50fbe6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50fbe7: call 0x4e4165 */
  esp -= 4; W32(esp, 0x50fbecu); SPILL(); f_4e4165(); if (g_unwind) return; RELOAD();
/* 50fbec: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 50fbef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50fbf2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 50fbf3: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 50fbf6: jmp 0x50fbc0 */
  goto L_50fbc0;
L_50fbf8: /* 50fbf8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50fbfb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50fbfc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50fbfd: mov eax, ebx */
  eax = ebx;
/* 50fbff: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50fc06: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50fc07: mov esp, ebp */
  esp = ebp;
/* 50fc09: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50fc0a: ret  */
  esp += 4; SPILL(); return;
}

void f_50fc0b(void) {
  LOAD_REGS();
L_50fc0b: /* 50fc0b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50fc0e: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50fc13: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 50fc16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50fc17: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 50fc1a: call 0x554df6 */
  esp -= 4; W32(esp, 0x50fc1fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50fc1f(); return;
}

void f_50fc1f(void) {
  LOAD_REGS();
L_50fc1f: /* 50fc1f: push 0x56baf0 */
  { uint32_t v = 0x56baf0u; esp -= 4; W32(esp, v); }
/* 50fc24: push 0x5a376c */
  { uint32_t v = 0x5a376cu; esp -= 4; W32(esp, v); }
/* 50fc29: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50fc2eu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50fc2e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50fc31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50fc33: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50fc35: call 0x554df6 */
  esp -= 4; W32(esp, 0x50fc3au); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50fc3a: guest_badaddr(0x50fc3a); return;
}

void f_50fcb0(void) {
  LOAD_REGS();
L_50fcb0: /* 50fcb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50fcb1: mov ebp, esp */
  ebp = esp;
/* 50fcb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50fcb5: push 0x556fb0 */
  { uint32_t v = 0x556fb0u; esp -= 4; W32(esp, v); }
/* 50fcba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50fcc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50fcc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50fcc8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 50fccb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50fccc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50fccd: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 50fcd0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 50fcd3: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 50fcd6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50fcd7: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 50fcda: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 50fcdc: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 50fcdf: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 50fce2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 50fce5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50fce6: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 50fce9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50fcea: mov ecx, edi */
  ecx = edi;
/* 50fcec: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 50fcf3: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0x50fcf6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50fcf6: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 50fcf9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50fcfb: je 0x50fd76 */
  if (zf) goto L_50fd76;
L_50fcfd: /* 50fcfd: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 50fd00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50fd01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50fd02: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x50fd07u); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 50fd07: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 50fd0a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50fd0d: xor eax, eax */
  eax = 0;
/* 50fd0f: nop  */
L_50fd10: /* 50fd10: cmp eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50fd12: jge 0x50fd17 */
  if ((sf == of)) goto L_50fd17;
L_50fd14: /* 50fd14: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 50fd15: jmp 0x50fd10 */
  goto L_50fd10;
L_50fd17: /* 50fd17: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 50fd1a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 50fd1c: mov ecx, esi */
  ecx = esi;
/* 50fd1e: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 50fd24: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50fd29u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 50fd29: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
L_50fd30: /* 50fd30: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 50fd33: cmp ecx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50fd36: jge 0x50fd97 */
  if ((sf == of)) goto L_50fd97;
L_50fd38: /* 50fd38: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 50fd3b: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 50fd3e: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 50fd41: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50fd43: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 50fd46: jle 0x50fd64 */
  if ((zf || sf != of)) goto L_50fd64;
L_50fd48: /* 50fd48: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 50fd4b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 50fd4c: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 50fd4f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 50fd51: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 50fd54: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 50fd58: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 50fd5a: mov ecx, esi */
  ecx = esi;
/* 50fd5c: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 50fd5f: call 0x4e4502 */
  esp -= 4; W32(esp, 0x50fd64u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_50fd64: /* 50fd64: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50fd66: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 50fd68: lea eax, [eax + ebx*4] */
  eax = (uint32_t)(eax + ebx*4);
/* 50fd6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50fd6c: mov ecx, edi */
  ecx = edi;
/* 50fd6e: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x50fd71u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50fd71: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 50fd74: jmp 0x50fd30 */
  goto L_50fd30;
L_50fd76: /* 50fd76: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50fd77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50fd78: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x50fd7du); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 50fd7d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50fd80: xor ebx, ebx */
  ebx = 0;
L_50fd82: /* 50fd82: cmp ebx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50fd85: jge 0x50fd97 */
  if ((sf == of)) goto L_50fd97;
L_50fd87: /* 50fd87: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50fd89: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 50fd8b: lea eax, [eax + ebx*4] */
  eax = (uint32_t)(eax + ebx*4);
/* 50fd8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50fd8f: mov ecx, edi */
  ecx = edi;
/* 50fd91: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x50fd94u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 50fd94: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 50fd95: jmp 0x50fd82 */
  goto L_50fd82;
L_50fd97: /* 50fd97: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 50fd9a: mov eax, edi */
  eax = edi;
/* 50fd9c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50fd9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50fd9e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 50fda5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50fda6: mov esp, ebp */
  esp = ebp;
/* 50fda8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50fda9: ret  */
  esp += 4; SPILL(); return;
}

void f_50fdaa(void) {
  LOAD_REGS();
L_50fdaa: /* 50fdaa: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 50fdad: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 50fdb2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 50fdb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50fdb6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 50fdb9: call 0x554df6 */
  esp -= 4; W32(esp, 0x50fdbeu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_50fdbe(); return;
}

void f_50fdbe(void) {
  LOAD_REGS();
L_50fdbe: /* 50fdbe: push 0x56bb08 */
  { uint32_t v = 0x56bb08u; esp -= 4; W32(esp, v); }
/* 50fdc3: push 0x5a376c */
  { uint32_t v = 0x5a376cu; esp -= 4; W32(esp, v); }
/* 50fdc8: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x50fdcdu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 50fdcd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 50fdd0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50fdd2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50fdd4: call 0x554df6 */
  esp -= 4; W32(esp, 0x50fdd9u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_50fdd9: guest_badaddr(0x50fdd9); return;
}

void f_50fe30(void) {
  LOAD_REGS();
L_50fe30: /* 50fe30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50fe31: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 50fe35: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 50fe36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50fe37: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50fe38: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 50fe3a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50fe3c: je 0x50fe43 */
  if (zf) goto L_50fe43;
L_50fe3e: /* 50fe3e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 50fe41: jmp 0x50fe45 */
  goto L_50fe45;
L_50fe43: /* 50fe43: xor eax, eax */
  eax = 0;
L_50fe45: /* 50fe45: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 50fe48: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 50fe49: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 50fe4b: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 50fe4e: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 50fe51: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50fe54: je 0x50fe75 */
  if (zf) goto L_50fe75;
L_50fe56: /* 50fe56: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 50fe58: jmp 0x50fe60 */
  goto L_50fe60;
L_50fe60: /* 50fe60: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 50fe63: mov ebp, dword ptr [esi + edx*4 + 4] */
  ebp = R32((uint32_t)(esi + edx*4 + 0x4u));
/* 50fe67: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50fe69: lea edx, [esi + edx*4] */
  edx = (uint32_t)(esi + edx*4);
/* 50fe6c: je 0x50fe87 */
  if (zf) goto L_50fe87;
L_50fe6e: /* 50fe6e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 50fe70: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50fe73: jne 0x50fe60 */
  if (!zf) goto L_50fe60;
L_50fe75: /* 50fe75: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 50fe79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50fe7a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50fe7b: call 0x4e2860 */
  esp -= 4; W32(esp, 0x50fe80u); SPILL(); f_4e2860(); if (g_unwind) return; RELOAD();
/* 50fe80: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50fe81: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50fe82: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50fe83: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50fe84: ret 8 */
  esp += 12; SPILL(); return;
L_50fe87: /* 50fe87: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 50fe8b: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 50fe8d: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 50fe90: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 50fe93: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50fe94: mov dword ptr [esi + eax + 8], edx */
  W32((uint32_t)(esi + eax + 0x8u), edx);
/* 50fe98: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 50fe9a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50fe9b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50fe9c: lea eax, [eax + ecx + 8] */
  eax = (uint32_t)(eax + ecx + 0x8u);
/* 50fea0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50fea1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_50fe5a(void) {
  LOAD_REGS();
L_50fe5a: /* 50fe5a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_50fe60: /* 50fe60: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 50fe63: mov ebp, dword ptr [esi + edx*4 + 4] */
  ebp = R32((uint32_t)(esi + edx*4 + 0x4u));
/* 50fe67: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50fe69: lea edx, [esi + edx*4] */
  edx = (uint32_t)(esi + edx*4);
/* 50fe6c: je 0x50fe87 */
  if (zf) goto L_50fe87;
L_50fe6e: /* 50fe6e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 50fe70: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 50fe73: jne 0x50fe60 */
  if (!zf) goto L_50fe60;
L_50fe75: /* 50fe75: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 50fe79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 50fe7a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 50fe7b: call 0x4e2860 */
  esp -= 4; W32(esp, 0x50fe80u); SPILL(); f_4e2860(); if (g_unwind) return; RELOAD();
/* 50fe80: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50fe81: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50fe82: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50fe83: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50fe84: ret 8 */
  esp += 12; SPILL(); return;
L_50fe87: /* 50fe87: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 50fe8b: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 50fe8d: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 50fe90: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 50fe93: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 50fe94: mov dword ptr [esi + eax + 8], edx */
  W32((uint32_t)(esi + eax + 0x8u), edx);
/* 50fe98: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 50fe9a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50fe9b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 50fe9c: lea eax, [eax + ecx + 8] */
  eax = (uint32_t)(eax + ecx + 0x8u);
/* 50fea0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 50fea1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_50fed0(void) {
  LOAD_REGS();
L_50fed0: /* 50fed0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 50fed4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50fed6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50fed7: mov esi, ecx */
  esi = ecx;
/* 50fed9: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50fedb: je 0x50feee */
  if (zf) goto L_50feee;
L_50fedd: /* 50fedd: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 50fee0: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 50fee3: call 0x4e3deb */
  esp -= 4; W32(esp, 0x50fee8u); SPILL(); f_4e3deb(); if (g_unwind) return; RELOAD();
/* 50fee8: mov eax, esi */
  eax = esi;
/* 50feea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50feeb: ret 4 */
  esp += 8; SPILL(); return;
L_50feee: /* 50feee: xor eax, eax */
  eax = 0;
/* 50fef0: mov ecx, esi */
  ecx = esi;
/* 50fef2: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 50fef5: call 0x4e3deb */
  esp -= 4; W32(esp, 0x50fefau); SPILL(); f_4e3deb(); if (g_unwind) return; RELOAD();
/* 50fefa: mov eax, esi */
  eax = esi;
/* 50fefc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50fefd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50ff10(void) {
  LOAD_REGS();
L_50ff10: /* 50ff10: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 50ff13: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 50ff16: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 50ff19: jmp 0x4e3deb */
  SPILL(); f_4e3deb(); return;
}

void f_50ff30(void) {
  LOAD_REGS();
L_50ff30: /* 50ff30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 50ff34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 50ff36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50ff37: mov esi, ecx */
  esi = ecx;
/* 50ff39: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 50ff3b: je 0x50ff4e */
  if (zf) goto L_50ff4e;
L_50ff3d: /* 50ff3d: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 50ff40: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 50ff43: call 0x4e1488 */
  esp -= 4; W32(esp, 0x50ff48u); SPILL(); f_4e1488(); if (g_unwind) return; RELOAD();
/* 50ff48: mov eax, esi */
  eax = esi;
/* 50ff4a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50ff4b: ret 4 */
  esp += 8; SPILL(); return;
L_50ff4e: /* 50ff4e: xor eax, eax */
  eax = 0;
/* 50ff50: mov ecx, esi */
  ecx = esi;
/* 50ff52: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 50ff55: call 0x4e1488 */
  esp -= 4; W32(esp, 0x50ff5au); SPILL(); f_4e1488(); if (g_unwind) return; RELOAD();
/* 50ff5a: mov eax, esi */
  eax = esi;
/* 50ff5c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 50ff5d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_50ff70(void) {
  LOAD_REGS();
L_50ff70: /* 50ff70: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 50ff73: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 50ff76: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 50ff79: jmp 0x4e1488 */
  SPILL(); f_4e1488(); return;
}

void f_50ff90(void) {
  LOAD_REGS();
L_50ff90: /* 50ff90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 50ff92: push 0x556fc8 */
  { uint32_t v = 0x556fc8u; esp -= 4; W32(esp, v); }
/* 50ff97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 50ff9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 50ff9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 50ffa5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 50ffa6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 50ffa7: mov esi, ecx */
  esi = ecx;
/* 50ffa9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50ffaa: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 50ffae: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 50ffb1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 50ffb3: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 50ffbb: jge 0x50ffd4 */
  if ((sf == of)) goto L_50ffd4;
L_50ffbd: /* 50ffbd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 50ffc2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 50ffc7: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 50ffcc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50ffd1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50ffd1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50ffd4: /* 50ffd4: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 50ffd7: jle 0x50fff0 */
  if ((zf || sf != of)) goto L_50fff0;
L_50ffd9: /* 50ffd9: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 50ffde: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 50ffe3: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 50ffe8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x50ffedu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 50ffed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_50fff0: /* 50fff0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 50fff2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 50fff3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 50fff5: mov ecx, esi */
  ecx = esi;
/* 50fff7: call 0x4e438b */
  esp -= 4; W32(esp, 0x50fffcu); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 50fffc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 50fffe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510000: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 510008: je 0x510016 */
  if (zf) goto L_510016;
L_51000a: /* 51000a: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 510010: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 510012: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510013: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x510016u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_510016: /* 510016: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 51001a: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 510020: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 510027: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 51002e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51002f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 510030: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 510037: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51003a: ret  */
  esp += 4; SPILL(); return;
}

void f_510020(void) {
  LOAD_REGS();
L_510020: /* 510020: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 510027: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 51002e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51002f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 510030: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 510037: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51003a: ret  */
  esp += 4; SPILL(); return;
}

void f_510070(void) {
  LOAD_REGS();
L_510070: /* 510070: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 510071: mov ebp, esp */
  ebp = esp;
/* 510073: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 510075: push 0x556fe0 */
  { uint32_t v = 0x556fe0u; esp -= 4; W32(esp, v); }
/* 51007a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 510080: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510081: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 510088: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51008b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51008c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 51008f: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 510091: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 510092: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 510093: mov esi, ecx */
  esi = ecx;
/* 510095: xor edi, edi */
  edi = 0;
/* 510097: mov ecx, ebx */
  ecx = ebx;
/* 510099: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 51009c: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 51009f: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 5100a2: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x5100a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5100a5: add eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5100a8: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 5100ab: cmp dword ptr [ebx + 4], 0x73 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(0x73u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5100af: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 5100b2: jge 0x5100dc */
  if ((sf == of)) goto L_5100dc;
L_5100b4: /* 5100b4: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 5100b7: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 5100bd: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 5100c0: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5100c3: push 0x5a4ee4 */
  { uint32_t v = 0x5a4ee4u; esp -= 4; W32(esp, v); }
/* 5100c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5100c9: call 0x4e4192 */
  esp -= 4; W32(esp, 0x5100ceu); SPILL(); f_4e4192(); if (g_unwind) return; RELOAD();
/* 5100ce: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5100d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5100d3: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 5100da: je 0x5100df */
  if (zf) goto L_5100df;
L_5100dc: /* 5100dc: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_5100df: /* 5100df: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5100e1: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 5100e4: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* 5100e7: je 0x5100f1 */
  if (zf) goto L_5100f1;
L_5100e9: /* 5100e9: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 5100ec: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 5100ef: jmp 0x5100f4 */
  goto L_5100f4;
L_5100f1: /* 5100f1: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
L_5100f4: /* 5100f4: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5100f7: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x5100fcu); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 5100fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_510100: /* 510100: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 510103: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 510105: je 0x510297 */
  if (zf) goto L_510297;
L_51010b: /* 51010b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 51010e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510110: mov edi, dword ptr [esi + 0x20] */
  edi = R32((uint32_t)(esi + 0x20u));
/* 510113: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 510116: je 0x51018e */
  if (zf) goto L_51018e;
L_510118: /* 510118: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 51011e: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 510121: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 510124: push 0x5a4f04 */
  { uint32_t v = 0x5a4f04u; esp -= 4; W32(esp, v); }
/* 510129: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51012a: call 0x4e4192 */
  esp -= 4; W32(esp, 0x51012fu); SPILL(); f_4e4192(); if (g_unwind) return; RELOAD();
/* 51012f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 510132: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510134: je 0x510154 */
  if (zf) goto L_510154;
L_510136: /* 510136: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 51013c: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 51013f: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 510142: push 0x5a4f24 */
  { uint32_t v = 0x5a4f24u; esp -= 4; W32(esp, v); }
/* 510147: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 510148: call 0x4e4192 */
  esp -= 4; W32(esp, 0x51014du); SPILL(); f_4e4192(); if (g_unwind) return; RELOAD();
/* 51014d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 510150: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510152: jne 0x51018e */
  if (!zf) goto L_51018e;
L_510154: /* 510154: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 510159: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 51015c: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 510162: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 510165: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 510166: push 0x5a4f58 */
  { uint32_t v = 0x5a4f58u; esp -= 4; W32(esp, v); }
/* 51016b: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 510170: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 510171: call 0x4e30df */
  esp -= 4; W32(esp, 0x510176u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 510176: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_510179: /* 510179: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 51017c: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 51017f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 510182: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x510187u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 510187: xor edi, edi */
  edi = 0;
/* 510189: jmp 0x510100 */
  goto L_510100;
L_51018e: /* 51018e: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 510191: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 510194: jne 0x510179 */
  if (!zf) goto L_510179;
L_510196: /* 510196: test ah, 0x20 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 510199: je 0x5101a2 */
  if (zf) goto L_5101a2;
L_51019b: /* 51019b: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
/* 51019e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5101a0: jne 0x510179 */
  if (!zf) goto L_510179;
L_5101a2: /* 5101a2: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5101a7: je 0x5101b7 */
  if (zf) goto L_5101b7;
L_5101a9: /* 5101a9: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 5101ac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5101ae: jne 0x510179 */
  if (!zf) goto L_510179;
L_5101b0: /* 5101b0: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 5101b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5101b5: jne 0x510179 */
  if (!zf) goto L_510179;
L_5101b7: /* 5101b7: xor edi, edi */
  edi = 0;
L_5101b9: /* 5101b9: cmp edi, dword ptr [esi + 0x34] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5101bc: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 5101bf: jge 0x510179 */
  if ((sf == of)) goto L_510179;
L_5101c1: /* 5101c1: cmp dword ptr [ebx + 4], 0x76 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(0x76u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5101c5: jge 0x510219 */
  if ((sf == of)) goto L_510219;
L_5101c7: /* 5101c7: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 5101ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5101cc: je 0x510219 */
  if (zf) goto L_510219;
L_5101ce: /* 5101ce: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 5101d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5101d3: je 0x510219 */
  if (zf) goto L_510219;
L_5101d5: /* 5101d5: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 5101d7: mov ecx, ebx */
  ecx = ebx;
/* 5101d9: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x5101dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5101dc: cmp eax, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5101df: jl 0x510219 */
  if ((sf != of)) goto L_510219;
L_5101e1: /* 5101e1: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5101e4: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 5101e7: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 5101ec: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 5101ef: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 5101f2: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 5101f5: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5101f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5101f9: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 5101ff: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 510202: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510203: push 0x5a4f98 */
  { uint32_t v = 0x5a4f98u; esp -= 4; W32(esp, v); }
/* 510208: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 51020d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51020e: call 0x4e30df */
  esp -= 4; W32(esp, 0x510213u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 510213: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 510216: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 510217: jmp 0x5101b9 */
  goto L_5101b9;
L_510219: /* 510219: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 51021c: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 51021f: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 510222: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 510224: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 510226: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 510229: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51022b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 51022d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51022e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51022f: mov ecx, esi */
  ecx = esi;
/* 510231: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x510237u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 510237: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 510238: jmp 0x5101b9 */
  goto L_5101b9;
L_510297: /* 510297: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 51029a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51029b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51029c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5102a3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5102a4: mov esp, ebp */
  esp = ebp;
/* 5102a6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5102a7: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_51023d(void) {
  LOAD_REGS();
L_51023d: /* 51023d: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 510240: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 510245: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 510248: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510249: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 51024c: call 0x554df6 */
  esp -= 4; W32(esp, 0x510251u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_510251(); return;
}

void f_510251(void) {
  LOAD_REGS();
L_510251: /* 510251: push 0x56bb20 */
  { uint32_t v = 0x56bb20u; esp -= 4; W32(esp, v); }
/* 510256: push 0x5a5034 */
  { uint32_t v = 0x5a5034u; esp -= 4; W32(esp, v); }
/* 51025b: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x510260u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 510260: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 510263: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 510266: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 51026b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51026e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51026f: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 510272: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 510275: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 510276: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 510279: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51027b: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x510280u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 510280: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510281: push 0x5a503c */
  { uint32_t v = 0x5a503cu; esp -= 4; W32(esp, v); }
/* 510286: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x51028bu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 51028b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51028e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 510290: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 510292: call 0x554df6 */
  esp -= 4; W32(esp, 0x510297u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 510297: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 51029a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51029b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51029c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5102a3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5102a4: mov esp, ebp */
  esp = ebp;
/* 5102a6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5102a7: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_510340(void) {
  LOAD_REGS();
L_510340: /* 510340: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 510341: mov ebp, esp */
  ebp = esp;
/* 510343: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 510345: push 0x556ff0 */
  { uint32_t v = 0x556ff0u; esp -= 4; W32(esp, v); }
/* 51034a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 510350: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510351: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 510358: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51035b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51035c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51035d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51035e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 510361: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 510364: xor esi, esi */
  esi = 0;
/* 510366: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 510368: mov ebx, ecx */
  ebx = ecx;
/* 51036a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 51036d: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 510370: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 510373: mov dword ptr [ebp - 0x20], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xffffffffu);
/* 51037a: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 51037d: jne 0x51039b */
  if (!zf) goto L_51039b;
L_51037f: /* 51037f: cmp dword ptr [edi + 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x14u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 510382: jne 0x51039b */
  if (!zf) goto L_51039b;
L_510384: /* 510384: push 0x1fd */
  { uint32_t v = 0x1fdu; esp -= 4; W32(esp, v); }
/* 510389: push 0x5a5054 */
  { uint32_t v = 0x5a5054u; esp -= 4; W32(esp, v); }
/* 51038e: push 0x5a5060 */
  { uint32_t v = 0x5a5060u; esp -= 4; W32(esp, v); }
/* 510393: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x510398u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 510398: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_51039b: /* 51039b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 51039e: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5103a0: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 5103a3: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 5103a6: je 0x5103ba */
  if (zf) goto L_5103ba;
L_5103a8: /* 5103a8: mov ecx, dword ptr [eax + 0x4e8] */
  ecx = R32((uint32_t)(eax + 0x4e8u));
/* 5103ae: mov edx, dword ptr [eax + 0x4ec] */
  edx = R32((uint32_t)(eax + 0x4ecu));
/* 5103b4: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 5103b7: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
L_5103ba: /* 5103ba: cmp dword ptr [edi + 0x10], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x10u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5103bd: je 0x5107f4 */
  if (zf) goto L_5107f4;
L_5103c3: /* 5103c3: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 5103c6: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 5103ca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_5103d0: /* 5103d0: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 5103d3: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 5103d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5103d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5103d8: call 0x4e1f8c */
  esp -= 4; W32(esp, 0x5103ddu); SPILL(); f_4e1f8c(); if (g_unwind) return; RELOAD();
/* 5103dd: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 5103e0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5103e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5103e5: je 0x510932 */
  if (zf) goto L_510932;
L_5103eb: /* 5103eb: mov esi, dword ptr [ebx + 0x64] */
  esi = R32((uint32_t)(ebx + 0x64u));
/* 5103ee: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
L_5103f1: /* 5103f1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5103f3: je 0x5103ff */
  if (zf) goto L_5103ff;
L_5103f5: /* 5103f5: cmp dword ptr [esi + 0x20], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x20u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5103f8: je 0x51042c */
  if (zf) goto L_51042c;
L_5103fa: /* 5103fa: mov esi, dword ptr [esi + 0x4c] */
  esi = R32((uint32_t)(esi + 0x4cu));
/* 5103fd: jmp 0x5103f1 */
  goto L_5103f1;
L_5103ff: /* 5103ff: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 510405: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 510408: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51040a: mov ecx, ebx */
  ecx = ebx;
/* 51040c: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 51040f: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x510414u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 510414: mov edx, dword ptr [0x5a0c98] */
  edx = R32((uint32_t)(0x5a0c98u));
/* 51041a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51041b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51041c: push 0x5a5080 */
  { uint32_t v = 0x5a5080u; esp -= 4; W32(esp, v); }
/* 510421: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 510426: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 510427: jmp 0x5106bb */
  goto L_5106bb;
L_51042c: /* 51042c: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 51042f: nop  */
L_510430: /* 510430: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510432: je 0x51051f */
  if (zf) goto L_51051f;
L_510438: /* 510438: cmp eax, 0x6a60e0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a60e0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51043d: je 0x510444 */
  if (zf) goto L_510444;
L_51043f: /* 51043f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 510442: jmp 0x510430 */
  goto L_510430;
L_510444: /* 510444: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510446: je 0x51051f */
  if (zf) goto L_51051f;
L_51044c: /* 51044c: cmp byte ptr [ebp - 0x58], 9 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffa8u))); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 510450: je 0x51051f */
  if (zf) goto L_51051f;
L_510456: /* 510456: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 510459: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_510460: /* 510460: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510462: je 0x510474 */
  if (zf) goto L_510474;
L_510464: /* 510464: cmp eax, 0x6a60e0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a60e0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 510469: je 0x510470 */
  if (zf) goto L_510470;
L_51046b: /* 51046b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 51046e: jmp 0x510460 */
  goto L_510460;
L_510470: /* 510470: mov eax, esi */
  eax = esi;
/* 510472: jmp 0x510476 */
  goto L_510476;
L_510474: /* 510474: xor eax, eax */
  eax = 0;
L_510476: /* 510476: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* 510479: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 51047b: call dword ptr [eax + 0xb4] */
  { uint32_t t = R32((uint32_t)(eax + 0xb4u)); esp -= 4; W32(esp, 0x510481u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 510481: cmp al, byte ptr [ebp - 0x58] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebp + 0xffffffa8u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 510484: jne 0x51051f */
  if (!zf) goto L_51051f;
L_51048a: /* 51048a: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 51048f: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 510492: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 510495: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 510498: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 51049b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51049c: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 51049f: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 5104a4: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 5104a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5104a8: push 0x5a50b8 */
  { uint32_t v = 0x5a50b8u; esp -= 4; W32(esp, v); }
/* 5104ad: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 5104b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5104b3: call 0x4e30df */
  esp -= 4; W32(esp, 0x5104b8u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 5104b8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5104bb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5104bd: je 0x5104d6 */
  if (zf) goto L_5104d6;
L_5104bf: /* 5104bf: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
L_5104c2: /* 5104c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5104c4: je 0x5104d6 */
  if (zf) goto L_5104d6;
L_5104c6: /* 5104c6: cmp eax, 0x6a60e0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a60e0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5104cb: je 0x5104d2 */
  if (zf) goto L_5104d2;
L_5104cd: /* 5104cd: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 5104d0: jmp 0x5104c2 */
  goto L_5104c2;
L_5104d2: /* 5104d2: mov eax, esi */
  eax = esi;
/* 5104d4: jmp 0x5104d8 */
  goto L_5104d8;
L_5104d6: /* 5104d6: xor eax, eax */
  eax = 0;
L_5104d8: /* 5104d8: mov edi, dword ptr [eax + 0x6c] */
  edi = R32((uint32_t)(eax + 0x6cu));
/* 5104db: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 5104de: mov esi, dword ptr [esi + 0x48] */
  esi = R32((uint32_t)(esi + 0x48u));
/* 5104e1: mov ecx, dword ptr [esi + eax + 4] */
  ecx = R32((uint32_t)(esi + eax + 0x4u));
/* 5104e5: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 5104e7: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 5104ea: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5104ec: jg 0x510500 */
  if ((!zf && sf == of)) goto L_510500;
L_5104ee: /* 5104ee: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 5104f0: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 5104f3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5104f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5104f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5104f6: mov ecx, esi */
  ecx = esi;
/* 5104f8: call 0x4e33b4 */
  esp -= 4; W32(esp, 0x5104fdu); SPILL(); f_4e33b4(); if (g_unwind) return; RELOAD();
/* 5104fd: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
L_510500: /* 510500: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 510503: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 510505: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 510508: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 51050b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51050d: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 51050f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 510510: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 510511: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510512: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 510515: call 0x4e35c1 */
  esp -= 4; W32(esp, 0x51051au); SPILL(); f_4e35c1(); if (g_unwind) return; RELOAD();
/* 51051a: jmp 0x5103d0 */
  goto L_5103d0;
L_51051f: /* 51051f: cmp byte ptr [ebp - 0x58], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffa8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 510523: jne 0x510561 */
  if (!zf) goto L_510561;
L_510525: /* 510525: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 510527: mov ecx, esi */
  ecx = esi;
/* 510529: call dword ptr [edx + 0xb4] */
  { uint32_t t = R32((uint32_t)(edx + 0xb4u)); esp -= 4; W32(esp, 0x51052fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51052f: cmp al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 510531: jne 0x510561 */
  if (!zf) goto L_510561;
L_510533: /* 510533: lea eax, [ebp + 0x13] */
  eax = (uint32_t)(ebp + 0x13u);
/* 510536: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510537: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 510538: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x51053du); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 51053d: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 510540: imul edx, dword ptr [ebp - 0x48] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  edx = (uint32_t)r;
  }
/* 510544: movzx ecx, byte ptr [ebp + 0x13] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0x13u)));
/* 510548: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 51054b: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 51054e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 510551: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 510553: fild dword ptr [ebp - 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 510556: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 510559: fstp dword ptr [edx + eax] */
  WF32((uint32_t)(edx + eax), ST0); FPOP();
/* 51055c: jmp 0x5103d0 */
  goto L_5103d0;
L_510561: /* 510561: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 510563: mov ecx, esi */
  ecx = esi;
/* 510565: call dword ptr [edx + 0xb4] */
  { uint32_t t = R32((uint32_t)(edx + 0xb4u)); esp -= 4; W32(esp, 0x51056bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51056b: mov dl, byte ptr [ebp - 0x58] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffa8u))) & 0xffu);
/* 51056e: cmp dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 510570: je 0x5105c4 */
  if (zf) goto L_5105c4;
L_510572: /* 510572: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 510575: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 510578: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 51057d: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 510580: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 510583: mov ebx, dword ptr [eax + edx*4] */
  ebx = R32((uint32_t)(eax + edx*4));
/* 510586: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 510588: mov ecx, esi */
  ecx = esi;
/* 51058a: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 51058d: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 510590: call dword ptr [eax + 0xb4] */
  { uint32_t t = R32((uint32_t)(eax + 0xb4u)); esp -= 4; W32(esp, 0x510596u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 510596: movzx edx, byte ptr [ebp - 0x58] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffa8u)));
/* 51059a: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* 51059d: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 5105a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5105a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5105a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5105a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5105a6: push 0x5a5110 */
  { uint32_t v = 0x5a5110u; esp -= 4; W32(esp, v); }
/* 5105ab: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 5105b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5105b1: call 0x4e30df */
  esp -= 4; W32(esp, 0x5105b6u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 5105b6: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5105b9: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 5105bc: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5105bf: jmp 0x5106c3 */
  goto L_5106c3;
L_5105c4: /* 5105c4: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 5105c7: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 5105ca: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5105cc: jl 0x510606 */
  if ((sf != of)) goto L_510606;
L_5105ce: /* 5105ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5105cf: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 5105d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5105d5: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 5105d8: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 5105db: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 5105de: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 5105e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5105e2: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 5105e5: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 5105e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5105e9: push 0x5a5170 */
  { uint32_t v = 0x5a5170u; esp -= 4; W32(esp, v); }
L_5105ee: /* 5105ee: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 5105f3: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 5105f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5105f9: call 0x4e30df */
  esp -= 4; W32(esp, 0x5105feu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 5105fe: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 510601: jmp 0x5106c3 */
  goto L_5106c3;
L_510606: /* 510606: cmp dl, 0xa */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 510609: jne 0x510661 */
  if (!zf) goto L_510661;
L_51060b: /* 51060b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51060c: call 0x4e2437 */
  esp -= 4; W32(esp, 0x510611u); SPILL(); f_4e2437(); if (g_unwind) return; RELOAD();
/* 510611: mov eax, dword ptr [eax + 0x6c] */
  eax = R32((uint32_t)(eax + 0x6cu));
/* 510614: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 510617: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 51061a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51061d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51061f: je 0x510661 */
  if (zf) goto L_510661;
L_510621: /* 510621: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 510622: call 0x4e2437 */
  esp -= 4; W32(esp, 0x510627u); SPILL(); f_4e2437(); if (g_unwind) return; RELOAD();
/* 510627: mov eax, dword ptr [eax + 0x6c] */
  eax = R32((uint32_t)(eax + 0x6cu));
/* 51062a: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 51062d: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 510632: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 510635: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 510638: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 51063b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51063e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51063f: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 510642: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 510645: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 510648: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 510649: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 51064c: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 51064f: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 510652: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 510653: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 510656: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 510659: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51065a: push 0x5a51b0 */
  { uint32_t v = 0x5a51b0u; esp -= 4; W32(esp, v); }
/* 51065f: jmp 0x5105ee */
  goto L_5105ee;
L_510661: /* 510661: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 510662: mov ecx, esi */
  ecx = esi;
/* 510664: call 0x4e19c9 */
  esp -= 4; W32(esp, 0x510669u); SPILL(); f_4e19c9(); if (g_unwind) return; RELOAD();
/* 510669: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51066b: jne 0x510720 */
  if (!zf) goto L_510720;
L_510671: /* 510671: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 510674: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 51067a: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 51067d: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 510680: push 0x5a520c */
  { uint32_t v = 0x5a520cu; esp -= 4; W32(esp, v); }
/* 510685: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510686: call 0x4e26df */
  esp -= 4; W32(esp, 0x51068bu); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 51068b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51068e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510690: je 0x5106c3 */
  if (zf) goto L_5106c3;
L_510692: /* 510692: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 510697: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 51069a: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 51069d: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 5106a0: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 5106a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5106a4: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 5106a7: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 5106ac: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 5106af: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5106b0: push 0x5a5220 */
  { uint32_t v = 0x5a5220u; esp -= 4; W32(esp, v); }
/* 5106b5: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 5106ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_5106bb: /* 5106bb: call 0x4e30df */
  esp -= 4; W32(esp, 0x5106c0u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 5106c0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5106c3: /* 5106c3: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 5106c6: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 5106cc: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 5106cf: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5106d2: push 0x5a52e8 */
  { uint32_t v = 0x5a52e8u; esp -= 4; W32(esp, v); }
/* 5106d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5106d8: call 0x4e26df */
  esp -= 4; W32(esp, 0x5106ddu); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 5106dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5106e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5106e2: je 0x510705 */
  if (zf) goto L_510705;
L_5106e4: /* 5106e4: movzx ecx, byte ptr [ebp - 0x58] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffa8u)));
/* 5106e8: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 5106eb: mov eax, dword ptr [0x5a0c98] */
  eax = R32((uint32_t)(0x5a0c98u));
/* 5106f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5106f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5106f2: push 0x5a52f8 */
  { uint32_t v = 0x5a52f8u; esp -= 4; W32(esp, v); }
/* 5106f7: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 5106fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5106fd: call 0x4e30df */
  esp -= 4; W32(esp, 0x510702u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 510702: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_510705: /* 510705: xor esi, esi */
  esi = 0;
L_510707: /* 510707: cmp esi, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51070a: jge 0x5103d0 */
  if ((sf == of)) goto L_5103d0;
L_510710: /* 510710: lea ecx, [ebp - 0x11] */
  ecx = (uint32_t)(ebp + 0xffffffefu);
/* 510713: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 510714: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 510715: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x51071au); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 51071a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51071d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 51071e: jmp 0x510707 */
  goto L_510707;
L_510720: /* 510720: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 510723: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 510725: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x510728u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 510728: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 51072b: imul ecx, dword ptr [ebp - 0x48] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  ecx = (uint32_t)r;
  }
/* 51072f: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 510732: mov edi, eax */
  edi = eax;
/* 510734: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 510737: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510738: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 51073b: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 51073d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 510740: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 510742: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 510743: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 510744: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 510745: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 510748: call 0x4e35c1 */
  esp -= 4; W32(esp, 0x51074du); SPILL(); f_4e35c1(); if (g_unwind) return; RELOAD();
/* 51074d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 510750: cmp dword ptr [eax + 4], 0x76 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x76u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 510754: jge 0x5103d0 */
  if ((sf == of)) goto L_5103d0;
L_51075a: /* 51075a: mov ecx, eax */
  ecx = eax;
/* 51075c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 51075e: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x510761u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 510761: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 510764: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 510766: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 510768: je 0x5103d0 */
  if (zf) goto L_5103d0;
L_51076e: /* 51076e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51076f: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 510772: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510773: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 510778: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 51077b: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 51077e: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 510781: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 510782: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 510785: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 51078a: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 51078d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51078e: push 0x5a5270 */
  { uint32_t v = 0x5a5270u; esp -= 4; W32(esp, v); }
/* 510793: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 510798: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510799: call 0x4e30df */
  esp -= 4; W32(esp, 0x51079eu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 51079e: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 5107a1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 5107a4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5107a6: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5107a9: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5107ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5107ac: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x5107afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5107af: jmp 0x5103d0 */
  goto L_5103d0;
L_5107f4: /* 5107f4: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5107f6: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 5107fa: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 5107fd: je 0x510807 */
  if (zf) goto L_510807;
L_5107ff: /* 5107ff: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 510802: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 510805: jmp 0x51080a */
  goto L_51080a;
L_510807: /* 510807: mov dword ptr [ebp - 0x40], esi */
  W32((uint32_t)(ebp + 0xffffffc0u), esi);
L_51080a: /* 51080a: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 51080d: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x510812u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
L_510812: /* 510812: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 510815: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510817: je 0x510920 */
  if (zf) goto L_510920;
L_51081d: /* 51081d: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 510820: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 510823: jne 0x51090a */
  if (!zf) goto L_51090a;
L_510829: /* 510829: test ah, 0x20 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 51082c: je 0x510839 */
  if (zf) goto L_510839;
L_51082e: /* 51082e: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 510831: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510833: jne 0x51090a */
  if (!zf) goto L_51090a;
L_510839: /* 510839: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51083e: je 0x510856 */
  if (zf) goto L_510856;
L_510840: /* 510840: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 510843: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510845: jne 0x51090a */
  if (!zf) goto L_51090a;
L_51084b: /* 51084b: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 51084e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510850: jne 0x51090a */
  if (!zf) goto L_51090a;
L_510856: /* 510856: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 510859: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 51085c: xor ebx, ebx */
  ebx = 0;
L_51085e: /* 51085e: cmp ebx, dword ptr [esi + 0x34] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 510861: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 510864: jge 0x51090a */
  if ((sf == of)) goto L_51090a;
L_51086a: /* 51086a: mov edi, dword ptr [esi + 0x38] */
  edi = R32((uint32_t)(esi + 0x38u));
/* 51086d: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 510870: imul edi, ebx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebx);
  edi = (uint32_t)r;
  }
/* 510873: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 510875: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 510878: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 51087b: jmp 0x510880 */
  goto L_510880;
L_510880: /* 510880: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510882: je 0x510890 */
  if (zf) goto L_510890;
L_510884: /* 510884: cmp eax, 0x5f0d80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5f0d80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 510889: je 0x510897 */
  if (zf) goto L_510897;
L_51088b: /* 51088b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 51088e: jmp 0x510880 */
  goto L_510880;
L_510890: /* 510890: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 510893: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510895: je 0x5108d0 */
  if (zf) goto L_5108d0;
L_510897: /* 510897: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 51089a: lea ecx, [eax + edi] */
  ecx = (uint32_t)(eax + edi);
/* 51089d: xor edx, edx */
  edx = 0;
/* 51089f: cmp ecx, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5108a2: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5108a5: setg dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 5108a8: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 5108ab: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 5108ac: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 5108ae: add eax, dword ptr [esi + 0x48] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x48u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5108b1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5108b3: je 0x5108b9 */
  if (zf) goto L_5108b9;
L_5108b5: /* 5108b5: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5108b7: jmp 0x5108bb */
  goto L_5108bb;
L_5108b9: /* 5108b9: xor ecx, ecx */
  ecx = 0;
L_5108bb: /* 5108bb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 5108bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5108be: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5108c1: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5108c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5108c4: mov ecx, esi */
  ecx = esi;
/* 5108c6: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x5108ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5108cc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5108ce: jne 0x510904 */
  if (!zf) goto L_510904;
L_5108d0: /* 5108d0: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 5108d3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 5108d6: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 5108d8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5108d9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5108da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5108db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5108dc: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 5108df: call 0x4e3c4c */
  esp -= 4; W32(esp, 0x5108e4u); SPILL(); f_4e3c4c(); if (g_unwind) return; RELOAD();
/* 5108e4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 5108e7: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 5108ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5108eb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5108ec: call 0x4e1f8c */
  esp -= 4; W32(esp, 0x5108f1u); SPILL(); f_4e1f8c(); if (g_unwind) return; RELOAD();
/* 5108f1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 5108f4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5108f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5108f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5108fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5108fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5108fc: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 5108ff: call 0x4e35c1 */
  esp -= 4; W32(esp, 0x510904u); SPILL(); f_4e35c1(); if (g_unwind) return; RELOAD();
L_510904: /* 510904: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 510905: jmp 0x51085e */
  goto L_51085e;
L_51090a: /* 51090a: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 51090d: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 510910: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 510913: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x510918u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 510918: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 51091b: jmp 0x510812 */
  goto L_510812;
L_510920: /* 510920: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 510922: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 510925: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510926: mov ecx, edi */
  ecx = edi;
/* 510928: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* 51092f: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x510932u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_510932: /* 510932: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 510935: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 510936: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 510937: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51093e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51093f: mov esp, ebp */
  esp = ebp;
/* 510941: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 510942: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_5107b4(void) {
  LOAD_REGS();
L_5107b4: /* 5107b4: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 5107b7: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5107bc: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 5107bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5107c0: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 5107c3: call 0x554df6 */
  esp -= 4; W32(esp, 0x5107c8u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5107c8(); return;
}

void f_5107c8(void) {
  LOAD_REGS();
L_5107c8: /* 5107c8: push 0x56bbc8 */
  { uint32_t v = 0x56bbc8u; esp -= 4; W32(esp, v); }
/* 5107cd: push 0x5a5334 */
  { uint32_t v = 0x5a5334u; esp -= 4; W32(esp, v); }
/* 5107d2: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5107d7u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5107d7: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5107da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5107dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5107de: push 0x5a533c */
  { uint32_t v = 0x5a533cu; esp -= 4; W32(esp, v); }
/* 5107e3: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5107e8u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5107e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5107eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5107ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5107ef: call 0x554df6 */
  esp -= 4; W32(esp, 0x5107f4u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 5107f4: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5107f6: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 5107fa: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 5107fd: je 0x510807 */
  if (zf) goto L_510807;
L_5107ff: /* 5107ff: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 510802: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 510805: jmp 0x51080a */
  goto L_51080a;
L_510807: /* 510807: mov dword ptr [ebp - 0x40], esi */
  W32((uint32_t)(ebp + 0xffffffc0u), esi);
L_51080a: /* 51080a: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 51080d: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x510812u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
L_510812: /* 510812: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 510815: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510817: je 0x510920 */
  if (zf) goto L_510920;
L_51081d: /* 51081d: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 510820: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 510823: jne 0x51090a */
  if (!zf) goto L_51090a;
L_510829: /* 510829: test ah, 0x20 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 51082c: je 0x510839 */
  if (zf) goto L_510839;
L_51082e: /* 51082e: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 510831: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510833: jne 0x51090a */
  if (!zf) goto L_51090a;
L_510839: /* 510839: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51083e: je 0x510856 */
  if (zf) goto L_510856;
L_510840: /* 510840: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 510843: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510845: jne 0x51090a */
  if (!zf) goto L_51090a;
L_51084b: /* 51084b: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 51084e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510850: jne 0x51090a */
  if (!zf) goto L_51090a;
L_510856: /* 510856: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 510859: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 51085c: xor ebx, ebx */
  ebx = 0;
L_51085e: /* 51085e: cmp ebx, dword ptr [esi + 0x34] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 510861: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 510864: jge 0x51090a */
  if ((sf == of)) goto L_51090a;
L_51086a: /* 51086a: mov edi, dword ptr [esi + 0x38] */
  edi = R32((uint32_t)(esi + 0x38u));
/* 51086d: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 510870: imul edi, ebx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebx);
  edi = (uint32_t)r;
  }
/* 510873: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 510875: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 510878: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 51087b: jmp 0x510880 */
  goto L_510880;
L_510880: /* 510880: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510882: je 0x510890 */
  if (zf) goto L_510890;
L_510884: /* 510884: cmp eax, 0x5f0d80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5f0d80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 510889: je 0x510897 */
  if (zf) goto L_510897;
L_51088b: /* 51088b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 51088e: jmp 0x510880 */
  goto L_510880;
L_510890: /* 510890: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 510893: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510895: je 0x5108d0 */
  if (zf) goto L_5108d0;
L_510897: /* 510897: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 51089a: lea ecx, [eax + edi] */
  ecx = (uint32_t)(eax + edi);
/* 51089d: xor edx, edx */
  edx = 0;
/* 51089f: cmp ecx, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5108a2: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5108a5: setg dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 5108a8: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 5108ab: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 5108ac: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 5108ae: add eax, dword ptr [esi + 0x48] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x48u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5108b1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5108b3: je 0x5108b9 */
  if (zf) goto L_5108b9;
L_5108b5: /* 5108b5: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5108b7: jmp 0x5108bb */
  goto L_5108bb;
L_5108b9: /* 5108b9: xor ecx, ecx */
  ecx = 0;
L_5108bb: /* 5108bb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 5108bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5108be: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5108c1: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5108c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5108c4: mov ecx, esi */
  ecx = esi;
/* 5108c6: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x5108ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5108cc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5108ce: jne 0x510904 */
  if (!zf) goto L_510904;
L_5108d0: /* 5108d0: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 5108d3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 5108d6: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 5108d8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5108d9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5108da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5108db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5108dc: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 5108df: call 0x4e3c4c */
  esp -= 4; W32(esp, 0x5108e4u); SPILL(); f_4e3c4c(); if (g_unwind) return; RELOAD();
/* 5108e4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 5108e7: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 5108ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5108eb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5108ec: call 0x4e1f8c */
  esp -= 4; W32(esp, 0x5108f1u); SPILL(); f_4e1f8c(); if (g_unwind) return; RELOAD();
/* 5108f1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 5108f4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5108f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5108f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5108fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5108fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5108fc: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 5108ff: call 0x4e35c1 */
  esp -= 4; W32(esp, 0x510904u); SPILL(); f_4e35c1(); if (g_unwind) return; RELOAD();
L_510904: /* 510904: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 510905: jmp 0x51085e */
  goto L_51085e;
L_51090a: /* 51090a: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 51090d: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 510910: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 510913: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x510918u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 510918: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 51091b: jmp 0x510812 */
  goto L_510812;
L_510920: /* 510920: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 510922: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 510925: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510926: mov ecx, edi */
  ecx = edi;
/* 510928: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* 51092f: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x510932u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 510932: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 510935: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 510936: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 510937: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51093e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51093f: mov esp, ebp */
  esp = ebp;
/* 510941: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 510942: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_51087d(void) {
  LOAD_REGS();
  goto L_51087d;
L_510812: /* 510812: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 510815: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510817: je 0x510920 */
  if (zf) goto L_510920;
L_51081d: /* 51081d: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 510820: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 510823: jne 0x51090a */
  if (!zf) goto L_51090a;
L_510829: /* 510829: test ah, 0x20 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 51082c: je 0x510839 */
  if (zf) goto L_510839;
L_51082e: /* 51082e: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 510831: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510833: jne 0x51090a */
  if (!zf) goto L_51090a;
L_510839: /* 510839: test eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51083e: je 0x510856 */
  if (zf) goto L_510856;
L_510840: /* 510840: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 510843: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510845: jne 0x51090a */
  if (!zf) goto L_51090a;
L_51084b: /* 51084b: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 51084e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510850: jne 0x51090a */
  if (!zf) goto L_51090a;
L_510856: /* 510856: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 510859: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 51085c: xor ebx, ebx */
  ebx = 0;
L_51085e: /* 51085e: cmp ebx, dword ptr [esi + 0x34] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 510861: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 510864: jge 0x51090a */
  if ((sf == of)) goto L_51090a;
L_51086a: /* 51086a: mov edi, dword ptr [esi + 0x38] */
  edi = R32((uint32_t)(esi + 0x38u));
/* 51086d: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 510870: imul edi, ebx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebx);
  edi = (uint32_t)r;
  }
/* 510873: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 510875: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 510878: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 51087b: jmp 0x510880 */
  goto L_510880;
L_51087d: /* 51087d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_510880: /* 510880: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510882: je 0x510890 */
  if (zf) goto L_510890;
L_510884: /* 510884: cmp eax, 0x5f0d80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5f0d80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 510889: je 0x510897 */
  if (zf) goto L_510897;
L_51088b: /* 51088b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 51088e: jmp 0x510880 */
  goto L_510880;
L_510890: /* 510890: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 510893: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510895: je 0x5108d0 */
  if (zf) goto L_5108d0;
L_510897: /* 510897: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 51089a: lea ecx, [eax + edi] */
  ecx = (uint32_t)(eax + edi);
/* 51089d: xor edx, edx */
  edx = 0;
/* 51089f: cmp ecx, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5108a2: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5108a5: setg dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 5108a8: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 5108ab: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 5108ac: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 5108ae: add eax, dword ptr [esi + 0x48] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x48u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5108b1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5108b3: je 0x5108b9 */
  if (zf) goto L_5108b9;
L_5108b5: /* 5108b5: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5108b7: jmp 0x5108bb */
  goto L_5108bb;
L_5108b9: /* 5108b9: xor ecx, ecx */
  ecx = 0;
L_5108bb: /* 5108bb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 5108bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5108be: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5108c1: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5108c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5108c4: mov ecx, esi */
  ecx = esi;
/* 5108c6: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x5108ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5108cc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5108ce: jne 0x510904 */
  if (!zf) goto L_510904;
L_5108d0: /* 5108d0: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 5108d3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 5108d6: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 5108d8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5108d9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5108da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5108db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5108dc: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 5108df: call 0x4e3c4c */
  esp -= 4; W32(esp, 0x5108e4u); SPILL(); f_4e3c4c(); if (g_unwind) return; RELOAD();
/* 5108e4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 5108e7: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 5108ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5108eb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5108ec: call 0x4e1f8c */
  esp -= 4; W32(esp, 0x5108f1u); SPILL(); f_4e1f8c(); if (g_unwind) return; RELOAD();
/* 5108f1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 5108f4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5108f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5108f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5108fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5108fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5108fc: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 5108ff: call 0x4e35c1 */
  esp -= 4; W32(esp, 0x510904u); SPILL(); f_4e35c1(); if (g_unwind) return; RELOAD();
L_510904: /* 510904: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 510905: jmp 0x51085e */
  goto L_51085e;
L_51090a: /* 51090a: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 51090d: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 510910: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 510913: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x510918u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 510918: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 51091b: jmp 0x510812 */
  goto L_510812;
L_510920: /* 510920: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 510922: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 510925: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510926: mov ecx, edi */
  ecx = edi;
/* 510928: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* 51092f: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x510932u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 510932: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 510935: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 510936: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 510937: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51093e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51093f: mov esp, ebp */
  esp = ebp;
/* 510941: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 510942: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_510945(void) {
  LOAD_REGS();
L_510945: /* 510945: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 510948: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 51094d: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 510950: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 510951: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 510954: call 0x554df6 */
  esp -= 4; W32(esp, 0x510959u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_510959(); return;
}

void f_510959(void) {
  LOAD_REGS();
L_510959: /* 510959: push 0x56bbac */
  { uint32_t v = 0x56bbacu; esp -= 4; W32(esp, v); }
/* 51095e: push 0x5a5354 */
  { uint32_t v = 0x5a5354u; esp -= 4; W32(esp, v); }
/* 510963: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x510968u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 510968: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51096b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51096d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51096f: call 0x554df6 */
  esp -= 4; W32(esp, 0x510974u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_510974(); return;
}

void f_510974(void) {
  LOAD_REGS();
L_510974: /* 510974: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 510977: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 51097c: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 51097f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 510980: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 510983: call 0x554df6 */
  esp -= 4; W32(esp, 0x510988u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_510988(); return;
}

void f_510988(void) {
  LOAD_REGS();
L_510988: /* 510988: push 0x56bb58 */
  { uint32_t v = 0x56bb58u; esp -= 4; W32(esp, v); }
/* 51098d: push 0x5a535c */
  { uint32_t v = 0x5a535cu; esp -= 4; W32(esp, v); }
/* 510992: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x510997u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 510997: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 51099a: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 51099d: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 5109a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5109a4: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 5109a7: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 5109aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5109ab: push 0x5a5364 */
  { uint32_t v = 0x5a5364u; esp -= 4; W32(esp, v); }
/* 5109b0: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5109b5u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5109b5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5109b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5109ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5109bc: call 0x554df6 */
  esp -= 4; W32(esp, 0x5109c1u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5109c1: guest_badaddr(0x5109c1); return;
}

void f_510b80(void) {
  LOAD_REGS();
L_510b80: /* 510b80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 510b82: push 0x557037 */
  { uint32_t v = 0x557037u; esp -= 4; W32(esp, v); }
/* 510b87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 510b8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510b8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 510b95: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 510b98: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 510b99: xor ebx, ebx */
  ebx = 0;
/* 510b9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 510b9c: mov dword ptr [esp + 8], ebx */
  W32((uint32_t)(esp + 0x8u), ebx);
/* 510ba0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 510ba1: mov edi, ecx */
  edi = ecx;
/* 510ba3: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 510ba7: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 510bab: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 510baf: mov dword ptr [esp + 0x30], 1 */
  W32((uint32_t)(esp + 0x30u), 0x1u);
/* 510bb7: xor esi, esi */
  esi = 0;
/* 510bb9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_510bc0: /* 510bc0: movzx eax, byte ptr [edi + esi + 0x70] */
  eax = (uint32_t)(R8((uint32_t)(edi + esi + 0x70u)));
/* 510bc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510bc6: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 510bca: push 0x5a5380 */
  { uint32_t v = 0x5a5380u; esp -= 4; W32(esp, v); }
/* 510bcf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 510bd0: call 0x4e17e4 */
  esp -= 4; W32(esp, 0x510bd5u); SPILL(); f_4e17e4(); if (g_unwind) return; RELOAD();
/* 510bd5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 510bd8: cmp dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 510bdb: mov byte ptr [esp + 0x30], 2 */
  W8((uint32_t)(esp + 0x30u), 0x2u);
/* 510be0: je 0x510be6 */
  if (zf) goto L_510be6;
L_510be2: /* 510be2: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 510be4: jmp 0x510beb */
  goto L_510beb;
L_510be6: /* 510be6: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_510beb: /* 510beb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510bec: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 510bf0: call 0x4e180c */
  esp -= 4; W32(esp, 0x510bf5u); SPILL(); f_4e180c(); if (g_unwind) return; RELOAD();
/* 510bf5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 510bf7: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 510bfb: mov byte ptr [esp + 0x34], 3 */
  W8((uint32_t)(esp + 0x34u), 0x3u);
/* 510c00: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* 510c04: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 510c08: call 0x4e4502 */
  esp -= 4; W32(esp, 0x510c0du); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 510c0d: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 510c11: mov byte ptr [esp + 0x30], 1 */
  W8((uint32_t)(esp + 0x30u), 0x1u);
/* 510c16: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x510c1bu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 510c1b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 510c1c: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 510c1f: jl 0x510bc0 */
  if ((sf != of)) goto L_510bc0;
L_510c21: /* 510c21: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 510c25: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 510c29: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 510c2a: mov ecx, esi */
  ecx = esi;
/* 510c2c: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x510c31u); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
/* 510c31: mov dword ptr [esp + 0xc], 1 */
  W32((uint32_t)(esp + 0xcu), 0x1u);
/* 510c39: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 510c3b: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 510c3f: mov dword ptr [esp + 0x34], 4 */
  W32((uint32_t)(esp + 0x34u), 0x4u);
/* 510c47: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 510c4b: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 510c4f: call 0x4e4502 */
  esp -= 4; W32(esp, 0x510c54u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 510c54: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 510c58: mov byte ptr [esp + 0x30], bl */
  W8((uint32_t)(esp + 0x30u), (ebx & 0xffu));
/* 510c5c: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x510c61u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 510c61: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 510c65: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 510c66: mov eax, esi */
  eax = esi;
/* 510c68: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 510c69: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 510c6a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 510c71: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 510c74: ret 4 */
  esp += 8; SPILL(); return;
}

void f_510cc0(void) {
  LOAD_REGS();
L_510cc0: /* 510cc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 510cc1: mov ebp, esp */
  ebp = esp;
/* 510cc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 510cc5: push 0x557060 */
  { uint32_t v = 0x557060u; esp -= 4; W32(esp, v); }
/* 510cca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 510cd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510cd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 510cd8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 510cdb: mov eax, dword ptr [0x5b211c] */
  eax = R32((uint32_t)(0x5b211cu));
/* 510ce0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510ce2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 510ce3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 510ce4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 510ce5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 510ce8: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 510ceb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 510cf2: je 0x510d31 */
  if (zf) goto L_510d31;
L_510cf4: /* 510cf4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510cf6: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 510cf9: je 0x510d03 */
  if (zf) goto L_510d03;
L_510cfb: /* 510cfb: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 510cfe: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 510d01: jmp 0x510d0a */
  goto L_510d0a;
L_510d03: /* 510d03: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
L_510d0a: /* 510d0a: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 510d0d: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x510d12u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 510d12: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 510d15: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510d17: je 0x510d94 */
  if (zf) goto L_510d94;
L_510d19: /* 510d19: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 510d1c: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 510d1f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 510d21: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 510d23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510d24: mov ecx, esi */
  ecx = esi;
/* 510d26: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x510d29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 510d29: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 510d2c: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 510d2f: jmp 0x510d0a */
  goto L_510d0a;
L_510d31: /* 510d31: mov esi, dword ptr [ecx + 0x60] */
  esi = R32((uint32_t)(ecx + 0x60u));
/* 510d34: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_510d37: /* 510d37: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 510d39: je 0x510d94 */
  if (zf) goto L_510d94;
L_510d3b: /* 510d3b: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 510d3e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 510d40: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 510d42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510d43: mov ecx, esi */
  ecx = esi;
/* 510d45: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x510d48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 510d48: mov esi, dword ptr [esi + 0x58] */
  esi = R32((uint32_t)(esi + 0x58u));
/* 510d4b: jmp 0x510d37 */
  goto L_510d37;
L_510d94: /* 510d94: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 510d97: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 510d98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 510d99: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 510da0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 510da1: mov esp, ebp */
  esp = ebp;
/* 510da3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 510da4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_510d4d(void) {
  LOAD_REGS();
L_510d4d: /* 510d4d: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 510d50: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 510d55: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 510d58: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 510d59: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 510d5c: call 0x554df6 */
  esp -= 4; W32(esp, 0x510d61u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_510d61(); return;
}

void f_510d61(void) {
  LOAD_REGS();
L_510d61: /* 510d61: push 0x56bbe4 */
  { uint32_t v = 0x56bbe4u; esp -= 4; W32(esp, v); }
/* 510d66: push 0x5a542c */
  { uint32_t v = 0x5a542cu; esp -= 4; W32(esp, v); }
/* 510d6b: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x510d70u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 510d70: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 510d73: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 510d76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 510d78: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x510d7du); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 510d7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510d7e: push 0x5a5434 */
  { uint32_t v = 0x5a5434u; esp -= 4; W32(esp, v); }
/* 510d83: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x510d88u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 510d88: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 510d8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 510d8d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 510d8f: call 0x554df6 */
  esp -= 4; W32(esp, 0x510d94u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 510d94: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 510d97: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 510d98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 510d99: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 510da0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 510da1: mov esp, ebp */
  esp = ebp;
/* 510da3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 510da4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_510df0(void) {
  LOAD_REGS();
L_510df0: /* 510df0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 510df1: mov ebp, esp */
  ebp = esp;
/* 510df3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 510df5: push 0x557070 */
  { uint32_t v = 0x557070u; esp -= 4; W32(esp, v); }
/* 510dfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 510e00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510e01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 510e08: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 510e0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 510e0c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 510e0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 510e10: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 510e11: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 510e14: mov esi, ecx */
  esi = ecx;
/* 510e16: xor edi, edi */
  edi = 0;
/* 510e18: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 510e19: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 510e1c: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 510e1f: call 0x4e4525 */
  esp -= 4; W32(esp, 0x510e24u); SPILL(); f_4e4525(); if (g_unwind) return; RELOAD();
/* 510e24: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 510e27: cmp eax, 0x3d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 510e2a: jg 0x510e47 */
  if ((!zf && sf == of)) goto L_510e47;
L_510e2c: /* 510e2c: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 510e2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510e30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 510e31: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 510e34: call 0x4e4160 */
  esp -= 4; W32(esp, 0x510e39u); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 510e39: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 510e3c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 510e3f: or eax, 0x80004 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80004u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 510e44: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
L_510e47: /* 510e47: lea ecx, [esi + 0x498] */
  ecx = (uint32_t)(esi + 0x498u);
/* 510e4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 510e4e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 510e4f: call 0x4e4165 */
  esp -= 4; W32(esp, 0x510e54u); SPILL(); f_4e4165(); if (g_unwind) return; RELOAD();
/* 510e54: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 510e57: lea edx, [esi + 0x4a0] */
  edx = (uint32_t)(esi + 0x4a0u);
/* 510e5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 510e5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510e5f: call 0x4e3896 */
  esp -= 4; W32(esp, 0x510e64u); SPILL(); f_4e3896(); if (g_unwind) return; RELOAD();
/* 510e64: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 510e67: lea eax, [esi + 0x4d0] */
  eax = (uint32_t)(esi + 0x4d0u);
/* 510e6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510e6e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 510e6f: call 0x4e1618 */
  esp -= 4; W32(esp, 0x510e74u); SPILL(); f_4e1618(); if (g_unwind) return; RELOAD();
/* 510e74: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 510e77: lea ecx, [esi + 0x4dc] */
  ecx = (uint32_t)(esi + 0x4dcu);
/* 510e7d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 510e7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510e7f: call 0x4e17da */
  esp -= 4; W32(esp, 0x510e84u); SPILL(); f_4e17da(); if (g_unwind) return; RELOAD();
/* 510e84: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 510e87: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 510e8a: cmp eax, 0x3e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3eu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 510e8d: jl 0x510ead */
  if ((sf != of)) goto L_510ead;
L_510e8f: /* 510e8f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 510e91: lea eax, [esi + 0x4b0] */
  eax = (uint32_t)(esi + 0x4b0u);
/* 510e97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510e98: mov ecx, ebx */
  ecx = ebx;
/* 510e9a: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x510e9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 510e9d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 510e9f: lea ecx, [esi + 0x4b4] */
  ecx = (uint32_t)(esi + 0x4b4u);
/* 510ea5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 510ea6: mov ecx, eax */
  ecx = eax;
/* 510ea8: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x510eabu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 510eab: jmp 0x510ec4 */
  goto L_510ec4;
L_510ead: /* 510ead: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 510eaf: push 0x5a55dc */
  { uint32_t v = 0x5a55dcu; esp -= 4; W32(esp, v); }
/* 510eb4: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 510eb7: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x510ebcu); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 510ebc: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 510ebe: mov dword ptr [esi + 0x4b4], edx */
  W32((uint32_t)(esi + 0x4b4u), edx);
L_510ec4: /* 510ec4: cmp dword ptr [ebx + 4], 0x63 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(0x63u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 510ec8: jl 0x510eda */
  if ((sf != of)) goto L_510eda;
L_510eca: /* 510eca: lea eax, [esi + 0x4f4] */
  eax = (uint32_t)(esi + 0x4f4u);
/* 510ed0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510ed1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 510ed2: call 0x4e17da */
  esp -= 4; W32(esp, 0x510ed7u); SPILL(); f_4e17da(); if (g_unwind) return; RELOAD();
/* 510ed7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_510eda: /* 510eda: cmp dword ptr [ebx + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 510edd: mov ecx, esi */
  ecx = esi;
/* 510edf: je 0x511053 */
  if (zf) goto L_511053;
L_510ee5: /* 510ee5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 510ee7: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x510eeau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 510eea: cmp eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 510eed: jae 0x510f06 */
  if (!cf) goto L_510f06;
L_510eef: /* 510eef: push 0x3f8 */
  { uint32_t v = 0x3f8u; esp -= 4; W32(esp, v); }
/* 510ef4: push 0x5a55ec */
  { uint32_t v = 0x5a55ecu; esp -= 4; W32(esp, v); }
/* 510ef9: push 0x5a55f8 */
  { uint32_t v = 0x5a55f8u; esp -= 4; W32(esp, v); }
/* 510efe: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x510f03u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 510f03: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_510f06: /* 510f06: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 510f09: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 510f0b: je 0x510f2c */
  if (zf) goto L_510f2c;
L_510f0d: /* 510f0d: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 510f10: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 510f13: je 0x510f2c */
  if (zf) goto L_510f2c;
L_510f15: /* 510f15: push 0x3f9 */
  { uint32_t v = 0x3f9u; esp -= 4; W32(esp, v); }
/* 510f1a: push 0x5a5620 */
  { uint32_t v = 0x5a5620u; esp -= 4; W32(esp, v); }
/* 510f1f: push 0x5a562c */
  { uint32_t v = 0x5a562cu; esp -= 4; W32(esp, v); }
/* 510f24: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x510f29u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 510f29: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_510f2c: /* 510f2c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 510f2e: mov ecx, esi */
  ecx = esi;
/* 510f30: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x510f33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 510f33: lea edi, [esi + 0x4e8] */
  edi = (uint32_t)(esi + 0x4e8u);
/* 510f39: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 510f3b: mov ecx, edi */
  ecx = edi;
/* 510f3d: mov dword ptr [edi + 4], 0 */
  W32((uint32_t)(edi + 0x4u), 0x0u);
/* 510f44: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 510f47: call 0x4e4502 */
  esp -= 4; W32(esp, 0x510f4cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 510f4c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 510f4e: mov ecx, esi */
  ecx = esi;
/* 510f50: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x510f53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 510f53: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 510f56: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 510f58: cmp ecx, dword ptr [edi + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 510f5b: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 510f5e: jle 0x510f7c */
  if ((zf || sf != of)) goto L_510f7c;
L_510f60: /* 510f60: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 510f63: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 510f64: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 510f67: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 510f69: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 510f6c: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 510f70: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 510f72: mov ecx, edi */
  ecx = edi;
/* 510f74: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 510f77: call 0x4e4502 */
  esp -= 4; W32(esp, 0x510f7cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_510f7c: /* 510f7c: mov ecx, dword ptr [esi + 0x4ec] */
  ecx = R32((uint32_t)(esi + 0x4ecu));
/* 510f82: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 510f84: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 510f87: mov ecx, esi */
  ecx = esi;
/* 510f89: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x510f8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 510f8c: cmp dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 510f8f: je 0x510fa8 */
  if (zf) goto L_510fa8;
L_510f91: /* 510f91: push 0x21b */
  { uint32_t v = 0x21bu; esp -= 4; W32(esp, v); }
/* 510f96: push 0x5a3b00 */
  { uint32_t v = 0x5a3b00u; esp -= 4; W32(esp, v); }
/* 510f9b: push 0x5a3ad4 */
  { uint32_t v = 0x5a3ad4u; esp -= 4; W32(esp, v); }
/* 510fa0: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x510fa5u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 510fa5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_510fa8: /* 510fa8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 510faa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 510fac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 510fad: call 0x4e450c */
  esp -= 4; W32(esp, 0x510fb2u); SPILL(); f_4e450c(); if (g_unwind) return; RELOAD();
/* 510fb2: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 510fb5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 510fb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510fb8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 510fba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 510fbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 510fbc: mov ecx, esi */
  ecx = esi;
/* 510fbe: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x510fc4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 510fc4: mov ecx, dword ptr [esi + 0x4ec] */
  ecx = R32((uint32_t)(esi + 0x4ecu));
/* 510fca: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 510fcc: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 510fcf: mov ecx, esi */
  ecx = esi;
/* 510fd1: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x510fd4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 510fd4: cmp dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 510fd7: je 0x510ff0 */
  if (zf) goto L_510ff0;
L_510fd9: /* 510fd9: push 0x21b */
  { uint32_t v = 0x21bu; esp -= 4; W32(esp, v); }
/* 510fde: push 0x5a3b00 */
  { uint32_t v = 0x5a3b00u; esp -= 4; W32(esp, v); }
/* 510fe3: push 0x5a3ad4 */
  { uint32_t v = 0x5a3ad4u; esp -= 4; W32(esp, v); }
/* 510fe8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x510fedu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 510fed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_510ff0: /* 510ff0: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 510ff2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 510ff4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 510ff6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 510ff8: call 0x4e2743 */
  esp -= 4; W32(esp, 0x510ffdu); SPILL(); f_4e2743(); if (g_unwind) return; RELOAD();
/* 510ffd: mov eax, dword ptr [esi + 0x4ec] */
  eax = R32((uint32_t)(esi + 0x4ecu));
/* 511003: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 511005: mov ecx, esi */
  ecx = esi;
/* 511007: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 51100a: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x51100du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51100d: cmp dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511010: je 0x511029 */
  if (zf) goto L_511029;
L_511012: /* 511012: push 0x21b */
  { uint32_t v = 0x21bu; esp -= 4; W32(esp, v); }
/* 511017: push 0x5a3b00 */
  { uint32_t v = 0x5a3b00u; esp -= 4; W32(esp, v); }
/* 51101c: push 0x5a3ad4 */
  { uint32_t v = 0x5a3ad4u; esp -= 4; W32(esp, v); }
/* 511021: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x511026u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 511026: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_511029: /* 511029: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 51102b: call 0x4e1d66 */
  esp -= 4; W32(esp, 0x511030u); SPILL(); f_4e1d66(); if (g_unwind) return; RELOAD();
/* 511030: mov dword ptr [esi + 0x49c], 0 */
  W32((uint32_t)(esi + 0x49cu), 0x0u);
/* 51103a: cmp dword ptr [ebx + 4], 0x3d */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x4u))); uint32_t b = (uint32_t)(0x3du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51103e: jg 0x5110df */
  if ((!zf && sf == of)) goto L_5110df;
L_511044: /* 511044: mov dword ptr [esi + 0x4b0], 0x6a0f20 */
  W32((uint32_t)(esi + 0x4b0u), 0x6a0f20u);
/* 51104e: jmp 0x5110df */
  goto L_5110df;
L_511053: /* 511053: cmp dword ptr [ebx + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511056: mov edi, dword ptr [esi + 0x4ec] */
  edi = R32((uint32_t)(esi + 0x4ecu));
/* 51105c: je 0x511096 */
  if (zf) goto L_511096;
L_51105e: /* 51105e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 511060: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x511063u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 511063: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511065: je 0x51107e */
  if (zf) goto L_51107e;
L_511067: /* 511067: push 0x406 */
  { uint32_t v = 0x406u; esp -= 4; W32(esp, v); }
/* 51106c: push 0x5a566c */
  { uint32_t v = 0x5a566cu; esp -= 4; W32(esp, v); }
/* 511071: push 0x5a5678 */
  { uint32_t v = 0x5a5678u; esp -= 4; W32(esp, v); }
/* 511076: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x51107bu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 51107b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_51107e: /* 51107e: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 511081: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 511083: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 511084: mov eax, dword ptr [esi + 0x4e8] */
  eax = R32((uint32_t)(esi + 0x4e8u));
/* 51108a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51108b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51108c: mov ecx, esi */
  ecx = esi;
/* 51108e: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x511094u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 511094: jmp 0x5110df */
  goto L_5110df;
L_511096: /* 511096: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 511098: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x51109bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51109b: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51109d: je 0x5110b6 */
  if (zf) goto L_5110b6;
L_51109f: /* 51109f: push 0x40b */
  { uint32_t v = 0x40bu; esp -= 4; W32(esp, v); }
/* 5110a4: push 0x5a569c */
  { uint32_t v = 0x5a569cu; esp -= 4; W32(esp, v); }
/* 5110a9: push 0x5a56a8 */
  { uint32_t v = 0x5a56a8u; esp -= 4; W32(esp, v); }
/* 5110ae: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5110b3u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5110b3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5110b6: /* 5110b6: mov ecx, dword ptr [esi + 0x4f0] */
  ecx = R32((uint32_t)(esi + 0x4f0u));
/* 5110bc: mov edx, dword ptr [esi + 0x4ec] */
  edx = R32((uint32_t)(esi + 0x4ecu));
/* 5110c2: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 5110c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5110c5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5110c6: mov ecx, ebx */
  ecx = ebx;
/* 5110c8: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0x5110cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5110cb: mov ecx, dword ptr [esi + 0x4e8] */
  ecx = R32((uint32_t)(esi + 0x4e8u));
/* 5110d1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5110d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5110d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5110d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5110d7: mov ecx, esi */
  ecx = esi;
/* 5110d9: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0x5110dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5110df: /* 5110df: add esi, 0x50c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x50cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 5110e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5110e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5110e7: call 0x4e108c */
  esp -= 4; W32(esp, 0x5110ecu); SPILL(); f_4e108c(); if (g_unwind) return; RELOAD();
/* 5110ec: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5110ef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5110f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5110f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5110f4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5110fb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5110fc: mov esp, ebp */
  esp = ebp;
/* 5110fe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5110ff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_511102(void) {
  LOAD_REGS();
L_511102: /* 511102: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 511105: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 51110a: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 51110d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51110e: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 511111: call 0x554df6 */
  esp -= 4; W32(esp, 0x511116u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_511116(); return;
}

void f_511116(void) {
  LOAD_REGS();
L_511116: /* 511116: push 0x56bc24 */
  { uint32_t v = 0x56bc24u; esp -= 4; W32(esp, v); }
/* 51111b: push 0x5a56cc */
  { uint32_t v = 0x5a56ccu; esp -= 4; W32(esp, v); }
/* 511120: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x511125u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 511125: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 511128: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51112b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51112d: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x511132u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 511132: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 511133: push 0x5a56d4 */
  { uint32_t v = 0x5a56d4u; esp -= 4; W32(esp, v); }
/* 511138: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x51113du); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 51113d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 511140: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 511142: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 511144: call 0x554df6 */
  esp -= 4; W32(esp, 0x511149u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_511149: guest_badaddr(0x511149); return;
}

void f_511230(void) {
  LOAD_REGS();
L_511230: /* 511230: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 511231: mov esi, ecx */
  esi = ecx;
/* 511233: call 0x4e245a */
  esp -= 4; W32(esp, 0x511238u); SPILL(); f_4e245a(); if (g_unwind) return; RELOAD();
/* 511238: xor eax, eax */
  eax = 0;
/* 51123a: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 51123d: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 511240: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 511243: mov dword ptr [esi], 0x56a8d8 */
  W32((uint32_t)(esi), 0x56a8d8u);
/* 511249: mov dword ptr [esi + 0x4b0], 0x6a0f20 */
  W32((uint32_t)(esi + 0x4b0u), 0x6a0f20u);
/* 511253: mov dword ptr [esi + 0x4b8], eax */
  W32((uint32_t)(esi + 0x4b8u), eax);
/* 511259: mov dword ptr [esi + 0x4bc], eax */
  W32((uint32_t)(esi + 0x4bcu), eax);
/* 51125f: mov dword ptr [esi + 0x4c0], eax */
  W32((uint32_t)(esi + 0x4c0u), eax);
/* 511265: mov dword ptr [esi + 0x4c4], eax */
  W32((uint32_t)(esi + 0x4c4u), eax);
/* 51126b: mov dword ptr [esi + 0x4c8], eax */
  W32((uint32_t)(esi + 0x4c8u), eax);
/* 511271: mov dword ptr [esi + 0x4cc], eax */
  W32((uint32_t)(esi + 0x4ccu), eax);
/* 511277: mov dword ptr [esi + 0x4d0], eax */
  W32((uint32_t)(esi + 0x4d0u), eax);
/* 51127d: mov dword ptr [esi + 0x4d4], eax */
  W32((uint32_t)(esi + 0x4d4u), eax);
/* 511283: mov dword ptr [esi + 0x4d8], eax */
  W32((uint32_t)(esi + 0x4d8u), eax);
/* 511289: mov dword ptr [esi + 0x4dc], eax */
  W32((uint32_t)(esi + 0x4dcu), eax);
/* 51128f: mov dword ptr [esi + 0x4e0], eax */
  W32((uint32_t)(esi + 0x4e0u), eax);
/* 511295: mov dword ptr [esi + 0x4e4], eax */
  W32((uint32_t)(esi + 0x4e4u), eax);
/* 51129b: mov dword ptr [esi + 0x4e8], eax */
  W32((uint32_t)(esi + 0x4e8u), eax);
/* 5112a1: mov dword ptr [esi + 0x4ec], eax */
  W32((uint32_t)(esi + 0x4ecu), eax);
/* 5112a7: mov dword ptr [esi + 0x4f0], eax */
  W32((uint32_t)(esi + 0x4f0u), eax);
/* 5112ad: mov dword ptr [esi + 0x4f4], eax */
  W32((uint32_t)(esi + 0x4f4u), eax);
/* 5112b3: mov dword ptr [esi + 0x4f8], eax */
  W32((uint32_t)(esi + 0x4f8u), eax);
/* 5112b9: mov dword ptr [esi + 0x4fc], eax */
  W32((uint32_t)(esi + 0x4fcu), eax);
/* 5112bf: mov dword ptr [esi + 0x500], eax */
  W32((uint32_t)(esi + 0x500u), eax);
/* 5112c5: mov dword ptr [esi + 0x504], eax */
  W32((uint32_t)(esi + 0x504u), eax);
/* 5112cb: mov dword ptr [esi + 0x508], eax */
  W32((uint32_t)(esi + 0x508u), eax);
/* 5112d1: mov dword ptr [esi + 0x50c], eax */
  W32((uint32_t)(esi + 0x50cu), eax);
/* 5112d7: mov dword ptr [esi + 0x510], eax */
  W32((uint32_t)(esi + 0x510u), eax);
/* 5112dd: mov dword ptr [esi + 0x514], eax */
  W32((uint32_t)(esi + 0x514u), eax);
/* 5112e3: mov dword ptr [esi + 0x520], eax */
  W32((uint32_t)(esi + 0x520u), eax);
/* 5112e9: mov dword ptr [esi + 0x524], eax */
  W32((uint32_t)(esi + 0x524u), eax);
/* 5112ef: mov dword ptr [esi + 0x528], eax */
  W32((uint32_t)(esi + 0x528u), eax);
/* 5112f5: mov eax, esi */
  eax = esi;
/* 5112f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5112f8: ret  */
  esp += 4; SPILL(); return;
}

void f_511340(void) {
  LOAD_REGS();
L_511340: /* 511340: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 511341: mov ebp, esp */
  ebp = esp;
/* 511343: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 511345: push 0x557106 */
  { uint32_t v = 0x557106u; esp -= 4; W32(esp, v); }
/* 51134a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 511350: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 511351: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 511358: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51135b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 51135e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51135f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 511360: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 511361: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 511364: mov esi, ecx */
  esi = ecx;
/* 511366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 511367: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 51136a: call 0x4e15a5 */
  esp -= 4; W32(esp, 0x51136fu); SPILL(); f_4e15a5(); if (g_unwind) return; RELOAD();
/* 51136f: xor edi, edi */
  edi = 0;
/* 511371: mov dword ptr [esi], 0x56a8d8 */
  W32((uint32_t)(esi), 0x56a8d8u);
/* 511377: mov dword ptr [esi + 0x4b0], 0x6a0f20 */
  W32((uint32_t)(esi + 0x4b0u), 0x6a0f20u);
/* 511381: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 511384: mov dword ptr [esi + 0x4b8], edi */
  W32((uint32_t)(esi + 0x4b8u), edi);
/* 51138a: mov dword ptr [esi + 0x4bc], edi */
  W32((uint32_t)(esi + 0x4bcu), edi);
/* 511390: mov dword ptr [esi + 0x4c0], edi */
  W32((uint32_t)(esi + 0x4c0u), edi);
/* 511396: mov dword ptr [esi + 0x4c4], edi */
  W32((uint32_t)(esi + 0x4c4u), edi);
/* 51139c: mov dword ptr [esi + 0x4c8], edi */
  W32((uint32_t)(esi + 0x4c8u), edi);
/* 5113a2: mov dword ptr [esi + 0x4cc], edi */
  W32((uint32_t)(esi + 0x4ccu), edi);
/* 5113a8: mov dword ptr [esi + 0x4d0], edi */
  W32((uint32_t)(esi + 0x4d0u), edi);
/* 5113ae: mov dword ptr [esi + 0x4d4], edi */
  W32((uint32_t)(esi + 0x4d4u), edi);
/* 5113b4: mov dword ptr [esi + 0x4d8], edi */
  W32((uint32_t)(esi + 0x4d8u), edi);
/* 5113ba: mov dword ptr [esi + 0x4dc], edi */
  W32((uint32_t)(esi + 0x4dcu), edi);
/* 5113c0: mov dword ptr [esi + 0x4e0], edi */
  W32((uint32_t)(esi + 0x4e0u), edi);
/* 5113c6: mov dword ptr [esi + 0x4e4], edi */
  W32((uint32_t)(esi + 0x4e4u), edi);
/* 5113cc: lea ecx, [esi + 0x4e8] */
  ecx = (uint32_t)(esi + 0x4e8u);
/* 5113d2: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 5113d4: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 5113d7: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 5113da: mov dword ptr [esi + 0x4f4], edi */
  W32((uint32_t)(esi + 0x4f4u), edi);
/* 5113e0: mov dword ptr [esi + 0x4f8], edi */
  W32((uint32_t)(esi + 0x4f8u), edi);
/* 5113e6: mov dword ptr [esi + 0x4fc], edi */
  W32((uint32_t)(esi + 0x4fcu), edi);
/* 5113ec: mov dword ptr [esi + 0x500], edi */
  W32((uint32_t)(esi + 0x500u), edi);
/* 5113f2: mov dword ptr [esi + 0x504], edi */
  W32((uint32_t)(esi + 0x504u), edi);
/* 5113f8: mov dword ptr [esi + 0x508], edi */
  W32((uint32_t)(esi + 0x508u), edi);
/* 5113fe: mov dword ptr [esi + 0x50c], edi */
  W32((uint32_t)(esi + 0x50cu), edi);
/* 511404: mov dword ptr [esi + 0x510], edi */
  W32((uint32_t)(esi + 0x510u), edi);
/* 51140a: mov dword ptr [esi + 0x514], edi */
  W32((uint32_t)(esi + 0x514u), edi);
/* 511410: mov dword ptr [esi + 0x520], edi */
  W32((uint32_t)(esi + 0x520u), edi);
/* 511416: mov dword ptr [esi + 0x524], edi */
  W32((uint32_t)(esi + 0x524u), edi);
/* 51141c: mov dword ptr [esi + 0x528], edi */
  W32((uint32_t)(esi + 0x528u), edi);
/* 511422: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 511425: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511427: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 51142b: je 0x51144b */
  if (zf) goto L_51144b;
L_51142d: /* 51142d: mov edx, dword ptr [eax + 0x4b0] */
  edx = R32((uint32_t)(eax + 0x4b0u));
/* 511433: add eax, 0x4e8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4e8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 511438: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 511439: mov dword ptr [esi + 0x4b0], edx */
  W32((uint32_t)(esi + 0x4b0u), edx);
/* 51143f: call 0x4e2185 */
  esp -= 4; W32(esp, 0x511444u); SPILL(); f_4e2185(); if (g_unwind) return; RELOAD();
/* 511444: mov ecx, esi */
  ecx = esi;
/* 511446: call 0x4e3189 */
  esp -= 4; W32(esp, 0x51144bu); SPILL(); f_4e3189(); if (g_unwind) return; RELOAD();
L_51144b: /* 51144b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 51144e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51144f: mov eax, esi */
  eax = esi;
/* 511451: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 511452: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 511459: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51145a: mov esp, ebp */
  esp = ebp;
/* 51145c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51145d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_511460(void) {
  LOAD_REGS();
L_511460: /* 511460: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 511463: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 511468: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 51146b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51146c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 51146f: call 0x554df6 */
  esp -= 4; W32(esp, 0x511474u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_511474(); return;
}

void f_511474(void) {
  LOAD_REGS();
L_511474: /* 511474: push 0x56bc50 */
  { uint32_t v = 0x56bc50u; esp -= 4; W32(esp, v); }
/* 511479: push 0x5a56e0 */
  { uint32_t v = 0x5a56e0u; esp -= 4; W32(esp, v); }
/* 51147e: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x511483u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 511483: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 511486: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 511489: xor edi, edi */
  edi = 0;
/* 51148b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51148c: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x511491u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 511491: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 511492: push 0x5a56e8 */
  { uint32_t v = 0x5a56e8u; esp -= 4; W32(esp, v); }
/* 511497: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x51149cu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 51149c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51149f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5114a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5114a1: call 0x554df6 */
  esp -= 4; W32(esp, 0x5114a6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5114a6: guest_badaddr(0x5114a6); return;
}

void f_511510(void) {
  LOAD_REGS();
L_511510: /* 511510: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 511514: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 511518: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 511519: mov esi, ecx */
  esi = ecx;
/* 51151b: xor ecx, ecx */
  ecx = 0;
/* 51151d: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51151f: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 511522: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 511523: xor edi, edi */
  edi = 0;
/* 511525: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 511526: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 511528: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 51152c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51152d: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 511531: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 511532: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 511536: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 511537: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 511538: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 511539: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51153a: mov ecx, esi */
  ecx = esi;
/* 51153c: call 0x4e119a */
  esp -= 4; W32(esp, 0x511541u); SPILL(); f_4e119a(); if (g_unwind) return; RELOAD();
/* 511541: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 511545: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 511549: mov dword ptr [esi + 0x80], edi */
  W32((uint32_t)(esi + 0x80u), edi);
/* 51154f: mov dword ptr [esi + 0x84], edi */
  W32((uint32_t)(esi + 0x84u), edi);
/* 511555: mov dword ptr [esi + 0x88], edi */
  W32((uint32_t)(esi + 0x88u), edi);
/* 51155b: mov dword ptr [esi + 0x8c], edi */
  W32((uint32_t)(esi + 0x8cu), edi);
/* 511561: mov dword ptr [esi + 0x90], edi */
  W32((uint32_t)(esi + 0x90u), edi);
/* 511567: mov word ptr [esi + 0x94], di */
  W16((uint32_t)(esi + 0x94u), (edi & 0xffffu));
/* 51156e: mov dword ptr [esi + 0x49c], edi */
  W32((uint32_t)(esi + 0x49cu), edi);
/* 511574: mov dword ptr [esi], 0x56a8d8 */
  W32((uint32_t)(esi), 0x56a8d8u);
/* 51157a: or eax, 0x12 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 51157d: mov dword ptr [esi + 0x498], eax */
  W32((uint32_t)(esi + 0x498u), eax);
/* 511583: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 511587: lea ecx, [esi + 0x4a0] */
  ecx = (uint32_t)(esi + 0x4a0u);
/* 51158d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 51158f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 511592: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 511596: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 51159a: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 51159d: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 5115a0: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 5115a4: mov dword ptr [esi + 0x4b0], ecx */
  W32((uint32_t)(esi + 0x4b0u), ecx);
/* 5115aa: mov dword ptr [esi + 0x4b8], edi */
  W32((uint32_t)(esi + 0x4b8u), edi);
/* 5115b0: mov dword ptr [esi + 0x4bc], edi */
  W32((uint32_t)(esi + 0x4bcu), edi);
/* 5115b6: mov dword ptr [esi + 0x4c0], edi */
  W32((uint32_t)(esi + 0x4c0u), edi);
/* 5115bc: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 5115c0: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 5115c4: mov dword ptr [esi + 0x4c4], edi */
  W32((uint32_t)(esi + 0x4c4u), edi);
/* 5115ca: mov dword ptr [esi + 0x4c8], edi */
  W32((uint32_t)(esi + 0x4c8u), edi);
/* 5115d0: mov dword ptr [esi + 0x4cc], edi */
  W32((uint32_t)(esi + 0x4ccu), edi);
/* 5115d6: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 5115da: mov dword ptr [esi + 0x4d0], edi */
  W32((uint32_t)(esi + 0x4d0u), edi);
/* 5115e0: mov dword ptr [esi + 0x4d4], edi */
  W32((uint32_t)(esi + 0x4d4u), edi);
/* 5115e6: mov dword ptr [esi + 0x4d8], edi */
  W32((uint32_t)(esi + 0x4d8u), edi);
/* 5115ec: mov dword ptr [esi + 0x4dc], edi */
  W32((uint32_t)(esi + 0x4dcu), edi);
/* 5115f2: mov dword ptr [esi + 0x4e0], edi */
  W32((uint32_t)(esi + 0x4e0u), edi);
/* 5115f8: mov dword ptr [esi + 0x4e4], edi */
  W32((uint32_t)(esi + 0x4e4u), edi);
/* 5115fe: mov dword ptr [esi + 0x4e8], edi */
  W32((uint32_t)(esi + 0x4e8u), edi);
/* 511604: mov dword ptr [esi + 0x4ec], edi */
  W32((uint32_t)(esi + 0x4ecu), edi);
/* 51160a: mov dword ptr [esi + 0x4f0], edi */
  W32((uint32_t)(esi + 0x4f0u), edi);
/* 511610: mov dword ptr [esi + 0x4f4], edi */
  W32((uint32_t)(esi + 0x4f4u), edi);
/* 511616: mov dword ptr [esi + 0x4f8], edi */
  W32((uint32_t)(esi + 0x4f8u), edi);
/* 51161c: mov dword ptr [esi + 0x4fc], edi */
  W32((uint32_t)(esi + 0x4fcu), edi);
/* 511622: mov dword ptr [esi + 0x500], edi */
  W32((uint32_t)(esi + 0x500u), edi);
/* 511628: mov dword ptr [esi + 0x504], edi */
  W32((uint32_t)(esi + 0x504u), edi);
/* 51162e: mov dword ptr [esi + 0x508], edi */
  W32((uint32_t)(esi + 0x508u), edi);
/* 511634: mov dword ptr [esi + 0x50c], edi */
  W32((uint32_t)(esi + 0x50cu), edi);
/* 51163a: mov dword ptr [esi + 0x510], edi */
  W32((uint32_t)(esi + 0x510u), edi);
/* 511640: mov dword ptr [esi + 0x514], edi */
  W32((uint32_t)(esi + 0x514u), edi);
/* 511646: mov dword ptr [esi + 0x51c], eax */
  W32((uint32_t)(esi + 0x51cu), eax);
/* 51164c: mov dword ptr [esi + 0x518], edx */
  W32((uint32_t)(esi + 0x518u), edx);
/* 511652: mov dword ptr [esi + 0x520], edi */
  W32((uint32_t)(esi + 0x520u), edi);
/* 511658: mov dword ptr [esi + 0x524], edi */
  W32((uint32_t)(esi + 0x524u), edi);
/* 51165e: mov dword ptr [esi + 0x528], edi */
  W32((uint32_t)(esi + 0x528u), edi);
/* 511664: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 511665: mov dword ptr [esi + 0x4b4], ecx */
  W32((uint32_t)(esi + 0x4b4u), ecx);
/* 51166b: mov eax, esi */
  eax = esi;
/* 51166d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51166e: ret 0x3c */
  esp += 64; SPILL(); return;
}

void f_5116e0(void) {
  LOAD_REGS();
L_5116e0: /* 5116e0: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 5116e4: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 5116e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5116e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5116ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5116eb: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 5116ef: mov esi, ecx */
  esi = ecx;
/* 5116f1: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 5116f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5116f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5116f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5116f8: xor edi, edi */
  edi = 0;
/* 5116fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5116fb: mov ecx, esi */
  ecx = esi;
/* 5116fd: call 0x4e1564 */
  esp -= 4; W32(esp, 0x511702u); SPILL(); f_4e1564(); if (g_unwind) return; RELOAD();
/* 511702: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 511706: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 51170a: mov dword ptr [esi + 0x80], edi */
  W32((uint32_t)(esi + 0x80u), edi);
/* 511710: mov dword ptr [esi + 0x84], edi */
  W32((uint32_t)(esi + 0x84u), edi);
/* 511716: mov dword ptr [esi + 0x88], edi */
  W32((uint32_t)(esi + 0x88u), edi);
/* 51171c: mov dword ptr [esi + 0x8c], edi */
  W32((uint32_t)(esi + 0x8cu), edi);
/* 511722: mov dword ptr [esi + 0x90], edi */
  W32((uint32_t)(esi + 0x90u), edi);
/* 511728: mov word ptr [esi + 0x94], di */
  W16((uint32_t)(esi + 0x94u), (edi & 0xffffu));
/* 51172f: mov dword ptr [esi + 0x49c], edi */
  W32((uint32_t)(esi + 0x49cu), edi);
/* 511735: mov dword ptr [esi], 0x56a8d8 */
  W32((uint32_t)(esi), 0x56a8d8u);
/* 51173b: or ecx, 0x12 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 51173e: mov dword ptr [esi + 0x498], ecx */
  W32((uint32_t)(esi + 0x498u), ecx);
/* 511744: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 511748: lea edx, [esi + 0x4a0] */
  edx = (uint32_t)(esi + 0x4a0u);
/* 51174e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 511750: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 511754: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 511757: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 51175b: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 51175e: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 511761: mov dword ptr [esi + 0x4b8], edi */
  W32((uint32_t)(esi + 0x4b8u), edi);
/* 511767: mov dword ptr [esi + 0x4bc], edi */
  W32((uint32_t)(esi + 0x4bcu), edi);
/* 51176d: mov dword ptr [esi + 0x4c0], edi */
  W32((uint32_t)(esi + 0x4c0u), edi);
/* 511773: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 511777: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 51177b: mov dword ptr [esi + 0x4c4], edi */
  W32((uint32_t)(esi + 0x4c4u), edi);
/* 511781: mov dword ptr [esi + 0x4c8], edi */
  W32((uint32_t)(esi + 0x4c8u), edi);
/* 511787: mov dword ptr [esi + 0x4cc], edi */
  W32((uint32_t)(esi + 0x4ccu), edi);
/* 51178d: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 511791: mov dword ptr [esi + 0x4d0], edi */
  W32((uint32_t)(esi + 0x4d0u), edi);
/* 511797: mov dword ptr [esi + 0x4d4], edi */
  W32((uint32_t)(esi + 0x4d4u), edi);
/* 51179d: mov dword ptr [esi + 0x4d8], edi */
  W32((uint32_t)(esi + 0x4d8u), edi);
/* 5117a3: mov dword ptr [esi + 0x4dc], edi */
  W32((uint32_t)(esi + 0x4dcu), edi);
/* 5117a9: mov dword ptr [esi + 0x4e0], edi */
  W32((uint32_t)(esi + 0x4e0u), edi);
/* 5117af: mov dword ptr [esi + 0x4e4], edi */
  W32((uint32_t)(esi + 0x4e4u), edi);
/* 5117b5: mov dword ptr [esi + 0x4e8], edi */
  W32((uint32_t)(esi + 0x4e8u), edi);
/* 5117bb: mov dword ptr [esi + 0x4ec], edi */
  W32((uint32_t)(esi + 0x4ecu), edi);
/* 5117c1: mov dword ptr [esi + 0x4f0], edi */
  W32((uint32_t)(esi + 0x4f0u), edi);
/* 5117c7: mov dword ptr [esi + 0x4f4], edi */
  W32((uint32_t)(esi + 0x4f4u), edi);
/* 5117cd: mov dword ptr [esi + 0x4f8], edi */
  W32((uint32_t)(esi + 0x4f8u), edi);
/* 5117d3: mov dword ptr [esi + 0x4fc], edi */
  W32((uint32_t)(esi + 0x4fcu), edi);
/* 5117d9: mov dword ptr [esi + 0x500], edi */
  W32((uint32_t)(esi + 0x500u), edi);
/* 5117df: mov dword ptr [esi + 0x504], edi */
  W32((uint32_t)(esi + 0x504u), edi);
/* 5117e5: mov dword ptr [esi + 0x508], edi */
  W32((uint32_t)(esi + 0x508u), edi);
/* 5117eb: mov dword ptr [esi + 0x50c], edi */
  W32((uint32_t)(esi + 0x50cu), edi);
/* 5117f1: mov dword ptr [esi + 0x510], edi */
  W32((uint32_t)(esi + 0x510u), edi);
/* 5117f7: mov dword ptr [esi + 0x514], edi */
  W32((uint32_t)(esi + 0x514u), edi);
/* 5117fd: mov dword ptr [esi + 0x51c], eax */
  W32((uint32_t)(esi + 0x51cu), eax);
/* 511803: mov dword ptr [esi + 0x518], edx */
  W32((uint32_t)(esi + 0x518u), edx);
/* 511809: mov dword ptr [esi + 0x520], edi */
  W32((uint32_t)(esi + 0x520u), edi);
/* 51180f: mov dword ptr [esi + 0x524], edi */
  W32((uint32_t)(esi + 0x524u), edi);
/* 511815: mov dword ptr [esi + 0x528], edi */
  W32((uint32_t)(esi + 0x528u), edi);
/* 51181b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51181c: mov dword ptr [esi + 0x4b4], ecx */
  W32((uint32_t)(esi + 0x4b4u), ecx);
/* 511822: mov eax, esi */
  eax = esi;
/* 511824: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 511825: ret 0x34 */
  esp += 56; SPILL(); return;
}

void f_511890(void) {
  LOAD_REGS();
L_511890: /* 511890: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 511891: mov ebp, esp */
  ebp = esp;
/* 511893: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 511895: push 0x557140 */
  { uint32_t v = 0x557140u; esp -= 4; W32(esp, v); }
/* 51189a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5118a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5118a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5118a8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5118ab: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5118ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5118ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5118af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5118b0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5118b3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5118ba: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 5118bd: je 0x5118c7 */
  if (zf) goto L_5118c7;
L_5118bf: /* 5118bf: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 5118c2: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 5118c5: jmp 0x5118ce */
  goto L_5118ce;
L_5118c7: /* 5118c7: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
L_5118ce: /* 5118ce: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 5118d1: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x5118d6u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 5118d6: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5118d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5118db: je 0x5118f1 */
  if (zf) goto L_5118f1;
L_5118dd: /* 5118dd: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 5118e0: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 5118e2: jns 0x5118f1 */
  if (!sf) goto L_5118f1;
L_5118e4: /* 5118e4: test ch, 4 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5118e7: jne 0x5118f3 */
  if (!zf) goto L_5118f3;
L_5118e9: /* 5118e9: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 5118ec: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 5118ef: jmp 0x5118ce */
  goto L_5118ce;
L_5118f1: /* 5118f1: xor eax, eax */
  eax = 0;
L_5118f3: /* 5118f3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5118f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5118f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5118f8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5118ff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 511900: mov esp, ebp */
  esp = ebp;
/* 511902: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 511903: ret  */
  esp += 4; SPILL(); return;
}

void f_511904(void) {
  LOAD_REGS();
L_511904: /* 511904: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 511907: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 51190c: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 51190f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 511910: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 511913: call 0x554df6 */
  esp -= 4; W32(esp, 0x511918u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_511918(); return;
}

void f_511918(void) {
  LOAD_REGS();
L_511918: /* 511918: push 0x56bc74 */
  { uint32_t v = 0x56bc74u; esp -= 4; W32(esp, v); }
/* 51191d: push 0x5a5798 */
  { uint32_t v = 0x5a5798u; esp -= 4; W32(esp, v); }
/* 511922: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x511927u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 511927: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51192a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51192c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51192e: call 0x554df6 */
  esp -= 4; W32(esp, 0x511933u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_511933: guest_badaddr(0x511933); return;
}

void f_511970(void) {
  LOAD_REGS();
L_511970: /* 511970: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 511972: push 0x557158 */
  { uint32_t v = 0x557158u; esp -= 4; W32(esp, v); }
/* 511977: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 51197d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51197e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 511985: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 511986: xor eax, eax */
  eax = 0;
/* 511988: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 511989: mov esi, ecx */
  esi = ecx;
/* 51198b: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 51198f: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 511991: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 511994: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 511997: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 51199b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51199e: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 5119a5: call 0x4e29af */
  esp -= 4; W32(esp, 0x5119aau); SPILL(); f_4e29af(); if (g_unwind) return; RELOAD();
/* 5119aa: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5119ae: mov eax, esi */
  eax = esi;
/* 5119b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5119b1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5119b8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5119bb: ret  */
  esp += 4; SPILL(); return;
}

void f_5119e0(void) {
  LOAD_REGS();
L_5119e0: /* 5119e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5119e2: push 0x557178 */
  { uint32_t v = 0x557178u; esp -= 4; W32(esp, v); }
/* 5119e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5119ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5119ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5119f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5119f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5119f7: mov esi, ecx */
  esi = ecx;
/* 5119f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 5119fd: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 511a00: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 511a02: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 511a0a: je 0x511a18 */
  if (zf) goto L_511a18;
L_511a0c: /* 511a0c: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 511a12: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 511a14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 511a15: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x511a18u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_511a18: /* 511a18: mov ecx, esi */
  ecx = esi;
/* 511a1a: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 511a21: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 511a28: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 511a30: call 0x4e1cd0 */
  esp -= 4; W32(esp, 0x511a35u); SPILL(); f_4e1cd0(); if (g_unwind) return; RELOAD();
/* 511a35: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 511a39: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 511a3a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 511a41: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 511a44: ret  */
  esp += 4; SPILL(); return;
}

void f_511a70(void) {
  LOAD_REGS();
L_511a70: /* 511a70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 511a72: push 0x557198 */
  { uint32_t v = 0x557198u; esp -= 4; W32(esp, v); }
/* 511a77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 511a7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 511a7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 511a85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 511a86: xor eax, eax */
  eax = 0;
/* 511a88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 511a89: mov esi, ecx */
  esi = ecx;
/* 511a8b: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 511a8f: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 511a91: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 511a94: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 511a97: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 511a9b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 511a9e: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 511aa5: call 0x4e29af */
  esp -= 4; W32(esp, 0x511aaau); SPILL(); f_4e29af(); if (g_unwind) return; RELOAD();
/* 511aaa: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 511aae: mov eax, esi */
  eax = esi;
/* 511ab0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 511ab1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 511ab8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 511abb: ret  */
  esp += 4; SPILL(); return;
}

void f_511ae0(void) {
  LOAD_REGS();
L_511ae0: /* 511ae0: jmp 0x4e2162 */
  SPILL(); f_4e2162(); return;
}

void f_511b00(void) {
  LOAD_REGS();
L_511b00: /* 511b00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 511b01: mov ebp, esp */
  ebp = esp;
/* 511b03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 511b05: push 0x5571d3 */
  { uint32_t v = 0x5571d3u; esp -= 4; W32(esp, v); }
/* 511b0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 511b10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 511b11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 511b18: sub esp, 0x98 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 511b1e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 511b21: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 511b22: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 511b23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 511b24: xor ebx, ebx */
  ebx = 0;
/* 511b26: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511b28: mov edi, ecx */
  edi = ecx;
/* 511b2a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 511b2d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 511b30: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 511b33: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 511b37: je 0x511c01 */
  if (zf) goto L_511c01;
L_511b3d: /* 511b3d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 511b3f: mov dword ptr [edi + 0x40], ebx */
  W32((uint32_t)(edi + 0x40u), ebx);
/* 511b42: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x511b45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 511b45: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511b47: je 0x511b74 */
  if (zf) goto L_511b74;
L_511b49: /* 511b49: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 511b4b: mov ecx, edi */
  ecx = edi;
/* 511b4d: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x511b50u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 511b50: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 511b53: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 511b55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 511b56: mov ecx, ebx */
  ecx = ebx;
/* 511b58: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x511b5bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 511b5b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 511b5d: mov ecx, edi */
  ecx = edi;
/* 511b5f: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x511b62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 511b62: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 511b64: mov ecx, eax */
  ecx = eax;
/* 511b66: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x511b69u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 511b69: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 511b6c: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 511b6f: mov dword ptr [edi + 0x40], eax */
  W32((uint32_t)(edi + 0x40u), eax);
/* 511b72: jmp 0x511b77 */
  goto L_511b77;
L_511b74: /* 511b74: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_511b77: /* 511b77: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 511b7a: mov esi, dword ptr [eax + 0x3c] */
  esi = R32((uint32_t)(eax + 0x3cu));
/* 511b7d: xor edi, edi */
  edi = 0;
/* 511b7f: nop  */
L_511b80: /* 511b80: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 511b82: je 0x511bce */
  if (zf) goto L_511bce;
L_511b84: /* 511b84: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 511b86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 511b87: mov ecx, ebx */
  ecx = ebx;
/* 511b89: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x511b8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 511b8c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 511b8f: cmp dword ptr [esi + 0x18], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511b92: jne 0x511bce */
  if (!zf) goto L_511bce;
L_511b94: /* 511b94: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
L_511b97: /* 511b97: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 511b99: je 0x511bc9 */
  if (zf) goto L_511bc9;
L_511b9b: /* 511b9b: cmp eax, 0x6a7ad8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a7ad8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511ba0: je 0x511ba7 */
  if (zf) goto L_511ba7;
L_511ba2: /* 511ba2: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 511ba5: jmp 0x511b97 */
  goto L_511b97;
L_511ba7: /* 511ba7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 511ba9: je 0x511bc9 */
  if (zf) goto L_511bc9;
L_511bab: /* 511bab: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 511bad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 511bae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 511baf: mov ecx, esi */
  ecx = esi;
/* 511bb1: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x511bb7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 511bb7: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 511bba: imul eax, dword ptr [esi + 0x34] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x34u)));
  eax = (uint32_t)r;
  }
/* 511bbe: add eax, dword ptr [esi + 0x48] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x48u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 511bc1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 511bc4: mov dword ptr [ecx + 0x40], eax */
  W32((uint32_t)(ecx + 0x40u), eax);
/* 511bc7: mov edi, esi */
  edi = esi;
L_511bc9: /* 511bc9: mov esi, dword ptr [esi + 0x2c] */
  esi = R32((uint32_t)(esi + 0x2cu));
/* 511bcc: jmp 0x511b80 */
  goto L_511b80;
L_511bce: /* 511bce: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 511bd1: mov edx, dword ptr [eax + 0x40] */
  edx = R32((uint32_t)(eax + 0x40u));
/* 511bd4: add edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 511bd7: and edx, 0xfffffffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 511bda: mov dword ptr [eax + 0x40], edx */
  W32((uint32_t)(eax + 0x40u), edx);
/* 511bdd: xor ebx, ebx */
  ebx = 0;
/* 511bdf: mov edi, eax */
  edi = eax;
L_511be1: /* 511be1: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511be3: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 511be6: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 511bea: lea esi, [edi + 0x60] */
  esi = (uint32_t)(edi + 0x60u);
/* 511bed: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 511bf0: je 0x511cea */
  if (zf) goto L_511cea;
L_511bf6: /* 511bf6: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 511bf9: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 511bfc: jmp 0x511ced */
  goto L_511ced;
L_511c01: /* 511c01: mov esi, dword ptr [edi + 0x3c] */
  esi = R32((uint32_t)(edi + 0x3cu));
/* 511c04: xor ecx, ecx */
  ecx = 0;
L_511c06: /* 511c06: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511c08: je 0x511be1 */
  if (zf) goto L_511be1;
L_511c0a: /* 511c0a: cmp dword ptr [esi + 0x18], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511c0d: jne 0x511be1 */
  if (!zf) goto L_511be1;
L_511c0f: /* 511c0f: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
L_511c12: /* 511c12: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511c14: je 0x511cae */
  if (zf) goto L_511cae;
L_511c1a: /* 511c1a: cmp eax, 0x6a7ad8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a7ad8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511c1f: je 0x511c28 */
  if (zf) goto L_511c28;
L_511c21: /* 511c21: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 511c24: xor ebx, ebx */
  ebx = 0;
/* 511c26: jmp 0x511c12 */
  goto L_511c12;
L_511c28: /* 511c28: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 511c2a: je 0x511cae */
  if (zf) goto L_511cae;
L_511c30: /* 511c30: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
L_511c33: /* 511c33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 511c35: je 0x511c47 */
  if (zf) goto L_511c47;
L_511c37: /* 511c37: cmp eax, 0x6a5150 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a5150u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511c3c: je 0x511c43 */
  if (zf) goto L_511c43;
L_511c3e: /* 511c3e: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 511c41: jmp 0x511c33 */
  goto L_511c33;
L_511c43: /* 511c43: mov eax, esi */
  eax = esi;
/* 511c45: jmp 0x511c49 */
  goto L_511c49;
L_511c47: /* 511c47: xor eax, eax */
  eax = 0;
L_511c49: /* 511c49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 511c4b: mov edi, dword ptr [esi + 0x48] */
  edi = R32((uint32_t)(esi + 0x48u));
/* 511c4e: je 0x511c55 */
  if (zf) goto L_511c55;
L_511c50: /* 511c50: mov ebx, dword ptr [eax + 0x6c] */
  ebx = R32((uint32_t)(eax + 0x6cu));
/* 511c53: jmp 0x511c57 */
  goto L_511c57;
L_511c55: /* 511c55: xor ebx, ebx */
  ebx = 0;
L_511c57: /* 511c57: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 511c59: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 511c5a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 511c5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 511c5e: mov ecx, esi */
  ecx = esi;
/* 511c60: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x511c66u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 511c66: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 511c69: mov dword ptr [esi + 0x48], edi */
  W32((uint32_t)(esi + 0x48u), edi);
/* 511c6c: mov ecx, esi */
  ecx = esi;
/* 511c6e: mov edi, edi */
  edi = edi;
L_511c70: /* 511c70: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 511c72: je 0x511cae */
  if (zf) goto L_511cae;
L_511c74: /* 511c74: cmp eax, 0x6a5150 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a5150u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511c79: je 0x511c80 */
  if (zf) goto L_511c80;
L_511c7b: /* 511c7b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 511c7e: jmp 0x511c70 */
  goto L_511c70;
L_511c80: /* 511c80: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 511c82: je 0x511cae */
  if (zf) goto L_511cae;
L_511c84: /* 511c84: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
L_511c87: /* 511c87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 511c89: je 0x511ca9 */
  if (zf) goto L_511ca9;
L_511c8b: /* 511c8b: cmp eax, 0x6a5150 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a5150u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511c90: je 0x511c97 */
  if (zf) goto L_511c97;
L_511c92: /* 511c92: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 511c95: jmp 0x511c87 */
  goto L_511c87;
L_511c97: /* 511c97: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 511c9a: mov eax, esi */
  eax = esi;
/* 511c9c: mov dword ptr [eax + 0x6c], ebx */
  W32((uint32_t)(eax + 0x6cu), ebx);
/* 511c9f: mov esi, dword ptr [esi + 0x2c] */
  esi = R32((uint32_t)(esi + 0x2cu));
/* 511ca2: xor ebx, ebx */
  ebx = 0;
/* 511ca4: jmp 0x511c06 */
  goto L_511c06;
L_511ca9: /* 511ca9: xor eax, eax */
  eax = 0;
/* 511cab: mov dword ptr [eax + 0x6c], ebx */
  W32((uint32_t)(eax + 0x6cu), ebx);
L_511cae: /* 511cae: mov esi, dword ptr [esi + 0x2c] */
  esi = R32((uint32_t)(esi + 0x2cu));
/* 511cb1: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 511cb4: xor ebx, ebx */
  ebx = 0;
/* 511cb6: jmp 0x511c06 */
  goto L_511c06;
L_511cea: /* 511cea: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
L_511ced: /* 511ced: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 511cf0: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x511cf5u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 511cf5: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 511cf8: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511cfa: je 0x511d84 */
  if (zf) goto L_511d84;
L_511d00: /* 511d00: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
L_511d03: /* 511d03: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d05: je 0x511d17 */
  if (zf) goto L_511d17;
L_511d07: /* 511d07: cmp eax, 0x6a75a8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a75a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d0c: je 0x511d13 */
  if (zf) goto L_511d13;
L_511d0e: /* 511d0e: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 511d11: jmp 0x511d03 */
  goto L_511d03;
L_511d13: /* 511d13: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d15: jne 0x511d74 */
  if (!zf) goto L_511d74;
L_511d17: /* 511d17: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d19: je 0x511d79 */
  if (zf) goto L_511d79;
L_511d1b: /* 511d1b: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 511d1e: mov edi, edi */
  edi = edi;
L_511d20: /* 511d20: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d22: je 0x511d34 */
  if (zf) goto L_511d34;
L_511d24: /* 511d24: cmp eax, 0x6a5680 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a5680u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d29: je 0x511d30 */
  if (zf) goto L_511d30;
L_511d2b: /* 511d2b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 511d2e: jmp 0x511d20 */
  goto L_511d20;
L_511d30: /* 511d30: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d32: jne 0x511d74 */
  if (!zf) goto L_511d74;
L_511d34: /* 511d34: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d36: je 0x511d79 */
  if (zf) goto L_511d79;
L_511d38: /* 511d38: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 511d3b: jmp 0x511d40 */
  goto L_511d40;
L_511d40: /* 511d40: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d42: je 0x511d54 */
  if (zf) goto L_511d54;
L_511d44: /* 511d44: cmp eax, 0x6a60e0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a60e0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d49: je 0x511d50 */
  if (zf) goto L_511d50;
L_511d4b: /* 511d4b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 511d4e: jmp 0x511d40 */
  goto L_511d40;
L_511d50: /* 511d50: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d52: jne 0x511d74 */
  if (!zf) goto L_511d74;
L_511d54: /* 511d54: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d56: je 0x511d79 */
  if (zf) goto L_511d79;
L_511d58: /* 511d58: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 511d5b: jmp 0x511d60 */
  goto L_511d60;
L_511d60: /* 511d60: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d62: je 0x511d79 */
  if (zf) goto L_511d79;
L_511d64: /* 511d64: cmp eax, 0x6a8548 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a8548u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d69: je 0x511d70 */
  if (zf) goto L_511d70;
L_511d6b: /* 511d6b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 511d6e: jmp 0x511d60 */
  goto L_511d60;
L_511d70: /* 511d70: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d72: je 0x511d79 */
  if (zf) goto L_511d79;
L_511d74: /* 511d74: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 511d76: lea esi, [ecx + 0x58] */
  esi = (uint32_t)(ecx + 0x58u);
L_511d79: /* 511d79: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 511d7c: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 511d7f: jmp 0x511ced */
  goto L_511ced;
L_511d84: /* 511d84: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 511d86: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 511d89: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* 511d8c: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 511d8f: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 511d92: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 511d95: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 511d99: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 511d9c: mov dword ptr [ebp - 0x40], 8 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x8u);
/* 511da3: call 0x4e29af */
  esp -= 4; W32(esp, 0x511da8u); SPILL(); f_4e29af(); if (g_unwind) return; RELOAD();
/* 511da8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 511dab: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511dad: lea edi, [eax + 0x64] */
  edi = (uint32_t)(eax + 0x64u);
/* 511db0: lea ecx, [eax + 0x68] */
  ecx = (uint32_t)(eax + 0x68u);
/* 511db3: lea edx, [eax + 0x6c] */
  edx = (uint32_t)(eax + 0x6cu);
/* 511db6: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 511dba: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 511dbd: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 511dc0: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 511dc3: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 511dc6: je 0x511dd0 */
  if (zf) goto L_511dd0;
L_511dc8: /* 511dc8: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 511dcb: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 511dce: jmp 0x511dd3 */
  goto L_511dd3;
L_511dd0: /* 511dd0: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_511dd3: /* 511dd3: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 511dd6: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x511ddbu); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 511ddb: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 511dde: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511de0: je 0x511fe2 */
  if (zf) goto L_511fe2;
L_511de6: /* 511de6: test byte ptr [esi + 0x3c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 511dea: je 0x511fa8 */
  if (zf) goto L_511fa8;
L_511df0: /* 511df0: cmp dword ptr [0x5b211c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5b211cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511df6: jne 0x511fa8 */
  if (!zf) goto L_511fa8;
L_511dfc: /* 511dfc: mov dword ptr [esi + 0x5c], esi */
  W32((uint32_t)(esi + 0x5cu), esi);
/* 511dff: mov eax, 1 */
  eax = 0x1u;
/* 511e04: mov dword ptr [ebp - 0xa0], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x569110u);
/* 511e0e: mov dword ptr [ebp - 0x9c], 0x7e */
  W32((uint32_t)(ebp + 0xffffff64u), 0x7eu);
/* 511e18: mov dword ptr [ebp - 0x98], 0x7d0 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x7d0u);
/* 511e22: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 511e28: mov dword ptr [ebp - 0x90], ebx */
  W32((uint32_t)(ebp + 0xffffff70u), ebx);
/* 511e2e: mov dword ptr [ebp - 0x8c], ebx */
  W32((uint32_t)(ebp + 0xffffff74u), ebx);
/* 511e34: mov dword ptr [ebp - 0x88], ebx */
  W32((uint32_t)(ebp + 0xffffff78u), ebx);
/* 511e3a: mov dword ptr [ebp - 0x84], ebx */
  W32((uint32_t)(ebp + 0xffffff7cu), ebx);
/* 511e40: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 511e43: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 511e46: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 511e49: mov dword ptr [ebp - 0x74], ebx */
  W32((uint32_t)(ebp + 0xffffff8cu), ebx);
/* 511e4c: mov dword ptr [ebp - 0x70], ebx */
  W32((uint32_t)(ebp + 0xffffff90u), ebx);
/* 511e4f: mov dword ptr [ebp - 0x6c], ebx */
  W32((uint32_t)(ebp + 0xffffff94u), ebx);
/* 511e52: mov dword ptr [ebp - 0x68], ebx */
  W32((uint32_t)(ebp + 0xffffff98u), ebx);
/* 511e55: mov dword ptr [ebp - 0x64], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff9cu), 0xffffffffu);
/* 511e5c: movzx ecx, word ptr [esi + 0x44] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0x44u)));
/* 511e60: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 511e63: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 511e65: mov ecx, esi */
  ecx = esi;
/* 511e67: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 511e6b: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x511e6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 511e6e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 511e70: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 511e76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 511e77: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 511e7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 511e7b: mov ecx, eax */
  ecx = eax;
/* 511e7d: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x511e83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 511e83: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 511e86: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 511e87: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 511e8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 511e8b: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 511e8e: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 511e91: call 0x4e128f */
  esp -= 4; W32(esp, 0x511e96u); SPILL(); f_4e128f(); if (g_unwind) return; RELOAD();
/* 511e96: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 511e99: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511e9b: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 511e9e: je 0x511ea8 */
  if (zf) goto L_511ea8;
L_511ea0: /* 511ea0: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 511ea3: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 511ea6: jmp 0x511eab */
  goto L_511eab;
L_511ea8: /* 511ea8: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
L_511eab: /* 511eab: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 511eae: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x511eb3u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 511eb3: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 511eb6: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511eb8: je 0x511f95 */
  if (zf) goto L_511f95;
L_511ebe: /* 511ebe: test byte ptr [edi + 0x3c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x3cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 511ec2: je 0x511f77 */
  if (zf) goto L_511f77;
L_511ec8: /* 511ec8: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 511ecb: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 511ece: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 511ed1: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 511ed2: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 511ed4: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 511ed7: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 511eda: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_511ee0: /* 511ee0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511ee3: je 0x511f89 */
  if (zf) goto L_511f89;
L_511ee9: /* 511ee9: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 511eec: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 511eef: cmp dword ptr [eax + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511ef2: jne 0x511f82 */
  if (!zf) goto L_511f82;
L_511ef8: /* 511ef8: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 511efb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 511efd: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 511f00: jne 0x511f19 */
  if (!zf) goto L_511f19;
L_511f02: /* 511f02: push 0x1b7 */
  { uint32_t v = 0x1b7u; esp -= 4; W32(esp, v); }
/* 511f07: push 0x5a4ebc */
  { uint32_t v = 0x5a4ebcu; esp -= 4; W32(esp, v); }
/* 511f0c: push 0x5a4ec8 */
  { uint32_t v = 0x5a4ec8u; esp -= 4; W32(esp, v); }
/* 511f11: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x511f16u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 511f16: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_511f19: /* 511f19: movzx eax, word ptr [esi + 0x44] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x44u)));
/* 511f1d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 511f20: movzx ebx, word ptr [edi + 0x44] */
  ebx = (uint32_t)(R16((uint32_t)(edi + 0x44u)));
/* 511f24: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 511f27: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 511f29: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 511f2b: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 511f2d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511f2f: jne 0x511f77 */
  if (!zf) goto L_511f77;
L_511f31: /* 511f31: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 511f33: mov ecx, edi */
  ecx = edi;
/* 511f35: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x511f38u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 511f38: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 511f3a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 511f3d: movzx eax, word ptr [esi + 0x44] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x44u)));
/* 511f41: mov ecx, esi */
  ecx = esi;
/* 511f43: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 511f46: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x511f49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 511f49: movzx ecx, word ptr [esi + 0x44] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0x44u)));
/* 511f4d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 511f50: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 511f53: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 511f55: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 511f58: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 511f59: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* 511f5c: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 511f5e: mov ebx, dword ptr [ebp - 0x38] */
  ebx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 511f61: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 511f62: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 511f64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 511f65: call 0x4e283d */
  esp -= 4; W32(esp, 0x511f6au); SPILL(); f_4e283d(); if (g_unwind) return; RELOAD();
/* 511f6a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 511f6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 511f6f: jne 0x511f77 */
  if (!zf) goto L_511f77;
L_511f71: /* 511f71: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 511f74: mov dword ptr [edi + 0x5c], ecx */
  W32((uint32_t)(edi + 0x5cu), ecx);
L_511f77: /* 511f77: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 511f7a: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 511f7d: jmp 0x511eab */
  goto L_511eab;
L_511f82: /* 511f82: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 511f84: jmp 0x511ee0 */
  goto L_511ee0;
L_511f89: /* 511f89: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 511f90: jmp 0x511f02 */
  goto L_511f02;
L_511f95: /* 511f95: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 511f98: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 511f9c: mov dword ptr [ebp - 0xa0], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x569110u);
/* 511fa6: xor ebx, ebx */
  ebx = 0;
L_511fa8: /* 511fa8: test dword ptr [esi + 0x3c], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 511faf: je 0x511fbc */
  if (zf) goto L_511fbc;
L_511fb1: /* 511fb1: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 511fb4: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 511fb7: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 511fb9: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
L_511fbc: /* 511fbc: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 511fbf: test ah, 0x40 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 511fc2: je 0x511fcf */
  if (zf) goto L_511fcf;
L_511fc4: /* 511fc4: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 511fc7: lea eax, [esi + 0x50] */
  eax = (uint32_t)(esi + 0x50u);
/* 511fca: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 511fcc: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_511fcf: /* 511fcf: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* 511fd1: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 511fd4: lea edi, [esi + 0x4c] */
  edi = (uint32_t)(esi + 0x4cu);
/* 511fd7: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 511fda: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 511fdd: jmp 0x511dd3 */
  goto L_511dd3;
L_511fe2: /* 511fe2: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 511fe5: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 511fe8: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 511fea: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 511fec: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 511fee: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 511ff1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511ff3: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 511ff7: je 0x512005 */
  if (zf) goto L_512005;
L_511ff9: /* 511ff9: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 511fff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 512001: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512002: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x512005u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_512005: /* 512005: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 512008: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 51200b: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 51200e: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 512012: call 0x4e1cd0 */
  esp -= 4; W32(esp, 0x512017u); SPILL(); f_4e1cd0(); if (g_unwind) return; RELOAD();
/* 512017: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 51201a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51201b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51201c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 512023: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 512024: mov esp, ebp */
  esp = ebp;
/* 512026: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 512027: ret 8 */
  esp += 12; SPILL(); return;
}

void f_511cbb(void) {
  LOAD_REGS();
L_511cbb: /* 511cbb: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 511cbe: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 511cc3: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 511cc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 511cc7: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 511cca: call 0x554df6 */
  esp -= 4; W32(esp, 0x511ccfu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_511ccf(); return;
}

void f_511ccf(void) {
  LOAD_REGS();
L_511ccf: /* 511ccf: push 0x56bd14 */
  { uint32_t v = 0x56bd14u; esp -= 4; W32(esp, v); }
/* 511cd4: push 0x5a4eac */
  { uint32_t v = 0x5a4eacu; esp -= 4; W32(esp, v); }
/* 511cd9: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x511cdeu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 511cde: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 511ce1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 511ce3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 511ce5: call 0x554df6 */
  esp -= 4; W32(esp, 0x511ceau); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 511cea: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
L_511ced: /* 511ced: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 511cf0: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x511cf5u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 511cf5: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 511cf8: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511cfa: je 0x511d84 */
  if (zf) goto L_511d84;
L_511d00: /* 511d00: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
L_511d03: /* 511d03: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d05: je 0x511d17 */
  if (zf) goto L_511d17;
L_511d07: /* 511d07: cmp eax, 0x6a75a8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a75a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d0c: je 0x511d13 */
  if (zf) goto L_511d13;
L_511d0e: /* 511d0e: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 511d11: jmp 0x511d03 */
  goto L_511d03;
L_511d13: /* 511d13: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d15: jne 0x511d74 */
  if (!zf) goto L_511d74;
L_511d17: /* 511d17: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d19: je 0x511d79 */
  if (zf) goto L_511d79;
L_511d1b: /* 511d1b: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 511d1e: mov edi, edi */
  edi = edi;
L_511d20: /* 511d20: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d22: je 0x511d34 */
  if (zf) goto L_511d34;
L_511d24: /* 511d24: cmp eax, 0x6a5680 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a5680u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d29: je 0x511d30 */
  if (zf) goto L_511d30;
L_511d2b: /* 511d2b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 511d2e: jmp 0x511d20 */
  goto L_511d20;
L_511d30: /* 511d30: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d32: jne 0x511d74 */
  if (!zf) goto L_511d74;
L_511d34: /* 511d34: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d36: je 0x511d79 */
  if (zf) goto L_511d79;
L_511d38: /* 511d38: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 511d3b: jmp 0x511d40 */
  goto L_511d40;
L_511d40: /* 511d40: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d42: je 0x511d54 */
  if (zf) goto L_511d54;
L_511d44: /* 511d44: cmp eax, 0x6a60e0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a60e0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d49: je 0x511d50 */
  if (zf) goto L_511d50;
L_511d4b: /* 511d4b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 511d4e: jmp 0x511d40 */
  goto L_511d40;
L_511d50: /* 511d50: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d52: jne 0x511d74 */
  if (!zf) goto L_511d74;
L_511d54: /* 511d54: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d56: je 0x511d79 */
  if (zf) goto L_511d79;
L_511d58: /* 511d58: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 511d5b: jmp 0x511d60 */
  goto L_511d60;
L_511d60: /* 511d60: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d62: je 0x511d79 */
  if (zf) goto L_511d79;
L_511d64: /* 511d64: cmp eax, 0x6a8548 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a8548u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d69: je 0x511d70 */
  if (zf) goto L_511d70;
L_511d6b: /* 511d6b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 511d6e: jmp 0x511d60 */
  goto L_511d60;
L_511d70: /* 511d70: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d72: je 0x511d79 */
  if (zf) goto L_511d79;
L_511d74: /* 511d74: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 511d76: lea esi, [ecx + 0x58] */
  esi = (uint32_t)(ecx + 0x58u);
L_511d79: /* 511d79: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 511d7c: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 511d7f: jmp 0x511ced */
  goto L_511ced;
L_511d84: /* 511d84: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 511d86: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 511d89: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* 511d8c: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 511d8f: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 511d92: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 511d95: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 511d99: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 511d9c: mov dword ptr [ebp - 0x40], 8 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x8u);
/* 511da3: call 0x4e29af */
  esp -= 4; W32(esp, 0x511da8u); SPILL(); f_4e29af(); if (g_unwind) return; RELOAD();
/* 511da8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 511dab: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511dad: lea edi, [eax + 0x64] */
  edi = (uint32_t)(eax + 0x64u);
/* 511db0: lea ecx, [eax + 0x68] */
  ecx = (uint32_t)(eax + 0x68u);
/* 511db3: lea edx, [eax + 0x6c] */
  edx = (uint32_t)(eax + 0x6cu);
/* 511db6: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 511dba: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 511dbd: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 511dc0: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 511dc3: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 511dc6: je 0x511dd0 */
  if (zf) goto L_511dd0;
L_511dc8: /* 511dc8: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 511dcb: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 511dce: jmp 0x511dd3 */
  goto L_511dd3;
L_511dd0: /* 511dd0: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_511dd3: /* 511dd3: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 511dd6: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x511ddbu); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 511ddb: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 511dde: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511de0: je 0x511fe2 */
  if (zf) goto L_511fe2;
L_511de6: /* 511de6: test byte ptr [esi + 0x3c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 511dea: je 0x511fa8 */
  if (zf) goto L_511fa8;
L_511df0: /* 511df0: cmp dword ptr [0x5b211c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5b211cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511df6: jne 0x511fa8 */
  if (!zf) goto L_511fa8;
L_511dfc: /* 511dfc: mov dword ptr [esi + 0x5c], esi */
  W32((uint32_t)(esi + 0x5cu), esi);
/* 511dff: mov eax, 1 */
  eax = 0x1u;
/* 511e04: mov dword ptr [ebp - 0xa0], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x569110u);
/* 511e0e: mov dword ptr [ebp - 0x9c], 0x7e */
  W32((uint32_t)(ebp + 0xffffff64u), 0x7eu);
/* 511e18: mov dword ptr [ebp - 0x98], 0x7d0 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x7d0u);
/* 511e22: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 511e28: mov dword ptr [ebp - 0x90], ebx */
  W32((uint32_t)(ebp + 0xffffff70u), ebx);
/* 511e2e: mov dword ptr [ebp - 0x8c], ebx */
  W32((uint32_t)(ebp + 0xffffff74u), ebx);
/* 511e34: mov dword ptr [ebp - 0x88], ebx */
  W32((uint32_t)(ebp + 0xffffff78u), ebx);
/* 511e3a: mov dword ptr [ebp - 0x84], ebx */
  W32((uint32_t)(ebp + 0xffffff7cu), ebx);
/* 511e40: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 511e43: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 511e46: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 511e49: mov dword ptr [ebp - 0x74], ebx */
  W32((uint32_t)(ebp + 0xffffff8cu), ebx);
/* 511e4c: mov dword ptr [ebp - 0x70], ebx */
  W32((uint32_t)(ebp + 0xffffff90u), ebx);
/* 511e4f: mov dword ptr [ebp - 0x6c], ebx */
  W32((uint32_t)(ebp + 0xffffff94u), ebx);
/* 511e52: mov dword ptr [ebp - 0x68], ebx */
  W32((uint32_t)(ebp + 0xffffff98u), ebx);
/* 511e55: mov dword ptr [ebp - 0x64], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff9cu), 0xffffffffu);
/* 511e5c: movzx ecx, word ptr [esi + 0x44] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0x44u)));
/* 511e60: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 511e63: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 511e65: mov ecx, esi */
  ecx = esi;
/* 511e67: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 511e6b: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x511e6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 511e6e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 511e70: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 511e76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 511e77: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 511e7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 511e7b: mov ecx, eax */
  ecx = eax;
/* 511e7d: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x511e83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 511e83: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 511e86: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 511e87: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 511e8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 511e8b: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 511e8e: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 511e91: call 0x4e128f */
  esp -= 4; W32(esp, 0x511e96u); SPILL(); f_4e128f(); if (g_unwind) return; RELOAD();
/* 511e96: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 511e99: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511e9b: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 511e9e: je 0x511ea8 */
  if (zf) goto L_511ea8;
L_511ea0: /* 511ea0: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 511ea3: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 511ea6: jmp 0x511eab */
  goto L_511eab;
L_511ea8: /* 511ea8: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
L_511eab: /* 511eab: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 511eae: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x511eb3u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 511eb3: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 511eb6: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511eb8: je 0x511f95 */
  if (zf) goto L_511f95;
L_511ebe: /* 511ebe: test byte ptr [edi + 0x3c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x3cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 511ec2: je 0x511f77 */
  if (zf) goto L_511f77;
L_511ec8: /* 511ec8: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 511ecb: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 511ece: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 511ed1: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 511ed2: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 511ed4: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 511ed7: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 511eda: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_511ee0: /* 511ee0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511ee3: je 0x511f89 */
  if (zf) goto L_511f89;
L_511ee9: /* 511ee9: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 511eec: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 511eef: cmp dword ptr [eax + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511ef2: jne 0x511f82 */
  if (!zf) goto L_511f82;
L_511ef8: /* 511ef8: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 511efb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 511efd: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 511f00: jne 0x511f19 */
  if (!zf) goto L_511f19;
L_511f02: /* 511f02: push 0x1b7 */
  { uint32_t v = 0x1b7u; esp -= 4; W32(esp, v); }
/* 511f07: push 0x5a4ebc */
  { uint32_t v = 0x5a4ebcu; esp -= 4; W32(esp, v); }
/* 511f0c: push 0x5a4ec8 */
  { uint32_t v = 0x5a4ec8u; esp -= 4; W32(esp, v); }
/* 511f11: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x511f16u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 511f16: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_511f19: /* 511f19: movzx eax, word ptr [esi + 0x44] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x44u)));
/* 511f1d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 511f20: movzx ebx, word ptr [edi + 0x44] */
  ebx = (uint32_t)(R16((uint32_t)(edi + 0x44u)));
/* 511f24: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 511f27: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 511f29: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 511f2b: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 511f2d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511f2f: jne 0x511f77 */
  if (!zf) goto L_511f77;
L_511f31: /* 511f31: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 511f33: mov ecx, edi */
  ecx = edi;
/* 511f35: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x511f38u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 511f38: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 511f3a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 511f3d: movzx eax, word ptr [esi + 0x44] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x44u)));
/* 511f41: mov ecx, esi */
  ecx = esi;
/* 511f43: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 511f46: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x511f49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 511f49: movzx ecx, word ptr [esi + 0x44] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0x44u)));
/* 511f4d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 511f50: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 511f53: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 511f55: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 511f58: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 511f59: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* 511f5c: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 511f5e: mov ebx, dword ptr [ebp - 0x38] */
  ebx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 511f61: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 511f62: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 511f64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 511f65: call 0x4e283d */
  esp -= 4; W32(esp, 0x511f6au); SPILL(); f_4e283d(); if (g_unwind) return; RELOAD();
/* 511f6a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 511f6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 511f6f: jne 0x511f77 */
  if (!zf) goto L_511f77;
L_511f71: /* 511f71: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 511f74: mov dword ptr [edi + 0x5c], ecx */
  W32((uint32_t)(edi + 0x5cu), ecx);
L_511f77: /* 511f77: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 511f7a: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 511f7d: jmp 0x511eab */
  goto L_511eab;
L_511f82: /* 511f82: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 511f84: jmp 0x511ee0 */
  goto L_511ee0;
L_511f89: /* 511f89: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 511f90: jmp 0x511f02 */
  goto L_511f02;
L_511f95: /* 511f95: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 511f98: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 511f9c: mov dword ptr [ebp - 0xa0], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x569110u);
/* 511fa6: xor ebx, ebx */
  ebx = 0;
L_511fa8: /* 511fa8: test dword ptr [esi + 0x3c], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 511faf: je 0x511fbc */
  if (zf) goto L_511fbc;
L_511fb1: /* 511fb1: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 511fb4: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 511fb7: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 511fb9: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
L_511fbc: /* 511fbc: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 511fbf: test ah, 0x40 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 511fc2: je 0x511fcf */
  if (zf) goto L_511fcf;
L_511fc4: /* 511fc4: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 511fc7: lea eax, [esi + 0x50] */
  eax = (uint32_t)(esi + 0x50u);
/* 511fca: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 511fcc: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_511fcf: /* 511fcf: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* 511fd1: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 511fd4: lea edi, [esi + 0x4c] */
  edi = (uint32_t)(esi + 0x4cu);
/* 511fd7: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 511fda: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 511fdd: jmp 0x511dd3 */
  goto L_511dd3;
L_511fe2: /* 511fe2: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 511fe5: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 511fe8: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 511fea: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 511fec: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 511fee: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 511ff1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511ff3: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 511ff7: je 0x512005 */
  if (zf) goto L_512005;
L_511ff9: /* 511ff9: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 511fff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 512001: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512002: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x512005u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_512005: /* 512005: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 512008: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 51200b: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 51200e: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 512012: call 0x4e1cd0 */
  esp -= 4; W32(esp, 0x512017u); SPILL(); f_4e1cd0(); if (g_unwind) return; RELOAD();
/* 512017: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 51201a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51201b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51201c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 512023: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 512024: mov esp, ebp */
  esp = ebp;
/* 512026: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 512027: ret 8 */
  esp += 12; SPILL(); return;
}

void f_511d3d(void) {
  LOAD_REGS();
  goto L_511d3d;
L_511ced: /* 511ced: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 511cf0: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x511cf5u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 511cf5: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 511cf8: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511cfa: je 0x511d84 */
  if (zf) goto L_511d84;
L_511d00: /* 511d00: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
L_511d03: /* 511d03: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d05: je 0x511d17 */
  if (zf) goto L_511d17;
L_511d07: /* 511d07: cmp eax, 0x6a75a8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a75a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d0c: je 0x511d13 */
  if (zf) goto L_511d13;
L_511d0e: /* 511d0e: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 511d11: jmp 0x511d03 */
  goto L_511d03;
L_511d13: /* 511d13: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d15: jne 0x511d74 */
  if (!zf) goto L_511d74;
L_511d17: /* 511d17: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d19: je 0x511d79 */
  if (zf) goto L_511d79;
L_511d1b: /* 511d1b: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 511d1e: mov edi, edi */
  edi = edi;
L_511d20: /* 511d20: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d22: je 0x511d34 */
  if (zf) goto L_511d34;
L_511d24: /* 511d24: cmp eax, 0x6a5680 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a5680u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d29: je 0x511d30 */
  if (zf) goto L_511d30;
L_511d2b: /* 511d2b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 511d2e: jmp 0x511d20 */
  goto L_511d20;
L_511d30: /* 511d30: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d32: jne 0x511d74 */
  if (!zf) goto L_511d74;
L_511d34: /* 511d34: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d36: je 0x511d79 */
  if (zf) goto L_511d79;
L_511d38: /* 511d38: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 511d3b: jmp 0x511d40 */
  goto L_511d40;
L_511d3d: /* 511d3d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_511d40: /* 511d40: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d42: je 0x511d54 */
  if (zf) goto L_511d54;
L_511d44: /* 511d44: cmp eax, 0x6a60e0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a60e0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d49: je 0x511d50 */
  if (zf) goto L_511d50;
L_511d4b: /* 511d4b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 511d4e: jmp 0x511d40 */
  goto L_511d40;
L_511d50: /* 511d50: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d52: jne 0x511d74 */
  if (!zf) goto L_511d74;
L_511d54: /* 511d54: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d56: je 0x511d79 */
  if (zf) goto L_511d79;
L_511d58: /* 511d58: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 511d5b: jmp 0x511d60 */
  goto L_511d60;
L_511d60: /* 511d60: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d62: je 0x511d79 */
  if (zf) goto L_511d79;
L_511d64: /* 511d64: cmp eax, 0x6a8548 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a8548u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d69: je 0x511d70 */
  if (zf) goto L_511d70;
L_511d6b: /* 511d6b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 511d6e: jmp 0x511d60 */
  goto L_511d60;
L_511d70: /* 511d70: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d72: je 0x511d79 */
  if (zf) goto L_511d79;
L_511d74: /* 511d74: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 511d76: lea esi, [ecx + 0x58] */
  esi = (uint32_t)(ecx + 0x58u);
L_511d79: /* 511d79: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 511d7c: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 511d7f: jmp 0x511ced */
  goto L_511ced;
L_511d84: /* 511d84: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 511d86: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 511d89: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* 511d8c: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 511d8f: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 511d92: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 511d95: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 511d99: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 511d9c: mov dword ptr [ebp - 0x40], 8 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x8u);
/* 511da3: call 0x4e29af */
  esp -= 4; W32(esp, 0x511da8u); SPILL(); f_4e29af(); if (g_unwind) return; RELOAD();
/* 511da8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 511dab: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511dad: lea edi, [eax + 0x64] */
  edi = (uint32_t)(eax + 0x64u);
/* 511db0: lea ecx, [eax + 0x68] */
  ecx = (uint32_t)(eax + 0x68u);
/* 511db3: lea edx, [eax + 0x6c] */
  edx = (uint32_t)(eax + 0x6cu);
/* 511db6: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 511dba: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 511dbd: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 511dc0: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 511dc3: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 511dc6: je 0x511dd0 */
  if (zf) goto L_511dd0;
L_511dc8: /* 511dc8: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 511dcb: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 511dce: jmp 0x511dd3 */
  goto L_511dd3;
L_511dd0: /* 511dd0: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_511dd3: /* 511dd3: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 511dd6: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x511ddbu); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 511ddb: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 511dde: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511de0: je 0x511fe2 */
  if (zf) goto L_511fe2;
L_511de6: /* 511de6: test byte ptr [esi + 0x3c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 511dea: je 0x511fa8 */
  if (zf) goto L_511fa8;
L_511df0: /* 511df0: cmp dword ptr [0x5b211c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5b211cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511df6: jne 0x511fa8 */
  if (!zf) goto L_511fa8;
L_511dfc: /* 511dfc: mov dword ptr [esi + 0x5c], esi */
  W32((uint32_t)(esi + 0x5cu), esi);
/* 511dff: mov eax, 1 */
  eax = 0x1u;
/* 511e04: mov dword ptr [ebp - 0xa0], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x569110u);
/* 511e0e: mov dword ptr [ebp - 0x9c], 0x7e */
  W32((uint32_t)(ebp + 0xffffff64u), 0x7eu);
/* 511e18: mov dword ptr [ebp - 0x98], 0x7d0 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x7d0u);
/* 511e22: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 511e28: mov dword ptr [ebp - 0x90], ebx */
  W32((uint32_t)(ebp + 0xffffff70u), ebx);
/* 511e2e: mov dword ptr [ebp - 0x8c], ebx */
  W32((uint32_t)(ebp + 0xffffff74u), ebx);
/* 511e34: mov dword ptr [ebp - 0x88], ebx */
  W32((uint32_t)(ebp + 0xffffff78u), ebx);
/* 511e3a: mov dword ptr [ebp - 0x84], ebx */
  W32((uint32_t)(ebp + 0xffffff7cu), ebx);
/* 511e40: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 511e43: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 511e46: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 511e49: mov dword ptr [ebp - 0x74], ebx */
  W32((uint32_t)(ebp + 0xffffff8cu), ebx);
/* 511e4c: mov dword ptr [ebp - 0x70], ebx */
  W32((uint32_t)(ebp + 0xffffff90u), ebx);
/* 511e4f: mov dword ptr [ebp - 0x6c], ebx */
  W32((uint32_t)(ebp + 0xffffff94u), ebx);
/* 511e52: mov dword ptr [ebp - 0x68], ebx */
  W32((uint32_t)(ebp + 0xffffff98u), ebx);
/* 511e55: mov dword ptr [ebp - 0x64], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff9cu), 0xffffffffu);
/* 511e5c: movzx ecx, word ptr [esi + 0x44] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0x44u)));
/* 511e60: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 511e63: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 511e65: mov ecx, esi */
  ecx = esi;
/* 511e67: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 511e6b: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x511e6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 511e6e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 511e70: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 511e76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 511e77: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 511e7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 511e7b: mov ecx, eax */
  ecx = eax;
/* 511e7d: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x511e83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 511e83: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 511e86: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 511e87: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 511e8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 511e8b: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 511e8e: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 511e91: call 0x4e128f */
  esp -= 4; W32(esp, 0x511e96u); SPILL(); f_4e128f(); if (g_unwind) return; RELOAD();
/* 511e96: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 511e99: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511e9b: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 511e9e: je 0x511ea8 */
  if (zf) goto L_511ea8;
L_511ea0: /* 511ea0: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 511ea3: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 511ea6: jmp 0x511eab */
  goto L_511eab;
L_511ea8: /* 511ea8: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
L_511eab: /* 511eab: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 511eae: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x511eb3u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 511eb3: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 511eb6: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511eb8: je 0x511f95 */
  if (zf) goto L_511f95;
L_511ebe: /* 511ebe: test byte ptr [edi + 0x3c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x3cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 511ec2: je 0x511f77 */
  if (zf) goto L_511f77;
L_511ec8: /* 511ec8: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 511ecb: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 511ece: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 511ed1: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 511ed2: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 511ed4: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 511ed7: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 511eda: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_511ee0: /* 511ee0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511ee3: je 0x511f89 */
  if (zf) goto L_511f89;
L_511ee9: /* 511ee9: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 511eec: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 511eef: cmp dword ptr [eax + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511ef2: jne 0x511f82 */
  if (!zf) goto L_511f82;
L_511ef8: /* 511ef8: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 511efb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 511efd: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 511f00: jne 0x511f19 */
  if (!zf) goto L_511f19;
L_511f02: /* 511f02: push 0x1b7 */
  { uint32_t v = 0x1b7u; esp -= 4; W32(esp, v); }
/* 511f07: push 0x5a4ebc */
  { uint32_t v = 0x5a4ebcu; esp -= 4; W32(esp, v); }
/* 511f0c: push 0x5a4ec8 */
  { uint32_t v = 0x5a4ec8u; esp -= 4; W32(esp, v); }
/* 511f11: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x511f16u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 511f16: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_511f19: /* 511f19: movzx eax, word ptr [esi + 0x44] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x44u)));
/* 511f1d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 511f20: movzx ebx, word ptr [edi + 0x44] */
  ebx = (uint32_t)(R16((uint32_t)(edi + 0x44u)));
/* 511f24: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 511f27: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 511f29: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 511f2b: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 511f2d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511f2f: jne 0x511f77 */
  if (!zf) goto L_511f77;
L_511f31: /* 511f31: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 511f33: mov ecx, edi */
  ecx = edi;
/* 511f35: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x511f38u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 511f38: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 511f3a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 511f3d: movzx eax, word ptr [esi + 0x44] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x44u)));
/* 511f41: mov ecx, esi */
  ecx = esi;
/* 511f43: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 511f46: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x511f49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 511f49: movzx ecx, word ptr [esi + 0x44] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0x44u)));
/* 511f4d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 511f50: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 511f53: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 511f55: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 511f58: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 511f59: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* 511f5c: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 511f5e: mov ebx, dword ptr [ebp - 0x38] */
  ebx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 511f61: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 511f62: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 511f64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 511f65: call 0x4e283d */
  esp -= 4; W32(esp, 0x511f6au); SPILL(); f_4e283d(); if (g_unwind) return; RELOAD();
/* 511f6a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 511f6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 511f6f: jne 0x511f77 */
  if (!zf) goto L_511f77;
L_511f71: /* 511f71: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 511f74: mov dword ptr [edi + 0x5c], ecx */
  W32((uint32_t)(edi + 0x5cu), ecx);
L_511f77: /* 511f77: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 511f7a: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 511f7d: jmp 0x511eab */
  goto L_511eab;
L_511f82: /* 511f82: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 511f84: jmp 0x511ee0 */
  goto L_511ee0;
L_511f89: /* 511f89: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 511f90: jmp 0x511f02 */
  goto L_511f02;
L_511f95: /* 511f95: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 511f98: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 511f9c: mov dword ptr [ebp - 0xa0], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x569110u);
/* 511fa6: xor ebx, ebx */
  ebx = 0;
L_511fa8: /* 511fa8: test dword ptr [esi + 0x3c], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 511faf: je 0x511fbc */
  if (zf) goto L_511fbc;
L_511fb1: /* 511fb1: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 511fb4: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 511fb7: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 511fb9: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
L_511fbc: /* 511fbc: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 511fbf: test ah, 0x40 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 511fc2: je 0x511fcf */
  if (zf) goto L_511fcf;
L_511fc4: /* 511fc4: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 511fc7: lea eax, [esi + 0x50] */
  eax = (uint32_t)(esi + 0x50u);
/* 511fca: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 511fcc: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_511fcf: /* 511fcf: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* 511fd1: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 511fd4: lea edi, [esi + 0x4c] */
  edi = (uint32_t)(esi + 0x4cu);
/* 511fd7: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 511fda: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 511fdd: jmp 0x511dd3 */
  goto L_511dd3;
L_511fe2: /* 511fe2: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 511fe5: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 511fe8: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 511fea: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 511fec: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 511fee: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 511ff1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511ff3: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 511ff7: je 0x512005 */
  if (zf) goto L_512005;
L_511ff9: /* 511ff9: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 511fff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 512001: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512002: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x512005u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_512005: /* 512005: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 512008: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 51200b: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 51200e: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 512012: call 0x4e1cd0 */
  esp -= 4; W32(esp, 0x512017u); SPILL(); f_4e1cd0(); if (g_unwind) return; RELOAD();
/* 512017: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 51201a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51201b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51201c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 512023: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 512024: mov esp, ebp */
  esp = ebp;
/* 512026: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 512027: ret 8 */
  esp += 12; SPILL(); return;
}

void f_511d5d(void) {
  LOAD_REGS();
  goto L_511d5d;
L_511ced: /* 511ced: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 511cf0: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x511cf5u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 511cf5: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 511cf8: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511cfa: je 0x511d84 */
  if (zf) goto L_511d84;
L_511d00: /* 511d00: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
L_511d03: /* 511d03: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d05: je 0x511d17 */
  if (zf) goto L_511d17;
L_511d07: /* 511d07: cmp eax, 0x6a75a8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a75a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d0c: je 0x511d13 */
  if (zf) goto L_511d13;
L_511d0e: /* 511d0e: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 511d11: jmp 0x511d03 */
  goto L_511d03;
L_511d13: /* 511d13: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d15: jne 0x511d74 */
  if (!zf) goto L_511d74;
L_511d17: /* 511d17: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d19: je 0x511d79 */
  if (zf) goto L_511d79;
L_511d1b: /* 511d1b: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 511d1e: mov edi, edi */
  edi = edi;
L_511d20: /* 511d20: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d22: je 0x511d34 */
  if (zf) goto L_511d34;
L_511d24: /* 511d24: cmp eax, 0x6a5680 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a5680u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d29: je 0x511d30 */
  if (zf) goto L_511d30;
L_511d2b: /* 511d2b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 511d2e: jmp 0x511d20 */
  goto L_511d20;
L_511d30: /* 511d30: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d32: jne 0x511d74 */
  if (!zf) goto L_511d74;
L_511d34: /* 511d34: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d36: je 0x511d79 */
  if (zf) goto L_511d79;
L_511d38: /* 511d38: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 511d3b: jmp 0x511d40 */
  goto L_511d40;
L_511d40: /* 511d40: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d42: je 0x511d54 */
  if (zf) goto L_511d54;
L_511d44: /* 511d44: cmp eax, 0x6a60e0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a60e0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d49: je 0x511d50 */
  if (zf) goto L_511d50;
L_511d4b: /* 511d4b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 511d4e: jmp 0x511d40 */
  goto L_511d40;
L_511d50: /* 511d50: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d52: jne 0x511d74 */
  if (!zf) goto L_511d74;
L_511d54: /* 511d54: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d56: je 0x511d79 */
  if (zf) goto L_511d79;
L_511d58: /* 511d58: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 511d5b: jmp 0x511d60 */
  goto L_511d60;
L_511d5d: /* 511d5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_511d60: /* 511d60: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d62: je 0x511d79 */
  if (zf) goto L_511d79;
L_511d64: /* 511d64: cmp eax, 0x6a8548 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a8548u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d69: je 0x511d70 */
  if (zf) goto L_511d70;
L_511d6b: /* 511d6b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 511d6e: jmp 0x511d60 */
  goto L_511d60;
L_511d70: /* 511d70: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511d72: je 0x511d79 */
  if (zf) goto L_511d79;
L_511d74: /* 511d74: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 511d76: lea esi, [ecx + 0x58] */
  esi = (uint32_t)(ecx + 0x58u);
L_511d79: /* 511d79: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 511d7c: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 511d7f: jmp 0x511ced */
  goto L_511ced;
L_511d84: /* 511d84: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 511d86: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 511d89: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* 511d8c: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 511d8f: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 511d92: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 511d95: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 511d99: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 511d9c: mov dword ptr [ebp - 0x40], 8 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x8u);
/* 511da3: call 0x4e29af */
  esp -= 4; W32(esp, 0x511da8u); SPILL(); f_4e29af(); if (g_unwind) return; RELOAD();
/* 511da8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 511dab: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511dad: lea edi, [eax + 0x64] */
  edi = (uint32_t)(eax + 0x64u);
/* 511db0: lea ecx, [eax + 0x68] */
  ecx = (uint32_t)(eax + 0x68u);
/* 511db3: lea edx, [eax + 0x6c] */
  edx = (uint32_t)(eax + 0x6cu);
/* 511db6: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 511dba: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 511dbd: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 511dc0: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 511dc3: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 511dc6: je 0x511dd0 */
  if (zf) goto L_511dd0;
L_511dc8: /* 511dc8: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 511dcb: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 511dce: jmp 0x511dd3 */
  goto L_511dd3;
L_511dd0: /* 511dd0: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
L_511dd3: /* 511dd3: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 511dd6: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x511ddbu); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 511ddb: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 511dde: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511de0: je 0x511fe2 */
  if (zf) goto L_511fe2;
L_511de6: /* 511de6: test byte ptr [esi + 0x3c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 511dea: je 0x511fa8 */
  if (zf) goto L_511fa8;
L_511df0: /* 511df0: cmp dword ptr [0x5b211c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5b211cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511df6: jne 0x511fa8 */
  if (!zf) goto L_511fa8;
L_511dfc: /* 511dfc: mov dword ptr [esi + 0x5c], esi */
  W32((uint32_t)(esi + 0x5cu), esi);
/* 511dff: mov eax, 1 */
  eax = 0x1u;
/* 511e04: mov dword ptr [ebp - 0xa0], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x569110u);
/* 511e0e: mov dword ptr [ebp - 0x9c], 0x7e */
  W32((uint32_t)(ebp + 0xffffff64u), 0x7eu);
/* 511e18: mov dword ptr [ebp - 0x98], 0x7d0 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x7d0u);
/* 511e22: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 511e28: mov dword ptr [ebp - 0x90], ebx */
  W32((uint32_t)(ebp + 0xffffff70u), ebx);
/* 511e2e: mov dword ptr [ebp - 0x8c], ebx */
  W32((uint32_t)(ebp + 0xffffff74u), ebx);
/* 511e34: mov dword ptr [ebp - 0x88], ebx */
  W32((uint32_t)(ebp + 0xffffff78u), ebx);
/* 511e3a: mov dword ptr [ebp - 0x84], ebx */
  W32((uint32_t)(ebp + 0xffffff7cu), ebx);
/* 511e40: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 511e43: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 511e46: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 511e49: mov dword ptr [ebp - 0x74], ebx */
  W32((uint32_t)(ebp + 0xffffff8cu), ebx);
/* 511e4c: mov dword ptr [ebp - 0x70], ebx */
  W32((uint32_t)(ebp + 0xffffff90u), ebx);
/* 511e4f: mov dword ptr [ebp - 0x6c], ebx */
  W32((uint32_t)(ebp + 0xffffff94u), ebx);
/* 511e52: mov dword ptr [ebp - 0x68], ebx */
  W32((uint32_t)(ebp + 0xffffff98u), ebx);
/* 511e55: mov dword ptr [ebp - 0x64], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff9cu), 0xffffffffu);
/* 511e5c: movzx ecx, word ptr [esi + 0x44] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0x44u)));
/* 511e60: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 511e63: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 511e65: mov ecx, esi */
  ecx = esi;
/* 511e67: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 511e6b: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x511e6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 511e6e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 511e70: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 511e76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 511e77: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 511e7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 511e7b: mov ecx, eax */
  ecx = eax;
/* 511e7d: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x511e83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 511e83: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 511e86: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 511e87: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 511e8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 511e8b: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 511e8e: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 511e91: call 0x4e128f */
  esp -= 4; W32(esp, 0x511e96u); SPILL(); f_4e128f(); if (g_unwind) return; RELOAD();
/* 511e96: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 511e99: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511e9b: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 511e9e: je 0x511ea8 */
  if (zf) goto L_511ea8;
L_511ea0: /* 511ea0: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 511ea3: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 511ea6: jmp 0x511eab */
  goto L_511eab;
L_511ea8: /* 511ea8: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
L_511eab: /* 511eab: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 511eae: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x511eb3u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 511eb3: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 511eb6: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511eb8: je 0x511f95 */
  if (zf) goto L_511f95;
L_511ebe: /* 511ebe: test byte ptr [edi + 0x3c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x3cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 511ec2: je 0x511f77 */
  if (zf) goto L_511f77;
L_511ec8: /* 511ec8: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 511ecb: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 511ece: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 511ed1: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 511ed2: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 511ed4: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 511ed7: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 511eda: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_511ee0: /* 511ee0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511ee3: je 0x511f89 */
  if (zf) goto L_511f89;
L_511ee9: /* 511ee9: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 511eec: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 511eef: cmp dword ptr [eax + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511ef2: jne 0x511f82 */
  if (!zf) goto L_511f82;
L_511ef8: /* 511ef8: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 511efb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 511efd: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 511f00: jne 0x511f19 */
  if (!zf) goto L_511f19;
L_511f02: /* 511f02: push 0x1b7 */
  { uint32_t v = 0x1b7u; esp -= 4; W32(esp, v); }
/* 511f07: push 0x5a4ebc */
  { uint32_t v = 0x5a4ebcu; esp -= 4; W32(esp, v); }
/* 511f0c: push 0x5a4ec8 */
  { uint32_t v = 0x5a4ec8u; esp -= 4; W32(esp, v); }
/* 511f11: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x511f16u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 511f16: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_511f19: /* 511f19: movzx eax, word ptr [esi + 0x44] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x44u)));
/* 511f1d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 511f20: movzx ebx, word ptr [edi + 0x44] */
  ebx = (uint32_t)(R16((uint32_t)(edi + 0x44u)));
/* 511f24: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 511f27: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 511f29: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 511f2b: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 511f2d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511f2f: jne 0x511f77 */
  if (!zf) goto L_511f77;
L_511f31: /* 511f31: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 511f33: mov ecx, edi */
  ecx = edi;
/* 511f35: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x511f38u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 511f38: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 511f3a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 511f3d: movzx eax, word ptr [esi + 0x44] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x44u)));
/* 511f41: mov ecx, esi */
  ecx = esi;
/* 511f43: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 511f46: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x511f49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 511f49: movzx ecx, word ptr [esi + 0x44] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0x44u)));
/* 511f4d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 511f50: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 511f53: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 511f55: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 511f58: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 511f59: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* 511f5c: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 511f5e: mov ebx, dword ptr [ebp - 0x38] */
  ebx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 511f61: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 511f62: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 511f64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 511f65: call 0x4e283d */
  esp -= 4; W32(esp, 0x511f6au); SPILL(); f_4e283d(); if (g_unwind) return; RELOAD();
/* 511f6a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 511f6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 511f6f: jne 0x511f77 */
  if (!zf) goto L_511f77;
L_511f71: /* 511f71: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 511f74: mov dword ptr [edi + 0x5c], ecx */
  W32((uint32_t)(edi + 0x5cu), ecx);
L_511f77: /* 511f77: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 511f7a: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 511f7d: jmp 0x511eab */
  goto L_511eab;
L_511f82: /* 511f82: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 511f84: jmp 0x511ee0 */
  goto L_511ee0;
L_511f89: /* 511f89: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 511f90: jmp 0x511f02 */
  goto L_511f02;
L_511f95: /* 511f95: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 511f98: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 511f9c: mov dword ptr [ebp - 0xa0], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x569110u);
/* 511fa6: xor ebx, ebx */
  ebx = 0;
L_511fa8: /* 511fa8: test dword ptr [esi + 0x3c], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 511faf: je 0x511fbc */
  if (zf) goto L_511fbc;
L_511fb1: /* 511fb1: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 511fb4: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 511fb7: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 511fb9: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
L_511fbc: /* 511fbc: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 511fbf: test ah, 0x40 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 511fc2: je 0x511fcf */
  if (zf) goto L_511fcf;
L_511fc4: /* 511fc4: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 511fc7: lea eax, [esi + 0x50] */
  eax = (uint32_t)(esi + 0x50u);
/* 511fca: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 511fcc: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_511fcf: /* 511fcf: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* 511fd1: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 511fd4: lea edi, [esi + 0x4c] */
  edi = (uint32_t)(esi + 0x4cu);
/* 511fd7: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 511fda: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 511fdd: jmp 0x511dd3 */
  goto L_511dd3;
L_511fe2: /* 511fe2: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 511fe5: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 511fe8: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 511fea: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 511fec: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 511fee: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 511ff1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 511ff3: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 511ff7: je 0x512005 */
  if (zf) goto L_512005;
L_511ff9: /* 511ff9: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 511fff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 512001: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512002: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x512005u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_512005: /* 512005: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 512008: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 51200b: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 51200e: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 512012: call 0x4e1cd0 */
  esp -= 4; W32(esp, 0x512017u); SPILL(); f_4e1cd0(); if (g_unwind) return; RELOAD();
/* 512017: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 51201a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51201b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51201c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 512023: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 512024: mov esp, ebp */
  esp = ebp;
/* 512026: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 512027: ret 8 */
  esp += 12; SPILL(); return;
}

void f_51202a(void) {
  LOAD_REGS();
L_51202a: /* 51202a: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 51202d: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 512032: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 512035: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 512036: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 512039: call 0x554df6 */
  esp -= 4; W32(esp, 0x51203eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_51203e(); return;
}

void f_51203e(void) {
  LOAD_REGS();
L_51203e: /* 51203e: push 0x56bcf8 */
  { uint32_t v = 0x56bcf8u; esp -= 4; W32(esp, v); }
/* 512043: push 0x5a4ed4 */
  { uint32_t v = 0x5a4ed4u; esp -= 4; W32(esp, v); }
/* 512048: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x51204du); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 51204d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 512050: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 512052: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 512054: call 0x554df6 */
  esp -= 4; W32(esp, 0x512059u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_512059(); return;
}

void f_512059(void) {
  LOAD_REGS();
L_512059: /* 512059: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 51205c: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 512061: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 512064: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512065: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 512068: call 0x554df6 */
  esp -= 4; W32(esp, 0x51206du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_51206d(); return;
}

void f_51206d(void) {
  LOAD_REGS();
L_51206d: /* 51206d: push 0x56bce0 */
  { uint32_t v = 0x56bce0u; esp -= 4; W32(esp, v); }
/* 512072: push 0x5a4eb4 */
  { uint32_t v = 0x5a4eb4u; esp -= 4; W32(esp, v); }
/* 512077: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x51207cu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 51207c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51207f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 512081: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 512083: call 0x554df6 */
  esp -= 4; W32(esp, 0x512088u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_512088(); return;
}

void f_512088(void) {
  LOAD_REGS();
L_512088: /* 512088: mov ecx, dword ptr [ebp - 0xa4] */
  ecx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 51208e: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 512093: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* 512096: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 512097: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 51209a: call 0x554df6 */
  esp -= 4; W32(esp, 0x51209fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_51209f(); return;
}

void f_51209f(void) {
  LOAD_REGS();
L_51209f: /* 51209f: push 0x56bcbc */
  { uint32_t v = 0x56bcbcu; esp -= 4; W32(esp, v); }
/* 5120a4: push 0x5a4edc */
  { uint32_t v = 0x5a4edcu; esp -= 4; W32(esp, v); }
/* 5120a9: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5120aeu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5120ae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5120b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5120b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5120b5: call 0x554df6 */
  esp -= 4; W32(esp, 0x5120bau); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5120ba: guest_badaddr(0x5120ba); return;
}

void f_512230(void) {
  LOAD_REGS();
L_512230: /* 512230: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 512231: mov ebp, esp */
  ebp = esp;
/* 512233: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 512235: push 0x5571f0 */
  { uint32_t v = 0x5571f0u; esp -= 4; W32(esp, v); }
/* 51223a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 512240: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512241: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 512248: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51224b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 51224e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51224f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 512250: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 512251: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 512254: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 512257: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 51225a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51225b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51225c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 51225f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 512266: call 0x4e175d */
  esp -= 4; W32(esp, 0x51226bu); SPILL(); f_4e175d(); if (g_unwind) return; RELOAD();
/* 51226b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 51226e: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 512271: add ecx, 0x98 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 512277: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 512279: je 0x512291 */
  if (zf) goto L_512291;
L_51227b: /* 51227b: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 512280: add eax, 0x98 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 512285: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512286: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 512287: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x51228cu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 51228c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51228f: jmp 0x5122ac */
  goto L_5122ac;
L_512291: /* 512291: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 512294: mov ecx, 0x400 */
  ecx = 0x400u;
/* 512299: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 51229c: xor eax, eax */
  eax = 0;
/* 51229e: mov ebx, ecx */
  ebx = ecx;
/* 5122a0: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 5122a3: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 5122a6: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 5122a8: mov ecx, ebx */
  ecx = ebx;
/* 5122aa: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
L_5122ac: /* 5122ac: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 5122af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5122b1: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 5122b4: je 0x5122be */
  if (zf) goto L_5122be;
L_5122b6: /* 5122b6: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* 5122b9: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 5122bc: jmp 0x5122c5 */
  goto L_5122c5;
L_5122be: /* 5122be: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_5122c5: /* 5122c5: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 5122c8: call 0x4e3deb */
  esp -= 4; W32(esp, 0x5122cdu); SPILL(); f_4e3deb(); if (g_unwind) return; RELOAD();
/* 5122cd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5122d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5122d2: je 0x512332 */
  if (zf) goto L_512332;
L_5122d4: /* 5122d4: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 5122d7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5122da: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5122dc: jne 0x512332 */
  if (!zf) goto L_512332;
L_5122de: /* 5122de: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 5122e1: and ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 5122e7: mov edx, dword ptr [edx + ecx*4 + 0x98] */
  edx = R32((uint32_t)(edx + ecx*4 + 0x98u));
/* 5122ee: mov dword ptr [eax + 0x30], edx */
  W32((uint32_t)(eax + 0x30u), edx);
/* 5122f1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5122f4: mov dword ptr [edx + ecx*4 + 0x98], eax */
  W32((uint32_t)(edx + ecx*4 + 0x98u), eax);
/* 5122fb: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 5122fe: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 512301: jmp 0x5122c5 */
  goto L_5122c5;
L_512332: /* 512332: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 512335: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 512336: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 512337: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51233e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51233f: mov esp, ebp */
  esp = ebp;
/* 512341: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 512342: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512303(void) {
  LOAD_REGS();
L_512303: /* 512303: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 512306: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 51230b: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 51230e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51230f: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 512312: call 0x554df6 */
  esp -= 4; W32(esp, 0x512317u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_512317(); return;
}

void f_512317(void) {
  LOAD_REGS();
L_512317: /* 512317: push 0x56bd38 */
  { uint32_t v = 0x56bd38u; esp -= 4; W32(esp, v); }
/* 51231c: push 0x5a5460 */
  { uint32_t v = 0x5a5460u; esp -= 4; W32(esp, v); }
/* 512321: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x512326u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 512326: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 512329: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51232b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51232d: call 0x554df6 */
  esp -= 4; W32(esp, 0x512332u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 512332: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 512335: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 512336: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 512337: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 51233e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51233f: mov esp, ebp */
  esp = ebp;
/* 512341: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 512342: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5123a0(void) {
  LOAD_REGS();
L_5123a0: /* 5123a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5123a1: mov ebp, esp */
  ebp = esp;
/* 5123a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5123a5: push 0x557217 */
  { uint32_t v = 0x557217u; esp -= 4; W32(esp, v); }
/* 5123aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5123b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5123b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5123b8: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5123bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5123bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5123bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5123be: xor ebx, ebx */
  ebx = 0;
/* 5123c0: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 5123c3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 5123c6: mov esi, ecx */
  esi = ecx;
/* 5123c8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 5123cb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5123ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5123cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5123d0: xor edi, edi */
  edi = 0;
/* 5123d2: mov ecx, esi */
  ecx = esi;
/* 5123d4: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 5123d7: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 5123da: call 0x4e2d88 */
  esp -= 4; W32(esp, 0x5123dfu); SPILL(); f_4e2d88(); if (g_unwind) return; RELOAD();
/* 5123df: cmp dword ptr [0x5b211c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5b211cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5123e5: jne 0x512597 */
  if (!zf) goto L_512597;
L_5123eb: /* 5123eb: lea ecx, [esi + 0x4c4] */
  ecx = (uint32_t)(esi + 0x4c4u);
/* 5123f1: xor eax, eax */
  eax = 0;
L_5123f3: /* 5123f3: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5123f6: jge 0x5123fb */
  if ((sf == of)) goto L_5123fb;
L_5123f8: /* 5123f8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5123f9: jmp 0x5123f3 */
  goto L_5123f3;
L_5123fb: /* 5123fb: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 5123fd: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 512400: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 512403: call 0x4e4502 */
  esp -= 4; W32(esp, 0x512408u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 512408: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 51240b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51240d: je 0x512416 */
  if (zf) goto L_512416;
L_51240f: /* 51240f: add eax, 0x4b8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4b8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 512414: jmp 0x51242c */
  goto L_51242c;
L_512416: /* 512416: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 512419: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 51241c: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 51241f: or ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 512422: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 512425: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 512429: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_51242c: /* 51242c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51242d: lea ecx, [esi + 0x4b8] */
  ecx = (uint32_t)(esi + 0x4b8u);
/* 512433: call 0x4e1a0a */
  esp -= 4; W32(esp, 0x512438u); SPILL(); f_4e1a0a(); if (g_unwind) return; RELOAD();
/* 512438: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 51243b: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 51243e: je 0x512448 */
  if (zf) goto L_512448;
L_512440: /* 512440: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 512443: call 0x4e3fcb */
  esp -= 4; W32(esp, 0x512448u); SPILL(); f_4e3fcb(); if (g_unwind) return; RELOAD();
L_512448: /* 512448: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 51244b: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
L_51244e: /* 51244e: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 512451: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 512454: call 0x4e1488 */
  esp -= 4; W32(esp, 0x512459u); SPILL(); f_4e1488(); if (g_unwind) return; RELOAD();
/* 512459: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 51245c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51245e: je 0x512563 */
  if (zf) goto L_512563;
L_512464: /* 512464: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 512466: mov ecx, edi */
  ecx = edi;
/* 512468: call dword ptr [eax + 0x74] */
  { uint32_t t = R32((uint32_t)(eax + 0x74u)); esp -= 4; W32(esp, 0x51246bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51246b: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51246d: jne 0x512563 */
  if (!zf) goto L_512563;
L_512473: /* 512473: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
L_512476: /* 512476: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 512478: je 0x51251e */
  if (zf) goto L_51251e;
L_51247e: /* 51247e: cmp eax, 0x6a7ad8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a7ad8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 512483: je 0x51248a */
  if (zf) goto L_51248a;
L_512485: /* 512485: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 512488: jmp 0x512476 */
  goto L_512476;
L_51248a: /* 51248a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51248c: je 0x51255b */
  if (zf) goto L_51255b;
L_512492: /* 512492: test byte ptr [edi + 0x3c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x3cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 512496: je 0x51255b */
  if (zf) goto L_51255b;
L_51249c: /* 51249c: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 51249f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5124a0: lea ecx, [esi + 0x4c4] */
  ecx = (uint32_t)(esi + 0x4c4u);
/* 5124a6: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* 5124a9: call 0x4e2a36 */
  esp -= 4; W32(esp, 0x5124aeu); SPILL(); f_4e2a36(); if (g_unwind) return; RELOAD();
/* 5124ae: cmp dword ptr [edi + 0x18], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x18u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5124b1: jne 0x51255b */
  if (!zf) goto L_51255b;
L_5124b7: /* 5124b7: mov eax, dword ptr [esi + 0x4bc] */
  eax = R32((uint32_t)(esi + 0x4bcu));
/* 5124bd: mov word ptr [edi + 0x46], ax */
  W16((uint32_t)(edi + 0x46u), (eax & 0xffffu));
/* 5124c1: xor edx, edx */
  edx = 0;
L_5124c3: /* 5124c3: cmp edx, dword ptr [edi + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5124c6: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 5124c9: jge 0x51255b */
  if ((sf == of)) goto L_51255b;
L_5124cf: /* 5124cf: mov ebx, dword ptr [esi + 0x4bc] */
  ebx = R32((uint32_t)(esi + 0x4bcu));
/* 5124d5: mov eax, dword ptr [esi + 0x4c0] */
  eax = R32((uint32_t)(esi + 0x4c0u));
/* 5124db: add esi, 0x4b8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4b8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 5124e1: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 5124e4: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5124e6: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 5124e9: jle 0x51250a */
  if ((zf || sf != of)) goto L_51250a;
L_5124eb: /* 5124eb: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 5124ee: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5124ef: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5124f2: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5124f4: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5124f7: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 5124fb: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 5124fd: mov ecx, esi */
  ecx = esi;
/* 5124ff: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 512502: call 0x4e4502 */
  esp -= 4; W32(esp, 0x512507u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 512507: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
L_51250a: /* 51250a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 51250c: lea eax, [eax + ebx*8] */
  eax = (uint32_t)(eax + ebx*8);
/* 51250f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 512511: je 0x512518 */
  if (zf) goto L_512518;
L_512513: /* 512513: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 512515: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_512518: /* 512518: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 51251b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51251c: jmp 0x5124c3 */
  goto L_5124c3;
L_51251e: /* 51251e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 512520: je 0x51255b */
  if (zf) goto L_51255b;
L_512522: /* 512522: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
L_512525: /* 512525: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 512527: je 0x51255b */
  if (zf) goto L_51255b;
L_512529: /* 512529: cmp eax, 0x5f0318 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5f0318u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51252e: je 0x512535 */
  if (zf) goto L_512535;
L_512530: /* 512530: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 512533: jmp 0x512525 */
  goto L_512525;
L_512535: /* 512535: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 512537: je 0x51255b */
  if (zf) goto L_51255b;
L_512539: /* 512539: test byte ptr [edi + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 512540: je 0x51255b */
  if (zf) goto L_51255b;
L_512542: /* 512542: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 512545: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 512547: jne 0x51255b */
  if (!zf) goto L_51255b;
L_512549: /* 512549: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 51254c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51254d: lea ecx, [esi + 0x4c4] */
  ecx = (uint32_t)(esi + 0x4c4u);
/* 512553: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* 512556: call 0x4e2a36 */
  esp -= 4; W32(esp, 0x51255bu); SPILL(); f_4e2a36(); if (g_unwind) return; RELOAD();
L_51255b: /* 51255b: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 51255e: jmp 0x51244e */
  goto L_51244e;
L_512563: /* 512563: mov eax, dword ptr [esi + 0x4c8] */
  eax = R32((uint32_t)(esi + 0x4c8u));
/* 512569: mov ecx, dword ptr [esi + 0x4cc] */
  ecx = R32((uint32_t)(esi + 0x4ccu));
/* 51256f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 512571: lea edi, [esi + 0x4c4] */
  edi = (uint32_t)(esi + 0x4c4u);
/* 512577: je 0x512585 */
  if (zf) goto L_512585;
L_512579: /* 512579: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 51257b: mov ecx, edi */
  ecx = edi;
/* 51257d: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 512580: call 0x4e4502 */
  esp -= 4; W32(esp, 0x512585u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_512585: /* 512585: mov esi, dword ptr [esi + 0x4c8] */
  esi = R32((uint32_t)(esi + 0x4c8u));
/* 51258b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 51258d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51258e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51258f: call 0x4e418d */
  esp -= 4; W32(esp, 0x512594u); SPILL(); f_4e418d(); if (g_unwind) return; RELOAD();
/* 512594: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_512597: /* 512597: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 51259a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51259b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51259c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5125a3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5125a4: mov esp, ebp */
  esp = ebp;
/* 5125a6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5125a7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5125aa(void) {
  LOAD_REGS();
L_5125aa: /* 5125aa: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 5125ad: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5125b2: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 5125b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5125b6: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 5125b9: call 0x554df6 */
  esp -= 4; W32(esp, 0x5125beu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5125be(); return;
}

void f_5125be(void) {
  LOAD_REGS();
L_5125be: /* 5125be: push 0x56bd58 */
  { uint32_t v = 0x56bd58u; esp -= 4; W32(esp, v); }
/* 5125c3: push 0x5a55d4 */
  { uint32_t v = 0x5a55d4u; esp -= 4; W32(esp, v); }
/* 5125c8: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5125cdu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5125cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5125d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5125d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5125d4: call 0x554df6 */
  esp -= 4; W32(esp, 0x5125d9u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5125d9: guest_badaddr(0x5125d9); return;
}

void f_512670(void) {
  LOAD_REGS();
L_512670: /* 512670: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 512671: mov ebp, esp */
  ebp = esp;
/* 512673: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 512675: push 0x557230 */
  { uint32_t v = 0x557230u; esp -= 4; W32(esp, v); }
/* 51267a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 512680: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512681: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 512688: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 51268b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 51268e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 512691: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 512692: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 512693: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 512694: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 512697: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512698: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 512699: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5126a0: call 0x4e175d */
  esp -= 4; W32(esp, 0x5126a5u); SPILL(); f_4e175d(); if (g_unwind) return; RELOAD();
/* 5126a5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5126a8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5126a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5126aa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5126b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5126b2: mov esp, ebp */
  esp = ebp;
/* 5126b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5126b5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5126b8(void) {
  LOAD_REGS();
L_5126b8: /* 5126b8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5126bb: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5126c0: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5126c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5126c4: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 5126c7: call 0x554df6 */
  esp -= 4; W32(esp, 0x5126ccu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5126cc(); return;
}

void f_5126cc(void) {
  LOAD_REGS();
L_5126cc: /* 5126cc: push 0x56bd78 */
  { uint32_t v = 0x56bd78u; esp -= 4; W32(esp, v); }
/* 5126d1: push 0x5a5818 */
  { uint32_t v = 0x5a5818u; esp -= 4; W32(esp, v); }
/* 5126d6: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5126dbu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5126db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5126de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5126e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5126e2: call 0x554df6 */
  esp -= 4; W32(esp, 0x5126e7u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5126e7: guest_badaddr(0x5126e7); return;
}

void f_512710(void) {
  LOAD_REGS();
L_512710: /* 512710: xor eax, eax */
  eax = 0;
/* 512712: mov dword ptr [0x5f5d98], eax */
  W32((uint32_t)(0x5f5d98u), eax);
/* 512717: mov dword ptr [0x5f5d9c], eax */
  W32((uint32_t)(0x5f5d9cu), eax);
/* 51271c: ret  */
  esp += 4; SPILL(); return;
}

void f_512730(void) {
  LOAD_REGS();
L_512730: /* 512730: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 512734: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 512737: movzx edx, byte ptr [ecx - 1] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0xffffffffu)));
/* 51273b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51273c: push 0x5a5b40 */
  { uint32_t v = 0x5a5b40u; esp -= 4; W32(esp, v); }
/* 512741: push 0x2f9 */
  { uint32_t v = 0x2f9u; esp -= 4; W32(esp, v); }
/* 512746: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512747: call 0x4e30df */
  esp -= 4; W32(esp, 0x51274cu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 51274c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51274f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512770(void) {
  LOAD_REGS();
L_512770: /* 512770: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 512774: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 512775: mov esi, ecx */
  esi = ecx;
/* 512777: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 51277a: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 51277c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51277d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 51277e: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 512781: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 512783: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 512785: movzx edx, dl */
  edx = (uint32_t)((edx & 0xffu));
/* 512788: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512789: mov ecx, esi */
  ecx = esi;
/* 51278b: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x512792u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 512792: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 512796: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 512798: mov dword ptr [0x5afec4], edi */
  W32((uint32_t)(0x5afec4u), edi);
/* 51279e: mov dword ptr [0x5afed0], esi */
  W32((uint32_t)(0x5afed0u), esi);
/* 5127a4: je 0x5127c7 */
  if (zf) goto L_5127c7;
L_5127a6: /* 5127a6: mov ecx, dword ptr [0x5afecc] */
  ecx = R32((uint32_t)(0x5afeccu));
/* 5127ac: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5127ae: je 0x5127c3 */
  if (zf) goto L_5127c3;
L_5127b0: /* 5127b0: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* 5127b3: test dword ptr [ecx], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5127b5: je 0x5127c3 */
  if (zf) goto L_5127c3;
L_5127b7: /* 5127b7: mov ecx, 1 */
  ecx = 0x1u;
/* 5127bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5127bd: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 5127bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5127c0: ret 8 */
  esp += 12; SPILL(); return;
L_5127c3: /* 5127c3: xor ecx, ecx */
  ecx = 0;
/* 5127c5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_5127c7: /* 5127c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5127c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5127c9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5127f0(void) {
  LOAD_REGS();
L_5127f0: /* 5127f0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512810(void) {
  LOAD_REGS();
L_512810: /* 512810: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 512814: mov dword ptr [0x5afed0], 0 */
  W32((uint32_t)(0x5afed0u), 0x0u);
/* 51281e: dec dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 512821: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512840(void) {
  LOAD_REGS();
L_512840: /* 512840: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 512844: mov dword ptr [eax + 0xc], 0 */
  W32((uint32_t)(eax + 0xcu), 0x0u);
/* 51284b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512860(void) {
  LOAD_REGS();
L_512860: /* 512860: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 512864: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 512866: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512880(void) {
  LOAD_REGS();
L_512880: /* 512880: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 512884: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 512887: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 512889: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 51288d: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
/* 51288f: inc dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 512892: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5128b0(void) {
  LOAD_REGS();
L_5128b0: /* 5128b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 5128b4: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 5128ba: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5128d0(void) {
  LOAD_REGS();
L_5128d0: /* 5128d0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 5128d4: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* 5128da: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5128f0(void) {
  LOAD_REGS();
L_5128f0: /* 5128f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 5128f4: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* 5128fa: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512910(void) {
  LOAD_REGS();
L_512910: /* 512910: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 512914: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 51291a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512930(void) {
  LOAD_REGS();
L_512930: /* 512930: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 512934: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 51293a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512950(void) {
  LOAD_REGS();
L_512950: /* 512950: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 512954: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 512957: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 51295a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 51295e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 512960: inc dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 512963: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512980(void) {
  LOAD_REGS();
L_512980: /* 512980: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 512984: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 512987: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 51298a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 51298b: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 51298e: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 512991: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 512995: jmp dword ptr [edx*4 + 0x5f1990] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1990u)); SPILL(); call_ind(t); return; }
}

void f_5129b0(void) {
  LOAD_REGS();
L_5129b0: /* 5129b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5129b4: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 5129b7: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 5129bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5129bc: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 5129be: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 5129c0: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 5129c3: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 5129c6: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 5129c9: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 5129cc: add dword ptr [eax + 0xc], 0xc */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu))); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 5129d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5129d1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5129f0(void) {
  LOAD_REGS();
L_5129f0: /* 5129f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5129f4: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 5129f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5129f8: mov esi, ecx */
  esi = ecx;
/* 5129fa: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 5129fc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5129fd: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 512a00: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 512a03: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 512a07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 512a08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512a09: mov ecx, esi */
  ecx = esi;
/* 512a0b: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x512a12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 512a12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 512a13: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512a30(void) {
  LOAD_REGS();
L_512a30: /* 512a30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 512a34: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 512a37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 512a38: mov esi, ecx */
  esi = ecx;
/* 512a3a: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 512a3c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 512a3d: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 512a40: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 512a43: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 512a47: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 512a48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512a49: mov ecx, esi */
  ecx = esi;
/* 512a4b: call dword ptr [edx*4 + 0x5f2190] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f2190u)); esp -= 4; W32(esp, 0x512a52u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 512a52: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 512a53: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512a70(void) {
  LOAD_REGS();
L_512a70: /* 512a70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 512a74: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 512a77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 512a78: mov esi, ecx */
  esi = ecx;
/* 512a7a: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 512a7c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 512a7d: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 512a80: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 512a83: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 512a87: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 512a88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512a89: mov ecx, esi */
  ecx = esi;
/* 512a8b: call dword ptr [edx*4 + 0x5f2590] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f2590u)); esp -= 4; W32(esp, 0x512a92u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 512a92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 512a93: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512ab0(void) {
  LOAD_REGS();
L_512ab0: /* 512ab0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 512ab4: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 512ab7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 512ab8: mov esi, ecx */
  esi = ecx;
/* 512aba: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 512abc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 512abd: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 512ac0: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 512ac3: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 512ac7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 512ac8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512ac9: mov ecx, esi */
  ecx = esi;
/* 512acb: call dword ptr [edx*4 + 0x5f2990] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f2990u)); esp -= 4; W32(esp, 0x512ad2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 512ad2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 512ad3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512af0(void) {
  LOAD_REGS();
L_512af0: /* 512af0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 512af4: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 512af7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 512af8: mov esi, ecx */
  esi = ecx;
/* 512afa: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 512afc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 512afd: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 512b00: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 512b03: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 512b07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 512b08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512b09: mov ecx, esi */
  ecx = esi;
/* 512b0b: call dword ptr [edx*4 + 0x5f2d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f2d90u)); esp -= 4; W32(esp, 0x512b12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 512b12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 512b13: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512b30(void) {
  LOAD_REGS();
L_512b30: /* 512b30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 512b34: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 512b37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 512b38: mov esi, ecx */
  esi = ecx;
/* 512b3a: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 512b3c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 512b3d: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 512b40: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 512b43: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 512b47: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 512b48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512b49: mov ecx, esi */
  ecx = esi;
/* 512b4b: call dword ptr [edx*4 + 0x5f3190] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f3190u)); esp -= 4; W32(esp, 0x512b52u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 512b52: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 512b53: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512b70(void) {
  LOAD_REGS();
L_512b70: /* 512b70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 512b74: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 512b77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 512b78: mov esi, ecx */
  esi = ecx;
/* 512b7a: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 512b7c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 512b7d: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 512b80: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 512b83: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 512b87: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 512b88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512b89: mov ecx, esi */
  ecx = esi;
/* 512b8b: call dword ptr [edx*4 + 0x5f3590] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f3590u)); esp -= 4; W32(esp, 0x512b92u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 512b92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 512b93: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512bb0(void) {
  LOAD_REGS();
L_512bb0: /* 512bb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 512bb4: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 512bb7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 512bb8: mov esi, ecx */
  esi = ecx;
/* 512bba: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 512bbc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 512bbd: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 512bc0: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 512bc3: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 512bc7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 512bc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512bc9: mov ecx, esi */
  ecx = esi;
/* 512bcb: call dword ptr [edx*4 + 0x5f3990] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f3990u)); esp -= 4; W32(esp, 0x512bd2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 512bd2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 512bd3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512bf0(void) {
  LOAD_REGS();
L_512bf0: /* 512bf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 512bf4: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 512bf7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 512bf8: mov esi, ecx */
  esi = ecx;
/* 512bfa: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 512bfc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 512bfd: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 512c00: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 512c03: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 512c07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 512c08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512c09: mov ecx, esi */
  ecx = esi;
/* 512c0b: call dword ptr [edx*4 + 0x5f3d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f3d90u)); esp -= 4; W32(esp, 0x512c12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 512c12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 512c13: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512c30(void) {
  LOAD_REGS();
L_512c30: /* 512c30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 512c34: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 512c37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 512c38: mov esi, ecx */
  esi = ecx;
/* 512c3a: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 512c3c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 512c3d: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 512c40: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 512c43: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 512c47: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 512c48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512c49: mov ecx, esi */
  ecx = esi;
/* 512c4b: call dword ptr [edx*4 + 0x5f4190] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f4190u)); esp -= 4; W32(esp, 0x512c52u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 512c52: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 512c53: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512c70(void) {
  LOAD_REGS();
L_512c70: /* 512c70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 512c74: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 512c77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 512c78: mov esi, ecx */
  esi = ecx;
/* 512c7a: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 512c7c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 512c7d: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 512c80: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 512c83: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 512c87: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 512c88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512c89: mov ecx, esi */
  ecx = esi;
/* 512c8b: call dword ptr [edx*4 + 0x5f4590] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f4590u)); esp -= 4; W32(esp, 0x512c92u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 512c92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 512c93: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512cb0(void) {
  LOAD_REGS();
L_512cb0: /* 512cb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 512cb4: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 512cb7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 512cb8: mov esi, ecx */
  esi = ecx;
/* 512cba: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 512cbc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 512cbd: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 512cc0: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 512cc3: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 512cc7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 512cc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512cc9: mov ecx, esi */
  ecx = esi;
/* 512ccb: call dword ptr [edx*4 + 0x5f4990] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f4990u)); esp -= 4; W32(esp, 0x512cd2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 512cd2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 512cd3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512cf0(void) {
  LOAD_REGS();
L_512cf0: /* 512cf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 512cf4: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 512cf7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 512cf8: mov esi, ecx */
  esi = ecx;
/* 512cfa: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 512cfc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 512cfd: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 512d00: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 512d03: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 512d07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 512d08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512d09: mov ecx, esi */
  ecx = esi;
/* 512d0b: call dword ptr [edx*4 + 0x5f4d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f4d90u)); esp -= 4; W32(esp, 0x512d12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 512d12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 512d13: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512d30(void) {
  LOAD_REGS();
L_512d30: /* 512d30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 512d34: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 512d37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 512d38: mov esi, ecx */
  esi = ecx;
/* 512d3a: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 512d3c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 512d3d: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 512d40: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 512d43: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 512d47: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 512d48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512d49: mov ecx, esi */
  ecx = esi;
/* 512d4b: call dword ptr [edx*4 + 0x5f5190] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f5190u)); esp -= 4; W32(esp, 0x512d52u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 512d52: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 512d53: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512d70(void) {
  LOAD_REGS();
L_512d70: /* 512d70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 512d74: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 512d77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 512d78: mov esi, ecx */
  esi = ecx;
/* 512d7a: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 512d7c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 512d7d: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 512d80: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 512d83: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 512d87: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 512d88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512d89: mov ecx, esi */
  ecx = esi;
/* 512d8b: call dword ptr [edx*4 + 0x5f5590] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f5590u)); esp -= 4; W32(esp, 0x512d92u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 512d92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 512d93: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512db0(void) {
  LOAD_REGS();
L_512db0: /* 512db0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 512db4: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 512db7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 512db8: mov esi, ecx */
  esi = ecx;
/* 512dba: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 512dbc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 512dbd: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 512dc0: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 512dc3: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 512dc7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 512dc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512dc9: mov ecx, esi */
  ecx = esi;
/* 512dcb: call dword ptr [edx*4 + 0x5f5990] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f5990u)); esp -= 4; W32(esp, 0x512dd2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 512dd2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 512dd3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512df0(void) {
  LOAD_REGS();
L_512df0: /* 512df0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 512df1: mov ebp, esp */
  ebp = esp;
/* 512df3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 512df5: push 0x557240 */
  { uint32_t v = 0x557240u; esp -= 4; W32(esp, v); }
/* 512dfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 512e00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512e01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 512e08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 512e0b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 512e0e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 512e11: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 512e12: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 512e13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 512e14: mov esi, ecx */
  esi = ecx;
/* 512e16: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 512e19: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 512e1c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 512e1d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 512e20: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 512e27: jne 0x512e39 */
  if (!zf) goto L_512e39;
L_512e29: /* 512e29: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 512e2c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 512e2e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 512e2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512e30: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 512e33: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x512e39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_512e39: /* 512e39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 512e3b: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 512e40: mov ecx, esi */
  ecx = esi;
/* 512e42: call 0x4e3b84 */
  esp -= 4; W32(esp, 0x512e47u); SPILL(); f_4e3b84(); if (g_unwind) return; RELOAD();
/* 512e47: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 512e4a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 512e4b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 512e4c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 512e53: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 512e54: mov esp, ebp */
  esp = ebp;
/* 512e56: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 512e57: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512e5a(void) {
  LOAD_REGS();
L_512e5a: /* 512e5a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 512e5d: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 512e62: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 512e65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 512e66: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 512e69: call 0x554df6 */
  esp -= 4; W32(esp, 0x512e6eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_512e6e(); return;
}

void f_512e6e(void) {
  LOAD_REGS();
L_512e6e: /* 512e6e: push 0x56bda0 */
  { uint32_t v = 0x56bda0u; esp -= 4; W32(esp, v); }
/* 512e73: push 0x5a6708 */
  { uint32_t v = 0x5a6708u; esp -= 4; W32(esp, v); }
/* 512e78: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x512e7du); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 512e7d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 512e80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 512e82: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 512e84: call 0x554df6 */
  esp -= 4; W32(esp, 0x512e89u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_512e89: guest_badaddr(0x512e89); return;
}

void f_512ec0(void) {
  LOAD_REGS();
L_512ec0: /* 512ec0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 512ec1: mov ebp, esp */
  ebp = esp;
/* 512ec3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 512ec5: push 0x557250 */
  { uint32_t v = 0x557250u; esp -= 4; W32(esp, v); }
/* 512eca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 512ed0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512ed1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 512ed8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 512edb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 512ede: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 512ee1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 512ee2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 512ee3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 512ee4: mov esi, ecx */
  esi = ecx;
/* 512ee6: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 512ee9: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 512eec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 512eed: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 512ef0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 512ef7: jne 0x512f09 */
  if (!zf) goto L_512f09;
L_512ef9: /* 512ef9: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 512efc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 512efe: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 512eff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512f00: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 512f03: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x512f09u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_512f09: /* 512f09: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 512f0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512f0d: call 0x4e1898 */
  esp -= 4; W32(esp, 0x512f12u); SPILL(); f_4e1898(); if (g_unwind) return; RELOAD();
/* 512f12: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 512f15: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 512f18: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 512f19: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 512f1a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 512f21: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 512f22: mov esp, ebp */
  esp = ebp;
/* 512f24: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 512f25: ret 8 */
  esp += 12; SPILL(); return;
}

void f_512f28(void) {
  LOAD_REGS();
L_512f28: /* 512f28: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 512f2b: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 512f30: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 512f33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 512f34: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 512f37: call 0x554df6 */
  esp -= 4; W32(esp, 0x512f3cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_512f3c(); return;
}

void f_512f3c(void) {
  LOAD_REGS();
L_512f3c: /* 512f3c: push 0x56bddc */
  { uint32_t v = 0x56bddcu; esp -= 4; W32(esp, v); }
/* 512f41: push 0x5a6720 */
  { uint32_t v = 0x5a6720u; esp -= 4; W32(esp, v); }
/* 512f46: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x512f4bu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 512f4b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 512f4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 512f50: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 512f52: call 0x554df6 */
  esp -= 4; W32(esp, 0x512f57u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_512f57: guest_badaddr(0x512f57); return;
}

void f_512f90(void) {
  LOAD_REGS();
L_512f90: /* 512f90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 512f91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 512f92: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 512f96: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 512f99: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 512fa1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 512fa4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 512fa5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 512fa6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 512fa9: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 512fad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 512fae: mov edi, ecx */
  edi = ecx;
/* 512fb0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 512fb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 512fb4: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x512fbbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 512fbb: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 512fbe: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 512fbf: mov eax, edx */
  eax = edx;
/* 512fc1: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 512fc4: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 512fc7: jne 0x512fd9 */
  if (!zf) goto L_512fd9;
L_512fc9: /* 512fc9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 512fcc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 512fce: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 512fcf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 512fd0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 512fd3: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x512fd9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_512fd9: /* 512fd9: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 512fdc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 512fde: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 512fdf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 512fe0: je 0x512ffc */
  if (zf) goto L_512ffc;
L_512fe2: /* 512fe2: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 512fe5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 512fe7: je 0x512ffc */
  if (zf) goto L_512ffc;
L_512fe9: /* 512fe9: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 512fed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_512ff0: /* 512ff0: cmp dword ptr [eax + 0x20], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x20u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 512ff3: je 0x51300a */
  if (zf) goto L_51300a;
L_512ff5: /* 512ff5: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 512ff8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 512ffa: jne 0x512ff0 */
  if (!zf) goto L_512ff0;
L_512ffc: /* 512ffc: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 513000: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 513006: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 513007: ret 8 */
  esp += 12; SPILL(); return;
L_51300a: /* 51300a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 51300e: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
/* 513014: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 513015: ret 8 */
  esp += 12; SPILL(); return;
}

void f_513050(void) {
  LOAD_REGS();
L_513050: /* 513050: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 513054: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 513055: mov esi, ecx */
  esi = ecx;
/* 513057: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 51305a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 51305b: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 51305e: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 513061: jne 0x513073 */
  if (!zf) goto L_513073;
L_513063: /* 513063: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 513064: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 513066: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 513069: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51306c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51306d: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x513073u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_513073: /* 513073: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 513076: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 513078: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 513079: je 0x513098 */
  if (zf) goto L_513098;
L_51307b: /* 51307b: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 51307e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 513080: je 0x513098 */
  if (zf) goto L_513098;
L_513082: /* 513082: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 513085: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 513089: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 51308d: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 513091: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 513093: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 513095: ret 8 */
  esp += 12; SPILL(); return;
L_513098: /* 513098: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 51309c: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 5130a0: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 5130a8: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 5130aa: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 5130ac: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5130d0(void) {
  LOAD_REGS();
L_5130d0: /* 5130d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5130d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5130d2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 5130d6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5130d9: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 5130e1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5130e4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5130e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5130e6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5130e9: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 5130ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5130ee: mov edi, ecx */
  edi = ecx;
/* 5130f0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5130f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5130f4: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5130fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5130fb: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 5130fe: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5130ff: mov eax, edx */
  eax = edx;
/* 513101: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 513104: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 513107: jne 0x513119 */
  if (!zf) goto L_513119;
L_513109: /* 513109: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51310c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51310e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51310f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 513110: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 513113: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x513119u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_513119: /* 513119: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 51311c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51311e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51311f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 513120: je 0x513132 */
  if (zf) goto L_513132;
L_513122: /* 513122: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
L_513126: /* 513126: cmp dword ptr [eax + 0x20], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x20u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 513129: je 0x513132 */
  if (zf) goto L_513132;
L_51312b: /* 51312b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 51312e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 513130: jne 0x513126 */
  if (!zf) goto L_513126;
L_513132: /* 513132: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 513136: xor ecx, ecx */
  ecx = 0;
/* 513138: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51313a: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 51313d: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 51313f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 513140: ret 8 */
  esp += 12; SPILL(); return;
}

void f_513170(void) {
  LOAD_REGS();
L_513170: /* 513170: ret 8 */
  esp += 12; SPILL(); return;
}

void f_513190(void) {
  LOAD_REGS();
L_513190: /* 513190: mov eax, dword ptr [0x5f6cb4] */
  eax = R32((uint32_t)(0x5f6cb4u));
/* 513195: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 513197: jne 0x5131b6 */
  if (!zf) goto L_5131b6;
L_513199: /* 513199: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51319a: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 51319f: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 5131a4: mov edi, 0x5f1d90 */
  edi = 0x5f1d90u;
/* 5131a9: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 5131ab: mov dword ptr [0x5f6cb4], 1 */
  W32((uint32_t)(0x5f6cb4u), 0x1u);
/* 5131b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_5131b6: /* 5131b6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5131ba: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5131bd: je 0x5131e9 */
  if (zf) goto L_5131e9;
L_5131bf: /* 5131bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5131c1: jl 0x5131d7 */
  if ((sf != of)) goto L_5131d7;
L_5131c3: /* 5131c3: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 5131c8: ja 0x5131d7 */
  if ((!cf && !zf)) goto L_5131d7;
L_5131ca: /* 5131ca: cmp dword ptr [eax*4 + 0x5f1d90], 0x4e1f23 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax*4 + 0x5f1d90u))); uint32_t b = (uint32_t)(0x4e1f23u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5131d5: je 0x5131dc */
  if (zf) goto L_5131dc;
L_5131d7: /* 5131d7: mov dword ptr [0x5f5d90], eax */
  W32((uint32_t)(0x5f5d90u), eax);
L_5131dc: /* 5131dc: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5131e0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5131e2: mov dword ptr [eax*4 + 0x5f1d90], edx */
  W32((uint32_t)(eax*4 + 0x5f1d90u), edx);
L_5131e9: /* 5131e9: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 5131eb: ret  */
  esp += 4; SPILL(); return;
}

void f_513210(void) {
  LOAD_REGS();
L_513210: /* 513210: mov eax, dword ptr [0x5f6cb8] */
  eax = R32((uint32_t)(0x5f6cb8u));
/* 513215: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 513217: jne 0x513236 */
  if (!zf) goto L_513236;
L_513219: /* 513219: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51321a: mov ecx, 0xff */
  ecx = 0xffu;
/* 51321f: mov eax, 0x4e1f23 */
  eax = 0x4e1f23u;
/* 513224: mov edi, 0x5f1990 */
  edi = 0x5f1990u;
/* 513229: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 51322b: mov dword ptr [0x5f6cb8], 1 */
  W32((uint32_t)(0x5f6cb8u), 0x1u);
/* 513235: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_513236: /* 513236: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 51323a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51323d: je 0x513269 */
  if (zf) goto L_513269;
L_51323f: /* 51323f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 513241: jl 0x513257 */
  if ((sf != of)) goto L_513257;
L_513243: /* 513243: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 513248: ja 0x513257 */
  if ((!cf && !zf)) goto L_513257;
L_51324a: /* 51324a: cmp dword ptr [eax*4 + 0x5f1990], 0x4e1f23 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax*4 + 0x5f1990u))); uint32_t b = (uint32_t)(0x4e1f23u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 513255: je 0x51325c */
  if (zf) goto L_51325c;
L_513257: /* 513257: mov dword ptr [0x5f5d94], eax */
  W32((uint32_t)(0x5f5d94u), eax);
L_51325c: /* 51325c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 513260: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 513262: mov dword ptr [eax*4 + 0x5f1990], edx */
  W32((uint32_t)(eax*4 + 0x5f1990u), edx);
L_513269: /* 513269: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 51326b: ret  */
  esp += 4; SPILL(); return;
}

void f_513290(void) {
  LOAD_REGS();
L_513290: /* 513290: sub esp, 0x408 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x408u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 513296: mov edx, dword ptr [esp + 0x40c] */
  edx = R32((uint32_t)(esp + 0x40cu));
/* 51329d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 51329e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51329f: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 5132a3: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 5132a6: mov edx, dword ptr [edx + 0x10] */
  edx = R32((uint32_t)(edx + 0x10u));
/* 5132a9: mov ebp, dword ptr [eax + 0x80] */
  ebp = R32((uint32_t)(eax + 0x80u));
/* 5132af: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 5132b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5132b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5132b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5132b5: and ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 5132b8: call dword ptr [esi + 0x1c] */
  { uint32_t t = R32((uint32_t)(esi + 0x1cu)); esp -= 4; W32(esp, 0x5132bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5132bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5132bd: jne 0x513423 */
  if (!zf) goto L_513423;
L_5132c3: /* 5132c3: mov eax, dword ptr [esp + 0x414] */
  eax = R32((uint32_t)(esp + 0x414u));
/* 5132ca: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 5132cd: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 5132d0: cmp eax, 0x12c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5132d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5132d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5132d7: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 5132db: jl 0x51330f */
  if ((sf != of)) goto L_51330f;
L_5132dd: /* 5132dd: cmp eax, 0x16c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x16cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5132e2: jge 0x51330f */
  if ((sf == of)) goto L_51330f;
L_5132e4: /* 5132e4: mov esi, dword ptr [edi + 0xc] */
  esi = R32((uint32_t)(edi + 0xcu));
/* 5132e7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5132e9: je 0x51330f */
  if (zf) goto L_51330f;
L_5132eb: /* 5132eb: lea ecx, [eax - 0x12c] */
  ecx = (uint32_t)(eax + 0xfffffed4u);
/* 5132f1: mov eax, 1 */
  eax = 0x1u;
/* 5132f6: xor edx, edx */
  edx = 0;
/* 5132f8: call 0x554ee0 */
  esp -= 4; W32(esp, 0x5132fdu); SPILL(); f_554ee0(); if (g_unwind) return; RELOAD();
/* 5132fd: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 513300: mov ebx, dword ptr [esi + 0x24] */
  ebx = R32((uint32_t)(esi + 0x24u));
/* 513303: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 513305: and edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 513307: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 513309: je 0x513421 */
  if (zf) goto L_513421;
L_51330f: /* 51330f: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 513312: test ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 513314: jne 0x513421 */
  if (!zf) goto L_513421;
L_51331a: /* 51331a: mov esi, eax */
  esi = eax;
/* 51331c: or esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 51331e: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 513322: mov dword ptr [edi + 0x1c], esi */
  W32((uint32_t)(edi + 0x1cu), esi);
/* 513325: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 513329: mov ecx, 0xc */
  ecx = 0xcu;
/* 51332e: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 513332: xor eax, eax */
  eax = 0;
/* 513334: mov ebx, ecx */
  ebx = ecx;
/* 513336: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 513339: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 51333c: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 51333e: mov ecx, ebx */
  ecx = ebx;
/* 513340: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 513342: mov eax, dword ptr [0x5f5d9c] */
  eax = R32((uint32_t)(0x5f5d9cu));
/* 513347: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 513348: cmp eax, 0xfa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51334d: mov dword ptr [0x5f5d9c], eax */
  W32((uint32_t)(0x5f5d9cu), eax);
/* 513352: jle 0x513373 */
  if ((zf || sf != of)) goto L_513373;
L_513354: /* 513354: mov eax, dword ptr [esp + 0x41c] */
  eax = R32((uint32_t)(esp + 0x41cu));
/* 51335b: push 0xfa */
  { uint32_t v = 0xfau; esp -= 4; W32(esp, v); }
/* 513360: push 0x5a6750 */
  { uint32_t v = 0x5a6750u; esp -= 4; W32(esp, v); }
/* 513365: push 0x2f9 */
  { uint32_t v = 0x2f9u; esp -= 4; W32(esp, v); }
/* 51336a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51336b: call 0x4e30df */
  esp -= 4; W32(esp, 0x513370u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 513370: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_513373: /* 513373: mov eax, dword ptr [esp + 0x41c] */
  eax = R32((uint32_t)(esp + 0x41cu));
/* 51337a: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 51337d: mov bl, byte ptr [edx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 51337f: cmp bl, 4 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 513382: je 0x5133b3 */
  if (zf) goto L_5133b3;
L_513384: /* 513384: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 513387: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 513388: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 51338b: mov eax, dword ptr [esp + 0x41c] */
  eax = R32((uint32_t)(esp + 0x41cu));
/* 513392: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 513396: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 513397: movzx esi, bl */
  esi = (uint32_t)((ebx & 0xffu));
/* 51339a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51339b: call dword ptr [esi*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(esi*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5133a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5133a2: mov eax, dword ptr [esp + 0x41c] */
  eax = R32((uint32_t)(esp + 0x41cu));
/* 5133a9: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 5133ac: mov bl, byte ptr [edx] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 5133ae: cmp bl, 4 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 5133b1: jne 0x513384 */
  if (!zf) goto L_513384;
L_5133b3: /* 5133b3: inc dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 5133b6: mov eax, dword ptr [esp + 0x41c] */
  eax = R32((uint32_t)(esp + 0x41cu));
/* 5133bd: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 5133c0: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 5133c3: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 5133c6: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5133c7: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 5133ca: mov edx, dword ptr [esp + 0x420] */
  edx = R32((uint32_t)(esp + 0x420u));
/* 5133d1: mov eax, dword ptr [esp + 0x41c] */
  eax = R32((uint32_t)(esp + 0x41cu));
/* 5133d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5133d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5133da: call dword ptr [esi*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(esi*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5133e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5133e1: mov edx, dword ptr [esp + 0x41c] */
  edx = R32((uint32_t)(esp + 0x41cu));
/* 5133e8: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 5133eb: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 5133ee: jne 0x51340d */
  if (!zf) goto L_51340d;
L_5133f0: /* 5133f0: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 5133f3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5133f4: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 5133f7: mov edx, dword ptr [esp + 0x420] */
  edx = R32((uint32_t)(esp + 0x420u));
/* 5133fe: mov eax, dword ptr [esp + 0x41c] */
  eax = R32((uint32_t)(esp + 0x41cu));
/* 513405: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 513406: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 513407: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x51340du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51340d: /* 51340d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 513411: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 513414: not ebp */
  ebp = ~ebp;
/* 513416: and ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 513418: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 51341b: dec dword ptr [0x5f5d9c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5f5d9cu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(0x5f5d9cu), r);
  }
L_513421: /* 513421: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 513422: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_513423: /* 513423: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 513424: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 513425: add esp, 0x408 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x408u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51342b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5134a0(void) {
  LOAD_REGS();
L_5134a0: /* 5134a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5134a1: mov ebp, esp */
  ebp = esp;
/* 5134a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5134a5: push 0x557260 */
  { uint32_t v = 0x557260u; esp -= 4; W32(esp, v); }
/* 5134aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5134b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5134b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5134b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5134bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5134bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5134bd: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 5134c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5134c1: mov edi, ecx */
  edi = ecx;
/* 5134c3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 5134c5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5134c7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5134ca: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5134d1: je 0x5134e9 */
  if (zf) goto L_5134e9;
L_5134d3: /* 5134d3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 5134d5: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x5134d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5134d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5134da: je 0x513519 */
  if (zf) goto L_513519;
L_5134dc: /* 5134dc: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 5134e2: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
L_5134e9: /* 5134e9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 5134ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5134ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5134ef: mov ecx, edi */
  ecx = edi;
/* 5134f1: call 0x4e2aea */
  esp -= 4; W32(esp, 0x5134f6u); SPILL(); f_4e2aea(); if (g_unwind) return; RELOAD();
/* 5134f6: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 5134f9: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 5134fb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5134fc: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 5134ff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 513500: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 513501: mov ecx, edi */
  ecx = edi;
L_513503: /* 513503: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x513506u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 513506: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 513509: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51350a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51350b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 513512: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 513513: mov esp, ebp */
  esp = ebp;
/* 513515: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 513516: ret 0x10 */
  esp += 20; SPILL(); return;
L_513519: /* 513519: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 51351b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51351d: je 0x5134e9 */
  if (zf) goto L_5134e9;
L_51351f: /* 51351f: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 513522: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 513524: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 513525: call 0x4e2aea */
  esp -= 4; W32(esp, 0x51352au); SPILL(); f_4e2aea(); if (g_unwind) return; RELOAD();
/* 51352a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 51352c: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 51352f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 513531: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 513532: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 513535: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 513536: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 513537: jmp 0x513503 */
  goto L_513503;
}

void f_513539(void) {
  LOAD_REGS();
L_513539: /* 513539: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 51353c: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 513541: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 513544: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 513545: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 513548: call 0x554df6 */
  esp -= 4; W32(esp, 0x51354du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_51354d(); return;
}

void f_51354d(void) {
  LOAD_REGS();
L_51354d: /* 51354d: push 0x56be18 */
  { uint32_t v = 0x56be18u; esp -= 4; W32(esp, v); }
/* 513552: push 0x5a67c8 */
  { uint32_t v = 0x5a67c8u; esp -= 4; W32(esp, v); }
/* 513557: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x51355cu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 51355c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51355f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 513561: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 513563: call 0x554df6 */
  esp -= 4; W32(esp, 0x513568u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_513568: guest_badaddr(0x513568); return;
}

void f_5135b0(void) {
  LOAD_REGS();
L_5135b0: /* 5135b0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5135d0(void) {
  LOAD_REGS();
L_5135d0: /* 5135d0: xor eax, eax */
  eax = 0;
/* 5135d2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_5135f0(void) {
  LOAD_REGS();
L_5135f0: /* 5135f0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 5135f3: xor eax, eax */
  eax = 0;
/* 5135f5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5135f7: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 5135fa: ret  */
  esp += 4; SPILL(); return;
}

void f_513610(void) {
  LOAD_REGS();
L_513610: /* 513610: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 513613: ret  */
  esp += 4; SPILL(); return;
}

void f_513630(void) {
  LOAD_REGS();
L_513630: /* 513630: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 513633: ret  */
  esp += 4; SPILL(); return;
}

void f_513650(void) {
  LOAD_REGS();
L_513650: /* 513650: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 513651: mov esi, ecx */
  esi = ecx;
/* 513653: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 513656: je 0x5136a3 */
  if (zf) goto L_5136a3;
L_513658: /* 513658: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 513659: mov edi, 0x40000 */
  edi = 0x40000u;
/* 51365e: mov edi, edi */
  edi = edi;
L_513660: /* 513660: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 513663: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 513665: je 0x51368a */
  if (zf) goto L_51368a;
L_513667: /* 513667: jmp 0x513670 */
  goto L_513670;
L_513670: /* 513670: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 513673: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 513676: test dword ptr [ecx + 0x498], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x498u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51367c: jne 0x5136a2 */
  if (!zf) goto L_5136a2;
L_51367e: /* 51367e: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 513681: mov eax, edx */
  eax = edx;
/* 513683: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 513685: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 513688: jne 0x513670 */
  if (!zf) goto L_513670;
L_51368a: /* 51368a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 51368c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 51368e: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x513691u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 513691: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 513693: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 513695: je 0x51369d */
  if (zf) goto L_51369d;
L_513697: /* 513697: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 51369a: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
L_51369d: /* 51369d: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5136a0: jne 0x513660 */
  if (!zf) goto L_513660;
L_5136a2: /* 5136a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_5136a3: /* 5136a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5136a4: ret  */
  esp += 4; SPILL(); return;
}

void f_513669(void) {
  LOAD_REGS();
  goto L_513669;
L_513660: /* 513660: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 513663: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 513665: je 0x51368a */
  if (zf) goto L_51368a;
L_513667: /* 513667: jmp 0x513670 */
  goto L_513670;
L_513669: /* 513669: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_513670: /* 513670: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 513673: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 513676: test dword ptr [ecx + 0x498], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x498u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51367c: jne 0x5136a2 */
  if (!zf) goto L_5136a2;
L_51367e: /* 51367e: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 513681: mov eax, edx */
  eax = edx;
/* 513683: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 513685: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 513688: jne 0x513670 */
  if (!zf) goto L_513670;
L_51368a: /* 51368a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 51368c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 51368e: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x513691u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 513691: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 513693: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 513695: je 0x51369d */
  if (zf) goto L_51369d;
L_513697: /* 513697: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 51369a: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
L_51369d: /* 51369d: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5136a0: jne 0x513660 */
  if (!zf) goto L_513660;
L_5136a2: /* 5136a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5136a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5136a4: ret  */
  esp += 4; SPILL(); return;
}

void f_5136d0(void) {
  LOAD_REGS();
L_5136d0: /* 5136d0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 5136d4: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 5136d8: ret  */
  esp += 4; SPILL(); return;
}

void f_5136f0(void) {
  LOAD_REGS();
L_5136f0: /* 5136f0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
L_5136f3: /* 5136f3: call 0x4e1fc3 */
  esp -= 4; W32(esp, 0x5136f8u); SPILL(); f_4e1fc3(); if (g_unwind) return; RELOAD();
/* 5136f8: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 5136fa: fsub dword ptr [0x5694a4] */
  ST0 = ST0 - (F32((uint32_t)(0x5694a4u)));
/* 513700: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 513704: call 0x4e1fc3 */
  esp -= 4; W32(esp, 0x513709u); SPILL(); f_4e1fc3(); if (g_unwind) return; RELOAD();
/* 513709: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 51370b: fsub dword ptr [0x5694a4] */
  ST0 = ST0 - (F32((uint32_t)(0x5694a4u)));
/* 513711: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 513715: call 0x4e1fc3 */
  esp -= 4; W32(esp, 0x51371au); SPILL(); f_4e1fc3(); if (g_unwind) return; RELOAD();
/* 51371a: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 51371c: fsub dword ptr [0x5694a4] */
  ST0 = ST0 - (F32((uint32_t)(0x5694a4u)));
/* 513722: fst dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0);
/* 513726: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 51372a: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 51372e: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 513732: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 513734: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 513738: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 51373c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 51373e: fcomp dword ptr [0x5694a4] */
  fpu_com(ST0, F32((uint32_t)(0x5694a4u)));
  FPOP();
/* 513744: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 513746: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 513749: je 0x5136f3 */
  if (zf) goto L_5136f3;
L_51374b: /* 51374b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51374c: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 513750: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 513751: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 513755: call 0x4e34f4 */
  esp -= 4; W32(esp, 0x51375au); SPILL(); f_4e34f4(); if (g_unwind) return; RELOAD();
/* 51375a: mov eax, esi */
  eax = esi;
/* 51375c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51375d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 513760: ret  */
  esp += 4; SPILL(); return;
}

void f_513790(void) {
  LOAD_REGS();
L_513790: /* 513790: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 513794: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 513796: je 0x5137af */
  if (zf) goto L_5137af;
L_513798: /* 513798: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 51379b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51379d: je 0x5137af */
  if (zf) goto L_5137af;
L_51379f: /* 51379f: nop  */
L_5137a0: /* 5137a0: cmp ecx, 0x6a23e8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6a23e8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5137a6: je 0x5137b1 */
  if (zf) goto L_5137b1;
L_5137a8: /* 5137a8: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 5137ab: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5137ad: jne 0x5137a0 */
  if (!zf) goto L_5137a0;
L_5137af: /* 5137af: xor eax, eax */
  eax = 0;
L_5137b1: /* 5137b1: ret  */
  esp += 4; SPILL(); return;
}

void f_5137d0(void) {
  LOAD_REGS();
L_5137d0: /* 5137d0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 5137d3: xor eax, eax */
  eax = 0;
/* 5137d5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5137d7: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 5137da: ret  */
  esp += 4; SPILL(); return;
}

void f_5137f0(void) {
  LOAD_REGS();
L_5137f0: /* 5137f0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 5137f3: ret  */
  esp += 4; SPILL(); return;
}

void f_513810(void) {
  LOAD_REGS();
L_513810: /* 513810: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 513813: ret  */
  esp += 4; SPILL(); return;
}

void f_513830(void) {
  LOAD_REGS();
L_513830: /* 513830: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 513831: mov esi, ecx */
  esi = ecx;
/* 513833: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 513836: je 0x513880 */
  if (zf) goto L_513880;
L_513838: /* 513838: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 51383b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51383d: je 0x513868 */
  if (zf) goto L_513868;
L_51383f: /* 51383f: nop  */
L_513840: /* 513840: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 513843: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 513846: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 513848: je 0x51385e */
  if (zf) goto L_51385e;
L_51384a: /* 51384a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_513850: /* 513850: cmp eax, 0x6a7ad8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a7ad8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 513855: je 0x513880 */
  if (zf) goto L_513880;
L_513857: /* 513857: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 51385a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51385c: jne 0x513850 */
  if (!zf) goto L_513850;
L_51385e: /* 51385e: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 513861: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 513863: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 513866: jne 0x513840 */
  if (!zf) goto L_513840;
L_513868: /* 513868: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 51386a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 51386c: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x51386fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51386f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 513871: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 513873: je 0x51387b */
  if (zf) goto L_51387b;
L_513875: /* 513875: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 513878: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_51387b: /* 51387b: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 51387e: jne 0x513838 */
  if (!zf) goto L_513838;
L_513880: /* 513880: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 513881: ret  */
  esp += 4; SPILL(); return;
}

void f_5138b0(void) {
  LOAD_REGS();
L_5138b0: /* 5138b0: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 5138b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5138b5: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 5138b9: mov esi, ecx */
  esi = ecx;
/* 5138bb: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 5138bf: fadd dword ptr [0x5694a4] */
  ST0 = ST0 + (F32((uint32_t)(0x5694a4u)));
/* 5138c5: fcom dword ptr [0x56947c] */
  fpu_com(ST0, F32((uint32_t)(0x56947cu)));
/* 5138cb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 5138cd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5138d0: jne 0x51391f */
  if (!zf) goto L_51391f;
L_5138d2: /* 5138d2: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5138d5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 5138d8: call 0x4e3cd3 */
  esp -= 4; W32(esp, 0x5138ddu); SPILL(); f_4e3cd3(); if (g_unwind) return; RELOAD();
/* 5138dd: fdivr qword ptr [0x569470] */
  ST0 = (F64((uint32_t)(0x569470u))) / ST0;
/* 5138e3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5138e6: mov eax, esi */
  eax = esi;
/* 5138e8: fld dword ptr [0x56be54] */
  { double v = F32((uint32_t)(0x56be54u)); FPUSH(v); }
/* 5138ee: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 5138f0: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 5138f3: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 5138f7: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 5138fb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 5138fd: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 5138ff: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 513903: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 513907: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 513909: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 51390c: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 513910: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 513914: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 513916: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 513919: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51391a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 51391c: ret 0x30 */
  esp += 52; SPILL(); return;
L_51391f: /* 51391f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 513921: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 513925: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 513929: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 51392b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 51392e: jne 0x51399e */
  if (!zf) goto L_51399e;
L_513930: /* 513930: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 513934: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 513938: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 51393a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 51393d: jne 0x51399e */
  if (!zf) goto L_51399e;
L_51393f: /* 51393f: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 513943: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 513946: fadd dword ptr [0x5694a4] */
  ST0 = ST0 + (F32((uint32_t)(0x5694a4u)));
/* 51394c: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 513950: fsub dword ptr [esp + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x3cu)));
/* 513954: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 513957: call 0x4e3cd3 */
  esp -= 4; W32(esp, 0x51395cu); SPILL(); f_4e3cd3(); if (g_unwind) return; RELOAD();
/* 51395c: fdivr qword ptr [0x569470] */
  ST0 = (F64((uint32_t)(0x569470u))) / ST0;
/* 513962: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 513965: mov eax, esi */
  eax = esi;
/* 513967: fld dword ptr [0x569488] */
  { double v = F32((uint32_t)(0x569488u)); FPUSH(v); }
/* 51396d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 51396f: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 513971: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 513975: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 513979: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 51397b: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 51397e: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 513982: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 513986: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 513988: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 51398b: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 51398f: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 513993: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 513995: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 513998: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 513999: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 51399b: ret 0x30 */
  esp += 52; SPILL(); return;
L_51399e: /* 51399e: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 5139a2: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5139a5: fcomp dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
  FPOP();
/* 5139a9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 5139ab: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5139ae: jne 0x513a0c */
  if (!zf) goto L_513a0c;
L_5139b0: /* 5139b0: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 5139b4: fadd dword ptr [0x5694a4] */
  ST0 = ST0 + (F32((uint32_t)(0x5694a4u)));
/* 5139ba: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 5139be: fsub dword ptr [esp + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x3cu)));
/* 5139c2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 5139c5: call 0x4e3cd3 */
  esp -= 4; W32(esp, 0x5139cau); SPILL(); f_4e3cd3(); if (g_unwind) return; RELOAD();
/* 5139ca: fdivr qword ptr [0x569470] */
  ST0 = (F64((uint32_t)(0x569470u))) / ST0;
/* 5139d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5139d3: mov eax, esi */
  eax = esi;
/* 5139d5: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 5139d9: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 5139dd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 5139df: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 5139e1: fld dword ptr [0x569488] */
  { double v = F32((uint32_t)(0x569488u)); FPUSH(v); }
/* 5139e7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 5139e9: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 5139ec: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 5139f0: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 5139f4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 5139f6: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 5139f9: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 5139fd: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 513a01: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 513a03: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 513a06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 513a07: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 513a09: ret 0x30 */
  esp += 52; SPILL(); return;
L_513a0c: /* 513a0c: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 513a10: fadd dword ptr [0x5694a4] */
  ST0 = ST0 + (F32((uint32_t)(0x5694a4u)));
/* 513a16: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 513a1a: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 513a1e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 513a21: call 0x4e3cd3 */
  esp -= 4; W32(esp, 0x513a26u); SPILL(); f_4e3cd3(); if (g_unwind) return; RELOAD();
/* 513a26: fdivr qword ptr [0x569470] */
  ST0 = (F64((uint32_t)(0x569470u))) / ST0;
/* 513a2c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 513a2f: mov eax, esi */
  eax = esi;
/* 513a31: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 513a35: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 513a39: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 513a3b: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 513a3d: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 513a41: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 513a45: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 513a47: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 513a4a: fld dword ptr [0x569488] */
  { double v = F32((uint32_t)(0x569488u)); FPUSH(v); }
/* 513a50: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 513a52: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 513a55: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 513a59: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 513a5d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 513a5f: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 513a62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 513a63: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 513a65: ret 0x30 */
  esp += 52; SPILL(); return;
}

void f_513ae0(void) {
  LOAD_REGS();
L_513ae0: /* 513ae0: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 513ae3: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 513ae7: mov eax, ecx */
  eax = ecx;
/* 513ae9: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 513aeb: xor ecx, ecx */
  ecx = 0;
/* 513aed: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 513af1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 513af3: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 513af5: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 513af8: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 513afc: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 513aff: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 513b01: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 513b05: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 513b09: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 513b0b: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 513b0f: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 513b13: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 513b15: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 513b19: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 513b1d: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 513b21: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 513b25: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 513b29: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 513b2b: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 513b2f: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 513b33: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 513b37: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 513b3b: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 513b3f: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 513b43: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 513b47: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 513b4b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 513b4d: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 513b51: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 513b55: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 513b57: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 513b59: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 513b5b: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 513b5f: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 513b63: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 513b67: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 513b6b: fsubr dword ptr [0x5694a4] */
  ST0 = (F32((uint32_t)(0x5694a4u))) - ST0;
/* 513b71: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 513b74: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 513b78: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 513b7a: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 513b7d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 513b7f: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 513b83: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 513b86: fadd dword ptr [esp + 4] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4u)));
/* 513b8a: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 513b8d: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 513b91: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 513b95: fsubr dword ptr [0x5694a4] */
  ST0 = (F32((uint32_t)(0x5694a4u))) - ST0;
/* 513b9b: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 513b9e: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 513ba2: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 513ba6: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 513ba9: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 513bad: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 513baf: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* 513bb2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 513bb4: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 513bb8: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 513bbc: fstp dword ptr [eax + 0x28] */
  WF32((uint32_t)(eax + 0x28u), ST0); FPOP();
/* 513bbf: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 513bc3: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 513bc7: fsubr dword ptr [0x5694a4] */
  ST0 = (F32((uint32_t)(0x5694a4u))) - ST0;
/* 513bcd: fstp dword ptr [eax + 0x2c] */
  WF32((uint32_t)(eax + 0x2cu), ST0); FPOP();
/* 513bd0: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 513bd3: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_513c20(void) {
  LOAD_REGS();
L_513c20: /* 513c20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 513c21: mov ebp, esp */
  ebp = esp;
/* 513c23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 513c25: push 0x557270 */
  { uint32_t v = 0x557270u; esp -= 4; W32(esp, v); }
/* 513c2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 513c30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 513c31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 513c38: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 513c3b: cmp dword ptr [ebp + 0xc], 0x2f9 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x2f9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 513c42: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 513c43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 513c44: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 513c45: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 513c48: mov esi, ecx */
  esi = ecx;
/* 513c4a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 513c51: je 0x513cb0 */
  if (zf) goto L_513cb0;
L_513c53: /* 513c53: mov eax, dword ptr [0x5b214c] */
  eax = R32((uint32_t)(0x5b214cu));
/* 513c58: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 513c5a: jne 0x513cb0 */
  if (!zf) goto L_513cb0;
L_513c5c: /* 513c5c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 513c5f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 513c61: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x513c66u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 513c66: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 513c69: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 513c6b: mov edi, eax */
  edi = eax;
/* 513c6d: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x513c72u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 513c72: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 513c75: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 513c78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 513c79: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 513c7c: mov esi, dword ptr [edx + 0x48] */
  esi = R32((uint32_t)(edx + 0x48u));
/* 513c7f: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 513c85: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 513c87: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 513c88: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 513c89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 513c8a: push 0x5a5b08 */
  { uint32_t v = 0x5a5b08u; esp -= 4; W32(esp, v); }
/* 513c8f: push 0x301 */
  { uint32_t v = 0x301u; esp -= 4; W32(esp, v); }
/* 513c94: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 513c95: call 0x4e30df */
  esp -= 4; W32(esp, 0x513c9au); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 513c9a: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 513c9d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 513ca0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 513ca7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 513ca8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 513ca9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 513caa: mov esp, ebp */
  esp = ebp;
/* 513cac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 513cad: ret 8 */
  esp += 12; SPILL(); return;
L_513cb0: /* 513cb0: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 513cb3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 513cb5: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x513cbau); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 513cba: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 513cbd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 513cbf: mov edi, eax */
  edi = eax;
/* 513cc1: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x513cc6u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 513cc6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 513cc9: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 513ccc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 513ccd: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 513cd0: mov esi, dword ptr [edx + 0x48] */
  esi = R32((uint32_t)(edx + 0x48u));
/* 513cd3: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 513cd9: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 513cdb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 513cdc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 513cdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 513cde: push 0x5a5ae8 */
  { uint32_t v = 0x5a5ae8u; esp -= 4; W32(esp, v); }
/* 513ce3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 513ce4: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x513ce9u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 513ce9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 513cec: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 513cef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 513cf0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 513cf1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 513cf8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 513cf9: mov esp, ebp */
  esp = ebp;
/* 513cfb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 513cfc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_513cff(void) {
  LOAD_REGS();
L_513cff: /* 513cff: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 513d02: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 513d07: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 513d0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 513d0b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 513d0e: call 0x554df6 */
  esp -= 4; W32(esp, 0x513d13u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_513d13(); return;
}

void f_513d13(void) {
  LOAD_REGS();
L_513d13: /* 513d13: push 0x56be58 */
  { uint32_t v = 0x56be58u; esp -= 4; W32(esp, v); }
/* 513d18: push 0x5a5b28 */
  { uint32_t v = 0x5a5b28u; esp -= 4; W32(esp, v); }
/* 513d1d: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x513d22u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 513d22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 513d25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 513d27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 513d29: call 0x554df6 */
  esp -= 4; W32(esp, 0x513d2eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_513d2e: guest_badaddr(0x513d2e); return;
}

void f_513d80(void) {
  LOAD_REGS();
L_513d80: /* 513d80: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 513d83: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 513d85: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 513d86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 513d87: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 513d88: je 0x513dd8 */
  if (zf) goto L_513dd8;
L_513d8a: /* 513d8a: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 513d8e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 513d90: mov dword ptr [eax + 0x28], 0 */
  W32((uint32_t)(eax + 0x28u), 0x0u);
/* 513d97: je 0x513dce */
  if (zf) goto L_513dce;
L_513d99: /* 513d99: mov ebx, dword ptr [ecx + 0xc] */
  ebx = R32((uint32_t)(ecx + 0xcu));
/* 513d9c: mov esi, dword ptr [ebx + 0x1c] */
  esi = R32((uint32_t)(ebx + 0x1cu));
/* 513d9f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 513da1: je 0x513dce */
  if (zf) goto L_513dce;
L_513da3: /* 513da3: mov ax, word ptr [esi + 0x94] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x94u))) & 0xffffu);
/* 513daa: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 513dae: je 0x513dc7 */
  if (zf) goto L_513dc7;
L_513db0: /* 513db0: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 513db3: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 513db6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_513db8: /* 513db8: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 513dba: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 513dbc: je 0x513dc7 */
  if (zf) goto L_513dc7;
L_513dbe: /* 513dbe: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 513dc0: je 0x513de0 */
  if (zf) goto L_513de0;
L_513dc2: /* 513dc2: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 513dc5: jmp 0x513db8 */
  goto L_513db8;
L_513dc7: /* 513dc7: mov esi, dword ptr [esi + 0x28] */
  esi = R32((uint32_t)(esi + 0x28u));
/* 513dca: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 513dcc: jne 0x513da3 */
  if (!zf) goto L_513da3;
L_513dce: /* 513dce: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 513dd1: mov dword ptr [ecx + 0xc], 0 */
  W32((uint32_t)(ecx + 0xcu), 0x0u);
L_513dd8: /* 513dd8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 513dd9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 513dda: xor eax, eax */
  eax = 0;
/* 513ddc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 513ddd: ret 4 */
  esp += 8; SPILL(); return;
L_513de0: /* 513de0: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 513de3: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 513de6: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 513de9: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 513dec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 513ded: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 513def: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 513df0: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 513df3: mov eax, 1 */
  eax = 0x1u;
/* 513df8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 513df9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_513e20(void) {
  LOAD_REGS();
L_513e20: /* 513e20: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 513e24: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 513e27: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 513e29: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 513e2c: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 513e2f: mov dword ptr [0x5afec4], ecx */
  W32((uint32_t)(0x5afec4u), ecx);
/* 513e35: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* 513e38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 513e39: mov esi, dword ptr [edx + 0x10] */
  esi = R32((uint32_t)(edx + 0x10u));
/* 513e3c: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 513e40: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 513e42: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 513e44: mov dword ptr [0x5afecc], eax */
  W32((uint32_t)(0x5afeccu), eax);
/* 513e49: mov dword ptr [0x5afed0], 0 */
  W32((uint32_t)(0x5afed0u), 0x0u);
/* 513e53: je 0x513e61 */
  if (zf) goto L_513e61;
L_513e55: /* 513e55: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 513e57: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 513e59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 513e5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 513e5b: call dword ptr [esi + 0xa8] */
  { uint32_t t = R32((uint32_t)(esi + 0xa8u)); esp -= 4; W32(esp, 0x513e61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_513e61: /* 513e61: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 513e62: ret 8 */
  esp += 12; SPILL(); return;
}

void f_513e90(void) {
  LOAD_REGS();
L_513e90: /* 513e90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 513e91: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 513e95: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 513e98: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 513e9a: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 513e9d: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 513ea0: mov dword ptr [0x5afec4], eax */
  W32((uint32_t)(0x5afec4u), eax);
/* 513ea5: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* 513ea8: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 513eaa: mov dword ptr [0x5afed0], ecx */
  W32((uint32_t)(0x5afed0u), ecx);
/* 513eb0: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 513eb4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 513eb6: mov dword ptr [0x5afecc], edx */
  W32((uint32_t)(0x5afeccu), edx);
/* 513ebc: je 0x513ecc */
  if (zf) goto L_513ecc;
L_513ebe: /* 513ebe: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 513ec0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 513ec2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 513ec3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 513ec4: mov ecx, eax */
  ecx = eax;
/* 513ec6: call dword ptr [esi + 0xa8] */
  { uint32_t t = R32((uint32_t)(esi + 0xa8u)); esp -= 4; W32(esp, 0x513eccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_513ecc: /* 513ecc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 513ecd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_513ee0(void) {
  LOAD_REGS();
L_513ee0: /* 513ee0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 513ee1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 513ee5: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 513ee8: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 513eea: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 513eed: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 513ef0: mov dword ptr [0x5afec4], eax */
  W32((uint32_t)(0x5afec4u), eax);
/* 513ef5: mov ecx, dword ptr [ecx + 0x24] */
  ecx = R32((uint32_t)(ecx + 0x24u));
/* 513ef8: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* 513efb: mov ecx, dword ptr [ecx + 0x4e8] */
  ecx = R32((uint32_t)(ecx + 0x4e8u));
/* 513f01: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 513f03: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 513f07: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 513f09: mov dword ptr [0x5afecc], ecx */
  W32((uint32_t)(0x5afeccu), ecx);
/* 513f0f: mov dword ptr [0x5afed0], 0 */
  W32((uint32_t)(0x5afed0u), 0x0u);
/* 513f19: je 0x513f29 */
  if (zf) goto L_513f29;
L_513f1b: /* 513f1b: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 513f1d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 513f1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 513f20: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 513f21: mov ecx, eax */
  ecx = eax;
/* 513f23: call dword ptr [esi + 0xa8] */
  { uint32_t t = R32((uint32_t)(esi + 0xa8u)); esp -= 4; W32(esp, 0x513f29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_513f29: /* 513f29: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 513f2a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_513f50(void) {
  LOAD_REGS();
L_513f50: /* 513f50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 513f51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 513f52: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 513f56: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 513f59: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 513f61: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 513f64: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 513f65: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 513f66: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 513f69: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 513f6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 513f6e: mov edi, ecx */
  edi = ecx;
/* 513f70: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 513f73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 513f74: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x513f7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 513f7b: mov dword ptr [0x5afec4], 0 */
  W32((uint32_t)(0x5afec4u), 0x0u);
/* 513f85: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 513f88: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 513f8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 513f8d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 513f8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 513f8f: mov ecx, edi */
  ecx = edi;
/* 513f91: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 513f94: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x513f9bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 513f9b: mov ecx, dword ptr [0x5afec4] */
  ecx = R32((uint32_t)(0x5afec4u));
/* 513fa1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 513fa3: mov dword ptr [0x5afed0], edi */
  W32((uint32_t)(0x5afed0u), edi);
/* 513fa9: je 0x51401b */
  if (zf) goto L_51401b;
L_513fab: /* 513fab: mov eax, dword ptr [0x5afecc] */
  eax = R32((uint32_t)(0x5afeccu));
/* 513fb0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 513fb2: je 0x51401b */
  if (zf) goto L_51401b;
L_513fb4: /* 513fb4: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 513fb7: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 513fbb: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 513fbd: jge 0x513fc3 */
  if ((sf == of)) goto L_513fc3;
L_513fbf: /* 513fbf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 513fc1: jge 0x513ff3 */
  if ((sf == of)) goto L_513ff3;
L_513fc3: /* 513fc3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 513fc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 513fc5: push 0x5a5be8 */
  { uint32_t v = 0x5a5be8u; esp -= 4; W32(esp, v); }
/* 513fca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 513fcb: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x513fd0u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 513fd0: mov ecx, dword ptr [0x5afec4] */
  ecx = R32((uint32_t)(0x5afec4u));
/* 513fd6: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 513fd9: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 513fdd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 513fe0: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 513fe1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 513fe3: jge 0x513fe9 */
  if ((sf == of)) goto L_513fe9;
L_513fe5: /* 513fe5: xor eax, eax */
  eax = 0;
/* 513fe7: jmp 0x513fef */
  goto L_513fef;
L_513fe9: /* 513fe9: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 513feb: jl 0x513ff3 */
  if ((sf != of)) goto L_513ff3;
L_513fed: /* 513fed: mov eax, edx */
  eax = edx;
L_513fef: /* 513fef: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
L_513ff3: /* 513ff3: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 513ff6: mov esi, dword ptr [0x5afecc] */
  esi = R32((uint32_t)(0x5afeccu));
/* 513ffc: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 513fff: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 514003: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 514005: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 514007: mov dword ptr [0x5afecc], esi */
  W32((uint32_t)(0x5afeccu), esi);
/* 51400d: je 0x51401b */
  if (zf) goto L_51401b;
L_51400f: /* 51400f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 514011: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 514013: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 514014: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514015: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x51401bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51401b: /* 51401b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51401c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 51401d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51401e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_514070(void) {
  LOAD_REGS();
L_514070: /* 514070: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 514074: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 514075: mov esi, ecx */
  esi = ecx;
/* 514077: mov dword ptr [0x5afec4], 0 */
  W32((uint32_t)(0x5afec4u), 0x0u);
/* 514081: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 514084: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 514087: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 514088: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51408a: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 51408d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 51408e: mov ecx, esi */
  ecx = esi;
/* 514090: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x514097u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 514097: mov eax, dword ptr [0x5afecc] */
  eax = R32((uint32_t)(0x5afeccu));
/* 51409c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51409e: mov dword ptr [0x5afed0], esi */
  W32((uint32_t)(0x5afed0u), esi);
/* 5140a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5140a5: je 0x5140be */
  if (zf) goto L_5140be;
L_5140a7: /* 5140a7: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5140ab: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5140ad: jne 0x5140b9 */
  if (!zf) goto L_5140b9;
L_5140af: /* 5140af: or dword ptr [0x5aff00], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5aff00u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0x5aff00u), r);
  }
/* 5140b6: ret 8 */
  esp += 12; SPILL(); return;
L_5140b9: /* 5140b9: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 5140bc: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_5140be: /* 5140be: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5140f0(void) {
  LOAD_REGS();
L_5140f0: /* 5140f0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5140f3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5140f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5140f5: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 5140f9: mov dword ptr [0x5afec4], 0 */
  W32((uint32_t)(0x5afec4u), 0x0u);
/* 514103: mov dword ptr [0x5afed0], ecx */
  W32((uint32_t)(0x5afed0u), ecx);
/* 514109: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 51410c: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51410f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 514110: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 514112: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 514113: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 514114: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 514117: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51411eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51411e: mov ecx, dword ptr [0x5afec4] */
  ecx = R32((uint32_t)(0x5afec4u));
/* 514124: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 514126: je 0x514142 */
  if (zf) goto L_514142;
L_514128: /* 514128: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 51412b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51412d: je 0x514142 */
  if (zf) goto L_514142;
L_51412f: /* 51412f: nop  */
L_514130: /* 514130: cmp eax, 0x6a60e0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a60e0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 514135: je 0x5141bf */
  if (zf) goto L_5141bf;
L_51413b: /* 51413b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 51413e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 514140: jne 0x514130 */
  if (!zf) goto L_514130;
L_514142: /* 514142: xor ebp, ebp */
  ebp = 0;
L_514144: /* 514144: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 514147: mov edi, dword ptr [0x5afecc] */
  edi = R32((uint32_t)(0x5afeccu));
/* 51414d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 514150: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 514158: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 51415b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 51415c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51415f: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 514163: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514164: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 514165: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 514169: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x514170u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 514170: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 514173: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 514177: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 51417f: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 514182: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 514183: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 514186: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 514187: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 514188: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51418b: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x514192u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 514192: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 514194: je 0x514277 */
  if (zf) goto L_514277;
L_51419a: /* 51419a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 51419e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5141a0: je 0x514277 */
  if (zf) goto L_514277;
L_5141a6: /* 5141a6: jge 0x5141c3 */
  if ((sf == of)) goto L_5141c3;
L_5141a8: /* 5141a8: push 0x5a5d78 */
  { uint32_t v = 0x5a5d78u; esp -= 4; W32(esp, v); }
/* 5141ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5141ae: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5141b3u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5141b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5141b6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5141b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5141b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5141b9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5141bc: ret 8 */
  esp += 12; SPILL(); return;
L_5141bf: /* 5141bf: mov ebp, ecx */
  ebp = ecx;
/* 5141c1: jmp 0x514144 */
  goto L_514144;
L_5141c3: /* 5141c3: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 5141c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5141c9: jl 0x5141dd */
  if ((sf != of)) goto L_5141dd;
L_5141cb: /* 5141cb: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 5141ce: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5141d0: jge 0x5141dd */
  if ((sf == of)) goto L_5141dd;
L_5141d2: /* 5141d2: lea ebp, [ecx + eax] */
  ebp = (uint32_t)(ecx + eax);
/* 5141d5: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5141d7: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 5141db: jle 0x51423a */
  if ((zf || sf != of)) goto L_51423a;
L_5141dd: /* 5141dd: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5141e0: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 5141e3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5141e4: jne 0x5141f7 */
  if (!zf) goto L_5141f7;
L_5141e6: /* 5141e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5141e7: push 0x5a5dd8 */
  { uint32_t v = 0x5a5dd8u; esp -= 4; W32(esp, v); }
/* 5141ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5141ed: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5141f2u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5141f2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5141f5: jmp 0x51420b */
  goto L_51420b;
L_5141f7: /* 5141f7: lea ecx, [ecx + eax - 1] */
  ecx = (uint32_t)(ecx + eax + 0xffffffffu);
/* 5141fb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5141fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5141fd: push 0x5a5e40 */
  { uint32_t v = 0x5a5e40u; esp -= 4; W32(esp, v); }
/* 514202: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 514203: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x514208u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 514208: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_51420b: /* 51420b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 51420f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 514211: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 514214: jge 0x51421a */
  if ((sf == of)) goto L_51421a;
L_514216: /* 514216: xor eax, eax */
  eax = 0;
/* 514218: jmp 0x514220 */
  goto L_514220;
L_51421a: /* 51421a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51421c: jl 0x514224 */
  if ((sf != of)) goto L_514224;
L_51421e: /* 51421e: mov eax, ecx */
  eax = ecx;
L_514220: /* 514220: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_514224: /* 514224: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 514228: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 51422b: lea esi, [ecx + eax] */
  esi = (uint32_t)(ecx + eax);
/* 51422e: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 514230: jle 0x51423a */
  if ((zf || sf != of)) goto L_51423a;
L_514232: /* 514232: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 514234: mov ecx, edx */
  ecx = edx;
/* 514236: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
L_51423a: /* 51423a: lea esi, [ecx + eax - 1] */
  esi = (uint32_t)(ecx + eax + 0xffffffffu);
/* 51423e: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 514240: jl 0x514267 */
  if ((sf != of)) goto L_514267;
L_514242: /* 514242: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
L_514243: /* 514243: mov ecx, dword ptr [ebp + 0x6c] */
  ecx = R32((uint32_t)(ebp + 0x6cu));
/* 514246: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 514249: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 51424b: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 51424e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 514250: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 514252: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514253: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x514259u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 514259: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 51425d: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 51425e: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 514260: jge 0x514243 */
  if ((sf == of)) goto L_514243;
L_514262: /* 514262: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 514266: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_514267: /* 514267: mov edx, dword ptr [ebp + 0x6c] */
  edx = R32((uint32_t)(ebp + 0x6cu));
/* 51426a: mov edx, dword ptr [edx + 0x38] */
  edx = R32((uint32_t)(edx + 0x38u));
/* 51426d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51426e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51426f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514270: mov ecx, edi */
  ecx = edi;
/* 514272: call 0x4e438b */
  esp -= 4; W32(esp, 0x514277u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
L_514277: /* 514277: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 514278: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 514279: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 51427a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51427d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5142f0(void) {
  LOAD_REGS();
L_5142f0: /* 5142f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5142f4: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 5142f7: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 5142f9: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 5142fc: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 5142ff: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 514303: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 514305: je 0x514339 */
  if (zf) goto L_514339;
L_514307: /* 514307: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 514308: mov ebx, dword ptr [eax + 0x10] */
  ebx = R32((uint32_t)(eax + 0x10u));
/* 51430b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51430c: mov esi, dword ptr [ecx + 0x48] */
  esi = R32((uint32_t)(ecx + 0x48u));
/* 51430f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 514310: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 514312: mov dword ptr [0x5afecc], esi */
  W32((uint32_t)(0x5afeccu), esi);
/* 514318: mov dword ptr [0x5afed0], 0 */
  W32((uint32_t)(0x5afed0u), 0x0u);
/* 514322: mov edi, dword ptr [ecx + 0x48] */
  edi = R32((uint32_t)(ecx + 0x48u));
/* 514325: mov ebx, dword ptr [eax + 0x10] */
  ebx = R32((uint32_t)(eax + 0x10u));
/* 514328: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 51432a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 51432c: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 51432e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51432f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 514330: call dword ptr [esi + 0xa8] */
  { uint32_t t = R32((uint32_t)(esi + 0xa8u)); esp -= 4; W32(esp, 0x514336u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 514336: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 514337: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 514338: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_514339: /* 514339: ret 8 */
  esp += 12; SPILL(); return;
}

void f_514360(void) {
  LOAD_REGS();
L_514360: /* 514360: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 514364: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 514367: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 51436a: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 51436d: sub esp, 0x404 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 514373: cmp edx, 0xffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 514379: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 51437c: je 0x5143cd */
  if (zf) goto L_5143cd;
L_51437e: /* 51437e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 51437f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 514380: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 514384: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 514385: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 514389: mov ecx, 0xc */
  ecx = 0xcu;
/* 51438e: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 514392: xor eax, eax */
  eax = 0;
/* 514394: mov ebx, ecx */
  ebx = ecx;
/* 514396: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 514399: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 51439c: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 51439e: mov ecx, ebx */
  ecx = ebx;
/* 5143a0: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 5143a2: mov eax, dword ptr [esp + 0x414] */
  eax = R32((uint32_t)(esp + 0x414u));
/* 5143a9: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 5143ac: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 5143af: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 5143b2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5143b3: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 5143b6: mov eax, dword ptr [esp + 0x414] */
  eax = R32((uint32_t)(esp + 0x414u));
/* 5143bd: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* 5143c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5143c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5143c3: call dword ptr [esi*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(esi*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5143cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5143ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5143cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5143cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_5143cd: /* 5143cd: add esp, 0x404 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x404u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5143d3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_514400(void) {
  LOAD_REGS();
L_514400: /* 514400: mov eax, dword ptr [0x5f5d98] */
  eax = R32((uint32_t)(0x5f5d98u));
/* 514405: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 514406: cmp eax, 0xf4240 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf4240u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51440b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51440c: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 514410: mov dword ptr [0x5f5d98], eax */
  W32((uint32_t)(0x5f5d98u), eax);
/* 514415: jle 0x514450 */
  if ((zf || sf != of)) goto L_514450;
L_514417: /* 514417: push 0x5a5ee4 */
  { uint32_t v = 0x5a5ee4u; esp -= 4; W32(esp, v); }
/* 51441c: call 0x4e2987 */
  esp -= 4; W32(esp, 0x514421u); SPILL(); f_4e2987(); if (g_unwind) return; RELOAD();
/* 514421: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514422: call 0x4e3387 */
  esp -= 4; W32(esp, 0x514427u); SPILL(); f_4e3387(); if (g_unwind) return; RELOAD();
/* 514427: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51442a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51442c: jne 0x514446 */
  if (!zf) goto L_514446;
L_51442e: /* 51442e: push 0xf4240 */
  { uint32_t v = 0xf4240u; esp -= 4; W32(esp, v); }
/* 514433: push 0x5a5ef8 */
  { uint32_t v = 0x5a5ef8u; esp -= 4; W32(esp, v); }
/* 514438: push 0x2f9 */
  { uint32_t v = 0x2f9u; esp -= 4; W32(esp, v); }
/* 51443d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51443e: call 0x4e30df */
  esp -= 4; W32(esp, 0x514443u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 514443: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_514446: /* 514446: mov dword ptr [0x5f5d98], 0 */
  W32((uint32_t)(0x5f5d98u), 0x0u);
L_514450: /* 514450: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 514453: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 514456: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 514459: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 51445c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 51445f: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* 514462: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 514464: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 514467: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 514468: ret 8 */
  esp += 12; SPILL(); return;
}

void f_514490(void) {
  LOAD_REGS();
L_514490: /* 514490: mov eax, dword ptr [0x5f5d98] */
  eax = R32((uint32_t)(0x5f5d98u));
/* 514495: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 514496: cmp eax, 0xf4240 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf4240u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51449b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51449c: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 5144a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5144a1: mov dword ptr [0x5f5d98], eax */
  W32((uint32_t)(0x5f5d98u), eax);
/* 5144a6: jle 0x5144e1 */
  if ((zf || sf != of)) goto L_5144e1;
L_5144a8: /* 5144a8: push 0x5a5f54 */
  { uint32_t v = 0x5a5f54u; esp -= 4; W32(esp, v); }
/* 5144ad: call 0x4e2987 */
  esp -= 4; W32(esp, 0x5144b2u); SPILL(); f_4e2987(); if (g_unwind) return; RELOAD();
/* 5144b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5144b3: call 0x4e3387 */
  esp -= 4; W32(esp, 0x5144b8u); SPILL(); f_4e3387(); if (g_unwind) return; RELOAD();
/* 5144b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5144bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5144bd: jne 0x5144d7 */
  if (!zf) goto L_5144d7;
L_5144bf: /* 5144bf: push 0xf4240 */
  { uint32_t v = 0xf4240u; esp -= 4; W32(esp, v); }
/* 5144c4: push 0x5a5f68 */
  { uint32_t v = 0x5a5f68u; esp -= 4; W32(esp, v); }
/* 5144c9: push 0x2f9 */
  { uint32_t v = 0x2f9u; esp -= 4; W32(esp, v); }
/* 5144ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5144cf: call 0x4e30df */
  esp -= 4; W32(esp, 0x5144d4u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 5144d4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5144d7: /* 5144d7: mov dword ptr [0x5f5d98], 0 */
  W32((uint32_t)(0x5f5d98u), 0x0u);
L_5144e1: /* 5144e1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 5144e4: movzx edi, word ptr [eax] */
  edi = (uint32_t)(R16((uint32_t)(eax)));
/* 5144e7: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 5144ea: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5144ed: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5144f0: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 5144f8: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 5144fb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5144fc: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 5144ff: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 514503: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514504: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 514505: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51450cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51450c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 514510: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 514512: jne 0x51451f */
  if (!zf) goto L_51451f;
L_514514: /* 514514: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 514517: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* 51451a: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 51451c: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
L_51451f: /* 51451f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 514520: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 514521: ret 8 */
  esp += 12; SPILL(); return;
}

void f_514560(void) {
  LOAD_REGS();
L_514560: /* 514560: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 514561: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 514565: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 514568: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 51456b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51456c: movzx edi, word ptr [eax] */
  edi = (uint32_t)(R16((uint32_t)(eax)));
/* 51456f: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 514572: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 514575: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 51457d: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 514580: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 514581: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 514584: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 514588: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514589: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 51458a: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x514591u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 514591: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 514595: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 514597: jne 0x5145ad */
  if (!zf) goto L_5145ad;
L_514599: /* 514599: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 51459a: push 0x5a5fc4 */
  { uint32_t v = 0x5a5fc4u; esp -= 4; W32(esp, v); }
/* 51459f: push 0x2f9 */
  { uint32_t v = 0x2f9u; esp -= 4; W32(esp, v); }
/* 5145a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5145a5: call 0x4e30df */
  esp -= 4; W32(esp, 0x5145aau); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 5145aa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5145ad: /* 5145ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5145ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5145af: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5145e0(void) {
  LOAD_REGS();
L_5145e0: /* 5145e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5145e1: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 5145e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5145e6: mov dword ptr [0x5afecc], 0 */
  W32((uint32_t)(0x5afeccu), 0x0u);
/* 5145f0: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 5145f3: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 5145f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5145f7: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 5145fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5145fb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5145fc: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 5145ff: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 514603: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 514605: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514606: call dword ptr [esi*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(esi*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51460du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 51460d: mov eax, dword ptr [0x5afecc] */
  eax = R32((uint32_t)(0x5afeccu));
/* 514612: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 514614: jne 0x514654 */
  if (!zf) goto L_514654;
L_514616: /* 514616: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 51461a: push 0x5a6048 */
  { uint32_t v = 0x5a6048u; esp -= 4; W32(esp, v); }
/* 51461f: push 0x301 */
  { uint32_t v = 0x301u; esp -= 4; W32(esp, v); }
/* 514624: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 514625: call 0x4e30df */
  esp -= 4; W32(esp, 0x51462au); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 51462a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 51462d: mov dword ptr [0x5afecc], 0x5f6cc0 */
  W32((uint32_t)(0x5afeccu), 0x5f6cc0u);
/* 514637: mov ecx, 0xc */
  ecx = 0xcu;
/* 51463c: mov edi, dword ptr [0x5afecc] */
  edi = R32((uint32_t)(0x5afeccu));
/* 514642: xor eax, eax */
  eax = 0;
/* 514644: mov ebx, ecx */
  ebx = ecx;
/* 514646: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 514649: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 51464c: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 51464e: mov ecx, ebx */
  ecx = ebx;
/* 514650: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 514652: jmp 0x514673 */
  goto L_514673;
L_514654: /* 514654: mov ecx, dword ptr [0x5afed0] */
  ecx = R32((uint32_t)(0x5afed0u));
/* 51465a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 51465c: je 0x514673 */
  if (zf) goto L_514673;
L_51465e: /* 51465e: mov eax, dword ptr [0x5afec4] */
  eax = R32((uint32_t)(0x5afec4u));
/* 514663: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 514665: je 0x514673 */
  if (zf) goto L_514673;
L_514667: /* 514667: test byte ptr [eax + 0x3c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 51466b: je 0x514673 */
  if (zf) goto L_514673;
L_51466d: /* 51466d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 51466f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514670: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x514673u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_514673: /* 514673: test byte ptr [0x5aff00], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x5aff00u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 51467a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 51467e: je 0x51472e */
  if (zf) goto L_51472e;
L_514684: /* 514684: mov esi, dword ptr [0x5aff00] */
  esi = R32((uint32_t)(0x5aff00u));
/* 51468a: mov ebx, dword ptr [0x5afec4] */
  ebx = R32((uint32_t)(0x5afec4u));
/* 514690: and esi, 0xfffffffe */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 514693: mov dword ptr [0x5aff00], esi */
  W32((uint32_t)(0x5aff00u), esi);
/* 514699: mov esi, dword ptr [0x5afecc] */
  esi = R32((uint32_t)(0x5afeccu));
/* 51469f: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 5146a7: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 5146aa: movzx edi, byte ptr [edx] */
  edi = (uint32_t)(R8((uint32_t)(edx)));
/* 5146ad: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 5146b0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5146b1: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 5146b4: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 5146b8: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 5146bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5146bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5146be: call dword ptr [edi*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edi*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x5146c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5146c5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 5146c8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 5146cc: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5146ce: jle 0x5146e8 */
  if ((zf || sf != of)) goto L_5146e8;
L_5146d0: /* 5146d0: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 5146d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5146d3: mov eax, dword ptr [ebx + 0x6c] */
  eax = R32((uint32_t)(ebx + 0x6cu));
/* 5146d6: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 5146d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5146da: mov ecx, esi */
  ecx = esi;
/* 5146dc: call 0x4e33b4 */
  esp -= 4; W32(esp, 0x5146e1u); SPILL(); f_4e33b4(); if (g_unwind) return; RELOAD();
/* 5146e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5146e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5146e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5146e4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5146e5: ret 8 */
  esp += 12; SPILL(); return;
L_5146e8: /* 5146e8: jge 0x51474e */
  if ((sf == of)) goto L_51474e;
L_5146ea: /* 5146ea: lea edi, [ecx - 1] */
  edi = (uint32_t)(ecx + 0xffffffffu);
/* 5146ed: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5146ef: jl 0x514712 */
  if ((sf != of)) goto L_514712;
L_5146f1: /* 5146f1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
L_5146f2: /* 5146f2: mov ecx, dword ptr [ebx + 0x6c] */
  ecx = R32((uint32_t)(ebx + 0x6cu));
/* 5146f5: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 5146f8: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 5146fa: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 5146fd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5146ff: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 514701: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514702: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x514708u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 514708: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 51470c: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 51470d: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 51470f: jge 0x5146f2 */
  if ((sf == of)) goto L_5146f2;
L_514711: /* 514711: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_514712: /* 514712: mov ecx, dword ptr [ebx + 0x6c] */
  ecx = R32((uint32_t)(ebx + 0x6cu));
/* 514715: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 514718: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 51471b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 51471c: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 51471e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 51471f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 514720: mov ecx, esi */
  ecx = esi;
/* 514722: call 0x4e438b */
  esp -= 4; W32(esp, 0x514727u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 514727: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 514728: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 514729: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 51472a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 51472b: ret 8 */
  esp += 12; SPILL(); return;
L_51472e: /* 51472e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 514731: movzx edi, byte ptr [edx] */
  edi = (uint32_t)(R8((uint32_t)(edx)));
/* 514734: mov esi, dword ptr [0x5afecc] */
  esi = R32((uint32_t)(0x5afeccu));
/* 51473a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 51473d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 51473e: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 514741: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 514745: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 514746: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 514747: call dword ptr [edi*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edi*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x51474eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_51474e: /* 51474e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 51474f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 514750: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 514751: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 514752: ret 8 */
  esp += 12; SPILL(); return;
}
