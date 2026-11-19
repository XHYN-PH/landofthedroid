#include "recomp.h"
#include "rec_mod.h"

void f_53b5c0(void) {
  LOAD_REGS();
L_53b5c0: /* 53b5c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53b5c1: mov ebp, esp */
  ebp = esp;
/* 53b5c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53b5c5: push 0x558ae0 */
  { uint32_t v = 0x558ae0u; esp -= 4; W32(esp, v); }
/* 53b5ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53b5d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53b5d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53b5d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53b5db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53b5dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53b5dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53b5de: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53b5e1: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 53b5e3: mov edi, ecx */
  edi = ecx;
/* 53b5e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53b5e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53b5e8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53b5ef: call 0x4e150a */
  esp -= 4; W32(esp, 0x53b5f4u); SPILL(); f_4e150a(); if (g_unwind) return; RELOAD();
/* 53b5f4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 53b5f7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 53b5f9: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 53b5fc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53b5ff: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53b601: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 53b603: mov dword ptr [edi + 0x24], ecx */
  W32((uint32_t)(edi + 0x24u), ecx);
/* 53b606: mov dword ptr [edi + 4], 0xffffffff */
  W32((uint32_t)(edi + 0x4u), 0xffffffffu);
/* 53b60d: je 0x53b615 */
  if (zf) goto L_53b615;
L_53b60f: /* 53b60f: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 53b612: mov dword ptr [edi + 0x18], eax */
  W32((uint32_t)(edi + 0x18u), eax);
L_53b615: /* 53b615: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53b617: mov ebx, dword ptr [ecx + 0x28] */
  ebx = R32((uint32_t)(ecx + 0x28u));
/* 53b61a: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x53b61du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53b61d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53b61f: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  esi = r;
  }
/* 53b621: sbb esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  esi = r;
  }
/* 53b623: and esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 53b625: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53b626: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53b628: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53b62a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53b62b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53b62c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53b62d: call 0x4e11c7 */
  esp -= 4; W32(esp, 0x53b632u); SPILL(); f_4e11c7(); if (g_unwind) return; RELOAD();
/* 53b632: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53b635: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53b638: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53b639: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53b63a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53b641: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53b642: mov esp, ebp */
  esp = ebp;
/* 53b644: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53b645: ret 8 */
  esp += 12; SPILL(); return;
}

