#include "recomp.h"
#include "rec_mod.h"

void f_70e5c0(void) {
  LOAD_REGS();
L_70e5c0: /* 70e5c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70e5c2: push 0x9c2369 */
  { uint32_t v = 0x9c2369u; esp -= 4; W32(esp, v); }
/* 70e5c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70e5cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70e5ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70e5d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70e5d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70e5d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70e5d8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70e5d9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 70e5dd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70e5e0: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 70e5e2: mov esi, ecx */
  esi = ecx;
/* 70e5e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70e5e5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 70e5e9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70e5efu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70e5ef: xor ebx, ebx */
  ebx = 0;
/* 70e5f1: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 70e5f4: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70e5f7: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 70e5fb: jle 0x70e63b */
  if ((zf || sf != of)) goto L_70e63b;
L_70e5fd: /* 70e5fd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 70e5fe: xor ebp, ebp */
  ebp = 0;
L_70e600: /* 70e600: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 70e602: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70e604: mov ecx, esi */
  ecx = esi;
/* 70e606: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70e60cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70e60c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 70e60e: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 70e611: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 70e613: je 0x70e62f */
  if (zf) goto L_70e62f;
L_70e615: /* 70e615: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 70e617: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 70e619: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 70e61b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 70e61d: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 70e620: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 70e623: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 70e626: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 70e629: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 70e62c: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
L_70e62f: /* 70e62f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70e632: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 70e633: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 70e636: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70e638: jl 0x70e600 */
  if ((sf != of)) goto L_70e600;
L_70e63a: /* 70e63a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_70e63b: /* 70e63b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70e63f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70e640: mov eax, esi */
  eax = esi;
/* 70e642: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70e643: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70e644: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70e64b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70e64e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70e690(void) {
  LOAD_REGS();
L_70e690: /* 70e690: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70e692: push 0x9c2389 */
  { uint32_t v = 0x9c2389u; esp -= 4; W32(esp, v); }
/* 70e697: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70e69d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70e69e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70e6a5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 70e6a8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70e6a9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 70e6aa: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 70e6ae: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 70e6b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70e6b2: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 70e6b4: mov ebx, ecx */
  ebx = ecx;
/* 70e6b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70e6b7: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 70e6bb: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70e6c1u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70e6c1: xor esi, esi */
  esi = 0;
/* 70e6c3: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 70e6c6: cmp dword ptr [ebp + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70e6c9: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 70e6cd: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 70e6d1: jle 0x70e71c */
  if ((zf || sf != of)) goto L_70e71c;
L_70e6d3: /* 70e6d3: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 70e6d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_70e6d8: /* 70e6d8: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 70e6da: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70e6dc: mov ecx, ebx */
  ecx = ebx;
/* 70e6de: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70e6e4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70e6e4: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 70e6e6: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 70e6e9: lea edi, [edx + ecx*8] */
  edi = (uint32_t)(edx + ecx*8);
/* 70e6ec: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 70e6ee: je 0x70e700 */
  if (zf) goto L_70e700;
L_70e6f0: /* 70e6f0: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 70e6f3: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 70e6f7: mov ecx, 0x12 */
  ecx = 0x12u;
/* 70e6fc: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 70e6fe: xor esi, esi */
  esi = 0;
L_70e700: /* 70e700: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 70e704: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 70e708: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 70e70b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 70e70c: add edx, 0x48 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 70e70f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70e711: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 70e715: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 70e719: jl 0x70e6d8 */
  if ((sf != of)) goto L_70e6d8;
L_70e71b: /* 70e71b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_70e71c: /* 70e71c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 70e720: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70e721: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 70e722: mov eax, ebx */
  eax = ebx;
/* 70e724: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70e725: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70e72c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70e72f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70e770(void) {
  LOAD_REGS();
L_70e770: /* 70e770: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70e772: push 0x9c23a9 */
  { uint32_t v = 0x9c23a9u; esp -= 4; W32(esp, v); }
/* 70e777: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70e77d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70e77e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70e785: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70e786: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70e787: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70e788: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70e789: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 70e78d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70e790: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 70e792: mov esi, ecx */
  esi = ecx;
/* 70e794: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70e795: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 70e799: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70e79fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70e79f: xor ebx, ebx */
  ebx = 0;
/* 70e7a1: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 70e7a4: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70e7a7: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 70e7ab: jle 0x70e7e8 */
  if ((zf || sf != of)) goto L_70e7e8;
L_70e7ad: /* 70e7ad: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 70e7ae: xor ebp, ebp */
  ebp = 0;
L_70e7b0: /* 70e7b0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 70e7b2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70e7b4: mov ecx, esi */
  ecx = esi;
/* 70e7b6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70e7bcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70e7bc: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 70e7be: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 70e7c1: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 70e7c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 70e7c6: je 0x70e7dc */
  if (zf) goto L_70e7dc;
L_70e7c8: /* 70e7c8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 70e7ca: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 70e7cc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 70e7ce: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 70e7d0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 70e7d3: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 70e7d6: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 70e7d9: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_70e7dc: /* 70e7dc: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70e7df: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 70e7e0: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 70e7e3: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70e7e5: jl 0x70e7b0 */
  if ((sf != of)) goto L_70e7b0;
L_70e7e7: /* 70e7e7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_70e7e8: /* 70e7e8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70e7ec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70e7ed: mov eax, esi */
  eax = esi;
/* 70e7ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70e7f0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70e7f1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70e7f8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70e7fb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70e830(void) {
  LOAD_REGS();
L_70e830: /* 70e830: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70e832: push 0x9c23c9 */
  { uint32_t v = 0x9c23c9u; esp -= 4; W32(esp, v); }
/* 70e837: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70e83d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70e83e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70e845: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70e846: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70e847: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70e848: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70e849: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 70e84d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70e850: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 70e852: mov esi, ecx */
  esi = ecx;
/* 70e854: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70e855: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 70e859: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70e85fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70e85f: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 70e866: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70e869: xor ebx, ebx */
  ebx = 0;
/* 70e86b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 70e86d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 70e875: jle 0x70e89b */
  if ((zf || sf != of)) goto L_70e89b;
L_70e877: /* 70e877: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 70e879: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70e87b: mov ecx, esi */
  ecx = esi;
/* 70e87d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70e883u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70e883: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 70e885: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 70e888: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 70e88a: je 0x70e893 */
  if (zf) goto L_70e893;
L_70e88c: /* 70e88c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 70e88e: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 70e891: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_70e893: /* 70e893: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70e896: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 70e897: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70e899: jl 0x70e877 */
  if ((sf != of)) goto L_70e877;
L_70e89b: /* 70e89b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70e89f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70e8a0: mov eax, esi */
  eax = esi;
/* 70e8a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70e8a3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70e8a4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70e8ab: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70e8ae: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70e8f0(void) {
  LOAD_REGS();
L_70e8f0: /* 70e8f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70e8f2: push 0x9c23e9 */
  { uint32_t v = 0x9c23e9u; esp -= 4; W32(esp, v); }
/* 70e8f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70e8fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70e8fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70e905: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70e906: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70e907: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70e908: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70e909: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 70e90d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70e910: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 70e912: mov esi, ecx */
  esi = ecx;
/* 70e914: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70e915: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 70e919: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70e91fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70e91f: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 70e926: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70e929: xor ebx, ebx */
  ebx = 0;
/* 70e92b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 70e92d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 70e935: jle 0x70e95b */
  if ((zf || sf != of)) goto L_70e95b;
L_70e937: /* 70e937: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 70e939: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70e93b: mov ecx, esi */
  ecx = esi;
/* 70e93d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70e943u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70e943: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 70e945: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 70e948: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 70e94a: je 0x70e953 */
  if (zf) goto L_70e953;
L_70e94c: /* 70e94c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 70e94e: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 70e951: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_70e953: /* 70e953: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70e956: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 70e957: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70e959: jl 0x70e937 */
  if ((sf != of)) goto L_70e937;
L_70e95b: /* 70e95b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70e95f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70e960: mov eax, esi */
  eax = esi;
/* 70e962: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70e963: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70e964: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70e96b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70e96e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70e9b0(void) {
  LOAD_REGS();
L_70e9b0: /* 70e9b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70e9b2: push 0x9c2409 */
  { uint32_t v = 0x9c2409u; esp -= 4; W32(esp, v); }
/* 70e9b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70e9bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70e9be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70e9c5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 70e9c8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70e9c9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 70e9ca: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 70e9ce: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 70e9d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70e9d2: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 70e9d4: mov ebx, ecx */
  ebx = ecx;
/* 70e9d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70e9d7: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 70e9db: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70e9e1u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70e9e1: xor esi, esi */
  esi = 0;
/* 70e9e3: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 70e9e6: cmp dword ptr [ebp + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70e9e9: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 70e9ed: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 70e9f1: jle 0x70ea3c */
  if ((zf || sf != of)) goto L_70ea3c;
L_70e9f3: /* 70e9f3: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 70e9f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_70e9f8: /* 70e9f8: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 70e9fa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70e9fc: mov ecx, ebx */
  ecx = ebx;
/* 70e9fe: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70ea04u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70ea04: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 70ea06: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 70ea09: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 70ea0c: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 70ea0e: je 0x70ea20 */
  if (zf) goto L_70ea20;
L_70ea10: /* 70ea10: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 70ea13: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 70ea17: mov ecx, 5 */
  ecx = 0x5u;
/* 70ea1c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 70ea1e: xor esi, esi */
  esi = 0;
L_70ea20: /* 70ea20: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 70ea24: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 70ea28: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 70ea2b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 70ea2c: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 70ea2f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70ea31: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 70ea35: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 70ea39: jl 0x70e9f8 */
  if ((sf != of)) goto L_70e9f8;
L_70ea3b: /* 70ea3b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_70ea3c: /* 70ea3c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 70ea40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70ea41: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 70ea42: mov eax, ebx */
  eax = ebx;
/* 70ea44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70ea45: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70ea4c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70ea4f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70ea90(void) {
  LOAD_REGS();
L_70ea90: /* 70ea90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70ea92: push 0x9c2429 */
  { uint32_t v = 0x9c2429u; esp -= 4; W32(esp, v); }
/* 70ea97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70ea9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70ea9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70eaa5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70eaa6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70eaa7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70eaa8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70eaa9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 70eaad: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70eab0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 70eab2: mov esi, ecx */
  esi = ecx;
/* 70eab4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70eab5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 70eab9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70eabfu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70eabf: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 70eac6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70eac9: xor ebx, ebx */
  ebx = 0;
/* 70eacb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 70eacd: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 70ead5: jle 0x70eafb */
  if ((zf || sf != of)) goto L_70eafb;
L_70ead7: /* 70ead7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 70ead9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70eadb: mov ecx, esi */
  ecx = esi;
/* 70eadd: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70eae3u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70eae3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 70eae5: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 70eae8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 70eaea: je 0x70eaf3 */
  if (zf) goto L_70eaf3;
L_70eaec: /* 70eaec: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 70eaee: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 70eaf1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_70eaf3: /* 70eaf3: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70eaf6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 70eaf7: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70eaf9: jl 0x70ead7 */
  if ((sf != of)) goto L_70ead7;
L_70eafb: /* 70eafb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70eaff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70eb00: mov eax, esi */
  eax = esi;
/* 70eb02: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70eb03: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70eb04: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70eb0b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70eb0e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70eb50(void) {
  LOAD_REGS();
L_70eb50: /* 70eb50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70eb52: push 0x9c2449 */
  { uint32_t v = 0x9c2449u; esp -= 4; W32(esp, v); }
/* 70eb57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70eb5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70eb5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70eb65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70eb66: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70eb67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70eb68: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70eb69: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 70eb6d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70eb70: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 70eb72: mov esi, ecx */
  esi = ecx;
/* 70eb74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70eb75: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 70eb79: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70eb7fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70eb7f: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 70eb86: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70eb89: xor ebx, ebx */
  ebx = 0;
/* 70eb8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 70eb8d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 70eb95: jle 0x70ebbb */
  if ((zf || sf != of)) goto L_70ebbb;
L_70eb97: /* 70eb97: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 70eb99: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70eb9b: mov ecx, esi */
  ecx = esi;
/* 70eb9d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70eba3u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70eba3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 70eba5: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 70eba8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 70ebaa: je 0x70ebb3 */
  if (zf) goto L_70ebb3;
L_70ebac: /* 70ebac: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 70ebae: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 70ebb1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_70ebb3: /* 70ebb3: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70ebb6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 70ebb7: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70ebb9: jl 0x70eb97 */
  if ((sf != of)) goto L_70eb97;
L_70ebbb: /* 70ebbb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70ebbf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70ebc0: mov eax, esi */
  eax = esi;
/* 70ebc2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70ebc3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70ebc4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70ebcb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70ebce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70ec10(void) {
  LOAD_REGS();
L_70ec10: /* 70ec10: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 70ec13: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 70ec19: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 70ec1b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 70ec1e: ret  */
  esp += 4; SPILL(); return;
}