void f_53b648(void) {
  LOAD_REGS();
L_53b648: /* 53b648: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53b64b: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53b650: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 53b653: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53b654: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 53b657: call 0x554df6 */
  esp -= 4; W32(esp, 0x53b65cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53b65c(); return;
}

void f_53b65c(void) {
  LOAD_REGS();
L_53b65c: /* 53b65c: push 0x56dee8 */
  { uint32_t v = 0x56dee8u; esp -= 4; W32(esp, v); }
/* 53b661: push 0x5aa9d4 */
  { uint32_t v = 0x5aa9d4u; esp -= 4; W32(esp, v); }
/* 53b666: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53b66bu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53b66b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53b66e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53b670: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53b672: call 0x554df6 */
  esp -= 4; W32(esp, 0x53b677u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53b677: guest_badaddr(0x53b677); return;
}

void f_53b6b0(void) {
  LOAD_REGS();
L_53b6b0: /* 53b6b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53b6b1: mov ebp, esp */
  ebp = esp;
/* 53b6b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53b6b5: push 0x558af0 */
  { uint32_t v = 0x558af0u; esp -= 4; W32(esp, v); }
/* 53b6ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53b6c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53b6c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53b6c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53b6cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53b6cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53b6cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53b6ce: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53b6d1: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53b6d8: call 0x4e1d66 */
  esp -= 4; W32(esp, 0x53b6ddu); SPILL(); f_4e1d66(); if (g_unwind) return; RELOAD();
/* 53b6dd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53b6e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53b6e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53b6e2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53b6e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53b6ea: mov esp, ebp */
  esp = ebp;
/* 53b6ec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53b6ed: ret  */
  esp += 4; SPILL(); return;
}

void f_53b6ee(void) {
  LOAD_REGS();
L_53b6ee: /* 53b6ee: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53b6f1: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53b6f6: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 53b6f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53b6fa: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 53b6fd: call 0x554df6 */
  esp -= 4; W32(esp, 0x53b702u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53b702(); return;
}

void f_53b702(void) {
  LOAD_REGS();
L_53b702: /* 53b702: push 0x56df34 */
  { uint32_t v = 0x56df34u; esp -= 4; W32(esp, v); }
/* 53b707: push 0x5aab00 */
  { uint32_t v = 0x5aab00u; esp -= 4; W32(esp, v); }
/* 53b70c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53b711u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53b711: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53b714: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53b716: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53b718: call 0x554df6 */
  esp -= 4; W32(esp, 0x53b71du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53b71d: guest_badaddr(0x53b71d); return;
}

void f_53b740(void) {
  LOAD_REGS();
L_53b740: /* 53b740: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53b741: mov ebp, esp */
  ebp = esp;
/* 53b743: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53b745: push 0x558b00 */
  { uint32_t v = 0x558b00u; esp -= 4; W32(esp, v); }
/* 53b74a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53b750: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53b751: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53b758: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53b75b: mov eax, dword ptr [0x69f44c] */
  eax = R32((uint32_t)(0x69f44cu));
/* 53b760: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53b761: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53b762: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53b763: xor edi, edi */
  edi = 0;
/* 53b765: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 53b766: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53b769: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53b76c: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 53b76f: mov dword ptr [0x69f44c], eax */
  W32((uint32_t)(0x69f44cu), eax);
/* 53b774: jne 0x53b832 */
  if (!zf) goto L_53b832;
L_53b77a: /* 53b77a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_53b780: /* 53b780: cmp dword ptr [0x69f454], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x69f454u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53b786: je 0x53b7e0 */
  if (zf) goto L_53b7e0;
L_53b788: /* 53b788: mov ecx, dword ptr [0x6a2918] */
  ecx = R32((uint32_t)(0x6a2918u));
/* 53b78e: mov eax, dword ptr [0x6a291c] */
  eax = R32((uint32_t)(0x6a291cu));
/* 53b793: mov esi, ecx */
  esi = ecx;
/* 53b795: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 53b796: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53b798: mov dword ptr [0x6a2918], ecx */
  W32((uint32_t)(0x6a2918u), ecx);
/* 53b79e: jle 0x53b7c1 */
  if ((zf || sf != of)) goto L_53b7c1;
L_53b7a0: /* 53b7a0: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 53b7a3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 53b7a4: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 53b7a7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53b7a9: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 53b7ac: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 53b7b0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 53b7b2: mov ecx, 0x6a2914 */
  ecx = 0x6a2914u;
/* 53b7b7: mov dword ptr [0x6a291c], eax */
  W32((uint32_t)(0x6a291cu), eax);
/* 53b7bc: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53b7c1u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_53b7c1: /* 53b7c1: mov ecx, dword ptr [0x6a2914] */
  ecx = R32((uint32_t)(0x6a2914u));
/* 53b7c7: mov edx, dword ptr [0x69f454] */
  edx = R32((uint32_t)(0x69f454u));
/* 53b7cd: mov dword ptr [ecx + esi*4], edx */
  W32((uint32_t)(ecx + esi*4), edx);
/* 53b7d0: mov eax, dword ptr [0x69f454] */
  eax = R32((uint32_t)(0x69f454u));
/* 53b7d5: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 53b7d8: mov dword ptr [0x69f454], ecx */
  W32((uint32_t)(0x69f454u), ecx);
/* 53b7de: jmp 0x53b780 */
  goto L_53b780;
L_53b7e0: /* 53b7e0: xor esi, esi */
  esi = 0;
L_53b7e2: /* 53b7e2: cmp esi, dword ptr [0x6a2918] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a2918u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53b7e8: jge 0x53b7fb */
  if ((sf == of)) goto L_53b7fb;
L_53b7ea: /* 53b7ea: mov edx, dword ptr [0x6a2914] */
  edx = R32((uint32_t)(0x6a2914u));
/* 53b7f0: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 53b7f3: call 0x4e25ae */
  esp -= 4; W32(esp, 0x53b7f8u); SPILL(); f_4e25ae(); if (g_unwind) return; RELOAD();
/* 53b7f8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 53b7f9: jmp 0x53b7e2 */
  goto L_53b7e2;
L_53b7fb: /* 53b7fb: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 53b7fd: mov ecx, 0x6a2914 */
  ecx = 0x6a2914u;
/* 53b802: mov dword ptr [0x6a2918], edi */
  W32((uint32_t)(0x6a2918u), edi);
/* 53b808: mov dword ptr [0x6a291c], edi */
  W32((uint32_t)(0x6a291cu), edi);
/* 53b80e: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53b813u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53b813: cmp dword ptr [0x69f454], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x69f454u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53b819: je 0x53b832 */
  if (zf) goto L_53b832;
L_53b81b: /* 53b81b: push 0x5b8 */
  { uint32_t v = 0x5b8u; esp -= 4; W32(esp, v); }
/* 53b820: push 0x5aad74 */
  { uint32_t v = 0x5aad74u; esp -= 4; W32(esp, v); }
/* 53b825: push 0x5aad80 */
  { uint32_t v = 0x5aad80u; esp -= 4; W32(esp, v); }
/* 53b82a: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53b82fu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53b82f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53b832: /* 53b832: mov eax, dword ptr [0x69f44c] */
  eax = R32((uint32_t)(0x69f44cu));
/* 53b837: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53b83a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53b83b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 53b83c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53b83d: mov dword ptr [0x69f44c], eax */
  W32((uint32_t)(0x69f44cu), eax);
/* 53b842: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53b849: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53b84a: mov esp, ebp */
  esp = ebp;
/* 53b84c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53b84d: ret  */
  esp += 4; SPILL(); return;
}

void f_53b84e(void) {
  LOAD_REGS();
L_53b84e: /* 53b84e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53b851: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53b856: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 53b859: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53b85a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 53b85d: call 0x554df6 */
  esp -= 4; W32(esp, 0x53b862u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53b862(); return;
}

void f_53b862(void) {
  LOAD_REGS();
L_53b862: /* 53b862: push 0x56df70 */
  { uint32_t v = 0x56df70u; esp -= 4; W32(esp, v); }
/* 53b867: push 0x5aad90 */
  { uint32_t v = 0x5aad90u; esp -= 4; W32(esp, v); }
/* 53b86c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53b871u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53b871: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53b874: xor edi, edi */
  edi = 0;
/* 53b876: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53b877: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53b878: call 0x554df6 */
  esp -= 4; W32(esp, 0x53b87du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53b87d: guest_badaddr(0x53b87d); return;
}

void f_53b8d0(void) {
  LOAD_REGS();
L_53b8d0: /* 53b8d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53b8d1: mov ebp, esp */
  ebp = esp;
/* 53b8d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53b8d5: push 0x558b10 */
  { uint32_t v = 0x558b10u; esp -= 4; W32(esp, v); }
/* 53b8da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53b8e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53b8e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53b8e8: sub esp, 0x20c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53b8ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53b8ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53b8f0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 53b8f3: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 53b8f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53b8f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53b8f9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53b8fc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53b903: jne 0x53b9ad */
  if (!zf) goto L_53b9ad;
L_53b909: /* 53b909: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 53b90c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53b90e: jne 0x53b9ad */
  if (!zf) goto L_53b9ad;
L_53b914: /* 53b914: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 53b917: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53b919: jne 0x53b9ad */
  if (!zf) goto L_53b9ad;
L_53b91f: /* 53b91f: call 0x4e28d3 */
  esp -= 4; W32(esp, 0x53b924u); SPILL(); f_4e28d3(); if (g_unwind) return; RELOAD();
/* 53b924: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53b92a: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 53b92d: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 53b930: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53b933: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53b934: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53b935: lea edx, [ebp - 0x218] */
  edx = (uint32_t)(ebp + 0xfffffde8u);
/* 53b93b: push 0x5ab01c */
  { uint32_t v = 0x5ab01cu; esp -= 4; W32(esp, v); }
/* 53b940: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53b941: call 0x4e4183 */
  esp -= 4; W32(esp, 0x53b946u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 53b946: lea eax, [ebp - 0x218] */
  eax = (uint32_t)(ebp + 0xfffffde8u);
/* 53b94c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53b94f: mov edi, 1 */
  edi = 0x1u;
/* 53b954: mov dword ptr [esi + 0x2c], edi */
  W32((uint32_t)(esi + 0x2cu), edi);
/* 53b957: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53b958: mov dword ptr [0x69f444], 0 */
  W32((uint32_t)(0x69f444u), 0x0u);
/* 53b962: call 0x4e15b9 */
  esp -= 4; W32(esp, 0x53b967u); SPILL(); f_4e15b9(); if (g_unwind) return; RELOAD();
/* 53b967: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 53b96a: mov dword ptr [0x69f444], edi */
  W32((uint32_t)(0x69f444u), edi);
/* 53b970: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 53b973: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53b976: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53b978: je 0x53b9ad */
  if (zf) goto L_53b9ad;
L_53b97a: /* 53b97a: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 53b97d: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53b983: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 53b986: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 53b98c: push 0x5ab028 */
  { uint32_t v = 0x5ab028u; esp -= 4; W32(esp, v); }
/* 53b991: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53b994: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53b995: push 0x5ab034 */
  { uint32_t v = 0x5ab034u; esp -= 4; W32(esp, v); }
/* 53b99a: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 53b99f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53b9a0: call 0x4e30df */
  esp -= 4; W32(esp, 0x53b9a5u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 53b9a5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53b9a8: call 0x4e16d1 */
  esp -= 4; W32(esp, 0x53b9adu); SPILL(); f_4e16d1(); if (g_unwind) return; RELOAD();
L_53b9ad: /* 53b9ad: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53b9b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53b9b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53b9b2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53b9b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53b9ba: mov esp, ebp */
  esp = ebp;
/* 53b9bc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53b9bd: ret  */
  esp += 4; SPILL(); return;
}

void f_53b9be(void) {
  LOAD_REGS();
L_53b9be: /* 53b9be: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53b9c1: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53b9c6: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 53b9c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53b9ca: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 53b9cd: call 0x554df6 */
  esp -= 4; W32(esp, 0x53b9d2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53b9d2(); return;
}

void f_53b9d2(void) {
  LOAD_REGS();
L_53b9d2: /* 53b9d2: push 0x56dfb4 */
  { uint32_t v = 0x56dfb4u; esp -= 4; W32(esp, v); }
/* 53b9d7: push 0x5ab050 */
  { uint32_t v = 0x5ab050u; esp -= 4; W32(esp, v); }
/* 53b9dc: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53b9e1u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53b9e1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53b9e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53b9e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53b9e8: call 0x554df6 */
  esp -= 4; W32(esp, 0x53b9edu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53b9ed: guest_badaddr(0x53b9ed); return;
}

void f_53ba40(void) {
  LOAD_REGS();
L_53ba40: /* 53ba40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53ba42: push 0x558b50 */
  { uint32_t v = 0x558b50u; esp -= 4; W32(esp, v); }
/* 53ba47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53ba4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53ba4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53ba55: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53ba58: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53ba59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53ba5a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53ba5b: mov edi, ecx */
  edi = ecx;
/* 53ba5d: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 53ba60: xor ebx, ebx */
  ebx = 0;
/* 53ba62: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53ba64: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 53ba68: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 53ba6c: je 0x53ba77 */
  if (zf) goto L_53ba77;
L_53ba6e: /* 53ba6e: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 53ba71: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 53ba75: jmp 0x53ba7b */
  goto L_53ba7b;
L_53ba77: /* 53ba77: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
L_53ba7b: /* 53ba7b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 53ba7f: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53ba84u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53ba84: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 53ba88: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53ba8a: je 0x53bb3f */
  if (zf) goto L_53bb3f;
L_53ba90: /* 53ba90: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 53ba93: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53ba95: je 0x53bb23 */
  if (zf) goto L_53bb23;
L_53ba9b: /* 53ba9b: jmp 0x53baa0 */
  goto L_53baa0;
L_53baa0: /* 53baa0: cmp eax, 0x6a60e0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a60e0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53baa5: je 0x53bab0 */
  if (zf) goto L_53bab0;
L_53baa7: /* 53baa7: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53baaa: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53baac: jne 0x53baa0 */
  if (!zf) goto L_53baa0;
L_53baae: /* 53baae: jmp 0x53bb23 */
  goto L_53bb23;
L_53bab0: /* 53bab0: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 53bab3: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53bab9: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 53babc: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53babf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53bac0: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53bac4: call 0x4e13de */
  esp -= 4; W32(esp, 0x53bac9u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 53bac9: cmp dword ptr [esp + 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x34u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bacd: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 53bad1: mov byte ptr [esp + 0x28], 1 */
  W8((uint32_t)(esp + 0x28u), 0x1u);
/* 53bad6: jne 0x53badd */
  if (!zf) goto L_53badd;
L_53bad8: /* 53bad8: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_53badd: /* 53badd: cmp dword ptr [esp + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bae1: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 53bae5: jne 0x53baec */
  if (!zf) goto L_53baec;
L_53bae7: /* 53bae7: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_53baec: /* 53baec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53baed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53baee: call 0x4e26df */
  esp -= 4; W32(esp, 0x53baf3u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 53baf3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53baf6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53baf8: je 0x53bb81 */
  if (zf) goto L_53bb81;
L_53bafe: /* 53bafe: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53bb00: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53bb04: mov byte ptr [esp + 0x2c], 4 */
  W8((uint32_t)(esp + 0x2cu), 0x4u);
/* 53bb09: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53bb0d: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53bb11: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53bb16u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53bb16: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53bb1a: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53bb1e: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53bb23u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
L_53bb23: /* 53bb23: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 53bb26: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 53bb2a: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 53bb2e: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53bb33u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53bb33: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 53bb37: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bb39: jne 0x53ba90 */
  if (!zf) goto L_53ba90;
L_53bb3f: /* 53bb3f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53bb41: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53bb45: mov dword ptr [esp + 0x2c], 5 */
  W32((uint32_t)(esp + 0x2cu), 0x5u);
/* 53bb4d: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53bb51: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53bb55: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53bb5au); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53bb5a: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53bb5e: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53bb66: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53bb6bu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53bb6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53bb6c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53bb6d: xor eax, eax */
  eax = 0;
/* 53bb6f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53bb70: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 53bb74: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53bb7b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53bb7e: ret 0x14 */
  esp += 24; SPILL(); return;
L_53bb81: /* 53bb81: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 53bb84: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 53bb88: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53bb8a: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 53bb8c: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 53bb8f: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 53bb92: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 53bb96: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 53bb98: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53bb9a: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53bb9e: mov byte ptr [esp + 0x2c], 2 */
  W8((uint32_t)(esp + 0x2cu), 0x2u);
/* 53bba3: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53bba7: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53bbab: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53bbb0u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53bbb0: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53bbb4: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53bbb8: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53bbbdu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53bbbd: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53bbbf: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53bbc3: mov dword ptr [esp + 0x2c], 3 */
  W32((uint32_t)(esp + 0x2cu), 0x3u);
/* 53bbcb: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53bbcf: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53bbd3: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53bbd8u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53bbd8: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53bbdc: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53bbe4: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53bbe9u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53bbe9: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 53bbed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53bbee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53bbef: mov eax, 1 */
  eax = 0x1u;
/* 53bbf4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53bbf5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53bbfc: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53bbff: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_53ba9d(void) {
  LOAD_REGS();
  goto L_53ba9d;
L_53ba90: /* 53ba90: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 53ba93: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53ba95: je 0x53bb23 */
  if (zf) goto L_53bb23;
L_53ba9b: /* 53ba9b: jmp 0x53baa0 */
  goto L_53baa0;
L_53ba9d: /* 53ba9d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_53baa0: /* 53baa0: cmp eax, 0x6a60e0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a60e0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53baa5: je 0x53bab0 */
  if (zf) goto L_53bab0;
L_53baa7: /* 53baa7: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53baaa: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53baac: jne 0x53baa0 */
  if (!zf) goto L_53baa0;
L_53baae: /* 53baae: jmp 0x53bb23 */
  goto L_53bb23;
L_53bab0: /* 53bab0: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 53bab3: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53bab9: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 53babc: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53babf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53bac0: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53bac4: call 0x4e13de */
  esp -= 4; W32(esp, 0x53bac9u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 53bac9: cmp dword ptr [esp + 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x34u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bacd: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 53bad1: mov byte ptr [esp + 0x28], 1 */
  W8((uint32_t)(esp + 0x28u), 0x1u);
/* 53bad6: jne 0x53badd */
  if (!zf) goto L_53badd;
L_53bad8: /* 53bad8: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_53badd: /* 53badd: cmp dword ptr [esp + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bae1: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 53bae5: jne 0x53baec */
  if (!zf) goto L_53baec;
L_53bae7: /* 53bae7: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_53baec: /* 53baec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53baed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53baee: call 0x4e26df */
  esp -= 4; W32(esp, 0x53baf3u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 53baf3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53baf6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53baf8: je 0x53bb81 */
  if (zf) goto L_53bb81;
L_53bafe: /* 53bafe: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53bb00: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53bb04: mov byte ptr [esp + 0x2c], 4 */
  W8((uint32_t)(esp + 0x2cu), 0x4u);
/* 53bb09: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53bb0d: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53bb11: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53bb16u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53bb16: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53bb1a: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53bb1e: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53bb23u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
L_53bb23: /* 53bb23: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 53bb26: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 53bb2a: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 53bb2e: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53bb33u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53bb33: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 53bb37: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bb39: jne 0x53ba90 */
  if (!zf) goto L_53ba90;
L_53bb3f: /* 53bb3f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53bb41: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53bb45: mov dword ptr [esp + 0x2c], 5 */
  W32((uint32_t)(esp + 0x2cu), 0x5u);
/* 53bb4d: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53bb51: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53bb55: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53bb5au); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53bb5a: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53bb5e: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53bb66: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53bb6bu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53bb6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53bb6c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53bb6d: xor eax, eax */
  eax = 0;
/* 53bb6f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53bb70: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 53bb74: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53bb7b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53bb7e: ret 0x14 */
  esp += 24; SPILL(); return;
L_53bb81: /* 53bb81: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 53bb84: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 53bb88: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53bb8a: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 53bb8c: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 53bb8f: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 53bb92: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 53bb96: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 53bb98: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53bb9a: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53bb9e: mov byte ptr [esp + 0x2c], 2 */
  W8((uint32_t)(esp + 0x2cu), 0x2u);
/* 53bba3: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53bba7: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53bbab: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53bbb0u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53bbb0: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53bbb4: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53bbb8: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53bbbdu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53bbbd: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53bbbf: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53bbc3: mov dword ptr [esp + 0x2c], 3 */
  W32((uint32_t)(esp + 0x2cu), 0x3u);
/* 53bbcb: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53bbcf: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53bbd3: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53bbd8u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53bbd8: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53bbdc: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53bbe4: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53bbe9u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53bbe9: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 53bbed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53bbee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53bbef: mov eax, 1 */
  eax = 0x1u;
/* 53bbf4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53bbf5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53bbfc: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53bbff: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_53bc90(void) {
  LOAD_REGS();
L_53bc90: /* 53bc90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53bc92: push 0x558ba0 */
  { uint32_t v = 0x558ba0u; esp -= 4; W32(esp, v); }
/* 53bc97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53bc9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53bc9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53bca5: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53bca8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53bca9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53bcaa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53bcab: mov edi, ecx */
  edi = ecx;
/* 53bcad: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 53bcb0: xor ebx, ebx */
  ebx = 0;
/* 53bcb2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bcb4: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 53bcb8: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 53bcbc: je 0x53bcc7 */
  if (zf) goto L_53bcc7;
L_53bcbe: /* 53bcbe: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 53bcc1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 53bcc5: jmp 0x53bccb */
  goto L_53bccb;
L_53bcc7: /* 53bcc7: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
L_53bccb: /* 53bccb: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 53bccf: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53bcd4u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53bcd4: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 53bcd8: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bcda: je 0x53bd8f */
  if (zf) goto L_53bd8f;
L_53bce0: /* 53bce0: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 53bce3: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bce5: je 0x53bd73 */
  if (zf) goto L_53bd73;
L_53bceb: /* 53bceb: jmp 0x53bcf0 */
  goto L_53bcf0;
L_53bcf0: /* 53bcf0: cmp eax, 0x6a75a8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a75a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bcf5: je 0x53bd00 */
  if (zf) goto L_53bd00;
L_53bcf7: /* 53bcf7: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53bcfa: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bcfc: jne 0x53bcf0 */
  if (!zf) goto L_53bcf0;
L_53bcfe: /* 53bcfe: jmp 0x53bd73 */
  goto L_53bd73;
L_53bd00: /* 53bd00: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 53bd03: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53bd09: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 53bd0c: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53bd0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53bd10: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53bd14: call 0x4e13de */
  esp -= 4; W32(esp, 0x53bd19u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 53bd19: cmp dword ptr [esp + 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x34u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bd1d: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 53bd21: mov byte ptr [esp + 0x28], 1 */
  W8((uint32_t)(esp + 0x28u), 0x1u);
/* 53bd26: jne 0x53bd2d */
  if (!zf) goto L_53bd2d;
L_53bd28: /* 53bd28: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_53bd2d: /* 53bd2d: cmp dword ptr [esp + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bd31: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 53bd35: jne 0x53bd3c */
  if (!zf) goto L_53bd3c;
L_53bd37: /* 53bd37: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_53bd3c: /* 53bd3c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53bd3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53bd3e: call 0x4e26df */
  esp -= 4; W32(esp, 0x53bd43u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 53bd43: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53bd46: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53bd48: je 0x53bdd1 */
  if (zf) goto L_53bdd1;
L_53bd4e: /* 53bd4e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53bd50: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53bd54: mov byte ptr [esp + 0x2c], 4 */
  W8((uint32_t)(esp + 0x2cu), 0x4u);
/* 53bd59: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53bd5d: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53bd61: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53bd66u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53bd66: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53bd6a: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53bd6e: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53bd73u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
L_53bd73: /* 53bd73: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 53bd76: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 53bd7a: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 53bd7e: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53bd83u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53bd83: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 53bd87: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bd89: jne 0x53bce0 */
  if (!zf) goto L_53bce0;
L_53bd8f: /* 53bd8f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53bd91: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53bd95: mov dword ptr [esp + 0x2c], 5 */
  W32((uint32_t)(esp + 0x2cu), 0x5u);
/* 53bd9d: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53bda1: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53bda5: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53bdaau); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53bdaa: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53bdae: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53bdb6: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53bdbbu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53bdbb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53bdbc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53bdbd: xor eax, eax */
  eax = 0;
/* 53bdbf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53bdc0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 53bdc4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53bdcb: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53bdce: ret 0x10 */
  esp += 20; SPILL(); return;
L_53bdd1: /* 53bdd1: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 53bdd4: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 53bdd8: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53bdda: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 53bddc: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53bdde: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53bde2: mov byte ptr [esp + 0x2c], 2 */
  W8((uint32_t)(esp + 0x2cu), 0x2u);
/* 53bde7: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53bdeb: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53bdef: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53bdf4u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53bdf4: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53bdf8: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53bdfc: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53be01u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53be01: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53be03: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53be07: mov dword ptr [esp + 0x2c], 3 */
  W32((uint32_t)(esp + 0x2cu), 0x3u);
/* 53be0f: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53be13: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53be17: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53be1cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53be1c: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53be20: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53be28: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53be2du); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53be2d: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 53be31: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53be32: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53be33: mov eax, 1 */
  eax = 0x1u;
/* 53be38: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53be39: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53be40: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53be43: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_53bced(void) {
  LOAD_REGS();
  goto L_53bced;
L_53bce0: /* 53bce0: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 53bce3: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bce5: je 0x53bd73 */
  if (zf) goto L_53bd73;
L_53bceb: /* 53bceb: jmp 0x53bcf0 */
  goto L_53bcf0;
L_53bced: /* 53bced: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_53bcf0: /* 53bcf0: cmp eax, 0x6a75a8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a75a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bcf5: je 0x53bd00 */
  if (zf) goto L_53bd00;
L_53bcf7: /* 53bcf7: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53bcfa: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bcfc: jne 0x53bcf0 */
  if (!zf) goto L_53bcf0;
L_53bcfe: /* 53bcfe: jmp 0x53bd73 */
  goto L_53bd73;
L_53bd00: /* 53bd00: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 53bd03: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53bd09: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 53bd0c: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53bd0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53bd10: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53bd14: call 0x4e13de */
  esp -= 4; W32(esp, 0x53bd19u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 53bd19: cmp dword ptr [esp + 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x34u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bd1d: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 53bd21: mov byte ptr [esp + 0x28], 1 */
  W8((uint32_t)(esp + 0x28u), 0x1u);
/* 53bd26: jne 0x53bd2d */
  if (!zf) goto L_53bd2d;
L_53bd28: /* 53bd28: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_53bd2d: /* 53bd2d: cmp dword ptr [esp + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bd31: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 53bd35: jne 0x53bd3c */
  if (!zf) goto L_53bd3c;
L_53bd37: /* 53bd37: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_53bd3c: /* 53bd3c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53bd3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53bd3e: call 0x4e26df */
  esp -= 4; W32(esp, 0x53bd43u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 53bd43: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53bd46: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53bd48: je 0x53bdd1 */
  if (zf) goto L_53bdd1;
L_53bd4e: /* 53bd4e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53bd50: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53bd54: mov byte ptr [esp + 0x2c], 4 */
  W8((uint32_t)(esp + 0x2cu), 0x4u);
/* 53bd59: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53bd5d: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53bd61: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53bd66u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53bd66: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53bd6a: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53bd6e: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53bd73u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
L_53bd73: /* 53bd73: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 53bd76: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 53bd7a: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 53bd7e: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53bd83u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53bd83: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 53bd87: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bd89: jne 0x53bce0 */
  if (!zf) goto L_53bce0;
L_53bd8f: /* 53bd8f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53bd91: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53bd95: mov dword ptr [esp + 0x2c], 5 */
  W32((uint32_t)(esp + 0x2cu), 0x5u);
/* 53bd9d: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53bda1: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53bda5: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53bdaau); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53bdaa: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53bdae: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53bdb6: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53bdbbu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53bdbb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53bdbc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53bdbd: xor eax, eax */
  eax = 0;
/* 53bdbf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53bdc0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 53bdc4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53bdcb: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53bdce: ret 0x10 */
  esp += 20; SPILL(); return;
L_53bdd1: /* 53bdd1: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 53bdd4: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 53bdd8: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53bdda: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 53bddc: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53bdde: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53bde2: mov byte ptr [esp + 0x2c], 2 */
  W8((uint32_t)(esp + 0x2cu), 0x2u);
/* 53bde7: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53bdeb: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53bdef: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53bdf4u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53bdf4: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53bdf8: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53bdfc: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53be01u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53be01: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53be03: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53be07: mov dword ptr [esp + 0x2c], 3 */
  W32((uint32_t)(esp + 0x2cu), 0x3u);
/* 53be0f: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53be13: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53be17: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53be1cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53be1c: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53be20: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53be28: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53be2du); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53be2d: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 53be31: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53be32: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53be33: mov eax, 1 */
  eax = 0x1u;
/* 53be38: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53be39: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53be40: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53be43: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_53bec0(void) {
  LOAD_REGS();
L_53bec0: /* 53bec0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53bec2: push 0x558bf0 */
  { uint32_t v = 0x558bf0u; esp -= 4; W32(esp, v); }
/* 53bec7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53becd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53bece: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53bed5: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53bed8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53bed9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53beda: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53bedb: mov edi, ecx */
  edi = ecx;
/* 53bedd: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 53bee0: xor ebx, ebx */
  ebx = 0;
/* 53bee2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bee4: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 53bee8: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 53beec: je 0x53bef7 */
  if (zf) goto L_53bef7;
L_53beee: /* 53beee: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 53bef1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 53bef5: jmp 0x53befb */
  goto L_53befb;
L_53bef7: /* 53bef7: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
L_53befb: /* 53befb: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 53beff: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53bf04u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53bf04: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 53bf08: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bf0a: je 0x53bfbf */
  if (zf) goto L_53bfbf;
L_53bf10: /* 53bf10: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 53bf13: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bf15: je 0x53bfa3 */
  if (zf) goto L_53bfa3;
L_53bf1b: /* 53bf1b: jmp 0x53bf20 */
  goto L_53bf20;
L_53bf20: /* 53bf20: cmp eax, 0x6a5680 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a5680u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bf25: je 0x53bf30 */
  if (zf) goto L_53bf30;
L_53bf27: /* 53bf27: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53bf2a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bf2c: jne 0x53bf20 */
  if (!zf) goto L_53bf20;
L_53bf2e: /* 53bf2e: jmp 0x53bfa3 */
  goto L_53bfa3;
L_53bf30: /* 53bf30: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 53bf33: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53bf39: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 53bf3c: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53bf3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53bf40: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53bf44: call 0x4e13de */
  esp -= 4; W32(esp, 0x53bf49u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 53bf49: cmp dword ptr [esp + 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x34u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bf4d: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 53bf51: mov byte ptr [esp + 0x28], 1 */
  W8((uint32_t)(esp + 0x28u), 0x1u);
/* 53bf56: jne 0x53bf5d */
  if (!zf) goto L_53bf5d;
L_53bf58: /* 53bf58: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_53bf5d: /* 53bf5d: cmp dword ptr [esp + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bf61: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 53bf65: jne 0x53bf6c */
  if (!zf) goto L_53bf6c;
L_53bf67: /* 53bf67: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_53bf6c: /* 53bf6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53bf6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53bf6e: call 0x4e26df */
  esp -= 4; W32(esp, 0x53bf73u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 53bf73: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53bf76: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53bf78: je 0x53c001 */
  if (zf) goto L_53c001;
L_53bf7e: /* 53bf7e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53bf80: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53bf84: mov byte ptr [esp + 0x2c], 4 */
  W8((uint32_t)(esp + 0x2cu), 0x4u);
/* 53bf89: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53bf8d: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53bf91: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53bf96u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53bf96: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53bf9a: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53bf9e: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53bfa3u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
L_53bfa3: /* 53bfa3: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 53bfa6: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 53bfaa: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 53bfae: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53bfb3u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53bfb3: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 53bfb7: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bfb9: jne 0x53bf10 */
  if (!zf) goto L_53bf10;
L_53bfbf: /* 53bfbf: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53bfc1: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53bfc5: mov dword ptr [esp + 0x2c], 5 */
  W32((uint32_t)(esp + 0x2cu), 0x5u);
/* 53bfcd: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53bfd1: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53bfd5: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53bfdau); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53bfda: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53bfde: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53bfe6: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53bfebu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53bfeb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53bfec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53bfed: xor eax, eax */
  eax = 0;
/* 53bfef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53bff0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 53bff4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53bffb: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53bffe: ret 0x10 */
  esp += 20; SPILL(); return;
L_53c001: /* 53c001: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 53c004: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 53c008: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53c00a: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 53c00c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c00e: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53c012: mov byte ptr [esp + 0x2c], 2 */
  W8((uint32_t)(esp + 0x2cu), 0x2u);
/* 53c017: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53c01b: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53c01f: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c024u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c024: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53c028: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53c02c: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c031u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c031: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c033: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53c037: mov dword ptr [esp + 0x2c], 3 */
  W32((uint32_t)(esp + 0x2cu), 0x3u);
/* 53c03f: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53c043: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53c047: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c04cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c04c: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53c050: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53c058: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c05du); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c05d: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 53c061: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53c062: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53c063: mov eax, 1 */
  eax = 0x1u;
/* 53c068: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53c069: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53c070: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53c073: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_53bf1d(void) {
  LOAD_REGS();
  goto L_53bf1d;
L_53bf10: /* 53bf10: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 53bf13: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bf15: je 0x53bfa3 */
  if (zf) goto L_53bfa3;
L_53bf1b: /* 53bf1b: jmp 0x53bf20 */
  goto L_53bf20;
L_53bf1d: /* 53bf1d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_53bf20: /* 53bf20: cmp eax, 0x6a5680 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a5680u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bf25: je 0x53bf30 */
  if (zf) goto L_53bf30;
L_53bf27: /* 53bf27: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53bf2a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bf2c: jne 0x53bf20 */
  if (!zf) goto L_53bf20;
L_53bf2e: /* 53bf2e: jmp 0x53bfa3 */
  goto L_53bfa3;
L_53bf30: /* 53bf30: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 53bf33: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53bf39: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 53bf3c: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53bf3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53bf40: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53bf44: call 0x4e13de */
  esp -= 4; W32(esp, 0x53bf49u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 53bf49: cmp dword ptr [esp + 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x34u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bf4d: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 53bf51: mov byte ptr [esp + 0x28], 1 */
  W8((uint32_t)(esp + 0x28u), 0x1u);
/* 53bf56: jne 0x53bf5d */
  if (!zf) goto L_53bf5d;
L_53bf58: /* 53bf58: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_53bf5d: /* 53bf5d: cmp dword ptr [esp + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bf61: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 53bf65: jne 0x53bf6c */
  if (!zf) goto L_53bf6c;
L_53bf67: /* 53bf67: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_53bf6c: /* 53bf6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53bf6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53bf6e: call 0x4e26df */
  esp -= 4; W32(esp, 0x53bf73u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 53bf73: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53bf76: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53bf78: je 0x53c001 */
  if (zf) goto L_53c001;
L_53bf7e: /* 53bf7e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53bf80: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53bf84: mov byte ptr [esp + 0x2c], 4 */
  W8((uint32_t)(esp + 0x2cu), 0x4u);
/* 53bf89: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53bf8d: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53bf91: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53bf96u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53bf96: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53bf9a: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53bf9e: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53bfa3u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
L_53bfa3: /* 53bfa3: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 53bfa6: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 53bfaa: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 53bfae: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53bfb3u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53bfb3: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 53bfb7: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53bfb9: jne 0x53bf10 */
  if (!zf) goto L_53bf10;
L_53bfbf: /* 53bfbf: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53bfc1: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53bfc5: mov dword ptr [esp + 0x2c], 5 */
  W32((uint32_t)(esp + 0x2cu), 0x5u);
/* 53bfcd: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53bfd1: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53bfd5: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53bfdau); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53bfda: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53bfde: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53bfe6: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53bfebu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53bfeb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53bfec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53bfed: xor eax, eax */
  eax = 0;
/* 53bfef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53bff0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 53bff4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53bffb: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53bffe: ret 0x10 */
  esp += 20; SPILL(); return;
L_53c001: /* 53c001: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 53c004: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 53c008: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53c00a: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 53c00c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c00e: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53c012: mov byte ptr [esp + 0x2c], 2 */
  W8((uint32_t)(esp + 0x2cu), 0x2u);
/* 53c017: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53c01b: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53c01f: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c024u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c024: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53c028: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53c02c: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c031u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c031: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c033: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53c037: mov dword ptr [esp + 0x2c], 3 */
  W32((uint32_t)(esp + 0x2cu), 0x3u);
/* 53c03f: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53c043: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53c047: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c04cu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c04c: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53c050: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53c058: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c05du); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c05d: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 53c061: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53c062: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53c063: mov eax, 1 */
  eax = 0x1u;
/* 53c068: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53c069: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53c070: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53c073: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_53c0f0(void) {
  LOAD_REGS();
L_53c0f0: /* 53c0f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53c0f2: push 0x558c40 */
  { uint32_t v = 0x558c40u; esp -= 4; W32(esp, v); }
/* 53c0f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53c0fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53c0fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53c105: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53c108: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53c109: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53c10a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53c10b: mov edi, ecx */
  edi = ecx;
/* 53c10d: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 53c110: xor ebx, ebx */
  ebx = 0;
/* 53c112: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c114: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 53c118: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 53c11c: je 0x53c127 */
  if (zf) goto L_53c127;
L_53c11e: /* 53c11e: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 53c121: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 53c125: jmp 0x53c12b */
  goto L_53c12b;
L_53c127: /* 53c127: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
L_53c12b: /* 53c12b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 53c12f: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53c134u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53c134: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 53c138: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c13a: je 0x53c1ef */
  if (zf) goto L_53c1ef;
L_53c140: /* 53c140: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 53c143: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c145: je 0x53c1d3 */
  if (zf) goto L_53c1d3;
L_53c14b: /* 53c14b: jmp 0x53c150 */
  goto L_53c150;
L_53c150: /* 53c150: cmp eax, 0x6a46f0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a46f0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c155: je 0x53c160 */
  if (zf) goto L_53c160;
L_53c157: /* 53c157: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53c15a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c15c: jne 0x53c150 */
  if (!zf) goto L_53c150;
L_53c15e: /* 53c15e: jmp 0x53c1d3 */
  goto L_53c1d3;
L_53c160: /* 53c160: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 53c163: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53c169: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 53c16c: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53c16f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53c170: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53c174: call 0x4e13de */
  esp -= 4; W32(esp, 0x53c179u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 53c179: cmp dword ptr [esp + 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x34u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c17d: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 53c181: mov byte ptr [esp + 0x28], 1 */
  W8((uint32_t)(esp + 0x28u), 0x1u);
/* 53c186: jne 0x53c18d */
  if (!zf) goto L_53c18d;
L_53c188: /* 53c188: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_53c18d: /* 53c18d: cmp dword ptr [esp + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c191: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 53c195: jne 0x53c19c */
  if (!zf) goto L_53c19c;
L_53c197: /* 53c197: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_53c19c: /* 53c19c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53c19d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53c19e: call 0x4e26df */
  esp -= 4; W32(esp, 0x53c1a3u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 53c1a3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53c1a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53c1a8: je 0x53c231 */
  if (zf) goto L_53c231;
L_53c1ae: /* 53c1ae: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c1b0: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53c1b4: mov byte ptr [esp + 0x2c], 4 */
  W8((uint32_t)(esp + 0x2cu), 0x4u);
/* 53c1b9: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53c1bd: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53c1c1: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c1c6u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c1c6: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53c1ca: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53c1ce: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c1d3u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
L_53c1d3: /* 53c1d3: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 53c1d6: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 53c1da: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 53c1de: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53c1e3u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53c1e3: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 53c1e7: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c1e9: jne 0x53c140 */
  if (!zf) goto L_53c140;
L_53c1ef: /* 53c1ef: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c1f1: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53c1f5: mov dword ptr [esp + 0x2c], 5 */
  W32((uint32_t)(esp + 0x2cu), 0x5u);
/* 53c1fd: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53c201: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53c205: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c20au); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c20a: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53c20e: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53c216: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c21bu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c21b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53c21c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53c21d: xor eax, eax */
  eax = 0;
/* 53c21f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53c220: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 53c224: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53c22b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53c22e: ret 0x10 */
  esp += 20; SPILL(); return;
L_53c231: /* 53c231: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 53c234: mov eax, dword ptr [edi + edx] */
  eax = R32((uint32_t)(edi + edx));
/* 53c237: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 53c23b: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 53c23d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c23f: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53c243: mov byte ptr [esp + 0x2c], 2 */
  W8((uint32_t)(esp + 0x2cu), 0x2u);
/* 53c248: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53c24c: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53c250: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c255u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c255: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53c259: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53c25d: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c262u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c262: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c264: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53c268: mov dword ptr [esp + 0x2c], 3 */
  W32((uint32_t)(esp + 0x2cu), 0x3u);
/* 53c270: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53c274: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53c278: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c27du); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c27d: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53c281: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53c289: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c28eu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c28e: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 53c292: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53c293: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53c294: mov eax, 1 */
  eax = 0x1u;
/* 53c299: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53c29a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53c2a1: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53c2a4: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_53c14d(void) {
  LOAD_REGS();
  goto L_53c14d;
L_53c140: /* 53c140: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 53c143: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c145: je 0x53c1d3 */
  if (zf) goto L_53c1d3;
L_53c14b: /* 53c14b: jmp 0x53c150 */
  goto L_53c150;
L_53c14d: /* 53c14d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_53c150: /* 53c150: cmp eax, 0x6a46f0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a46f0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c155: je 0x53c160 */
  if (zf) goto L_53c160;
L_53c157: /* 53c157: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53c15a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c15c: jne 0x53c150 */
  if (!zf) goto L_53c150;
L_53c15e: /* 53c15e: jmp 0x53c1d3 */
  goto L_53c1d3;
L_53c160: /* 53c160: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 53c163: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53c169: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 53c16c: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53c16f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53c170: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53c174: call 0x4e13de */
  esp -= 4; W32(esp, 0x53c179u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 53c179: cmp dword ptr [esp + 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x34u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c17d: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 53c181: mov byte ptr [esp + 0x28], 1 */
  W8((uint32_t)(esp + 0x28u), 0x1u);
/* 53c186: jne 0x53c18d */
  if (!zf) goto L_53c18d;
L_53c188: /* 53c188: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_53c18d: /* 53c18d: cmp dword ptr [esp + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c191: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 53c195: jne 0x53c19c */
  if (!zf) goto L_53c19c;
L_53c197: /* 53c197: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_53c19c: /* 53c19c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53c19d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53c19e: call 0x4e26df */
  esp -= 4; W32(esp, 0x53c1a3u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 53c1a3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53c1a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53c1a8: je 0x53c231 */
  if (zf) goto L_53c231;
L_53c1ae: /* 53c1ae: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c1b0: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53c1b4: mov byte ptr [esp + 0x2c], 4 */
  W8((uint32_t)(esp + 0x2cu), 0x4u);
/* 53c1b9: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53c1bd: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53c1c1: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c1c6u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c1c6: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53c1ca: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53c1ce: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c1d3u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
L_53c1d3: /* 53c1d3: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 53c1d6: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 53c1da: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 53c1de: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53c1e3u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53c1e3: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 53c1e7: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c1e9: jne 0x53c140 */
  if (!zf) goto L_53c140;
L_53c1ef: /* 53c1ef: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c1f1: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53c1f5: mov dword ptr [esp + 0x2c], 5 */
  W32((uint32_t)(esp + 0x2cu), 0x5u);
/* 53c1fd: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53c201: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53c205: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c20au); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c20a: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53c20e: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53c216: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c21bu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c21b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53c21c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53c21d: xor eax, eax */
  eax = 0;
/* 53c21f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53c220: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 53c224: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53c22b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53c22e: ret 0x10 */
  esp += 20; SPILL(); return;
L_53c231: /* 53c231: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 53c234: mov eax, dword ptr [edi + edx] */
  eax = R32((uint32_t)(edi + edx));
/* 53c237: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 53c23b: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 53c23d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c23f: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53c243: mov byte ptr [esp + 0x2c], 2 */
  W8((uint32_t)(esp + 0x2cu), 0x2u);
/* 53c248: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53c24c: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53c250: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c255u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c255: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53c259: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53c25d: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c262u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c262: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c264: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53c268: mov dword ptr [esp + 0x2c], 3 */
  W32((uint32_t)(esp + 0x2cu), 0x3u);
/* 53c270: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53c274: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53c278: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c27du); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c27d: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53c281: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53c289: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c28eu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c28e: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 53c292: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53c293: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53c294: mov eax, 1 */
  eax = 0x1u;
/* 53c299: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53c29a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53c2a1: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53c2a4: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_53c320(void) {
  LOAD_REGS();
L_53c320: /* 53c320: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53c322: push 0x558c90 */
  { uint32_t v = 0x558c90u; esp -= 4; W32(esp, v); }
/* 53c327: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53c32d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53c32e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53c335: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53c338: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53c339: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53c33a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53c33b: mov edi, ecx */
  edi = ecx;
/* 53c33d: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 53c340: xor ebx, ebx */
  ebx = 0;
/* 53c342: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c344: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 53c348: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 53c34c: je 0x53c357 */
  if (zf) goto L_53c357;
L_53c34e: /* 53c34e: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 53c351: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 53c355: jmp 0x53c35b */
  goto L_53c35b;
L_53c357: /* 53c357: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
L_53c35b: /* 53c35b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 53c35f: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53c364u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53c364: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 53c368: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c36a: je 0x53c41f */
  if (zf) goto L_53c41f;
L_53c370: /* 53c370: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 53c373: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c375: je 0x53c403 */
  if (zf) goto L_53c403;
L_53c37b: /* 53c37b: jmp 0x53c380 */
  goto L_53c380;
L_53c380: /* 53c380: cmp eax, 0x6a5bb0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a5bb0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c385: je 0x53c390 */
  if (zf) goto L_53c390;
L_53c387: /* 53c387: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53c38a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c38c: jne 0x53c380 */
  if (!zf) goto L_53c380;
L_53c38e: /* 53c38e: jmp 0x53c403 */
  goto L_53c403;
L_53c390: /* 53c390: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 53c393: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53c399: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 53c39c: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53c39f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53c3a0: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53c3a4: call 0x4e13de */
  esp -= 4; W32(esp, 0x53c3a9u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 53c3a9: cmp dword ptr [esp + 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x34u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c3ad: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 53c3b1: mov byte ptr [esp + 0x28], 1 */
  W8((uint32_t)(esp + 0x28u), 0x1u);
/* 53c3b6: jne 0x53c3bd */
  if (!zf) goto L_53c3bd;
L_53c3b8: /* 53c3b8: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_53c3bd: /* 53c3bd: cmp dword ptr [esp + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c3c1: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 53c3c5: jne 0x53c3cc */
  if (!zf) goto L_53c3cc;
L_53c3c7: /* 53c3c7: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_53c3cc: /* 53c3cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53c3cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53c3ce: call 0x4e26df */
  esp -= 4; W32(esp, 0x53c3d3u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 53c3d3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53c3d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53c3d8: je 0x53c461 */
  if (zf) goto L_53c461;
L_53c3de: /* 53c3de: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c3e0: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53c3e4: mov byte ptr [esp + 0x2c], 4 */
  W8((uint32_t)(esp + 0x2cu), 0x4u);
/* 53c3e9: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53c3ed: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53c3f1: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c3f6u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c3f6: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53c3fa: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53c3fe: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c403u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
L_53c403: /* 53c403: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 53c406: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 53c40a: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 53c40e: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53c413u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53c413: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 53c417: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c419: jne 0x53c370 */
  if (!zf) goto L_53c370;
L_53c41f: /* 53c41f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c421: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53c425: mov dword ptr [esp + 0x2c], 5 */
  W32((uint32_t)(esp + 0x2cu), 0x5u);
/* 53c42d: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53c431: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53c435: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c43au); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c43a: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53c43e: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53c446: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c44bu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c44b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53c44c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53c44d: xor eax, eax */
  eax = 0;
/* 53c44f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53c450: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 53c454: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53c45b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53c45e: ret 0x10 */
  esp += 20; SPILL(); return;
L_53c461: /* 53c461: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 53c464: mov eax, dword ptr [edi + edx] */
  eax = R32((uint32_t)(edi + edx));
/* 53c467: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 53c46b: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 53c46d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c46f: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53c473: mov byte ptr [esp + 0x2c], 2 */
  W8((uint32_t)(esp + 0x2cu), 0x2u);
/* 53c478: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53c47c: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53c480: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c485u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c485: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53c489: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53c48d: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c492u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c492: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c494: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53c498: mov dword ptr [esp + 0x2c], 3 */
  W32((uint32_t)(esp + 0x2cu), 0x3u);
/* 53c4a0: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53c4a4: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53c4a8: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c4adu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c4ad: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53c4b1: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53c4b9: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c4beu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c4be: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 53c4c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53c4c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53c4c4: mov eax, 1 */
  eax = 0x1u;
/* 53c4c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53c4ca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53c4d1: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53c4d4: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_53c37d(void) {
  LOAD_REGS();
  goto L_53c37d;
L_53c370: /* 53c370: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 53c373: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c375: je 0x53c403 */
  if (zf) goto L_53c403;
L_53c37b: /* 53c37b: jmp 0x53c380 */
  goto L_53c380;
L_53c37d: /* 53c37d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_53c380: /* 53c380: cmp eax, 0x6a5bb0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a5bb0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c385: je 0x53c390 */
  if (zf) goto L_53c390;
L_53c387: /* 53c387: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53c38a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c38c: jne 0x53c380 */
  if (!zf) goto L_53c380;
L_53c38e: /* 53c38e: jmp 0x53c403 */
  goto L_53c403;
L_53c390: /* 53c390: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 53c393: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53c399: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 53c39c: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53c39f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53c3a0: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53c3a4: call 0x4e13de */
  esp -= 4; W32(esp, 0x53c3a9u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 53c3a9: cmp dword ptr [esp + 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x34u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c3ad: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 53c3b1: mov byte ptr [esp + 0x28], 1 */
  W8((uint32_t)(esp + 0x28u), 0x1u);
/* 53c3b6: jne 0x53c3bd */
  if (!zf) goto L_53c3bd;
L_53c3b8: /* 53c3b8: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_53c3bd: /* 53c3bd: cmp dword ptr [esp + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c3c1: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 53c3c5: jne 0x53c3cc */
  if (!zf) goto L_53c3cc;
L_53c3c7: /* 53c3c7: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_53c3cc: /* 53c3cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53c3cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53c3ce: call 0x4e26df */
  esp -= 4; W32(esp, 0x53c3d3u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 53c3d3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53c3d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53c3d8: je 0x53c461 */
  if (zf) goto L_53c461;
L_53c3de: /* 53c3de: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c3e0: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53c3e4: mov byte ptr [esp + 0x2c], 4 */
  W8((uint32_t)(esp + 0x2cu), 0x4u);
/* 53c3e9: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53c3ed: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53c3f1: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c3f6u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c3f6: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53c3fa: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53c3fe: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c403u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
L_53c403: /* 53c403: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 53c406: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 53c40a: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 53c40e: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53c413u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53c413: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 53c417: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c419: jne 0x53c370 */
  if (!zf) goto L_53c370;
L_53c41f: /* 53c41f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c421: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53c425: mov dword ptr [esp + 0x2c], 5 */
  W32((uint32_t)(esp + 0x2cu), 0x5u);
/* 53c42d: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53c431: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53c435: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c43au); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c43a: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53c43e: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53c446: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c44bu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c44b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53c44c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53c44d: xor eax, eax */
  eax = 0;
/* 53c44f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53c450: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 53c454: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53c45b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53c45e: ret 0x10 */
  esp += 20; SPILL(); return;
L_53c461: /* 53c461: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 53c464: mov eax, dword ptr [edi + edx] */
  eax = R32((uint32_t)(edi + edx));
/* 53c467: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 53c46b: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 53c46d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c46f: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53c473: mov byte ptr [esp + 0x2c], 2 */
  W8((uint32_t)(esp + 0x2cu), 0x2u);
/* 53c478: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53c47c: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53c480: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c485u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c485: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53c489: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53c48d: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c492u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c492: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c494: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53c498: mov dword ptr [esp + 0x2c], 3 */
  W32((uint32_t)(esp + 0x2cu), 0x3u);
/* 53c4a0: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53c4a4: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53c4a8: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c4adu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c4ad: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53c4b1: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53c4b9: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c4beu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c4be: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 53c4c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53c4c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53c4c4: mov eax, 1 */
  eax = 0x1u;
/* 53c4c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53c4ca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53c4d1: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53c4d4: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_53c550(void) {
  LOAD_REGS();
L_53c550: /* 53c550: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53c552: push 0x558ce0 */
  { uint32_t v = 0x558ce0u; esp -= 4; W32(esp, v); }
/* 53c557: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53c55d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53c55e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53c565: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53c568: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53c569: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53c56a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53c56b: mov edi, ecx */
  edi = ecx;
/* 53c56d: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 53c570: xor ebx, ebx */
  ebx = 0;
/* 53c572: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c574: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 53c578: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 53c57c: je 0x53c587 */
  if (zf) goto L_53c587;
L_53c57e: /* 53c57e: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 53c581: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 53c585: jmp 0x53c58b */
  goto L_53c58b;
L_53c587: /* 53c587: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
L_53c58b: /* 53c58b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 53c58f: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53c594u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53c594: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 53c598: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c59a: je 0x53c64f */
  if (zf) goto L_53c64f;
L_53c5a0: /* 53c5a0: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 53c5a3: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c5a5: je 0x53c633 */
  if (zf) goto L_53c633;
L_53c5ab: /* 53c5ab: jmp 0x53c5b0 */
  goto L_53c5b0;
L_53c5b0: /* 53c5b0: cmp eax, 0x6a5150 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a5150u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c5b5: je 0x53c5c0 */
  if (zf) goto L_53c5c0;
L_53c5b7: /* 53c5b7: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53c5ba: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c5bc: jne 0x53c5b0 */
  if (!zf) goto L_53c5b0;
L_53c5be: /* 53c5be: jmp 0x53c633 */
  goto L_53c633;
L_53c5c0: /* 53c5c0: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 53c5c3: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53c5c9: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 53c5cc: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53c5cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53c5d0: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53c5d4: call 0x4e13de */
  esp -= 4; W32(esp, 0x53c5d9u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 53c5d9: cmp dword ptr [esp + 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x34u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c5dd: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 53c5e1: mov byte ptr [esp + 0x28], 1 */
  W8((uint32_t)(esp + 0x28u), 0x1u);
/* 53c5e6: jne 0x53c5ed */
  if (!zf) goto L_53c5ed;
L_53c5e8: /* 53c5e8: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_53c5ed: /* 53c5ed: cmp dword ptr [esp + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c5f1: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 53c5f5: jne 0x53c5fc */
  if (!zf) goto L_53c5fc;
L_53c5f7: /* 53c5f7: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_53c5fc: /* 53c5fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53c5fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53c5fe: call 0x4e26df */
  esp -= 4; W32(esp, 0x53c603u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 53c603: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53c606: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53c608: je 0x53c691 */
  if (zf) goto L_53c691;
L_53c60e: /* 53c60e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c610: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53c614: mov byte ptr [esp + 0x2c], 4 */
  W8((uint32_t)(esp + 0x2cu), 0x4u);
/* 53c619: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53c61d: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53c621: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c626u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c626: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53c62a: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53c62e: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c633u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
L_53c633: /* 53c633: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 53c636: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 53c63a: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 53c63e: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53c643u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53c643: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 53c647: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c649: jne 0x53c5a0 */
  if (!zf) goto L_53c5a0;
L_53c64f: /* 53c64f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c651: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53c655: mov dword ptr [esp + 0x2c], 5 */
  W32((uint32_t)(esp + 0x2cu), 0x5u);
/* 53c65d: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53c661: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53c665: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c66au); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c66a: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53c66e: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53c676: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c67bu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c67b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53c67c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53c67d: xor eax, eax */
  eax = 0;
/* 53c67f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53c680: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 53c684: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53c68b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53c68e: ret 0x10 */
  esp += 20; SPILL(); return;
L_53c691: /* 53c691: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 53c694: mov eax, dword ptr [edi + edx] */
  eax = R32((uint32_t)(edi + edx));
/* 53c697: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 53c69b: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 53c69d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c69f: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53c6a3: mov byte ptr [esp + 0x2c], 2 */
  W8((uint32_t)(esp + 0x2cu), 0x2u);
/* 53c6a8: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53c6ac: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53c6b0: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c6b5u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c6b5: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53c6b9: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53c6bd: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c6c2u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c6c2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c6c4: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53c6c8: mov dword ptr [esp + 0x2c], 3 */
  W32((uint32_t)(esp + 0x2cu), 0x3u);
/* 53c6d0: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53c6d4: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53c6d8: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c6ddu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c6dd: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53c6e1: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53c6e9: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c6eeu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c6ee: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 53c6f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53c6f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53c6f4: mov eax, 1 */
  eax = 0x1u;
/* 53c6f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53c6fa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53c701: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53c704: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_53c5ad(void) {
  LOAD_REGS();
  goto L_53c5ad;
L_53c5a0: /* 53c5a0: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 53c5a3: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c5a5: je 0x53c633 */
  if (zf) goto L_53c633;
L_53c5ab: /* 53c5ab: jmp 0x53c5b0 */
  goto L_53c5b0;
L_53c5ad: /* 53c5ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_53c5b0: /* 53c5b0: cmp eax, 0x6a5150 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a5150u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c5b5: je 0x53c5c0 */
  if (zf) goto L_53c5c0;
L_53c5b7: /* 53c5b7: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53c5ba: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c5bc: jne 0x53c5b0 */
  if (!zf) goto L_53c5b0;
L_53c5be: /* 53c5be: jmp 0x53c633 */
  goto L_53c633;
L_53c5c0: /* 53c5c0: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 53c5c3: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53c5c9: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 53c5cc: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53c5cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53c5d0: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53c5d4: call 0x4e13de */
  esp -= 4; W32(esp, 0x53c5d9u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 53c5d9: cmp dword ptr [esp + 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x34u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c5dd: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 53c5e1: mov byte ptr [esp + 0x28], 1 */
  W8((uint32_t)(esp + 0x28u), 0x1u);
/* 53c5e6: jne 0x53c5ed */
  if (!zf) goto L_53c5ed;
L_53c5e8: /* 53c5e8: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_53c5ed: /* 53c5ed: cmp dword ptr [esp + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c5f1: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 53c5f5: jne 0x53c5fc */
  if (!zf) goto L_53c5fc;
L_53c5f7: /* 53c5f7: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_53c5fc: /* 53c5fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53c5fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53c5fe: call 0x4e26df */
  esp -= 4; W32(esp, 0x53c603u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 53c603: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53c606: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53c608: je 0x53c691 */
  if (zf) goto L_53c691;
L_53c60e: /* 53c60e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c610: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53c614: mov byte ptr [esp + 0x2c], 4 */
  W8((uint32_t)(esp + 0x2cu), 0x4u);
/* 53c619: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53c61d: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53c621: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c626u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c626: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53c62a: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53c62e: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c633u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
L_53c633: /* 53c633: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 53c636: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 53c63a: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 53c63e: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53c643u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53c643: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 53c647: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c649: jne 0x53c5a0 */
  if (!zf) goto L_53c5a0;
L_53c64f: /* 53c64f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c651: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53c655: mov dword ptr [esp + 0x2c], 5 */
  W32((uint32_t)(esp + 0x2cu), 0x5u);
/* 53c65d: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53c661: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53c665: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c66au); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c66a: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53c66e: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53c676: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c67bu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c67b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53c67c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53c67d: xor eax, eax */
  eax = 0;
/* 53c67f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53c680: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 53c684: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53c68b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53c68e: ret 0x10 */
  esp += 20; SPILL(); return;
L_53c691: /* 53c691: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 53c694: mov eax, dword ptr [edi + edx] */
  eax = R32((uint32_t)(edi + edx));
/* 53c697: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 53c69b: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 53c69d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c69f: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53c6a3: mov byte ptr [esp + 0x2c], 2 */
  W8((uint32_t)(esp + 0x2cu), 0x2u);
/* 53c6a8: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53c6ac: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53c6b0: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c6b5u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c6b5: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53c6b9: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53c6bd: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c6c2u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c6c2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c6c4: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53c6c8: mov dword ptr [esp + 0x2c], 3 */
  W32((uint32_t)(esp + 0x2cu), 0x3u);
/* 53c6d0: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53c6d4: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53c6d8: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c6ddu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c6dd: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53c6e1: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53c6e9: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c6eeu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c6ee: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 53c6f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53c6f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53c6f4: mov eax, 1 */
  eax = 0x1u;
/* 53c6f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53c6fa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53c701: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53c704: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_53c780(void) {
  LOAD_REGS();
L_53c780: /* 53c780: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53c782: push 0x558d30 */
  { uint32_t v = 0x558d30u; esp -= 4; W32(esp, v); }
/* 53c787: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53c78d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53c78e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53c795: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53c798: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53c799: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53c79a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53c79b: mov edi, ecx */
  edi = ecx;
/* 53c79d: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 53c7a0: xor ebx, ebx */
  ebx = 0;
/* 53c7a2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c7a4: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 53c7a8: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 53c7ac: je 0x53c7b7 */
  if (zf) goto L_53c7b7;
L_53c7ae: /* 53c7ae: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 53c7b1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 53c7b5: jmp 0x53c7bb */
  goto L_53c7bb;
L_53c7b7: /* 53c7b7: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
L_53c7bb: /* 53c7bb: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 53c7bf: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53c7c4u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53c7c4: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 53c7c8: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c7ca: je 0x53c87f */
  if (zf) goto L_53c87f;
L_53c7d0: /* 53c7d0: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 53c7d3: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c7d5: je 0x53c863 */
  if (zf) goto L_53c863;
L_53c7db: /* 53c7db: jmp 0x53c7e0 */
  goto L_53c7e0;
L_53c7e0: /* 53c7e0: cmp eax, 0x6a8a78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a8a78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c7e5: je 0x53c7f0 */
  if (zf) goto L_53c7f0;
L_53c7e7: /* 53c7e7: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53c7ea: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c7ec: jne 0x53c7e0 */
  if (!zf) goto L_53c7e0;
L_53c7ee: /* 53c7ee: jmp 0x53c863 */
  goto L_53c863;
L_53c7f0: /* 53c7f0: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 53c7f3: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53c7f9: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 53c7fc: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53c7ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53c800: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53c804: call 0x4e13de */
  esp -= 4; W32(esp, 0x53c809u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 53c809: cmp dword ptr [esp + 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x34u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c80d: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 53c811: mov byte ptr [esp + 0x28], 1 */
  W8((uint32_t)(esp + 0x28u), 0x1u);
/* 53c816: jne 0x53c81d */
  if (!zf) goto L_53c81d;
L_53c818: /* 53c818: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_53c81d: /* 53c81d: cmp dword ptr [esp + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c821: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 53c825: jne 0x53c82c */
  if (!zf) goto L_53c82c;
L_53c827: /* 53c827: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_53c82c: /* 53c82c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53c82d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53c82e: call 0x4e26df */
  esp -= 4; W32(esp, 0x53c833u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 53c833: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53c836: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53c838: je 0x53c8c1 */
  if (zf) goto L_53c8c1;
L_53c83e: /* 53c83e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c840: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53c844: mov byte ptr [esp + 0x2c], 4 */
  W8((uint32_t)(esp + 0x2cu), 0x4u);
/* 53c849: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53c84d: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53c851: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c856u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c856: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53c85a: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53c85e: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c863u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
L_53c863: /* 53c863: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 53c866: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 53c86a: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 53c86e: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53c873u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53c873: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 53c877: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c879: jne 0x53c7d0 */
  if (!zf) goto L_53c7d0;
L_53c87f: /* 53c87f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c881: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53c885: mov dword ptr [esp + 0x2c], 5 */
  W32((uint32_t)(esp + 0x2cu), 0x5u);
/* 53c88d: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53c891: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53c895: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c89au); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c89a: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53c89e: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53c8a6: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c8abu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c8ab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53c8ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53c8ad: xor eax, eax */
  eax = 0;
/* 53c8af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53c8b0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 53c8b4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53c8bb: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53c8be: ret 0x10 */
  esp += 20; SPILL(); return;
L_53c8c1: /* 53c8c1: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 53c8c4: mov eax, dword ptr [edi + edx] */
  eax = R32((uint32_t)(edi + edx));
/* 53c8c7: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 53c8cb: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 53c8cd: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c8cf: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53c8d3: mov byte ptr [esp + 0x2c], 2 */
  W8((uint32_t)(esp + 0x2cu), 0x2u);
/* 53c8d8: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53c8dc: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53c8e0: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c8e5u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c8e5: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53c8e9: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53c8ed: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c8f2u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c8f2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c8f4: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53c8f8: mov dword ptr [esp + 0x2c], 3 */
  W32((uint32_t)(esp + 0x2cu), 0x3u);
/* 53c900: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53c904: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53c908: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c90du); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c90d: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53c911: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53c919: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c91eu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c91e: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 53c922: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53c923: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53c924: mov eax, 1 */
  eax = 0x1u;
/* 53c929: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53c92a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53c931: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53c934: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_53c7dd(void) {
  LOAD_REGS();
  goto L_53c7dd;
L_53c7d0: /* 53c7d0: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 53c7d3: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c7d5: je 0x53c863 */
  if (zf) goto L_53c863;
L_53c7db: /* 53c7db: jmp 0x53c7e0 */
  goto L_53c7e0;
L_53c7dd: /* 53c7dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_53c7e0: /* 53c7e0: cmp eax, 0x6a8a78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a8a78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c7e5: je 0x53c7f0 */
  if (zf) goto L_53c7f0;
L_53c7e7: /* 53c7e7: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53c7ea: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c7ec: jne 0x53c7e0 */
  if (!zf) goto L_53c7e0;
L_53c7ee: /* 53c7ee: jmp 0x53c863 */
  goto L_53c863;
L_53c7f0: /* 53c7f0: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 53c7f3: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53c7f9: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 53c7fc: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53c7ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53c800: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53c804: call 0x4e13de */
  esp -= 4; W32(esp, 0x53c809u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 53c809: cmp dword ptr [esp + 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x34u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c80d: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 53c811: mov byte ptr [esp + 0x28], 1 */
  W8((uint32_t)(esp + 0x28u), 0x1u);
/* 53c816: jne 0x53c81d */
  if (!zf) goto L_53c81d;
L_53c818: /* 53c818: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_53c81d: /* 53c81d: cmp dword ptr [esp + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c821: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 53c825: jne 0x53c82c */
  if (!zf) goto L_53c82c;
L_53c827: /* 53c827: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_53c82c: /* 53c82c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53c82d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53c82e: call 0x4e26df */
  esp -= 4; W32(esp, 0x53c833u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 53c833: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53c836: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53c838: je 0x53c8c1 */
  if (zf) goto L_53c8c1;
L_53c83e: /* 53c83e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c840: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53c844: mov byte ptr [esp + 0x2c], 4 */
  W8((uint32_t)(esp + 0x2cu), 0x4u);
/* 53c849: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53c84d: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53c851: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c856u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c856: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53c85a: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53c85e: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c863u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
L_53c863: /* 53c863: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 53c866: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 53c86a: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 53c86e: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53c873u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53c873: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 53c877: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c879: jne 0x53c7d0 */
  if (!zf) goto L_53c7d0;
L_53c87f: /* 53c87f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c881: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53c885: mov dword ptr [esp + 0x2c], 5 */
  W32((uint32_t)(esp + 0x2cu), 0x5u);
/* 53c88d: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53c891: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53c895: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c89au); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c89a: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53c89e: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53c8a6: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c8abu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c8ab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53c8ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53c8ad: xor eax, eax */
  eax = 0;
/* 53c8af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53c8b0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 53c8b4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53c8bb: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53c8be: ret 0x10 */
  esp += 20; SPILL(); return;
L_53c8c1: /* 53c8c1: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 53c8c4: mov eax, dword ptr [edi + edx] */
  eax = R32((uint32_t)(edi + edx));
/* 53c8c7: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 53c8cb: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 53c8cd: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c8cf: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 53c8d3: mov byte ptr [esp + 0x2c], 2 */
  W8((uint32_t)(esp + 0x2cu), 0x2u);
/* 53c8d8: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 53c8dc: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 53c8e0: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c8e5u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c8e5: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 53c8e9: mov byte ptr [esp + 0x28], bl */
  W8((uint32_t)(esp + 0x28u), (ebx & 0xffu));
/* 53c8ed: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c8f2u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c8f2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53c8f4: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 53c8f8: mov dword ptr [esp + 0x2c], 3 */
  W32((uint32_t)(esp + 0x2cu), 0x3u);
/* 53c900: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* 53c904: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 53c908: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53c90du); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53c90d: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 53c911: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* 53c919: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53c91eu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53c91e: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 53c922: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53c923: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53c924: mov eax, 1 */
  eax = 0x1u;
/* 53c929: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53c92a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53c931: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53c934: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_53c9b0(void) {
  LOAD_REGS();
L_53c9b0: /* 53c9b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53c9b1: mov ebp, esp */
  ebp = esp;
/* 53c9b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53c9b5: push 0x558d50 */
  { uint32_t v = 0x558d50u; esp -= 4; W32(esp, v); }
/* 53c9ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53c9c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53c9c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53c9c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53c9cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53c9cc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 53c9cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53c9d0: mov esi, ecx */
  esi = ecx;
/* 53c9d2: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 53c9d4: xor edx, edx */
  edx = 0;
/* 53c9d6: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c9d8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53c9d9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53c9dc: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 53c9df: je 0x53ca4c */
  if (zf) goto L_53ca4c;
L_53c9e1: /* 53c9e1: mov edi, dword ptr [ecx + 0x18] */
  edi = R32((uint32_t)(ecx + 0x18u));
/* 53c9e4: cmp edi, dword ptr [esi + 0x48] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x48u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c9e7: je 0x53ca4c */
  if (zf) goto L_53ca4c;
L_53c9e9: /* 53c9e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_53c9f0: /* 53c9f0: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* 53c9f3: cmp edx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53c9f6: jge 0x53ca02 */
  if ((sf == of)) goto L_53ca02;
L_53c9f8: /* 53c9f8: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 53c9fa: cmp dword ptr [eax + edx*4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53c9fd: je 0x53ca02 */
  if (zf) goto L_53ca02;
L_53c9ff: /* 53c9ff: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 53ca00: jmp 0x53c9f0 */
  goto L_53c9f0;
L_53ca02: /* 53ca02: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* 53ca05: cmp edx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53ca08: jne 0x53ca4c */
  if (!zf) goto L_53ca4c;
L_53ca0a: /* 53ca0a: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 53ca0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ca0f: jne 0x53ca2a */
  if (!zf) goto L_53ca2a;
L_53ca11: /* 53ca11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53ca13: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53ca18u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53ca18: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 53ca1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53ca1c: push 0x5ad280 */
  { uint32_t v = 0x5ad280u; esp -= 4; W32(esp, v); }
/* 53ca21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53ca22: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53ca27u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53ca27: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53ca2a: /* 53ca2a: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 53ca2c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53ca2e: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53ca33u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53ca33: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* 53ca36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53ca37: push 0x5ad268 */
  { uint32_t v = 0x5ad268u; esp -= 4; W32(esp, v); }
/* 53ca3c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53ca3d: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53ca42u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53ca42: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53ca45: mov dword ptr [esi + 0x40], 1 */
  W32((uint32_t)(esi + 0x40u), 0x1u);
L_53ca4c: /* 53ca4c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53ca4f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53ca50: mov eax, esi */
  eax = esi;
/* 53ca52: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53ca53: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53ca5a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53ca5b: mov esp, ebp */
  esp = ebp;
/* 53ca5d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53ca5e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_53ca61(void) {
  LOAD_REGS();
L_53ca61: /* 53ca61: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53ca64: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53ca69: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 53ca6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53ca6d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 53ca70: call 0x554df6 */
  esp -= 4; W32(esp, 0x53ca75u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53ca75(); return;
}

void f_53ca75(void) {
  LOAD_REGS();
L_53ca75: /* 53ca75: push 0x56dfe8 */
  { uint32_t v = 0x56dfe8u; esp -= 4; W32(esp, v); }
/* 53ca7a: push 0x5a376c */
  { uint32_t v = 0x5a376cu; esp -= 4; W32(esp, v); }
/* 53ca7f: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53ca84u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53ca84: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53ca87: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53ca89: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53ca8b: call 0x554df6 */
  esp -= 4; W32(esp, 0x53ca90u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53ca90: guest_badaddr(0x53ca90); return;
}

void f_53cae0(void) {
  LOAD_REGS();
L_53cae0: /* 53cae0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53cae1: mov ebp, esp */
  ebp = esp;
/* 53cae3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53cae5: push 0x558d60 */
  { uint32_t v = 0x558d60u; esp -= 4; W32(esp, v); }
/* 53caea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53caf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53caf1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53caf8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53cafb: mov eax, dword ptr [0x69f448] */
  eax = R32((uint32_t)(0x69f448u));
/* 53cb00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53cb01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53cb02: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 53cb03: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53cb06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53cb07: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53cb0a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53cb11: mov dword ptr [0x69f448], eax */
  W32((uint32_t)(0x69f448u), eax);
/* 53cb16: jne 0x53cba3 */
  if (!zf) goto L_53cba3;
L_53cb1c: /* 53cb1c: mov eax, dword ptr [0x69f454] */
  eax = R32((uint32_t)(0x69f454u));
/* 53cb21: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53cb23: je 0x53cb3c */
  if (zf) goto L_53cb3c;
L_53cb25: /* 53cb25: push 0xa2b */
  { uint32_t v = 0xa2bu; esp -= 4; W32(esp, v); }
/* 53cb2a: push 0x5abb00 */
  { uint32_t v = 0x5abb00u; esp -= 4; W32(esp, v); }
/* 53cb2f: push 0x5abb0c */
  { uint32_t v = 0x5abb0cu; esp -= 4; W32(esp, v); }
/* 53cb34: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53cb39u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53cb39: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53cb3c: /* 53cb3c: xor esi, esi */
  esi = 0;
/* 53cb3e: mov edi, edi */
  edi = edi;
L_53cb40: /* 53cb40: cmp esi, dword ptr [0x69ff64] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x69ff64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53cb46: jge 0x53cba3 */
  if ((sf == of)) goto L_53cba3;
L_53cb48: /* 53cb48: mov eax, dword ptr [0x69ff60] */
  eax = R32((uint32_t)(0x69ff60u));
/* 53cb4d: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 53cb50: mov ecx, dword ptr [eax + 0x90] */
  ecx = R32((uint32_t)(eax + 0x90u));
/* 53cb56: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53cb58: jne 0x53cb71 */
  if (!zf) goto L_53cb71;
L_53cb5a: /* 53cb5a: push 0xa2d */
  { uint32_t v = 0xa2du; esp -= 4; W32(esp, v); }
/* 53cb5f: push 0x5abb1c */
  { uint32_t v = 0x5abb1cu; esp -= 4; W32(esp, v); }
/* 53cb64: push 0x5abb28 */
  { uint32_t v = 0x5abb28u; esp -= 4; W32(esp, v); }
/* 53cb69: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53cb6eu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53cb6e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53cb71: /* 53cb71: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 53cb72: jmp 0x53cb40 */
  goto L_53cb40;
L_53cba3: /* 53cba3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53cba6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53cba7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53cba8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53cbaf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53cbb0: mov esp, ebp */
  esp = ebp;
/* 53cbb2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53cbb3: ret  */
  esp += 4; SPILL(); return;
}

void f_53cb74(void) {
  LOAD_REGS();
L_53cb74: /* 53cb74: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53cb77: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53cb7c: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 53cb7f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53cb80: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 53cb83: call 0x554df6 */
  esp -= 4; W32(esp, 0x53cb88u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53cb88(); return;
}

void f_53cb88(void) {
  LOAD_REGS();
L_53cb88: /* 53cb88: push 0x56e02c */
  { uint32_t v = 0x56e02cu; esp -= 4; W32(esp, v); }
/* 53cb8d: push 0x5abb40 */
  { uint32_t v = 0x5abb40u; esp -= 4; W32(esp, v); }
/* 53cb92: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53cb97u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53cb97: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53cb9a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53cb9c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53cb9e: call 0x554df6 */
  esp -= 4; W32(esp, 0x53cba3u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 53cba3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53cba6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53cba7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53cba8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53cbaf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53cbb0: mov esp, ebp */
  esp = ebp;
/* 53cbb2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53cbb3: ret  */
  esp += 4; SPILL(); return;
}

void f_53cc00(void) {
  LOAD_REGS();
L_53cc00: /* 53cc00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53cc01: mov ebp, esp */
  ebp = esp;
/* 53cc03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53cc05: push 0x558d78 */
  { uint32_t v = 0x558d78u; esp -= 4; W32(esp, v); }
/* 53cc0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53cc10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53cc11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53cc18: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53cc1b: mov eax, dword ptr [0x69f448] */
  eax = R32((uint32_t)(0x69f448u));
/* 53cc20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53cc21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53cc22: xor esi, esi */
  esi = 0;
/* 53cc24: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53cc26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53cc27: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53cc2a: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 53cc2d: jg 0x53cc46 */
  if ((!zf && sf == of)) goto L_53cc46;
L_53cc2f: /* 53cc2f: push 0xa38 */
  { uint32_t v = 0xa38u; esp -= 4; W32(esp, v); }
/* 53cc34: push 0x5abb48 */
  { uint32_t v = 0x5abb48u; esp -= 4; W32(esp, v); }
/* 53cc39: push 0x5abb54 */
  { uint32_t v = 0x5abb54u; esp -= 4; W32(esp, v); }
/* 53cc3e: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53cc43u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53cc43: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53cc46: /* 53cc46: dec dword ptr [0x69f448] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x69f448u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(0x69f448u), r);
  }
/* 53cc4c: jne 0x53ce33 */
  if (!zf) goto L_53ce33;
L_53cc52: /* 53cc52: xor ecx, ecx */
  ecx = 0;
/* 53cc54: mov dword ptr [ebp - 0x38], esi */
  W32((uint32_t)(ebp + 0xffffffc8u), esi);
/* 53cc57: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 53cc5a: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* 53cc5d: mov ebx, 2 */
  ebx = 0x2u;
/* 53cc62: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_53cc65: /* 53cc65: mov eax, dword ptr [0x69fa28] */
  eax = R32((uint32_t)(0x69fa28u));
/* 53cc6a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53cc6c: je 0x53cdcf */
  if (zf) goto L_53cdcf;
L_53cc72: /* 53cc72: mov edi, ecx */
  edi = ecx;
/* 53cc74: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53cc76: mov esi, eax */
  esi = eax;
/* 53cc78: cmp ecx, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53cc7b: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 53cc7e: jle 0x53cc9d */
  if ((zf || sf != of)) goto L_53cc9d;
L_53cc80: /* 53cc80: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 53cc83: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 53cc84: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 53cc87: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53cc89: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 53cc8c: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 53cc90: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 53cc92: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 53cc95: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 53cc98: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53cc9du); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_53cc9d: /* 53cc9d: mov edx, dword ptr [0x69fa24] */
  edx = R32((uint32_t)(0x69fa24u));
/* 53cca3: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 53cca6: lea ecx, [esi*4] */
  ecx = (uint32_t)(esi*4);
/* 53ccad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53ccae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53ccaf: lea ecx, [eax + edi*4] */
  ecx = (uint32_t)(eax + edi*4);
/* 53ccb2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53ccb3: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x53ccb8u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 53ccb8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53ccbb: xor edi, edi */
  edi = 0;
/* 53ccbd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 53ccbf: mov ecx, 0x69fa24 */
  ecx = 0x69fa24u;
/* 53ccc4: mov dword ptr [0x69fa28], edi */
  W32((uint32_t)(0x69fa28u), edi);
/* 53ccca: mov dword ptr [0x69fa2c], edi */
  W32((uint32_t)(0x69fa2cu), edi);
/* 53ccd0: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53ccd5u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53ccd5: mov edx, dword ptr [0x5a0c98] */
  edx = R32((uint32_t)(0x5a0c98u));
/* 53ccdb: push 0x5abb6c */
  { uint32_t v = 0x5abb6cu; esp -= 4; W32(esp, v); }
/* 53cce0: push 0x308 */
  { uint32_t v = 0x308u; esp -= 4; W32(esp, v); }
/* 53cce5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53cce6: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 53ccea: call 0x4e30df */
  esp -= 4; W32(esp, 0x53ccefu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 53ccef: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 53ccf2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53ccf5: /* 53ccf5: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53ccf7: jge 0x53cd3e */
  if ((sf == of)) goto L_53cd3e;
L_53ccf9: /* 53ccf9: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 53ccfc: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 53ccff: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 53cd02: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53cd05: je 0x53cd3b */
  if (zf) goto L_53cd3b;
L_53cd07: /* 53cd07: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 53cd0a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53cd0c: jne 0x53cd25 */
  if (!zf) goto L_53cd25;
L_53cd0e: /* 53cd0e: push 0xa62 */
  { uint32_t v = 0xa62u; esp -= 4; W32(esp, v); }
/* 53cd13: push 0x5abb94 */
  { uint32_t v = 0x5abb94u; esp -= 4; W32(esp, v); }
/* 53cd18: push 0x5abba0 */
  { uint32_t v = 0x5abba0u; esp -= 4; W32(esp, v); }
/* 53cd1d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53cd22u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53cd22: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53cd25: /* 53cd25: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 53cd28: mov edx, dword ptr [eax + 0xb4] */
  edx = R32((uint32_t)(eax + 0xb4u));
/* 53cd2e: lea ecx, [eax + 0xb4] */
  ecx = (uint32_t)(eax + 0xb4u);
/* 53cd34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53cd35: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x53cd38u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53cd38: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
L_53cd3b: /* 53cd3b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 53cd3c: jmp 0x53ccf5 */
  goto L_53ccf5;
L_53cd3e: /* 53cd3e: mov eax, dword ptr [0x69fa28] */
  eax = R32((uint32_t)(0x69fa28u));
/* 53cd43: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53cd45: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 53cd48: jne 0x53cc72 */
  if (!zf) goto L_53cc72;
L_53cd4e: /* 53cd4e: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 53cd52: xor esi, esi */
  esi = 0;
L_53cd54: /* 53cd54: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 53cd57: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53cd59: jge 0x53cd98 */
  if ((sf == of)) goto L_53cd98;
L_53cd5b: /* 53cd5b: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 53cd5e: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 53cd61: call 0x4e4228 */
  esp -= 4; W32(esp, 0x53cd66u); SPILL(); f_4e4228(); if (g_unwind) return; RELOAD();
/* 53cd66: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 53cd67: jmp 0x53cd54 */
  goto L_53cd54;
L_53cd98: /* 53cd98: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 53cd9b: jmp 0x53cc65 */
  goto L_53cc65;
L_53cdcf: /* 53cdcf: mov eax, dword ptr [0x69f450] */
  eax = R32((uint32_t)(0x69f450u));
/* 53cdd4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53cdd6: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 53cdda: je 0x53ce1a */
  if (zf) goto L_53ce1a;
L_53cddc: /* 53cddc: xor esi, esi */
  esi = 0;
/* 53cdde: mov edi, 0x4000000 */
  edi = 0x4000000u;
L_53cde3: /* 53cde3: cmp esi, dword ptr [0x69ff64] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x69ff64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53cde9: jge 0x53ce1a */
  if ((sf == of)) goto L_53ce1a;
L_53cdeb: /* 53cdeb: xor ebx, ebx */
  ebx = 0;
/* 53cded: xor edx, edx */
  edx = 0;
/* 53cdef: nop  */
L_53cdf0: /* 53cdf0: mov eax, dword ptr [0x69ff60] */
  eax = R32((uint32_t)(0x69ff60u));
/* 53cdf5: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 53cdf8: cmp edx, dword ptr [ecx + 0x7c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x7cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53cdfb: jge 0x53ce17 */
  if ((sf == of)) goto L_53ce17;
L_53cdfd: /* 53cdfd: mov eax, edx */
  eax = edx;
/* 53cdff: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 53ce02: add eax, dword ptr [ecx + 0x78] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x78u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53ce05: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 53ce08: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53ce0a: je 0x53ce14 */
  if (zf) goto L_53ce14;
L_53ce0c: /* 53ce0c: test dword ptr [ecx + 0x1c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ce0f: jne 0x53ce14 */
  if (!zf) goto L_53ce14;
L_53ce11: /* 53ce11: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
L_53ce14: /* 53ce14: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 53ce15: jmp 0x53cdf0 */
  goto L_53cdf0;
L_53ce17: /* 53ce17: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 53ce18: jmp 0x53cde3 */
  goto L_53cde3;
L_53ce1a: /* 53ce1a: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 53ce1d: mov dword ptr [0x69f450], 0 */
  W32((uint32_t)(0x69f450u), 0x0u);
/* 53ce27: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 53ce2e: call 0x4e326a */
  esp -= 4; W32(esp, 0x53ce33u); SPILL(); f_4e326a(); if (g_unwind) return; RELOAD();
L_53ce33: /* 53ce33: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53ce36: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53ce37: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53ce38: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53ce3f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53ce40: mov esp, ebp */
  esp = ebp;
/* 53ce42: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53ce43: ret  */
  esp += 4; SPILL(); return;
}

void f_53cd69(void) {
  LOAD_REGS();
L_53cd69: /* 53cd69: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 53cd6c: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53cd71: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 53cd74: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53cd75: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 53cd78: call 0x554df6 */
  esp -= 4; W32(esp, 0x53cd7du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53cd7d(); return;
}

void f_53cd7d(void) {
  LOAD_REGS();
  goto L_53cd7d;
L_53cc65: /* 53cc65: mov eax, dword ptr [0x69fa28] */
  eax = R32((uint32_t)(0x69fa28u));
/* 53cc6a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53cc6c: je 0x53cdcf */
  if (zf) goto L_53cdcf;
L_53cc72: /* 53cc72: mov edi, ecx */
  edi = ecx;
/* 53cc74: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53cc76: mov esi, eax */
  esi = eax;
/* 53cc78: cmp ecx, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53cc7b: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 53cc7e: jle 0x53cc9d */
  if ((zf || sf != of)) goto L_53cc9d;
L_53cc80: /* 53cc80: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 53cc83: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 53cc84: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 53cc87: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53cc89: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 53cc8c: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 53cc90: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 53cc92: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 53cc95: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 53cc98: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53cc9du); SPILL(); f_4e4502(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x53ce33u: guest_unwind_done(); RELOAD(); goto L_53ce33; } return; } RELOAD();
L_53cc9d: /* 53cc9d: mov edx, dword ptr [0x69fa24] */
  edx = R32((uint32_t)(0x69fa24u));
/* 53cca3: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 53cca6: lea ecx, [esi*4] */
  ecx = (uint32_t)(esi*4);
/* 53ccad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53ccae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53ccaf: lea ecx, [eax + edi*4] */
  ecx = (uint32_t)(eax + edi*4);
/* 53ccb2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53ccb3: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x53ccb8u); SPILL(); f_4e3de1(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x53ce33u: guest_unwind_done(); RELOAD(); goto L_53ce33; } return; } RELOAD();
/* 53ccb8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53ccbb: xor edi, edi */
  edi = 0;
/* 53ccbd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 53ccbf: mov ecx, 0x69fa24 */
  ecx = 0x69fa24u;
/* 53ccc4: mov dword ptr [0x69fa28], edi */
  W32((uint32_t)(0x69fa28u), edi);
/* 53ccca: mov dword ptr [0x69fa2c], edi */
  W32((uint32_t)(0x69fa2cu), edi);
/* 53ccd0: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53ccd5u); SPILL(); f_4e4502(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x53ce33u: guest_unwind_done(); RELOAD(); goto L_53ce33; } return; } RELOAD();
/* 53ccd5: mov edx, dword ptr [0x5a0c98] */
  edx = R32((uint32_t)(0x5a0c98u));
/* 53ccdb: push 0x5abb6c */
  { uint32_t v = 0x5abb6cu; esp -= 4; W32(esp, v); }
/* 53cce0: push 0x308 */
  { uint32_t v = 0x308u; esp -= 4; W32(esp, v); }
/* 53cce5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53cce6: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 53ccea: call 0x4e30df */
  esp -= 4; W32(esp, 0x53ccefu); SPILL(); f_4e30df(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x53ce33u: guest_unwind_done(); RELOAD(); goto L_53ce33; } return; } RELOAD();
/* 53ccef: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 53ccf2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53ccf5: /* 53ccf5: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53ccf7: jge 0x53cd3e */
  if ((sf == of)) goto L_53cd3e;
L_53ccf9: /* 53ccf9: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 53ccfc: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 53ccff: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 53cd02: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53cd05: je 0x53cd3b */
  if (zf) goto L_53cd3b;
L_53cd07: /* 53cd07: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 53cd0a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53cd0c: jne 0x53cd25 */
  if (!zf) goto L_53cd25;
L_53cd0e: /* 53cd0e: push 0xa62 */
  { uint32_t v = 0xa62u; esp -= 4; W32(esp, v); }
/* 53cd13: push 0x5abb94 */
  { uint32_t v = 0x5abb94u; esp -= 4; W32(esp, v); }
/* 53cd18: push 0x5abba0 */
  { uint32_t v = 0x5abba0u; esp -= 4; W32(esp, v); }
/* 53cd1d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53cd22u); SPILL(); f_4e33a5(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x53ce33u: guest_unwind_done(); RELOAD(); goto L_53ce33; } return; } RELOAD();
/* 53cd22: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53cd25: /* 53cd25: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 53cd28: mov edx, dword ptr [eax + 0xb4] */
  edx = R32((uint32_t)(eax + 0xb4u));
/* 53cd2e: lea ecx, [eax + 0xb4] */
  ecx = (uint32_t)(eax + 0xb4u);
/* 53cd34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53cd35: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x53cd38u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x53ce33u: guest_unwind_done(); RELOAD(); goto L_53ce33; } return; } RELOAD(); }
/* 53cd38: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
L_53cd3b: /* 53cd3b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 53cd3c: jmp 0x53ccf5 */
  goto L_53ccf5;
L_53cd3e: /* 53cd3e: mov eax, dword ptr [0x69fa28] */
  eax = R32((uint32_t)(0x69fa28u));
/* 53cd43: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53cd45: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 53cd48: jne 0x53cc72 */
  if (!zf) goto L_53cc72;
L_53cd4e: /* 53cd4e: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 53cd52: xor esi, esi */
  esi = 0;
L_53cd54: /* 53cd54: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 53cd57: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53cd59: jge 0x53cd98 */
  if ((sf == of)) goto L_53cd98;
L_53cd5b: /* 53cd5b: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 53cd5e: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 53cd61: call 0x4e4228 */
  esp -= 4; W32(esp, 0x53cd66u); SPILL(); f_4e4228(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x53ce33u: guest_unwind_done(); RELOAD(); goto L_53ce33; } return; } RELOAD();
/* 53cd66: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 53cd67: jmp 0x53cd54 */
  goto L_53cd54;
L_53cd7d: /* 53cd7d: push 0x56e0a8 */
  { uint32_t v = 0x56e0a8u; esp -= 4; W32(esp, v); }
/* 53cd82: push 0x5abbbc */
  { uint32_t v = 0x5abbbcu; esp -= 4; W32(esp, v); }
/* 53cd87: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53cd8cu); SPILL(); f_4e3f49(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x53ce33u: guest_unwind_done(); RELOAD(); goto L_53ce33; } return; } RELOAD();
/* 53cd8c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53cd8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53cd91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53cd93: call 0x554df6 */
  esp -= 4; W32(esp, 0x53cd98u); SPILL(); f_554df6(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x53ce33u: guest_unwind_done(); RELOAD(); goto L_53ce33; } return; } RELOAD();
L_53cd98: /* 53cd98: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 53cd9b: jmp 0x53cc65 */
  goto L_53cc65;
L_53cdcf: /* 53cdcf: mov eax, dword ptr [0x69f450] */
  eax = R32((uint32_t)(0x69f450u));
/* 53cdd4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53cdd6: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 53cdda: je 0x53ce1a */
  if (zf) goto L_53ce1a;
L_53cddc: /* 53cddc: xor esi, esi */
  esi = 0;
/* 53cdde: mov edi, 0x4000000 */
  edi = 0x4000000u;
L_53cde3: /* 53cde3: cmp esi, dword ptr [0x69ff64] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x69ff64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53cde9: jge 0x53ce1a */
  if ((sf == of)) goto L_53ce1a;
L_53cdeb: /* 53cdeb: xor ebx, ebx */
  ebx = 0;
/* 53cded: xor edx, edx */
  edx = 0;
/* 53cdef: nop  */
L_53cdf0: /* 53cdf0: mov eax, dword ptr [0x69ff60] */
  eax = R32((uint32_t)(0x69ff60u));
/* 53cdf5: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 53cdf8: cmp edx, dword ptr [ecx + 0x7c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x7cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53cdfb: jge 0x53ce17 */
  if ((sf == of)) goto L_53ce17;
L_53cdfd: /* 53cdfd: mov eax, edx */
  eax = edx;
/* 53cdff: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 53ce02: add eax, dword ptr [ecx + 0x78] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x78u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53ce05: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 53ce08: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53ce0a: je 0x53ce14 */
  if (zf) goto L_53ce14;
L_53ce0c: /* 53ce0c: test dword ptr [ecx + 0x1c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ce0f: jne 0x53ce14 */
  if (!zf) goto L_53ce14;
L_53ce11: /* 53ce11: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
L_53ce14: /* 53ce14: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 53ce15: jmp 0x53cdf0 */
  goto L_53cdf0;
L_53ce17: /* 53ce17: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 53ce18: jmp 0x53cde3 */
  goto L_53cde3;
L_53ce1a: /* 53ce1a: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 53ce1d: mov dword ptr [0x69f450], 0 */
  W32((uint32_t)(0x69f450u), 0x0u);
/* 53ce27: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 53ce2e: call 0x4e326a */
  esp -= 4; W32(esp, 0x53ce33u); SPILL(); f_4e326a(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x53ce33u: guest_unwind_done(); RELOAD(); goto L_53ce33; } return; } RELOAD();
L_53ce33: /* 53ce33: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53ce36: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53ce37: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53ce38: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53ce3f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53ce40: mov esp, ebp */
  esp = ebp;
/* 53ce42: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53ce43: ret  */
  esp += 4; SPILL(); return;
}

void f_53cda0(void) {
  LOAD_REGS();
L_53cda0: /* 53cda0: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 53cda3: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53cda8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 53cdab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53cdac: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 53cdaf: call 0x554df6 */
  esp -= 4; W32(esp, 0x53cdb4u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53cdb4(); return;
}

void f_53cdb4(void) {
  LOAD_REGS();
L_53cdb4: /* 53cdb4: push 0x56e084 */
  { uint32_t v = 0x56e084u; esp -= 4; W32(esp, v); }
/* 53cdb9: push 0x5abbb4 */
  { uint32_t v = 0x5abbb4u; esp -= 4; W32(esp, v); }
/* 53cdbe: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53cdc3u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53cdc3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53cdc6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53cdc8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53cdca: call 0x554df6 */
  esp -= 4; W32(esp, 0x53cdcfu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 53cdcf: mov eax, dword ptr [0x69f450] */
  eax = R32((uint32_t)(0x69f450u));
/* 53cdd4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53cdd6: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 53cdda: je 0x53ce1a */
  if (zf) goto L_53ce1a;
L_53cddc: /* 53cddc: xor esi, esi */
  esi = 0;
/* 53cdde: mov edi, 0x4000000 */
  edi = 0x4000000u;
L_53cde3: /* 53cde3: cmp esi, dword ptr [0x69ff64] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x69ff64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53cde9: jge 0x53ce1a */
  if ((sf == of)) goto L_53ce1a;
L_53cdeb: /* 53cdeb: xor ebx, ebx */
  ebx = 0;
/* 53cded: xor edx, edx */
  edx = 0;
/* 53cdef: nop  */
L_53cdf0: /* 53cdf0: mov eax, dword ptr [0x69ff60] */
  eax = R32((uint32_t)(0x69ff60u));
/* 53cdf5: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 53cdf8: cmp edx, dword ptr [ecx + 0x7c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x7cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53cdfb: jge 0x53ce17 */
  if ((sf == of)) goto L_53ce17;
L_53cdfd: /* 53cdfd: mov eax, edx */
  eax = edx;
/* 53cdff: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 53ce02: add eax, dword ptr [ecx + 0x78] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x78u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53ce05: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 53ce08: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53ce0a: je 0x53ce14 */
  if (zf) goto L_53ce14;
L_53ce0c: /* 53ce0c: test dword ptr [ecx + 0x1c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ce0f: jne 0x53ce14 */
  if (!zf) goto L_53ce14;
L_53ce11: /* 53ce11: mov dword ptr [eax + 0x10], ebx */
  W32((uint32_t)(eax + 0x10u), ebx);
L_53ce14: /* 53ce14: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 53ce15: jmp 0x53cdf0 */
  goto L_53cdf0;
L_53ce17: /* 53ce17: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 53ce18: jmp 0x53cde3 */
  goto L_53cde3;
L_53ce1a: /* 53ce1a: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 53ce1d: mov dword ptr [0x69f450], 0 */
  W32((uint32_t)(0x69f450u), 0x0u);
/* 53ce27: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 53ce2e: call 0x4e326a */
  esp -= 4; W32(esp, 0x53ce33u); SPILL(); f_4e326a(); if (g_unwind) return; RELOAD();
/* 53ce33: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53ce36: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53ce37: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53ce38: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53ce3f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53ce40: mov esp, ebp */
  esp = ebp;
/* 53ce42: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53ce43: ret  */
  esp += 4; SPILL(); return;
}

void f_53ce44(void) {
  LOAD_REGS();
L_53ce44: /* 53ce44: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 53ce47: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 53ce4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53ce4e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53ce4f: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53ce54u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53ce54: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53ce57: mov eax, 0x53ce33 */
  eax = 0x53ce33u;
/* 53ce5c: ret  */
  esp += 4; SPILL(); return;
}

void f_53ce5d(void) {
  LOAD_REGS();
L_53ce5d: /* 53ce5d: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 53ce60: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53ce65: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 53ce68: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53ce69: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 53ce6c: call 0x554df6 */
  esp -= 4; W32(esp, 0x53ce71u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53ce71(); return;
}

void f_53ce71(void) {
  LOAD_REGS();
L_53ce71: /* 53ce71: push 0x56e05c */
  { uint32_t v = 0x56e05cu; esp -= 4; W32(esp, v); }
/* 53ce76: push 0x5abbcc */
  { uint32_t v = 0x5abbccu; esp -= 4; W32(esp, v); }
/* 53ce7b: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53ce80u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53ce80: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53ce83: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53ce85: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53ce87: call 0x554df6 */
  esp -= 4; W32(esp, 0x53ce8cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53ce8c: guest_badaddr(0x53ce8c); return;
}

void f_53cf40(void) {
  LOAD_REGS();
L_53cf40: /* 53cf40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53cf41: mov ebp, esp */
  ebp = esp;
/* 53cf43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53cf45: push 0x558d90 */
  { uint32_t v = 0x558d90u; esp -= 4; W32(esp, v); }
/* 53cf4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53cf50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53cf51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53cf58: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53cf5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53cf5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53cf5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53cf5e: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 53cf61: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53cf64: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 53cf67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53cf68: mov ecx, 0x6a2920 */
  ecx = 0x6a2920u;
/* 53cf6d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53cf74: call 0x4e17f3 */
  esp -= 4; W32(esp, 0x53cf79u); SPILL(); f_4e17f3(); if (g_unwind) return; RELOAD();
/* 53cf79: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53cf7c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53cf7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53cf7e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53cf85: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53cf86: mov esp, ebp */
  esp = ebp;
/* 53cf88: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53cf89: ret  */
  esp += 4; SPILL(); return;
}

void f_53cf8a(void) {
  LOAD_REGS();
L_53cf8a: /* 53cf8a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 53cf8d: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53cf92: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 53cf95: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53cf96: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 53cf99: call 0x554df6 */
  esp -= 4; W32(esp, 0x53cf9eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53cf9e(); return;
}

void f_53cf9e(void) {
  LOAD_REGS();
L_53cf9e: /* 53cf9e: push 0x56e0d0 */
  { uint32_t v = 0x56e0d0u; esp -= 4; W32(esp, v); }
/* 53cfa3: push 0x5abfc4 */
  { uint32_t v = 0x5abfc4u; esp -= 4; W32(esp, v); }
/* 53cfa8: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53cfadu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53cfad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53cfb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53cfb2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53cfb4: call 0x554df6 */
  esp -= 4; W32(esp, 0x53cfb9u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53cfb9: guest_badaddr(0x53cfb9); return;
}

void f_53cfe0(void) {
  LOAD_REGS();
L_53cfe0: /* 53cfe0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53cfe1: mov ebp, esp */
  ebp = esp;
/* 53cfe3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53cfe5: push 0x558da0 */
  { uint32_t v = 0x558da0u; esp -= 4; W32(esp, v); }
/* 53cfea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53cff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53cff1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53cff8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53cffb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53cffc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53cffd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 53d000: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53d003: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53d004: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53d007: mov edi, ecx */
  edi = ecx;
/* 53d009: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53d010: jne 0x53d085 */
  if (!zf) goto L_53d085;
L_53d012: /* 53d012: mov eax, dword ptr [0x6a2e60] */
  eax = R32((uint32_t)(0x6a2e60u));
/* 53d017: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53d019: je 0x53d04b */
  if (zf) goto L_53d04b;
L_53d01b: /* 53d01b: mov ecx, 0x6a2e5c */
  ecx = 0x6a2e5cu;
/* 53d020: call 0x4e4453 */
  esp -= 4; W32(esp, 0x53d025u); SPILL(); f_4e4453(); if (g_unwind) return; RELOAD();
/* 53d025: mov esi, eax */
  esi = eax;
/* 53d027: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 53d02c: cmp dword ptr [eax + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53d030: je 0x53d085 */
  if (zf) goto L_53d085;
L_53d032: /* 53d032: push 0xd27 */
  { uint32_t v = 0xd27u; esp -= 4; W32(esp, v); }
/* 53d037: push 0x5ac030 */
  { uint32_t v = 0x5ac030u; esp -= 4; W32(esp, v); }
/* 53d03c: push 0x5ac03c */
  { uint32_t v = 0x5ac03cu; esp -= 4; W32(esp, v); }
/* 53d041: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53d046u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53d046: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d049: jmp 0x53d085 */
  goto L_53d085;
L_53d04b: /* 53d04b: mov ecx, dword ptr [0x6a0f08] */
  ecx = R32((uint32_t)(0x6a0f08u));
/* 53d051: mov eax, dword ptr [0x6a0f0c] */
  eax = R32((uint32_t)(0x6a0f0cu));
/* 53d056: mov esi, ecx */
  esi = ecx;
/* 53d058: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 53d059: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53d05b: mov dword ptr [0x6a0f08], ecx */
  W32((uint32_t)(0x6a0f08u), ecx);
/* 53d061: jle 0x53d085 */
  if ((zf || sf != of)) goto L_53d085;
L_53d063: /* 53d063: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 53d066: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 53d067: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 53d06a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53d06c: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 53d06f: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 53d073: mov dword ptr [0x6a0f0c], ecx */
  W32((uint32_t)(0x6a0f0cu), ecx);
/* 53d079: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 53d07b: mov ecx, 0x6a0f04 */
  ecx = 0x6a0f04u;
/* 53d080: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53d085u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_53d085: /* 53d085: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 53d08b: mov dword ptr [edx + esi*4], edi */
  W32((uint32_t)(edx + esi*4), edi);
/* 53d08e: mov ecx, edi */
  ecx = edi;
/* 53d090: mov dword ptr [edi + 4], esi */
  W32((uint32_t)(edi + 0x4u), esi);
/* 53d093: call 0x4e41ab */
  esp -= 4; W32(esp, 0x53d098u); SPILL(); f_4e41ab(); if (g_unwind) return; RELOAD();
/* 53d098: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53d09b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53d09c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53d09d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53d0a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53d0a5: mov esp, ebp */
  esp = ebp;
/* 53d0a7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53d0a8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_53d0ab(void) {
  LOAD_REGS();
L_53d0ab: /* 53d0ab: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53d0ae: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53d0b3: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 53d0b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53d0b7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 53d0ba: call 0x554df6 */
  esp -= 4; W32(esp, 0x53d0bfu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53d0bf(); return;
}

void f_53d0bf(void) {
  LOAD_REGS();
L_53d0bf: /* 53d0bf: push 0x56e10c */
  { uint32_t v = 0x56e10cu; esp -= 4; W32(esp, v); }
/* 53d0c4: push 0x5ac058 */
  { uint32_t v = 0x5ac058u; esp -= 4; W32(esp, v); }
/* 53d0c9: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53d0ceu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53d0ce: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d0d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53d0d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53d0d5: call 0x554df6 */
  esp -= 4; W32(esp, 0x53d0dau); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53d0da: guest_badaddr(0x53d0da); return;
}

void f_53d120(void) {
  LOAD_REGS();
L_53d120: /* 53d120: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53d121: mov ebp, esp */
  ebp = esp;
/* 53d123: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53d125: push 0x558db0 */
  { uint32_t v = 0x558db0u; esp -= 4; W32(esp, v); }
/* 53d12a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53d130: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d131: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53d138: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53d13b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 53d13e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53d13f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53d140: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53d141: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53d144: push 0x6a2920 */
  { uint32_t v = 0x6a2920u; esp -= 4; W32(esp, v); }
/* 53d149: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d14a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53d151: call 0x4e3fbc */
  esp -= 4; W32(esp, 0x53d156u); SPILL(); f_4e3fbc(); if (g_unwind) return; RELOAD();
/* 53d156: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d159: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 53d15c: mov dword ptr [ebp - 0x24], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x6a0f20u);
/* 53d163: mov dword ptr [ebp - 0x20], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xffffffffu);
/* 53d16a: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x53d16fu); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 53d16f: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 53d172: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 53d175: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
/* 53d17b: jmp 0x53d180 */
  goto L_53d180;
L_53d180: /* 53d180: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 53d183: cmp ecx, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53d189: jge 0x53d1ee */
  if ((sf == of)) goto L_53d1ee;
L_53d18b: /* 53d18b: mov eax, dword ptr [esi + ecx*4] */
  eax = R32((uint32_t)(esi + ecx*4));
/* 53d18e: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 53d191: test ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53d193: je 0x53d1b5 */
  if (zf) goto L_53d1b5;
L_53d195: /* 53d195: mov eax, edx */
  eax = edx;
/* 53d197: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 53d199: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53d19b: jne 0x53d1b5 */
  if (!zf) goto L_53d1b5;
L_53d19d: /* 53d19d: mov ecx, dword ptr [esi + ecx*4] */
  ecx = R32((uint32_t)(esi + ecx*4));
/* 53d1a0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 53d1a3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 53d1a6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53d1a8: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 53d1ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d1ac: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x53d1afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53d1af: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
L_53d1b5: /* 53d1b5: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 53d1b8: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x53d1bdu); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 53d1bd: jmp 0x53d180 */
  goto L_53d180;
L_53d1ee: /* 53d1ee: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53d1f1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53d1f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53d1f3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53d1fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53d1fb: mov esp, ebp */
  esp = ebp;
/* 53d1fd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53d1fe: ret  */
  esp += 4; SPILL(); return;
}

void f_53d17d(void) {
  LOAD_REGS();
L_53d17d: /* 53d17d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_53d180: /* 53d180: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 53d183: cmp ecx, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53d189: jge 0x53d1ee */
  if ((sf == of)) goto L_53d1ee;
L_53d18b: /* 53d18b: mov eax, dword ptr [esi + ecx*4] */
  eax = R32((uint32_t)(esi + ecx*4));
/* 53d18e: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 53d191: test ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53d193: je 0x53d1b5 */
  if (zf) goto L_53d1b5;
L_53d195: /* 53d195: mov eax, edx */
  eax = edx;
/* 53d197: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 53d199: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53d19b: jne 0x53d1b5 */
  if (!zf) goto L_53d1b5;
L_53d19d: /* 53d19d: mov ecx, dword ptr [esi + ecx*4] */
  ecx = R32((uint32_t)(esi + ecx*4));
/* 53d1a0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 53d1a3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 53d1a6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53d1a8: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 53d1ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d1ac: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x53d1afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53d1af: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
L_53d1b5: /* 53d1b5: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 53d1b8: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x53d1bdu); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 53d1bd: jmp 0x53d180 */
  goto L_53d180;
L_53d1ee: /* 53d1ee: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53d1f1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53d1f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53d1f3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53d1fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53d1fb: mov esp, ebp */
  esp = ebp;
/* 53d1fd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53d1fe: ret  */
  esp += 4; SPILL(); return;
}

void f_53d1bf(void) {
  LOAD_REGS();
L_53d1bf: /* 53d1bf: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 53d1c2: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53d1c7: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 53d1ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53d1cb: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 53d1ce: call 0x554df6 */
  esp -= 4; W32(esp, 0x53d1d3u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53d1d3(); return;
}

void f_53d1d3(void) {
  LOAD_REGS();
L_53d1d3: /* 53d1d3: push 0x56e13c */
  { uint32_t v = 0x56e13cu; esp -= 4; W32(esp, v); }
/* 53d1d8: push 0x5ac2c4 */
  { uint32_t v = 0x5ac2c4u; esp -= 4; W32(esp, v); }
/* 53d1dd: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53d1e2u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53d1e2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d1e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53d1e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53d1e9: call 0x554df6 */
  esp -= 4; W32(esp, 0x53d1eeu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 53d1ee: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53d1f1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53d1f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53d1f3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53d1fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53d1fb: mov esp, ebp */
  esp = ebp;
/* 53d1fd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53d1fe: ret  */
  esp += 4; SPILL(); return;
}

void f_53d240(void) {
  LOAD_REGS();
L_53d240: /* 53d240: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53d242: push 0x558dc8 */
  { uint32_t v = 0x558dc8u; esp -= 4; W32(esp, v); }
/* 53d247: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53d24d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d24e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53d255: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53d258: mov eax, 1 */
  eax = 0x1u;
/* 53d25d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53d25e: mov esi, ecx */
  esi = ecx;
/* 53d260: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53d261: xor edi, edi */
  edi = 0;
/* 53d263: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 53d266: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 53d269: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 53d26c: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 53d26f: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 53d272: mov dword ptr [esi + 4], 0x7e */
  W32((uint32_t)(esi + 0x4u), 0x7eu);
/* 53d279: mov dword ptr [esi + 8], 0x7d0 */
  W32((uint32_t)(esi + 0x8u), 0x7d0u);
/* 53d280: mov dword ptr [esi + 0x10], edi */
  W32((uint32_t)(esi + 0x10u), edi);
/* 53d283: mov dword ptr [esi + 0x14], edi */
  W32((uint32_t)(esi + 0x14u), edi);
/* 53d286: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* 53d289: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* 53d28c: mov dword ptr [esi + 0x2c], edi */
  W32((uint32_t)(esi + 0x2cu), edi);
/* 53d28f: mov dword ptr [esi + 0x30], edi */
  W32((uint32_t)(esi + 0x30u), edi);
/* 53d292: mov dword ptr [esi + 0x34], edi */
  W32((uint32_t)(esi + 0x34u), edi);
/* 53d295: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* 53d298: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 53d29b: mov dword ptr [esi], 0x56e180 */
  W32((uint32_t)(esi), 0x56e180u);
/* 53d2a1: mov dword ptr [esi + 0x40], edi */
  W32((uint32_t)(esi + 0x40u), edi);
/* 53d2a4: mov dword ptr [0x69f4a0], edi */
  W32((uint32_t)(0x69f4a0u), edi);
/* 53d2aa: mov dword ptr [esp + 8], 0x6a0f20 */
  W32((uint32_t)(esp + 0x8u), 0x6a0f20u);
/* 53d2b2: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
L_53d2b6: /* 53d2b6: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 53d2ba: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x53d2bfu); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 53d2bf: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 53d2c3: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53d2c9: jge 0x53d2da */
  if ((sf == of)) goto L_53d2da;
L_53d2cb: /* 53d2cb: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 53d2d1: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 53d2d4: or dword ptr [eax + 0x1c], 0x42 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(0x42u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x1cu), r);
  }
/* 53d2d8: jmp 0x53d2b6 */
  goto L_53d2b6;
L_53d2da: /* 53d2da: xor ecx, ecx */
  ecx = 0;
/* 53d2dc: mov edx, 2 */
  edx = 0x2u;
L_53d2e1: /* 53d2e1: cmp ecx, dword ptr [0x69a75c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x69a75cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53d2e7: jge 0x53d2fb */
  if ((sf == of)) goto L_53d2fb;
L_53d2e9: /* 53d2e9: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 53d2ee: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 53d2f1: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53d2f3: je 0x53d2f8 */
  if (zf) goto L_53d2f8;
L_53d2f5: /* 53d2f5: or dword ptr [eax + 4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x4u), r);
  }
L_53d2f8: /* 53d2f8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 53d2f9: jmp 0x53d2e1 */
  goto L_53d2e1;
L_53d2fb: /* 53d2fb: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 53d2ff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53d300: mov eax, esi */
  eax = esi;
/* 53d302: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53d303: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53d30a: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d30d: ret  */
  esp += 4; SPILL(); return;
}

void f_53d350(void) {
  LOAD_REGS();
L_53d350: /* 53d350: mov eax, ecx */
  eax = ecx;
/* 53d352: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 53d356: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53d358: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 53d35e: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 53d361: and dword ptr [edx + 4], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x4u))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(edx + 0x4u), r);
  }
/* 53d365: ret 4 */
  esp += 8; SPILL(); return;
}

void f_53d380(void) {
  LOAD_REGS();
L_53d380: /* 53d380: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53d381: mov esi, ecx */
  esi = ecx;
/* 53d383: call 0x4e400c */
  esp -= 4; W32(esp, 0x53d388u); SPILL(); f_4e400c(); if (g_unwind) return; RELOAD();
/* 53d388: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53d38d: je 0x53d39b */
  if (zf) goto L_53d39b;
L_53d38f: /* 53d38f: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 53d395: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 53d397: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53d398: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x53d39bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_53d39b: /* 53d39b: mov eax, esi */
  eax = esi;
/* 53d39d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53d39e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_53d3c0(void) {
  LOAD_REGS();
L_53d3c0: /* 53d3c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53d3c1: mov ebp, esp */
  ebp = esp;
/* 53d3c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53d3c5: push 0x558de0 */
  { uint32_t v = 0x558de0u; esp -= 4; W32(esp, v); }
/* 53d3ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53d3d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d3d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53d3d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53d3db: mov edx, dword ptr [0x69f4a0] */
  edx = R32((uint32_t)(0x69f4a0u));
/* 53d3e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53d3e2: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 53d3e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53d3e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53d3e7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53d3ea: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 53d3ec: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 53d3ef: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 53d3f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53d3f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d3f2: mov esi, ecx */
  esi = ecx;
/* 53d3f4: mov dword ptr [0x69f4a0], edx */
  W32((uint32_t)(0x69f4a0u), edx);
/* 53d3fa: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x53d3ffu); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 53d3ff: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 53d402: xor edi, edi */
  edi = 0;
/* 53d404: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d407: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53d409: je 0x53d416 */
  if (zf) goto L_53d416;
L_53d40b: /* 53d40b: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 53d40e: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53d411: je 0x53d441 */
  if (zf) goto L_53d441;
L_53d413: /* 53d413: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
L_53d416: /* 53d416: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 53d418: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 53d41b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53d41c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53d41d: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 53d424: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x53d429u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 53d429: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53d42c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d42f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53d430: mov eax, esi */
  eax = esi;
/* 53d432: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53d433: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53d43a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53d43b: mov esp, ebp */
  esp = ebp;
/* 53d43d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53d43e: ret 4 */
  esp += 8; SPILL(); return;
L_53d441: /* 53d441: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53d443: je 0x53d416 */
  if (zf) goto L_53d416;
L_53d445: /* 53d445: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 53d448: and dword ptr [eax + 0x1c], 0xbffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(0xbffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x1cu), r);
  }
/* 53d44f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 53d452: test byte ptr [ecx + 0x1c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53d456: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 53d459: je 0x53d493 */
  if (zf) goto L_53d493;
L_53d45b: /* 53d45b: mov edi, dword ptr [esi + 0x40] */
  edi = R32((uint32_t)(esi + 0x40u));
/* 53d45e: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* 53d461: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53d463: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53d464: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x53d467u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53d467: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 53d46a: test dword ptr [ecx + 0x1c], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1cu))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53d471: jne 0x53d48e */
  if (!zf) goto L_53d48e;
L_53d473: /* 53d473: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53d475: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53d47au); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53d47a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d47b: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 53d480: push 0x5ad2f0 */
  { uint32_t v = 0x5ad2f0u; esp -= 4; W32(esp, v); }
/* 53d485: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d486: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53d48bu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53d48b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53d48e: /* 53d48e: mov dword ptr [esi + 0x40], edi */
  W32((uint32_t)(esi + 0x40u), edi);
/* 53d491: jmp 0x53d416 */
  goto L_53d416;
L_53d493: /* 53d493: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 53d496: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53d498: je 0x53d4a7 */
  if (zf) goto L_53d4a7;
L_53d49a: /* 53d49a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53d49b: mov ecx, eax */
  ecx = eax;
/* 53d49d: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53d4a2u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53d4a2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 53d4a5: mov edi, eax */
  edi = eax;
L_53d4a7: /* 53d4a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53d4a9: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53d4aeu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53d4ae: mov ecx, dword ptr [0x5a0c98] */
  ecx = R32((uint32_t)(0x5a0c98u));
/* 53d4b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53d4b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d4b6: push 0x5ad2b8 */
  { uint32_t v = 0x5ad2b8u; esp -= 4; W32(esp, v); }
/* 53d4bb: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 53d4c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53d4c1: call 0x4e30df */
  esp -= 4; W32(esp, 0x53d4c6u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 53d4c6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d4c9: jmp 0x53d416 */
  goto L_53d416;
}

void f_53d4ce(void) {
  LOAD_REGS();
L_53d4ce: /* 53d4ce: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53d4d1: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53d4d6: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 53d4d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d4da: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 53d4dd: call 0x554df6 */
  esp -= 4; W32(esp, 0x53d4e2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53d4e2(); return;
}

void f_53d4e2(void) {
  LOAD_REGS();
L_53d4e2: /* 53d4e2: push 0x56e1ec */
  { uint32_t v = 0x56e1ecu; esp -= 4; W32(esp, v); }
/* 53d4e7: push 0x5a376c */
  { uint32_t v = 0x5a376cu; esp -= 4; W32(esp, v); }
/* 53d4ec: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53d4f1u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53d4f1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 53d4f4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d4f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53d4f9: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53d4feu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53d4fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d4ff: push 0x5ad2ac */
  { uint32_t v = 0x5ad2acu; esp -= 4; W32(esp, v); }
/* 53d504: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53d509u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53d509: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d50c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53d50e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53d510: call 0x554df6 */
  esp -= 4; W32(esp, 0x53d515u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53d515: guest_badaddr(0x53d515); return;
}

void f_53d580(void) {
  LOAD_REGS();
L_53d580: /* 53d580: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53d581: mov ebp, esp */
  ebp = esp;
/* 53d583: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53d585: push 0x558df0 */
  { uint32_t v = 0x558df0u; esp -= 4; W32(esp, v); }
/* 53d58a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53d590: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d591: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53d598: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53d59b: mov eax, dword ptr [0x5b318c] */
  eax = R32((uint32_t)(0x5b318cu));
/* 53d5a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53d5a1: xor ebx, ebx */
  ebx = 0;
/* 53d5a3: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53d5a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53d5a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53d5a7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53d5aa: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 53d5ad: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 53d5b0: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 53d5b3: je 0x53d5de */
  if (zf) goto L_53d5de;
L_53d5b5: /* 53d5b5: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 53d5ba: push 0x5ac2cc */
  { uint32_t v = 0x5ac2ccu; esp -= 4; W32(esp, v); }
/* 53d5bf: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 53d5c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d5c5: call 0x4e30df */
  esp -= 4; W32(esp, 0x53d5cau); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 53d5ca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d5cd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53d5d0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53d5d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53d5d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53d5d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53d5da: mov esp, ebp */
  esp = ebp;
/* 53d5dc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53d5dd: ret  */
  esp += 4; SPILL(); return;
L_53d5de: /* 53d5de: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 53d5e4: push 0x5ac2f4 */
  { uint32_t v = 0x5ac2f4u; esp -= 4; W32(esp, v); }
/* 53d5e9: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 53d5ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53d5ef: call 0x4e30df */
  esp -= 4; W32(esp, 0x53d5f4u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 53d5f4: mov edi, 1 */
  edi = 0x1u;
/* 53d5f9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d5fc: mov dword ptr [0x5b2140], edi */
  W32((uint32_t)(0x5b2140u), edi);
/* 53d602: xor esi, esi */
  esi = 0;
L_53d604: /* 53d604: cmp esi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53d60a: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 53d60d: jge 0x53d701 */
  if ((sf == of)) goto L_53d701;
L_53d613: /* 53d613: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 53d619: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 53d61c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 53d61f: xor eax, eax */
  eax = 0;
/* 53d621: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53d623: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 53d626: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 53d62a: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53d62c: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53d62e: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 53d631: je 0x53d67b */
  if (zf) goto L_53d67b;
L_53d633: /* 53d633: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 53d636: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53d638: je 0x53d67b */
  if (zf) goto L_53d67b;
L_53d63a: /* 53d63a: test eax, 0x4000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53d63f: je 0x53d649 */
  if (zf) goto L_53d649;
L_53d641: /* 53d641: cmp dword ptr [0x5b3194], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x5b3194u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53d647: je 0x53d67b */
  if (zf) goto L_53d67b;
L_53d649: /* 53d649: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53d64a: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53d64fu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53d64f: mov ecx, dword ptr [0x5a0c98] */
  ecx = R32((uint32_t)(0x5a0c98u));
/* 53d655: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d656: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53d657: push 0x5ac318 */
  { uint32_t v = 0x5ac318u; esp -= 4; W32(esp, v); }
/* 53d65c: push 0x30a */
  { uint32_t v = 0x30au; esp -= 4; W32(esp, v); }
/* 53d661: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53d662: call 0x4e30df */
  esp -= 4; W32(esp, 0x53d667u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 53d667: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 53d66d: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 53d670: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d673: call 0x4e2559 */
  esp -= 4; W32(esp, 0x53d678u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 53d678: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
L_53d67b: /* 53d67b: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 53d67e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 53d67f: jmp 0x53d604 */
  goto L_53d604;
L_53d701: /* 53d701: xor esi, esi */
  esi = 0;
/* 53d703: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 53d706: mov bl, 6 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x6u) & 0xffu);
/* 53d708: mov edi, 5 */
  edi = 0x5u;
L_53d70d: /* 53d70d: cmp esi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53d713: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 53d716: jge 0x53d7d8 */
  if ((sf == of)) goto L_53d7d8;
L_53d71c: /* 53d71c: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 53d722: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 53d725: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53d727: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 53d72a: je 0x53d747 */
  if (zf) goto L_53d747;
L_53d72c: /* 53d72c: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 53d72f: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53d731: je 0x53d747 */
  if (zf) goto L_53d747;
L_53d733: /* 53d733: test eax, 0x4000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53d738: jne 0x53d747 */
  if (!zf) goto L_53d747;
L_53d73a: /* 53d73a: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 53d73d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53d73f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 53d741: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 53d744: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x53d747u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_53d747: /* 53d747: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 53d74a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 53d74b: jmp 0x53d70d */
  goto L_53d70d;
L_53d7d8: /* 53d7d8: xor esi, esi */
  esi = 0;
/* 53d7da: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 53d7dd: mov dword ptr [0x5b2140], esi */
  W32((uint32_t)(0x5b2140u), esi);
/* 53d7e3: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
L_53d7e7: /* 53d7e7: cmp esi, dword ptr [0x69a75c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x69a75cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53d7ed: jge 0x53d864 */
  if ((sf == of)) goto L_53d864;
L_53d7ef: /* 53d7ef: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53d7f5: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 53d7f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53d7fa: je 0x53d832 */
  if (zf) goto L_53d832;
L_53d7fc: /* 53d7fc: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 53d7ff: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53d802: je 0x53d832 */
  if (zf) goto L_53d832;
L_53d804: /* 53d804: test ecx, 0x4000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53d80a: jne 0x53d832 */
  if (!zf) goto L_53d832;
L_53d80c: /* 53d80c: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53d80f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d810: mov eax, dword ptr [0x5a0c98] */
  eax = R32((uint32_t)(0x5a0c98u));
/* 53d815: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53d816: push 0x5ac3a4 */
  { uint32_t v = 0x5ac3a4u; esp -= 4; W32(esp, v); }
/* 53d81b: push 0x30a */
  { uint32_t v = 0x30au; esp -= 4; W32(esp, v); }
/* 53d820: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d821: call 0x4e30df */
  esp -= 4; W32(esp, 0x53d826u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 53d826: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d829: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53d82a: call 0x4e2b58 */
  esp -= 4; W32(esp, 0x53d82fu); SPILL(); f_4e2b58(); if (g_unwind) return; RELOAD();
/* 53d82f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53d832: /* 53d832: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 53d833: jmp 0x53d7e7 */
  goto L_53d7e7;
L_53d864: /* 53d864: mov eax, dword ptr [0x69f4a0] */
  eax = R32((uint32_t)(0x69f4a0u));
/* 53d869: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53d86c: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 53d872: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d873: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 53d876: mov ecx, eax */
  ecx = eax;
/* 53d878: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 53d87a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53d87b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d87c: push 0x5ac3e8 */
  { uint32_t v = 0x5ac3e8u; esp -= 4; W32(esp, v); }
/* 53d881: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53d882: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53d889: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53d88eu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53d88e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53d891: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d894: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53d895: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53d896: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53d89d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53d89e: mov esp, ebp */
  esp = ebp;
/* 53d8a0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53d8a1: ret  */
  esp += 4; SPILL(); return;
}

void f_53d681(void) {
  LOAD_REGS();
L_53d681: /* 53d681: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 53d684: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53d689: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 53d68c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53d68d: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 53d690: call 0x554df6 */
  esp -= 4; W32(esp, 0x53d695u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53d695(); return;
}

void f_53d695(void) {
  LOAD_REGS();
L_53d695: /* 53d695: push 0x56e2b4 */
  { uint32_t v = 0x56e2b4u; esp -= 4; W32(esp, v); }
/* 53d69a: push 0x5ac358 */
  { uint32_t v = 0x5ac358u; esp -= 4; W32(esp, v); }
/* 53d69f: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53d6a4u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53d6a4: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 53d6aa: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 53d6ad: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 53d6b0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d6b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53d6b5: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53d6bau); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53d6ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d6bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53d6bc: push 0x5ac360 */
  { uint32_t v = 0x5ac360u; esp -= 4; W32(esp, v); }
/* 53d6c1: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53d6c6u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53d6c6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d6c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53d6cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53d6cd: call 0x554df6 */
  esp -= 4; W32(esp, 0x53d6d2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53d6d2(); return;
}

void f_53d6d2(void) {
  LOAD_REGS();
L_53d6d2: /* 53d6d2: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 53d6d5: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53d6da: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 53d6dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53d6de: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 53d6e1: call 0x554df6 */
  esp -= 4; W32(esp, 0x53d6e6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53d6e6(); return;
}

void f_53d6e6(void) {
  LOAD_REGS();
L_53d6e6: /* 53d6e6: push 0x56e28c */
  { uint32_t v = 0x56e28cu; esp -= 4; W32(esp, v); }
/* 53d6eb: push 0x5ac374 */
  { uint32_t v = 0x5ac374u; esp -= 4; W32(esp, v); }
/* 53d6f0: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53d6f5u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53d6f5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d6f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53d6fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53d6fc: call 0x554df6 */
  esp -= 4; W32(esp, 0x53d701u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 53d701: xor esi, esi */
  esi = 0;
/* 53d703: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 53d706: mov bl, 6 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x6u) & 0xffu);
/* 53d708: mov edi, 5 */
  edi = 0x5u;
L_53d70d: /* 53d70d: cmp esi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53d713: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 53d716: jge 0x53d7d8 */
  if ((sf == of)) goto L_53d7d8;
L_53d71c: /* 53d71c: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 53d722: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 53d725: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53d727: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 53d72a: je 0x53d747 */
  if (zf) goto L_53d747;
L_53d72c: /* 53d72c: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 53d72f: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53d731: je 0x53d747 */
  if (zf) goto L_53d747;
L_53d733: /* 53d733: test eax, 0x4000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53d738: jne 0x53d747 */
  if (!zf) goto L_53d747;
L_53d73a: /* 53d73a: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 53d73d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53d73f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 53d741: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 53d744: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x53d747u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_53d747: /* 53d747: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 53d74a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 53d74b: jmp 0x53d70d */
  goto L_53d70d;
L_53d7d8: /* 53d7d8: xor esi, esi */
  esi = 0;
/* 53d7da: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 53d7dd: mov dword ptr [0x5b2140], esi */
  W32((uint32_t)(0x5b2140u), esi);
/* 53d7e3: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
L_53d7e7: /* 53d7e7: cmp esi, dword ptr [0x69a75c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x69a75cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53d7ed: jge 0x53d864 */
  if ((sf == of)) goto L_53d864;
L_53d7ef: /* 53d7ef: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53d7f5: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 53d7f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53d7fa: je 0x53d832 */
  if (zf) goto L_53d832;
L_53d7fc: /* 53d7fc: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 53d7ff: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53d802: je 0x53d832 */
  if (zf) goto L_53d832;
L_53d804: /* 53d804: test ecx, 0x4000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53d80a: jne 0x53d832 */
  if (!zf) goto L_53d832;
L_53d80c: /* 53d80c: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53d80f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d810: mov eax, dword ptr [0x5a0c98] */
  eax = R32((uint32_t)(0x5a0c98u));
/* 53d815: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53d816: push 0x5ac3a4 */
  { uint32_t v = 0x5ac3a4u; esp -= 4; W32(esp, v); }
/* 53d81b: push 0x30a */
  { uint32_t v = 0x30au; esp -= 4; W32(esp, v); }
/* 53d820: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d821: call 0x4e30df */
  esp -= 4; W32(esp, 0x53d826u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 53d826: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d829: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53d82a: call 0x4e2b58 */
  esp -= 4; W32(esp, 0x53d82fu); SPILL(); f_4e2b58(); if (g_unwind) return; RELOAD();
/* 53d82f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53d832: /* 53d832: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 53d833: jmp 0x53d7e7 */
  goto L_53d7e7;
L_53d864: /* 53d864: mov eax, dword ptr [0x69f4a0] */
  eax = R32((uint32_t)(0x69f4a0u));
/* 53d869: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53d86c: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 53d872: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d873: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 53d876: mov ecx, eax */
  ecx = eax;
/* 53d878: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 53d87a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53d87b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d87c: push 0x5ac3e8 */
  { uint32_t v = 0x5ac3e8u; esp -= 4; W32(esp, v); }
/* 53d881: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53d882: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53d889: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53d88eu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53d88e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53d891: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d894: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53d895: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53d896: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53d89d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53d89e: mov esp, ebp */
  esp = ebp;
/* 53d8a0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53d8a1: ret  */
  esp += 4; SPILL(); return;
}

void f_53d74d(void) {
  LOAD_REGS();
L_53d74d: /* 53d74d: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 53d750: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53d755: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 53d758: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53d759: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 53d75c: call 0x554df6 */
  esp -= 4; W32(esp, 0x53d761u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53d761(); return;
}

void f_53d761(void) {
  LOAD_REGS();
L_53d761: /* 53d761: push 0x56e26c */
  { uint32_t v = 0x56e26cu; esp -= 4; W32(esp, v); }
/* 53d766: push 0x5ac37c */
  { uint32_t v = 0x5ac37cu; esp -= 4; W32(esp, v); }
/* 53d76b: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53d770u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53d770: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 53d773: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d776: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53d777: push 0x5ac384 */
  { uint32_t v = 0x5ac384u; esp -= 4; W32(esp, v); }
/* 53d77c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53d781u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53d781: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d784: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53d786: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53d788: call 0x554df6 */
  esp -= 4; W32(esp, 0x53d78du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53d78d(); return;
}

void f_53d78d(void) {
  LOAD_REGS();
L_53d78d: /* 53d78d: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 53d790: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53d795: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 53d798: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53d799: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 53d79c: call 0x554df6 */
  esp -= 4; W32(esp, 0x53d7a1u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53d7a1(); return;
}

void f_53d7a1(void) {
  LOAD_REGS();
L_53d7a1: /* 53d7a1: push 0x56e248 */
  { uint32_t v = 0x56e248u; esp -= 4; W32(esp, v); }
/* 53d7a6: push 0x5ac390 */
  { uint32_t v = 0x5ac390u; esp -= 4; W32(esp, v); }
/* 53d7ab: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53d7b0u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53d7b0: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 53d7b3: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 53d7b8: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 53d7bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d7be: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53d7c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53d7c2: push 0x5ac398 */
  { uint32_t v = 0x5ac398u; esp -= 4; W32(esp, v); }
/* 53d7c7: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53d7ccu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53d7cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d7cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53d7d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53d7d3: call 0x554df6 */
  esp -= 4; W32(esp, 0x53d7d8u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 53d7d8: xor esi, esi */
  esi = 0;
/* 53d7da: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 53d7dd: mov dword ptr [0x5b2140], esi */
  W32((uint32_t)(0x5b2140u), esi);
/* 53d7e3: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
L_53d7e7: /* 53d7e7: cmp esi, dword ptr [0x69a75c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x69a75cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53d7ed: jge 0x53d864 */
  if ((sf == of)) goto L_53d864;
L_53d7ef: /* 53d7ef: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53d7f5: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 53d7f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53d7fa: je 0x53d832 */
  if (zf) goto L_53d832;
L_53d7fc: /* 53d7fc: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 53d7ff: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53d802: je 0x53d832 */
  if (zf) goto L_53d832;
L_53d804: /* 53d804: test ecx, 0x4000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53d80a: jne 0x53d832 */
  if (!zf) goto L_53d832;
L_53d80c: /* 53d80c: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53d80f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d810: mov eax, dword ptr [0x5a0c98] */
  eax = R32((uint32_t)(0x5a0c98u));
/* 53d815: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53d816: push 0x5ac3a4 */
  { uint32_t v = 0x5ac3a4u; esp -= 4; W32(esp, v); }
/* 53d81b: push 0x30a */
  { uint32_t v = 0x30au; esp -= 4; W32(esp, v); }
/* 53d820: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d821: call 0x4e30df */
  esp -= 4; W32(esp, 0x53d826u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 53d826: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d829: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53d82a: call 0x4e2b58 */
  esp -= 4; W32(esp, 0x53d82fu); SPILL(); f_4e2b58(); if (g_unwind) return; RELOAD();
/* 53d82f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53d832: /* 53d832: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 53d833: jmp 0x53d7e7 */
  goto L_53d7e7;
L_53d864: /* 53d864: mov eax, dword ptr [0x69f4a0] */
  eax = R32((uint32_t)(0x69f4a0u));
/* 53d869: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53d86c: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 53d872: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d873: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 53d876: mov ecx, eax */
  ecx = eax;
/* 53d878: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 53d87a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53d87b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d87c: push 0x5ac3e8 */
  { uint32_t v = 0x5ac3e8u; esp -= 4; W32(esp, v); }
/* 53d881: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53d882: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53d889: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53d88eu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53d88e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53d891: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d894: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53d895: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53d896: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53d89d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53d89e: mov esp, ebp */
  esp = ebp;
/* 53d8a0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53d8a1: ret  */
  esp += 4; SPILL(); return;
}

void f_53d835(void) {
  LOAD_REGS();
L_53d835: /* 53d835: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 53d838: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53d83d: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 53d840: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53d841: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 53d844: call 0x554df6 */
  esp -= 4; W32(esp, 0x53d849u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53d849(); return;
}

void f_53d849(void) {
  LOAD_REGS();
L_53d849: /* 53d849: push 0x56e238 */
  { uint32_t v = 0x56e238u; esp -= 4; W32(esp, v); }
/* 53d84e: push 0x5ac3e0 */
  { uint32_t v = 0x5ac3e0u; esp -= 4; W32(esp, v); }
/* 53d853: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53d858u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53d858: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d85b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53d85d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53d85f: call 0x554df6 */
  esp -= 4; W32(esp, 0x53d864u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 53d864: mov eax, dword ptr [0x69f4a0] */
  eax = R32((uint32_t)(0x69f4a0u));
/* 53d869: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53d86c: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 53d872: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d873: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 53d876: mov ecx, eax */
  ecx = eax;
/* 53d878: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 53d87a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53d87b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d87c: push 0x5ac3e8 */
  { uint32_t v = 0x5ac3e8u; esp -= 4; W32(esp, v); }
/* 53d881: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53d882: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53d889: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53d88eu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53d88e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53d891: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d894: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53d895: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53d896: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53d89d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53d89e: mov esp, ebp */
  esp = ebp;
/* 53d8a0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53d8a1: ret  */
  esp += 4; SPILL(); return;
}

void f_53d8a2(void) {
  LOAD_REGS();
L_53d8a2: /* 53d8a2: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 53d8a5: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53d8aa: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 53d8ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53d8ae: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 53d8b1: call 0x554df6 */
  esp -= 4; W32(esp, 0x53d8b6u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53d8b6(); return;
}

void f_53d8b6(void) {
  LOAD_REGS();
L_53d8b6: /* 53d8b6: push 0x56e204 */
  { uint32_t v = 0x56e204u; esp -= 4; W32(esp, v); }
/* 53d8bb: push 0x5ac430 */
  { uint32_t v = 0x5ac430u; esp -= 4; W32(esp, v); }
/* 53d8c0: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53d8c5u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53d8c5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53d8c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53d8ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53d8cc: call 0x554df6 */
  esp -= 4; W32(esp, 0x53d8d1u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53d8d1: guest_badaddr(0x53d8d1); return;
}

void f_53d9c0(void) {
  LOAD_REGS();
L_53d9c0: /* 53d9c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53d9c1: mov ebp, esp */
  ebp = esp;
/* 53d9c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53d9c5: push 0x558e08 */
  { uint32_t v = 0x558e08u; esp -= 4; W32(esp, v); }
/* 53d9ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53d9d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d9d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53d9d8: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53d9db: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 53d9e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53d9e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53d9e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53d9e3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53d9e6: push 0x5ac438 */
  { uint32_t v = 0x5ac438u; esp -= 4; W32(esp, v); }
/* 53d9eb: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 53d9f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53d9f1: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53d9f8: call 0x4e30df */
  esp -= 4; W32(esp, 0x53d9fdu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 53d9fd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53da00: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 53da03: call 0x4e2379 */
  esp -= 4; W32(esp, 0x53da08u); SPILL(); f_4e2379(); if (g_unwind) return; RELOAD();
/* 53da08: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 53da0b: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 53da0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53da0e: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* 53da11: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53da12: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 53da16: call 0x4e18e3 */
  esp -= 4; W32(esp, 0x53da1bu); SPILL(); f_4e18e3(); if (g_unwind) return; RELOAD();
/* 53da1b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53da1e: call 0x4e3db4 */
  esp -= 4; W32(esp, 0x53da23u); SPILL(); f_4e3db4(); if (g_unwind) return; RELOAD();
/* 53da23: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53da26: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53da27: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53da28: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53da2f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53da30: mov esp, ebp */
  esp = ebp;
/* 53da32: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53da33: ret  */
  esp += 4; SPILL(); return;
}

void f_53da34(void) {
  LOAD_REGS();
L_53da34: /* 53da34: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53da37: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53da3c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 53da3f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53da40: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 53da43: call 0x554df6 */
  esp -= 4; W32(esp, 0x53da48u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53da48(); return;
}

void f_53da48(void) {
  LOAD_REGS();
L_53da48: /* 53da48: push 0x56e2dc */
  { uint32_t v = 0x56e2dcu; esp -= 4; W32(esp, v); }
/* 53da4d: push 0x5ac460 */
  { uint32_t v = 0x5ac460u; esp -= 4; W32(esp, v); }
/* 53da52: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53da57u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53da57: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53da5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53da5c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53da5e: call 0x554df6 */
  esp -= 4; W32(esp, 0x53da63u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53da63: guest_badaddr(0x53da63); return;
}

void f_53daa0(void) {
  LOAD_REGS();
L_53daa0: /* 53daa0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53daa1: mov ebp, esp */
  ebp = esp;
/* 53daa3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53daa5: push 0x558e28 */
  { uint32_t v = 0x558e28u; esp -= 4; W32(esp, v); }
/* 53daaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53dab0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53dab1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53dab8: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53dabb: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 53dabe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53dac0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53dac1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53dac2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53dac3: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 53dac6: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 53dac8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53dacb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53dad2: je 0x53dada */
  if (zf) goto L_53dada;
L_53dad4: /* 53dad4: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
L_53dada: /* 53dada: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 53dadd: call 0x4e2379 */
  esp -= 4; W32(esp, 0x53dae2u); SPILL(); f_4e2379(); if (g_unwind) return; RELOAD();
/* 53dae2: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 53dae5: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 53dae8: and ecx, 0xffffffbf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffbfu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 53daeb: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 53daed: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 53daf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53daf1: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 53daf4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53daf5: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 53daf9: call 0x4e18e3 */
  esp -= 4; W32(esp, 0x53dafeu); SPILL(); f_4e18e3(); if (g_unwind) return; RELOAD();
/* 53dafe: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53db01: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* 53db03: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 53db06: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53db09: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 53db0b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53db0c: not eax */
  eax = ~eax;
/* 53db0e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53db0f: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 53db12: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53db19: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53db1a: mov esp, ebp */
  esp = ebp;
/* 53db1c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53db1d: ret  */
  esp += 4; SPILL(); return;
}

void f_53db1e(void) {
  LOAD_REGS();
L_53db1e: /* 53db1e: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53db21: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53db26: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 53db29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53db2a: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 53db2d: call 0x554df6 */
  esp -= 4; W32(esp, 0x53db32u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53db32(); return;
}

void f_53db32(void) {
  LOAD_REGS();
L_53db32: /* 53db32: push 0x56e318 */
  { uint32_t v = 0x56e318u; esp -= 4; W32(esp, v); }
/* 53db37: push 0x5ac468 */
  { uint32_t v = 0x5ac468u; esp -= 4; W32(esp, v); }
/* 53db3c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53db41u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53db41: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53db44: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53db46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53db48: call 0x554df6 */
  esp -= 4; W32(esp, 0x53db4du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53db4d: guest_badaddr(0x53db4d); return;
}

void f_53db80(void) {
  LOAD_REGS();
L_53db80: /* 53db80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53db81: mov ebp, esp */
  ebp = esp;
/* 53db83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53db85: push 0x558e40 */
  { uint32_t v = 0x558e40u; esp -= 4; W32(esp, v); }
/* 53db8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53db90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53db91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53db98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53db9b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 53db9e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 53dba0: test dword ptr [ecx + 0x1c], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1cu))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53dba7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53dba8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53dba9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53dbaa: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53dbad: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53dbb4: jne 0x53dc15 */
  if (!zf) goto L_53dc15;
L_53dbb6: /* 53dbb6: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 53dbb9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 53dbbc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53dbbd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53dbbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53dbbf: call 0x4e3fb7 */
  esp -= 4; W32(esp, 0x53dbc4u); SPILL(); f_4e3fb7(); if (g_unwind) return; RELOAD();
/* 53dbc4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53dbc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53dbc9: jne 0x53dc15 */
  if (!zf) goto L_53dc15;
L_53dbcb: /* 53dbcb: call 0x4e3db4 */
  esp -= 4; W32(esp, 0x53dbd0u); SPILL(); f_4e3db4(); if (g_unwind) return; RELOAD();
/* 53dbd0: mov eax, 1 */
  eax = 0x1u;
/* 53dbd5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53dbd8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53dbdf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53dbe0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53dbe1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53dbe2: mov esp, ebp */
  esp = ebp;
/* 53dbe4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53dbe5: ret  */
  esp += 4; SPILL(); return;
L_53dc15: /* 53dc15: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53dc18: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53dc19: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53dc1a: xor eax, eax */
  eax = 0;
/* 53dc1c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53dc23: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53dc24: mov esp, ebp */
  esp = ebp;
/* 53dc26: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53dc27: ret  */
  esp += 4; SPILL(); return;
}

void f_53dbe6(void) {
  LOAD_REGS();
L_53dbe6: /* 53dbe6: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53dbe9: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53dbee: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 53dbf1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53dbf2: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 53dbf5: call 0x554df6 */
  esp -= 4; W32(esp, 0x53dbfau); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53dbfa(); return;
}

void f_53dbfa(void) {
  LOAD_REGS();
L_53dbfa: /* 53dbfa: push 0x56e344 */
  { uint32_t v = 0x56e344u; esp -= 4; W32(esp, v); }
/* 53dbff: push 0x5ac470 */
  { uint32_t v = 0x5ac470u; esp -= 4; W32(esp, v); }
/* 53dc04: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53dc09u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53dc09: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53dc0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53dc0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53dc10: call 0x554df6 */
  esp -= 4; W32(esp, 0x53dc15u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 53dc15: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53dc18: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53dc19: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53dc1a: xor eax, eax */
  eax = 0;
/* 53dc1c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53dc23: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53dc24: mov esp, ebp */
  esp = ebp;
/* 53dc26: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53dc27: ret  */
  esp += 4; SPILL(); return;
}

void f_53dc60(void) {
  LOAD_REGS();
L_53dc60: /* 53dc60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53dc61: mov ebp, esp */
  ebp = esp;
/* 53dc63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53dc65: push 0x558e80 */
  { uint32_t v = 0x558e80u; esp -= 4; W32(esp, v); }
/* 53dc6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53dc70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53dc71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53dc78: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53dc7b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 53dc7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53dc7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53dc80: xor ebx, ebx */
  ebx = 0;
/* 53dc82: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53dc84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53dc85: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53dc88: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 53dc8b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 53dc8e: je 0x53dde7 */
  if (zf) goto L_53dde7;
L_53dc94: /* 53dc94: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 53dc97: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53dc99: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 53dc9c: je 0x53dca6 */
  if (zf) goto L_53dca6;
L_53dc9e: /* 53dc9e: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 53dca1: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 53dca4: jmp 0x53dca9 */
  goto L_53dca9;
L_53dca6: /* 53dca6: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
L_53dca9: /* 53dca9: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 53dcac: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53dcb1u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53dcb1: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 53dcb4: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53dcb6: je 0x53dde7 */
  if (zf) goto L_53dde7;
L_53dcbc: /* 53dcbc: cmp dword ptr [esi + 0x18], 0x6a0f20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x6a0f20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53dcc3: je 0x53ddad */
  if (zf) goto L_53ddad;
L_53dcc9: /* 53dcc9: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 53dccc: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 53dccf: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 53dcd2: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 53dcd5: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53dcdb: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 53dcde: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53dce1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53dce2: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 53dce5: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 53dce9: call 0x4e13de */
  esp -= 4; W32(esp, 0x53dceeu); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 53dcee: push 0x5ac478 */
  { uint32_t v = 0x5ac478u; esp -= 4; W32(esp, v); }
/* 53dcf3: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 53dcf6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53dcf7: mov ecx, eax */
  ecx = eax;
/* 53dcf9: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 53dcfd: call 0x4e2149 */
  esp -= 4; W32(esp, 0x53dd02u); SPILL(); f_4e2149(); if (g_unwind) return; RELOAD();
/* 53dd02: cmp dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53dd05: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 53dd09: je 0x53dd0f */
  if (zf) goto L_53dd0f;
L_53dd0b: /* 53dd0b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 53dd0d: jmp 0x53dd14 */
  goto L_53dd14;
L_53dd0f: /* 53dd0f: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_53dd14: /* 53dd14: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 53dd17: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53dd18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53dd19: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 53dd1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53dd1d: call 0x4e1a5a */
  esp -= 4; W32(esp, 0x53dd22u); SPILL(); f_4e1a5a(); if (g_unwind) return; RELOAD();
/* 53dd22: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53dd25: mov edi, eax */
  edi = eax;
/* 53dd27: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53dd29: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 53dd2c: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 53dd30: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 53dd33: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 53dd36: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53dd3bu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53dd3b: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 53dd3e: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 53dd42: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53dd47u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53dd47: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53dd49: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 53dd4c: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 53dd50: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 53dd53: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 53dd56: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53dd5bu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53dd5b: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 53dd5e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 53dd62: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53dd67u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53dd67: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53dd69: je 0x53dd8e */
  if (zf) goto L_53dd8e;
L_53dd6b: /* 53dd6b: cmp dword ptr [ebp - 0x2c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53dd6e: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 53dd71: jne 0x53dd78 */
  if (!zf) goto L_53dd78;
L_53dd73: /* 53dd73: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_53dd78: /* 53dd78: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 53dd7b: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 53dd7e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 53dd80: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 53dd82: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53dd84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53dd85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53dd86: mov ecx, esi */
  ecx = esi;
/* 53dd88: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x53dd8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_53dd8e: /* 53dd8e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53dd90: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 53dd93: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 53dd97: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 53dd9a: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 53dd9d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53dda2u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53dda2: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 53dda5: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 53dda8: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53ddadu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
L_53ddad: /* 53ddad: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 53ddb0: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 53ddb3: jmp 0x53dca9 */
  goto L_53dca9;
L_53dde7: /* 53dde7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53ddea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53ddeb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53ddec: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53ddf3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53ddf4: mov esp, ebp */
  esp = ebp;
/* 53ddf6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53ddf7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_53ddb8(void) {
  LOAD_REGS();
L_53ddb8: /* 53ddb8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 53ddbb: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53ddc0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 53ddc3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53ddc4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 53ddc7: call 0x554df6 */
  esp -= 4; W32(esp, 0x53ddccu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53ddcc(); return;
}

void f_53ddcc(void) {
  LOAD_REGS();
L_53ddcc: /* 53ddcc: push 0x56e37c */
  { uint32_t v = 0x56e37cu; esp -= 4; W32(esp, v); }
/* 53ddd1: push 0x5ac47c */
  { uint32_t v = 0x5ac47cu; esp -= 4; W32(esp, v); }
/* 53ddd6: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53dddbu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53dddb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53ddde: xor ebx, ebx */
  ebx = 0;
/* 53dde0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53dde1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53dde2: call 0x554df6 */
  esp -= 4; W32(esp, 0x53dde7u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 53dde7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53ddea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53ddeb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53ddec: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53ddf3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53ddf4: mov esp, ebp */
  esp = ebp;
/* 53ddf6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53ddf7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_53de70(void) {
  LOAD_REGS();
L_53de70: /* 53de70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53de71: mov ebp, esp */
  ebp = esp;
/* 53de73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53de75: push 0x558ea0 */
  { uint32_t v = 0x558ea0u; esp -= 4; W32(esp, v); }
/* 53de7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53de80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53de81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53de88: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53de8b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 53de8e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53de8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53de90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53de91: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53de94: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 53de97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53de98: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53de9b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53dea2: call 0x4e180c */
  esp -= 4; W32(esp, 0x53dea7u); SPILL(); f_4e180c(); if (g_unwind) return; RELOAD();
/* 53dea7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53deaa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53deab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53deac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53deb3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53deb4: mov esp, ebp */
  esp = ebp;
/* 53deb6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53deb7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_53deba(void) {
  LOAD_REGS();
L_53deba: /* 53deba: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 53debd: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53dec2: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 53dec5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53dec6: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 53dec9: call 0x554df6 */
  esp -= 4; W32(esp, 0x53deceu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53dece(); return;
}

void f_53dece(void) {
  LOAD_REGS();
L_53dece: /* 53dece: push 0x56e3a4 */
  { uint32_t v = 0x56e3a4u; esp -= 4; W32(esp, v); }
/* 53ded3: push 0x5ac684 */
  { uint32_t v = 0x5ac684u; esp -= 4; W32(esp, v); }
/* 53ded8: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53deddu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53dedd: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53dee0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53dee3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53dee5: add ecx, -0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffd8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53dee8: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53deedu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53deed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53deee: push 0x5ac68c */
  { uint32_t v = 0x5ac68cu; esp -= 4; W32(esp, v); }
/* 53def3: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53def8u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53def8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53defb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53defd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53deff: call 0x554df6 */
  esp -= 4; W32(esp, 0x53df04u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53df04: guest_badaddr(0x53df04); return;
}

void f_53df40(void) {
  LOAD_REGS();
L_53df40: /* 53df40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53df41: mov ebp, esp */
  ebp = esp;
/* 53df43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53df45: push 0x558eb0 */
  { uint32_t v = 0x558eb0u; esp -= 4; W32(esp, v); }
/* 53df4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53df50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53df51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53df58: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53df5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53df5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53df5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53df5e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 53df61: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53df64: mov esi, ecx */
  esi = ecx;
/* 53df66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53df67: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 53df6a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53df71: call 0x4e1519 */
  esp -= 4; W32(esp, 0x53df76u); SPILL(); f_4e1519(); if (g_unwind) return; RELOAD();
/* 53df76: lea eax, [esi + 0x2c] */
  eax = (uint32_t)(esi + 0x2cu);
/* 53df79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53df7a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53df7b: call 0x4e4160 */
  esp -= 4; W32(esp, 0x53df80u); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 53df80: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53df83: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 53df86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53df87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53df88: call 0x4e4160 */
  esp -= 4; W32(esp, 0x53df8du); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 53df8d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53df90: add esi, 0x34 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 53df93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53df94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53df95: call 0x4e1451 */
  esp -= 4; W32(esp, 0x53df9au); SPILL(); f_4e1451(); if (g_unwind) return; RELOAD();
/* 53df9a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53df9d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53dfa0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53dfa1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53dfa2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53dfa9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53dfaa: mov esp, ebp */
  esp = ebp;
/* 53dfac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53dfad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_53dfb0(void) {
  LOAD_REGS();
L_53dfb0: /* 53dfb0: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 53dfb3: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53dfb8: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 53dfbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53dfbc: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 53dfbf: call 0x554df6 */
  esp -= 4; W32(esp, 0x53dfc4u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53dfc4(); return;
}

void f_53dfc4(void) {
  LOAD_REGS();
L_53dfc4: /* 53dfc4: push 0x56e3dc */
  { uint32_t v = 0x56e3dcu; esp -= 4; W32(esp, v); }
/* 53dfc9: push 0x5ac698 */
  { uint32_t v = 0x5ac698u; esp -= 4; W32(esp, v); }
/* 53dfce: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53dfd3u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53dfd3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53dfd6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53dfd9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53dfdb: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53dfe0u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53dfe0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53dfe1: push 0x5ac6a0 */
  { uint32_t v = 0x5ac6a0u; esp -= 4; W32(esp, v); }
/* 53dfe6: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53dfebu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53dfeb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53dfee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53dff0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53dff2: call 0x554df6 */
  esp -= 4; W32(esp, 0x53dff7u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53dff7: guest_badaddr(0x53dff7); return;
}

void f_53e030(void) {
  LOAD_REGS();
L_53e030: /* 53e030: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53e031: mov ebp, esp */
  ebp = esp;
/* 53e033: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53e035: push 0x558ec0 */
  { uint32_t v = 0x558ec0u; esp -= 4; W32(esp, v); }
/* 53e03a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53e040: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53e041: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53e048: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53e04b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53e04c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53e04d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53e04e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 53e051: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53e054: mov esi, ecx */
  esi = ecx;
/* 53e056: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53e057: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 53e05a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53e061: call 0x4e1de3 */
  esp -= 4; W32(esp, 0x53e066u); SPILL(); f_4e1de3(); if (g_unwind) return; RELOAD();
/* 53e066: add esi, 0x34 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 53e069: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53e06a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53e06b: call 0x4e17da */
  esp -= 4; W32(esp, 0x53e070u); SPILL(); f_4e17da(); if (g_unwind) return; RELOAD();
/* 53e070: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53e073: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53e076: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53e077: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53e078: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53e07f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53e080: mov esp, ebp */
  esp = ebp;
/* 53e082: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53e083: ret 4 */
  esp += 8; SPILL(); return;
}

void f_53e086(void) {
  LOAD_REGS();
L_53e086: /* 53e086: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 53e089: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53e08e: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 53e091: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53e092: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 53e095: call 0x554df6 */
  esp -= 4; W32(esp, 0x53e09au); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53e09a(); return;
}

void f_53e09a(void) {
  LOAD_REGS();
L_53e09a: /* 53e09a: push 0x56e414 */
  { uint32_t v = 0x56e414u; esp -= 4; W32(esp, v); }
/* 53e09f: push 0x5ac6c4 */
  { uint32_t v = 0x5ac6c4u; esp -= 4; W32(esp, v); }
/* 53e0a4: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53e0a9u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53e0a9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53e0ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53e0af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53e0b1: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53e0b6u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53e0b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53e0b7: push 0x5ac6cc */
  { uint32_t v = 0x5ac6ccu; esp -= 4; W32(esp, v); }
/* 53e0bc: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53e0c1u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53e0c1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53e0c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53e0c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53e0c8: call 0x554df6 */
  esp -= 4; W32(esp, 0x53e0cdu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53e0cd: guest_badaddr(0x53e0cd); return;
}

void f_53e100(void) {
  LOAD_REGS();
L_53e100: /* 53e100: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53e102: push 0x558ee0 */
  { uint32_t v = 0x558ee0u; esp -= 4; W32(esp, v); }
/* 53e107: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53e10d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53e10e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53e115: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53e118: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53e119: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53e11a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53e11b: xor edi, edi */
  edi = 0;
/* 53e11d: mov ebx, ecx */
  ebx = ecx;
/* 53e11f: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 53e123: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 53e127: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 53e12b: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 53e12f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 53e132: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 53e135: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 53e138: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 53e139: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 53e13c: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 53e140: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53e141: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53e142: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 53e146: call dword ptr [edx*4 + 0x5f1d90] */
  { uint32_t t = R32((uint32_t)(edx*4 + 0x5f1d90u)); esp -= 4; W32(esp, 0x53e14du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53e14d: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 53e150: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 53e151: mov eax, edx */
  eax = edx;
/* 53e153: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 53e156: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 53e159: jne 0x53e16a */
  if (!zf) goto L_53e16a;
L_53e15b: /* 53e15b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 53e15e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53e15f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 53e160: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53e161: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 53e164: call dword ptr [0x5f1e98] */
  { uint32_t t = R32((uint32_t)(0x5f1e98u)); esp -= 4; W32(esp, 0x53e16au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_53e16a: /* 53e16a: cmp dword ptr [esp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53e16e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 53e172: jne 0x53e179 */
  if (!zf) goto L_53e179;
L_53e174: /* 53e174: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_53e179: /* 53e179: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 53e17b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53e17c: mov ecx, ebx */
  ecx = ebx;
/* 53e17e: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x53e181u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53e181: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 53e185: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 53e187: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53e189: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 53e18d: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* 53e195: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 53e199: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 53e19d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53e1a2u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53e1a2: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 53e1a6: mov dword ptr [esp + 0x20], 0xffffffff */
  W32((uint32_t)(esp + 0x20u), 0xffffffffu);
/* 53e1ae: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53e1b3u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53e1b3: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 53e1b7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53e1b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53e1b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53e1ba: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53e1c1: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53e1c4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_53e210(void) {
  LOAD_REGS();
L_53e210: /* 53e210: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53e211: mov ebp, esp */
  ebp = esp;
/* 53e213: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53e215: push 0x558ef0 */
  { uint32_t v = 0x558ef0u; esp -= 4; W32(esp, v); }
/* 53e21a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53e220: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53e221: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53e228: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53e22b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 53e22e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53e22f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53e230: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53e231: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53e234: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53e235: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53e23c: call 0x4e1519 */
  esp -= 4; W32(esp, 0x53e241u); SPILL(); f_4e1519(); if (g_unwind) return; RELOAD();
/* 53e241: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53e244: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53e245: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53e246: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53e24d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53e24e: mov esp, ebp */
  esp = ebp;
/* 53e250: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53e251: ret 4 */
  esp += 8; SPILL(); return;
}

void f_53e254(void) {
  LOAD_REGS();
L_53e254: /* 53e254: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53e257: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53e25c: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 53e25f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53e260: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 53e263: call 0x554df6 */
  esp -= 4; W32(esp, 0x53e268u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53e268(); return;
}

void f_53e268(void) {
  LOAD_REGS();
L_53e268: /* 53e268: push 0x56e43c */
  { uint32_t v = 0x56e43cu; esp -= 4; W32(esp, v); }
/* 53e26d: push 0x5ac798 */
  { uint32_t v = 0x5ac798u; esp -= 4; W32(esp, v); }
/* 53e272: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53e277u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53e277: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53e27a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53e27c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53e27e: call 0x554df6 */
  esp -= 4; W32(esp, 0x53e283u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53e283: guest_badaddr(0x53e283); return;
}

void f_53e2b0(void) {
  LOAD_REGS();
L_53e2b0: /* 53e2b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53e2b1: mov ebp, esp */
  ebp = esp;
/* 53e2b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53e2b5: push 0x558f00 */
  { uint32_t v = 0x558f00u; esp -= 4; W32(esp, v); }
/* 53e2ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53e2c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53e2c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53e2c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53e2cb: mov eax, dword ptr [ecx + 0x60] */
  eax = R32((uint32_t)(ecx + 0x60u));
/* 53e2ce: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 53e2d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53e2d2: or eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 53e2d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53e2d6: lea esi, [ecx + 0x54] */
  esi = (uint32_t)(ecx + 0x54u);
/* 53e2d9: mov dword ptr [ecx + 0x28], 0x6a1eb8 */
  W32((uint32_t)(ecx + 0x28u), 0x6a1eb8u);
/* 53e2e0: mov dword ptr [ecx + 0x60], eax */
  W32((uint32_t)(ecx + 0x60u), eax);
/* 53e2e3: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 53e2e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53e2e7: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 53e2ea: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 53e2ed: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53e2ef: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53e2f2: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53e2f9: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 53e2fc: jle 0x53e31a */
  if ((zf || sf != of)) goto L_53e31a;
L_53e2fe: /* 53e2fe: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 53e301: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 53e302: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 53e305: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53e307: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 53e30a: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 53e30e: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 53e311: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 53e313: mov ecx, esi */
  ecx = esi;
/* 53e315: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53e31au); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_53e31a: /* 53e31a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 53e31c: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 53e31f: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 53e322: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53e324: je 0x53e330 */
  if (zf) goto L_53e330;
L_53e326: /* 53e326: push 0x5ac87c */
  { uint32_t v = 0x5ac87cu; esp -= 4; W32(esp, v); }
/* 53e32b: call 0x4e13de */
  esp -= 4; W32(esp, 0x53e330u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
L_53e330: /* 53e330: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53e333: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53e334: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53e335: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53e33c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53e33d: mov esp, ebp */
  esp = ebp;
/* 53e33f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53e340: ret  */
  esp += 4; SPILL(); return;
}

void f_53e341(void) {
  LOAD_REGS();
L_53e341: /* 53e341: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53e344: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53e349: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 53e34c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53e34d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 53e350: call 0x554df6 */
  esp -= 4; W32(esp, 0x53e355u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53e355(); return;
}

void f_53e355(void) {
  LOAD_REGS();
L_53e355: /* 53e355: push 0x56e470 */
  { uint32_t v = 0x56e470u; esp -= 4; W32(esp, v); }
/* 53e35a: push 0x5ac89c */
  { uint32_t v = 0x5ac89cu; esp -= 4; W32(esp, v); }
/* 53e35f: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53e364u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53e364: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53e367: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53e369: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53e36b: call 0x554df6 */
  esp -= 4; W32(esp, 0x53e370u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53e370: guest_badaddr(0x53e370); return;
}

void f_53e3c0(void) {
  LOAD_REGS();
L_53e3c0: /* 53e3c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53e3c1: mov ebp, esp */
  ebp = esp;
/* 53e3c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53e3c5: push 0x558f10 */
  { uint32_t v = 0x558f10u; esp -= 4; W32(esp, v); }
/* 53e3ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53e3d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53e3d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53e3d8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53e3db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53e3dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53e3dd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 53e3e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53e3e1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53e3e4: push 0x5a9f70 */
  { uint32_t v = 0x5a9f70u; esp -= 4; W32(esp, v); }
/* 53e3e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53e3ea: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53e3f1: call 0x4e26df */
  esp -= 4; W32(esp, 0x53e3f6u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 53e3f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53e3f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53e3fb: je 0x53e519 */
  if (zf) goto L_53e519;
L_53e401: /* 53e401: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53e402: push 0x5a9f70 */
  { uint32_t v = 0x5a9f70u; esp -= 4; W32(esp, v); }
/* 53e407: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x53e40cu); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 53e40c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53e40f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53e411: push 0x5ac8dc */
  { uint32_t v = 0x5ac8dcu; esp -= 4; W32(esp, v); }
/* 53e416: push 0x5ac8e8 */
  { uint32_t v = 0x5ac8e8u; esp -= 4; W32(esp, v); }
/* 53e41b: call 0x4e1064 */
  esp -= 4; W32(esp, 0x53e420u); SPILL(); f_4e1064(); if (g_unwind) return; RELOAD();
/* 53e420: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53e423: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53e424: push 0x5a0ea8 */
  { uint32_t v = 0x5a0ea8u; esp -= 4; W32(esp, v); }
/* 53e429: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x53e42eu); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 53e42e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53e431: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53e433: push 0x5ac8f4 */
  { uint32_t v = 0x5ac8f4u; esp -= 4; W32(esp, v); }
/* 53e438: push 0x5ac900 */
  { uint32_t v = 0x5ac900u; esp -= 4; W32(esp, v); }
/* 53e43d: call 0x4e1064 */
  esp -= 4; W32(esp, 0x53e442u); SPILL(); f_4e1064(); if (g_unwind) return; RELOAD();
/* 53e442: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53e445: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53e446: push 0x5a0da8 */
  { uint32_t v = 0x5a0da8u; esp -= 4; W32(esp, v); }
/* 53e44b: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x53e450u); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 53e450: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53e453: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53e455: push 0x5ac90c */
  { uint32_t v = 0x5ac90cu; esp -= 4; W32(esp, v); }
/* 53e45a: push 0x5ac918 */
  { uint32_t v = 0x5ac918u; esp -= 4; W32(esp, v); }
/* 53e45f: call 0x4e1064 */
  esp -= 4; W32(esp, 0x53e464u); SPILL(); f_4e1064(); if (g_unwind) return; RELOAD();
/* 53e464: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53e467: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53e468: push 0x5a0e28 */
  { uint32_t v = 0x5a0e28u; esp -= 4; W32(esp, v); }
/* 53e46d: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x53e472u); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 53e472: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53e475: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53e477: push 0x5ac924 */
  { uint32_t v = 0x5ac924u; esp -= 4; W32(esp, v); }
/* 53e47c: push 0x5ac930 */
  { uint32_t v = 0x5ac930u; esp -= 4; W32(esp, v); }
/* 53e481: call 0x4e1064 */
  esp -= 4; W32(esp, 0x53e486u); SPILL(); f_4e1064(); if (g_unwind) return; RELOAD();
/* 53e486: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53e489: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53e48a: push 0x5a0ca8 */
  { uint32_t v = 0x5a0ca8u; esp -= 4; W32(esp, v); }
/* 53e48f: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x53e494u); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 53e494: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53e497: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53e499: push 0x5ac938 */
  { uint32_t v = 0x5ac938u; esp -= 4; W32(esp, v); }
/* 53e49e: push 0x5ac944 */
  { uint32_t v = 0x5ac944u; esp -= 4; W32(esp, v); }
/* 53e4a3: call 0x4e1064 */
  esp -= 4; W32(esp, 0x53e4a8u); SPILL(); f_4e1064(); if (g_unwind) return; RELOAD();
/* 53e4a8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53e4ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53e4ac: push 0x5a0d28 */
  { uint32_t v = 0x5a0d28u; esp -= 4; W32(esp, v); }
/* 53e4b1: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x53e4b6u); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 53e4b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53e4b9: mov dword ptr [ebp - 0x20], 0x6a0f20 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x6a0f20u);
/* 53e4c0: mov dword ptr [ebp - 0x1c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xffffffffu);
L_53e4c7: /* 53e4c7: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 53e4ca: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x53e4cfu); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 53e4cf: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 53e4d2: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53e4d8: jge 0x53e519 */
  if ((sf == of)) goto L_53e519;
L_53e4da: /* 53e4da: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 53e4e0: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 53e4e3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53e4e5: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0x53e4e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53e4e8: jmp 0x53e4c7 */
  goto L_53e4c7;
L_53e519: /* 53e519: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53e51c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53e51d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53e51e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53e525: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53e526: mov esp, ebp */
  esp = ebp;
/* 53e528: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53e529: ret  */
  esp += 4; SPILL(); return;
}

void f_53e4ea(void) {
  LOAD_REGS();
L_53e4ea: /* 53e4ea: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53e4ed: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53e4f2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 53e4f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53e4f6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 53e4f9: call 0x554df6 */
  esp -= 4; W32(esp, 0x53e4feu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53e4fe(); return;
}

void f_53e4fe(void) {
  LOAD_REGS();
L_53e4fe: /* 53e4fe: push 0x56e4cc */
  { uint32_t v = 0x56e4ccu; esp -= 4; W32(esp, v); }
/* 53e503: push 0x5ac94c */
  { uint32_t v = 0x5ac94cu; esp -= 4; W32(esp, v); }
/* 53e508: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53e50du); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53e50d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53e510: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53e512: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53e514: call 0x554df6 */
  esp -= 4; W32(esp, 0x53e519u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 53e519: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53e51c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53e51d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53e51e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53e525: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53e526: mov esp, ebp */
  esp = ebp;
/* 53e528: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53e529: ret  */
  esp += 4; SPILL(); return;
}

void f_53e590(void) {
  LOAD_REGS();
L_53e590: /* 53e590: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53e591: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53e592: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53e593: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 53e597: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 53e59a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53e59c: mov ebp, ecx */
  ebp = ecx;
/* 53e59e: je 0x53e5a4 */
  if (zf) goto L_53e5a4;
L_53e5a0: /* 53e5a0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 53e5a2: jmp 0x53e5a9 */
  goto L_53e5a9;
L_53e5a4: /* 53e5a4: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_53e5a9: /* 53e5a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53e5aa: call 0x4e1d2a */
  esp -= 4; W32(esp, 0x53e5afu); SPILL(); f_4e1d2a(); if (g_unwind) return; RELOAD();
/* 53e5af: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 53e5b2: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 53e5b5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53e5b8: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 53e5b9: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 53e5bb: mov esi, dword ptr [edx + eax*4] */
  esi = R32((uint32_t)(edx + eax*4));
/* 53e5be: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53e5c1: je 0x53e661 */
  if (zf) goto L_53e661;
L_53e5c7: /* 53e5c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53e5c8: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 53e5cc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_53e5d0: /* 53e5d0: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 53e5d3: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 53e5d6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53e5d8: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 53e5db: lea eax, [esi + eax + 4] */
  eax = (uint32_t)(esi + eax + 0x4u);
/* 53e5df: je 0x53e5e5 */
  if (zf) goto L_53e5e5;
L_53e5e1: /* 53e5e1: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 53e5e3: jmp 0x53e5ea */
  goto L_53e5ea;
L_53e5e5: /* 53e5e5: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_53e5ea: /* 53e5ea: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 53e5ed: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53e5ef: je 0x53e5f5 */
  if (zf) goto L_53e5f5;
L_53e5f1: /* 53e5f1: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 53e5f3: jmp 0x53e5fa */
  goto L_53e5fa;
L_53e5f5: /* 53e5f5: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_53e5fa: /* 53e5fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53e5fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53e5fc: call 0x4e26df */
  esp -= 4; W32(esp, 0x53e601u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 53e601: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53e604: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53e606: jne 0x53e651 */
  if (!zf) goto L_53e651;
L_53e608: /* 53e608: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* 53e60b: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 53e60e: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 53e611: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53e613: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 53e616: jle 0x53e634 */
  if ((zf || sf != of)) goto L_53e634;
L_53e618: /* 53e618: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 53e61b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 53e61c: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 53e61f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53e621: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 53e624: lea ecx, [eax + ecx + 0x20] */
  ecx = (uint32_t)(eax + ecx + 0x20u);
/* 53e628: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 53e62b: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 53e62d: mov ecx, ebx */
  ecx = ebx;
/* 53e62f: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53e634u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_53e634: /* 53e634: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 53e636: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 53e639: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 53e63c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53e63e: je 0x53e64d */
  if (zf) goto L_53e64d;
L_53e640: /* 53e640: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 53e643: lea eax, [esi + edx + 0x10] */
  eax = (uint32_t)(esi + edx + 0x10u);
/* 53e647: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53e648: call 0x4e3fc1 */
  esp -= 4; W32(esp, 0x53e64du); SPILL(); f_4e3fc1(); if (g_unwind) return; RELOAD();
L_53e64d: /* 53e64d: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
L_53e651: /* 53e651: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 53e654: mov esi, dword ptr [esi + ecx] */
  esi = R32((uint32_t)(esi + ecx));
/* 53e657: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53e65a: jne 0x53e5d0 */
  if (!zf) goto L_53e5d0;
L_53e660: /* 53e660: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_53e661: /* 53e661: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53e662: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53e663: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53e664: ret 8 */
  esp += 12; SPILL(); return;
}

void f_53e6b0(void) {
  LOAD_REGS();
L_53e6b0: /* 53e6b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53e6b1: mov esi, ecx */
  esi = ecx;
/* 53e6b3: mov dword ptr [esi], 0x6a0f20 */
  W32((uint32_t)(esi), 0x6a0f20u);
/* 53e6b9: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* 53e6c0: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x53e6c5u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 53e6c5: mov eax, esi */
  eax = esi;
/* 53e6c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53e6c8: ret  */
  esp += 4; SPILL(); return;
}

void f_53e6e0(void) {
  LOAD_REGS();
L_53e6e0: /* 53e6e0: jmp 0x4e33f0 */
  SPILL(); f_4e33f0(); return;
}

void f_53e700(void) {
  LOAD_REGS();
L_53e700: /* 53e700: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53e702: push 0x558f28 */
  { uint32_t v = 0x558f28u; esp -= 4; W32(esp, v); }
/* 53e707: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53e70d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53e70e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53e715: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53e716: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53e717: mov esi, ecx */
  esi = ecx;
/* 53e719: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53e71a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 53e71e: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 53e721: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 53e723: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 53e72b: jge 0x53e744 */
  if ((sf == of)) goto L_53e744;
L_53e72d: /* 53e72d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 53e732: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 53e737: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 53e73c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53e741u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53e741: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53e744: /* 53e744: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53e747: jle 0x53e760 */
  if ((zf || sf != of)) goto L_53e760;
L_53e749: /* 53e749: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 53e74e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 53e753: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 53e758: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53e75du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53e75d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53e760: /* 53e760: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 53e762: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53e763: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53e765: mov ecx, esi */
  ecx = esi;
/* 53e767: call 0x4e438b */
  esp -= 4; W32(esp, 0x53e76cu); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 53e76c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 53e76e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53e770: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 53e778: je 0x53e786 */
  if (zf) goto L_53e786;
L_53e77a: /* 53e77a: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 53e780: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53e782: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53e783: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x53e786u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_53e786: /* 53e786: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 53e78a: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 53e790: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 53e797: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 53e79e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53e79f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53e7a0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53e7a7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53e7aa: ret  */
  esp += 4; SPILL(); return;
}

void f_53e7e0(void) {
  LOAD_REGS();
L_53e7e0: /* 53e7e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53e7e2: push 0x558f48 */
  { uint32_t v = 0x558f48u; esp -= 4; W32(esp, v); }
/* 53e7e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53e7ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53e7ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53e7f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53e7f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53e7f7: mov esi, ecx */
  esi = ecx;
/* 53e7f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53e7fa: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 53e7fe: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 53e801: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 53e803: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 53e80b: jge 0x53e824 */
  if ((sf == of)) goto L_53e824;
L_53e80d: /* 53e80d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 53e812: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 53e817: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 53e81c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53e821u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53e821: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53e824: /* 53e824: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53e827: jle 0x53e840 */
  if ((zf || sf != of)) goto L_53e840;
L_53e829: /* 53e829: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 53e82e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 53e833: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 53e838: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53e83du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53e83d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53e840: /* 53e840: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 53e842: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53e843: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53e845: mov ecx, esi */
  ecx = esi;
/* 53e847: call 0x4e438b */
  esp -= 4; W32(esp, 0x53e84cu); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 53e84c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 53e84e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53e850: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 53e858: je 0x53e866 */
  if (zf) goto L_53e866;
L_53e85a: /* 53e85a: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 53e860: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53e862: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53e863: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x53e866u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_53e866: /* 53e866: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 53e86a: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 53e870: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 53e877: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 53e87e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53e87f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53e880: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53e887: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53e88a: ret  */
  esp += 4; SPILL(); return;
}

void f_53e8c0(void) {
  LOAD_REGS();
L_53e8c0: /* 53e8c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53e8c1: mov esi, ecx */
  esi = ecx;
/* 53e8c3: mov dword ptr [esi], 0x5ef388 */
  W32((uint32_t)(esi), 0x5ef388u);
/* 53e8c9: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* 53e8d0: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x53e8d5u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 53e8d5: mov eax, esi */
  eax = esi;
/* 53e8d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53e8d8: ret  */
  esp += 4; SPILL(); return;
}

void f_53e8f0(void) {
  LOAD_REGS();
L_53e8f0: /* 53e8f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53e8f1: mov esi, ecx */
  esi = ecx;
/* 53e8f3: call 0x4e3ad5 */
  esp -= 4; W32(esp, 0x53e8f8u); SPILL(); f_4e3ad5(); if (g_unwind) return; RELOAD();
/* 53e8f8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53e8fd: je 0x53e90b */
  if (zf) goto L_53e90b;
L_53e8ff: /* 53e8ff: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 53e905: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 53e907: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53e908: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x53e90bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_53e90b: /* 53e90b: mov eax, esi */
  eax = esi;
/* 53e90d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53e90e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_53e930(void) {
  LOAD_REGS();
L_53e930: /* 53e930: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53e931: mov esi, ecx */
  esi = ecx;
/* 53e933: call 0x4e3d00 */
  esp -= 4; W32(esp, 0x53e938u); SPILL(); f_4e3d00(); if (g_unwind) return; RELOAD();
/* 53e938: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53e93d: je 0x53e94b */
  if (zf) goto L_53e94b;
L_53e93f: /* 53e93f: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 53e945: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 53e947: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53e948: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x53e94bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_53e94b: /* 53e94b: mov eax, esi */
  eax = esi;
/* 53e94d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53e94e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_53e970(void) {
  LOAD_REGS();
L_53e970: /* 53e970: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53e971: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 53e975: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 53e977: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53e978: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53e979: mov ebp, ecx */
  ebp = ecx;
/* 53e97b: jge 0x53e994 */
  if ((sf == of)) goto L_53e994;
L_53e97d: /* 53e97d: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 53e982: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 53e987: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 53e98c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53e991u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53e991: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53e994: /* 53e994: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53e997: jle 0x53e9b0 */
  if ((zf || sf != of)) goto L_53e9b0;
L_53e999: /* 53e999: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 53e99e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 53e9a3: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 53e9a8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53e9adu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53e9ad: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53e9b0: /* 53e9b0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 53e9b4: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 53e9b7: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53e9ba: jle 0x53e9d3 */
  if ((zf || sf != of)) goto L_53e9d3;
L_53e9bc: /* 53e9bc: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 53e9c1: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 53e9c6: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 53e9cb: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53e9d0u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53e9d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53e9d3: /* 53e9d3: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53e9d5: jge 0x53e9f1 */
  if ((sf == of)) goto L_53e9f1;
L_53e9d7: /* 53e9d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53e9d8: mov esi, ebx */
  esi = ebx;
/* 53e9da: imul esi, esi, 0x2c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x2cu);
  esi = (uint32_t)r;
  }
/* 53e9dd: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 53e9df: nop  */
L_53e9e0: /* 53e9e0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 53e9e3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53e9e5: call 0x4e3ad5 */
  esp -= 4; W32(esp, 0x53e9eau); SPILL(); f_4e3ad5(); if (g_unwind) return; RELOAD();
/* 53e9ea: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 53e9ed: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 53e9ee: jne 0x53e9e0 */
  if (!zf) goto L_53e9e0;
L_53e9f0: /* 53e9f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_53e9f1: /* 53e9f1: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 53e9f5: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 53e9f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53e9f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53e9f9: mov ecx, ebp */
  ecx = ebp;
/* 53e9fb: call 0x4e438b */
  esp -= 4; W32(esp, 0x53ea00u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 53ea00: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53ea01: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53ea02: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53ea03: ret 8 */
  esp += 12; SPILL(); return;
}

void f_53ea40(void) {
  LOAD_REGS();
L_53ea40: /* 53ea40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53ea41: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 53ea45: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 53ea47: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53ea48: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53ea49: mov ebp, ecx */
  ebp = ecx;
/* 53ea4b: jge 0x53ea64 */
  if ((sf == of)) goto L_53ea64;
L_53ea4d: /* 53ea4d: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 53ea52: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 53ea57: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 53ea5c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53ea61u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53ea61: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53ea64: /* 53ea64: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53ea67: jle 0x53ea80 */
  if ((zf || sf != of)) goto L_53ea80;
L_53ea69: /* 53ea69: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 53ea6e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 53ea73: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 53ea78: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53ea7du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53ea7d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53ea80: /* 53ea80: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 53ea84: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 53ea87: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53ea8a: jle 0x53eaa3 */
  if ((zf || sf != of)) goto L_53eaa3;
L_53ea8c: /* 53ea8c: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 53ea91: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 53ea96: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 53ea9b: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53eaa0u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53eaa0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53eaa3: /* 53eaa3: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53eaa5: jge 0x53eac1 */
  if ((sf == of)) goto L_53eac1;
L_53eaa7: /* 53eaa7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53eaa8: mov esi, ebx */
  esi = ebx;
/* 53eaaa: imul esi, esi, 0x3c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x3cu);
  esi = (uint32_t)r;
  }
/* 53eaad: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 53eaaf: nop  */
L_53eab0: /* 53eab0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 53eab3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53eab5: call 0x4e3d00 */
  esp -= 4; W32(esp, 0x53eabau); SPILL(); f_4e3d00(); if (g_unwind) return; RELOAD();
/* 53eaba: add esi, 0x3c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 53eabd: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 53eabe: jne 0x53eab0 */
  if (!zf) goto L_53eab0;
L_53eac0: /* 53eac0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_53eac1: /* 53eac1: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 53eac5: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 53eac7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53eac8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53eac9: mov ecx, ebp */
  ecx = ebp;
/* 53eacb: call 0x4e438b */
  esp -= 4; W32(esp, 0x53ead0u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 53ead0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53ead1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53ead2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53ead3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_53eb10(void) {
  LOAD_REGS();
L_53eb10: /* 53eb10: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 53eb13: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 53eb17: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53eb1a: jle 0x53eb37 */
  if ((zf || sf != of)) goto L_53eb37;
L_53eb1c: /* 53eb1c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_53eb20: /* 53eb20: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 53eb23: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 53eb24: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 53eb26: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 53eb28: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 53eb2b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 53eb2e: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 53eb32: cmp dword ptr [ecx + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53eb35: jg 0x53eb20 */
  if ((!zf && sf == of)) goto L_53eb20;
L_53eb37: /* 53eb37: jmp 0x4e2112 */
  SPILL(); f_4e2112(); return;
}

void f_53eb50(void) {
  LOAD_REGS();
L_53eb50: /* 53eb50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53eb52: push 0x558f68 */
  { uint32_t v = 0x558f68u; esp -= 4; W32(esp, v); }
/* 53eb57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53eb5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53eb5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53eb65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53eb66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53eb67: mov esi, ecx */
  esi = ecx;
/* 53eb69: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53eb6a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 53eb6e: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 53eb71: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 53eb73: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 53eb7b: jge 0x53eb94 */
  if ((sf == of)) goto L_53eb94;
L_53eb7d: /* 53eb7d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 53eb82: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 53eb87: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 53eb8c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53eb91u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53eb91: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53eb94: /* 53eb94: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53eb97: jle 0x53ebb0 */
  if ((zf || sf != of)) goto L_53ebb0;
L_53eb99: /* 53eb99: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 53eb9e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 53eba3: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 53eba8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53ebadu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53ebad: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53ebb0: /* 53ebb0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 53ebb2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53ebb3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53ebb5: mov ecx, esi */
  ecx = esi;
/* 53ebb7: call 0x4e438b */
  esp -= 4; W32(esp, 0x53ebbcu); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 53ebbc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 53ebbe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ebc0: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 53ebc8: je 0x53ebd6 */
  if (zf) goto L_53ebd6;
L_53ebca: /* 53ebca: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 53ebd0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53ebd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53ebd3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x53ebd6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_53ebd6: /* 53ebd6: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 53ebda: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 53ebe0: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 53ebe7: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 53ebee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53ebef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53ebf0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53ebf7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53ebfa: ret  */
  esp += 4; SPILL(); return;
}

void f_53ec30(void) {
  LOAD_REGS();
L_53ec30: /* 53ec30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53ec32: push 0x558f88 */
  { uint32_t v = 0x558f88u; esp -= 4; W32(esp, v); }
/* 53ec37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53ec3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53ec3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53ec45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53ec46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53ec47: mov esi, ecx */
  esi = ecx;
/* 53ec49: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53ec4a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 53ec4e: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 53ec51: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 53ec53: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 53ec5b: jge 0x53ec74 */
  if ((sf == of)) goto L_53ec74;
L_53ec5d: /* 53ec5d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 53ec62: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 53ec67: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 53ec6c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53ec71u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53ec71: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53ec74: /* 53ec74: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53ec77: jle 0x53ec90 */
  if ((zf || sf != of)) goto L_53ec90;
L_53ec79: /* 53ec79: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 53ec7e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 53ec83: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 53ec88: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53ec8du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53ec8d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53ec90: /* 53ec90: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 53ec92: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53ec93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53ec95: mov ecx, esi */
  ecx = esi;
/* 53ec97: call 0x4e438b */
  esp -= 4; W32(esp, 0x53ec9cu); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 53ec9c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 53ec9e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53eca0: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 53eca8: je 0x53ecb6 */
  if (zf) goto L_53ecb6;
L_53ecaa: /* 53ecaa: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 53ecb0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53ecb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53ecb3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x53ecb6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_53ecb6: /* 53ecb6: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 53ecba: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 53ecc0: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 53ecc7: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 53ecce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53eccf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53ecd0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53ecd7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53ecda: ret  */
  esp += 4; SPILL(); return;
}

void f_53ed10(void) {
  LOAD_REGS();
L_53ed10: /* 53ed10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53ed12: push 0x558fab */
  { uint32_t v = 0x558fabu; esp -= 4; W32(esp, v); }
/* 53ed17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53ed1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53ed1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53ed25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53ed26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53ed27: mov esi, ecx */
  esi = ecx;
/* 53ed29: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 53ed2d: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 53ed30: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 53ed38: call 0x4e1217 */
  esp -= 4; W32(esp, 0x53ed3du); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 53ed3d: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 53ed40: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 53ed48: call 0x4e1217 */
  esp -= 4; W32(esp, 0x53ed4du); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 53ed4d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 53ed51: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53ed52: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53ed59: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53ed5c: ret  */
  esp += 4; SPILL(); return;
}

void f_53ed80(void) {
  LOAD_REGS();
L_53ed80: /* 53ed80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53ed82: push 0x558fcb */
  { uint32_t v = 0x558fcbu; esp -= 4; W32(esp, v); }
/* 53ed87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53ed8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53ed8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53ed95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53ed96: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 53ed9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53ed9b: mov esi, ecx */
  esi = ecx;
/* 53ed9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53ed9e: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 53eda1: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 53eda5: call 0x4e13de */
  esp -= 4; W32(esp, 0x53edaau); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 53edaa: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 53edae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53edaf: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 53edb2: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 53edba: call 0x4e13de */
  esp -= 4; W32(esp, 0x53edbfu); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 53edbf: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 53edc3: mov eax, esi */
  eax = esi;
/* 53edc5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53edc6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53edcd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53edd0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_53ee00(void) {
  LOAD_REGS();
L_53ee00: /* 53ee00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 53ee04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53ee05: mov esi, ecx */
  esi = ecx;
/* 53ee07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53ee08: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 53ee0b: call 0x4e13de */
  esp -= 4; W32(esp, 0x53ee10u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 53ee10: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 53ee14: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53ee16: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 53ee19: mov eax, esi */
  eax = esi;
/* 53ee1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53ee1c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_53ee30(void) {
  LOAD_REGS();
L_53ee30: /* 53ee30: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53ee33: jmp 0x4e1217 */
  SPILL(); f_4e1217(); return;
}

void f_53ee50(void) {
  LOAD_REGS();
L_53ee50: /* 53ee50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53ee51: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 53ee55: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ee57: je 0x53ee79 */
  if (zf) goto L_53ee79;
L_53ee59: /* 53ee59: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 53ee5c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ee5e: je 0x53ee6e */
  if (zf) goto L_53ee6e;
L_53ee60: /* 53ee60: cmp eax, 0x69fa30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x69fa30u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53ee65: je 0x53eea6 */
  if (zf) goto L_53eea6;
L_53ee67: /* 53ee67: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53ee6a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ee6c: jne 0x53ee60 */
  if (!zf) goto L_53ee60;
L_53ee6e: /* 53ee6e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53ee70: mov ecx, esi */
  ecx = esi;
/* 53ee72: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53ee77u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53ee77: jmp 0x53ee7e */
  goto L_53ee7e;
L_53ee79: /* 53ee79: mov eax, 0x5ac970 */
  eax = 0x5ac970u;
L_53ee7e: /* 53ee7e: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53ee84: mov ecx, dword ptr [0x69fa50] */
  ecx = R32((uint32_t)(0x69fa50u));
/* 53ee8a: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 53ee8d: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 53ee93: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53ee96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53ee97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53ee98: push 0x5ac97c */
  { uint32_t v = 0x5ac97cu; esp -= 4; W32(esp, v); }
/* 53ee9d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53ee9e: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53eea3u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53eea3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53eea6: /* 53eea6: mov eax, esi */
  eax = esi;
/* 53eea8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53eea9: ret  */
  esp += 4; SPILL(); return;
}

void f_53eed0(void) {
  LOAD_REGS();
L_53eed0: /* 53eed0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53eed1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 53eed5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53eed7: je 0x53eef9 */
  if (zf) goto L_53eef9;
L_53eed9: /* 53eed9: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 53eedc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53eede: je 0x53eeee */
  if (zf) goto L_53eeee;
L_53eee0: /* 53eee0: cmp eax, 0x69fa30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x69fa30u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53eee5: je 0x53ef26 */
  if (zf) goto L_53ef26;
L_53eee7: /* 53eee7: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53eeea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53eeec: jne 0x53eee0 */
  if (!zf) goto L_53eee0;
L_53eeee: /* 53eeee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53eef0: mov ecx, esi */
  ecx = esi;
/* 53eef2: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53eef7u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53eef7: jmp 0x53eefe */
  goto L_53eefe;
L_53eef9: /* 53eef9: mov eax, 0x5ac9ac */
  eax = 0x5ac9acu;
L_53eefe: /* 53eefe: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53ef04: mov ecx, dword ptr [0x69fa50] */
  ecx = R32((uint32_t)(0x69fa50u));
/* 53ef0a: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 53ef0d: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 53ef13: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53ef16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53ef17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53ef18: push 0x5ac9b8 */
  { uint32_t v = 0x5ac9b8u; esp -= 4; W32(esp, v); }
/* 53ef1d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53ef1e: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53ef23u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53ef23: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53ef26: /* 53ef26: mov eax, esi */
  eax = esi;
/* 53ef28: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53ef29: ret  */
  esp += 4; SPILL(); return;
}

void f_53ef50(void) {
  LOAD_REGS();
L_53ef50: /* 53ef50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53ef51: mov ebp, esp */
  ebp = esp;
/* 53ef53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53ef55: push 0x558fe0 */
  { uint32_t v = 0x558fe0u; esp -= 4; W32(esp, v); }
/* 53ef5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53ef60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53ef61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53ef68: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53ef6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53ef6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53ef6d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53ef6e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 53ef71: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ef73: mov esi, ecx */
  esi = ecx;
/* 53ef75: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53ef78: mov dword ptr [esi], 0x56d890 */
  W32((uint32_t)(esi), 0x56d890u);
/* 53ef7e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53ef85: jne 0x53ef9b */
  if (!zf) goto L_53ef9b;
L_53ef87: /* 53ef87: push 0x36 */
  { uint32_t v = 0x36u; esp -= 4; W32(esp, v); }
/* 53ef89: push 0x5a9ff0 */
  { uint32_t v = 0x5a9ff0u; esp -= 4; W32(esp, v); }
/* 53ef8e: push 0x5a9ffc */
  { uint32_t v = 0x5a9ffcu; esp -= 4; W32(esp, v); }
/* 53ef93: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53ef98u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53ef98: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53ef9b: /* 53ef9b: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 53ef9e: cmp eax, dword ptr [esi + 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53efa1: je 0x53efcc */
  if (zf) goto L_53efcc;
L_53efa3: /* 53efa3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53efa5: mov ecx, edi */
  ecx = edi;
/* 53efa7: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53efacu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53efac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53efae: mov ecx, esi */
  ecx = esi;
/* 53efb0: mov edi, eax */
  edi = eax;
/* 53efb2: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53efb7u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53efb7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53efb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53efb9: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 53efbe: push 0x5aa008 */
  { uint32_t v = 0x5aa008u; esp -= 4; W32(esp, v); }
/* 53efc3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53efc4: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53efc9u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53efc9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53efcc: /* 53efcc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53efcf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53efd0: mov eax, esi */
  eax = esi;
/* 53efd2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53efd3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53efda: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53efdb: mov esp, ebp */
  esp = ebp;
/* 53efdd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53efde: ret 4 */
  esp += 8; SPILL(); return;
}

void f_53efe1(void) {
  LOAD_REGS();
L_53efe1: /* 53efe1: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53efe4: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53efe9: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 53efec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53efed: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 53eff0: call 0x554df6 */
  esp -= 4; W32(esp, 0x53eff5u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53eff5(); return;
}

void f_53eff5(void) {
  LOAD_REGS();
L_53eff5: /* 53eff5: push 0x56e518 */
  { uint32_t v = 0x56e518u; esp -= 4; W32(esp, v); }
/* 53effa: push 0x5aa054 */
  { uint32_t v = 0x5aa054u; esp -= 4; W32(esp, v); }
/* 53efff: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53f004u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53f004: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53f007: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f009: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f00b: call 0x554df6 */
  esp -= 4; W32(esp, 0x53f010u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53f010: guest_badaddr(0x53f010); return;
}

void f_53f060(void) {
  LOAD_REGS();
L_53f060: /* 53f060: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53f061: mov ebp, esp */
  ebp = esp;
/* 53f063: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53f065: push 0x558ff0 */
  { uint32_t v = 0x558ff0u; esp -= 4; W32(esp, v); }
/* 53f06a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53f070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f071: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53f078: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53f07b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53f07c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53f07d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 53f080: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53f082: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53f083: mov edi, ecx */
  edi = ecx;
/* 53f085: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53f088: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 53f08b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53f092: jne 0x53f0ab */
  if (!zf) goto L_53f0ab;
L_53f094: /* 53f094: push 0x8d */
  { uint32_t v = 0x8du; esp -= 4; W32(esp, v); }
/* 53f099: push 0x5aa1c0 */
  { uint32_t v = 0x5aa1c0u; esp -= 4; W32(esp, v); }
/* 53f09e: push 0x5aa1cc */
  { uint32_t v = 0x5aa1ccu; esp -= 4; W32(esp, v); }
/* 53f0a3: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53f0a8u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53f0a8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53f0ab: /* 53f0ab: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 53f0ae: cmp eax, dword ptr [edi + 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53f0b1: je 0x53f0dc */
  if (zf) goto L_53f0dc;
L_53f0b3: /* 53f0b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f0b5: mov ecx, esi */
  ecx = esi;
/* 53f0b7: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53f0bcu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53f0bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f0be: mov ecx, edi */
  ecx = edi;
/* 53f0c0: mov esi, eax */
  esi = eax;
/* 53f0c2: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53f0c7u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53f0c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53f0c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f0c9: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 53f0ce: push 0x5aa1d4 */
  { uint32_t v = 0x5aa1d4u; esp -= 4; W32(esp, v); }
/* 53f0d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f0d4: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53f0d9u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53f0d9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53f0dc: /* 53f0dc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53f0df: mov eax, edi */
  eax = edi;
/* 53f0e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53f0e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53f0e3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53f0ea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53f0eb: mov esp, ebp */
  esp = ebp;
/* 53f0ed: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53f0ee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_53f0f1(void) {
  LOAD_REGS();
L_53f0f1: /* 53f0f1: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 53f0f4: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53f0f9: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 53f0fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53f0fd: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 53f100: call 0x554df6 */
  esp -= 4; W32(esp, 0x53f105u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53f105(); return;
}

void f_53f105(void) {
  LOAD_REGS();
L_53f105: /* 53f105: push 0x56e540 */
  { uint32_t v = 0x56e540u; esp -= 4; W32(esp, v); }
/* 53f10a: push 0x5aa210 */
  { uint32_t v = 0x5aa210u; esp -= 4; W32(esp, v); }
/* 53f10f: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53f114u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53f114: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53f117: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53f11a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f11c: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53f121u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53f121: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f122: push 0x5aa218 */
  { uint32_t v = 0x5aa218u; esp -= 4; W32(esp, v); }
/* 53f127: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53f12cu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53f12c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53f12f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f131: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f133: call 0x554df6 */
  esp -= 4; W32(esp, 0x53f138u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53f138: guest_badaddr(0x53f138); return;
}

void f_53f180(void) {
  LOAD_REGS();
L_53f180: /* 53f180: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53f181: mov ebp, esp */
  ebp = esp;
/* 53f183: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53f185: push 0x559000 */
  { uint32_t v = 0x559000u; esp -= 4; W32(esp, v); }
/* 53f18a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53f190: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f191: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53f198: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53f19b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 53f19e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53f1a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53f1a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53f1a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53f1a3: mov esi, ecx */
  esi = ecx;
/* 53f1a5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53f1a8: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 53f1ab: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53f1b2: je 0x53f1c4 */
  if (zf) goto L_53f1c4;
L_53f1b4: /* 53f1b4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 53f1b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f1b7: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 53f1ba: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x53f1bfu); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 53f1bf: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 53f1c2: jmp 0x53f1e1 */
  goto L_53f1e1;
L_53f1c4: /* 53f1c4: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 53f1c7: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53f1c9: mov ecx, ebx */
  ecx = ebx;
/* 53f1cb: jne 0x53f1d0 */
  if (!zf) goto L_53f1d0;
L_53f1cd: /* 53f1cd: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
L_53f1d0: /* 53f1d0: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 53f1d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f1d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53f1d5: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 53f1d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f1d9: call 0x4e2ae5 */
  esp -= 4; W32(esp, 0x53f1deu); SPILL(); f_4e2ae5(); if (g_unwind) return; RELOAD();
/* 53f1de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53f1e1: /* 53f1e1: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 53f1e3: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 53f1e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53f1e8: je 0x53f1ef */
  if (zf) goto L_53f1ef;
L_53f1ea: /* 53f1ea: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 53f1ed: jmp 0x53f1f1 */
  goto L_53f1f1;
L_53f1ef: /* 53f1ef: xor eax, eax */
  eax = 0;
L_53f1f1: /* 53f1f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f1f2: mov ecx, esi */
  ecx = esi;
/* 53f1f4: call 0x4e3cf1 */
  esp -= 4; W32(esp, 0x53f1f9u); SPILL(); f_4e3cf1(); if (g_unwind) return; RELOAD();
/* 53f1f9: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 53f1fe: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 53f201: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 53f204: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 53f207: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53f20a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53f20b: mov ecx, dword ptr [0x5a0c98] */
  ecx = R32((uint32_t)(0x5a0c98u));
/* 53f211: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53f214: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f215: push 0x5aa22c */
  { uint32_t v = 0x5aa22cu; esp -= 4; W32(esp, v); }
/* 53f21a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53f21b: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53f220u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53f220: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53f223: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53f225: mov dword ptr [esi + 0x20], edi */
  W32((uint32_t)(esi + 0x20u), edi);
/* 53f228: je 0x53f22d */
  if (zf) goto L_53f22d;
L_53f22a: /* 53f22a: mov dword ptr [esi + 0x18], ebx */
  W32((uint32_t)(esi + 0x18u), ebx);
L_53f22d: /* 53f22d: mov ecx, esi */
  ecx = esi;
/* 53f22f: call 0x4e41ab */
  esp -= 4; W32(esp, 0x53f234u); SPILL(); f_4e41ab(); if (g_unwind) return; RELOAD();
/* 53f234: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53f237: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53f238: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53f239: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53f240: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53f241: mov esp, ebp */
  esp = ebp;
/* 53f243: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53f244: ret 8 */
  esp += 12; SPILL(); return;
}

void f_53f247(void) {
  LOAD_REGS();
L_53f247: /* 53f247: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 53f24a: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53f24f: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 53f252: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f253: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 53f256: call 0x554df6 */
  esp -= 4; W32(esp, 0x53f25bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53f25b(); return;
}

void f_53f25b(void) {
  LOAD_REGS();
L_53f25b: /* 53f25b: push 0x56e570 */
  { uint32_t v = 0x56e570u; esp -= 4; W32(esp, v); }
/* 53f260: push 0x5aa250 */
  { uint32_t v = 0x5aa250u; esp -= 4; W32(esp, v); }
/* 53f265: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53f26au); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53f26a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53f26d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53f270: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f272: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53f277u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53f277: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f278: push 0x5aa258 */
  { uint32_t v = 0x5aa258u; esp -= 4; W32(esp, v); }
/* 53f27d: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53f282u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53f282: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53f285: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f287: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f289: call 0x554df6 */
  esp -= 4; W32(esp, 0x53f28eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53f28e: guest_badaddr(0x53f28e); return;
}

void f_53f2e0(void) {
  LOAD_REGS();
L_53f2e0: /* 53f2e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53f2e1: mov ebp, esp */
  ebp = esp;
/* 53f2e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53f2e5: push 0x559010 */
  { uint32_t v = 0x559010u; esp -= 4; W32(esp, v); }
/* 53f2ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53f2f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f2f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53f2f8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53f2fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53f2fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53f2fd: mov esi, ecx */
  esi = ecx;
/* 53f2ff: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53f301: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53f302: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53f305: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 53f308: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53f30f: jne 0x53f33c */
  if (!zf) goto L_53f33c;
L_53f311: /* 53f311: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 53f316: push 0x5aa26c */
  { uint32_t v = 0x5aa26cu; esp -= 4; W32(esp, v); }
/* 53f31b: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 53f320: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f321: call 0x4e30df */
  esp -= 4; W32(esp, 0x53f326u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 53f326: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53f329: xor eax, eax */
  eax = 0;
/* 53f32b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53f32e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53f335: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53f336: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53f337: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53f338: mov esp, ebp */
  esp = ebp;
/* 53f33a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53f33b: ret  */
  esp += 4; SPILL(); return;
L_53f33c: /* 53f33c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 53f33f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 53f341: jl 0x53f34b */
  if ((sf != of)) goto L_53f34b;
L_53f343: /* 53f343: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53f349: jl 0x53f39b */
  if ((sf != of)) goto L_53f39b;
L_53f34b: /* 53f34b: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 53f351: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f352: push 0x5aa284 */
  { uint32_t v = 0x5aa284u; esp -= 4; W32(esp, v); }
/* 53f357: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 53f35c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53f35d: call 0x4e30df */
  esp -= 4; W32(esp, 0x53f362u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 53f362: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53f365: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f367: mov ecx, esi */
  ecx = esi;
/* 53f369: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53f36eu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53f36e: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 53f374: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f375: push 0x5aa2b4 */
  { uint32_t v = 0x5aa2b4u; esp -= 4; W32(esp, v); }
/* 53f37a: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 53f37f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53f380: call 0x4e30df */
  esp -= 4; W32(esp, 0x53f385u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 53f385: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53f388: xor eax, eax */
  eax = 0;
/* 53f38a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53f38d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53f394: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53f395: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53f396: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53f397: mov esp, ebp */
  esp = ebp;
/* 53f399: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53f39a: ret  */
  esp += 4; SPILL(); return;
L_53f39b: /* 53f39b: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 53f3a1: cmp dword ptr [ecx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53f3a5: jne 0x53f3f5 */
  if (!zf) goto L_53f3f5;
L_53f3a7: /* 53f3a7: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 53f3ac: push 0x5aa2cc */
  { uint32_t v = 0x5aa2ccu; esp -= 4; W32(esp, v); }
/* 53f3b1: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 53f3b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f3b7: call 0x4e30df */
  esp -= 4; W32(esp, 0x53f3bcu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 53f3bc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53f3bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f3c1: mov ecx, esi */
  ecx = esi;
/* 53f3c3: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53f3c8u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53f3c8: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 53f3ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f3cf: push 0x5aa2e4 */
  { uint32_t v = 0x5aa2e4u; esp -= 4; W32(esp, v); }
/* 53f3d4: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 53f3d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53f3da: call 0x4e30df */
  esp -= 4; W32(esp, 0x53f3dfu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 53f3df: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53f3e2: xor eax, eax */
  eax = 0;
/* 53f3e4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53f3e7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53f3ee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53f3ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53f3f0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53f3f1: mov esp, ebp */
  esp = ebp;
/* 53f3f3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53f3f4: ret  */
  esp += 4; SPILL(); return;
L_53f3f5: /* 53f3f5: cmp dword ptr [ecx + eax*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53f3f8: je 0x53f4c0 */
  if (zf) goto L_53f4c0;
L_53f3fe: /* 53f3fe: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 53f404: push 0x5aa2fc */
  { uint32_t v = 0x5aa2fcu; esp -= 4; W32(esp, v); }
/* 53f409: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 53f40e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53f40f: call 0x4e30df */
  esp -= 4; W32(esp, 0x53f414u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 53f414: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53f417: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f419: mov ecx, esi */
  ecx = esi;
/* 53f41b: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53f420u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53f420: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f421: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 53f426: push 0x5aa328 */
  { uint32_t v = 0x5aa328u; esp -= 4; W32(esp, v); }
/* 53f42b: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 53f430: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f431: call 0x4e30df */
  esp -= 4; W32(esp, 0x53f436u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 53f436: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 53f439: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 53f43f: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 53f442: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53f445: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f447: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53f44cu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53f44c: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 53f452: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f453: push 0x5aa340 */
  { uint32_t v = 0x5aa340u; esp -= 4; W32(esp, v); }
/* 53f458: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 53f45d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53f45e: call 0x4e30df */
  esp -= 4; W32(esp, 0x53f463u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 53f463: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53f466: xor eax, eax */
  eax = 0;
/* 53f468: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53f46b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53f472: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53f473: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53f474: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53f475: mov esp, ebp */
  esp = ebp;
/* 53f477: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53f478: ret  */
  esp += 4; SPILL(); return;
L_53f4c0: /* 53f4c0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53f4c3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53f4c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53f4c5: mov eax, 1 */
  eax = 0x1u;
/* 53f4ca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53f4d1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53f4d2: mov esp, ebp */
  esp = ebp;
/* 53f4d4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53f4d5: ret  */
  esp += 4; SPILL(); return;
}

void f_53f479(void) {
  LOAD_REGS();
L_53f479: /* 53f479: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 53f47c: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53f481: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 53f484: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53f485: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 53f488: call 0x554df6 */
  esp -= 4; W32(esp, 0x53f48du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53f48d(); return;
}

void f_53f48d(void) {
  LOAD_REGS();
L_53f48d: /* 53f48d: push 0x56e598 */
  { uint32_t v = 0x56e598u; esp -= 4; W32(esp, v); }
/* 53f492: push 0x5aa35c */
  { uint32_t v = 0x5aa35cu; esp -= 4; W32(esp, v); }
/* 53f497: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53f49cu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53f49c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53f49f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53f4a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f4a4: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53f4a9u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53f4a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f4aa: push 0x5aa364 */
  { uint32_t v = 0x5aa364u; esp -= 4; W32(esp, v); }
/* 53f4af: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53f4b4u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53f4b4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53f4b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f4b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f4bb: call 0x554df6 */
  esp -= 4; W32(esp, 0x53f4c0u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 53f4c0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53f4c3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53f4c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53f4c5: mov eax, 1 */
  eax = 0x1u;
/* 53f4ca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53f4d1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53f4d2: mov esp, ebp */
  esp = ebp;
/* 53f4d4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53f4d5: ret  */
  esp += 4; SPILL(); return;
}

void f_53f560(void) {
  LOAD_REGS();
L_53f560: /* 53f560: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53f561: mov ebp, esp */
  ebp = esp;
/* 53f563: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53f565: push 0x559020 */
  { uint32_t v = 0x559020u; esp -= 4; W32(esp, v); }
/* 53f56a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53f570: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f571: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53f578: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53f57b: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 53f57e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53f57f: or edx, 0x20000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 53f585: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53f586: mov eax, edx */
  eax = edx;
/* 53f588: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53f58b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53f58c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53f58f: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 53f592: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53f599: mov dword ptr [ecx + 0x1c], edx */
  W32((uint32_t)(ecx + 0x1cu), edx);
/* 53f59c: je 0x53f5a3 */
  if (zf) goto L_53f5a3;
L_53f59e: /* 53f59e: call 0x4e1d66 */
  esp -= 4; W32(esp, 0x53f5a3u); SPILL(); f_4e1d66(); if (g_unwind) return; RELOAD();
L_53f5a3: /* 53f5a3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53f5a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53f5a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53f5a8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53f5af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53f5b0: mov esp, ebp */
  esp = ebp;
/* 53f5b2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53f5b3: ret  */
  esp += 4; SPILL(); return;
}

void f_53f5b4(void) {
  LOAD_REGS();
L_53f5b4: /* 53f5b4: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 53f5b7: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53f5bc: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 53f5bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53f5c0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 53f5c3: call 0x554df6 */
  esp -= 4; W32(esp, 0x53f5c8u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53f5c8(); return;
}

void f_53f5c8(void) {
  LOAD_REGS();
L_53f5c8: /* 53f5c8: push 0x56e5c0 */
  { uint32_t v = 0x56e5c0u; esp -= 4; W32(esp, v); }
/* 53f5cd: push 0x5aa370 */
  { uint32_t v = 0x5aa370u; esp -= 4; W32(esp, v); }
/* 53f5d2: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53f5d7u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53f5d7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53f5da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53f5dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f5df: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53f5e4u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53f5e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f5e5: push 0x5aa378 */
  { uint32_t v = 0x5aa378u; esp -= 4; W32(esp, v); }
/* 53f5ea: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53f5efu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53f5ef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53f5f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f5f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f5f6: call 0x554df6 */
  esp -= 4; W32(esp, 0x53f5fbu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53f5fb: guest_badaddr(0x53f5fb); return;
}

void f_53f630(void) {
  LOAD_REGS();
L_53f630: /* 53f630: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53f631: mov ebp, esp */
  ebp = esp;
/* 53f633: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53f635: push 0x559030 */
  { uint32_t v = 0x559030u; esp -= 4; W32(esp, v); }
/* 53f63a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53f640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f641: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53f648: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53f64b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 53f64d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53f64e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53f64f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53f650: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53f653: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 53f656: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53f65d: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x53f660u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53f660: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53f663: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53f664: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53f665: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53f66c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53f66d: mov esp, ebp */
  esp = ebp;
/* 53f66f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53f670: ret  */
  esp += 4; SPILL(); return;
}

void f_53f671(void) {
  LOAD_REGS();
L_53f671: /* 53f671: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 53f674: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53f679: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 53f67c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53f67d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 53f680: call 0x554df6 */
  esp -= 4; W32(esp, 0x53f685u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53f685(); return;
}

void f_53f685(void) {
  LOAD_REGS();
L_53f685: /* 53f685: push 0x56e5ec */
  { uint32_t v = 0x56e5ecu; esp -= 4; W32(esp, v); }
/* 53f68a: push 0x5aa384 */
  { uint32_t v = 0x5aa384u; esp -= 4; W32(esp, v); }
/* 53f68f: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53f694u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53f694: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53f697: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53f69a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f69c: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53f6a1u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53f6a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f6a2: push 0x5aa38c */
  { uint32_t v = 0x5aa38cu; esp -= 4; W32(esp, v); }
/* 53f6a7: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53f6acu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53f6ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53f6af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f6b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f6b3: call 0x554df6 */
  esp -= 4; W32(esp, 0x53f6b8u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53f6b8: guest_badaddr(0x53f6b8); return;
}

void f_53f6f0(void) {
  LOAD_REGS();
L_53f6f0: /* 53f6f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53f6f1: mov ebp, esp */
  ebp = esp;
/* 53f6f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53f6f5: push 0x559040 */
  { uint32_t v = 0x559040u; esp -= 4; W32(esp, v); }
/* 53f6fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53f700: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f701: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53f708: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53f70b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53f70c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53f70d: mov esi, ecx */
  esi = ecx;
/* 53f70f: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 53f712: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53f714: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53f715: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53f718: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 53f71b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53f722: je 0x53f792 */
  if (zf) goto L_53f792;
L_53f724: /* 53f724: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 53f727: mov ecx, dword ptr [ecx + 0x84] */
  ecx = R32((uint32_t)(ecx + 0x84u));
/* 53f72d: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 53f730: mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  edx = R32((uint32_t)(ecx + eax*4 + 0x1cu));
/* 53f734: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53f736: jne 0x53f74f */
  if (!zf) goto L_53f74f;
L_53f738: /* 53f738: push 0x11f */
  { uint32_t v = 0x11fu; esp -= 4; W32(esp, v); }
/* 53f73d: push 0x5aa3c8 */
  { uint32_t v = 0x5aa3c8u; esp -= 4; W32(esp, v); }
/* 53f742: push 0x5aa3d4 */
  { uint32_t v = 0x5aa3d4u; esp -= 4; W32(esp, v); }
/* 53f747: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53f74cu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53f74c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53f74f: /* 53f74f: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 53f752: lea edx, [eax + eax*8] */
  edx = (uint32_t)(eax + eax*8);
/* 53f755: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 53f758: mov ecx, dword ptr [eax + 0x84] */
  ecx = R32((uint32_t)(eax + 0x84u));
/* 53f75e: cmp dword ptr [ecx + edx*4 + 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4 + 0x1cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53f762: je 0x53f77b */
  if (zf) goto L_53f77b;
L_53f764: /* 53f764: push 0x120 */
  { uint32_t v = 0x120u; esp -= 4; W32(esp, v); }
/* 53f769: push 0x5aa404 */
  { uint32_t v = 0x5aa404u; esp -= 4; W32(esp, v); }
/* 53f76e: push 0x5aa410 */
  { uint32_t v = 0x5aa410u; esp -= 4; W32(esp, v); }
/* 53f773: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53f778u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53f778: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53f77b: /* 53f77b: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 53f77e: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 53f781: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 53f784: mov eax, dword ptr [edx + 0x84] */
  eax = R32((uint32_t)(edx + 0x84u));
/* 53f78a: mov dword ptr [eax + ecx*4 + 0x1c], 0 */
  W32((uint32_t)(eax + ecx*4 + 0x1cu), 0x0u);
L_53f792: /* 53f792: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 53f795: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 53f798: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 53f79b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53f79e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53f79f: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 53f7a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53f7a3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53f7aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53f7ab: mov esp, ebp */
  esp = ebp;
/* 53f7ad: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53f7ae: ret 8 */
  esp += 12; SPILL(); return;
}

void f_53f7b1(void) {
  LOAD_REGS();
L_53f7b1: /* 53f7b1: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 53f7b4: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53f7b9: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 53f7bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f7bd: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 53f7c0: call 0x554df6 */
  esp -= 4; W32(esp, 0x53f7c5u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53f7c5(); return;
}

void f_53f7c5(void) {
  LOAD_REGS();
L_53f7c5: /* 53f7c5: push 0x56e628 */
  { uint32_t v = 0x56e628u; esp -= 4; W32(esp, v); }
/* 53f7ca: push 0x5aa440 */
  { uint32_t v = 0x5aa440u; esp -= 4; W32(esp, v); }
/* 53f7cf: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53f7d4u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53f7d4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53f7d7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53f7da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f7dc: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53f7e1u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53f7e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f7e2: push 0x5aa448 */
  { uint32_t v = 0x5aa448u; esp -= 4; W32(esp, v); }
/* 53f7e7: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53f7ecu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53f7ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53f7ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f7f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f7f3: call 0x554df6 */
  esp -= 4; W32(esp, 0x53f7f8u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53f7f8: guest_badaddr(0x53f7f8); return;
}

void f_53f850(void) {
  LOAD_REGS();
L_53f850: /* 53f850: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53f851: mov ebp, esp */
  ebp = esp;
/* 53f853: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53f855: push 0x559050 */
  { uint32_t v = 0x559050u; esp -= 4; W32(esp, v); }
/* 53f85a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53f860: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f861: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53f868: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53f86b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53f86c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53f86d: mov esi, ecx */
  esi = ecx;
/* 53f86f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 53f872: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53f875: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53f876: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* 53f879: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53f87c: mov dword ptr [esi], 0x56d890 */
  W32((uint32_t)(esi), 0x56d890u);
/* 53f882: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53f889: je 0x53f8e9 */
  if (zf) goto L_53f8e9;
L_53f88b: /* 53f88b: mov eax, dword ptr [0x69f440] */
  eax = R32((uint32_t)(0x69f440u));
/* 53f890: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53f892: je 0x53f8e9 */
  if (zf) goto L_53f8e9;
L_53f894: /* 53f894: mov eax, dword ptr [0x5b2130] */
  eax = R32((uint32_t)(0x5b2130u));
/* 53f899: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53f89b: jne 0x53f8e9 */
  if (!zf) goto L_53f8e9;
L_53f89d: /* 53f89d: call 0x4e1ba9 */
  esp -= 4; W32(esp, 0x53f8a2u); SPILL(); f_4e1ba9(); if (g_unwind) return; RELOAD();
/* 53f8a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53f8a4: jne 0x53f8bd */
  if (!zf) goto L_53f8bd;
L_53f8a6: /* 53f8a6: push 0x1a4 */
  { uint32_t v = 0x1a4u; esp -= 4; W32(esp, v); }
/* 53f8ab: push 0x5aa55c */
  { uint32_t v = 0x5aa55cu; esp -= 4; W32(esp, v); }
/* 53f8b0: push 0x5aa568 */
  { uint32_t v = 0x5aa568u; esp -= 4; W32(esp, v); }
/* 53f8b5: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53f8bau); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53f8ba: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53f8bd: /* 53f8bd: mov ecx, esi */
  ecx = esi;
/* 53f8bf: call 0x4e2559 */
  esp -= 4; W32(esp, 0x53f8c4u); SPILL(); f_4e2559(); if (g_unwind) return; RELOAD();
/* 53f8c4: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 53f8c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f8c8: mov ecx, esi */
  ecx = esi;
/* 53f8ca: call 0x4e3cf1 */
  esp -= 4; W32(esp, 0x53f8cfu); SPILL(); f_4e3cf1(); if (g_unwind) return; RELOAD();
/* 53f8cf: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 53f8d1: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 53f8d7: mov dword ptr [edx + ecx*4], 0 */
  W32((uint32_t)(edx + ecx*4), 0x0u);
/* 53f8de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53f8df: mov ecx, 0x6a2e5c */
  ecx = 0x6a2e5cu;
/* 53f8e4: call 0x4e1b3b */
  esp -= 4; W32(esp, 0x53f8e9u); SPILL(); f_4e1b3b(); if (g_unwind) return; RELOAD();
L_53f8e9: /* 53f8e9: mov esi, dword ptr [esi + 0xc] */
  esi = R32((uint32_t)(esi + 0xcu));
/* 53f8ec: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53f8ee: je 0x53f8fc */
  if (zf) goto L_53f8fc;
L_53f8f0: /* 53f8f0: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 53f8f6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 53f8f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53f8f9: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x53f8fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_53f8fc: /* 53f8fc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53f8ff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53f900: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53f901: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53f908: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53f909: mov esp, ebp */
  esp = ebp;
/* 53f90b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53f90c: ret  */
  esp += 4; SPILL(); return;
}

void f_53f90d(void) {
  LOAD_REGS();
L_53f90d: /* 53f90d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53f910: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53f915: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 53f918: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53f919: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 53f91c: call 0x554df6 */
  esp -= 4; W32(esp, 0x53f921u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53f921(); return;
}

void f_53f921(void) {
  LOAD_REGS();
L_53f921: /* 53f921: push 0x56e658 */
  { uint32_t v = 0x56e658u; esp -= 4; W32(esp, v); }
/* 53f926: push 0x5aa574 */
  { uint32_t v = 0x5aa574u; esp -= 4; W32(esp, v); }
/* 53f92b: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53f930u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53f930: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53f933: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f935: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53f937: call 0x554df6 */
  esp -= 4; W32(esp, 0x53f93cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53f93c: guest_badaddr(0x53f93c); return;
}

void f_53f980(void) {
  LOAD_REGS();
L_53f980: /* 53f980: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53f981: mov ebp, esp */
  ebp = esp;
/* 53f983: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 53f986: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53f988: push 0x559068 */
  { uint32_t v = 0x559068u; esp -= 4; W32(esp, v); }
/* 53f98d: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53f993: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53f994: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53f99b: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53f99e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53f99f: mov esi, ecx */
  esi = ecx;
/* 53f9a1: mov eax, 1 */
  eax = 0x1u;
/* 53f9a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53f9a7: xor edi, edi */
  edi = 0;
/* 53f9a9: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 53f9ad: mov dword ptr [esi + 4], 0x7e */
  W32((uint32_t)(esi + 0x4u), 0x7eu);
/* 53f9b4: mov dword ptr [esi + 8], 0x7d0 */
  W32((uint32_t)(esi + 0x8u), 0x7d0u);
/* 53f9bb: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 53f9be: mov dword ptr [esi + 0x10], edi */
  W32((uint32_t)(esi + 0x10u), edi);
/* 53f9c1: mov dword ptr [esi + 0x14], edi */
  W32((uint32_t)(esi + 0x14u), edi);
/* 53f9c4: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* 53f9c7: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* 53f9ca: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 53f9cd: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 53f9d0: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 53f9d3: mov dword ptr [esi + 0x2c], edi */
  W32((uint32_t)(esi + 0x2cu), edi);
/* 53f9d6: mov dword ptr [esi + 0x30], edi */
  W32((uint32_t)(esi + 0x30u), edi);
/* 53f9d9: mov dword ptr [esi + 0x34], edi */
  W32((uint32_t)(esi + 0x34u), edi);
/* 53f9dc: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* 53f9df: mov dword ptr [esi + 0x3c], 0xffffffff */
  W32((uint32_t)(esi + 0x3cu), 0xffffffffu);
/* 53f9e6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 53f9e9: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 53f9ed: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 53f9f1: mov dword ptr [esi], 0x56e688 */
  W32((uint32_t)(esi), 0x56e688u);
/* 53f9f7: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 53f9fa: mov dword ptr [esi + 0x44], edi */
  W32((uint32_t)(esi + 0x44u), edi);
/* 53f9fd: mov dword ptr [esi + 0x48], edi */
  W32((uint32_t)(esi + 0x48u), edi);
/* 53fa00: mov dword ptr [esp + 0x10], 0x6a0f20 */
  W32((uint32_t)(esp + 0x10u), 0x6a0f20u);
/* 53fa08: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 53fa10: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x53fa15u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 53fa15: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 53fa19: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53fa1f: jge 0x53fa48 */
  if ((sf == of)) goto L_53fa48;
L_53fa21: /* 53fa21: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 53fa27: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 53fa2a: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 53fa2d: or edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 53fa30: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 53fa34: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 53fa37: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x53fa3cu); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 53fa3c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 53fa40: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53fa46: jl 0x53fa21 */
  if ((sf != of)) goto L_53fa21;
L_53fa48: /* 53fa48: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53fa49: push 0x4000000 */
  { uint32_t v = 0x4000000u; esp -= 4; W32(esp, v); }
/* 53fa4e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53fa4f: call 0x4e18e3 */
  esp -= 4; W32(esp, 0x53fa54u); SPILL(); f_4e18e3(); if (g_unwind) return; RELOAD();
/* 53fa54: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53fa57: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 53fa5b: mov dword ptr [esp + 0x10], 0x6a0f20 */
  W32((uint32_t)(esp + 0x10u), 0x6a0f20u);
/* 53fa63: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 53fa6b: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x53fa70u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 53fa70: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 53fa74: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53fa7a: jge 0x53faa7 */
  if ((sf == of)) goto L_53faa7;
L_53fa7c: /* 53fa7c: mov edi, 0xffffffef */
  edi = 0xffffffefu;
L_53fa81: /* 53fa81: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 53fa87: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 53fa8a: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 53fa8d: and edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 53fa8f: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 53fa93: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 53fa96: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x53fa9bu); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 53fa9b: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 53fa9f: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53faa5: jl 0x53fa81 */
  if ((sf != of)) goto L_53fa81;
L_53faa7: /* 53faa7: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 53faab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53faac: mov eax, esi */
  eax = esi;
/* 53faae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53fab5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53fab6: mov esp, ebp */
  esp = ebp;
/* 53fab8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53fab9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_53fb10(void) {
  LOAD_REGS();
L_53fb10: /* 53fb10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53fb11: mov esi, ecx */
  esi = ecx;
/* 53fb13: call 0x4e4106 */
  esp -= 4; W32(esp, 0x53fb18u); SPILL(); f_4e4106(); if (g_unwind) return; RELOAD();
/* 53fb18: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53fb1d: je 0x53fb2b */
  if (zf) goto L_53fb2b;
L_53fb1f: /* 53fb1f: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 53fb25: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 53fb27: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53fb28: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x53fb2bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_53fb2b: /* 53fb2b: mov eax, esi */
  eax = esi;
/* 53fb2d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53fb2e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_53fb50(void) {
  LOAD_REGS();
L_53fb50: /* 53fb50: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53fb53: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53fb54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53fb55: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53fb56: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 53fb5a: cmp dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53fb5d: mov esi, ecx */
  esi = ecx;
/* 53fb5f: je 0x53fbbf */
  if (zf) goto L_53fbbf;
L_53fb61: /* 53fb61: mov ebx, dword ptr [esi + 0x40] */
  ebx = R32((uint32_t)(esi + 0x40u));
/* 53fb64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53fb65: mov ecx, ebx */
  ecx = ebx;
/* 53fb67: call 0x4e3e63 */
  esp -= 4; W32(esp, 0x53fb6cu); SPILL(); f_4e3e63(); if (g_unwind) return; RELOAD();
/* 53fb6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53fb6e: je 0x53fb77 */
  if (zf) goto L_53fb77;
L_53fb70: /* 53fb70: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 53fb73: cmp ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53fb75: jge 0x53fb92 */
  if ((sf == of)) goto L_53fb92;
L_53fb77: /* 53fb77: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* 53fb7a: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 53fb7d: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 53fb81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53fb82: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53fb83: mov ecx, ebx */
  ecx = ebx;
/* 53fb85: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 53fb89: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 53fb8d: call 0x4e3747 */
  esp -= 4; W32(esp, 0x53fb92u); SPILL(); f_4e3747(); if (g_unwind) return; RELOAD();
L_53fb92: /* 53fb92: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 53fb94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53fb96: je 0x53fbbf */
  if (zf) goto L_53fbbf;
L_53fb98: /* 53fb98: test byte ptr [eax + 0x1c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53fb9c: je 0x53fbbf */
  if (zf) goto L_53fbbf;
L_53fb9e: /* 53fb9e: and dword ptr [eax + 0x1c], 0xffffffef */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x1cu), r);
  }
/* 53fba2: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 53fba5: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 53fba7: mov ebx, dword ptr [esi + 0x48] */
  ebx = R32((uint32_t)(esi + 0x48u));
/* 53fbaa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 53fbab: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* 53fbae: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 53fbb1: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 53fbb3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 53fbb5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53fbb6: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x53fbb9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53fbb9: dec dword ptr [esi + 0x44] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x44u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esi + 0x44u), r);
  }
/* 53fbbc: mov dword ptr [esi + 0x48], ebx */
  W32((uint32_t)(esi + 0x48u), ebx);
L_53fbbf: /* 53fbbf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53fbc0: mov eax, esi */
  eax = esi;
/* 53fbc2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53fbc3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53fbc4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53fbc7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_53fbf0(void) {
  LOAD_REGS();
L_53fbf0: /* 53fbf0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53fbf1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 53fbf5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53fbf6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53fbf7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53fbf8: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 53fbfa: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53fbfc: je 0x53fc03 */
  if (zf) goto L_53fc03;
L_53fbfe: /* 53fbfe: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 53fc01: jmp 0x53fc05 */
  goto L_53fc05;
L_53fc03: /* 53fc03: xor eax, eax */
  eax = 0;
L_53fc05: /* 53fc05: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 53fc08: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 53fc09: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 53fc0b: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 53fc0e: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 53fc11: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53fc14: je 0x53fc36 */
  if (zf) goto L_53fc36;
L_53fc16: /* 53fc16: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 53fc18: jmp 0x53fc20 */
  goto L_53fc20;
L_53fc20: /* 53fc20: mov edx, eax */
  edx = eax;
/* 53fc22: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 53fc25: mov ebp, dword ptr [edx + esi + 4] */
  ebp = R32((uint32_t)(edx + esi + 0x4u));
/* 53fc29: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53fc2b: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53fc2d: je 0x53fc48 */
  if (zf) goto L_53fc48;
L_53fc2f: /* 53fc2f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 53fc31: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53fc34: jne 0x53fc20 */
  if (!zf) goto L_53fc20;
L_53fc36: /* 53fc36: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 53fc3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53fc3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53fc3c: call 0x4e308f */
  esp -= 4; W32(esp, 0x53fc41u); SPILL(); f_4e308f(); if (g_unwind) return; RELOAD();
/* 53fc41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53fc42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53fc43: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53fc44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53fc45: ret 8 */
  esp += 12; SPILL(); return;
L_53fc48: /* 53fc48: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 53fc4c: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 53fc4e: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 53fc51: mov dword ptr [esi + eax + 8], edi */
  W32((uint32_t)(esi + eax + 0x8u), edi);
/* 53fc55: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 53fc58: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53fc59: mov dword ptr [esi + eax + 0xc], edx */
  W32((uint32_t)(esi + eax + 0xcu), edx);
/* 53fc5d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 53fc5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53fc60: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53fc61: lea eax, [eax + ecx + 8] */
  eax = (uint32_t)(eax + ecx + 0x8u);
/* 53fc65: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53fc66: ret 8 */
  esp += 12; SPILL(); return;
}

void f_53fc1a(void) {
  LOAD_REGS();
L_53fc1a: /* 53fc1a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_53fc20: /* 53fc20: mov edx, eax */
  edx = eax;
/* 53fc22: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 53fc25: mov ebp, dword ptr [edx + esi + 4] */
  ebp = R32((uint32_t)(edx + esi + 0x4u));
/* 53fc29: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53fc2b: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53fc2d: je 0x53fc48 */
  if (zf) goto L_53fc48;
L_53fc2f: /* 53fc2f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 53fc31: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53fc34: jne 0x53fc20 */
  if (!zf) goto L_53fc20;
L_53fc36: /* 53fc36: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 53fc3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53fc3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53fc3c: call 0x4e308f */
  esp -= 4; W32(esp, 0x53fc41u); SPILL(); f_4e308f(); if (g_unwind) return; RELOAD();
/* 53fc41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53fc42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53fc43: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53fc44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53fc45: ret 8 */
  esp += 12; SPILL(); return;
L_53fc48: /* 53fc48: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 53fc4c: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 53fc4e: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 53fc51: mov dword ptr [esi + eax + 8], edi */
  W32((uint32_t)(esi + eax + 0x8u), edi);
/* 53fc55: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 53fc58: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53fc59: mov dword ptr [esi + eax + 0xc], edx */
  W32((uint32_t)(esi + eax + 0xcu), edx);
/* 53fc5d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 53fc5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53fc60: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53fc61: lea eax, [eax + ecx + 8] */
  eax = (uint32_t)(eax + ecx + 0x8u);
/* 53fc65: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53fc66: ret 8 */
  esp += 12; SPILL(); return;
}

void f_53fc90(void) {
  LOAD_REGS();
L_53fc90: /* 53fc90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53fc91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53fc92: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 53fc94: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 53fc96: mov esi, ecx */
  esi = ecx;
/* 53fc98: call 0x4e2955 */
  esp -= 4; W32(esp, 0x53fc9du); SPILL(); f_4e2955(); if (g_unwind) return; RELOAD();
/* 53fc9d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 53fc9f: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 53fca2: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 53fca4: je 0x53fcc2 */
  if (zf) goto L_53fcc2;
L_53fca6: /* 53fca6: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 53fcaa: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53fcac: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 53fcb0: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 53fcb3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53fcb5: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 53fcb8: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 53fcbb: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 53fcbe: mov edi, eax */
  edi = eax;
/* 53fcc0: jmp 0x53fcc4 */
  goto L_53fcc4;
L_53fcc2: /* 53fcc2: xor edi, edi */
  edi = 0;
L_53fcc4: /* 53fcc4: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 53fcc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53fcc9: je 0x53fcd0 */
  if (zf) goto L_53fcd0;
L_53fccb: /* 53fccb: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 53fcce: jmp 0x53fcd2 */
  goto L_53fcd2;
L_53fcd0: /* 53fcd0: xor ecx, ecx */
  ecx = 0;
L_53fcd2: /* 53fcd2: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 53fcd5: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 53fcd8: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 53fcd9: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 53fcdb: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 53fcde: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 53fce0: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 53fce3: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 53fce6: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 53fce7: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 53fcea: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 53fced: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 53fcf0: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 53fcf4: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53fcf6: jge 0x53fd04 */
  if ((sf == of)) goto L_53fd04;
L_53fcf8: /* 53fcf8: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53fcfa: mov ecx, esi */
  ecx = esi;
/* 53fcfc: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 53fcff: call 0x4e2581 */
  esp -= 4; W32(esp, 0x53fd04u); SPILL(); f_4e2581(); if (g_unwind) return; RELOAD();
L_53fd04: /* 53fd04: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* 53fd07: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53fd08: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53fd09: ret 8 */
  esp += 12; SPILL(); return;
}

void f_53fd30(void) {
  LOAD_REGS();
L_53fd30: /* 53fd30: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53fd33: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 53fd39: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53fd3a: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 53fd3e: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 53fd41: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 53fd44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53fd45: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 53fd49: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53fd4a: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53fd4d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53fd4e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53fd4f: call 0x4e2491 */
  esp -= 4; W32(esp, 0x53fd54u); SPILL(); f_4e2491(); if (g_unwind) return; RELOAD();
/* 53fd54: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 53fd58: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53fd5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53fd5c: push 0x5ab058 */
  { uint32_t v = 0x5ab058u; esp -= 4; W32(esp, v); }
/* 53fd61: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53fd62: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53fd67u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53fd67: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53fd6a: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 53fd6e: mov dword ptr [esp + 0xc], 0x5f0d80 */
  W32((uint32_t)(esp + 0xcu), 0x5f0d80u);
/* 53fd76: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 53fd7e: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x53fd83u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 53fd83: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 53fd87: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53fd8d: jge 0x53fdc1 */
  if ((sf == of)) goto L_53fdc1;
L_53fd8f: /* 53fd8f: nop  */
L_53fd90: /* 53fd90: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 53fd96: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 53fd99: cmp dword ptr [eax + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53fd9c: jne 0x53fdac */
  if (!zf) goto L_53fdac;
L_53fd9e: /* 53fd9e: lea edx, [esi + 2] */
  edx = (uint32_t)(esi + 0x2u);
/* 53fda1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53fda2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53fda3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53fda4: call 0x53fd30 */
  esp -= 4; W32(esp, 0x53fda9u); SPILL(); f_53fd30(); if (g_unwind) return; RELOAD();
/* 53fda9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53fdac: /* 53fdac: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 53fdb0: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x53fdb5u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 53fdb5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 53fdb9: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53fdbf: jl 0x53fd90 */
  if ((sf != of)) goto L_53fd90;
L_53fdc1: /* 53fdc1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53fdc2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53fdc3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53fdc4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53fdc7: ret  */
  esp += 4; SPILL(); return;
}

void f_53fe00(void) {
  LOAD_REGS();
L_53fe00: /* 53fe00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53fe01: mov esi, ecx */
  esi = ecx;
/* 53fe03: call 0x4e2e55 */
  esp -= 4; W32(esp, 0x53fe08u); SPILL(); f_4e2e55(); if (g_unwind) return; RELOAD();
/* 53fe08: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53fe0d: je 0x53fe1a */
  if (zf) goto L_53fe1a;
L_53fe0f: /* 53fe0f: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 53fe11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53fe12: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x53fe17u); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 53fe17: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53fe1a: /* 53fe1a: mov eax, esi */
  eax = esi;
/* 53fe1c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53fe1d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_53fe30(void) {
  LOAD_REGS();
L_53fe30: /* 53fe30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53fe31: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 53fe35: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53fe38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53fe39: mov esi, ecx */
  esi = ecx;
/* 53fe3b: je 0x53fe6b */
  if (zf) goto L_53fe6b;
L_53fe3d: /* 53fe3d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 53fe40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53fe41: push 0x4e2e55 */
  { uint32_t v = 0x4e2e55u; esp -= 4; W32(esp, v); }
/* 53fe46: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 53fe49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53fe4a: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 53fe4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53fe4d: call 0x554e72 */
  esp -= 4; W32(esp, 0x53fe52u); SPILL(); f_554e72(); if (g_unwind) return; RELOAD();
/* 53fe52: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53fe55: je 0x53fe63 */
  if (zf) goto L_53fe63;
L_53fe57: /* 53fe57: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 53fe5d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53fe5f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53fe60: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x53fe63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_53fe63: /* 53fe63: mov eax, edi */
  eax = edi;
/* 53fe65: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53fe66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53fe67: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53fe68: ret 4 */
  esp += 8; SPILL(); return;
L_53fe6b: /* 53fe6b: mov ecx, esi */
  ecx = esi;
/* 53fe6d: call 0x4e2e55 */
  esp -= 4; W32(esp, 0x53fe72u); SPILL(); f_4e2e55(); if (g_unwind) return; RELOAD();
/* 53fe72: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53fe75: je 0x53fe82 */
  if (zf) goto L_53fe82;
L_53fe77: /* 53fe77: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 53fe79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53fe7a: call 0x4e3fb2 */
  esp -= 4; W32(esp, 0x53fe7fu); SPILL(); f_4e3fb2(); if (g_unwind) return; RELOAD();
/* 53fe7f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53fe82: /* 53fe82: mov eax, esi */
  eax = esi;
/* 53fe84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53fe85: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53fe86: ret 4 */
  esp += 8; SPILL(); return;
}

void f_53feb0(void) {
  LOAD_REGS();
L_53feb0: /* 53feb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53feb1: mov ebp, esp */
  ebp = esp;
/* 53feb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53feb5: push 0x559080 */
  { uint32_t v = 0x559080u; esp -= 4; W32(esp, v); }
/* 53feba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53fec0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53fec1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53fec8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53fecb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53fecc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 53fecf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53fed0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53fed1: mov edi, dword ptr [0x69ff64] */
  edi = R32((uint32_t)(0x69ff64u));
/* 53fed7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53feda: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_53fee1: /* 53fee1: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 53fee2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 53fee4: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 53fee7: jl 0x53ffa4 */
  if ((sf != of)) goto L_53ffa4;
L_53feed: /* 53feed: mov eax, dword ptr [0x69ff60] */
  eax = R32((uint32_t)(0x69ff60u));
/* 53fef2: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 53fef5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53fef6: call 0x4e426e */
  esp -= 4; W32(esp, 0x53fefbu); SPILL(); f_4e426e(); if (g_unwind) return; RELOAD();
/* 53fefb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53fefe: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ff00: mov esi, eax */
  esi = eax;
/* 53ff02: je 0x53ff46 */
  if (zf) goto L_53ff46;
L_53ff04: /* 53ff04: cmp dword ptr [esi + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53ff07: je 0x53ff46 */
  if (zf) goto L_53ff46;
L_53ff09: /* 53ff09: xor edi, edi */
  edi = 0;
/* 53ff0b: jmp 0x53ff10 */
  goto L_53ff10;
L_53ff10: /* 53ff10: cmp edi, dword ptr [esi + 0x7c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x7cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53ff13: jge 0x53ff9c */
  if ((sf == of)) goto L_53ff9c;
L_53ff19: /* 53ff19: mov ecx, dword ptr [esi + 0x78] */
  ecx = R32((uint32_t)(esi + 0x78u));
/* 53ff1c: mov eax, edi */
  eax = edi;
/* 53ff1e: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 53ff21: mov edx, dword ptr [ecx + eax + 0x14] */
  edx = R32((uint32_t)(ecx + eax + 0x14u));
/* 53ff25: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ff27: lea ecx, [ecx + eax + 0x14] */
  ecx = (uint32_t)(ecx + eax + 0x14u);
/* 53ff2b: je 0x53ff43 */
  if (zf) goto L_53ff43;
L_53ff2d: /* 53ff2d: cmp dword ptr [edx + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53ff30: jne 0x53ff43 */
  if (!zf) goto L_53ff43;
L_53ff32: /* 53ff32: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 53ff38: mov edx, dword ptr [esi + 0x78] */
  edx = R32((uint32_t)(esi + 0x78u));
/* 53ff3b: mov dword ptr [edx + eax + 0x18], 0xffffffff */
  W32((uint32_t)(edx + eax + 0x18u), 0xffffffffu);
L_53ff43: /* 53ff43: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 53ff44: jmp 0x53ff10 */
  goto L_53ff10;
L_53ff46: /* 53ff46: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 53ff49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ff4b: je 0x53ff83 */
  if (zf) goto L_53ff83;
L_53ff4d: /* 53ff4d: xor edi, edi */
  edi = 0;
/* 53ff4f: nop  */
L_53ff50: /* 53ff50: cmp edi, dword ptr [esi + 0x88] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53ff56: jge 0x53ff9c */
  if ((sf == of)) goto L_53ff9c;
L_53ff58: /* 53ff58: mov ecx, dword ptr [esi + 0x84] */
  ecx = R32((uint32_t)(esi + 0x84u));
/* 53ff5e: lea eax, [edi + edi*8] */
  eax = (uint32_t)(edi + edi*8);
/* 53ff61: lea eax, [ecx + eax*4 + 0x1c] */
  eax = (uint32_t)(ecx + eax*4 + 0x1cu);
/* 53ff65: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 53ff67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ff69: je 0x53ff80 */
  if (zf) goto L_53ff80;
L_53ff6b: /* 53ff6b: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 53ff6e: mov cl, byte ptr [eax + 0x498] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x498u))) & 0xffu);
/* 53ff74: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 53ff76: js 0x53ff80 */
  if (sf) goto L_53ff80;
L_53ff78: /* 53ff78: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53ff79: mov ecx, esi */
  ecx = esi;
/* 53ff7b: call 0x4e25b3 */
  esp -= 4; W32(esp, 0x53ff80u); SPILL(); f_4e25b3(); if (g_unwind) return; RELOAD();
L_53ff80: /* 53ff80: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 53ff81: jmp 0x53ff50 */
  goto L_53ff50;
L_53ff83: /* 53ff83: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 53ff86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ff88: je 0x53fee1 */
  if (zf) goto L_53fee1;
L_53ff8e: /* 53ff8e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 53ff90: mov ecx, esi */
  ecx = esi;
/* 53ff92: call 0x4e41a1 */
  esp -= 4; W32(esp, 0x53ff97u); SPILL(); f_4e41a1(); if (g_unwind) return; RELOAD();
/* 53ff97: jmp 0x53fee1 */
  goto L_53fee1;
L_53ff9c: /* 53ff9c: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 53ff9f: jmp 0x53fee1 */
  goto L_53fee1;
L_53ffa4: /* 53ffa4: mov edi, dword ptr [0x69ff64] */
  edi = R32((uint32_t)(0x69ff64u));
L_53ffaa: /* 53ffaa: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 53ffab: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 53ffad: jl 0x540060 */
  if ((sf != of)) goto L_540060;
L_53ffb3: /* 53ffb3: mov edx, dword ptr [0x69ff60] */
  edx = R32((uint32_t)(0x69ff60u));
/* 53ffb9: mov esi, dword ptr [edx + edi*4] */
  esi = R32((uint32_t)(edx + edi*4));
/* 53ffbc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ffbe: je 0x53ffe2 */
  if (zf) goto L_53ffe2;
L_53ffc0: /* 53ffc0: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
L_53ffc3: /* 53ffc3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ffc5: je 0x53ffd3 */
  if (zf) goto L_53ffd3;
L_53ffc7: /* 53ffc7: cmp eax, 0x69fa30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x69fa30u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53ffcc: je 0x54000f */
  if (zf) goto L_54000f;
L_53ffce: /* 53ffce: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53ffd1: jmp 0x53ffc3 */
  goto L_53ffc3;
L_53ffd3: /* 53ffd3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ffd5: je 0x53ffe2 */
  if (zf) goto L_53ffe2;
L_53ffd7: /* 53ffd7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53ffd9: mov ecx, esi */
  ecx = esi;
/* 53ffdb: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53ffe0u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53ffe0: jmp 0x53ffe7 */
  goto L_53ffe7;
L_53ffe2: /* 53ffe2: mov eax, 0x5ac9ac */
  eax = 0x5ac9acu;
L_53ffe7: /* 53ffe7: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53ffed: mov ecx, dword ptr [0x69fa50] */
  ecx = R32((uint32_t)(0x69fa50u));
/* 53fff3: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 53fff6: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 53fffc: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53ffff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 540000: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 540001: push 0x5ac9b8 */
  { uint32_t v = 0x5ac9b8u; esp -= 4; W32(esp, v); }
/* 540006: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 540007: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54000cu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54000c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54000f: /* 54000f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 540011: je 0x540018 */
  if (zf) goto L_540018;
L_540013: /* 540013: cmp dword ptr [esi + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 540016: jne 0x53ffaa */
  if (!zf) goto L_53ffaa;
L_540018: /* 540018: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 54001b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54001d: jne 0x53ffaa */
  if (!zf) goto L_53ffaa;
L_54001f: /* 54001f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 540021: je 0x53ffaa */
  if (zf) goto L_53ffaa;
L_540023: /* 540023: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 540025: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 540027: mov ecx, esi */
  ecx = esi;
/* 540029: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x54002cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54002c: jmp 0x53ffaa */
  goto L_53ffaa;
L_540060: /* 540060: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 540063: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 540064: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 540065: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54006c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54006d: mov esp, ebp */
  esp = ebp;
/* 54006f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 540070: ret  */
  esp += 4; SPILL(); return;
}

void f_53ff0d(void) {
  LOAD_REGS();
  goto L_53ff0d;
L_53fee1: /* 53fee1: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 53fee2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 53fee4: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 53fee7: jl 0x53ffa4 */
  if ((sf != of)) goto L_53ffa4;
L_53feed: /* 53feed: mov eax, dword ptr [0x69ff60] */
  eax = R32((uint32_t)(0x69ff60u));
/* 53fef2: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 53fef5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53fef6: call 0x4e426e */
  esp -= 4; W32(esp, 0x53fefbu); SPILL(); f_4e426e(); if (g_unwind) return; RELOAD();
/* 53fefb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53fefe: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ff00: mov esi, eax */
  esi = eax;
/* 53ff02: je 0x53ff46 */
  if (zf) goto L_53ff46;
L_53ff04: /* 53ff04: cmp dword ptr [esi + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53ff07: je 0x53ff46 */
  if (zf) goto L_53ff46;
L_53ff09: /* 53ff09: xor edi, edi */
  edi = 0;
/* 53ff0b: jmp 0x53ff10 */
  goto L_53ff10;
L_53ff0d: /* 53ff0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_53ff10: /* 53ff10: cmp edi, dword ptr [esi + 0x7c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x7cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53ff13: jge 0x53ff9c */
  if ((sf == of)) goto L_53ff9c;
L_53ff19: /* 53ff19: mov ecx, dword ptr [esi + 0x78] */
  ecx = R32((uint32_t)(esi + 0x78u));
/* 53ff1c: mov eax, edi */
  eax = edi;
/* 53ff1e: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 53ff21: mov edx, dword ptr [ecx + eax + 0x14] */
  edx = R32((uint32_t)(ecx + eax + 0x14u));
/* 53ff25: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ff27: lea ecx, [ecx + eax + 0x14] */
  ecx = (uint32_t)(ecx + eax + 0x14u);
/* 53ff2b: je 0x53ff43 */
  if (zf) goto L_53ff43;
L_53ff2d: /* 53ff2d: cmp dword ptr [edx + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53ff30: jne 0x53ff43 */
  if (!zf) goto L_53ff43;
L_53ff32: /* 53ff32: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 53ff38: mov edx, dword ptr [esi + 0x78] */
  edx = R32((uint32_t)(esi + 0x78u));
/* 53ff3b: mov dword ptr [edx + eax + 0x18], 0xffffffff */
  W32((uint32_t)(edx + eax + 0x18u), 0xffffffffu);
L_53ff43: /* 53ff43: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 53ff44: jmp 0x53ff10 */
  goto L_53ff10;
L_53ff46: /* 53ff46: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 53ff49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ff4b: je 0x53ff83 */
  if (zf) goto L_53ff83;
L_53ff4d: /* 53ff4d: xor edi, edi */
  edi = 0;
/* 53ff4f: nop  */
L_53ff50: /* 53ff50: cmp edi, dword ptr [esi + 0x88] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x88u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53ff56: jge 0x53ff9c */
  if ((sf == of)) goto L_53ff9c;
L_53ff58: /* 53ff58: mov ecx, dword ptr [esi + 0x84] */
  ecx = R32((uint32_t)(esi + 0x84u));
/* 53ff5e: lea eax, [edi + edi*8] */
  eax = (uint32_t)(edi + edi*8);
/* 53ff61: lea eax, [ecx + eax*4 + 0x1c] */
  eax = (uint32_t)(ecx + eax*4 + 0x1cu);
/* 53ff65: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 53ff67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ff69: je 0x53ff80 */
  if (zf) goto L_53ff80;
L_53ff6b: /* 53ff6b: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 53ff6e: mov cl, byte ptr [eax + 0x498] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x498u))) & 0xffu);
/* 53ff74: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 53ff76: js 0x53ff80 */
  if (sf) goto L_53ff80;
L_53ff78: /* 53ff78: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53ff79: mov ecx, esi */
  ecx = esi;
/* 53ff7b: call 0x4e25b3 */
  esp -= 4; W32(esp, 0x53ff80u); SPILL(); f_4e25b3(); if (g_unwind) return; RELOAD();
L_53ff80: /* 53ff80: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 53ff81: jmp 0x53ff50 */
  goto L_53ff50;
L_53ff83: /* 53ff83: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 53ff86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ff88: je 0x53fee1 */
  if (zf) goto L_53fee1;
L_53ff8e: /* 53ff8e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 53ff90: mov ecx, esi */
  ecx = esi;
/* 53ff92: call 0x4e41a1 */
  esp -= 4; W32(esp, 0x53ff97u); SPILL(); f_4e41a1(); if (g_unwind) return; RELOAD();
/* 53ff97: jmp 0x53fee1 */
  goto L_53fee1;
L_53ff9c: /* 53ff9c: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 53ff9f: jmp 0x53fee1 */
  goto L_53fee1;
L_53ffa4: /* 53ffa4: mov edi, dword ptr [0x69ff64] */
  edi = R32((uint32_t)(0x69ff64u));
L_53ffaa: /* 53ffaa: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 53ffab: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 53ffad: jl 0x540060 */
  if ((sf != of)) goto L_540060;
L_53ffb3: /* 53ffb3: mov edx, dword ptr [0x69ff60] */
  edx = R32((uint32_t)(0x69ff60u));
/* 53ffb9: mov esi, dword ptr [edx + edi*4] */
  esi = R32((uint32_t)(edx + edi*4));
/* 53ffbc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ffbe: je 0x53ffe2 */
  if (zf) goto L_53ffe2;
L_53ffc0: /* 53ffc0: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
L_53ffc3: /* 53ffc3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ffc5: je 0x53ffd3 */
  if (zf) goto L_53ffd3;
L_53ffc7: /* 53ffc7: cmp eax, 0x69fa30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x69fa30u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53ffcc: je 0x54000f */
  if (zf) goto L_54000f;
L_53ffce: /* 53ffce: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53ffd1: jmp 0x53ffc3 */
  goto L_53ffc3;
L_53ffd3: /* 53ffd3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ffd5: je 0x53ffe2 */
  if (zf) goto L_53ffe2;
L_53ffd7: /* 53ffd7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53ffd9: mov ecx, esi */
  ecx = esi;
/* 53ffdb: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53ffe0u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53ffe0: jmp 0x53ffe7 */
  goto L_53ffe7;
L_53ffe2: /* 53ffe2: mov eax, 0x5ac9ac */
  eax = 0x5ac9acu;
L_53ffe7: /* 53ffe7: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53ffed: mov ecx, dword ptr [0x69fa50] */
  ecx = R32((uint32_t)(0x69fa50u));
/* 53fff3: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 53fff6: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 53fffc: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53ffff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 540000: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 540001: push 0x5ac9b8 */
  { uint32_t v = 0x5ac9b8u; esp -= 4; W32(esp, v); }
/* 540006: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 540007: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54000cu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54000c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_54000f: /* 54000f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 540011: je 0x540018 */
  if (zf) goto L_540018;
L_540013: /* 540013: cmp dword ptr [esi + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 540016: jne 0x53ffaa */
  if (!zf) goto L_53ffaa;
L_540018: /* 540018: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 54001b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54001d: jne 0x53ffaa */
  if (!zf) goto L_53ffaa;
L_54001f: /* 54001f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 540021: je 0x53ffaa */
  if (zf) goto L_53ffaa;
L_540023: /* 540023: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 540025: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 540027: mov ecx, esi */
  ecx = esi;
/* 540029: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x54002cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 54002c: jmp 0x53ffaa */
  goto L_53ffaa;
L_540060: /* 540060: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 540063: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 540064: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 540065: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54006c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54006d: mov esp, ebp */
  esp = ebp;
/* 54006f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 540070: ret  */
  esp += 4; SPILL(); return;
}

void f_540031(void) {
  LOAD_REGS();
L_540031: /* 540031: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 540034: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 540039: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 54003c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54003d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 540040: call 0x554df6 */
  esp -= 4; W32(esp, 0x540045u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_540045(); return;
}

void f_540045(void) {
  LOAD_REGS();
L_540045: /* 540045: push 0x56e6f4 */
  { uint32_t v = 0x56e6f4u; esp -= 4; W32(esp, v); }
/* 54004a: push 0x5abbd4 */
  { uint32_t v = 0x5abbd4u; esp -= 4; W32(esp, v); }
/* 54004f: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x540054u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 540054: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 540057: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 540059: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54005b: call 0x554df6 */
  esp -= 4; W32(esp, 0x540060u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 540060: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 540063: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 540064: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 540065: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54006c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54006d: mov esp, ebp */
  esp = ebp;
/* 54006f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 540070: ret  */
  esp += 4; SPILL(); return;
}

void f_540059(void) {
  LOAD_REGS();
L_540059: /* 540059: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 54005b: call 0x554df6 */
  esp -= 4; W32(esp, 0x540060u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 540060: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 540063: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 540064: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 540065: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54006c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54006d: mov esp, ebp */
  esp = ebp;
/* 54006f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 540070: ret  */
  esp += 4; SPILL(); return;
}

void f_540063(void) {
  LOAD_REGS();
L_540063: /* 540063: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 540064: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 540065: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54006c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54006d: mov esp, ebp */
  esp = ebp;
/* 54006f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 540070: ret  */
  esp += 4; SPILL(); return;
}

void f_540064(void) {
  LOAD_REGS();
L_540064: /* 540064: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 540065: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54006c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54006d: mov esp, ebp */
  esp = ebp;
/* 54006f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 540070: ret  */
  esp += 4; SPILL(); return;
}

void f_540065(void) {
  LOAD_REGS();
L_540065: /* 540065: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54006c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 54006d: mov esp, ebp */
  esp = ebp;
/* 54006f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 540070: ret  */
  esp += 4; SPILL(); return;
}

void f_54006d(void) {
  LOAD_REGS();
L_54006d: /* 54006d: mov esp, ebp */
  esp = ebp;
/* 54006f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 540070: ret  */
  esp += 4; SPILL(); return;
}

void f_540070(void) {
  LOAD_REGS();
L_540070: /* 540070: ret  */
  esp += 4; SPILL(); return;
}

void f_540100(void) {
  LOAD_REGS();
L_540100: /* 540100: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 540102: push 0x559098 */
  { uint32_t v = 0x559098u; esp -= 4; W32(esp, v); }
/* 540107: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54010d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54010e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 540115: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 540116: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 540117: mov esi, ecx */
  esi = ecx;
/* 540119: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 54011d: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 540121: mov dword ptr [esi + 0x28], 0x56901c */
  W32((uint32_t)(esi + 0x28u), 0x56901cu);
/* 540128: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 540129: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 54012c: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 540134: mov dword ptr [esi], 0x569750 */
  W32((uint32_t)(esi), 0x569750u);
/* 54013a: mov dword ptr [esi + 0x28], 0x569744 */
  W32((uint32_t)(esi + 0x28u), 0x569744u);
/* 540141: call 0x4e13de */
  esp -= 4; W32(esp, 0x540146u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 540146: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 54014a: mov eax, esi */
  eax = esi;
/* 54014c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54014d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 540154: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 540157: ret 4 */
  esp += 8; SPILL(); return;
}

void f_540180(void) {
  LOAD_REGS();
L_540180: /* 540180: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 540184: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 540185: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 540186: mov esi, ecx */
  esi = ecx;
/* 540188: call 0x4e324c */
  esp -= 4; W32(esp, 0x54018du); SPILL(); f_4e324c(); if (g_unwind) return; RELOAD();
/* 54018d: xor eax, eax */
  eax = 0;
/* 54018f: mov dword ptr [esi], 0x5699f8 */
  W32((uint32_t)(esi), 0x5699f8u);
/* 540195: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 540198: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 54019b: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 54019e: mov eax, esi */
  eax = esi;
/* 5401a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5401a1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5401c0(void) {
  LOAD_REGS();
L_5401c0: /* 5401c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5401c2: push 0x5590fa */
  { uint32_t v = 0x5590fau; esp -= 4; W32(esp, v); }
/* 5401c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5401cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5401ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5401d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5401d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5401d7: mov esi, ecx */
  esi = ecx;
/* 5401d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 5401dd: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 5401e5: mov dword ptr [esi], 0x5696c0 */
  W32((uint32_t)(esi), 0x5696c0u);
/* 5401eb: push 0x4e2397 */
  { uint32_t v = 0x4e2397u; esp -= 4; W32(esp, v); }
/* 5401f0: push 0x4e3b7a */
  { uint32_t v = 0x4e3b7au; esp -= 4; W32(esp, v); }
/* 5401f5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 5401f7: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 5401f9: lea eax, [esi + 0x58] */
  eax = (uint32_t)(esi + 0x58u);
/* 5401fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5401fd: mov byte ptr [esp + 0x24], 4 */
  W8((uint32_t)(esp + 0x24u), 0x4u);
/* 540202: call 0x5551a4 */
  esp -= 4; W32(esp, 0x540207u); SPILL(); f_5551a4(); if (g_unwind) return; RELOAD();
/* 540207: push 0x4e2397 */
  { uint32_t v = 0x4e2397u; esp -= 4; W32(esp, v); }
/* 54020c: push 0x4e3b7a */
  { uint32_t v = 0x4e3b7au; esp -= 4; W32(esp, v); }
/* 540211: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 540213: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 540215: lea ecx, [esi + 0x118] */
  ecx = (uint32_t)(esi + 0x118u);
/* 54021b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54021c: mov byte ptr [esp + 0x24], 5 */
  W8((uint32_t)(esp + 0x24u), 0x5u);
/* 540221: call 0x5551a4 */
  esp -= 4; W32(esp, 0x540226u); SPILL(); f_5551a4(); if (g_unwind) return; RELOAD();
/* 540226: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 54022a: mov eax, esi */
  eax = esi;
/* 54022c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54022d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 540234: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 540237: ret  */
  esp += 4; SPILL(); return;
}

void f_540260(void) {
  LOAD_REGS();
L_540260: /* 540260: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 540261: mov ebp, esp */
  ebp = esp;
/* 540263: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 540265: push 0x559130 */
  { uint32_t v = 0x559130u; esp -= 4; W32(esp, v); }
/* 54026a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 540270: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 540271: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 540278: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54027b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 54027e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54027f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 540280: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 540281: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 540284: mov esi, ecx */
  esi = ecx;
/* 540286: xor ebx, ebx */
  ebx = 0;
/* 540288: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 540289: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 54028c: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 54028f: call 0x4e13de */
  esp -= 4; W32(esp, 0x540294u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 540294: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 540297: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 540298: mov ecx, esi */
  ecx = esi;
/* 54029a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 54029e: call 0x4e3ed6 */
  esp -= 4; W32(esp, 0x5402a3u); SPILL(); f_4e3ed6(); if (g_unwind) return; RELOAD();
/* 5402a3: mov esi, eax */
  esi = eax;
/* 5402a5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 5402a7: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 5402aa: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 5402ae: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 5402b1: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 5402b4: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5402b9u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5402b9: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 5402bc: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 5402bf: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x5402c4u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 5402c4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5402c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5402c8: mov eax, esi */
  eax = esi;
/* 5402ca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5402cb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5402d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5402d3: mov esp, ebp */
  esp = ebp;
/* 5402d5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5402d6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5402d9(void) {
  LOAD_REGS();
L_5402d9: /* 5402d9: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5402dc: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5402e1: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 5402e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5402e5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 5402e8: call 0x554df6 */
  esp -= 4; W32(esp, 0x5402edu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5402ed(); return;
}

void f_5402ed(void) {
  LOAD_REGS();
L_5402ed: /* 5402ed: push 0x56e728 */
  { uint32_t v = 0x56e728u; esp -= 4; W32(esp, v); }
/* 5402f2: push 0x5ac76c */
  { uint32_t v = 0x5ac76cu; esp -= 4; W32(esp, v); }
/* 5402f7: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5402fcu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5402fc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5402ff: xor ebx, ebx */
  ebx = 0;
/* 540301: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 540302: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 540303: call 0x554df6 */
  esp -= 4; W32(esp, 0x540308u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_540308: guest_badaddr(0x540308); return;
}

void f_540340(void) {
  LOAD_REGS();
L_540340: /* 540340: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 540341: mov ebp, esp */
  ebp = esp;
/* 540343: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 540345: push 0x559148 */
  { uint32_t v = 0x559148u; esp -= 4; W32(esp, v); }
/* 54034a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 540350: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 540351: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 540358: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 54035b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54035c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54035d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54035e: mov esi, ecx */
  esi = ecx;
/* 540360: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 540363: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 540366: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 54036d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54036e: mov dword ptr [esi], 0x569250 */
  W32((uint32_t)(esi), 0x569250u);
/* 540374: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 540378: call 0x4e155f */
  esp -= 4; W32(esp, 0x54037du); SPILL(); f_4e155f(); if (g_unwind) return; RELOAD();
/* 54037d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 540380: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 540383: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 540384: mov dword ptr [esi + 0x34], 0 */
  W32((uint32_t)(esi + 0x34u), 0x0u);
/* 54038b: mov eax, esi */
  eax = esi;
/* 54038d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 54038e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 540395: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 540396: mov esp, ebp */
  esp = ebp;
/* 540398: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 540399: ret  */
  esp += 4; SPILL(); return;
}

void f_54039a(void) {
  LOAD_REGS();
L_54039a: /* 54039a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 54039d: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5403a2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5403a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5403a6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 5403a9: call 0x554df6 */
  esp -= 4; W32(esp, 0x5403aeu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5403ae(); return;
}

void f_5403ae(void) {
  LOAD_REGS();
L_5403ae: /* 5403ae: push 0x56e754 */
  { uint32_t v = 0x56e754u; esp -= 4; W32(esp, v); }
/* 5403b3: push 0x5ac790 */
  { uint32_t v = 0x5ac790u; esp -= 4; W32(esp, v); }
/* 5403b8: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5403bdu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5403bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5403c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5403c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5403c4: call 0x554df6 */
  esp -= 4; W32(esp, 0x5403c9u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5403c9: guest_badaddr(0x5403c9); return;
}

void f_540400(void) {
  LOAD_REGS();
L_540400: /* 540400: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 540402: push 0x559168 */
  { uint32_t v = 0x559168u; esp -= 4; W32(esp, v); }
/* 540407: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54040d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54040e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 540415: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 540416: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 540417: mov esi, ecx */
  esi = ecx;
/* 540419: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 54041d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 540420: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 540421: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 540423: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 54042b: call 0x4e321a */
  esp -= 4; W32(esp, 0x540430u); SPILL(); f_4e321a(); if (g_unwind) return; RELOAD();
/* 540430: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 540432: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 540434: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 54043c: je 0x54044a */
  if (zf) goto L_54044a;
L_54043e: /* 54043e: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 540444: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 540446: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 540447: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x54044au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_54044a: /* 54044a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 54044e: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 540454: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 54045b: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 540462: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 540463: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54046a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54046d: ret  */
  esp += 4; SPILL(); return;
}

void f_540490(void) {
  LOAD_REGS();
L_540490: /* 540490: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 540491: mov esi, ecx */
  esi = ecx;
/* 540493: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 540496: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 540497: xor edi, edi */
  edi = 0;
/* 540499: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54049b: jle 0x5404b5 */
  if ((zf || sf != of)) goto L_5404b5;
L_54049d: /* 54049d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54049e: xor ebx, ebx */
  ebx = 0;
L_5404a0: /* 5404a0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 5404a2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5404a4: call 0x4e3ad5 */
  esp -= 4; W32(esp, 0x5404a9u); SPILL(); f_4e3ad5(); if (g_unwind) return; RELOAD();
/* 5404a9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 5404ac: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 5404ad: add ebx, 0x2c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 5404b0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5404b2: jl 0x5404a0 */
  if ((sf != of)) goto L_5404a0;
L_5404b4: /* 5404b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_5404b5: /* 5404b5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 5404b9: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 5404bb: mov ecx, esi */
  ecx = esi;
/* 5404bd: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 5404c4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 5404c7: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5404ccu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5404cc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5404cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5404ce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_540500(void) {
  LOAD_REGS();
L_540500: /* 540500: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 540502: push 0x559188 */
  { uint32_t v = 0x559188u; esp -= 4; W32(esp, v); }
/* 540507: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 54050d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54050e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 540515: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 540516: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 540517: mov esi, ecx */
  esi = ecx;
/* 540519: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 54051d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 540520: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 540521: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 540523: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 54052b: call 0x4e3f71 */
  esp -= 4; W32(esp, 0x540530u); SPILL(); f_4e3f71(); if (g_unwind) return; RELOAD();
/* 540530: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 540532: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 540534: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 54053c: je 0x54054a */
  if (zf) goto L_54054a;
L_54053e: /* 54053e: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 540544: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 540546: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 540547: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x54054au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_54054a: /* 54054a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 54054e: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 540554: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 54055b: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 540562: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 540563: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 54056a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54056d: ret  */
  esp += 4; SPILL(); return;
}

void f_540590(void) {
  LOAD_REGS();
L_540590: /* 540590: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 540591: mov esi, ecx */
  esi = ecx;
/* 540593: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 540596: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 540597: xor edi, edi */
  edi = 0;
/* 540599: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54059b: jle 0x5405b5 */
  if ((zf || sf != of)) goto L_5405b5;
L_54059d: /* 54059d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54059e: xor ebx, ebx */
  ebx = 0;
L_5405a0: /* 5405a0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 5405a2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5405a4: call 0x4e3d00 */
  esp -= 4; W32(esp, 0x5405a9u); SPILL(); f_4e3d00(); if (g_unwind) return; RELOAD();
/* 5405a9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 5405ac: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 5405ad: add ebx, 0x3c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 5405b0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5405b2: jl 0x5405a0 */
  if ((sf != of)) goto L_5405a0;
L_5405b4: /* 5405b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_5405b5: /* 5405b5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 5405b9: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 5405bb: mov ecx, esi */
  ecx = esi;
/* 5405bd: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 5405c4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 5405c7: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5405ccu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5405cc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5405cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5405ce: ret 4 */
  esp += 8; SPILL(); return;
}