void f_70ec30(void) {
  LOAD_REGS();
L_70ec30: /* 70ec30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70ec32: push 0x9c2469 */
  { uint32_t v = 0x9c2469u; esp -= 4; W32(esp, v); }
/* 70ec37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70ec3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70ec3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70ec45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70ec46: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70ec47: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70ec48: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70ec49: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 70ec4d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70ec50: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 70ec52: mov esi, ecx */
  esi = ecx;
/* 70ec54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70ec55: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 70ec59: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70ec5fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70ec5f: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 70ec66: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70ec69: xor ebx, ebx */
  ebx = 0;
/* 70ec6b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 70ec6d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 70ec75: jle 0x70ec9b */
  if ((zf || sf != of)) goto L_70ec9b;
L_70ec77: /* 70ec77: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 70ec79: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70ec7b: mov ecx, esi */
  ecx = esi;
/* 70ec7d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70ec83u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70ec83: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 70ec85: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 70ec88: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 70ec8a: je 0x70ec93 */
  if (zf) goto L_70ec93;
L_70ec8c: /* 70ec8c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 70ec8e: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 70ec91: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_70ec93: /* 70ec93: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70ec96: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 70ec97: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70ec99: jl 0x70ec77 */
  if ((sf != of)) goto L_70ec77;
L_70ec9b: /* 70ec9b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70ec9f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70eca0: mov eax, esi */
  eax = esi;
/* 70eca2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70eca3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70eca4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70ecab: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70ecae: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70ecf0(void) {
  LOAD_REGS();
L_70ecf0: /* 70ecf0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70ecf2: push 0x9c2489 */
  { uint32_t v = 0x9c2489u; esp -= 4; W32(esp, v); }
/* 70ecf7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70ecfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70ecfe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70ed05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70ed06: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70ed07: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70ed08: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70ed09: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 70ed0d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70ed10: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 70ed12: mov esi, ecx */
  esi = ecx;
/* 70ed14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70ed15: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 70ed19: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70ed1fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70ed1f: xor ebx, ebx */
  ebx = 0;
/* 70ed21: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 70ed24: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70ed27: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 70ed2b: jle 0x70ed6b */
  if ((zf || sf != of)) goto L_70ed6b;
L_70ed2d: /* 70ed2d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 70ed2e: xor ebp, ebp */
  ebp = 0;
L_70ed30: /* 70ed30: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 70ed32: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70ed34: mov ecx, esi */
  ecx = esi;
/* 70ed36: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70ed3cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70ed3c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 70ed3e: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 70ed41: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 70ed43: je 0x70ed5f */
  if (zf) goto L_70ed5f;
L_70ed45: /* 70ed45: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 70ed47: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 70ed49: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 70ed4b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 70ed4d: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 70ed50: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 70ed53: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 70ed56: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 70ed59: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 70ed5c: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
L_70ed5f: /* 70ed5f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70ed62: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 70ed63: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 70ed66: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70ed68: jl 0x70ed30 */
  if ((sf != of)) goto L_70ed30;
L_70ed6a: /* 70ed6a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_70ed6b: /* 70ed6b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70ed6f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70ed70: mov eax, esi */
  eax = esi;
/* 70ed72: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70ed73: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70ed74: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70ed7b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70ed7e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70edc0(void) {
  LOAD_REGS();
L_70edc0: /* 70edc0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70edc2: push 0x9c24a9 */
  { uint32_t v = 0x9c24a9u; esp -= 4; W32(esp, v); }
/* 70edc7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70edcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70edce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70edd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70edd6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70edd7: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 70eddb: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 70edde: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70eddf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70ede0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 70ede2: mov esi, ecx */
  esi = ecx;
/* 70ede4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70ede5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 70ede9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70edefu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70edef: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 70edf6: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 70edf9: xor edi, edi */
  edi = 0;
/* 70edfb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 70edfd: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 70ee05: jle 0x70ee32 */
  if ((zf || sf != of)) goto L_70ee32;
L_70ee07: /* 70ee07: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 70ee09: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70ee0b: mov ecx, esi */
  ecx = esi;
/* 70ee0d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70ee13u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70ee13: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 70ee15: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 70ee18: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 70ee1a: je 0x70ee2a */
  if (zf) goto L_70ee2a;
L_70ee1c: /* 70ee1c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 70ee1e: mov ecx, dword ptr [edx + edi*8] */
  ecx = R32((uint32_t)(edx + edi*8));
/* 70ee21: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 70ee23: mov edx, dword ptr [edx + edi*8 + 4] */
  edx = R32((uint32_t)(edx + edi*8 + 0x4u));
/* 70ee27: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_70ee2a: /* 70ee2a: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 70ee2d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 70ee2e: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70ee30: jl 0x70ee07 */
  if ((sf != of)) goto L_70ee07;
L_70ee32: /* 70ee32: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70ee36: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70ee37: mov eax, esi */
  eax = esi;
/* 70ee39: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70ee3a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70ee3b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70ee42: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70ee45: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70ee80(void) {
  LOAD_REGS();
L_70ee80: /* 70ee80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70ee82: push 0x9c24c9 */
  { uint32_t v = 0x9c24c9u; esp -= 4; W32(esp, v); }
/* 70ee87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70ee8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70ee8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70ee95: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 70ee98: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70ee99: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 70ee9a: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 70ee9e: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 70eea1: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 70eea3: mov ebx, ecx */
  ebx = ecx;
/* 70eea5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70eea6: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 70eeaa: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70eeb0u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70eeb0: xor eax, eax */
  eax = 0;
/* 70eeb2: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 70eeb5: cmp dword ptr [ebp + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70eeb8: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 70eebc: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 70eec0: jle 0x70ef0a */
  if ((zf || sf != of)) goto L_70ef0a;
L_70eec2: /* 70eec2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70eec3: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 70eec7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_70eec8: /* 70eec8: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 70eeca: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70eecc: mov ecx, ebx */
  ecx = ebx;
/* 70eece: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70eed4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70eed4: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 70eed6: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 70eed9: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 70eedb: je 0x70eeed */
  if (zf) goto L_70eeed;
L_70eedd: /* 70eedd: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 70eee0: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 70eee4: mov ecx, 8 */
  ecx = 0x8u;
/* 70eee9: mov edi, eax */
  edi = eax;
/* 70eeeb: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_70eeed: /* 70eeed: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 70eef1: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 70eef5: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 70eef8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 70eef9: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 70eefc: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70eefe: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 70ef02: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 70ef06: jl 0x70eec8 */
  if ((sf != of)) goto L_70eec8;
L_70ef08: /* 70ef08: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70ef09: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_70ef0a: /* 70ef0a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70ef0e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 70ef0f: mov eax, ebx */
  eax = ebx;
/* 70ef11: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70ef12: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70ef19: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70ef1c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70ef50(void) {
  LOAD_REGS();
L_70ef50: /* 70ef50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70ef52: push 0x9c24e9 */
  { uint32_t v = 0x9c24e9u; esp -= 4; W32(esp, v); }
/* 70ef57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70ef5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70ef5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70ef65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70ef66: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70ef67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70ef68: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70ef69: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 70ef6d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70ef70: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 70ef72: mov esi, ecx */
  esi = ecx;
/* 70ef74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70ef75: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 70ef79: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70ef7fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70ef7f: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 70ef86: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70ef89: xor ebx, ebx */
  ebx = 0;
/* 70ef8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 70ef8d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 70ef95: jle 0x70efbb */
  if ((zf || sf != of)) goto L_70efbb;
L_70ef97: /* 70ef97: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 70ef99: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70ef9b: mov ecx, esi */
  ecx = esi;
/* 70ef9d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70efa3u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70efa3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 70efa5: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 70efa8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 70efaa: je 0x70efb3 */
  if (zf) goto L_70efb3;
L_70efac: /* 70efac: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 70efae: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 70efb1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_70efb3: /* 70efb3: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70efb6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 70efb7: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70efb9: jl 0x70ef97 */
  if ((sf != of)) goto L_70ef97;
L_70efbb: /* 70efbb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70efbf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70efc0: mov eax, esi */
  eax = esi;
/* 70efc2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70efc3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70efc4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70efcb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70efce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70f010(void) {
  LOAD_REGS();
L_70f010: /* 70f010: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70f012: push 0x9c2509 */
  { uint32_t v = 0x9c2509u; esp -= 4; W32(esp, v); }
/* 70f017: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70f01d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70f01e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70f025: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70f026: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70f027: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 70f02b: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 70f02e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70f02f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70f030: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 70f032: mov esi, ecx */
  esi = ecx;
/* 70f034: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70f035: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 70f039: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70f03fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70f03f: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 70f046: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 70f049: xor edi, edi */
  edi = 0;
/* 70f04b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 70f04d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 70f055: jle 0x70f082 */
  if ((zf || sf != of)) goto L_70f082;
L_70f057: /* 70f057: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 70f059: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70f05b: mov ecx, esi */
  ecx = esi;
/* 70f05d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70f063u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70f063: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 70f065: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 70f068: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 70f06a: je 0x70f07a */
  if (zf) goto L_70f07a;
L_70f06c: /* 70f06c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 70f06e: mov ecx, dword ptr [edx + edi*8] */
  ecx = R32((uint32_t)(edx + edi*8));
/* 70f071: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 70f073: mov edx, dword ptr [edx + edi*8 + 4] */
  edx = R32((uint32_t)(edx + edi*8 + 0x4u));
/* 70f077: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_70f07a: /* 70f07a: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 70f07d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 70f07e: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70f080: jl 0x70f057 */
  if ((sf != of)) goto L_70f057;
L_70f082: /* 70f082: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70f086: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70f087: mov eax, esi */
  eax = esi;
/* 70f089: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70f08a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70f08b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70f092: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70f095: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70f0d0(void) {
  LOAD_REGS();
L_70f0d0: /* 70f0d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70f0d2: push 0x9c2529 */
  { uint32_t v = 0x9c2529u; esp -= 4; W32(esp, v); }
/* 70f0d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70f0dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70f0de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70f0e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70f0e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70f0e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70f0e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70f0e9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 70f0ed: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70f0f0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 70f0f2: mov esi, ecx */
  esi = ecx;
/* 70f0f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70f0f5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 70f0f9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70f0ffu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70f0ff: xor ebx, ebx */
  ebx = 0;
/* 70f101: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 70f104: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70f107: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 70f10b: jle 0x70f148 */
  if ((zf || sf != of)) goto L_70f148;
L_70f10d: /* 70f10d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 70f10e: xor ebp, ebp */
  ebp = 0;
L_70f110: /* 70f110: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 70f112: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70f114: mov ecx, esi */
  ecx = esi;
/* 70f116: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70f11cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70f11c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 70f11e: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 70f121: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 70f124: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 70f126: je 0x70f13c */
  if (zf) goto L_70f13c;
L_70f128: /* 70f128: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 70f12a: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 70f12c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 70f12e: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 70f130: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 70f133: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 70f136: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 70f139: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_70f13c: /* 70f13c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70f13f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 70f140: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 70f143: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70f145: jl 0x70f110 */
  if ((sf != of)) goto L_70f110;
L_70f147: /* 70f147: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_70f148: /* 70f148: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70f14c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70f14d: mov eax, esi */
  eax = esi;
/* 70f14f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70f150: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70f151: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70f158: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70f15b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70f190(void) {
  LOAD_REGS();
L_70f190: /* 70f190: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70f192: push 0x9c2549 */
  { uint32_t v = 0x9c2549u; esp -= 4; W32(esp, v); }
/* 70f197: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70f19d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70f19e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70f1a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70f1a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70f1a7: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 70f1ab: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 70f1ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70f1af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70f1b0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 70f1b2: mov esi, ecx */
  esi = ecx;
/* 70f1b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70f1b5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 70f1b9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70f1bfu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70f1bf: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 70f1c6: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 70f1c9: xor edi, edi */
  edi = 0;
/* 70f1cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 70f1cd: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 70f1d5: jle 0x70f202 */
  if ((zf || sf != of)) goto L_70f202;
L_70f1d7: /* 70f1d7: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 70f1d9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70f1db: mov ecx, esi */
  ecx = esi;
/* 70f1dd: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70f1e3u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70f1e3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 70f1e5: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 70f1e8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 70f1ea: je 0x70f1fa */
  if (zf) goto L_70f1fa;
L_70f1ec: /* 70f1ec: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 70f1ee: mov ecx, dword ptr [edx + edi*8] */
  ecx = R32((uint32_t)(edx + edi*8));
/* 70f1f1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 70f1f3: mov edx, dword ptr [edx + edi*8 + 4] */
  edx = R32((uint32_t)(edx + edi*8 + 0x4u));
/* 70f1f7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_70f1fa: /* 70f1fa: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 70f1fd: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 70f1fe: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70f200: jl 0x70f1d7 */
  if ((sf != of)) goto L_70f1d7;
L_70f202: /* 70f202: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70f206: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70f207: mov eax, esi */
  eax = esi;
/* 70f209: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70f20a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70f20b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70f212: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70f215: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70f250(void) {
  LOAD_REGS();
L_70f250: /* 70f250: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70f252: push 0x9c2569 */
  { uint32_t v = 0x9c2569u; esp -= 4; W32(esp, v); }
/* 70f257: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70f25d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70f25e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70f265: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70f266: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70f267: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70f268: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70f269: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 70f26d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70f270: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 70f272: mov esi, ecx */
  esi = ecx;
/* 70f274: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70f275: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 70f279: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70f27fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70f27f: xor ebx, ebx */
  ebx = 0;
/* 70f281: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 70f284: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70f287: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 70f28b: jle 0x70f2cb */
  if ((zf || sf != of)) goto L_70f2cb;
L_70f28d: /* 70f28d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 70f28e: xor ebp, ebp */
  ebp = 0;
L_70f290: /* 70f290: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 70f292: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70f294: mov ecx, esi */
  ecx = esi;
/* 70f296: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70f29cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70f29c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 70f29e: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 70f2a1: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 70f2a3: je 0x70f2bf */
  if (zf) goto L_70f2bf;
L_70f2a5: /* 70f2a5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 70f2a7: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 70f2a9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 70f2ab: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 70f2ad: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 70f2b0: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 70f2b3: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 70f2b6: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 70f2b9: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 70f2bc: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
L_70f2bf: /* 70f2bf: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70f2c2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 70f2c3: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 70f2c6: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70f2c8: jl 0x70f290 */
  if ((sf != of)) goto L_70f290;
L_70f2ca: /* 70f2ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_70f2cb: /* 70f2cb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70f2cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70f2d0: mov eax, esi */
  eax = esi;
/* 70f2d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70f2d3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70f2d4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70f2db: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70f2de: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70f320(void) {
  LOAD_REGS();
L_70f320: /* 70f320: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 70f324: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70f325: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 70f327: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x70f32du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 70f32d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70f340(void) {
  LOAD_REGS();
L_70f340: /* 70f340: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70f341: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70f342: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70f343: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 70f347: mov esi, ecx */
  esi = ecx;
/* 70f349: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 70f34b: je 0x70f3a0 */
  if (zf) goto L_70f3a0;
L_70f34d: /* 70f34d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70f350: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70f351: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 70f353: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x70f359u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 70f359: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70f35c: xor ebx, ebx */
  ebx = 0;
/* 70f35e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 70f360: jle 0x70f3a0 */
  if ((zf || sf != of)) goto L_70f3a0;
L_70f362: /* 70f362: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 70f363: xor ebp, ebp */
  ebp = 0;
L_70f365: /* 70f365: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 70f367: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70f369: mov ecx, esi */
  ecx = esi;
/* 70f36b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70f371u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70f371: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 70f373: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 70f376: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 70f378: je 0x70f394 */
  if (zf) goto L_70f394;
L_70f37a: /* 70f37a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 70f37c: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 70f37e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 70f380: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 70f382: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 70f385: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 70f388: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 70f38b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 70f38e: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 70f391: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
L_70f394: /* 70f394: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70f397: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 70f398: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 70f39b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70f39d: jl 0x70f365 */
  if ((sf != of)) goto L_70f365;
L_70f39f: /* 70f39f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_70f3a0: /* 70f3a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70f3a1: mov eax, esi */
  eax = esi;
/* 70f3a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70f3a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70f3a5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70f3d0(void) {
  LOAD_REGS();
L_70f3d0: /* 70f3d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70f3d2: push 0x9c2589 */
  { uint32_t v = 0x9c2589u; esp -= 4; W32(esp, v); }
/* 70f3d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70f3dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70f3de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70f3e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70f3e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70f3e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70f3e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70f3e9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 70f3ed: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70f3f0: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 70f3f2: mov esi, ecx */
  esi = ecx;
/* 70f3f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70f3f5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 70f3f9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70f3ffu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70f3ff: xor ebx, ebx */
  ebx = 0;
/* 70f401: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 70f404: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70f407: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 70f40b: jle 0x70f444 */
  if ((zf || sf != of)) goto L_70f444;
L_70f40d: /* 70f40d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 70f40e: xor ebp, ebp */
  ebp = 0;
L_70f410: /* 70f410: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 70f412: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70f414: mov ecx, esi */
  ecx = esi;
/* 70f416: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70f41cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70f41c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 70f41e: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 70f421: lea eax, [edx + ecx*2] */
  eax = (uint32_t)(edx + ecx*2);
/* 70f424: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 70f426: je 0x70f438 */
  if (zf) goto L_70f438;
L_70f428: /* 70f428: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 70f42a: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 70f42c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 70f42e: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 70f430: mov cx, word ptr [ecx + 4] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x4u))) & 0xffffu);
/* 70f434: mov word ptr [eax + 4], cx */
  W16((uint32_t)(eax + 0x4u), (ecx & 0xffffu));
L_70f438: /* 70f438: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70f43b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 70f43c: add ebp, 6 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 70f43f: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70f441: jl 0x70f410 */
  if ((sf != of)) goto L_70f410;
L_70f443: /* 70f443: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_70f444: /* 70f444: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70f448: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70f449: mov eax, esi */
  eax = esi;
/* 70f44b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70f44c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70f44d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70f454: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70f457: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70f490(void) {
  LOAD_REGS();
L_70f490: /* 70f490: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 70f494: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70f495: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 70f497: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x70f49du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 70f49d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70f4b0(void) {
  LOAD_REGS();
L_70f4b0: /* 70f4b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70f4b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70f4b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70f4b3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 70f4b7: mov esi, ecx */
  esi = ecx;
/* 70f4b9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 70f4bb: je 0x70f509 */
  if (zf) goto L_70f509;
L_70f4bd: /* 70f4bd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70f4c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70f4c1: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 70f4c3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x70f4c9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 70f4c9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70f4cc: xor ebx, ebx */
  ebx = 0;
/* 70f4ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 70f4d0: jle 0x70f509 */
  if ((zf || sf != of)) goto L_70f509;
L_70f4d2: /* 70f4d2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 70f4d3: xor ebp, ebp */
  ebp = 0;
L_70f4d5: /* 70f4d5: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 70f4d7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70f4d9: mov ecx, esi */
  ecx = esi;
/* 70f4db: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70f4e1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70f4e1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 70f4e3: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 70f4e6: lea eax, [ecx + eax*2] */
  eax = (uint32_t)(ecx + eax*2);
/* 70f4e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 70f4eb: je 0x70f4fd */
  if (zf) goto L_70f4fd;
L_70f4ed: /* 70f4ed: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 70f4ef: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 70f4f1: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 70f4f3: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 70f4f5: mov dx, word ptr [edx + 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + 0x4u))) & 0xffffu);
/* 70f4f9: mov word ptr [eax + 4], dx */
  W16((uint32_t)(eax + 0x4u), (edx & 0xffffu));
L_70f4fd: /* 70f4fd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70f500: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 70f501: add ebp, 6 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 70f504: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70f506: jl 0x70f4d5 */
  if ((sf != of)) goto L_70f4d5;
L_70f508: /* 70f508: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_70f509: /* 70f509: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70f50a: mov eax, esi */
  eax = esi;
/* 70f50c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70f50d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70f50e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70f540(void) {
  LOAD_REGS();
L_70f540: /* 70f540: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70f542: push 0x9c25a9 */
  { uint32_t v = 0x9c25a9u; esp -= 4; W32(esp, v); }
/* 70f547: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70f54d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70f54e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70f555: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70f556: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70f557: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70f558: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70f559: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 70f55d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70f560: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 70f562: mov esi, ecx */
  esi = ecx;
/* 70f564: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70f565: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 70f569: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70f56fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70f56f: xor ebx, ebx */
  ebx = 0;
/* 70f571: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 70f574: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70f577: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 70f57b: jle 0x70f5b8 */
  if ((zf || sf != of)) goto L_70f5b8;
L_70f57d: /* 70f57d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 70f57e: xor ebp, ebp */
  ebp = 0;
L_70f580: /* 70f580: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 70f582: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70f584: mov ecx, esi */
  ecx = esi;
/* 70f586: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70f58cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70f58c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 70f58e: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 70f591: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 70f594: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 70f596: je 0x70f5ac */
  if (zf) goto L_70f5ac;
L_70f598: /* 70f598: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 70f59a: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 70f59c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 70f59e: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 70f5a0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 70f5a3: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 70f5a6: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 70f5a9: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_70f5ac: /* 70f5ac: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70f5af: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 70f5b0: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 70f5b3: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70f5b5: jl 0x70f580 */
  if ((sf != of)) goto L_70f580;
L_70f5b7: /* 70f5b7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_70f5b8: /* 70f5b8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70f5bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70f5bd: mov eax, esi */
  eax = esi;
/* 70f5bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70f5c0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70f5c1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70f5c8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70f5cb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70f600(void) {
  LOAD_REGS();
L_70f600: /* 70f600: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70f602: push 0x9c25c9 */
  { uint32_t v = 0x9c25c9u; esp -= 4; W32(esp, v); }
/* 70f607: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70f60d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70f60e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70f615: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70f616: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70f617: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 70f61b: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 70f61e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70f61f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70f620: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 70f622: mov esi, ecx */
  esi = ecx;
/* 70f624: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70f625: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 70f629: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70f62fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70f62f: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 70f636: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 70f639: xor edi, edi */
  edi = 0;
/* 70f63b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 70f63d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 70f645: jle 0x70f672 */
  if ((zf || sf != of)) goto L_70f672;
L_70f647: /* 70f647: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 70f649: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70f64b: mov ecx, esi */
  ecx = esi;
/* 70f64d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70f653u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70f653: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 70f655: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 70f658: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 70f65a: je 0x70f66a */
  if (zf) goto L_70f66a;
L_70f65c: /* 70f65c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 70f65e: mov ecx, dword ptr [edx + edi*8] */
  ecx = R32((uint32_t)(edx + edi*8));
/* 70f661: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 70f663: mov edx, dword ptr [edx + edi*8 + 4] */
  edx = R32((uint32_t)(edx + edi*8 + 0x4u));
/* 70f667: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_70f66a: /* 70f66a: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 70f66d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 70f66e: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70f670: jl 0x70f647 */
  if ((sf != of)) goto L_70f647;
L_70f672: /* 70f672: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70f676: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70f677: mov eax, esi */
  eax = esi;
/* 70f679: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70f67a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70f67b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70f682: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70f685: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70f6c0(void) {
  LOAD_REGS();
L_70f6c0: /* 70f6c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70f6c2: push 0x9c25e9 */
  { uint32_t v = 0x9c25e9u; esp -= 4; W32(esp, v); }
/* 70f6c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70f6cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70f6ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70f6d5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 70f6d8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70f6d9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 70f6da: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 70f6de: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 70f6e1: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 70f6e3: mov ebx, ecx */
  ebx = ecx;
/* 70f6e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70f6e6: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 70f6ea: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70f6f0u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70f6f0: xor eax, eax */
  eax = 0;
/* 70f6f2: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 70f6f5: cmp dword ptr [ebp + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70f6f8: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 70f6fc: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 70f700: jle 0x70f74b */
  if ((zf || sf != of)) goto L_70f74b;
L_70f702: /* 70f702: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70f703: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 70f707: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_70f708: /* 70f708: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 70f70a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70f70c: mov ecx, ebx */
  ecx = ebx;
/* 70f70e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70f714u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70f714: lea edi, [eax + eax*2] */
  edi = (uint32_t)(eax + eax*2);
/* 70f717: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 70f719: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 70f71c: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  edi = r;
  }
/* 70f71e: je 0x70f72e */
  if (zf) goto L_70f72e;
L_70f720: /* 70f720: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 70f723: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 70f727: mov ecx, 0xc */
  ecx = 0xcu;
/* 70f72c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_70f72e: /* 70f72e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 70f732: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 70f736: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 70f739: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 70f73a: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 70f73d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70f73f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 70f743: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 70f747: jl 0x70f708 */
  if ((sf != of)) goto L_70f708;
L_70f749: /* 70f749: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70f74a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_70f74b: /* 70f74b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70f74f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 70f750: mov eax, ebx */
  eax = ebx;
/* 70f752: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70f753: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70f75a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70f75d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70f790(void) {
  LOAD_REGS();
L_70f790: /* 70f790: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70f792: push 0x9c2609 */
  { uint32_t v = 0x9c2609u; esp -= 4; W32(esp, v); }
/* 70f797: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70f79d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70f79e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70f7a5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 70f7a8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70f7a9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 70f7aa: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 70f7ae: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 70f7b1: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 70f7b3: mov ebx, ecx */
  ebx = ecx;
/* 70f7b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70f7b6: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 70f7ba: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70f7c0u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70f7c0: xor eax, eax */
  eax = 0;
/* 70f7c2: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 70f7c5: cmp dword ptr [ebp + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70f7c8: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 70f7cc: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 70f7d0: jle 0x70f818 */
  if ((zf || sf != of)) goto L_70f818;
L_70f7d2: /* 70f7d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70f7d3: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 70f7d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_70f7d8: /* 70f7d8: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 70f7da: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70f7dc: mov ecx, ebx */
  ecx = ebx;
/* 70f7de: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70f7e4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70f7e4: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 70f7e7: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 70f7e9: je 0x70f7fb */
  if (zf) goto L_70f7fb;
L_70f7eb: /* 70f7eb: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 70f7ee: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 70f7f2: mov ecx, 0x1c */
  ecx = 0x1cu;
/* 70f7f7: mov edi, eax */
  edi = eax;
/* 70f7f9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_70f7fb: /* 70f7fb: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 70f7ff: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 70f803: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 70f806: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 70f807: add edx, 0x70 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 70f80a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70f80c: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 70f810: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 70f814: jl 0x70f7d8 */
  if ((sf != of)) goto L_70f7d8;
L_70f816: /* 70f816: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70f817: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_70f818: /* 70f818: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70f81c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 70f81d: mov eax, ebx */
  eax = ebx;
/* 70f81f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70f820: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70f827: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70f82a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70f860(void) {
  LOAD_REGS();
L_70f860: /* 70f860: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70f862: push 0x9c2629 */
  { uint32_t v = 0x9c2629u; esp -= 4; W32(esp, v); }
/* 70f867: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70f86d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70f86e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70f875: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 70f878: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70f879: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 70f87a: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 70f87e: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 70f881: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 70f883: mov ebx, ecx */
  ebx = ecx;
/* 70f885: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70f886: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 70f88a: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70f890u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70f890: xor eax, eax */
  eax = 0;
/* 70f892: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 70f895: cmp dword ptr [ebp + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70f898: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 70f89c: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 70f8a0: jle 0x70f8e8 */
  if ((zf || sf != of)) goto L_70f8e8;
L_70f8a2: /* 70f8a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70f8a3: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 70f8a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_70f8a8: /* 70f8a8: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 70f8aa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70f8ac: mov ecx, ebx */
  ecx = ebx;
/* 70f8ae: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70f8b4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70f8b4: imul eax, eax, 0x3c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x3cu);
  eax = (uint32_t)r;
  }
/* 70f8b7: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 70f8b9: je 0x70f8cb */
  if (zf) goto L_70f8cb;
L_70f8bb: /* 70f8bb: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 70f8be: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 70f8c2: mov ecx, 0xf */
  ecx = 0xfu;
/* 70f8c7: mov edi, eax */
  edi = eax;
/* 70f8c9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_70f8cb: /* 70f8cb: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 70f8cf: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 70f8d3: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 70f8d6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 70f8d7: add edx, 0x3c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 70f8da: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70f8dc: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 70f8e0: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 70f8e4: jl 0x70f8a8 */
  if ((sf != of)) goto L_70f8a8;
L_70f8e6: /* 70f8e6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70f8e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_70f8e8: /* 70f8e8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70f8ec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 70f8ed: mov eax, ebx */
  eax = ebx;
/* 70f8ef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70f8f0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70f8f7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70f8fa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70f930(void) {
  LOAD_REGS();
L_70f930: /* 70f930: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70f932: push 0x9c2649 */
  { uint32_t v = 0x9c2649u; esp -= 4; W32(esp, v); }
/* 70f937: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70f93d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70f93e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70f945: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 70f948: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70f949: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 70f94a: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 70f94e: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 70f951: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 70f953: mov ebx, ecx */
  ebx = ecx;
/* 70f955: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70f956: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 70f95a: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70f960u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70f960: xor eax, eax */
  eax = 0;
/* 70f962: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 70f965: cmp dword ptr [ebp + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70f968: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 70f96c: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 70f970: jle 0x70f9b8 */
  if ((zf || sf != of)) goto L_70f9b8;
L_70f972: /* 70f972: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70f973: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 70f977: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_70f978: /* 70f978: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 70f97a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70f97c: mov ecx, ebx */
  ecx = ebx;
/* 70f97e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70f984u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70f984: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 70f987: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 70f989: je 0x70f99b */
  if (zf) goto L_70f99b;
L_70f98b: /* 70f98b: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 70f98e: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 70f992: mov ecx, 0xb */
  ecx = 0xbu;
/* 70f997: mov edi, eax */
  edi = eax;
/* 70f999: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_70f99b: /* 70f99b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 70f99f: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 70f9a3: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 70f9a6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 70f9a7: add edx, 0x2c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 70f9aa: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70f9ac: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 70f9b0: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 70f9b4: jl 0x70f978 */
  if ((sf != of)) goto L_70f978;
L_70f9b6: /* 70f9b6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70f9b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_70f9b8: /* 70f9b8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70f9bc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 70f9bd: mov eax, ebx */
  eax = ebx;
/* 70f9bf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70f9c0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70f9c7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70f9ca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70fa00(void) {
  LOAD_REGS();
L_70fa00: /* 70fa00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70fa02: push 0x9c2669 */
  { uint32_t v = 0x9c2669u; esp -= 4; W32(esp, v); }
/* 70fa07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70fa0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70fa0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70fa15: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 70fa18: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70fa19: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 70fa1a: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 70fa1e: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 70fa21: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 70fa23: mov ebx, ecx */
  ebx = ecx;
/* 70fa25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70fa26: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 70fa2a: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70fa30u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70fa30: xor eax, eax */
  eax = 0;
/* 70fa32: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 70fa35: cmp dword ptr [ebp + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70fa38: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 70fa3c: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 70fa40: jle 0x70fa8a */
  if ((zf || sf != of)) goto L_70fa8a;
L_70fa42: /* 70fa42: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70fa43: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 70fa47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_70fa48: /* 70fa48: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 70fa4a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70fa4c: mov ecx, ebx */
  ecx = ebx;
/* 70fa4e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70fa54u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70fa54: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 70fa56: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 70fa59: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 70fa5b: je 0x70fa6d */
  if (zf) goto L_70fa6d;
L_70fa5d: /* 70fa5d: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 70fa60: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 70fa64: mov ecx, 8 */
  ecx = 0x8u;
/* 70fa69: mov edi, eax */
  edi = eax;
/* 70fa6b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_70fa6d: /* 70fa6d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 70fa71: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 70fa75: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 70fa78: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 70fa79: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 70fa7c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70fa7e: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 70fa82: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 70fa86: jl 0x70fa48 */
  if ((sf != of)) goto L_70fa48;
L_70fa88: /* 70fa88: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70fa89: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_70fa8a: /* 70fa8a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70fa8e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 70fa8f: mov eax, ebx */
  eax = ebx;
/* 70fa91: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70fa92: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70fa99: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70fa9c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70fad0(void) {
  LOAD_REGS();
L_70fad0: /* 70fad0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70fad2: push 0x9c2689 */
  { uint32_t v = 0x9c2689u; esp -= 4; W32(esp, v); }
/* 70fad7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70fadd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70fade: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70fae5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70fae6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70fae7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70fae8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70fae9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 70faed: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70faf0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 70faf2: mov esi, ecx */
  esi = ecx;
/* 70faf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70faf5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 70faf9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70faffu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70faff: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 70fb06: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70fb09: xor ebx, ebx */
  ebx = 0;
/* 70fb0b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 70fb0d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 70fb15: jle 0x70fb3b */
  if ((zf || sf != of)) goto L_70fb3b;
L_70fb17: /* 70fb17: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 70fb19: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70fb1b: mov ecx, esi */
  ecx = esi;
/* 70fb1d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70fb23u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70fb23: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 70fb25: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 70fb28: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 70fb2a: je 0x70fb33 */
  if (zf) goto L_70fb33;
L_70fb2c: /* 70fb2c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 70fb2e: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 70fb31: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_70fb33: /* 70fb33: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70fb36: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 70fb37: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70fb39: jl 0x70fb17 */
  if ((sf != of)) goto L_70fb17;
L_70fb3b: /* 70fb3b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70fb3f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70fb40: mov eax, esi */
  eax = esi;
/* 70fb42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70fb43: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70fb44: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70fb4b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70fb4e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70fb90(void) {
  LOAD_REGS();
L_70fb90: /* 70fb90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70fb92: push 0x9c26a9 */
  { uint32_t v = 0x9c26a9u; esp -= 4; W32(esp, v); }
/* 70fb97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70fb9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70fb9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70fba5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70fba6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70fba7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70fba8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70fba9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 70fbad: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70fbb0: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 70fbb2: mov esi, ecx */
  esi = ecx;
/* 70fbb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70fbb5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 70fbb9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70fbbfu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70fbbf: xor ebx, ebx */
  ebx = 0;
/* 70fbc1: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 70fbc4: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70fbc7: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 70fbcb: jle 0x70fbfe */
  if ((zf || sf != of)) goto L_70fbfe;
L_70fbcd: /* 70fbcd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 70fbce: xor ebp, ebp */
  ebp = 0;
L_70fbd0: /* 70fbd0: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 70fbd2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70fbd4: mov ecx, esi */
  ecx = esi;
/* 70fbd6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70fbdcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70fbdc: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 70fbde: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 70fbe1: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 70fbe4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 70fbe6: je 0x70fbf2 */
  if (zf) goto L_70fbf2;
L_70fbe8: /* 70fbe8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 70fbea: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 70fbec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70fbed: call 0x6c9034 */
  esp -= 4; W32(esp, 0x70fbf2u); SPILL(); f_6c9034(); if (g_unwind) return; RELOAD();
L_70fbf2: /* 70fbf2: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70fbf5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 70fbf6: add ebp, 0x28 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 70fbf9: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70fbfb: jl 0x70fbd0 */
  if ((sf != of)) goto L_70fbd0;
L_70fbfd: /* 70fbfd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_70fbfe: /* 70fbfe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70fc02: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70fc03: mov eax, esi */
  eax = esi;
/* 70fc05: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70fc06: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70fc07: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70fc0e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70fc11: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70fc50(void) {
  LOAD_REGS();
L_70fc50: /* 70fc50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70fc52: push 0x9c26c9 */
  { uint32_t v = 0x9c26c9u; esp -= 4; W32(esp, v); }
/* 70fc57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70fc5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70fc5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70fc65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70fc66: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70fc67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70fc68: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70fc69: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 70fc6d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70fc70: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 70fc72: mov esi, ecx */
  esi = ecx;
/* 70fc74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70fc75: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 70fc79: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70fc7fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70fc7f: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 70fc86: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70fc89: xor ebx, ebx */
  ebx = 0;
/* 70fc8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 70fc8d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 70fc95: jle 0x70fcbb */
  if ((zf || sf != of)) goto L_70fcbb;
L_70fc97: /* 70fc97: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 70fc99: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70fc9b: mov ecx, esi */
  ecx = esi;
/* 70fc9d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70fca3u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70fca3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 70fca5: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 70fca8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 70fcaa: je 0x70fcb3 */
  if (zf) goto L_70fcb3;
L_70fcac: /* 70fcac: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 70fcae: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 70fcb1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_70fcb3: /* 70fcb3: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70fcb6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 70fcb7: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70fcb9: jl 0x70fc97 */
  if ((sf != of)) goto L_70fc97;
L_70fcbb: /* 70fcbb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70fcbf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70fcc0: mov eax, esi */
  eax = esi;
/* 70fcc2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70fcc3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70fcc4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70fccb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70fcce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70fd10(void) {
  LOAD_REGS();
L_70fd10: /* 70fd10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 70fd11: mov ebp, esp */
  ebp = esp;
/* 70fd13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70fd15: push 0x9c26e0 */
  { uint32_t v = 0x9c26e0u; esp -= 4; W32(esp, v); }
/* 70fd1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70fd20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70fd21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70fd28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 70fd2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70fd2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70fd2d: mov esi, ecx */
  esi = ecx;
/* 70fd2f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 70fd32: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 70fd34: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70fd35: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 70fd38: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 70fd3f: jle 0x70fd78 */
  if ((zf || sf != of)) goto L_70fd78;
L_70fd41: /* 70fd41: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 70fd44: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 70fd46: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x70fd49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 70fd49: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 70fd4c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 70fd4e: mov edi, eax */
  edi = eax;
/* 70fd50: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 70fd53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70fd54: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x70fd57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 70fd57: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 70fd5a: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 70fd5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70fd5e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 70fd5f: call 0x6c67cb */
  esp -= 4; W32(esp, 0x70fd64u); SPILL(); f_6c67cb(); if (g_unwind) return; RELOAD();
/* 70fd64: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 70fd67: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 70fd6a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 70fd6c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70fd6f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 70fd72: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 70fd74: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70fd75: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x70fd78u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_70fd78: /* 70fd78: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 70fd7b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70fd7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70fd7d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70fd84: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70fd85: mov esp, ebp */
  esp = ebp;
/* 70fd87: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 70fd88: ret  */
  esp += 4; SPILL(); return;
}

void f_70fd89(void) {
  LOAD_REGS();
L_70fd89: /* 70fd89: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 70fd8c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 70fd91: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 70fd94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70fd95: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 70fd98: call 0x99caf8 */
  esp -= 4; W32(esp, 0x70fd9du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_70fd9d(); return;
}

void f_70fd9d(void) {
  LOAD_REGS();
L_70fd9d: /* 70fd9d: push 0x9f7f9c */
  { uint32_t v = 0x9f7f9cu; esp -= 4; W32(esp, v); }
/* 70fda2: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 70fda7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x70fdadu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 70fdad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70fdb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 70fdb2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 70fdb4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x70fdb9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_70fdb9: guest_badaddr(0x70fdb9); return;
}

void f_70fdf0(void) {
  LOAD_REGS();
L_70fdf0: /* 70fdf0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70fdf2: push 0x9c26f9 */
  { uint32_t v = 0x9c26f9u; esp -= 4; W32(esp, v); }
/* 70fdf7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70fdfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70fdfe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70fe05: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 70fe08: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70fe09: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 70fe0a: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 70fe0e: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 70fe11: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 70fe13: mov ebx, ecx */
  ebx = ecx;
/* 70fe15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70fe16: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 70fe1a: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70fe20u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70fe20: xor eax, eax */
  eax = 0;
/* 70fe22: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 70fe25: cmp dword ptr [ebp + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70fe28: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 70fe2c: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 70fe30: jle 0x70fe7a */
  if ((zf || sf != of)) goto L_70fe7a;
L_70fe32: /* 70fe32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70fe33: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 70fe37: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_70fe38: /* 70fe38: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 70fe3a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70fe3c: mov ecx, ebx */
  ecx = ebx;
/* 70fe3e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70fe44u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70fe44: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 70fe46: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 70fe49: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 70fe4b: je 0x70fe5d */
  if (zf) goto L_70fe5d;
L_70fe4d: /* 70fe4d: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 70fe50: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 70fe54: mov ecx, 0x10 */
  ecx = 0x10u;
/* 70fe59: mov edi, eax */
  edi = eax;
/* 70fe5b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_70fe5d: /* 70fe5d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 70fe61: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 70fe65: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 70fe68: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 70fe69: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 70fe6c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70fe6e: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 70fe72: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 70fe76: jl 0x70fe38 */
  if ((sf != of)) goto L_70fe38;
L_70fe78: /* 70fe78: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70fe79: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_70fe7a: /* 70fe7a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70fe7e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 70fe7f: mov eax, ebx */
  eax = ebx;
/* 70fe81: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 70fe82: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70fe89: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70fe8c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70fec0(void) {
  LOAD_REGS();
L_70fec0: /* 70fec0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70fec2: push 0x9c2719 */
  { uint32_t v = 0x9c2719u; esp -= 4; W32(esp, v); }
/* 70fec7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70fecd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70fece: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70fed5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 70fed8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 70fed9: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 70fedd: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 70fee0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70fee1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 70fee3: mov edi, ecx */
  edi = ecx;
/* 70fee5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70fee6: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 70feea: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70fef0u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70fef0: xor eax, eax */
  eax = 0;
/* 70fef2: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 70fef5: cmp dword ptr [ebp + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70fef8: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 70fefc: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 70ff00: jle 0x70ff52 */
  if ((zf || sf != of)) goto L_70ff52;
L_70ff02: /* 70ff02: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70ff03: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 70ff07: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_70ff08: /* 70ff08: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 70ff0a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70ff0c: mov ecx, edi */
  ecx = edi;
/* 70ff0e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70ff14u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70ff14: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 70ff16: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 70ff19: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 70ff1b: mov ebx, eax */
  ebx = eax;
/* 70ff1d: je 0x70ff35 */
  if (zf) goto L_70ff35;
L_70ff1f: /* 70ff1f: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 70ff22: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 70ff26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70ff27: mov ecx, ebx */
  ecx = ebx;
/* 70ff29: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x70ff2fu); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 70ff2f: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 70ff32: mov dword ptr [ebx + 0xc], ecx */
  W32((uint32_t)(ebx + 0xcu), ecx);
L_70ff35: /* 70ff35: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 70ff39: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 70ff3d: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 70ff40: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 70ff41: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 70ff44: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 70ff46: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 70ff4a: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 70ff4e: jl 0x70ff08 */
  if ((sf != of)) goto L_70ff08;
L_70ff50: /* 70ff50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 70ff51: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_70ff52: /* 70ff52: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 70ff56: mov eax, edi */
  eax = edi;
/* 70ff58: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 70ff59: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 70ff5a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 70ff61: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 70ff64: ret 4 */
  esp += 8; SPILL(); return;
}

void f_70ffa0(void) {
  LOAD_REGS();
L_70ffa0: /* 70ffa0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 70ffa2: push 0x9c2739 */
  { uint32_t v = 0x9c2739u; esp -= 4; W32(esp, v); }
/* 70ffa7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 70ffad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70ffae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 70ffb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 70ffb6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 70ffb7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 70ffb8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 70ffb9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 70ffbd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70ffc0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 70ffc2: mov esi, ecx */
  esi = ecx;
/* 70ffc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 70ffc5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 70ffc9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x70ffcfu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 70ffcf: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 70ffd6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 70ffd9: xor ebx, ebx */
  ebx = 0;
/* 70ffdb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 70ffdd: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 70ffe5: jle 0x71000b */
  if ((zf || sf != of)) goto L_71000b;
L_70ffe7: /* 70ffe7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 70ffe9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 70ffeb: mov ecx, esi */
  ecx = esi;
/* 70ffed: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x70fff3u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 70fff3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 70fff5: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 70fff8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 70fffa: je 0x710003 */
  if (zf) goto L_710003;
L_70fffc: /* 70fffc: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 70fffe: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 710001: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_710003: /* 710003: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 710006: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 710007: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 710009: jl 0x70ffe7 */
  if ((sf != of)) goto L_70ffe7;
L_71000b: /* 71000b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71000f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 710010: mov eax, esi */
  eax = esi;
/* 710012: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 710013: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 710014: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71001b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71001e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_710060(void) {
  LOAD_REGS();
L_710060: /* 710060: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 710062: push 0x9c2759 */
  { uint32_t v = 0x9c2759u; esp -= 4; W32(esp, v); }
/* 710067: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71006d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71006e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 710075: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 710076: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 710077: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 710078: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 710079: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 71007d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 710080: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 710082: mov esi, ecx */
  esi = ecx;
/* 710084: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 710085: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 710089: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x71008fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 71008f: xor ebx, ebx */
  ebx = 0;
/* 710091: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 710094: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 710097: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 71009b: jle 0x7100db */
  if ((zf || sf != of)) goto L_7100db;
L_71009d: /* 71009d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71009e: xor ebp, ebp */
  ebp = 0;
L_7100a0: /* 7100a0: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7100a2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7100a4: mov ecx, esi */
  ecx = esi;
/* 7100a6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7100acu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7100ac: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7100ae: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7100b1: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 7100b3: je 0x7100cf */
  if (zf) goto L_7100cf;
L_7100b5: /* 7100b5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7100b7: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7100b9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7100bb: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7100bd: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7100c0: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7100c3: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 7100c6: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7100c9: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 7100cc: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
L_7100cf: /* 7100cf: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7100d2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7100d3: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7100d6: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7100d8: jl 0x7100a0 */
  if ((sf != of)) goto L_7100a0;
L_7100da: /* 7100da: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_7100db: /* 7100db: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7100df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7100e0: mov eax, esi */
  eax = esi;
/* 7100e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7100e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7100e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7100eb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7100ee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_710130(void) {
  LOAD_REGS();
L_710130: /* 710130: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 710132: push 0x9c2779 */
  { uint32_t v = 0x9c2779u; esp -= 4; W32(esp, v); }
/* 710137: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71013d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71013e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 710145: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 710148: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 710149: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71014a: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 71014e: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 710151: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 710152: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 710154: mov ebx, ecx */
  ebx = ecx;
/* 710156: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 710157: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 71015b: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x710161u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 710161: xor esi, esi */
  esi = 0;
/* 710163: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 710166: cmp dword ptr [ebp + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 710169: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 71016d: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 710171: jle 0x7101bc */
  if ((zf || sf != of)) goto L_7101bc;
L_710173: /* 710173: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 710177: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_710178: /* 710178: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 71017a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71017c: mov ecx, ebx */
  ecx = ebx;
/* 71017e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x710184u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 710184: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 710186: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 710189: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 71018c: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71018e: je 0x7101a0 */
  if (zf) goto L_7101a0;
L_710190: /* 710190: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 710193: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 710197: mov ecx, 5 */
  ecx = 0x5u;
/* 71019c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 71019e: xor esi, esi */
  esi = 0;
L_7101a0: /* 7101a0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7101a4: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 7101a8: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 7101ab: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7101ac: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7101af: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7101b1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7101b5: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 7101b9: jl 0x710178 */
  if ((sf != of)) goto L_710178;
L_7101bb: /* 7101bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_7101bc: /* 7101bc: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7101c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7101c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7101c2: mov eax, ebx */
  eax = ebx;
/* 7101c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7101c5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7101cc: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7101cf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_710210(void) {
  LOAD_REGS();
L_710210: /* 710210: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 710212: push 0x9c2799 */
  { uint32_t v = 0x9c2799u; esp -= 4; W32(esp, v); }
/* 710217: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71021d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71021e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 710225: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 710228: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 710229: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71022a: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 71022e: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 710231: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 710233: mov ebx, ecx */
  ebx = ecx;
/* 710235: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 710236: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 71023a: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x710240u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 710240: xor eax, eax */
  eax = 0;
/* 710242: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 710245: cmp dword ptr [ebp + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 710248: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 71024c: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 710250: jle 0x710298 */
  if ((zf || sf != of)) goto L_710298;
L_710252: /* 710252: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 710253: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 710257: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_710258: /* 710258: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 71025a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71025c: mov ecx, ebx */
  ecx = ebx;
/* 71025e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x710264u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 710264: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 710267: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 710269: je 0x71027b */
  if (zf) goto L_71027b;
L_71026b: /* 71026b: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 71026e: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 710272: mov ecx, 7 */
  ecx = 0x7u;
/* 710277: mov edi, eax */
  edi = eax;
/* 710279: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_71027b: /* 71027b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 71027f: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 710283: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 710286: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 710287: add edx, 0x1c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 71028a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71028c: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 710290: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 710294: jl 0x710258 */
  if ((sf != of)) goto L_710258;
L_710296: /* 710296: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 710297: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_710298: /* 710298: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71029c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71029d: mov eax, ebx */
  eax = ebx;
/* 71029f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7102a0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7102a7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7102aa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7102e0(void) {
  LOAD_REGS();
L_7102e0: /* 7102e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7102e2: push 0x9c27b9 */
  { uint32_t v = 0x9c27b9u; esp -= 4; W32(esp, v); }
/* 7102e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7102ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7102ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7102f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7102f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7102f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7102f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7102f9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 7102fd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 710300: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 710302: mov esi, ecx */
  esi = ecx;
/* 710304: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 710305: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 710309: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x71030fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 71030f: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 710316: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 710319: xor ebx, ebx */
  ebx = 0;
/* 71031b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71031d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 710325: jle 0x71034b */
  if ((zf || sf != of)) goto L_71034b;
L_710327: /* 710327: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 710329: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71032b: mov ecx, esi */
  ecx = esi;
/* 71032d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x710333u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 710333: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 710335: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 710338: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71033a: je 0x710343 */
  if (zf) goto L_710343;
L_71033c: /* 71033c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 71033e: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 710341: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_710343: /* 710343: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 710346: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 710347: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 710349: jl 0x710327 */
  if ((sf != of)) goto L_710327;
L_71034b: /* 71034b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71034f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 710350: mov eax, esi */
  eax = esi;
/* 710352: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 710353: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 710354: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71035b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71035e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7103a0(void) {
  LOAD_REGS();
L_7103a0: /* 7103a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7103a2: push 0x9c27d9 */
  { uint32_t v = 0x9c27d9u; esp -= 4; W32(esp, v); }
/* 7103a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7103ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7103ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7103b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7103b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7103b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7103b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7103b9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 7103bd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7103c0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7103c2: mov esi, ecx */
  esi = ecx;
/* 7103c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7103c5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 7103c9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x7103cfu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 7103cf: xor ebx, ebx */
  ebx = 0;
/* 7103d1: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 7103d4: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7103d7: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 7103db: jle 0x710418 */
  if ((zf || sf != of)) goto L_710418;
L_7103dd: /* 7103dd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7103de: xor ebp, ebp */
  ebp = 0;
L_7103e0: /* 7103e0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7103e2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7103e4: mov ecx, esi */
  ecx = esi;
/* 7103e6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7103ecu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7103ec: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7103ee: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7103f1: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 7103f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7103f6: je 0x71040c */
  if (zf) goto L_71040c;
L_7103f8: /* 7103f8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7103fa: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7103fc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7103fe: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 710400: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 710403: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 710406: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 710409: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_71040c: /* 71040c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71040f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 710410: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 710413: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 710415: jl 0x7103e0 */
  if ((sf != of)) goto L_7103e0;
L_710417: /* 710417: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_710418: /* 710418: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71041c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71041d: mov eax, esi */
  eax = esi;
/* 71041f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 710420: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 710421: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 710428: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71042b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_710460(void) {
  LOAD_REGS();
L_710460: /* 710460: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 710462: push 0x9c27f9 */
  { uint32_t v = 0x9c27f9u; esp -= 4; W32(esp, v); }
/* 710467: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71046d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71046e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 710475: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 710476: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 710477: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 710478: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 710479: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 71047d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 710480: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 710482: mov esi, ecx */
  esi = ecx;
/* 710484: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 710485: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 710489: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x71048fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 71048f: xor ebx, ebx */
  ebx = 0;
/* 710491: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 710494: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 710497: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 71049b: jle 0x7104ce */
  if ((zf || sf != of)) goto L_7104ce;
L_71049d: /* 71049d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71049e: xor ebp, ebp */
  ebp = 0;
L_7104a0: /* 7104a0: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7104a2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7104a4: mov ecx, esi */
  ecx = esi;
/* 7104a6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7104acu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7104ac: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7104ae: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7104b1: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 7104b3: je 0x7104c2 */
  if (zf) goto L_7104c2;
L_7104b5: /* 7104b5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7104b7: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7104b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7104ba: mov ecx, eax */
  ecx = eax;
/* 7104bc: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x7104c2u); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
L_7104c2: /* 7104c2: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7104c5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7104c6: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7104c9: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7104cb: jl 0x7104a0 */
  if ((sf != of)) goto L_7104a0;
L_7104cd: /* 7104cd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_7104ce: /* 7104ce: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7104d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7104d3: mov eax, esi */
  eax = esi;
/* 7104d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7104d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7104d7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7104de: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7104e1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_710520(void) {
  LOAD_REGS();
L_710520: /* 710520: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 710522: push 0x9c2819 */
  { uint32_t v = 0x9c2819u; esp -= 4; W32(esp, v); }
/* 710527: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71052d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71052e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 710535: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 710538: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 710539: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71053a: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 71053e: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 710541: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 710542: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 710544: mov ebx, ecx */
  ebx = ecx;
/* 710546: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 710547: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 71054b: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x710551u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 710551: xor esi, esi */
  esi = 0;
/* 710553: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 710556: cmp dword ptr [ebp + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 710559: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 71055d: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 710561: jle 0x7105d7 */
  if ((zf || sf != of)) goto L_7105d7;
L_710563: /* 710563: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 710567: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_710568: /* 710568: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 71056a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71056c: mov ecx, ebx */
  ecx = ebx;
/* 71056e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x710574u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 710574: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 710576: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 710579: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 71057c: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71057e: je 0x7105bb */
  if (zf) goto L_7105bb;
L_710580: /* 710580: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 710583: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 710587: mov eax, dword ptr [esi + ecx] */
  eax = R32((uint32_t)(esi + ecx));
/* 71058a: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71058c: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 71058e: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 710591: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 710594: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 710597: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 710598: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 71059b: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x7105a1u); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 7105a1: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 7105a4: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
/* 7105a7: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 7105aa: mov dword ptr [edi + 0x18], ecx */
  W32((uint32_t)(edi + 0x18u), ecx);
/* 7105ad: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 7105b0: mov dword ptr [edi + 0x1c], edx */
  W32((uint32_t)(edi + 0x1cu), edx);
/* 7105b3: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 7105b6: mov dword ptr [edi + 0x20], eax */
  W32((uint32_t)(edi + 0x20u), eax);
/* 7105b9: xor esi, esi */
  esi = 0;
L_7105bb: /* 7105bb: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7105bf: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 7105c3: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 7105c6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7105c7: add edx, 0x24 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7105ca: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7105cc: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7105d0: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 7105d4: jl 0x710568 */
  if ((sf != of)) goto L_710568;
L_7105d6: /* 7105d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_7105d7: /* 7105d7: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7105db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7105dc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7105dd: mov eax, ebx */
  eax = ebx;
/* 7105df: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7105e0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7105e7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7105ea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_710630(void) {
  LOAD_REGS();
L_710630: /* 710630: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 710632: push 0x9c2839 */
  { uint32_t v = 0x9c2839u; esp -= 4; W32(esp, v); }
/* 710637: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71063d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71063e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 710645: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 710648: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 710649: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 71064a: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 71064e: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 710651: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 710653: mov ebx, ecx */
  ebx = ecx;
/* 710655: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 710656: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 71065a: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x710660u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 710660: xor eax, eax */
  eax = 0;
/* 710662: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 710665: cmp dword ptr [ebp + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 710668: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 71066c: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 710670: jle 0x7106b8 */
  if ((zf || sf != of)) goto L_7106b8;
L_710672: /* 710672: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 710673: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 710677: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_710678: /* 710678: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 71067a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71067c: mov ecx, ebx */
  ecx = ebx;
/* 71067e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x710684u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 710684: imul eax, eax, 0x5c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x5cu);
  eax = (uint32_t)r;
  }
/* 710687: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 710689: je 0x71069b */
  if (zf) goto L_71069b;
L_71068b: /* 71068b: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 71068e: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 710692: mov ecx, 0x17 */
  ecx = 0x17u;
/* 710697: mov edi, eax */
  edi = eax;
/* 710699: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_71069b: /* 71069b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 71069f: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 7106a3: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 7106a6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7106a7: add edx, 0x5c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7106aa: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7106ac: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7106b0: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 7106b4: jl 0x710678 */
  if ((sf != of)) goto L_710678;
L_7106b6: /* 7106b6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7106b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_7106b8: /* 7106b8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7106bc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7106bd: mov eax, ebx */
  eax = ebx;
/* 7106bf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7106c0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7106c7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7106ca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_710700(void) {
  LOAD_REGS();
L_710700: /* 710700: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 710702: push 0x9c2859 */
  { uint32_t v = 0x9c2859u; esp -= 4; W32(esp, v); }
/* 710707: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71070d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71070e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 710715: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 710716: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 710717: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 710718: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 710719: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 71071d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 710720: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 710722: mov esi, ecx */
  esi = ecx;
/* 710724: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 710725: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 710729: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x71072fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 71072f: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 710736: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 710739: xor ebx, ebx */
  ebx = 0;
/* 71073b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 71073d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 710745: jle 0x71076b */
  if ((zf || sf != of)) goto L_71076b;
L_710747: /* 710747: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 710749: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71074b: mov ecx, esi */
  ecx = esi;
/* 71074d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x710753u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 710753: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 710755: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 710758: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71075a: je 0x710763 */
  if (zf) goto L_710763;
L_71075c: /* 71075c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 71075e: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 710761: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_710763: /* 710763: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 710766: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 710767: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 710769: jl 0x710747 */
  if ((sf != of)) goto L_710747;
L_71076b: /* 71076b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71076f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 710770: mov eax, esi */
  eax = esi;
/* 710772: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 710773: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 710774: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71077b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71077e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7107c0(void) {
  LOAD_REGS();
L_7107c0: /* 7107c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7107c2: push 0x9c2879 */
  { uint32_t v = 0x9c2879u; esp -= 4; W32(esp, v); }
/* 7107c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7107cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7107ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7107d5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7107d8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7107d9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7107da: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 7107de: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 7107e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7107e2: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 7107e4: mov ebx, ecx */
  ebx = ecx;
/* 7107e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7107e7: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 7107eb: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x7107f1u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 7107f1: xor esi, esi */
  esi = 0;
/* 7107f3: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 7107f6: cmp dword ptr [ebp + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7107f9: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 7107fd: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 710801: jle 0x71084c */
  if ((zf || sf != of)) goto L_71084c;
L_710803: /* 710803: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 710807: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_710808: /* 710808: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 71080a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71080c: mov ecx, ebx */
  ecx = ebx;
/* 71080e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x710814u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 710814: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 710816: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 710819: lea edi, [edx + ecx*8] */
  edi = (uint32_t)(edx + ecx*8);
/* 71081c: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71081e: je 0x710830 */
  if (zf) goto L_710830;
L_710820: /* 710820: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 710823: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 710827: mov ecx, 6 */
  ecx = 0x6u;
/* 71082c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 71082e: xor esi, esi */
  esi = 0;
L_710830: /* 710830: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 710834: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 710838: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 71083b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71083c: add edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 71083f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 710841: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 710845: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 710849: jl 0x710808 */
  if ((sf != of)) goto L_710808;
L_71084b: /* 71084b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_71084c: /* 71084c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 710850: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 710851: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 710852: mov eax, ebx */
  eax = ebx;
/* 710854: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 710855: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71085c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71085f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7108a0(void) {
  LOAD_REGS();
L_7108a0: /* 7108a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7108a2: push 0x9c2899 */
  { uint32_t v = 0x9c2899u; esp -= 4; W32(esp, v); }
/* 7108a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7108ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7108ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7108b5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7108b8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7108b9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7108ba: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 7108be: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 7108c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7108c2: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 7108c4: mov ebx, ecx */
  ebx = ecx;
/* 7108c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7108c7: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 7108cb: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x7108d1u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 7108d1: xor esi, esi */
  esi = 0;
/* 7108d3: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 7108d6: cmp dword ptr [ebp + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7108d9: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 7108dd: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7108e1: jle 0x71092c */
  if ((zf || sf != of)) goto L_71092c;
L_7108e3: /* 7108e3: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 7108e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_7108e8: /* 7108e8: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 7108ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7108ec: mov ecx, ebx */
  ecx = ebx;
/* 7108ee: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7108f4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7108f4: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7108f6: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 7108f9: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 7108fc: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7108fe: je 0x710910 */
  if (zf) goto L_710910;
L_710900: /* 710900: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 710903: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 710907: mov ecx, 5 */
  ecx = 0x5u;
/* 71090c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 71090e: xor esi, esi */
  esi = 0;
L_710910: /* 710910: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 710914: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 710918: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 71091b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71091c: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 71091f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 710921: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 710925: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 710929: jl 0x7108e8 */
  if ((sf != of)) goto L_7108e8;
L_71092b: /* 71092b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_71092c: /* 71092c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 710930: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 710931: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 710932: mov eax, ebx */
  eax = ebx;
/* 710934: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 710935: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71093c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71093f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_710980(void) {
  LOAD_REGS();
L_710980: /* 710980: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 710982: push 0x9c28b9 */
  { uint32_t v = 0x9c28b9u; esp -= 4; W32(esp, v); }
/* 710987: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 71098d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71098e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 710995: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 710996: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 710997: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 710998: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 710999: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 71099d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7109a0: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 7109a2: mov esi, ecx */
  esi = ecx;
/* 7109a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7109a5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 7109a9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x7109afu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 7109af: xor ebx, ebx */
  ebx = 0;
/* 7109b1: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 7109b4: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7109b7: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 7109bb: jle 0x7109eb */
  if ((zf || sf != of)) goto L_7109eb;
L_7109bd: /* 7109bd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7109be: xor ebp, ebp */
  ebp = 0;
L_7109c0: /* 7109c0: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 7109c2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7109c4: mov ecx, esi */
  ecx = esi;
/* 7109c6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7109ccu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7109cc: imul eax, eax, 0x68 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x68u);
  eax = (uint32_t)r;
  }
/* 7109cf: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 7109d1: je 0x7109df */
  if (zf) goto L_7109df;
L_7109d3: /* 7109d3: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7109d5: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7109d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7109d8: mov ecx, eax */
  ecx = eax;
/* 7109da: call 0x6c4f57 */
  esp -= 4; W32(esp, 0x7109dfu); SPILL(); f_6c4f57(); if (g_unwind) return; RELOAD();
L_7109df: /* 7109df: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7109e2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7109e3: add ebp, 0x68 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7109e6: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7109e8: jl 0x7109c0 */
  if ((sf != of)) goto L_7109c0;
L_7109ea: /* 7109ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_7109eb: /* 7109eb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7109ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7109f0: mov eax, esi */
  eax = esi;
/* 7109f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7109f3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7109f4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7109fb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7109fe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_710a40(void) {
  LOAD_REGS();
L_710a40: /* 710a40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 710a42: push 0x9c28d9 */
  { uint32_t v = 0x9c28d9u; esp -= 4; W32(esp, v); }
/* 710a47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 710a4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 710a4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 710a55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 710a56: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 710a57: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 710a5b: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 710a5e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 710a5f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 710a60: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 710a62: mov esi, ecx */
  esi = ecx;
/* 710a64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 710a65: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 710a69: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x710a6fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 710a6f: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 710a76: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 710a79: xor edi, edi */
  edi = 0;
/* 710a7b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 710a7d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 710a85: jle 0x710ab2 */
  if ((zf || sf != of)) goto L_710ab2;
L_710a87: /* 710a87: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 710a89: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 710a8b: mov ecx, esi */
  ecx = esi;
/* 710a8d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x710a93u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 710a93: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 710a95: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 710a98: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 710a9a: je 0x710aaa */
  if (zf) goto L_710aaa;
L_710a9c: /* 710a9c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 710a9e: mov ecx, dword ptr [edx + edi*8] */
  ecx = R32((uint32_t)(edx + edi*8));
/* 710aa1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 710aa3: mov edx, dword ptr [edx + edi*8 + 4] */
  edx = R32((uint32_t)(edx + edi*8 + 0x4u));
/* 710aa7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_710aaa: /* 710aaa: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 710aad: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 710aae: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 710ab0: jl 0x710a87 */
  if ((sf != of)) goto L_710a87;
L_710ab2: /* 710ab2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 710ab6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 710ab7: mov eax, esi */
  eax = esi;
/* 710ab9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 710aba: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 710abb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 710ac2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 710ac5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_710b00(void) {
  LOAD_REGS();
L_710b00: /* 710b00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 710b02: push 0x9c28f9 */
  { uint32_t v = 0x9c28f9u; esp -= 4; W32(esp, v); }
/* 710b07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 710b0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 710b0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 710b15: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 710b18: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 710b19: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 710b1a: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 710b1e: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 710b21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 710b22: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 710b24: mov ebx, ecx */
  ebx = ecx;
/* 710b26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 710b27: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 710b2b: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x710b31u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 710b31: xor esi, esi */
  esi = 0;
/* 710b33: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 710b36: cmp dword ptr [ebp + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 710b39: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 710b3d: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 710b41: jle 0x710b8c */
  if ((zf || sf != of)) goto L_710b8c;
L_710b43: /* 710b43: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 710b47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_710b48: /* 710b48: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 710b4a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 710b4c: mov ecx, ebx */
  ecx = ebx;
/* 710b4e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x710b54u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 710b54: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 710b56: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 710b59: lea edi, [edx + ecx*8] */
  edi = (uint32_t)(edx + ecx*8);
/* 710b5c: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 710b5e: je 0x710b70 */
  if (zf) goto L_710b70;
L_710b60: /* 710b60: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 710b63: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 710b67: mov ecx, 6 */
  ecx = 0x6u;
/* 710b6c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 710b6e: xor esi, esi */
  esi = 0;
L_710b70: /* 710b70: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 710b74: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 710b78: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 710b7b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 710b7c: add edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 710b7f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 710b81: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 710b85: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 710b89: jl 0x710b48 */
  if ((sf != of)) goto L_710b48;
L_710b8b: /* 710b8b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_710b8c: /* 710b8c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 710b90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 710b91: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 710b92: mov eax, ebx */
  eax = ebx;
/* 710b94: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 710b95: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 710b9c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 710b9f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_710be0(void) {
  LOAD_REGS();
L_710be0: /* 710be0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 710be2: push 0x9c2919 */
  { uint32_t v = 0x9c2919u; esp -= 4; W32(esp, v); }
/* 710be7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 710bed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 710bee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 710bf5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 710bf6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 710bf7: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 710bfb: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 710bfe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 710bff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 710c00: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 710c02: mov esi, ecx */
  esi = ecx;
/* 710c04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 710c05: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 710c09: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x710c0fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 710c0f: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 710c16: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 710c19: xor edi, edi */
  edi = 0;
/* 710c1b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 710c1d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 710c25: jle 0x710c52 */
  if ((zf || sf != of)) goto L_710c52;
L_710c27: /* 710c27: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 710c29: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 710c2b: mov ecx, esi */
  ecx = esi;
/* 710c2d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x710c33u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 710c33: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 710c35: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 710c38: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 710c3a: je 0x710c4a */
  if (zf) goto L_710c4a;
L_710c3c: /* 710c3c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 710c3e: mov ecx, dword ptr [edx + edi*8] */
  ecx = R32((uint32_t)(edx + edi*8));
/* 710c41: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 710c43: mov edx, dword ptr [edx + edi*8 + 4] */
  edx = R32((uint32_t)(edx + edi*8 + 0x4u));
/* 710c47: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_710c4a: /* 710c4a: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 710c4d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 710c4e: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 710c50: jl 0x710c27 */
  if ((sf != of)) goto L_710c27;
L_710c52: /* 710c52: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 710c56: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 710c57: mov eax, esi */
  eax = esi;
/* 710c59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 710c5a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 710c5b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 710c62: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 710c65: ret 4 */
  esp += 8; SPILL(); return;
}

void f_710ca0(void) {
  LOAD_REGS();
L_710ca0: /* 710ca0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 710ca2: push 0x9c2939 */
  { uint32_t v = 0x9c2939u; esp -= 4; W32(esp, v); }
/* 710ca7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 710cad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 710cae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 710cb5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 710cb8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 710cb9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 710cba: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 710cbe: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 710cc1: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 710cc3: mov ebx, ecx */
  ebx = ecx;
/* 710cc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 710cc6: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 710cca: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x710cd0u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 710cd0: xor eax, eax */
  eax = 0;
/* 710cd2: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 710cd5: cmp dword ptr [ebp + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 710cd8: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 710cdc: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 710ce0: jle 0x710d2a */
  if ((zf || sf != of)) goto L_710d2a;
L_710ce2: /* 710ce2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 710ce3: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 710ce7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_710ce8: /* 710ce8: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 710cea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 710cec: mov ecx, ebx */
  ecx = ebx;
/* 710cee: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x710cf4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 710cf4: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 710cf6: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 710cf9: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 710cfb: je 0x710d0d */
  if (zf) goto L_710d0d;
L_710cfd: /* 710cfd: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 710d00: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 710d04: mov ecx, 8 */
  ecx = 0x8u;
/* 710d09: mov edi, eax */
  edi = eax;
/* 710d0b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_710d0d: /* 710d0d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 710d11: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 710d15: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 710d18: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 710d19: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 710d1c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 710d1e: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 710d22: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 710d26: jl 0x710ce8 */
  if ((sf != of)) goto L_710ce8;
L_710d28: /* 710d28: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 710d29: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_710d2a: /* 710d2a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 710d2e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 710d2f: mov eax, ebx */
  eax = ebx;
/* 710d31: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 710d32: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 710d39: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 710d3c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_710d70(void) {
  LOAD_REGS();
L_710d70: /* 710d70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 710d72: push 0x9c2959 */
  { uint32_t v = 0x9c2959u; esp -= 4; W32(esp, v); }
/* 710d77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 710d7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 710d7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 710d85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 710d86: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 710d87: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 710d8b: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 710d8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 710d8f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 710d90: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 710d92: mov esi, ecx */
  esi = ecx;
/* 710d94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 710d95: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 710d99: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x710d9fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 710d9f: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 710da6: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 710da9: xor edi, edi */
  edi = 0;
/* 710dab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 710dad: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 710db5: jle 0x710de2 */
  if ((zf || sf != of)) goto L_710de2;
L_710db7: /* 710db7: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 710db9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 710dbb: mov ecx, esi */
  ecx = esi;
/* 710dbd: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x710dc3u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 710dc3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 710dc5: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 710dc8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 710dca: je 0x710dda */
  if (zf) goto L_710dda;
L_710dcc: /* 710dcc: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 710dce: mov ecx, dword ptr [edx + edi*8] */
  ecx = R32((uint32_t)(edx + edi*8));
/* 710dd1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 710dd3: mov edx, dword ptr [edx + edi*8 + 4] */
  edx = R32((uint32_t)(edx + edi*8 + 0x4u));
/* 710dd7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_710dda: /* 710dda: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 710ddd: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 710dde: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 710de0: jl 0x710db7 */
  if ((sf != of)) goto L_710db7;
L_710de2: /* 710de2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 710de6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 710de7: mov eax, esi */
  eax = esi;
/* 710de9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 710dea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 710deb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 710df2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 710df5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_710e30(void) {
  LOAD_REGS();
L_710e30: /* 710e30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 710e32: push 0x9c2979 */
  { uint32_t v = 0x9c2979u; esp -= 4; W32(esp, v); }
/* 710e37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 710e3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 710e3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 710e45: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 710e48: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 710e49: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 710e4a: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 710e4e: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 710e51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 710e52: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 710e54: mov ebx, ecx */
  ebx = ecx;
/* 710e56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 710e57: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 710e5b: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x710e61u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 710e61: xor esi, esi */
  esi = 0;
/* 710e63: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 710e66: cmp dword ptr [ebp + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 710e69: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 710e6d: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 710e71: jle 0x710ebc */
  if ((zf || sf != of)) goto L_710ebc;
L_710e73: /* 710e73: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 710e77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_710e78: /* 710e78: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 710e7a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 710e7c: mov ecx, ebx */
  ecx = ebx;
/* 710e7e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x710e84u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 710e84: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 710e86: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 710e89: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 710e8c: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 710e8e: je 0x710ea0 */
  if (zf) goto L_710ea0;
L_710e90: /* 710e90: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 710e93: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 710e97: mov ecx, 5 */
  ecx = 0x5u;
/* 710e9c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 710e9e: xor esi, esi */
  esi = 0;
L_710ea0: /* 710ea0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 710ea4: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 710ea8: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 710eab: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 710eac: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 710eaf: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 710eb1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 710eb5: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 710eb9: jl 0x710e78 */
  if ((sf != of)) goto L_710e78;
L_710ebb: /* 710ebb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_710ebc: /* 710ebc: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 710ec0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 710ec1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 710ec2: mov eax, ebx */
  eax = ebx;
/* 710ec4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 710ec5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 710ecc: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 710ecf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_710f10(void) {
  LOAD_REGS();
L_710f10: /* 710f10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 710f12: push 0x9c2999 */
  { uint32_t v = 0x9c2999u; esp -= 4; W32(esp, v); }
/* 710f17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 710f1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 710f1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 710f25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 710f26: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 710f27: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 710f28: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 710f29: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 710f2d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 710f30: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 710f32: mov esi, ecx */
  esi = ecx;
/* 710f34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 710f35: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 710f39: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x710f3fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 710f3f: xor ebx, ebx */
  ebx = 0;
/* 710f41: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 710f44: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 710f47: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 710f4b: jle 0x710f88 */
  if ((zf || sf != of)) goto L_710f88;
L_710f4d: /* 710f4d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 710f4e: xor ebp, ebp */
  ebp = 0;
L_710f50: /* 710f50: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 710f52: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 710f54: mov ecx, esi */
  ecx = esi;
/* 710f56: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x710f5cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 710f5c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 710f5e: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 710f61: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 710f64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 710f66: je 0x710f7c */
  if (zf) goto L_710f7c;
L_710f68: /* 710f68: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 710f6a: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 710f6c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 710f6e: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 710f70: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 710f73: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 710f76: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 710f79: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_710f7c: /* 710f7c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 710f7f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 710f80: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 710f83: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 710f85: jl 0x710f50 */
  if ((sf != of)) goto L_710f50;
L_710f87: /* 710f87: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_710f88: /* 710f88: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 710f8c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 710f8d: mov eax, esi */
  eax = esi;
/* 710f8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 710f90: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 710f91: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 710f98: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 710f9b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_710fd0(void) {
  LOAD_REGS();
L_710fd0: /* 710fd0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 710fd2: push 0x9c29b9 */
  { uint32_t v = 0x9c29b9u; esp -= 4; W32(esp, v); }
/* 710fd7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 710fdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 710fde: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 710fe5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 710fe8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 710fe9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 710fea: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 710fee: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 710ff1: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 710ff6: mov ebx, ecx */
  ebx = ecx;
/* 710ff8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 710ff9: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 710ffd: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x711003u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 711003: xor eax, eax */
  eax = 0;
/* 711005: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 711008: cmp dword ptr [ebp + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71100b: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 71100f: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 711013: jle 0x711069 */
  if ((zf || sf != of)) goto L_711069;
L_711015: /* 711015: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 711016: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 71101a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71101b: jmp 0x711020 */
  goto L_711020;
L_711020: /* 711020: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 711025: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 711027: mov ecx, ebx */
  ecx = ebx;
/* 711029: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71102fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71102f: imul eax, eax, 0x104 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x104u);
  eax = (uint32_t)r;
  }
/* 711035: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 711037: je 0x711049 */
  if (zf) goto L_711049;
L_711039: /* 711039: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 71103c: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 711040: mov ecx, 0x41 */
  ecx = 0x41u;
/* 711045: mov edi, eax */
  edi = eax;
/* 711047: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_711049: /* 711049: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 71104d: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 711051: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 711054: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 711055: add edx, 0x104 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 71105b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71105d: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 711061: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 711065: jl 0x711020 */
  if ((sf != of)) goto L_711020;
L_711067: /* 711067: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 711068: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_711069: /* 711069: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71106d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71106e: mov eax, ebx */
  eax = ebx;
/* 711070: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 711071: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 711078: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71107b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_71101d(void) {
  LOAD_REGS();
L_71101d: /* 71101d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_711020: /* 711020: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 711025: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 711027: mov ecx, ebx */
  ecx = ebx;
/* 711029: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71102fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71102f: imul eax, eax, 0x104 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x104u);
  eax = (uint32_t)r;
  }
/* 711035: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 711037: je 0x711049 */
  if (zf) goto L_711049;
L_711039: /* 711039: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 71103c: add esi, dword ptr [esp + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 711040: mov ecx, 0x41 */
  ecx = 0x41u;
/* 711045: mov edi, eax */
  edi = eax;
/* 711047: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_711049: /* 711049: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 71104d: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 711051: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 711054: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 711055: add edx, 0x104 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 71105b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71105d: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 711061: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 711065: jl 0x711020 */
  if ((sf != of)) goto L_711020;
L_711067: /* 711067: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 711068: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 711069: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71106d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 71106e: mov eax, ebx */
  eax = ebx;
/* 711070: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 711071: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 711078: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71107b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7110b0(void) {
  LOAD_REGS();
L_7110b0: /* 7110b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7110b2: push 0x9c29d9 */
  { uint32_t v = 0x9c29d9u; esp -= 4; W32(esp, v); }
/* 7110b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7110bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7110be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7110c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7110c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7110c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7110c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7110c9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 7110cd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7110d0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7110d2: mov esi, ecx */
  esi = ecx;
/* 7110d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7110d5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 7110d9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x7110dfu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 7110df: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 7110e6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7110e9: xor ebx, ebx */
  ebx = 0;
/* 7110eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7110ed: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7110f5: jle 0x71111b */
  if ((zf || sf != of)) goto L_71111b;
L_7110f7: /* 7110f7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7110f9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7110fb: mov ecx, esi */
  ecx = esi;
/* 7110fd: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x711103u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 711103: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 711105: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 711108: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71110a: je 0x711113 */
  if (zf) goto L_711113;
L_71110c: /* 71110c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 71110e: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 711111: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_711113: /* 711113: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 711116: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 711117: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 711119: jl 0x7110f7 */
  if ((sf != of)) goto L_7110f7;
L_71111b: /* 71111b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71111f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 711120: mov eax, esi */
  eax = esi;
/* 711122: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 711123: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 711124: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71112b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71112e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_711170(void) {
  LOAD_REGS();
L_711170: /* 711170: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 711171: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 711173: mov esi, ecx */
  esi = ecx;
/* 711175: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x71117bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 71117b: mov eax, esi */
  eax = esi;
/* 71117d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71117e: ret  */
  esp += 4; SPILL(); return;
}

void f_711190(void) {
  LOAD_REGS();
L_711190: /* 711190: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 711194: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 711195: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 711196: mov esi, ecx */
  esi = ecx;
/* 711198: call 0x6c5ecf */
  esp -= 4; W32(esp, 0x71119du); SPILL(); f_6c5ecf(); if (g_unwind) return; RELOAD();
/* 71119d: mov eax, esi */
  eax = esi;
/* 71119f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7111a0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7111c0(void) {
  LOAD_REGS();
L_7111c0: /* 7111c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7111c2: push 0x9c29f9 */
  { uint32_t v = 0x9c29f9u; esp -= 4; W32(esp, v); }
/* 7111c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7111cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7111ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7111d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7111d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7111d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7111d8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7111d9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 7111dd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7111e0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7111e2: mov esi, ecx */
  esi = ecx;
/* 7111e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7111e5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 7111e9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x7111efu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 7111ef: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 7111f6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7111f9: xor ebx, ebx */
  ebx = 0;
/* 7111fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7111fd: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 711205: jle 0x71122b */
  if ((zf || sf != of)) goto L_71122b;
L_711207: /* 711207: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 711209: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 71120b: mov ecx, esi */
  ecx = esi;
/* 71120d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x711213u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 711213: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 711215: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 711218: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71121a: je 0x711223 */
  if (zf) goto L_711223;
L_71121c: /* 71121c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 71121e: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 711221: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_711223: /* 711223: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 711226: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 711227: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 711229: jl 0x711207 */
  if ((sf != of)) goto L_711207;
L_71122b: /* 71122b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 71122f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 711230: mov eax, esi */
  eax = esi;
/* 711232: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 711233: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 711234: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 71123b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 71123e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_711280(void) {
  LOAD_REGS();
L_711280: /* 711280: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 711284: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 711285: mov esi, ecx */
  esi = ecx;
/* 711287: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 711289: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 71128b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 71128e: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 711291: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 711294: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 711297: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 71129a: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 71129d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71129e: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 7112a1: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7112a4: call 0x6c70a4 */
  esp -= 4; W32(esp, 0x7112a9u); SPILL(); f_6c70a4(); if (g_unwind) return; RELOAD();
/* 7112a9: mov eax, esi */
  eax = esi;
/* 7112ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7112ac: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7112c0(void) {
  LOAD_REGS();
L_7112c0: /* 7112c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7112c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7112c5: mov esi, ecx */
  esi = ecx;
/* 7112c7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7112c9: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 7112cb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7112ce: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 7112d1: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7112d4: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 7112d7: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 7112da: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7112dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7112de: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 7112e1: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7112e4: call 0x6cca95 */
  esp -= 4; W32(esp, 0x7112e9u); SPILL(); f_6cca95(); if (g_unwind) return; RELOAD();
/* 7112e9: mov eax, esi */
  eax = esi;
/* 7112eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7112ec: ret 4 */
  esp += 8; SPILL(); return;
}

void f_711300(void) {
  LOAD_REGS();
L_711300: /* 711300: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 711304: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 711305: mov esi, ecx */
  esi = ecx;
/* 711307: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 711308: mov ecx, eax */
  ecx = eax;
/* 71130a: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 71130c: mov edx, esi */
  edx = esi;
/* 71130e: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 711310: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 711313: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 711316: mov edi, dword ptr [ecx + 8] */
  edi = R32((uint32_t)(ecx + 0x8u));
/* 711319: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 71131c: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 71131f: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 711322: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 711325: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 711326: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 711329: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x71132eu); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 71132e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71132f: mov eax, esi */
  eax = esi;
/* 711331: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 711332: ret 4 */
  esp += 8; SPILL(); return;
}

void f_711350(void) {
  LOAD_REGS();
L_711350: /* 711350: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 711351: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 711352: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 711356: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 711358: mov esi, ecx */
  esi = ecx;
/* 71135a: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 71135d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71135e: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 711361: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 711363: call 0x6cb258 */
  esp -= 4; W32(esp, 0x711368u); SPILL(); f_6cb258(); if (g_unwind) return; RELOAD();
/* 711368: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 71136b: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 71136e: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 711371: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 711374: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 711377: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 71137a: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 71137d: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 711380: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 711383: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 711386: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* 711389: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* 71138c: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 71138f: mov dword ptr [esi + 0x28], edx */
  W32((uint32_t)(esi + 0x28u), edx);
/* 711392: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 711395: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 711398: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 71139b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71139c: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 71139f: mov eax, esi */
  eax = esi;
/* 7113a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7113a2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7113d0(void) {
  LOAD_REGS();
L_7113d0: /* 7113d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7113d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7113d2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7113d6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7113d8: mov esi, ecx */
  esi = ecx;
/* 7113da: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 7113dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7113de: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7113e1: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7113e3: call 0x6c5ecf */
  esp -= 4; W32(esp, 0x7113e8u); SPILL(); f_6c5ecf(); if (g_unwind) return; RELOAD();
/* 7113e8: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 7113eb: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 7113ee: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 7113f1: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 7113f4: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 7113f7: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 7113fa: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 7113fd: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 711400: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 711403: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 711406: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* 711409: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* 71140c: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 71140f: mov dword ptr [esi + 0x28], edx */
  W32((uint32_t)(esi + 0x28u), edx);
/* 711412: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 711415: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 711418: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 71141b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71141c: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 71141f: mov eax, esi */
  eax = esi;
/* 711421: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 711422: ret 4 */
  esp += 8; SPILL(); return;
}

void f_711450(void) {
  LOAD_REGS();
L_711450: /* 711450: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 711451: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 711452: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 711453: mov esi, ecx */
  esi = ecx;
/* 711455: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 711456: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71145a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 71145c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 71145e: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 711461: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 711464: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 711467: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 71146a: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 71146d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 711470: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 711473: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 711476: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 711479: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 71147c: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 71147f: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 711482: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 711485: lea edx, [edi + 0x20] */
  edx = (uint32_t)(edi + 0x20u);
/* 711488: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 71148b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71148c: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 71148f: call 0x6c1a00 */
  esp -= 4; W32(esp, 0x711494u); SPILL(); f_6c1a00(); if (g_unwind) return; RELOAD();
/* 711494: lea eax, [edi + 0x2c] */
  eax = (uint32_t)(edi + 0x2cu);
/* 711497: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 71149a: mov edx, eax */
  edx = eax;
/* 71149c: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 71149e: mov ebx, ecx */
  ebx = ecx;
/* 7114a0: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 7114a2: mov ebp, dword ptr [edx + 4] */
  ebp = R32((uint32_t)(edx + 0x4u));
/* 7114a5: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 7114a8: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7114ab: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 7114ae: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 7114b1: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 7114b4: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 7114b7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7114b8: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 7114bb: mov eax, esi */
  eax = esi;
/* 7114bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7114be: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7114bf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7114c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7114f0(void) {
  LOAD_REGS();
L_7114f0: /* 7114f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7114f1: mov esi, ecx */
  esi = ecx;
/* 7114f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7114f4: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7114f8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7114fa: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7114fc: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 7114ff: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 711502: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 711505: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 711508: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 71150b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 71150e: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 711511: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 711514: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 711517: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 71151a: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 71151d: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 711520: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 711523: lea edx, [edi + 0x20] */
  edx = (uint32_t)(edi + 0x20u);
/* 711526: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 711529: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 71152a: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 71152d: call 0x6c5eac */
  esp -= 4; W32(esp, 0x711532u); SPILL(); f_6c5eac(); if (g_unwind) return; RELOAD();
/* 711532: lea eax, [edi + 0x2c] */
  eax = (uint32_t)(edi + 0x2cu);
/* 711535: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 711537: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 71153a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 71153c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 71153f: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 711542: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 711545: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 711548: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 71154b: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 71154e: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 711551: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 711552: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 711555: mov eax, esi */
  eax = esi;
/* 711557: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 711558: ret 4 */
  esp += 8; SPILL(); return;
}

void f_711580(void) {
  LOAD_REGS();
L_711580: /* 711580: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 711581: mov esi, ecx */
  esi = ecx;
/* 711583: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 711585: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 711587: je 0x7115ae */
  if (zf) goto L_7115ae;
L_711589: /* 711589: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 71158b: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x71158eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71158e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 711590: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 711592: je 0x7115a8 */
  if (zf) goto L_7115a8;
L_711594: /* 711594: mov dword ptr [eax], 0x9f7674 */
  W32((uint32_t)(eax), 0x9f7674u);
/* 71159a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7115a0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7115a2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7115a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7115a5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7115a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7115a8: /* 7115a8: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
L_7115ae: /* 7115ae: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7115b3: je 0x7115c2 */
  if (zf) goto L_7115c2;
L_7115b5: /* 7115b5: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7115ba: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7115bc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7115be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7115bf: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7115c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7115c2: /* 7115c2: mov eax, esi */
  eax = esi;
/* 7115c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7115c5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7115f0(void) {
  LOAD_REGS();
L_7115f0: /* 7115f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7115f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7115f5: mov esi, ecx */
  esi = ecx;
/* 7115f7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7115f9: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 7115fb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7115fe: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 711601: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 711604: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 711607: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 71160a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71160b: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 71160e: call 0x6c1a00 */
  esp -= 4; W32(esp, 0x711613u); SPILL(); f_6c1a00(); if (g_unwind) return; RELOAD();
/* 711613: mov eax, esi */
  eax = esi;
/* 711615: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 711616: ret 4 */
  esp += 8; SPILL(); return;
}

void f_711630(void) {
  LOAD_REGS();
L_711630: /* 711630: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 711634: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 711635: mov esi, ecx */
  esi = ecx;
/* 711637: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 711639: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 71163b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 71163e: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 711641: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 711644: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 711647: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 71164a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71164b: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 71164e: call 0x6c5eac */
  esp -= 4; W32(esp, 0x711653u); SPILL(); f_6c5eac(); if (g_unwind) return; RELOAD();
/* 711653: mov eax, esi */
  eax = esi;
/* 711655: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 711656: ret 4 */
  esp += 8; SPILL(); return;
}

void f_711670(void) {
  LOAD_REGS();
L_711670: /* 711670: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 711674: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 711675: mov esi, ecx */
  esi = ecx;
/* 711677: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 711679: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 71167c: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 71167e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71167f: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 711682: call 0x6cb258 */
  esp -= 4; W32(esp, 0x711687u); SPILL(); f_6cb258(); if (g_unwind) return; RELOAD();
/* 711687: mov eax, esi */
  eax = esi;
/* 711689: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71168a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7116a0(void) {
  LOAD_REGS();
L_7116a0: /* 7116a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7116a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7116a5: mov esi, ecx */
  esi = ecx;
/* 7116a7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7116a9: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7116ac: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 7116ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7116af: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7116b2: call 0x6c5ecf */
  esp -= 4; W32(esp, 0x7116b7u); SPILL(); f_6c5ecf(); if (g_unwind) return; RELOAD();
/* 7116b7: mov eax, esi */
  eax = esi;
/* 7116b9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7116ba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7116d0(void) {
  LOAD_REGS();
L_7116d0: /* 7116d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7116d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7116d2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7116d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7116d7: mov esi, ecx */
  esi = ecx;
/* 7116d9: call 0x6c1a00 */
  esp -= 4; W32(esp, 0x7116deu); SPILL(); f_6c1a00(); if (g_unwind) return; RELOAD();
/* 7116de: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 7116e1: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7116e4: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 7116e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7116e8: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 7116eb: mov eax, esi */
  eax = esi;
/* 7116ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7116ee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_711710(void) {
  LOAD_REGS();
L_711710: /* 711710: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 711711: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 711712: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 711716: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 711717: mov esi, ecx */
  esi = ecx;
/* 711719: call 0x6c5eac */
  esp -= 4; W32(esp, 0x71171eu); SPILL(); f_6c5eac(); if (g_unwind) return; RELOAD();
/* 71171e: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 711721: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 711724: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 711727: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 711728: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 71172b: mov eax, esi */
  eax = esi;
/* 71172d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71172e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_711750(void) {
  LOAD_REGS();
L_711750: /* 711750: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 711751: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 711752: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 711756: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 711758: mov esi, ecx */
  esi = ecx;
/* 71175a: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 71175d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71175e: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 711761: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 711763: call 0x6cb258 */
  esp -= 4; W32(esp, 0x711768u); SPILL(); f_6cb258(); if (g_unwind) return; RELOAD();
/* 711768: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 71176b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71176c: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 71176f: mov eax, esi */
  eax = esi;
/* 711771: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 711772: ret 4 */
  esp += 8; SPILL(); return;
}

void f_711790(void) {
  LOAD_REGS();
L_711790: /* 711790: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 711791: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 711792: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 711796: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 711798: mov esi, ecx */
  esi = ecx;
/* 71179a: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 71179d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 71179e: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7117a1: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7117a3: call 0x6c5ecf */
  esp -= 4; W32(esp, 0x7117a8u); SPILL(); f_6c5ecf(); if (g_unwind) return; RELOAD();
/* 7117a8: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 7117ab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7117ac: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 7117af: mov eax, esi */
  eax = esi;
/* 7117b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7117b2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7117d0(void) {
  LOAD_REGS();
L_7117d0: /* 7117d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7117d1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 7117d5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7117d7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7117d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7117d9: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 7117df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7117e0: mov ebp, ecx */
  ebp = ecx;
/* 7117e2: jge 0x7117f8 */
  if ((sf == of)) goto L_7117f8;
L_7117e4: /* 7117e4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7117e9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7117ee: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7117f3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7117f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7117f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7117f8: /* 7117f8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7117fb: jle 0x711811 */
  if ((zf || sf != of)) goto L_711811;
L_7117fd: /* 7117fd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 711802: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711807: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71180c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x71180eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71180e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711811: /* 711811: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 711815: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 711818: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71181b: jle 0x711831 */
  if ((zf || sf != of)) goto L_711831;
L_71181d: /* 71181d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 711822: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711827: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71182c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x71182eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71182e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711831: /* 711831: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 711833: jge 0x711851 */
  if ((sf == of)) goto L_711851;
L_711835: /* 711835: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* 711838: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 71183b: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 71183d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_711840: /* 711840: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 711843: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 711845: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x71184bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 71184b: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71184e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 71184f: jne 0x711840 */
  if (!zf) goto L_711840;
L_711851: /* 711851: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 711855: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 711857: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 711858: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 711859: mov ecx, ebp */
  ecx = ebp;
/* 71185b: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x711861u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 711861: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 711862: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 711863: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 711864: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 711865: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7118a0(void) {
  LOAD_REGS();
L_7118a0: /* 7118a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7118a1: mov esi, ecx */
  esi = ecx;
/* 7118a3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7118a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7118a7: xor edi, edi */
  edi = 0;
/* 7118a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7118ab: jle 0x7118c6 */
  if ((zf || sf != of)) goto L_7118c6;
L_7118ad: /* 7118ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7118ae: xor ebx, ebx */
  ebx = 0;
L_7118b0: /* 7118b0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7118b2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7118b4: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7118bau); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7118ba: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7118bd: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7118be: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7118c1: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7118c3: jl 0x7118b0 */
  if ((sf != of)) goto L_7118b0;
L_7118c5: /* 7118c5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_7118c6: /* 7118c6: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7118ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7118cb: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7118cd: mov ecx, esi */
  ecx = esi;
/* 7118cf: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7118d5u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7118d5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7118d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7118d7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7118f0(void) {
  LOAD_REGS();
L_7118f0: /* 7118f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7118f1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 7118f5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7118f7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7118f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7118f9: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 7118ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 711900: mov ebp, ecx */
  ebp = ecx;
/* 711902: jge 0x711918 */
  if ((sf == of)) goto L_711918;
L_711904: /* 711904: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 711909: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71190e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 711913: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x711915u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 711915: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711918: /* 711918: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71191b: jle 0x711931 */
  if ((zf || sf != of)) goto L_711931;
L_71191d: /* 71191d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 711922: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711927: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71192c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x71192eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71192e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711931: /* 711931: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 711935: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 711938: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71193b: jle 0x711951 */
  if ((zf || sf != of)) goto L_711951;
L_71193d: /* 71193d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 711942: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711947: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71194c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x71194eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71194e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711951: /* 711951: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 711953: jge 0x711970 */
  if ((sf == of)) goto L_711970;
L_711955: /* 711955: mov esi, ebx */
  esi = ebx;
/* 711957: imul esi, esi, 0x2c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x2cu);
  esi = (uint32_t)r;
  }
/* 71195a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 71195c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_711960: /* 711960: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 711963: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 711965: call 0x6ccc16 */
  esp -= 4; W32(esp, 0x71196au); SPILL(); f_6ccc16(); if (g_unwind) return; RELOAD();
/* 71196a: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71196d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 71196e: jne 0x711960 */
  if (!zf) goto L_711960;
L_711970: /* 711970: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 711974: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 711976: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 711977: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 711978: mov ecx, ebp */
  ecx = ebp;
/* 71197a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x711980u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 711980: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 711981: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 711982: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 711983: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 711984: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7119c0(void) {
  LOAD_REGS();
L_7119c0: /* 7119c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7119c1: mov esi, ecx */
  esi = ecx;
/* 7119c3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7119c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7119c7: xor edi, edi */
  edi = 0;
/* 7119c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7119cb: jle 0x7119e5 */
  if ((zf || sf != of)) goto L_7119e5;
L_7119cd: /* 7119cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7119ce: xor ebx, ebx */
  ebx = 0;
L_7119d0: /* 7119d0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7119d2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7119d4: call 0x6ccc16 */
  esp -= 4; W32(esp, 0x7119d9u); SPILL(); f_6ccc16(); if (g_unwind) return; RELOAD();
/* 7119d9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7119dc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7119dd: add ebx, 0x2c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7119e0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7119e2: jl 0x7119d0 */
  if ((sf != of)) goto L_7119d0;
L_7119e4: /* 7119e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_7119e5: /* 7119e5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7119e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7119ea: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 7119ec: mov ecx, esi */
  ecx = esi;
/* 7119ee: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7119f4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7119f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7119f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7119f6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_711a10(void) {
  LOAD_REGS();
L_711a10: /* 711a10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 711a11: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 711a12: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 711a18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 711a19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 711a1a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 711a1e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 711a20: mov esi, ecx */
  esi = ecx;
/* 711a22: jge 0x711a38 */
  if ((sf == of)) goto L_711a38;
L_711a24: /* 711a24: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 711a29: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711a2e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 711a33: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x711a35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 711a35: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711a38: /* 711a38: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 711a3b: jle 0x711a51 */
  if ((zf || sf != of)) goto L_711a51;
L_711a3d: /* 711a3d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 711a42: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711a47: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 711a4c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x711a4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 711a4e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711a51: /* 711a51: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 711a55: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 711a58: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 711a5b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 711a5d: jle 0x711a73 */
  if ((zf || sf != of)) goto L_711a73;
L_711a5f: /* 711a5f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 711a64: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711a69: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 711a6e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x711a70u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 711a70: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711a73: /* 711a73: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 711a75: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 711a76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 711a77: mov ecx, esi */
  ecx = esi;
/* 711a79: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x711a7fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 711a7f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 711a80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 711a81: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 711a82: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 711a83: ret 8 */
  esp += 12; SPILL(); return;
}

void f_711ab0(void) {
  LOAD_REGS();
L_711ab0: /* 711ab0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 711ab1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 711ab2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 711ab8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 711ab9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 711aba: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 711abe: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 711ac0: mov esi, ecx */
  esi = ecx;
/* 711ac2: jge 0x711ad8 */
  if ((sf == of)) goto L_711ad8;
L_711ac4: /* 711ac4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 711ac9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711ace: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 711ad3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x711ad5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 711ad5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711ad8: /* 711ad8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 711adb: jle 0x711af1 */
  if ((zf || sf != of)) goto L_711af1;
L_711add: /* 711add: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 711ae2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711ae7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 711aec: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x711aeeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 711aee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711af1: /* 711af1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 711af5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 711af8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 711afb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 711afd: jle 0x711b13 */
  if ((zf || sf != of)) goto L_711b13;
L_711aff: /* 711aff: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 711b04: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711b09: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 711b0e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x711b10u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 711b10: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711b13: /* 711b13: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 711b15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 711b16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 711b17: mov ecx, esi */
  ecx = esi;
/* 711b19: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x711b1fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 711b1f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 711b20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 711b21: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 711b22: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 711b23: ret 8 */
  esp += 12; SPILL(); return;
}

void f_711b50(void) {
  LOAD_REGS();
L_711b50: /* 711b50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 711b51: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 711b52: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 711b58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 711b59: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 711b5a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 711b5e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 711b60: mov esi, ecx */
  esi = ecx;
/* 711b62: jge 0x711b78 */
  if ((sf == of)) goto L_711b78;
L_711b64: /* 711b64: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 711b69: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711b6e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 711b73: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x711b75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 711b75: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711b78: /* 711b78: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 711b7b: jle 0x711b91 */
  if ((zf || sf != of)) goto L_711b91;
L_711b7d: /* 711b7d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 711b82: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711b87: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 711b8c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x711b8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 711b8e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711b91: /* 711b91: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 711b95: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 711b98: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 711b9b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 711b9d: jle 0x711bb3 */
  if ((zf || sf != of)) goto L_711bb3;
L_711b9f: /* 711b9f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 711ba4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711ba9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 711bae: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x711bb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 711bb0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711bb3: /* 711bb3: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 711bb5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 711bb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 711bb7: mov ecx, esi */
  ecx = esi;
/* 711bb9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x711bbfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 711bbf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 711bc0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 711bc1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 711bc2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 711bc3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_711bf0(void) {
  LOAD_REGS();
L_711bf0: /* 711bf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 711bf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 711bf5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 711bf7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x711bfdu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 711bfd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_711c10(void) {
  LOAD_REGS();
L_711c10: /* 711c10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 711c11: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 711c12: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 711c18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 711c19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 711c1a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 711c1e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 711c20: mov esi, ecx */
  esi = ecx;
/* 711c22: jge 0x711c38 */
  if ((sf == of)) goto L_711c38;
L_711c24: /* 711c24: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 711c29: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711c2e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 711c33: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x711c35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 711c35: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711c38: /* 711c38: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 711c3b: jle 0x711c51 */
  if ((zf || sf != of)) goto L_711c51;
L_711c3d: /* 711c3d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 711c42: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711c47: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 711c4c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x711c4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 711c4e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711c51: /* 711c51: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 711c55: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 711c58: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 711c5b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 711c5d: jle 0x711c73 */
  if ((zf || sf != of)) goto L_711c73;
L_711c5f: /* 711c5f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 711c64: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711c69: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 711c6e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x711c70u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 711c70: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711c73: /* 711c73: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 711c75: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 711c76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 711c77: mov ecx, esi */
  ecx = esi;
/* 711c79: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x711c7fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 711c7f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 711c80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 711c81: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 711c82: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 711c83: ret 8 */
  esp += 12; SPILL(); return;
}

void f_711cb0(void) {
  LOAD_REGS();
L_711cb0: /* 711cb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 711cb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 711cb5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 711cb7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x711cbdu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 711cbd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_711cd0(void) {
  LOAD_REGS();
L_711cd0: /* 711cd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 711cd1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 711cd5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 711cd6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 711cd7: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 711cdc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 711cdd: mov esi, ecx */
  esi = ecx;
/* 711cdf: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x711ce5u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 711ce5: mov edi, eax */
  edi = eax;
/* 711ce7: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 711cec: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 711cee: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 711cf0: je 0x711d0f */
  if (zf) goto L_711d0f;
L_711cf2: /* 711cf2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 711cf5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 711cf7: push 0x6c51fa */
  { uint32_t v = 0x6c51fau; esp -= 4; W32(esp, v); }
/* 711cfc: push 0x6c874c */
  { uint32_t v = 0x6c874cu; esp -= 4; W32(esp, v); }
/* 711d01: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 711d06: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 711d08: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 711d09: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 711d0a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 711d0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 711d0c: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x711d0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_711d0f: /* 711d0f: mov eax, edi */
  eax = edi;
/* 711d11: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 711d12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 711d13: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 711d14: ret 4 */
  esp += 8; SPILL(); return;
}

void f_711d40(void) {
  LOAD_REGS();
L_711d40: /* 711d40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 711d41: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 711d42: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 711d48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 711d49: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 711d4a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 711d4e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 711d50: mov esi, ecx */
  esi = ecx;
/* 711d52: jge 0x711d68 */
  if ((sf == of)) goto L_711d68;
L_711d54: /* 711d54: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 711d59: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711d5e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 711d63: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x711d65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 711d65: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711d68: /* 711d68: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 711d6b: jle 0x711d81 */
  if ((zf || sf != of)) goto L_711d81;
L_711d6d: /* 711d6d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 711d72: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711d77: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 711d7c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x711d7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 711d7e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711d81: /* 711d81: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 711d85: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 711d88: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 711d8b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 711d8d: jle 0x711da3 */
  if ((zf || sf != of)) goto L_711da3;
L_711d8f: /* 711d8f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 711d94: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711d99: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 711d9e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x711da0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 711da0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711da3: /* 711da3: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 711da8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 711da9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 711daa: mov ecx, esi */
  ecx = esi;
/* 711dac: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x711db2u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 711db2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 711db3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 711db4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 711db5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 711db6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_711de0(void) {
  LOAD_REGS();
L_711de0: /* 711de0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 711de4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 711de5: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 711dea: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x711df0u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 711df0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_711e10(void) {
  LOAD_REGS();
L_711e10: /* 711e10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 711e11: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 711e12: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 711e18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 711e19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 711e1a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 711e1e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 711e20: mov esi, ecx */
  esi = ecx;
/* 711e22: jge 0x711e38 */
  if ((sf == of)) goto L_711e38;
L_711e24: /* 711e24: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 711e29: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711e2e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 711e33: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x711e35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 711e35: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711e38: /* 711e38: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 711e3b: jle 0x711e51 */
  if ((zf || sf != of)) goto L_711e51;
L_711e3d: /* 711e3d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 711e42: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711e47: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 711e4c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x711e4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 711e4e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711e51: /* 711e51: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 711e55: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 711e58: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 711e5b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 711e5d: jle 0x711e73 */
  if ((zf || sf != of)) goto L_711e73;
L_711e5f: /* 711e5f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 711e64: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711e69: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 711e6e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x711e70u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 711e70: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711e73: /* 711e73: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 711e75: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 711e76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 711e77: mov ecx, esi */
  ecx = esi;
/* 711e79: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x711e7fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 711e7f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 711e80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 711e81: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 711e82: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 711e83: ret 8 */
  esp += 12; SPILL(); return;
}

void f_711eb0(void) {
  LOAD_REGS();
L_711eb0: /* 711eb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 711eb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 711eb5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 711eb7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x711ebdu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 711ebd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_711ed0(void) {
  LOAD_REGS();
L_711ed0: /* 711ed0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 711ed1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 711ed2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 711ed8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 711ed9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 711eda: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 711ede: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 711ee0: mov esi, ecx */
  esi = ecx;
/* 711ee2: jge 0x711ef8 */
  if ((sf == of)) goto L_711ef8;
L_711ee4: /* 711ee4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 711ee9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711eee: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 711ef3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x711ef5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 711ef5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711ef8: /* 711ef8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 711efb: jle 0x711f11 */
  if ((zf || sf != of)) goto L_711f11;
L_711efd: /* 711efd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 711f02: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711f07: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 711f0c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x711f0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 711f0e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711f11: /* 711f11: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 711f15: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 711f18: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 711f1b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 711f1d: jle 0x711f33 */
  if ((zf || sf != of)) goto L_711f33;
L_711f1f: /* 711f1f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 711f24: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711f29: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 711f2e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x711f30u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 711f30: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711f33: /* 711f33: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 711f35: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 711f36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 711f37: mov ecx, esi */
  ecx = esi;
/* 711f39: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x711f3fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 711f3f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 711f40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 711f41: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 711f42: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 711f43: ret 8 */
  esp += 12; SPILL(); return;
}

void f_711f70(void) {
  LOAD_REGS();
L_711f70: /* 711f70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 711f74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 711f75: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 711f77: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x711f7du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 711f7d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_711f90(void) {
  LOAD_REGS();
L_711f90: /* 711f90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 711f91: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 711f92: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 711f98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 711f99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 711f9a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 711f9e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 711fa0: mov esi, ecx */
  esi = ecx;
/* 711fa2: jge 0x711fb8 */
  if ((sf == of)) goto L_711fb8;
L_711fa4: /* 711fa4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 711fa9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711fae: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 711fb3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x711fb5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 711fb5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711fb8: /* 711fb8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 711fbb: jle 0x711fd1 */
  if ((zf || sf != of)) goto L_711fd1;
L_711fbd: /* 711fbd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 711fc2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711fc7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 711fcc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x711fceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 711fce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711fd1: /* 711fd1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 711fd5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 711fd8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 711fdb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 711fdd: jle 0x711ff3 */
  if ((zf || sf != of)) goto L_711ff3;
L_711fdf: /* 711fdf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 711fe4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 711fe9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 711fee: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x711ff0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 711ff0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_711ff3: /* 711ff3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 711ff5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 711ff6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 711ff7: mov ecx, esi */
  ecx = esi;
/* 711ff9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x711fffu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 711fff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 712000: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 712001: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 712002: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 712003: ret 8 */
  esp += 12; SPILL(); return;
}

void f_712030(void) {
  LOAD_REGS();
L_712030: /* 712030: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 712034: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 712035: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 712037: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71203du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71203d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_712050(void) {
  LOAD_REGS();
L_712050: /* 712050: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712051: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 712052: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 712058: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 712059: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71205a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71205e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 712060: mov esi, ecx */
  esi = ecx;
/* 712062: jge 0x712078 */
  if ((sf == of)) goto L_712078;
L_712064: /* 712064: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 712069: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71206e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 712073: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712075u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712075: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712078: /* 712078: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71207b: jle 0x712091 */
  if ((zf || sf != of)) goto L_712091;
L_71207d: /* 71207d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 712082: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712087: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71208c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71208eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71208e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712091: /* 712091: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 712095: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 712098: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71209b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71209d: jle 0x7120b3 */
  if ((zf || sf != of)) goto L_7120b3;
L_71209f: /* 71209f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7120a4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7120a9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7120ae: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7120b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7120b0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7120b3: /* 7120b3: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7120b5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7120b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7120b7: mov ecx, esi */
  ecx = esi;
/* 7120b9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7120bfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7120bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7120c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7120c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7120c2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7120c3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7120f0(void) {
  LOAD_REGS();
L_7120f0: /* 7120f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7120f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7120f5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7120f7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7120fdu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7120fd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_712110(void) {
  LOAD_REGS();
L_712110: /* 712110: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712111: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 712112: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 712118: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 712119: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71211a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71211e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 712120: mov esi, ecx */
  esi = ecx;
/* 712122: jge 0x712138 */
  if ((sf == of)) goto L_712138;
L_712124: /* 712124: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 712129: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71212e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 712133: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712135u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712135: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712138: /* 712138: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71213b: jle 0x712151 */
  if ((zf || sf != of)) goto L_712151;
L_71213d: /* 71213d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 712142: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712147: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71214c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71214eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71214e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712151: /* 712151: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 712155: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 712158: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71215b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71215d: jle 0x712173 */
  if ((zf || sf != of)) goto L_712173;
L_71215f: /* 71215f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 712164: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712169: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71216e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712170u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712170: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712173: /* 712173: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 712175: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712176: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 712177: mov ecx, esi */
  ecx = esi;
/* 712179: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71217fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71217f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 712180: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 712181: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 712182: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 712183: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7121b0(void) {
  LOAD_REGS();
L_7121b0: /* 7121b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7121b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7121b5: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7121b7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7121bdu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7121bd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7121d0(void) {
  LOAD_REGS();
L_7121d0: /* 7121d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7121d1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7121d2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7121d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7121d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7121da: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7121de: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7121e0: mov esi, ecx */
  esi = ecx;
/* 7121e2: jge 0x7121f8 */
  if ((sf == of)) goto L_7121f8;
L_7121e4: /* 7121e4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7121e9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7121ee: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7121f3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7121f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7121f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7121f8: /* 7121f8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7121fb: jle 0x712211 */
  if ((zf || sf != of)) goto L_712211;
L_7121fd: /* 7121fd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 712202: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712207: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71220c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71220eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71220e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712211: /* 712211: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 712215: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 712218: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71221b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71221d: jle 0x712233 */
  if ((zf || sf != of)) goto L_712233;
L_71221f: /* 71221f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 712224: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712229: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71222e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712230u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712230: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712233: /* 712233: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 712235: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712236: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 712237: mov ecx, esi */
  ecx = esi;
/* 712239: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71223fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71223f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 712240: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 712241: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 712242: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 712243: ret 8 */
  esp += 12; SPILL(); return;
}

void f_712270(void) {
  LOAD_REGS();
L_712270: /* 712270: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 712274: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 712275: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 712277: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71227du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71227d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_712290(void) {
  LOAD_REGS();
L_712290: /* 712290: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712291: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 712292: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 712298: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 712299: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71229a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71229e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7122a0: mov esi, ecx */
  esi = ecx;
/* 7122a2: jge 0x7122b8 */
  if ((sf == of)) goto L_7122b8;
L_7122a4: /* 7122a4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7122a9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7122ae: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7122b3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7122b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7122b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7122b8: /* 7122b8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7122bb: jle 0x7122d1 */
  if ((zf || sf != of)) goto L_7122d1;
L_7122bd: /* 7122bd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7122c2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7122c7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7122cc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7122ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7122ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7122d1: /* 7122d1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7122d5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7122d8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7122db: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7122dd: jle 0x7122f3 */
  if ((zf || sf != of)) goto L_7122f3;
L_7122df: /* 7122df: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7122e4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7122e9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7122ee: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7122f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7122f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7122f3: /* 7122f3: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7122f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7122f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7122f7: mov ecx, esi */
  ecx = esi;
/* 7122f9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7122ffu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7122ff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 712300: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 712301: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 712302: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 712303: ret 8 */
  esp += 12; SPILL(); return;
}

void f_712330(void) {
  LOAD_REGS();
L_712330: /* 712330: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 712334: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 712335: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 712337: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71233du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71233d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_712350(void) {
  LOAD_REGS();
L_712350: /* 712350: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712351: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 712352: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 712358: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 712359: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71235a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71235e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 712360: mov esi, ecx */
  esi = ecx;
/* 712362: jge 0x712378 */
  if ((sf == of)) goto L_712378;
L_712364: /* 712364: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 712369: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71236e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 712373: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712375u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712375: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712378: /* 712378: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71237b: jle 0x712391 */
  if ((zf || sf != of)) goto L_712391;
L_71237d: /* 71237d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 712382: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712387: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71238c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71238eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71238e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712391: /* 712391: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 712395: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 712398: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71239b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71239d: jle 0x7123b3 */
  if ((zf || sf != of)) goto L_7123b3;
L_71239f: /* 71239f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7123a4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7123a9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7123ae: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7123b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7123b0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7123b3: /* 7123b3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7123b5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7123b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7123b7: mov ecx, esi */
  ecx = esi;
/* 7123b9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7123bfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7123bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7123c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7123c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7123c2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7123c3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7123f0(void) {
  LOAD_REGS();
L_7123f0: /* 7123f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7123f1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7123f2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7123f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7123f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7123fa: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7123fe: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 712400: mov esi, ecx */
  esi = ecx;
/* 712402: jge 0x712418 */
  if ((sf == of)) goto L_712418;
L_712404: /* 712404: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 712409: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71240e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 712413: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712415u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712415: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712418: /* 712418: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71241b: jle 0x712431 */
  if ((zf || sf != of)) goto L_712431;
L_71241d: /* 71241d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 712422: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712427: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71242c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71242eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71242e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712431: /* 712431: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 712435: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 712438: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71243b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71243d: jle 0x712453 */
  if ((zf || sf != of)) goto L_712453;
L_71243f: /* 71243f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 712444: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712449: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71244e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712450u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712450: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712453: /* 712453: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 712455: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712456: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 712457: mov ecx, esi */
  ecx = esi;
/* 712459: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71245fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71245f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 712460: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 712461: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 712462: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 712463: ret 8 */
  esp += 12; SPILL(); return;
}

void f_712490(void) {
  LOAD_REGS();
L_712490: /* 712490: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 712494: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 712495: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 712497: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71249du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71249d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7124b0(void) {
  LOAD_REGS();
L_7124b0: /* 7124b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7124b1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7124b2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7124b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7124b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7124ba: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7124be: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7124c0: mov esi, ecx */
  esi = ecx;
/* 7124c2: jge 0x7124d8 */
  if ((sf == of)) goto L_7124d8;
L_7124c4: /* 7124c4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7124c9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7124ce: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7124d3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7124d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7124d5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7124d8: /* 7124d8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7124db: jle 0x7124f1 */
  if ((zf || sf != of)) goto L_7124f1;
L_7124dd: /* 7124dd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7124e2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7124e7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7124ec: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7124eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7124ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7124f1: /* 7124f1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7124f5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7124f8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7124fb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7124fd: jle 0x712513 */
  if ((zf || sf != of)) goto L_712513;
L_7124ff: /* 7124ff: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 712504: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712509: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71250e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712510u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712510: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712513: /* 712513: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 712515: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712516: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 712517: mov ecx, esi */
  ecx = esi;
/* 712519: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71251fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71251f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 712520: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 712521: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 712522: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 712523: ret 8 */
  esp += 12; SPILL(); return;
}

void f_712550(void) {
  LOAD_REGS();
L_712550: /* 712550: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 712554: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 712555: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 712557: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71255du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71255d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_712570(void) {
  LOAD_REGS();
L_712570: /* 712570: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712571: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 712572: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 712578: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 712579: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71257a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71257e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 712580: mov esi, ecx */
  esi = ecx;
/* 712582: jge 0x712598 */
  if ((sf == of)) goto L_712598;
L_712584: /* 712584: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 712589: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71258e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 712593: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712595u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712595: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712598: /* 712598: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71259b: jle 0x7125b1 */
  if ((zf || sf != of)) goto L_7125b1;
L_71259d: /* 71259d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7125a2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7125a7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7125ac: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7125aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7125ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7125b1: /* 7125b1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7125b5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7125b8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7125bb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7125bd: jle 0x7125d3 */
  if ((zf || sf != of)) goto L_7125d3;
L_7125bf: /* 7125bf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7125c4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7125c9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7125ce: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7125d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7125d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7125d3: /* 7125d3: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 7125d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7125d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7125d7: mov ecx, esi */
  ecx = esi;
/* 7125d9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7125dfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7125df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7125e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7125e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7125e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7125e3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_712610(void) {
  LOAD_REGS();
L_712610: /* 712610: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 712614: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 712615: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 712617: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71261du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71261d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_712630(void) {
  LOAD_REGS();
L_712630: /* 712630: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712631: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 712632: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 712638: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 712639: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71263a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71263e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 712640: mov esi, ecx */
  esi = ecx;
/* 712642: jge 0x712658 */
  if ((sf == of)) goto L_712658;
L_712644: /* 712644: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 712649: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71264e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 712653: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712655u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712655: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712658: /* 712658: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71265b: jle 0x712671 */
  if ((zf || sf != of)) goto L_712671;
L_71265d: /* 71265d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 712662: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712667: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71266c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71266eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71266e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712671: /* 712671: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 712675: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 712678: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71267b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71267d: jle 0x712693 */
  if ((zf || sf != of)) goto L_712693;
L_71267f: /* 71267f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 712684: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712689: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71268e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712690u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712690: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712693: /* 712693: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 712695: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712696: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 712697: mov ecx, esi */
  ecx = esi;
/* 712699: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71269fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71269f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7126a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7126a1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7126a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7126a3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7126d0(void) {
  LOAD_REGS();
L_7126d0: /* 7126d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7126d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7126d5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7126d7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7126ddu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7126dd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7126f0(void) {
  LOAD_REGS();
L_7126f0: /* 7126f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7126f1: mov esi, ecx */
  esi = ecx;
/* 7126f3: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 7126f6: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7126fc: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7126fe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 712700: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 712701: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 712704: push 0xac3d1c */
  { uint32_t v = 0xac3d1cu; esp -= 4; W32(esp, v); }
/* 712709: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 71270a: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x71270cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71270c: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 71270f: mov edi, eax */
  edi = eax;
/* 712711: xor eax, eax */
  eax = 0;
/* 712713: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 712715: jle 0x71272f */
  if ((zf || sf != of)) goto L_71272f;
L_712717: /* 712717: jmp 0x712720 */
  goto L_712720;
L_712720: /* 712720: mov dword ptr [edi + eax*4], 0xffffffff */
  W32((uint32_t)(edi + eax*4), 0xffffffffu);
/* 712727: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 71272a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71272b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71272d: jl 0x712720 */
  if ((sf != of)) goto L_712720;
L_71272f: /* 71272f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 712732: xor ecx, ecx */
  ecx = 0;
/* 712734: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 712736: jle 0x712760 */
  if ((zf || sf != of)) goto L_712760;
L_712738: /* 712738: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712739: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_712740: /* 712740: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 712742: mov ebx, dword ptr [esi + 0x10] */
  ebx = R32((uint32_t)(esi + 0x10u));
/* 712745: lea edx, [eax + ecx*8] */
  edx = (uint32_t)(eax + ecx*8);
/* 712748: movzx eax, word ptr [edx + 4] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x4u)));
/* 71274c: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 71274d: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 71274f: mov ebx, dword ptr [edi + eax*4] */
  ebx = R32((uint32_t)(edi + eax*4));
/* 712752: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 712754: mov dword ptr [edi + eax*4], ecx */
  W32((uint32_t)(edi + eax*4), ecx);
/* 712757: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 71275a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 71275b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71275d: jl 0x712740 */
  if ((sf != of)) goto L_712740;
L_71275f: /* 71275f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_712760: /* 712760: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 712763: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 712765: je 0x712775 */
  if (zf) goto L_712775;
L_712767: /* 712767: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 71276d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 71276f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 712771: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 712772: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x712775u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_712775: /* 712775: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 712778: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 712779: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71277a: ret  */
  esp += 4; SPILL(); return;
}

void f_712719(void) {
  LOAD_REGS();
L_712719: /* 712719: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_712720: /* 712720: mov dword ptr [edi + eax*4], 0xffffffff */
  W32((uint32_t)(edi + eax*4), 0xffffffffu);
/* 712727: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 71272a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 71272b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71272d: jl 0x712720 */
  if ((sf != of)) goto L_712720;
L_71272f: /* 71272f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 712732: xor ecx, ecx */
  ecx = 0;
/* 712734: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 712736: jle 0x712760 */
  if ((zf || sf != of)) goto L_712760;
L_712738: /* 712738: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712739: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_712740: /* 712740: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 712742: mov ebx, dword ptr [esi + 0x10] */
  ebx = R32((uint32_t)(esi + 0x10u));
/* 712745: lea edx, [eax + ecx*8] */
  edx = (uint32_t)(eax + ecx*8);
/* 712748: movzx eax, word ptr [edx + 4] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x4u)));
/* 71274c: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 71274d: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 71274f: mov ebx, dword ptr [edi + eax*4] */
  ebx = R32((uint32_t)(edi + eax*4));
/* 712752: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 712754: mov dword ptr [edi + eax*4], ecx */
  W32((uint32_t)(edi + eax*4), ecx);
/* 712757: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 71275a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 71275b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71275d: jl 0x712740 */
  if ((sf != of)) goto L_712740;
L_71275f: /* 71275f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_712760: /* 712760: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 712763: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 712765: je 0x712775 */
  if (zf) goto L_712775;
L_712767: /* 712767: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 71276d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 71276f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 712771: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 712772: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x712775u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_712775: /* 712775: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 712778: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 712779: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71277a: ret  */
  esp += 4; SPILL(); return;
}

void f_7127b0(void) {
  LOAD_REGS();
L_7127b0: /* 7127b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7127b2: push 0x9c2a19 */
  { uint32_t v = 0x9c2a19u; esp -= 4; W32(esp, v); }
/* 7127b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7127bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7127be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7127c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7127c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7127c7: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7127cb: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 7127ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7127cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7127d0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7127d2: mov esi, ecx */
  esi = ecx;
/* 7127d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7127d5: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 7127d9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x7127dfu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 7127df: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 7127e6: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 7127e9: xor edi, edi */
  edi = 0;
/* 7127eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7127ed: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7127f5: jle 0x712822 */
  if ((zf || sf != of)) goto L_712822;
L_7127f7: /* 7127f7: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7127f9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7127fb: mov ecx, esi */
  ecx = esi;
/* 7127fd: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x712803u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 712803: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 712805: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 712808: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 71280a: je 0x71281a */
  if (zf) goto L_71281a;
L_71280c: /* 71280c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 71280e: mov ecx, dword ptr [edx + edi*8] */
  ecx = R32((uint32_t)(edx + edi*8));
/* 712811: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 712813: mov edx, dword ptr [edx + edi*8 + 4] */
  edx = R32((uint32_t)(edx + edi*8 + 0x4u));
/* 712817: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_71281a: /* 71281a: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 71281d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 71281e: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 712820: jl 0x7127f7 */
  if ((sf != of)) goto L_7127f7;
L_712822: /* 712822: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 712826: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 712827: mov eax, esi */
  eax = esi;
/* 712829: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71282a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71282b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 712832: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 712835: ret 4 */
  esp += 8; SPILL(); return;
}

void f_712870(void) {
  LOAD_REGS();
L_712870: /* 712870: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712871: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 712872: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 712878: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 712879: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71287a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71287e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 712880: mov esi, ecx */
  esi = ecx;
/* 712882: jge 0x712898 */
  if ((sf == of)) goto L_712898;
L_712884: /* 712884: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 712889: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71288e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 712893: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712895u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712895: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712898: /* 712898: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71289b: jle 0x7128b1 */
  if ((zf || sf != of)) goto L_7128b1;
L_71289d: /* 71289d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7128a2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7128a7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7128ac: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7128aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7128ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7128b1: /* 7128b1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7128b5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7128b8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7128bb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7128bd: jle 0x7128d3 */
  if ((zf || sf != of)) goto L_7128d3;
L_7128bf: /* 7128bf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7128c4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7128c9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7128ce: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7128d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7128d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7128d3: /* 7128d3: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7128d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7128d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7128d7: mov ecx, esi */
  ecx = esi;
/* 7128d9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7128dfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7128df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7128e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7128e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7128e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7128e3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_712910(void) {
  LOAD_REGS();
L_712910: /* 712910: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 712914: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 712915: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 712917: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71291du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71291d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_712930(void) {
  LOAD_REGS();
L_712930: /* 712930: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712931: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 712932: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 712938: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 712939: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71293a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71293e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 712940: mov esi, ecx */
  esi = ecx;
/* 712942: jge 0x712958 */
  if ((sf == of)) goto L_712958;
L_712944: /* 712944: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 712949: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71294e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 712953: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712955u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712955: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712958: /* 712958: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71295b: jle 0x712971 */
  if ((zf || sf != of)) goto L_712971;
L_71295d: /* 71295d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 712962: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712967: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71296c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71296eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71296e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712971: /* 712971: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 712975: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 712978: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71297b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71297d: jle 0x712993 */
  if ((zf || sf != of)) goto L_712993;
L_71297f: /* 71297f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 712984: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712989: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71298e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712990u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712990: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712993: /* 712993: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 712995: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712996: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 712997: mov ecx, esi */
  ecx = esi;
/* 712999: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71299fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71299f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7129a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7129a1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7129a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7129a3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7129d0(void) {
  LOAD_REGS();
L_7129d0: /* 7129d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7129d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7129d5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7129d7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7129ddu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7129dd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7129f0(void) {
  LOAD_REGS();
L_7129f0: /* 7129f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7129f1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7129f2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7129f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7129f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7129fa: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7129fe: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 712a00: mov esi, ecx */
  esi = ecx;
/* 712a02: jge 0x712a18 */
  if ((sf == of)) goto L_712a18;
L_712a04: /* 712a04: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 712a09: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712a0e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 712a13: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712a15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712a15: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712a18: /* 712a18: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 712a1b: jle 0x712a31 */
  if ((zf || sf != of)) goto L_712a31;
L_712a1d: /* 712a1d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 712a22: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712a27: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 712a2c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712a2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712a2e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712a31: /* 712a31: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 712a35: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 712a38: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 712a3b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 712a3d: jle 0x712a53 */
  if ((zf || sf != of)) goto L_712a53;
L_712a3f: /* 712a3f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 712a44: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712a49: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 712a4e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712a50u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712a50: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712a53: /* 712a53: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 712a55: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712a56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 712a57: mov ecx, esi */
  ecx = esi;
/* 712a59: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x712a5fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 712a5f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 712a60: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 712a61: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 712a62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 712a63: ret 8 */
  esp += 12; SPILL(); return;
}

void f_712a90(void) {
  LOAD_REGS();
L_712a90: /* 712a90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712a91: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 712a92: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 712a98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 712a99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 712a9a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 712a9e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 712aa0: mov esi, ecx */
  esi = ecx;
/* 712aa2: jge 0x712ab8 */
  if ((sf == of)) goto L_712ab8;
L_712aa4: /* 712aa4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 712aa9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712aae: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 712ab3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712ab5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712ab5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712ab8: /* 712ab8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 712abb: jle 0x712ad1 */
  if ((zf || sf != of)) goto L_712ad1;
L_712abd: /* 712abd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 712ac2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712ac7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 712acc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712aceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712ace: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712ad1: /* 712ad1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 712ad5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 712ad8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 712adb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 712add: jle 0x712af3 */
  if ((zf || sf != of)) goto L_712af3;
L_712adf: /* 712adf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 712ae4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712ae9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 712aee: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712af0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712af0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712af3: /* 712af3: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 712af5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712af6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 712af7: mov ecx, esi */
  ecx = esi;
/* 712af9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x712affu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 712aff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 712b00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 712b01: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 712b02: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 712b03: ret 8 */
  esp += 12; SPILL(); return;
}

void f_712b30(void) {
  LOAD_REGS();
L_712b30: /* 712b30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 712b34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 712b35: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 712b37: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x712b3du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 712b3d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_712b50(void) {
  LOAD_REGS();
L_712b50: /* 712b50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 712b52: push 0x9c2a39 */
  { uint32_t v = 0x9c2a39u; esp -= 4; W32(esp, v); }
/* 712b57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 712b5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 712b5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 712b65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 712b66: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712b67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 712b68: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 712b69: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 712b6d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 712b70: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 712b72: mov esi, ecx */
  esi = ecx;
/* 712b74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 712b75: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 712b79: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x712b7fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 712b7f: xor ebx, ebx */
  ebx = 0;
/* 712b81: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 712b84: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 712b87: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 712b8b: jle 0x712bc8 */
  if ((zf || sf != of)) goto L_712bc8;
L_712b8d: /* 712b8d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 712b8e: xor ebp, ebp */
  ebp = 0;
L_712b90: /* 712b90: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 712b92: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 712b94: mov ecx, esi */
  ecx = esi;
/* 712b96: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x712b9cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 712b9c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 712b9e: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 712ba1: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 712ba4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 712ba6: je 0x712bbc */
  if (zf) goto L_712bbc;
L_712ba8: /* 712ba8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 712baa: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 712bac: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 712bae: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 712bb0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 712bb3: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 712bb6: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 712bb9: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_712bbc: /* 712bbc: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 712bbf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 712bc0: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 712bc3: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 712bc5: jl 0x712b90 */
  if ((sf != of)) goto L_712b90;
L_712bc7: /* 712bc7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_712bc8: /* 712bc8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 712bcc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 712bcd: mov eax, esi */
  eax = esi;
/* 712bcf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 712bd0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 712bd1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 712bd8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 712bdb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_712c10(void) {
  LOAD_REGS();
L_712c10: /* 712c10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712c11: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 712c12: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 712c18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 712c19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 712c1a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 712c1e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 712c20: mov esi, ecx */
  esi = ecx;
/* 712c22: jge 0x712c38 */
  if ((sf == of)) goto L_712c38;
L_712c24: /* 712c24: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 712c29: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712c2e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 712c33: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712c35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712c35: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712c38: /* 712c38: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 712c3b: jle 0x712c51 */
  if ((zf || sf != of)) goto L_712c51;
L_712c3d: /* 712c3d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 712c42: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712c47: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 712c4c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712c4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712c4e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712c51: /* 712c51: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 712c55: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 712c58: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 712c5b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 712c5d: jle 0x712c73 */
  if ((zf || sf != of)) goto L_712c73;
L_712c5f: /* 712c5f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 712c64: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712c69: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 712c6e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712c70u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712c70: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712c73: /* 712c73: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 712c75: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712c76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 712c77: mov ecx, esi */
  ecx = esi;
/* 712c79: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x712c7fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 712c7f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 712c80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 712c81: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 712c82: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 712c83: ret 8 */
  esp += 12; SPILL(); return;
}

void f_712cb0(void) {
  LOAD_REGS();
L_712cb0: /* 712cb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712cb1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 712cb2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 712cb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 712cb9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 712cba: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 712cbe: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 712cc0: mov esi, ecx */
  esi = ecx;
/* 712cc2: jge 0x712cd8 */
  if ((sf == of)) goto L_712cd8;
L_712cc4: /* 712cc4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 712cc9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712cce: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 712cd3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712cd5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712cd5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712cd8: /* 712cd8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 712cdb: jle 0x712cf1 */
  if ((zf || sf != of)) goto L_712cf1;
L_712cdd: /* 712cdd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 712ce2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712ce7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 712cec: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712ceeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712cee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712cf1: /* 712cf1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 712cf5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 712cf8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 712cfb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 712cfd: jle 0x712d13 */
  if ((zf || sf != of)) goto L_712d13;
L_712cff: /* 712cff: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 712d04: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712d09: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 712d0e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712d10u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712d10: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712d13: /* 712d13: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 712d15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712d16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 712d17: mov ecx, esi */
  ecx = esi;
/* 712d19: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x712d1fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 712d1f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 712d20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 712d21: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 712d22: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 712d23: ret 8 */
  esp += 12; SPILL(); return;
}

void f_712d50(void) {
  LOAD_REGS();
L_712d50: /* 712d50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 712d54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 712d55: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 712d57: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x712d5du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 712d5d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_712d70(void) {
  LOAD_REGS();
L_712d70: /* 712d70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712d71: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 712d72: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 712d78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 712d79: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 712d7a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 712d7e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 712d80: mov esi, ecx */
  esi = ecx;
/* 712d82: jge 0x712d98 */
  if ((sf == of)) goto L_712d98;
L_712d84: /* 712d84: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 712d89: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712d8e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 712d93: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712d95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712d95: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712d98: /* 712d98: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 712d9b: jle 0x712db1 */
  if ((zf || sf != of)) goto L_712db1;
L_712d9d: /* 712d9d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 712da2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712da7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 712dac: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712daeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712dae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712db1: /* 712db1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 712db5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 712db8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 712dbb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 712dbd: jle 0x712dd3 */
  if ((zf || sf != of)) goto L_712dd3;
L_712dbf: /* 712dbf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 712dc4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712dc9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 712dce: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x712dd0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712dd0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712dd3: /* 712dd3: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 712dd5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712dd6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 712dd7: mov ecx, esi */
  ecx = esi;
/* 712dd9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x712ddfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 712ddf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 712de0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 712de1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 712de2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 712de3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_712e10(void) {
  LOAD_REGS();
L_712e10: /* 712e10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 712e14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 712e15: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 712e17: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x712e1du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 712e1d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_712e30(void) {
  LOAD_REGS();
L_712e30: /* 712e30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712e31: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 712e35: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 712e37: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 712e38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 712e39: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 712e3f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 712e40: mov ebp, ecx */
  ebp = ecx;
/* 712e42: jge 0x712e58 */
  if ((sf == of)) goto L_712e58;
L_712e44: /* 712e44: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 712e49: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712e4e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 712e53: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x712e55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712e55: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712e58: /* 712e58: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 712e5b: jle 0x712e71 */
  if ((zf || sf != of)) goto L_712e71;
L_712e5d: /* 712e5d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 712e62: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712e67: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 712e6c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x712e6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712e6e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712e71: /* 712e71: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 712e75: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 712e78: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 712e7b: jle 0x712e91 */
  if ((zf || sf != of)) goto L_712e91;
L_712e7d: /* 712e7d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 712e82: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712e87: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 712e8c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x712e8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712e8e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712e91: /* 712e91: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 712e93: jge 0x712eb0 */
  if ((sf == of)) goto L_712eb0;
L_712e95: /* 712e95: mov esi, ebx */
  esi = ebx;
/* 712e97: imul esi, esi, 0x44 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x44u);
  esi = (uint32_t)r;
  }
/* 712e9a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 712e9c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_712ea0: /* 712ea0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 712ea3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 712ea5: call 0x6c29a5 */
  esp -= 4; W32(esp, 0x712eaau); SPILL(); f_6c29a5(); if (g_unwind) return; RELOAD();
/* 712eaa: add esi, 0x44 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 712ead: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 712eae: jne 0x712ea0 */
  if (!zf) goto L_712ea0;
L_712eb0: /* 712eb0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 712eb4: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 712eb6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 712eb7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712eb8: mov ecx, ebp */
  ecx = ebp;
/* 712eba: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x712ec0u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 712ec0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 712ec1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 712ec2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 712ec3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 712ec4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_712f00(void) {
  LOAD_REGS();
L_712f00: /* 712f00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712f01: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 712f05: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 712f07: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 712f08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 712f09: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 712f0f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 712f10: mov ebp, ecx */
  ebp = ecx;
/* 712f12: jge 0x712f28 */
  if ((sf == of)) goto L_712f28;
L_712f14: /* 712f14: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 712f19: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712f1e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 712f23: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x712f25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712f25: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712f28: /* 712f28: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 712f2b: jle 0x712f41 */
  if ((zf || sf != of)) goto L_712f41;
L_712f2d: /* 712f2d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 712f32: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712f37: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 712f3c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x712f3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712f3e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712f41: /* 712f41: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 712f45: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 712f48: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 712f4b: jle 0x712f61 */
  if ((zf || sf != of)) goto L_712f61;
L_712f4d: /* 712f4d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 712f52: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712f57: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 712f5c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x712f5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712f5e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712f61: /* 712f61: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 712f63: jge 0x712f80 */
  if ((sf == of)) goto L_712f80;
L_712f65: /* 712f65: mov esi, ebx */
  esi = ebx;
/* 712f67: imul esi, esi, 0x4c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x4cu);
  esi = (uint32_t)r;
  }
/* 712f6a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 712f6c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_712f70: /* 712f70: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 712f73: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 712f75: call 0x6cc509 */
  esp -= 4; W32(esp, 0x712f7au); SPILL(); f_6cc509(); if (g_unwind) return; RELOAD();
/* 712f7a: add esi, 0x4c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 712f7d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 712f7e: jne 0x712f70 */
  if (!zf) goto L_712f70;
L_712f80: /* 712f80: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 712f84: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 712f86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 712f87: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712f88: mov ecx, ebp */
  ecx = ebp;
/* 712f8a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x712f90u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 712f90: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 712f91: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 712f92: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 712f93: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 712f94: ret 8 */
  esp += 12; SPILL(); return;
}

void f_712fd0(void) {
  LOAD_REGS();
L_712fd0: /* 712fd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 712fd1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 712fd5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 712fd7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 712fd8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 712fd9: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 712fdf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 712fe0: mov ebp, ecx */
  ebp = ecx;
/* 712fe2: jge 0x712ff8 */
  if ((sf == of)) goto L_712ff8;
L_712fe4: /* 712fe4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 712fe9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 712fee: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 712ff3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x712ff5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 712ff5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_712ff8: /* 712ff8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 712ffb: jle 0x713011 */
  if ((zf || sf != of)) goto L_713011;
L_712ffd: /* 712ffd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 713002: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713007: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71300c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x71300eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71300e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713011: /* 713011: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 713015: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 713018: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71301b: jle 0x713031 */
  if ((zf || sf != of)) goto L_713031;
L_71301d: /* 71301d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 713022: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713027: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71302c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x71302eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71302e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713031: /* 713031: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 713033: jge 0x713050 */
  if ((sf == of)) goto L_713050;
L_713035: /* 713035: lea esi, [ebx + ebx*8] */
  esi = (uint32_t)(ebx + ebx*8);
/* 713038: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 71303b: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 71303d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_713040: /* 713040: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 713043: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 713045: call 0x6c7abd */
  esp -= 4; W32(esp, 0x71304au); SPILL(); f_6c7abd(); if (g_unwind) return; RELOAD();
/* 71304a: add esi, 0x48 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71304d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 71304e: jne 0x713040 */
  if (!zf) goto L_713040;
L_713050: /* 713050: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 713054: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 713056: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 713057: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713058: mov ecx, ebp */
  ecx = ebp;
/* 71305a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x713060u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 713060: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 713061: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 713062: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 713063: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 713064: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7130a0(void) {
  LOAD_REGS();
L_7130a0: /* 7130a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7130a1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7130a2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7130a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7130a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7130aa: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7130ae: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7130b0: mov esi, ecx */
  esi = ecx;
/* 7130b2: jge 0x7130c8 */
  if ((sf == of)) goto L_7130c8;
L_7130b4: /* 7130b4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7130b9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7130be: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7130c3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7130c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7130c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7130c8: /* 7130c8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7130cb: jle 0x7130e1 */
  if ((zf || sf != of)) goto L_7130e1;
L_7130cd: /* 7130cd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7130d2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7130d7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7130dc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7130deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7130de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7130e1: /* 7130e1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7130e5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7130e8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7130eb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7130ed: jle 0x713103 */
  if ((zf || sf != of)) goto L_713103;
L_7130ef: /* 7130ef: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7130f4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7130f9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7130fe: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713100u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713100: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713103: /* 713103: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 713105: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713106: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 713107: mov ecx, esi */
  ecx = esi;
/* 713109: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71310fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71310f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 713110: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 713111: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 713112: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 713113: ret 8 */
  esp += 12; SPILL(); return;
}

void f_713140(void) {
  LOAD_REGS();
L_713140: /* 713140: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713141: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 713145: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 713146: mov esi, ecx */
  esi = ecx;
/* 713148: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71314a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71314b: je 0x71318d */
  if (zf) goto L_71318d;
L_71314d: /* 71314d: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 713150: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 713151: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 713153: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x713159u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 713159: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 71315c: xor edi, edi */
  edi = 0;
/* 71315e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 713160: jle 0x71318d */
  if ((zf || sf != of)) goto L_71318d;
L_713162: /* 713162: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 713164: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 713166: mov ecx, esi */
  ecx = esi;
/* 713168: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71316eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71316e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 713170: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 713173: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 713175: je 0x713185 */
  if (zf) goto L_713185;
L_713177: /* 713177: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 713179: mov ecx, dword ptr [edx + edi*8] */
  ecx = R32((uint32_t)(edx + edi*8));
/* 71317c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 71317e: mov edx, dword ptr [edx + edi*8 + 4] */
  edx = R32((uint32_t)(edx + edi*8 + 0x4u));
/* 713182: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_713185: /* 713185: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 713188: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 713189: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71318b: jl 0x713162 */
  if ((sf != of)) goto L_713162;
L_71318d: /* 71318d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 71318e: mov eax, esi */
  eax = esi;
/* 713190: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 713191: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 713192: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7131c0(void) {
  LOAD_REGS();
L_7131c0: /* 7131c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7131c1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7131c2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7131c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7131c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7131ca: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7131ce: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7131d0: mov esi, ecx */
  esi = ecx;
/* 7131d2: jge 0x7131e8 */
  if ((sf == of)) goto L_7131e8;
L_7131d4: /* 7131d4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7131d9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7131de: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7131e3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7131e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7131e5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7131e8: /* 7131e8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7131eb: jle 0x713201 */
  if ((zf || sf != of)) goto L_713201;
L_7131ed: /* 7131ed: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7131f2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7131f7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7131fc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7131feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7131fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713201: /* 713201: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 713205: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 713208: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71320b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71320d: jle 0x713223 */
  if ((zf || sf != of)) goto L_713223;
L_71320f: /* 71320f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 713214: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713219: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71321e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713220u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713220: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713223: /* 713223: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 713225: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713226: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 713227: mov ecx, esi */
  ecx = esi;
/* 713229: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71322fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71322f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 713230: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 713231: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 713232: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 713233: ret 8 */
  esp += 12; SPILL(); return;
}

void f_713260(void) {
  LOAD_REGS();
L_713260: /* 713260: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713261: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 713265: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 713266: mov esi, ecx */
  esi = ecx;
/* 713268: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71326a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71326b: je 0x7132ad */
  if (zf) goto L_7132ad;
L_71326d: /* 71326d: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 713270: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 713271: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 713273: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x713279u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 713279: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 71327c: xor edi, edi */
  edi = 0;
/* 71327e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 713280: jle 0x7132ad */
  if ((zf || sf != of)) goto L_7132ad;
L_713282: /* 713282: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 713284: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 713286: mov ecx, esi */
  ecx = esi;
/* 713288: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71328eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71328e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 713290: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 713293: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 713295: je 0x7132a5 */
  if (zf) goto L_7132a5;
L_713297: /* 713297: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 713299: mov ecx, dword ptr [edx + edi*8] */
  ecx = R32((uint32_t)(edx + edi*8));
/* 71329c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 71329e: mov edx, dword ptr [edx + edi*8 + 4] */
  edx = R32((uint32_t)(edx + edi*8 + 0x4u));
/* 7132a2: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
L_7132a5: /* 7132a5: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 7132a8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7132a9: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7132ab: jl 0x713282 */
  if ((sf != of)) goto L_713282;
L_7132ad: /* 7132ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7132ae: mov eax, esi */
  eax = esi;
/* 7132b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7132b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7132b2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7132e0(void) {
  LOAD_REGS();
L_7132e0: /* 7132e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7132e1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7132e2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7132e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7132e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7132ea: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7132ee: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7132f0: mov esi, ecx */
  esi = ecx;
/* 7132f2: jge 0x713308 */
  if ((sf == of)) goto L_713308;
L_7132f4: /* 7132f4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7132f9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7132fe: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 713303: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713305u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713305: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713308: /* 713308: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71330b: jle 0x713321 */
  if ((zf || sf != of)) goto L_713321;
L_71330d: /* 71330d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 713312: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713317: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71331c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71331eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71331e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713321: /* 713321: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 713325: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 713328: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71332b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71332d: jle 0x713343 */
  if ((zf || sf != of)) goto L_713343;
L_71332f: /* 71332f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 713334: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713339: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71333e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713340u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713340: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713343: /* 713343: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 713345: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713346: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 713347: mov ecx, esi */
  ecx = esi;
/* 713349: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71334fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71334f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 713350: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 713351: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 713352: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 713353: ret 8 */
  esp += 12; SPILL(); return;
}

void f_713380(void) {
  LOAD_REGS();
L_713380: /* 713380: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 713384: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 713385: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 713387: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71338du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71338d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7133a0(void) {
  LOAD_REGS();
L_7133a0: /* 7133a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7133a1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7133a2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7133a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7133a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7133aa: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7133ae: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7133b0: mov esi, ecx */
  esi = ecx;
/* 7133b2: jge 0x7133c8 */
  if ((sf == of)) goto L_7133c8;
L_7133b4: /* 7133b4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7133b9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7133be: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7133c3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7133c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7133c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7133c8: /* 7133c8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7133cb: jle 0x7133e1 */
  if ((zf || sf != of)) goto L_7133e1;
L_7133cd: /* 7133cd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7133d2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7133d7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7133dc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7133deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7133de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7133e1: /* 7133e1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7133e5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7133e8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7133eb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7133ed: jle 0x713403 */
  if ((zf || sf != of)) goto L_713403;
L_7133ef: /* 7133ef: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7133f4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7133f9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7133fe: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713400u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713400: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713403: /* 713403: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 713405: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713406: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 713407: mov ecx, esi */
  ecx = esi;
/* 713409: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71340fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71340f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 713410: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 713411: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 713412: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 713413: ret 8 */
  esp += 12; SPILL(); return;
}

void f_713440(void) {
  LOAD_REGS();
L_713440: /* 713440: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 713444: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 713445: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 713447: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x71344du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 71344d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_713460(void) {
  LOAD_REGS();
L_713460: /* 713460: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713461: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 713462: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 713468: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 713469: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71346a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71346e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 713470: mov esi, ecx */
  esi = ecx;
/* 713472: jge 0x713488 */
  if ((sf == of)) goto L_713488;
L_713474: /* 713474: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 713479: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71347e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 713483: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713485u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713485: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713488: /* 713488: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71348b: jle 0x7134a1 */
  if ((zf || sf != of)) goto L_7134a1;
L_71348d: /* 71348d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 713492: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713497: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71349c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71349eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71349e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7134a1: /* 7134a1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7134a5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7134a8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7134ab: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7134ad: jle 0x7134c3 */
  if ((zf || sf != of)) goto L_7134c3;
L_7134af: /* 7134af: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7134b4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7134b9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7134be: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7134c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7134c0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7134c3: /* 7134c3: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7134c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7134c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7134c7: mov ecx, esi */
  ecx = esi;
/* 7134c9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7134cfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7134cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7134d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7134d1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7134d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7134d3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_713500(void) {
  LOAD_REGS();
L_713500: /* 713500: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713501: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 713502: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 713503: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 713507: mov esi, ecx */
  esi = ecx;
/* 713509: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71350b: je 0x713560 */
  if (zf) goto L_713560;
L_71350d: /* 71350d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 713510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 713511: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 713513: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x713519u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 713519: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71351c: xor ebx, ebx */
  ebx = 0;
/* 71351e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 713520: jle 0x713560 */
  if ((zf || sf != of)) goto L_713560;
L_713522: /* 713522: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 713523: xor ebp, ebp */
  ebp = 0;
L_713525: /* 713525: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 713527: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 713529: mov ecx, esi */
  ecx = esi;
/* 71352b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x713531u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 713531: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 713533: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 713536: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 713538: je 0x713554 */
  if (zf) goto L_713554;
L_71353a: /* 71353a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 71353c: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 71353e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 713540: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 713542: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 713545: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 713548: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 71354b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 71354e: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 713551: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
L_713554: /* 713554: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 713557: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 713558: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 71355b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71355d: jl 0x713525 */
  if ((sf != of)) goto L_713525;
L_71355f: /* 71355f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_713560: /* 713560: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 713561: mov eax, esi */
  eax = esi;
/* 713563: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 713564: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 713565: ret 4 */
  esp += 8; SPILL(); return;
}

void f_713590(void) {
  LOAD_REGS();
L_713590: /* 713590: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713591: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 713592: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 713598: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 713599: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71359a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71359e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7135a0: mov esi, ecx */
  esi = ecx;
/* 7135a2: jge 0x7135b8 */
  if ((sf == of)) goto L_7135b8;
L_7135a4: /* 7135a4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7135a9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7135ae: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7135b3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7135b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7135b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7135b8: /* 7135b8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7135bb: jle 0x7135d1 */
  if ((zf || sf != of)) goto L_7135d1;
L_7135bd: /* 7135bd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7135c2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7135c7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7135cc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7135ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7135ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7135d1: /* 7135d1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7135d5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7135d8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7135db: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7135dd: jle 0x7135f3 */
  if ((zf || sf != of)) goto L_7135f3;
L_7135df: /* 7135df: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7135e4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7135e9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7135ee: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7135f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7135f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7135f3: /* 7135f3: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 7135f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7135f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7135f7: mov ecx, esi */
  ecx = esi;
/* 7135f9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7135ffu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7135ff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 713600: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 713601: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 713602: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 713603: ret 8 */
  esp += 12; SPILL(); return;
}

void f_713630(void) {
  LOAD_REGS();
L_713630: /* 713630: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 713631: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713632: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 713633: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 713637: mov ebx, ecx */
  ebx = ecx;
/* 713639: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71363b: je 0x7136a3 */
  if (zf) goto L_7136a3;
L_71363d: /* 71363d: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 713640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 713641: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 713643: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x713649u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 713649: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 71364c: xor eax, eax */
  eax = 0;
/* 71364e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 713650: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 713654: jle 0x7136a3 */
  if ((zf || sf != of)) goto L_7136a3;
L_713656: /* 713656: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 713657: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 71365b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71365c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_713660: /* 713660: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 713662: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 713664: mov ecx, ebx */
  ecx = ebx;
/* 713666: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71366cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71366c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 71366e: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 713671: lea edi, [ecx + eax*4] */
  edi = (uint32_t)(ecx + eax*4);
/* 713674: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 713676: je 0x713686 */
  if (zf) goto L_713686;
L_713678: /* 713678: mov esi, dword ptr [ebp] */
  esi = R32((uint32_t)(ebp));
/* 71367b: add esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71367f: mov ecx, 9 */
  ecx = 0x9u;
/* 713684: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_713686: /* 713686: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 71368a: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 71368e: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 713691: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 713692: add edx, 0x24 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 713695: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 713697: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 71369b: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 71369f: jl 0x713660 */
  if ((sf != of)) goto L_713660;
L_7136a1: /* 7136a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7136a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_7136a3: /* 7136a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7136a4: mov eax, ebx */
  eax = ebx;
/* 7136a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7136a7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7136a8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7136d0(void) {
  LOAD_REGS();
L_7136d0: /* 7136d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7136d1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 7136d5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7136d7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7136d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7136d9: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 7136df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7136e0: mov ebp, ecx */
  ebp = ecx;
/* 7136e2: jge 0x7136f8 */
  if ((sf == of)) goto L_7136f8;
L_7136e4: /* 7136e4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7136e9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7136ee: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7136f3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7136f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7136f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7136f8: /* 7136f8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7136fb: jle 0x713711 */
  if ((zf || sf != of)) goto L_713711;
L_7136fd: /* 7136fd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 713702: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713707: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71370c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x71370eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71370e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713711: /* 713711: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 713715: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 713718: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71371b: jle 0x713731 */
  if ((zf || sf != of)) goto L_713731;
L_71371d: /* 71371d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 713722: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713727: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71372c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x71372eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71372e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713731: /* 713731: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 713733: jge 0x713750 */
  if ((sf == of)) goto L_713750;
L_713735: /* 713735: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* 713738: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 71373b: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 71373d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_713740: /* 713740: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 713743: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 713745: call 0x6c627b */
  esp -= 4; W32(esp, 0x71374au); SPILL(); f_6c627b(); if (g_unwind) return; RELOAD();
/* 71374a: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 71374d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 71374e: jne 0x713740 */
  if (!zf) goto L_713740;
L_713750: /* 713750: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 713754: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 713756: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 713757: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713758: mov ecx, ebp */
  ecx = ebp;
/* 71375a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x713760u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 713760: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 713761: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 713762: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 713763: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 713764: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7137a0(void) {
  LOAD_REGS();
L_7137a0: /* 7137a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7137a1: mov esi, ecx */
  esi = ecx;
/* 7137a3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7137a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7137a7: xor edi, edi */
  edi = 0;
/* 7137a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7137ab: jle 0x7137c5 */
  if ((zf || sf != of)) goto L_7137c5;
L_7137ad: /* 7137ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7137ae: xor ebx, ebx */
  ebx = 0;
L_7137b0: /* 7137b0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7137b2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7137b4: call 0x6c627b */
  esp -= 4; W32(esp, 0x7137b9u); SPILL(); f_6c627b(); if (g_unwind) return; RELOAD();
/* 7137b9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7137bc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7137bd: add ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7137c0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7137c2: jl 0x7137b0 */
  if ((sf != of)) goto L_7137b0;
L_7137c4: /* 7137c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_7137c5: /* 7137c5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7137c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7137ca: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 7137cc: mov ecx, esi */
  ecx = esi;
/* 7137ce: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7137d4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7137d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7137d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7137d6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7137f0(void) {
  LOAD_REGS();
L_7137f0: /* 7137f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7137f1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7137f2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7137f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7137f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7137fa: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7137fe: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 713800: mov esi, ecx */
  esi = ecx;
/* 713802: jge 0x713818 */
  if ((sf == of)) goto L_713818;
L_713804: /* 713804: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 713809: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71380e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 713813: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713815u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713815: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713818: /* 713818: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71381b: jle 0x713831 */
  if ((zf || sf != of)) goto L_713831;
L_71381d: /* 71381d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 713822: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713827: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71382c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71382eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71382e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713831: /* 713831: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 713835: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 713838: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71383b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71383d: jle 0x713853 */
  if ((zf || sf != of)) goto L_713853;
L_71383f: /* 71383f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 713844: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713849: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71384e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713850u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713850: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713853: /* 713853: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 713855: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713856: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 713857: mov ecx, esi */
  ecx = esi;
/* 713859: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71385fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71385f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 713860: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 713861: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 713862: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 713863: ret 8 */
  esp += 12; SPILL(); return;
}

void f_713890(void) {
  LOAD_REGS();
L_713890: /* 713890: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713891: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 713892: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 713893: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 713897: mov esi, ecx */
  esi = ecx;
/* 713899: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71389b: je 0x7138d6 */
  if (zf) goto L_7138d6;
L_71389d: /* 71389d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7138a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7138a1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7138a3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7138a9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7138a9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7138ac: xor ebx, ebx */
  ebx = 0;
/* 7138ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7138b0: jle 0x7138d6 */
  if ((zf || sf != of)) goto L_7138d6;
L_7138b2: /* 7138b2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7138b4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7138b6: mov ecx, esi */
  ecx = esi;
/* 7138b8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7138beu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7138be: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7138c0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7138c3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7138c5: je 0x7138ce */
  if (zf) goto L_7138ce;
L_7138c7: /* 7138c7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7138c9: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 7138cc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_7138ce: /* 7138ce: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7138d1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7138d2: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7138d4: jl 0x7138b2 */
  if ((sf != of)) goto L_7138b2;
L_7138d6: /* 7138d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7138d7: mov eax, esi */
  eax = esi;
/* 7138d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7138da: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7138db: ret 4 */
  esp += 8; SPILL(); return;
}

void f_713900(void) {
  LOAD_REGS();
L_713900: /* 713900: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713901: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 713902: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 713908: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 713909: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 71390a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 71390e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 713910: mov esi, ecx */
  esi = ecx;
/* 713912: jge 0x713928 */
  if ((sf == of)) goto L_713928;
L_713914: /* 713914: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 713919: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 71391e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 713923: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713925u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713925: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713928: /* 713928: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71392b: jle 0x713941 */
  if ((zf || sf != of)) goto L_713941;
L_71392d: /* 71392d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 713932: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713937: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 71393c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x71393eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 71393e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713941: /* 713941: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 713945: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 713948: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 71394b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 71394d: jle 0x713963 */
  if ((zf || sf != of)) goto L_713963;
L_71394f: /* 71394f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 713954: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713959: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 71395e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713960u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713960: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713963: /* 713963: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 713965: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713966: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 713967: mov ecx, esi */
  ecx = esi;
/* 713969: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x71396fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 71396f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 713970: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 713971: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 713972: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 713973: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7139a0(void) {
  LOAD_REGS();
L_7139a0: /* 7139a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7139a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7139a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7139a3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 7139a7: mov esi, ecx */
  esi = ecx;
/* 7139a9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7139ab: je 0x7139e6 */
  if (zf) goto L_7139e6;
L_7139ad: /* 7139ad: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7139b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7139b1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7139b3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7139b9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7139b9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7139bc: xor ebx, ebx */
  ebx = 0;
/* 7139be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7139c0: jle 0x7139e6 */
  if ((zf || sf != of)) goto L_7139e6;
L_7139c2: /* 7139c2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7139c4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7139c6: mov ecx, esi */
  ecx = esi;
/* 7139c8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7139ceu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7139ce: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7139d0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7139d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7139d5: je 0x7139de */
  if (zf) goto L_7139de;
L_7139d7: /* 7139d7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7139d9: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 7139dc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_7139de: /* 7139de: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7139e1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7139e2: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7139e4: jl 0x7139c2 */
  if ((sf != of)) goto L_7139c2;
L_7139e6: /* 7139e6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7139e7: mov eax, esi */
  eax = esi;
/* 7139e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7139ea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7139eb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_713a10(void) {
  LOAD_REGS();
L_713a10: /* 713a10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713a11: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 713a12: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 713a18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 713a19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 713a1a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 713a1e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 713a20: mov esi, ecx */
  esi = ecx;
/* 713a22: jge 0x713a38 */
  if ((sf == of)) goto L_713a38;
L_713a24: /* 713a24: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 713a29: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713a2e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 713a33: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713a35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713a35: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713a38: /* 713a38: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 713a3b: jle 0x713a51 */
  if ((zf || sf != of)) goto L_713a51;
L_713a3d: /* 713a3d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 713a42: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713a47: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 713a4c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713a4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713a4e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713a51: /* 713a51: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 713a55: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 713a58: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 713a5b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 713a5d: jle 0x713a73 */
  if ((zf || sf != of)) goto L_713a73;
L_713a5f: /* 713a5f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 713a64: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713a69: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 713a6e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713a70u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713a70: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713a73: /* 713a73: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 713a75: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713a76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 713a77: mov ecx, esi */
  ecx = esi;
/* 713a79: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x713a7fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 713a7f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 713a80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 713a81: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 713a82: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 713a83: ret 8 */
  esp += 12; SPILL(); return;
}

void f_713ab0(void) {
  LOAD_REGS();
L_713ab0: /* 713ab0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713ab1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 713ab2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 713ab3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 713ab7: mov esi, ecx */
  esi = ecx;
/* 713ab9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 713abb: je 0x713af6 */
  if (zf) goto L_713af6;
L_713abd: /* 713abd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 713ac0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 713ac1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 713ac3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x713ac9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 713ac9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 713acc: xor ebx, ebx */
  ebx = 0;
/* 713ace: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 713ad0: jle 0x713af6 */
  if ((zf || sf != of)) goto L_713af6;
L_713ad2: /* 713ad2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 713ad4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 713ad6: mov ecx, esi */
  ecx = esi;
/* 713ad8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x713adeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 713ade: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 713ae0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 713ae3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 713ae5: je 0x713aee */
  if (zf) goto L_713aee;
L_713ae7: /* 713ae7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 713ae9: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 713aec: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_713aee: /* 713aee: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 713af1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 713af2: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 713af4: jl 0x713ad2 */
  if ((sf != of)) goto L_713ad2;
L_713af6: /* 713af6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 713af7: mov eax, esi */
  eax = esi;
/* 713af9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 713afa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 713afb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_713b20(void) {
  LOAD_REGS();
L_713b20: /* 713b20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713b21: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 713b22: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 713b28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 713b29: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 713b2a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 713b2e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 713b30: mov esi, ecx */
  esi = ecx;
/* 713b32: jge 0x713b48 */
  if ((sf == of)) goto L_713b48;
L_713b34: /* 713b34: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 713b39: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713b3e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 713b43: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713b45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713b45: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713b48: /* 713b48: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 713b4b: jle 0x713b61 */
  if ((zf || sf != of)) goto L_713b61;
L_713b4d: /* 713b4d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 713b52: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713b57: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 713b5c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713b5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713b5e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713b61: /* 713b61: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 713b65: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 713b68: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 713b6b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 713b6d: jle 0x713b83 */
  if ((zf || sf != of)) goto L_713b83;
L_713b6f: /* 713b6f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 713b74: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713b79: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 713b7e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713b80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713b80: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713b83: /* 713b83: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 713b85: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713b86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 713b87: mov ecx, esi */
  ecx = esi;
/* 713b89: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x713b8fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 713b8f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 713b90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 713b91: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 713b92: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 713b93: ret 8 */
  esp += 12; SPILL(); return;
}

void f_713bc0(void) {
  LOAD_REGS();
L_713bc0: /* 713bc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713bc1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 713bc2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 713bc3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 713bc7: mov esi, ecx */
  esi = ecx;
/* 713bc9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 713bcb: je 0x713c06 */
  if (zf) goto L_713c06;
L_713bcd: /* 713bcd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 713bd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 713bd1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 713bd3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x713bd9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 713bd9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 713bdc: xor ebx, ebx */
  ebx = 0;
/* 713bde: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 713be0: jle 0x713c06 */
  if ((zf || sf != of)) goto L_713c06;
L_713be2: /* 713be2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 713be4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 713be6: mov ecx, esi */
  ecx = esi;
/* 713be8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x713beeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 713bee: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 713bf0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 713bf3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 713bf5: je 0x713bfe */
  if (zf) goto L_713bfe;
L_713bf7: /* 713bf7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 713bf9: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 713bfc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_713bfe: /* 713bfe: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 713c01: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 713c02: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 713c04: jl 0x713be2 */
  if ((sf != of)) goto L_713be2;
L_713c06: /* 713c06: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 713c07: mov eax, esi */
  eax = esi;
/* 713c09: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 713c0a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 713c0b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_713c30(void) {
  LOAD_REGS();
L_713c30: /* 713c30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713c31: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 713c32: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 713c38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 713c39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 713c3a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 713c3e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 713c40: mov esi, ecx */
  esi = ecx;
/* 713c42: jge 0x713c58 */
  if ((sf == of)) goto L_713c58;
L_713c44: /* 713c44: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 713c49: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713c4e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 713c53: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713c55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713c55: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713c58: /* 713c58: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 713c5b: jle 0x713c71 */
  if ((zf || sf != of)) goto L_713c71;
L_713c5d: /* 713c5d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 713c62: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713c67: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 713c6c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713c6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713c6e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713c71: /* 713c71: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 713c75: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 713c78: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 713c7b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 713c7d: jle 0x713c93 */
  if ((zf || sf != of)) goto L_713c93;
L_713c7f: /* 713c7f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 713c84: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713c89: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 713c8e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713c90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713c90: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713c93: /* 713c93: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 713c95: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713c96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 713c97: mov ecx, esi */
  ecx = esi;
/* 713c99: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x713c9fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 713c9f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 713ca0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 713ca1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 713ca2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 713ca3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_713cd0(void) {
  LOAD_REGS();
L_713cd0: /* 713cd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713cd1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 713cd2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 713cd3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 713cd7: mov esi, ecx */
  esi = ecx;
/* 713cd9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 713cdb: je 0x713d16 */
  if (zf) goto L_713d16;
L_713cdd: /* 713cdd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 713ce0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 713ce1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 713ce3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x713ce9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 713ce9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 713cec: xor ebx, ebx */
  ebx = 0;
/* 713cee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 713cf0: jle 0x713d16 */
  if ((zf || sf != of)) goto L_713d16;
L_713cf2: /* 713cf2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 713cf4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 713cf6: mov ecx, esi */
  ecx = esi;
/* 713cf8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x713cfeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 713cfe: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 713d00: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 713d03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 713d05: je 0x713d0e */
  if (zf) goto L_713d0e;
L_713d07: /* 713d07: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 713d09: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 713d0c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_713d0e: /* 713d0e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 713d11: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 713d12: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 713d14: jl 0x713cf2 */
  if ((sf != of)) goto L_713cf2;
L_713d16: /* 713d16: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 713d17: mov eax, esi */
  eax = esi;
/* 713d19: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 713d1a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 713d1b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_713d40(void) {
  LOAD_REGS();
L_713d40: /* 713d40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713d41: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 713d42: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 713d48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 713d49: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 713d4a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 713d4e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 713d50: mov esi, ecx */
  esi = ecx;
/* 713d52: jge 0x713d68 */
  if ((sf == of)) goto L_713d68;
L_713d54: /* 713d54: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 713d59: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713d5e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 713d63: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713d65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713d65: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713d68: /* 713d68: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 713d6b: jle 0x713d81 */
  if ((zf || sf != of)) goto L_713d81;
L_713d6d: /* 713d6d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 713d72: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713d77: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 713d7c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713d7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713d7e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713d81: /* 713d81: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 713d85: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 713d88: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 713d8b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 713d8d: jle 0x713da3 */
  if ((zf || sf != of)) goto L_713da3;
L_713d8f: /* 713d8f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 713d94: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713d99: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 713d9e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713da0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713da0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713da3: /* 713da3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 713da5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713da6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 713da7: mov ecx, esi */
  ecx = esi;
/* 713da9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x713dafu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 713daf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 713db0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 713db1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 713db2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 713db3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_713de0(void) {
  LOAD_REGS();
L_713de0: /* 713de0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713de1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 713de2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 713de3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 713de7: mov esi, ecx */
  esi = ecx;
/* 713de9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 713deb: je 0x713e26 */
  if (zf) goto L_713e26;
L_713ded: /* 713ded: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 713df0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 713df1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 713df3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x713df9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 713df9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 713dfc: xor ebx, ebx */
  ebx = 0;
/* 713dfe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 713e00: jle 0x713e26 */
  if ((zf || sf != of)) goto L_713e26;
L_713e02: /* 713e02: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 713e04: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 713e06: mov ecx, esi */
  ecx = esi;
/* 713e08: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x713e0eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 713e0e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 713e10: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 713e13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 713e15: je 0x713e1e */
  if (zf) goto L_713e1e;
L_713e17: /* 713e17: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 713e19: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 713e1c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_713e1e: /* 713e1e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 713e21: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 713e22: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 713e24: jl 0x713e02 */
  if ((sf != of)) goto L_713e02;
L_713e26: /* 713e26: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 713e27: mov eax, esi */
  eax = esi;
/* 713e29: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 713e2a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 713e2b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_713e50(void) {
  LOAD_REGS();
L_713e50: /* 713e50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713e51: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 713e52: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 713e58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 713e59: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 713e5a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 713e5e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 713e60: mov esi, ecx */
  esi = ecx;
/* 713e62: jge 0x713e78 */
  if ((sf == of)) goto L_713e78;
L_713e64: /* 713e64: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 713e69: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713e6e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 713e73: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713e75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713e75: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713e78: /* 713e78: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 713e7b: jle 0x713e91 */
  if ((zf || sf != of)) goto L_713e91;
L_713e7d: /* 713e7d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 713e82: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713e87: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 713e8c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713e8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713e8e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713e91: /* 713e91: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 713e95: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 713e98: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 713e9b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 713e9d: jle 0x713eb3 */
  if ((zf || sf != of)) goto L_713eb3;
L_713e9f: /* 713e9f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 713ea4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713ea9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 713eae: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713eb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713eb0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713eb3: /* 713eb3: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 713eb5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713eb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 713eb7: mov ecx, esi */
  ecx = esi;
/* 713eb9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x713ebfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 713ebf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 713ec0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 713ec1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 713ec2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 713ec3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_713ef0(void) {
  LOAD_REGS();
L_713ef0: /* 713ef0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713ef1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 713ef2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 713ef3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 713ef7: mov esi, ecx */
  esi = ecx;
/* 713ef9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 713efb: je 0x713f4d */
  if (zf) goto L_713f4d;
L_713efd: /* 713efd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 713f00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 713f01: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 713f03: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x713f09u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 713f09: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 713f0c: xor ebx, ebx */
  ebx = 0;
/* 713f0e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 713f10: jle 0x713f4d */
  if ((zf || sf != of)) goto L_713f4d;
L_713f12: /* 713f12: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 713f13: xor ebp, ebp */
  ebp = 0;
L_713f15: /* 713f15: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 713f17: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 713f19: mov ecx, esi */
  ecx = esi;
/* 713f1b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x713f21u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 713f21: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 713f23: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 713f26: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 713f29: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 713f2b: je 0x713f41 */
  if (zf) goto L_713f41;
L_713f2d: /* 713f2d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 713f2f: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 713f31: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 713f33: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 713f35: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 713f38: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 713f3b: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 713f3e: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_713f41: /* 713f41: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 713f44: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 713f45: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 713f48: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 713f4a: jl 0x713f15 */
  if ((sf != of)) goto L_713f15;
L_713f4c: /* 713f4c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_713f4d: /* 713f4d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 713f4e: mov eax, esi */
  eax = esi;
/* 713f50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 713f51: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 713f52: ret 4 */
  esp += 8; SPILL(); return;
}

void f_713f80(void) {
  LOAD_REGS();
L_713f80: /* 713f80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713f81: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 713f82: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 713f88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 713f89: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 713f8a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 713f8e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 713f90: mov esi, ecx */
  esi = ecx;
/* 713f92: jge 0x713fa8 */
  if ((sf == of)) goto L_713fa8;
L_713f94: /* 713f94: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 713f99: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713f9e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 713fa3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713fa5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713fa5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713fa8: /* 713fa8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 713fab: jle 0x713fc1 */
  if ((zf || sf != of)) goto L_713fc1;
L_713fad: /* 713fad: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 713fb2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713fb7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 713fbc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713fbeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713fbe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713fc1: /* 713fc1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 713fc5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 713fc8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 713fcb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 713fcd: jle 0x713fe3 */
  if ((zf || sf != of)) goto L_713fe3;
L_713fcf: /* 713fcf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 713fd4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 713fd9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 713fde: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x713fe0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 713fe0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_713fe3: /* 713fe3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 713fe5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 713fe6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 713fe7: mov ecx, esi */
  ecx = esi;
/* 713fe9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x713fefu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 713fef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 713ff0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 713ff1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 713ff2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 713ff3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_714020(void) {
  LOAD_REGS();
L_714020: /* 714020: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 714021: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 714022: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 714023: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 714027: mov esi, ecx */
  esi = ecx;
/* 714029: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 71402b: je 0x714066 */
  if (zf) goto L_714066;
L_71402d: /* 71402d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 714030: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 714031: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 714033: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x714039u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 714039: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 71403c: xor ebx, ebx */
  ebx = 0;
/* 71403e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 714040: jle 0x714066 */
  if ((zf || sf != of)) goto L_714066;
L_714042: /* 714042: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 714044: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 714046: mov ecx, esi */
  ecx = esi;
/* 714048: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x71404eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 71404e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 714050: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 714053: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 714055: je 0x71405e */
  if (zf) goto L_71405e;
L_714057: /* 714057: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 714059: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 71405c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_71405e: /* 71405e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 714061: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 714062: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 714064: jl 0x714042 */
  if ((sf != of)) goto L_714042;
L_714066: /* 714066: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 714067: mov eax, esi */
  eax = esi;
/* 714069: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 71406a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 71406b: ret 4 */
  esp += 8; SPILL(); return;
}
