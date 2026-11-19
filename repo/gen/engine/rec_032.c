#include "recomp.h"
#include "rec_mod.h"

void f_78d7d2(void) {
  LOAD_REGS();
  goto L_78d7d2;
L_78cf6d: /* 78cf6d: mov eax, 1 */
  eax = 0x1u;
/* 78cf72: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78cf75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78cf7c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78cf7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78cf7e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78cf7f: mov esp, ebp */
  esp = ebp;
/* 78cf81: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78cf82: ret 0xc */
  esp += 16; SPILL(); return;
L_78d7d2: /* 78d7d2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 78d7d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d7d5: call 0x911f10 */
  esp -= 4; W32(esp, 0x78d7dau); SPILL(); f_911f10(); if (g_unwind) return; RELOAD();
/* 78d7da: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78d7dc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d7dd: call 0x912000 */
  esp -= 4; W32(esp, 0x78d7e2u); SPILL(); f_912000(); if (g_unwind) return; RELOAD();
/* 78d7e2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d7e4: je 0x78d806 */
  if (zf) goto L_78d806;
L_78d7e6: /* 78d7e6: fld dword ptr [edi + 0x364] */
  { double v = F32((uint32_t)(edi + 0x364u)); FPUSH(v); }
/* 78d7ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d7ed: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 78d7ef: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 78d7f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d7f3: call 0x912140 */
  esp -= 4; W32(esp, 0x78d7f8u); SPILL(); f_912140(); if (g_unwind) return; RELOAD();
/* 78d7f8: fld dword ptr [edi + 0x368] */
  { double v = F32((uint32_t)(edi + 0x368u)); FPUSH(v); }
/* 78d7fe: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 78d800: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d801: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 78d804: jmp 0x78d81a */
  goto L_78d81a;
L_78d806: /* 78d806: mov ecx, dword ptr [edi + 0x364] */
  ecx = R32((uint32_t)(edi + 0x364u));
/* 78d80c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d80d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d80e: call 0x912140 */
  esp -= 4; W32(esp, 0x78d813u); SPILL(); f_912140(); if (g_unwind) return; RELOAD();
/* 78d813: mov edx, dword ptr [edi + 0x368] */
  edx = R32((uint32_t)(edi + 0x368u));
/* 78d819: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_78d81a: /* 78d81a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d81b: call 0x912200 */
  esp -= 4; W32(esp, 0x78d820u); SPILL(); f_912200(); if (g_unwind) return; RELOAD();
/* 78d820: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 78d823: lea eax, [ebp - 0x70] */
  eax = (uint32_t)(ebp + 0xffffff90u);
/* 78d826: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d827: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d828: call 0x90e2f0 */
  esp -= 4; W32(esp, 0x78d82du); SPILL(); f_90e2f0(); if (g_unwind) return; RELOAD();
/* 78d82d: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 78d830: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 78d833: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 78d836: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 78d839: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d83b: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 78d83e: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 78d841: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d843: fabs  */
  ST0 = fabs(ST0);
/* 78d845: fld dword ptr [0xa09cfc] */
  { double v = F32((uint32_t)(0xa09cfcu)); FPUSH(v); }
/* 78d84b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78d84d: fstp dword ptr [edi + 0x39c] */
  WF32((uint32_t)(edi + 0x39cu), ST0); FPOP();
/* 78d853: fmul dword ptr [edi + 0x378] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x378u)));
/* 78d859: fadd dword ptr [edi + 0x374] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x374u)));
/* 78d85f: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 78d862: fld dword ptr [edi + 0x36c] */
  { double v = F32((uint32_t)(edi + 0x36cu)); FPUSH(v); }
/* 78d868: fcomp dword ptr [ebp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x10u)));
  FPOP();
/* 78d86b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78d86d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78d870: jp 0x78d87a */
  if (pf) goto L_78d87a;
L_78d872: /* 78d872: fld dword ptr [edi + 0x36c] */
  { double v = F32((uint32_t)(edi + 0x36cu)); FPUSH(v); }
/* 78d878: jmp 0x78d87d */
  goto L_78d87d;
L_78d87a: /* 78d87a: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
L_78d87d: /* 78d87d: fld dword ptr [edi + 0x370] */
  { double v = F32((uint32_t)(edi + 0x370u)); FPUSH(v); }
/* 78d883: fcomp dword ptr [ebp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x10u)));
  FPOP();
/* 78d886: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78d888: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78d88b: jp 0x78d898 */
  if (pf) goto L_78d898;
L_78d88d: /* 78d88d: mov edx, dword ptr [edi + 0x370] */
  edx = R32((uint32_t)(edi + 0x370u));
/* 78d893: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 78d896: jmp 0x78d89e */
  goto L_78d89e;
L_78d898: /* 78d898: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 78d89b: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_78d89e: /* 78d89e: fabs  */
  ST0 = fabs(ST0);
/* 78d8a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d8a1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 78d8a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8a5: call 0x912150 */
  esp -= 4; W32(esp, 0x78d8aau); SPILL(); f_912150(); if (g_unwind) return; RELOAD();
/* 78d8aa: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 78d8ad: fabs  */
  ST0 = fabs(ST0);
/* 78d8af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d8b0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 78d8b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8b4: call 0x912210 */
  esp -= 4; W32(esp, 0x78d8b9u); SPILL(); f_912210(); if (g_unwind) return; RELOAD();
/* 78d8b9: mov ecx, dword ptr [edi + 0x384] */
  ecx = R32((uint32_t)(edi + 0x384u));
/* 78d8bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d8c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8c1: call 0x912020 */
  esp -= 4; W32(esp, 0x78d8c6u); SPILL(); f_912020(); if (g_unwind) return; RELOAD();
/* 78d8c6: mov edx, dword ptr [edi + 0x380] */
  edx = R32((uint32_t)(edi + 0x380u));
/* 78d8cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d8cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8ce: call 0x9120f0 */
  esp -= 4; W32(esp, 0x78d8d3u); SPILL(); f_9120f0(); if (g_unwind) return; RELOAD();
/* 78d8d3: mov eax, dword ptr [edi + 0x37c] */
  eax = R32((uint32_t)(edi + 0x37cu));
/* 78d8d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d8da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8db: call 0x912090 */
  esp -= 4; W32(esp, 0x78d8e0u); SPILL(); f_912090(); if (g_unwind) return; RELOAD();
/* 78d8e0: mov ebx, dword ptr [edi + 0x388] */
  ebx = R32((uint32_t)(edi + 0x388u));
/* 78d8e6: or ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 78d8e9: mov dword ptr [edi + 0x388], ebx */
  W32((uint32_t)(edi + 0x388u), ebx);
/* 78d8ef: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 78d8f2: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 78d8f5: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 78d8f8: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 78d8fb: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 78d8fe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d900: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 78d903: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 78d906: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d908: fchs  */
  ST0 = -ST0;
/* 78d90a: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 78d90d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78d90f: fadd dword ptr [ebp - 0x54] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffacu)));
/* 78d912: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 78d915: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 78d918: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78d91a: fadd dword ptr [ebp - 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 78d91d: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 78d920: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 78d923: fadd dword ptr [ebp - 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 78d926: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 78d929: call 0x78c920 */
  esp -= 4; W32(esp, 0x78d92eu); SPILL(); f_78c920(); if (g_unwind) return; RELOAD();
/* 78d92e: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 78d931: fstp dword ptr [edi + 0x38c] */
  WF32((uint32_t)(edi + 0x38cu), ST0); FPOP();
/* 78d937: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d938: lea edx, [edi + 0x390] */
  edx = (uint32_t)(edi + 0x390u);
/* 78d93e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d93f: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x78d944u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 78d944: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78d947: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78d94a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d94c: je 0x78d978 */
  if (zf) goto L_78d978;
L_78d94e: /* 78d94e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d950: je 0x78d96a */
  if (zf) goto L_78d96a;
L_78d952: /* 78d952: push 0x268 */
  { uint32_t v = 0x268u; esp -= 4; W32(esp, v); }
/* 78d957: push 0xac8e58 */
  { uint32_t v = 0xac8e58u; esp -= 4; W32(esp, v); }
/* 78d95c: push 0xac8e6c */
  { uint32_t v = 0xac8e6cu; esp -= 4; W32(esp, v); }
/* 78d961: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78d967u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78d967: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78d96a: /* 78d96a: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 78d96d: mov dword ptr [edi + 0x3a0], eax */
  W32((uint32_t)(edi + 0x3a0u), eax);
/* 78d973: jmp 0x78cf6d */
  goto L_78cf6d;
L_78d978: /* 78d978: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d97a: jne 0x78d994 */
  if (!zf) goto L_78d994;
L_78d97c: /* 78d97c: push 0x26e */
  { uint32_t v = 0x26eu; esp -= 4; W32(esp, v); }
/* 78d981: push 0xac8e74 */
  { uint32_t v = 0xac8e74u; esp -= 4; W32(esp, v); }
/* 78d986: push 0xac8e88 */
  { uint32_t v = 0xac8e88u; esp -= 4; W32(esp, v); }
/* 78d98b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78d991u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78d991: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78d994: /* 78d994: mov dword ptr [edi + 0x3a0], 0 */
  W32((uint32_t)(edi + 0x3a0u), 0x0u);
/* 78d99e: jmp 0x78cf6d */
  goto L_78cf6d;
}

void f_78d806(void) {
  LOAD_REGS();
  goto L_78d806;
L_78cf6d: /* 78cf6d: mov eax, 1 */
  eax = 0x1u;
/* 78cf72: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78cf75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78cf7c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78cf7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78cf7e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78cf7f: mov esp, ebp */
  esp = ebp;
/* 78cf81: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78cf82: ret 0xc */
  esp += 16; SPILL(); return;
L_78d806: /* 78d806: mov ecx, dword ptr [edi + 0x364] */
  ecx = R32((uint32_t)(edi + 0x364u));
/* 78d80c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d80d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d80e: call 0x912140 */
  esp -= 4; W32(esp, 0x78d813u); SPILL(); f_912140(); if (g_unwind) return; RELOAD();
/* 78d813: mov edx, dword ptr [edi + 0x368] */
  edx = R32((uint32_t)(edi + 0x368u));
/* 78d819: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d81a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d81b: call 0x912200 */
  esp -= 4; W32(esp, 0x78d820u); SPILL(); f_912200(); if (g_unwind) return; RELOAD();
/* 78d820: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 78d823: lea eax, [ebp - 0x70] */
  eax = (uint32_t)(ebp + 0xffffff90u);
/* 78d826: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d827: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d828: call 0x90e2f0 */
  esp -= 4; W32(esp, 0x78d82du); SPILL(); f_90e2f0(); if (g_unwind) return; RELOAD();
/* 78d82d: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 78d830: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 78d833: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 78d836: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 78d839: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d83b: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 78d83e: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 78d841: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d843: fabs  */
  ST0 = fabs(ST0);
/* 78d845: fld dword ptr [0xa09cfc] */
  { double v = F32((uint32_t)(0xa09cfcu)); FPUSH(v); }
/* 78d84b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78d84d: fstp dword ptr [edi + 0x39c] */
  WF32((uint32_t)(edi + 0x39cu), ST0); FPOP();
/* 78d853: fmul dword ptr [edi + 0x378] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x378u)));
/* 78d859: fadd dword ptr [edi + 0x374] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x374u)));
/* 78d85f: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 78d862: fld dword ptr [edi + 0x36c] */
  { double v = F32((uint32_t)(edi + 0x36cu)); FPUSH(v); }
/* 78d868: fcomp dword ptr [ebp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x10u)));
  FPOP();
/* 78d86b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78d86d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78d870: jp 0x78d87a */
  if (pf) goto L_78d87a;
L_78d872: /* 78d872: fld dword ptr [edi + 0x36c] */
  { double v = F32((uint32_t)(edi + 0x36cu)); FPUSH(v); }
/* 78d878: jmp 0x78d87d */
  goto L_78d87d;
L_78d87a: /* 78d87a: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
L_78d87d: /* 78d87d: fld dword ptr [edi + 0x370] */
  { double v = F32((uint32_t)(edi + 0x370u)); FPUSH(v); }
/* 78d883: fcomp dword ptr [ebp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x10u)));
  FPOP();
/* 78d886: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78d888: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78d88b: jp 0x78d898 */
  if (pf) goto L_78d898;
L_78d88d: /* 78d88d: mov edx, dword ptr [edi + 0x370] */
  edx = R32((uint32_t)(edi + 0x370u));
/* 78d893: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 78d896: jmp 0x78d89e */
  goto L_78d89e;
L_78d898: /* 78d898: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 78d89b: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_78d89e: /* 78d89e: fabs  */
  ST0 = fabs(ST0);
/* 78d8a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d8a1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 78d8a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8a5: call 0x912150 */
  esp -= 4; W32(esp, 0x78d8aau); SPILL(); f_912150(); if (g_unwind) return; RELOAD();
/* 78d8aa: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 78d8ad: fabs  */
  ST0 = fabs(ST0);
/* 78d8af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d8b0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 78d8b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8b4: call 0x912210 */
  esp -= 4; W32(esp, 0x78d8b9u); SPILL(); f_912210(); if (g_unwind) return; RELOAD();
/* 78d8b9: mov ecx, dword ptr [edi + 0x384] */
  ecx = R32((uint32_t)(edi + 0x384u));
/* 78d8bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d8c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8c1: call 0x912020 */
  esp -= 4; W32(esp, 0x78d8c6u); SPILL(); f_912020(); if (g_unwind) return; RELOAD();
/* 78d8c6: mov edx, dword ptr [edi + 0x380] */
  edx = R32((uint32_t)(edi + 0x380u));
/* 78d8cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d8cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8ce: call 0x9120f0 */
  esp -= 4; W32(esp, 0x78d8d3u); SPILL(); f_9120f0(); if (g_unwind) return; RELOAD();
/* 78d8d3: mov eax, dword ptr [edi + 0x37c] */
  eax = R32((uint32_t)(edi + 0x37cu));
/* 78d8d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d8da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8db: call 0x912090 */
  esp -= 4; W32(esp, 0x78d8e0u); SPILL(); f_912090(); if (g_unwind) return; RELOAD();
/* 78d8e0: mov ebx, dword ptr [edi + 0x388] */
  ebx = R32((uint32_t)(edi + 0x388u));
/* 78d8e6: or ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 78d8e9: mov dword ptr [edi + 0x388], ebx */
  W32((uint32_t)(edi + 0x388u), ebx);
/* 78d8ef: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 78d8f2: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 78d8f5: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 78d8f8: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 78d8fb: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 78d8fe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d900: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 78d903: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 78d906: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d908: fchs  */
  ST0 = -ST0;
/* 78d90a: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 78d90d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78d90f: fadd dword ptr [ebp - 0x54] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffacu)));
/* 78d912: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 78d915: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 78d918: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78d91a: fadd dword ptr [ebp - 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 78d91d: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 78d920: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 78d923: fadd dword ptr [ebp - 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 78d926: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 78d929: call 0x78c920 */
  esp -= 4; W32(esp, 0x78d92eu); SPILL(); f_78c920(); if (g_unwind) return; RELOAD();
/* 78d92e: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 78d931: fstp dword ptr [edi + 0x38c] */
  WF32((uint32_t)(edi + 0x38cu), ST0); FPOP();
/* 78d937: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d938: lea edx, [edi + 0x390] */
  edx = (uint32_t)(edi + 0x390u);
/* 78d93e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d93f: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x78d944u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 78d944: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78d947: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78d94a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d94c: je 0x78d978 */
  if (zf) goto L_78d978;
L_78d94e: /* 78d94e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d950: je 0x78d96a */
  if (zf) goto L_78d96a;
L_78d952: /* 78d952: push 0x268 */
  { uint32_t v = 0x268u; esp -= 4; W32(esp, v); }
/* 78d957: push 0xac8e58 */
  { uint32_t v = 0xac8e58u; esp -= 4; W32(esp, v); }
/* 78d95c: push 0xac8e6c */
  { uint32_t v = 0xac8e6cu; esp -= 4; W32(esp, v); }
/* 78d961: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78d967u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78d967: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78d96a: /* 78d96a: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 78d96d: mov dword ptr [edi + 0x3a0], eax */
  W32((uint32_t)(edi + 0x3a0u), eax);
/* 78d973: jmp 0x78cf6d */
  goto L_78cf6d;
L_78d978: /* 78d978: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d97a: jne 0x78d994 */
  if (!zf) goto L_78d994;
L_78d97c: /* 78d97c: push 0x26e */
  { uint32_t v = 0x26eu; esp -= 4; W32(esp, v); }
/* 78d981: push 0xac8e74 */
  { uint32_t v = 0xac8e74u; esp -= 4; W32(esp, v); }
/* 78d986: push 0xac8e88 */
  { uint32_t v = 0xac8e88u; esp -= 4; W32(esp, v); }
/* 78d98b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78d991u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78d991: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78d994: /* 78d994: mov dword ptr [edi + 0x3a0], 0 */
  W32((uint32_t)(edi + 0x3a0u), 0x0u);
/* 78d99e: jmp 0x78cf6d */
  goto L_78cf6d;
}

void f_78d87a(void) {
  LOAD_REGS();
  goto L_78d87a;
L_78cf6d: /* 78cf6d: mov eax, 1 */
  eax = 0x1u;
/* 78cf72: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78cf75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78cf7c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78cf7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78cf7e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78cf7f: mov esp, ebp */
  esp = ebp;
/* 78cf81: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78cf82: ret 0xc */
  esp += 16; SPILL(); return;
L_78d87a: /* 78d87a: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 78d87d: fld dword ptr [edi + 0x370] */
  { double v = F32((uint32_t)(edi + 0x370u)); FPUSH(v); }
/* 78d883: fcomp dword ptr [ebp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x10u)));
  FPOP();
/* 78d886: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78d888: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78d88b: jp 0x78d898 */
  if (pf) goto L_78d898;
L_78d88d: /* 78d88d: mov edx, dword ptr [edi + 0x370] */
  edx = R32((uint32_t)(edi + 0x370u));
/* 78d893: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 78d896: jmp 0x78d89e */
  goto L_78d89e;
L_78d898: /* 78d898: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 78d89b: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_78d89e: /* 78d89e: fabs  */
  ST0 = fabs(ST0);
/* 78d8a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d8a1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 78d8a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8a5: call 0x912150 */
  esp -= 4; W32(esp, 0x78d8aau); SPILL(); f_912150(); if (g_unwind) return; RELOAD();
/* 78d8aa: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 78d8ad: fabs  */
  ST0 = fabs(ST0);
/* 78d8af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d8b0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 78d8b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8b4: call 0x912210 */
  esp -= 4; W32(esp, 0x78d8b9u); SPILL(); f_912210(); if (g_unwind) return; RELOAD();
/* 78d8b9: mov ecx, dword ptr [edi + 0x384] */
  ecx = R32((uint32_t)(edi + 0x384u));
/* 78d8bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d8c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8c1: call 0x912020 */
  esp -= 4; W32(esp, 0x78d8c6u); SPILL(); f_912020(); if (g_unwind) return; RELOAD();
/* 78d8c6: mov edx, dword ptr [edi + 0x380] */
  edx = R32((uint32_t)(edi + 0x380u));
/* 78d8cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d8cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8ce: call 0x9120f0 */
  esp -= 4; W32(esp, 0x78d8d3u); SPILL(); f_9120f0(); if (g_unwind) return; RELOAD();
/* 78d8d3: mov eax, dword ptr [edi + 0x37c] */
  eax = R32((uint32_t)(edi + 0x37cu));
/* 78d8d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d8da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8db: call 0x912090 */
  esp -= 4; W32(esp, 0x78d8e0u); SPILL(); f_912090(); if (g_unwind) return; RELOAD();
/* 78d8e0: mov ebx, dword ptr [edi + 0x388] */
  ebx = R32((uint32_t)(edi + 0x388u));
/* 78d8e6: or ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 78d8e9: mov dword ptr [edi + 0x388], ebx */
  W32((uint32_t)(edi + 0x388u), ebx);
/* 78d8ef: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 78d8f2: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 78d8f5: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 78d8f8: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 78d8fb: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 78d8fe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d900: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 78d903: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 78d906: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d908: fchs  */
  ST0 = -ST0;
/* 78d90a: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 78d90d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78d90f: fadd dword ptr [ebp - 0x54] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffacu)));
/* 78d912: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 78d915: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 78d918: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78d91a: fadd dword ptr [ebp - 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 78d91d: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 78d920: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 78d923: fadd dword ptr [ebp - 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 78d926: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 78d929: call 0x78c920 */
  esp -= 4; W32(esp, 0x78d92eu); SPILL(); f_78c920(); if (g_unwind) return; RELOAD();
/* 78d92e: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 78d931: fstp dword ptr [edi + 0x38c] */
  WF32((uint32_t)(edi + 0x38cu), ST0); FPOP();
/* 78d937: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d938: lea edx, [edi + 0x390] */
  edx = (uint32_t)(edi + 0x390u);
/* 78d93e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d93f: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x78d944u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 78d944: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78d947: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78d94a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d94c: je 0x78d978 */
  if (zf) goto L_78d978;
L_78d94e: /* 78d94e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d950: je 0x78d96a */
  if (zf) goto L_78d96a;
L_78d952: /* 78d952: push 0x268 */
  { uint32_t v = 0x268u; esp -= 4; W32(esp, v); }
/* 78d957: push 0xac8e58 */
  { uint32_t v = 0xac8e58u; esp -= 4; W32(esp, v); }
/* 78d95c: push 0xac8e6c */
  { uint32_t v = 0xac8e6cu; esp -= 4; W32(esp, v); }
/* 78d961: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78d967u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78d967: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78d96a: /* 78d96a: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 78d96d: mov dword ptr [edi + 0x3a0], eax */
  W32((uint32_t)(edi + 0x3a0u), eax);
/* 78d973: jmp 0x78cf6d */
  goto L_78cf6d;
L_78d978: /* 78d978: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d97a: jne 0x78d994 */
  if (!zf) goto L_78d994;
L_78d97c: /* 78d97c: push 0x26e */
  { uint32_t v = 0x26eu; esp -= 4; W32(esp, v); }
/* 78d981: push 0xac8e74 */
  { uint32_t v = 0xac8e74u; esp -= 4; W32(esp, v); }
/* 78d986: push 0xac8e88 */
  { uint32_t v = 0xac8e88u; esp -= 4; W32(esp, v); }
/* 78d98b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78d991u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78d991: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78d994: /* 78d994: mov dword ptr [edi + 0x3a0], 0 */
  W32((uint32_t)(edi + 0x3a0u), 0x0u);
/* 78d99e: jmp 0x78cf6d */
  goto L_78cf6d;
}

void f_78d898(void) {
  LOAD_REGS();
  goto L_78d898;
L_78cf6d: /* 78cf6d: mov eax, 1 */
  eax = 0x1u;
/* 78cf72: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78cf75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78cf7c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78cf7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78cf7e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78cf7f: mov esp, ebp */
  esp = ebp;
/* 78cf81: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78cf82: ret 0xc */
  esp += 16; SPILL(); return;
L_78d898: /* 78d898: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 78d89b: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 78d89e: fabs  */
  ST0 = fabs(ST0);
/* 78d8a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d8a1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 78d8a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8a5: call 0x912150 */
  esp -= 4; W32(esp, 0x78d8aau); SPILL(); f_912150(); if (g_unwind) return; RELOAD();
/* 78d8aa: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 78d8ad: fabs  */
  ST0 = fabs(ST0);
/* 78d8af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d8b0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 78d8b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8b4: call 0x912210 */
  esp -= 4; W32(esp, 0x78d8b9u); SPILL(); f_912210(); if (g_unwind) return; RELOAD();
/* 78d8b9: mov ecx, dword ptr [edi + 0x384] */
  ecx = R32((uint32_t)(edi + 0x384u));
/* 78d8bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d8c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8c1: call 0x912020 */
  esp -= 4; W32(esp, 0x78d8c6u); SPILL(); f_912020(); if (g_unwind) return; RELOAD();
/* 78d8c6: mov edx, dword ptr [edi + 0x380] */
  edx = R32((uint32_t)(edi + 0x380u));
/* 78d8cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d8cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8ce: call 0x9120f0 */
  esp -= 4; W32(esp, 0x78d8d3u); SPILL(); f_9120f0(); if (g_unwind) return; RELOAD();
/* 78d8d3: mov eax, dword ptr [edi + 0x37c] */
  eax = R32((uint32_t)(edi + 0x37cu));
/* 78d8d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d8da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8db: call 0x912090 */
  esp -= 4; W32(esp, 0x78d8e0u); SPILL(); f_912090(); if (g_unwind) return; RELOAD();
/* 78d8e0: mov ebx, dword ptr [edi + 0x388] */
  ebx = R32((uint32_t)(edi + 0x388u));
/* 78d8e6: or ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 78d8e9: mov dword ptr [edi + 0x388], ebx */
  W32((uint32_t)(edi + 0x388u), ebx);
/* 78d8ef: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 78d8f2: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 78d8f5: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 78d8f8: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 78d8fb: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 78d8fe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d900: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 78d903: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 78d906: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d908: fchs  */
  ST0 = -ST0;
/* 78d90a: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 78d90d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78d90f: fadd dword ptr [ebp - 0x54] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffacu)));
/* 78d912: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 78d915: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 78d918: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78d91a: fadd dword ptr [ebp - 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 78d91d: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 78d920: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 78d923: fadd dword ptr [ebp - 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 78d926: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 78d929: call 0x78c920 */
  esp -= 4; W32(esp, 0x78d92eu); SPILL(); f_78c920(); if (g_unwind) return; RELOAD();
/* 78d92e: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 78d931: fstp dword ptr [edi + 0x38c] */
  WF32((uint32_t)(edi + 0x38cu), ST0); FPOP();
/* 78d937: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d938: lea edx, [edi + 0x390] */
  edx = (uint32_t)(edi + 0x390u);
/* 78d93e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d93f: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x78d944u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 78d944: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78d947: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78d94a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d94c: je 0x78d978 */
  if (zf) goto L_78d978;
L_78d94e: /* 78d94e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d950: je 0x78d96a */
  if (zf) goto L_78d96a;
L_78d952: /* 78d952: push 0x268 */
  { uint32_t v = 0x268u; esp -= 4; W32(esp, v); }
/* 78d957: push 0xac8e58 */
  { uint32_t v = 0xac8e58u; esp -= 4; W32(esp, v); }
/* 78d95c: push 0xac8e6c */
  { uint32_t v = 0xac8e6cu; esp -= 4; W32(esp, v); }
/* 78d961: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78d967u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78d967: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78d96a: /* 78d96a: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 78d96d: mov dword ptr [edi + 0x3a0], eax */
  W32((uint32_t)(edi + 0x3a0u), eax);
/* 78d973: jmp 0x78cf6d */
  goto L_78cf6d;
L_78d978: /* 78d978: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d97a: jne 0x78d994 */
  if (!zf) goto L_78d994;
L_78d97c: /* 78d97c: push 0x26e */
  { uint32_t v = 0x26eu; esp -= 4; W32(esp, v); }
/* 78d981: push 0xac8e74 */
  { uint32_t v = 0xac8e74u; esp -= 4; W32(esp, v); }
/* 78d986: push 0xac8e88 */
  { uint32_t v = 0xac8e88u; esp -= 4; W32(esp, v); }
/* 78d98b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78d991u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78d991: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78d994: /* 78d994: mov dword ptr [edi + 0x3a0], 0 */
  W32((uint32_t)(edi + 0x3a0u), 0x0u);
/* 78d99e: jmp 0x78cf6d */
  goto L_78cf6d;
}

void f_78d978(void) {
  LOAD_REGS();
  goto L_78d978;
L_78cf6d: /* 78cf6d: mov eax, 1 */
  eax = 0x1u;
/* 78cf72: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78cf75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78cf7c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78cf7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78cf7e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78cf7f: mov esp, ebp */
  esp = ebp;
/* 78cf81: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78cf82: ret 0xc */
  esp += 16; SPILL(); return;
L_78d978: /* 78d978: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d97a: jne 0x78d994 */
  if (!zf) goto L_78d994;
L_78d97c: /* 78d97c: push 0x26e */
  { uint32_t v = 0x26eu; esp -= 4; W32(esp, v); }
/* 78d981: push 0xac8e74 */
  { uint32_t v = 0xac8e74u; esp -= 4; W32(esp, v); }
/* 78d986: push 0xac8e88 */
  { uint32_t v = 0xac8e88u; esp -= 4; W32(esp, v); }
/* 78d98b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78d991u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78d991: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78d994: /* 78d994: mov dword ptr [edi + 0x3a0], 0 */
  W32((uint32_t)(edi + 0x3a0u), 0x0u);
/* 78d99e: jmp 0x78cf6d */
  goto L_78cf6d;
}

void f_78d9a3(void) {
  LOAD_REGS();
L_78d9a3: /* 78d9a3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 78d9a6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78d9ab: lea edx, [ebp - 0xa0] */
  edx = (uint32_t)(ebp + 0xffffff60u);
/* 78d9b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d9b2: mov dword ptr [ebp - 0xa0], ecx */
  W32((uint32_t)(ebp + 0xffffff60u), ecx);
/* 78d9b8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78d9bdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78d9bd(); return;
}

void f_78d9bd(void) {
  LOAD_REGS();
  goto L_78d9bd;
L_78d6de: /* 78d6de: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78d6e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78d6e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78d6e3: xor eax, eax */
  eax = 0;
/* 78d6e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78d6ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78d6ed: mov esp, ebp */
  esp = ebp;
/* 78d6ef: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78d6f0: ret 0xc */
  esp += 16; SPILL(); return;
L_78d9bd: /* 78d9bd: push 0xa09dec */
  { uint32_t v = 0xa09decu; esp -= 4; W32(esp, v); }
/* 78d9c2: push 0xac8e90 */
  { uint32_t v = 0xac8e90u; esp -= 4; W32(esp, v); }
/* 78d9c7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78d9cdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78d9cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78d9d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78d9d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78d9d4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78d9d9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 78d9d9: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 78d9de: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78d9e0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78d9e3: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 78d9e6: push 0xac8ca8 */
  { uint32_t v = 0xac8ca8u; esp -= 4; W32(esp, v); }
/* 78d9eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d9ec: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x78d9f2u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 78d9f2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78d9f5: jmp 0x78d6de */
  goto L_78d6de;
}

void f_78d9fa(void) {
  LOAD_REGS();
L_78d9fa: /* 78d9fa: mov edx, dword ptr [ebp - 0xbc] */
  edx = R32((uint32_t)(ebp + 0xffffff44u));
/* 78da00: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78da05: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 78da0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78da0c: mov dword ptr [ebp - 0x9c], edx */
  W32((uint32_t)(ebp + 0xffffff64u), edx);
/* 78da12: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78da17u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78da17(); return;
}

void f_78da17(void) {
  LOAD_REGS();
L_78da17: /* 78da17: push 0xa09dc8 */
  { uint32_t v = 0xa09dc8u; esp -= 4; W32(esp, v); }
/* 78da1c: push 0xac8e98 */
  { uint32_t v = 0xac8e98u; esp -= 4; W32(esp, v); }
/* 78da21: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78da27u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78da27: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78da2a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78da2c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78da2e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78da33u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_78da33: guest_badaddr(0x78da33); return;
}

void f_78dd50(void) {
  LOAD_REGS();
L_78dd50: /* 78dd50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78dd51: mov ebp, esp */
  ebp = esp;
/* 78dd53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 78dd55: push 0x9ccce0 */
  { uint32_t v = 0x9ccce0u; esp -= 4; W32(esp, v); }
/* 78dd5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78dd60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78dd61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78dd68: sub esp, 0xac */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78dd6e: mov edx, dword ptr [0xb21bb4] */
  edx = R32((uint32_t)(0xb21bb4u));
/* 78dd74: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78dd76: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78dd77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78dd78: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78dd79: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78dd7c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78dd83: je 0x78ddec */
  if (zf) goto L_78ddec;
L_78dd85: /* 78dd85: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 78dd88: mov ecx, dword ptr [ebx + 0x80] */
  ecx = R32((uint32_t)(ebx + 0x80u));
/* 78dd8e: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78dd91: jne 0x78ddec */
  if (!zf) goto L_78ddec;
L_78dd93: /* 78dd93: mov esi, dword ptr [0xcfa504] */
  esi = R32((uint32_t)(0xcfa504u));
/* 78dd99: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78dd9c: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 78dda2: jne 0x78ddec */
  if (!zf) goto L_78ddec;
L_78dda4: /* 78dda4: mov esi, dword ptr [edx + 0x1500c] */
  esi = R32((uint32_t)(edx + 0x1500cu));
/* 78ddaa: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78ddac: je 0x78ddec */
  if (zf) goto L_78ddec;
L_78ddae: /* 78ddae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78ddb0: je 0x78ddec */
  if (zf) goto L_78ddec;
L_78ddb2: /* 78ddb2: test cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78ddb5: mov esi, dword ptr [0xcfa3a4] */
  esi = R32((uint32_t)(0xcfa3a4u));
/* 78ddbb: je 0x78ddcf */
  if (zf) goto L_78ddcf;
L_78ddbd: /* 78ddbd: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 78ddc2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78ddc4: push 0xac8ee8 */
  { uint32_t v = 0xac8ee8u; esp -= 4; W32(esp, v); }
/* 78ddc9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78ddca: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x78ddccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78ddcc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78ddcf: /* 78ddcf: mov eax, dword ptr [ebx + 0x30c] */
  eax = R32((uint32_t)(ebx + 0x30cu));
/* 78ddd5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78ddd7: jne 0x78ddff */
  if (!zf) goto L_78ddff;
L_78ddd9: /* 78ddd9: push 0xac8f48 */
  { uint32_t v = 0xac8f48u; esp -= 4; W32(esp, v); }
L_78ddde: /* 78ddde: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 78dde4: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 78dde6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_78dde7: /* 78dde7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x78dde9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78dde9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78ddec: /* 78ddec: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78ddef: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78ddf6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78ddf7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78ddf8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78ddf9: mov esp, ebp */
  esp = ebp;
/* 78ddfb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78ddfc: ret 4 */
  esp += 8; SPILL(); return;
L_78ddff: /* 78ddff: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 78de01: mov ecx, ebx */
  ecx = ebx;
/* 78de03: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x78de09u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78de09: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78de0b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 78de0e: jne 0x78de1f */
  if (!zf) goto L_78de1f;
L_78de10: /* 78de10: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 78de15: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78de17: push 0xac8fa0 */
  { uint32_t v = 0xac8fa0u; esp -= 4; W32(esp, v); }
/* 78de1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78de1d: jmp 0x78dde7 */
  goto L_78dde7;
L_78de1f: /* 78de1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78de20: call 0x925ce0 */
  esp -= 4; W32(esp, 0x78de25u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 78de25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78de27: jne 0x78ddec */
  if (!zf) goto L_78ddec;
L_78de29: /* 78de29: cmp byte ptr [ebx + 0x50], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x50u))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 78de2d: je 0x78de36 */
  if (zf) goto L_78de36;
L_78de2f: /* 78de2f: push 0xac8ff0 */
  { uint32_t v = 0xac8ff0u; esp -= 4; W32(esp, v); }
/* 78de34: jmp 0x78ddde */
  goto L_78ddde;
L_78de36: /* 78de36: mov ecx, dword ptr [ebx + 0x30c] */
  ecx = R32((uint32_t)(ebx + 0x30cu));
/* 78de3c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78de3d: call 0x6c82e7 */
  esp -= 4; W32(esp, 0x78de42u); SPILL(); f_6c82e7(); if (g_unwind) return; RELOAD();
/* 78de42: mov edi, eax */
  edi = eax;
/* 78de44: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78de47: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78de49: jne 0x78de52 */
  if (!zf) goto L_78de52;
L_78de4b: /* 78de4b: push 0xac9060 */
  { uint32_t v = 0xac9060u; esp -= 4; W32(esp, v); }
/* 78de50: jmp 0x78ddde */
  goto L_78ddde;
L_78de52: /* 78de52: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 78de58: mov eax, dword ptr [eax + 0x115c] */
  eax = R32((uint32_t)(eax + 0x115cu));
/* 78de5e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78de60: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 78de63: jne 0x78de78 */
  if (!zf) goto L_78de78;
L_78de65: /* 78de65: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 78de6b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78de6d: push 0xac90c0 */
  { uint32_t v = 0xac90c0u; esp -= 4; W32(esp, v); }
/* 78de72: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78de73: jmp 0x78dde7 */
  goto L_78dde7;
L_78de78: /* 78de78: mov eax, dword ptr [ebx + 0x54] */
  eax = R32((uint32_t)(ebx + 0x54u));
/* 78de7b: xor esi, esi */
  esi = 0;
/* 78de7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78de7f: je 0x78de8b */
  if (zf) goto L_78de8b;
L_78de81: /* 78de81: mov esi, dword ptr [eax + 0x168] */
  esi = R32((uint32_t)(eax + 0x168u));
/* 78de87: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78de89: jne 0x78deef */
  if (!zf) goto L_78deef;
L_78de8b: /* 78de8b: mov eax, dword ptr [ebx + 0xd0] */
  eax = R32((uint32_t)(ebx + 0xd0u));
/* 78de91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78de93: je 0x78deac */
  if (zf) goto L_78deac;
L_78de95: /* 78de95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78de96: call 0x6ca8ad */
  esp -= 4; W32(esp, 0x78de9bu); SPILL(); f_6ca8ad(); if (g_unwind) return; RELOAD();
/* 78de9b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78de9e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78dea0: je 0x78deac */
  if (zf) goto L_78deac;
L_78dea2: /* 78dea2: mov esi, dword ptr [eax + 0x334] */
  esi = R32((uint32_t)(eax + 0x334u));
/* 78dea8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78deaa: jne 0x78deef */
  if (!zf) goto L_78deef;
L_78deac: /* 78deac: push 0xb1f338 */
  { uint32_t v = 0xb1f338u; esp -= 4; W32(esp, v); }
/* 78deb1: mov ecx, edi */
  ecx = edi;
/* 78deb3: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x78deb9u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 78deb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78debb: jne 0x78deef */
  if (!zf) goto L_78deef;
L_78debd: /* 78debd: mov ecx, ebx */
  ecx = ebx;
/* 78debf: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x78dec5u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 78dec5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78dec6: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 78decb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78decd: push 0xac9118 */
  { uint32_t v = 0xac9118u; esp -= 4; W32(esp, v); }
/* 78ded2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78ded3: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x78ded9u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 78ded9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78dedc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78dedf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78dee6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78dee7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78dee8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78dee9: mov esp, ebp */
  esp = ebp;
/* 78deeb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78deec: ret 4 */
  esp += 8; SPILL(); return;
L_78deef: /* 78deef: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 78def2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78def3: call 0x928730 */
  esp -= 4; W32(esp, 0x78def8u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 78def8: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 78defb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 78defe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78deff: call 0x90dd30 */
  esp -= 4; W32(esp, 0x78df04u); SPILL(); f_90dd30(); if (g_unwind) return; RELOAD();
/* 78df04: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 78df07: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78df0a: lea ecx, [ebx + 0x17c] */
  ecx = (uint32_t)(ebx + 0x17cu);
/* 78df10: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 78df12: mov edx, esp */
  edx = esp;
/* 78df14: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 78df16: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 78df19: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 78df1c: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 78df1f: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 78df22: lea edx, [ebx + 0x170] */
  edx = (uint32_t)(ebx + 0x170u);
/* 78df28: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 78df2a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78df2d: mov eax, esp */
  eax = esp;
/* 78df2f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78df31: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 78df34: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 78df37: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 78df3a: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 78df3d: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 78df43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78df44: call 0x6c8eae */
  esp -= 4; W32(esp, 0x78df49u); SPILL(); f_6c8eae(); if (g_unwind) return; RELOAD();
/* 78df49: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 78df4c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78df4f: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* 78df55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78df56: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78df57: call 0x90e790 */
  esp -= 4; W32(esp, 0x78df5cu); SPILL(); f_90e790(); if (g_unwind) return; RELOAD();
/* 78df5c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 78df5f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 78df62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78df63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78df64: call 0x925a30 */
  esp -= 4; W32(esp, 0x78df69u); SPILL(); f_925a30(); if (g_unwind) return; RELOAD();
/* 78df69: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78df6b: mov edx, dword ptr [ebx + 0x284] */
  edx = R32((uint32_t)(ebx + 0x284u));
/* 78df71: mov dword ptr [edi + 0x2c], edx */
  W32((uint32_t)(edi + 0x2cu), edx);
/* 78df74: lea ecx, [ebx + 0x288] */
  ecx = (uint32_t)(ebx + 0x288u);
/* 78df7a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78df7c: lea eax, [edi + 0x30] */
  eax = (uint32_t)(edi + 0x30u);
/* 78df7f: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 78df81: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 78df84: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 78df87: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 78df8a: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 78df8d: je 0x78e08e */
  if (zf) goto L_78e08e;
L_78df93: /* 78df93: fld dword ptr [edi + 0x2c] */
  { double v = F32((uint32_t)(edi + 0x2cu)); FPUSH(v); }
/* 78df96: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 78df99: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 78df9b: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* 78df9e: fmul dword ptr [edi + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x38u)));
/* 78dfa1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78dfa2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78dfa3: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 78dfa6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 78dfa8: fmul dword ptr [edi + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x34u)));
/* 78dfab: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 78dfae: fmul dword ptr [edi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x30u)));
/* 78dfb1: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 78dfb4: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 78dfb7: fmul dword ptr [edi + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x58u)));
/* 78dfba: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 78dfbd: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 78dfc0: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 78dfc3: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 78dfc6: fmul dword ptr [edi + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x58u)));
/* 78dfc9: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 78dfcc: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 78dfcf: fst dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0);
/* 78dfd2: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 78dfd5: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 78dfd8: fmul dword ptr [edi + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x58u)));
/* 78dfdb: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 78dfde: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 78dfe1: fst dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0);
/* 78dfe4: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 78dfe7: fld dword ptr [esi + 0x34] */
  { double v = F32((uint32_t)(esi + 0x34u)); FPUSH(v); }
/* 78dfea: fmul dword ptr [edi + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x58u)));
/* 78dfed: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 78dff0: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 78dff3: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 78dff6: fld dword ptr [esi + 0x38] */
  { double v = F32((uint32_t)(esi + 0x38u)); FPUSH(v); }
/* 78dff9: fmul dword ptr [edi + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x58u)));
/* 78dffc: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 78dfff: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 78e002: fst dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0);
/* 78e005: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 78e008: fld dword ptr [esi + 0x3c] */
  { double v = F32((uint32_t)(esi + 0x3cu)); FPUSH(v); }
/* 78e00b: fmul dword ptr [edi + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x58u)));
/* 78e00e: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 78e011: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 78e014: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 78e017: call 0x6c75d6 */
  esp -= 4; W32(esp, 0x78e01cu); SPILL(); f_6c75d6(); if (g_unwind) return; RELOAD();
/* 78e01c: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 78e01f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 78e022: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78e025: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78e026: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78e027: call 0x6caf74 */
  esp -= 4; W32(esp, 0x78e02cu); SPILL(); f_6caf74(); if (g_unwind) return; RELOAD();
/* 78e02c: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 78e02f: fmul dword ptr [esi + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x48u)));
/* 78e032: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78e035: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 78e038: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78e03b: fmul dword ptr [esi + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x44u)));
/* 78e03e: mov eax, esp */
  eax = esp;
/* 78e040: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 78e043: fmul dword ptr [esi + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x40u)));
/* 78e046: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 78e049: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 78e04c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78e04e: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 78e051: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 78e054: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 78e057: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 78e05a: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 78e05d: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78e060: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78e061: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 78e064: call 0x6c1965 */
  esp -= 4; W32(esp, 0x78e069u); SPILL(); f_6c1965(); if (g_unwind) return; RELOAD();
/* 78e069: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 78e06c: lea eax, [esi + 0x1fc] */
  eax = (uint32_t)(esi + 0x1fcu);
/* 78e072: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78e075: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78e076: call 0x972710 */
  esp -= 4; W32(esp, 0x78e07bu); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 78e07b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78e07e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78e080: jne 0x78e091 */
  if (!zf) goto L_78e091;
L_78e082: /* 78e082: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 78e085: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78e086: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78e087: call 0x90eea0 */
  esp -= 4; W32(esp, 0x78e08cu); SPILL(); f_90eea0(); if (g_unwind) return; RELOAD();
/* 78e08c: jmp 0x78e091 */
  goto L_78e091;
L_78e08e: /* 78e08e: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_78e091: /* 78e091: mov ebx, dword ptr [ebx + 0x30c] */
  ebx = R32((uint32_t)(ebx + 0x30cu));
/* 78e097: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 78e099: mov ecx, ebx */
  ecx = ebx;
/* 78e09b: call dword ptr [edx + 0x44] */
  { uint32_t t = R32((uint32_t)(edx + 0x44u)); esp -= 4; W32(esp, 0x78e09eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78e09e: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 78e0a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78e0a2: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x78e0a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78e0a8: test byte ptr [edi + 0x68], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x68u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78e0ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78e0ad: je 0x78e0b6 */
  if (zf) goto L_78e0b6;
L_78e0af: /* 78e0af: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x78e0b4u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 78e0b4: jmp 0x78e0bb */
  goto L_78e0bb;
L_78e0b6: /* 78e0b6: call 0x90f080 */
  esp -= 4; W32(esp, 0x78e0bbu); SPILL(); f_90f080(); if (g_unwind) return; RELOAD();
L_78e0bb: /* 78e0bb: lea ecx, [edi + 0x6c] */
  ecx = (uint32_t)(edi + 0x6cu);
/* 78e0be: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 78e0c0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78e0c3: mov edx, esp */
  edx = esp;
/* 78e0c5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 78e0c7: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 78e0ca: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 78e0cd: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 78e0d0: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 78e0d3: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 78e0d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78e0d7: call 0x6c882d */
  esp -= 4; W32(esp, 0x78e0dcu); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 78e0dc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78e0df: add edi, 0x78 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 78e0e2: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 78e0e4: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 78e0e7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78e0ea: mov eax, esp */
  eax = esp;
/* 78e0ec: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78e0ee: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 78e0f1: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 78e0f4: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 78e0f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78e0f8: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 78e0fb: call 0x6c882d */
  esp -= 4; W32(esp, 0x78e100u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 78e100: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 78e103: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 78e106: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 78e109: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78e10c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78e10d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78e10e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78e10f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78e110: call 0x90ea10 */
  esp -= 4; W32(esp, 0x78e115u); SPILL(); f_90ea10(); if (g_unwind) return; RELOAD();
/* 78e115: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 78e118: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 78e11b: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 78e11e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78e11f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78e120: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78e121: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78e122: call 0x90ea40 */
  esp -= 4; W32(esp, 0x78e127u); SPILL(); f_90ea40(); if (g_unwind) return; RELOAD();
/* 78e127: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78e12a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78e12b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78e12c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78e133: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78e134: mov esp, ebp */
  esp = ebp;
/* 78e136: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78e137: ret 4 */
  esp += 8; SPILL(); return;
}

void f_78e13a(void) {
  LOAD_REGS();
L_78e13a: /* 78e13a: mov eax, dword ptr [ebp - 0x6c] */
  eax = R32((uint32_t)(ebp + 0xffffff94u));
/* 78e13d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78e142: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 78e145: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78e146: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 78e149: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78e14eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78e14e(); return;
}

void f_78e14e(void) {
  LOAD_REGS();
L_78e14e: /* 78e14e: push 0xa09e20 */
  { uint32_t v = 0xa09e20u; esp -= 4; W32(esp, v); }
/* 78e153: push 0xac91a4 */
  { uint32_t v = 0xac91a4u; esp -= 4; W32(esp, v); }
/* 78e158: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78e15eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78e15e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78e161: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78e163: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78e165: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78e16au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_78e16a: guest_badaddr(0x78e16a); return;
}

void f_78e280(void) {
  LOAD_REGS();
L_78e280: /* 78e280: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78e281: mov ebp, esp */
  ebp = esp;
/* 78e283: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 78e285: push 0x9cccf0 */
  { uint32_t v = 0x9cccf0u; esp -= 4; W32(esp, v); }
/* 78e28a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78e290: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78e291: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78e298: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78e29b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78e29c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78e29d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 78e2a0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78e2a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78e2a3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78e2a6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78e2ad: je 0x78e2e8 */
  if (zf) goto L_78e2e8;
L_78e2af: /* 78e2af: push 0xb1c480 */
  { uint32_t v = 0xb1c480u; esp -= 4; W32(esp, v); }
/* 78e2b4: mov ecx, esi */
  ecx = esi;
/* 78e2b6: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x78e2bcu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 78e2bc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78e2be: je 0x78e2e8 */
  if (zf) goto L_78e2e8;
L_78e2c0: /* 78e2c0: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 78e2c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78e2c8: je 0x78e2e8 */
  if (zf) goto L_78e2e8;
L_78e2ca: /* 78e2ca: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 78e2d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78e2d2: jne 0x78e2e8 */
  if (!zf) goto L_78e2e8;
L_78e2d4: /* 78e2d4: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 78e2d9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78e2db: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78e2dd: push 0xac9818 */
  { uint32_t v = 0xac9818u; esp -= 4; W32(esp, v); }
/* 78e2e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78e2e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78e2e5: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x78e2e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_78e2e8: /* 78e2e8: cmp byte ptr [esi + 0x50], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 78e2ec: jne 0x78e31d */
  if (!zf) goto L_78e31d;
L_78e2ee: /* 78e2ee: mov eax, dword ptr [esi + 0x30c] */
  eax = R32((uint32_t)(esi + 0x30cu));
/* 78e2f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78e2f6: jne 0x78e31d */
  if (!zf) goto L_78e31d;
L_78e2f8: /* 78e2f8: push 0xb1c480 */
  { uint32_t v = 0xb1c480u; esp -= 4; W32(esp, v); }
/* 78e2fd: mov ecx, esi */
  ecx = esi;
/* 78e2ff: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x78e305u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 78e305: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78e307: jne 0x78e31d */
  if (!zf) goto L_78e31d;
L_78e309: /* 78e309: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 78e30e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78e310: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78e312: push 0xac9898 */
  { uint32_t v = 0xac9898u; esp -= 4; W32(esp, v); }
/* 78e317: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78e318: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78e31a: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x78e31du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_78e31d: /* 78e31d: cmp byte ptr [esi + 0x50], 0xe */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 78e321: jne 0x78e350 */
  if (!zf) goto L_78e350;
L_78e323: /* 78e323: mov ecx, dword ptr [esi + 0x30c] */
  ecx = R32((uint32_t)(esi + 0x30cu));
/* 78e329: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78e32b: je 0x78e33c */
  if (zf) goto L_78e33c;
L_78e32d: /* 78e32d: push 0xb1f868 */
  { uint32_t v = 0xb1f868u; esp -= 4; W32(esp, v); }
/* 78e332: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x78e338u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 78e338: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78e33a: jne 0x78e350 */
  if (!zf) goto L_78e350;
L_78e33c: /* 78e33c: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 78e341: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78e343: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78e345: push 0xac98e8 */
  { uint32_t v = 0xac98e8u; esp -= 4; W32(esp, v); }
/* 78e34a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78e34b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78e34d: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x78e350u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_78e350: /* 78e350: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78e353: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78e354: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78e355: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78e35c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78e35d: mov esp, ebp */
  esp = ebp;
/* 78e35f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78e360: ret 4 */
  esp += 8; SPILL(); return;
}

void f_78e363(void) {
  LOAD_REGS();
L_78e363: /* 78e363: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78e366: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78e36b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 78e36e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78e36f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 78e372: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78e377u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78e377(); return;
}

void f_78e377(void) {
  LOAD_REGS();
L_78e377: /* 78e377: push 0xa09e50 */
  { uint32_t v = 0xa09e50u; esp -= 4; W32(esp, v); }
/* 78e37c: push 0xac9974 */
  { uint32_t v = 0xac9974u; esp -= 4; W32(esp, v); }
/* 78e381: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78e387u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78e387: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78e38a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78e38c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78e38e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78e393u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_78e393: guest_badaddr(0x78e393); return;
}

void f_78e3f0(void) {
  LOAD_REGS();
L_78e3f0: /* 78e3f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78e3f1: mov ebp, esp */
  ebp = esp;
/* 78e3f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 78e3f5: push 0x9ccd00 */
  { uint32_t v = 0x9ccd00u; esp -= 4; W32(esp, v); }
/* 78e3fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78e400: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78e401: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78e408: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78e40b: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78e410: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78e411: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78e412: xor ebx, ebx */
  ebx = 0;
/* 78e414: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78e416: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78e417: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78e41a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 78e41d: je 0x78e818 */
  if (zf) goto L_78e818;
L_78e423: /* 78e423: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 78e426: cmp dword ptr [esi + 0x115c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x115cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78e42c: je 0x78e818 */
  if (zf) goto L_78e818;
L_78e432: /* 78e432: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 78e435: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 78e437: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78e439: je 0x78e454 */
  if (zf) goto L_78e454;
L_78e43b: /* 78e43b: mov edx, dword ptr [ecx + 0x444] */
  edx = R32((uint32_t)(ecx + 0x444u));
/* 78e441: shr edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 78e444: not edx */
  edx = ~edx;
/* 78e446: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 78e449: mov dword ptr [eax + 0x15228], edx */
  W32((uint32_t)(eax + 0x15228u), edx);
/* 78e44f: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
L_78e454: /* 78e454: cmp dword ptr [eax + 0x15228], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15228u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78e45a: je 0x78e46b */
  if (zf) goto L_78e46b;
L_78e45c: /* 78e45c: mov dword ptr [eax + 0x15224], 1 */
  W32((uint32_t)(eax + 0x15224u), 0x1u);
/* 78e466: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
L_78e46b: /* 78e46b: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 78e46e: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 78e470: fld dword ptr [ecx + 0x3f4] */
  { double v = F32((uint32_t)(ecx + 0x3f4u)); FPUSH(v); }
/* 78e476: mov ecx, dword ptr [eax + 0x15228] */
  ecx = R32((uint32_t)(eax + 0x15228u));
/* 78e47c: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78e47e: je 0x78e488 */
  if (zf) goto L_78e488;
L_78e480: /* 78e480: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 78e483: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 78e486: jmp 0x78e491 */
  goto L_78e491;
L_78e488: /* 78e488: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78e48a: mov dword ptr [ebp + 8], 0x3cf5c28f */
  W32((uint32_t)(ebp + 0x8u), 0x3cf5c28fu);
L_78e491: /* 78e491: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 78e494: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 78e49a: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 78e49d: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 78e4a0: fcomp dword ptr [0xa09e98] */
  fpu_com(ST0, F32((uint32_t)(0xa09e98u)));
  FPOP();
/* 78e4a6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78e4a8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78e4ab: jnp 0x78e4b4 */
  if (!pf) goto L_78e4b4;
L_78e4ad: /* 78e4ad: mov dword ptr [ebp + 8], 0x3d23d70a */
  W32((uint32_t)(ebp + 0x8u), 0x3d23d70au);
L_78e4b4: /* 78e4b4: fcomp dword ptr [0xa09e98] */
  fpu_com(ST0, F32((uint32_t)(0xa09e98u)));
  FPOP();
/* 78e4ba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78e4bc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78e4bf: jnp 0x78e4c8 */
  if (!pf) goto L_78e4c8;
L_78e4c1: /* 78e4c1: mov dword ptr [ebp - 0x14], 0x3d23d70a */
  W32((uint32_t)(ebp + 0xffffffecu), 0x3d23d70au);
L_78e4c8: /* 78e4c8: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 78e4cb: fmul dword ptr [0x9f7fc4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7fc4u)));
/* 78e4d1: fcom dword ptr [0x9f7194] */
  fpu_com(ST0, F32((uint32_t)(0x9f7194u)));
/* 78e4d7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78e4d9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78e4dc: jp 0x78e4f4 */
  if (pf) goto L_78e4f4;
L_78e4de: /* 78e4de: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 78e4e4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78e4e6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78e4e9: jp 0x78e4f4 */
  if (pf) goto L_78e4f4;
L_78e4eb: /* 78e4eb: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 78e4f2: jmp 0x78e50d */
  goto L_78e50d;
L_78e4f4: /* 78e4f4: fcom dword ptr [0x9f7194] */
  fpu_com(ST0, F32((uint32_t)(0x9f7194u)));
/* 78e4fa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78e4fc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78e4ff: jp 0x78e506 */
  if (pf) goto L_78e506;
L_78e501: /* 78e501: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 78e504: jmp 0x78e50f */
  goto L_78e50f;
L_78e506: /* 78e506: mov dword ptr [ebp + 0xc], 0x3f000000 */
  W32((uint32_t)(ebp + 0xcu), 0x3f000000u);
L_78e50d: /* 78e50d: fstp st(0) */
  STI(0) = ST0; FPOP();
L_78e50f: /* 78e50f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 78e512: mov eax, dword ptr [esi + 0x115c] */
  eax = R32((uint32_t)(esi + 0x115cu));
/* 78e518: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78e519: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78e51a: call 0x912f80 */
  esp -= 4; W32(esp, 0x78e51fu); SPILL(); f_912f80(); if (g_unwind) return; RELOAD();
/* 78e51f: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 78e522: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 78e528: fstp dword ptr [ecx + 0x1521c] */
  WF32((uint32_t)(ecx + 0x1521cu), ST0); FPOP();
/* 78e52e: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 78e534: mov eax, dword ptr [0xce8328] */
  eax = R32((uint32_t)(0xce8328u));
/* 78e539: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 78e53c: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 78e53e: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 78e540: xor edi, edi */
  edi = 0;
L_78e542: /* 78e542: cmp edi, dword ptr [esi + 0x1170] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1170u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78e548: jge 0x78e560 */
  if ((sf == of)) goto L_78e560;
L_78e54a: /* 78e54a: mov ecx, dword ptr [esi + 0x116c] */
  ecx = R32((uint32_t)(esi + 0x116cu));
/* 78e550: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 78e553: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78e554: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78e555: call 0x6cba4b */
  esp -= 4; W32(esp, 0x78e55au); SPILL(); f_6cba4b(); if (g_unwind) return; RELOAD();
/* 78e55a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78e55d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 78e55e: jmp 0x78e542 */
  goto L_78e542;
L_78e560: /* 78e560: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 78e565: mov ecx, dword ptr [0xce8328] */
  ecx = R32((uint32_t)(0xce8328u));
/* 78e56b: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 78e56e: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 78e570: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78e572: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78e575: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 78e577: push 0xac9f2c */
  { uint32_t v = 0xac9f2cu; esp -= 4; W32(esp, v); }
/* 78e57c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78e57e: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78e583u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78e583: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 78e589: mov eax, dword ptr [0xce831c] */
  eax = R32((uint32_t)(0xce831cu));
/* 78e58e: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 78e591: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 78e593: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78e595: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 78e597: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78e598: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78e59a: lea ecx, [esi + 0x1184] */
  ecx = (uint32_t)(esi + 0x1184u);
/* 78e5a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78e5a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78e5a2: call 0x6c7da6 */
  esp -= 4; W32(esp, 0x78e5a7u); SPILL(); f_6c7da6(); if (g_unwind) return; RELOAD();
/* 78e5a7: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 78e5ad: mov eax, dword ptr [0xce831c] */
  eax = R32((uint32_t)(0xce831cu));
/* 78e5b2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78e5b5: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 78e5b8: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 78e5ba: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78e5bc: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78e5bf: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 78e5c1: push 0xac9f5c */
  { uint32_t v = 0xac9f5cu; esp -= 4; W32(esp, v); }
/* 78e5c6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78e5c8: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78e5cdu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78e5cd: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 78e5d3: cmp dword ptr [ecx + 0x15224], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x15224u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78e5d9: je 0x78e630 */
  if (zf) goto L_78e630;
L_78e5db: /* 78e5db: push 0xac9f94 */
  { uint32_t v = 0xac9f94u; esp -= 4; W32(esp, v); }
/* 78e5e0: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78e5e5u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78e5e5: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 78e5eb: mov eax, dword ptr [0xce832c] */
  eax = R32((uint32_t)(0xce832cu));
/* 78e5f0: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 78e5f3: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 78e5f5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78e5f7: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 78e5f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78e5fa: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78e5fc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 78e5ff: mov edx, dword ptr [esi + 0x115c] */
  edx = R32((uint32_t)(esi + 0x115cu));
/* 78e605: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78e606: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78e607: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78e608: call 0x6c871a */
  esp -= 4; W32(esp, 0x78e60du); SPILL(); f_6c871a(); if (g_unwind) return; RELOAD();
/* 78e60d: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 78e612: mov ecx, dword ptr [0xce832c] */
  ecx = R32((uint32_t)(0xce832cu));
/* 78e618: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 78e61b: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 78e61d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78e61f: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78e622: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 78e624: push 0xac9fb8 */
  { uint32_t v = 0xac9fb8u; esp -= 4; W32(esp, v); }
/* 78e629: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78e62b: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78e630u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
L_78e630: /* 78e630: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 78e633: fcomp dword ptr [0xa09e94] */
  fpu_com(ST0, F32((uint32_t)(0xa09e94u)));
  FPOP();
/* 78e639: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78e63b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78e63e: jp 0x78e64f */
  if (pf) goto L_78e64f;
L_78e640: /* 78e640: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 78e643: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 78e646: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 78e64d: jmp 0x78e65c */
  goto L_78e65c;
L_78e64f: /* 78e64f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 78e652: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 78e655: mov dword ptr [ebp - 0x14], 2 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x2u);
L_78e65c: /* 78e65c: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 78e65f: fmul dword ptr [0x9f7fc4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7fc4u)));
/* 78e665: fcom dword ptr [0x9f7194] */
  fpu_com(ST0, F32((uint32_t)(0x9f7194u)));
/* 78e66b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78e66d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78e670: jp 0x78e688 */
  if (pf) goto L_78e688;
L_78e672: /* 78e672: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 78e678: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78e67a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78e67d: jp 0x78e688 */
  if (pf) goto L_78e688;
L_78e67f: /* 78e67f: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 78e686: jmp 0x78e6a1 */
  goto L_78e6a1;
L_78e688: /* 78e688: fcom dword ptr [0x9f7194] */
  fpu_com(ST0, F32((uint32_t)(0x9f7194u)));
/* 78e68e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78e690: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78e693: jp 0x78e69a */
  if (pf) goto L_78e69a;
L_78e695: /* 78e695: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 78e698: jmp 0x78e6a3 */
  goto L_78e6a3;
L_78e69a: /* 78e69a: mov dword ptr [ebp + 0xc], 0x3f000000 */
  W32((uint32_t)(ebp + 0xcu), 0x3f000000u);
L_78e6a1: /* 78e6a1: fstp st(0) */
  STI(0) = ST0; FPOP();
L_78e6a3: /* 78e6a3: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 78e6a6: mov edx, dword ptr [esi + 0x115c] */
  edx = R32((uint32_t)(esi + 0x115cu));
/* 78e6ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78e6ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78e6ae: call 0x912f80 */
  esp -= 4; W32(esp, 0x78e6b3u); SPILL(); f_912f80(); if (g_unwind) return; RELOAD();
/* 78e6b3: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 78e6b6: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78e6bb: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
/* 78e6be: fstp dword ptr [eax + 0x1521c] */
  WF32((uint32_t)(eax + 0x1521cu), ST0); FPOP();
/* 78e6c4: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 78e6c7: jmp 0x78e6d0 */
  goto L_78e6d0;
L_78e6d0: /* 78e6d0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 78e6d3: cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78e6d6: jge 0x78e818 */
  if ((sf == of)) goto L_78e818;
L_78e6dc: /* 78e6dc: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 78e6e2: mov eax, dword ptr [0xce8328] */
  eax = R32((uint32_t)(0xce8328u));
/* 78e6e7: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 78e6ea: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 78e6ec: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 78e6ee: xor edi, edi */
  edi = 0;
L_78e6f0: /* 78e6f0: cmp edi, dword ptr [esi + 0x1170] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1170u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78e6f6: jge 0x78e70f */
  if ((sf == of)) goto L_78e70f;
L_78e6f8: /* 78e6f8: mov ecx, dword ptr [esi + 0x116c] */
  ecx = R32((uint32_t)(esi + 0x116cu));
/* 78e6fe: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 78e701: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78e703: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78e704: call 0x6cba4b */
  esp -= 4; W32(esp, 0x78e709u); SPILL(); f_6cba4b(); if (g_unwind) return; RELOAD();
/* 78e709: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78e70c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 78e70d: jmp 0x78e6f0 */
  goto L_78e6f0;
L_78e70f: /* 78e70f: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 78e714: mov ecx, dword ptr [0xce8328] */
  ecx = R32((uint32_t)(0xce8328u));
/* 78e71a: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 78e71d: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 78e71f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78e721: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78e724: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 78e726: push 0xac9fe4 */
  { uint32_t v = 0xac9fe4u; esp -= 4; W32(esp, v); }
/* 78e72b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78e72d: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78e732u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78e732: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 78e738: mov eax, dword ptr [0xce831c] */
  eax = R32((uint32_t)(0xce831cu));
/* 78e73d: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 78e740: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 78e742: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78e744: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 78e746: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78e748: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78e74a: lea ecx, [esi + 0x1184] */
  ecx = (uint32_t)(esi + 0x1184u);
/* 78e750: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78e751: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78e752: call 0x6c7da6 */
  esp -= 4; W32(esp, 0x78e757u); SPILL(); f_6c7da6(); if (g_unwind) return; RELOAD();
/* 78e757: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 78e75d: mov eax, dword ptr [0xce831c] */
  eax = R32((uint32_t)(0xce831cu));
/* 78e762: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78e765: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 78e768: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 78e76a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78e76c: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78e76f: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 78e771: push 0xaca014 */
  { uint32_t v = 0xaca014u; esp -= 4; W32(esp, v); }
/* 78e776: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78e778: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78e77du); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78e77d: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 78e783: mov eax, dword ptr [ecx + 0x15224] */
  eax = R32((uint32_t)(ecx + 0x15224u));
/* 78e789: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78e78b: je 0x78e7e0 */
  if (zf) goto L_78e7e0;
L_78e78d: /* 78e78d: push 0xaca04c */
  { uint32_t v = 0xaca04cu; esp -= 4; W32(esp, v); }
/* 78e792: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78e797u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78e797: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 78e79d: mov eax, dword ptr [0xce832c] */
  eax = R32((uint32_t)(0xce832cu));
/* 78e7a2: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 78e7a5: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 78e7a7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78e7a9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78e7ab: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 78e7ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78e7ae: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78e7b0: mov ecx, dword ptr [esi + 0x115c] */
  ecx = R32((uint32_t)(esi + 0x115cu));
/* 78e7b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78e7b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78e7b8: call 0x6c871a */
  esp -= 4; W32(esp, 0x78e7bdu); SPILL(); f_6c871a(); if (g_unwind) return; RELOAD();
/* 78e7bd: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 78e7c3: mov eax, dword ptr [0xce832c] */
  eax = R32((uint32_t)(0xce832cu));
/* 78e7c8: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 78e7cb: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 78e7cd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78e7cf: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78e7d2: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 78e7d4: push 0xaca070 */
  { uint32_t v = 0xaca070u; esp -= 4; W32(esp, v); }
/* 78e7d9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78e7db: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78e7e0u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
L_78e7e0: /* 78e7e0: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 78e7e3: jmp 0x78e6d0 */
  goto L_78e6d0;
L_78e818: /* 78e818: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78e81b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78e81c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78e81d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78e824: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78e825: mov esp, ebp */
  esp = ebp;
/* 78e827: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78e828: ret 8 */
  esp += 12; SPILL(); return;
}

void f_78e6c9(void) {
  LOAD_REGS();
L_78e6c9: /* 78e6c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_78e6d0: /* 78e6d0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 78e6d3: cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78e6d6: jge 0x78e818 */
  if ((sf == of)) goto L_78e818;
L_78e6dc: /* 78e6dc: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 78e6e2: mov eax, dword ptr [0xce8328] */
  eax = R32((uint32_t)(0xce8328u));
/* 78e6e7: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 78e6ea: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 78e6ec: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 78e6ee: xor edi, edi */
  edi = 0;
L_78e6f0: /* 78e6f0: cmp edi, dword ptr [esi + 0x1170] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1170u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78e6f6: jge 0x78e70f */
  if ((sf == of)) goto L_78e70f;
L_78e6f8: /* 78e6f8: mov ecx, dword ptr [esi + 0x116c] */
  ecx = R32((uint32_t)(esi + 0x116cu));
/* 78e6fe: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 78e701: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78e703: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78e704: call 0x6cba4b */
  esp -= 4; W32(esp, 0x78e709u); SPILL(); f_6cba4b(); if (g_unwind) return; RELOAD();
/* 78e709: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78e70c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 78e70d: jmp 0x78e6f0 */
  goto L_78e6f0;
L_78e70f: /* 78e70f: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 78e714: mov ecx, dword ptr [0xce8328] */
  ecx = R32((uint32_t)(0xce8328u));
/* 78e71a: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 78e71d: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 78e71f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78e721: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78e724: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 78e726: push 0xac9fe4 */
  { uint32_t v = 0xac9fe4u; esp -= 4; W32(esp, v); }
/* 78e72b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78e72d: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78e732u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78e732: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 78e738: mov eax, dword ptr [0xce831c] */
  eax = R32((uint32_t)(0xce831cu));
/* 78e73d: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 78e740: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 78e742: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78e744: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 78e746: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78e748: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78e74a: lea ecx, [esi + 0x1184] */
  ecx = (uint32_t)(esi + 0x1184u);
/* 78e750: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78e751: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78e752: call 0x6c7da6 */
  esp -= 4; W32(esp, 0x78e757u); SPILL(); f_6c7da6(); if (g_unwind) return; RELOAD();
/* 78e757: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 78e75d: mov eax, dword ptr [0xce831c] */
  eax = R32((uint32_t)(0xce831cu));
/* 78e762: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78e765: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 78e768: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 78e76a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78e76c: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78e76f: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 78e771: push 0xaca014 */
  { uint32_t v = 0xaca014u; esp -= 4; W32(esp, v); }
/* 78e776: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78e778: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78e77du); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78e77d: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 78e783: mov eax, dword ptr [ecx + 0x15224] */
  eax = R32((uint32_t)(ecx + 0x15224u));
/* 78e789: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78e78b: je 0x78e7e0 */
  if (zf) goto L_78e7e0;
L_78e78d: /* 78e78d: push 0xaca04c */
  { uint32_t v = 0xaca04cu; esp -= 4; W32(esp, v); }
/* 78e792: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78e797u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78e797: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 78e79d: mov eax, dword ptr [0xce832c] */
  eax = R32((uint32_t)(0xce832cu));
/* 78e7a2: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 78e7a5: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 78e7a7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78e7a9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78e7ab: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 78e7ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78e7ae: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78e7b0: mov ecx, dword ptr [esi + 0x115c] */
  ecx = R32((uint32_t)(esi + 0x115cu));
/* 78e7b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78e7b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78e7b8: call 0x6c871a */
  esp -= 4; W32(esp, 0x78e7bdu); SPILL(); f_6c871a(); if (g_unwind) return; RELOAD();
/* 78e7bd: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 78e7c3: mov eax, dword ptr [0xce832c] */
  eax = R32((uint32_t)(0xce832cu));
/* 78e7c8: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 78e7cb: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 78e7cd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78e7cf: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78e7d2: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 78e7d4: push 0xaca070 */
  { uint32_t v = 0xaca070u; esp -= 4; W32(esp, v); }
/* 78e7d9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78e7db: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78e7e0u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
L_78e7e0: /* 78e7e0: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 78e7e3: jmp 0x78e6d0 */
  goto L_78e6d0;
L_78e818: /* 78e818: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78e81b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78e81c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78e81d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78e824: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78e825: mov esp, ebp */
  esp = ebp;
/* 78e827: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78e828: ret 8 */
  esp += 12; SPILL(); return;
}

void f_78e7e8(void) {
  LOAD_REGS();
L_78e7e8: /* 78e7e8: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78e7eb: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78e7f0: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 78e7f3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78e7f4: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 78e7f7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78e7fcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78e7fc(); return;
}

void f_78e7fc(void) {
  LOAD_REGS();
L_78e7fc: /* 78e7fc: push 0xa09e6c */
  { uint32_t v = 0xa09e6cu; esp -= 4; W32(esp, v); }
/* 78e801: push 0xaca09c */
  { uint32_t v = 0xaca09cu; esp -= 4; W32(esp, v); }
/* 78e806: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78e80cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78e80c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78e80f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78e811: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78e813: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78e818u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 78e818: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78e81b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78e81c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78e81d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78e824: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78e825: mov esp, ebp */
  esp = ebp;
/* 78e827: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78e828: ret 8 */
  esp += 12; SPILL(); return;
}

void f_78e940(void) {
  LOAD_REGS();
L_78e940: /* 78e940: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78e941: mov ebp, esp */
  ebp = esp;
/* 78e943: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 78e945: push 0x9ccd10 */
  { uint32_t v = 0x9ccd10u; esp -= 4; W32(esp, v); }
/* 78e94a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78e950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78e951: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78e958: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78e95b: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78e960: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78e961: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78e962: xor esi, esi */
  esi = 0;
/* 78e964: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78e966: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78e967: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78e96a: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 78e96d: je 0x78eb70 */
  if (zf) goto L_78eb70;
L_78e973: /* 78e973: cmp dword ptr [eax + 0x15218], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15218u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78e979: je 0x78eb70 */
  if (zf) goto L_78eb70;
L_78e97f: /* 78e97f: mov eax, dword ptr [eax + 0x15014] */
  eax = R32((uint32_t)(eax + 0x15014u));
/* 78e985: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78e987: je 0x78eb70 */
  if (zf) goto L_78eb70;
L_78e98d: /* 78e98d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78e98e: call 0x978010 */
  esp -= 4; W32(esp, 0x78e993u); SPILL(); f_978010(); if (g_unwind) return; RELOAD();
/* 78e993: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78e995: jg 0x78eb70 */
  if ((!zf && sf == of)) goto L_78eb70;
L_78e99b: /* 78e99b: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78e9a0: cmp dword ptr [eax + 0x15234], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15234u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78e9a6: jg 0x78eb70 */
  if ((!zf && sf == of)) goto L_78eb70;
L_78e9ac: /* 78e9ac: cmp dword ptr [eax + 0x15230], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15230u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78e9b2: jg 0x78eb70 */
  if ((!zf && sf == of)) goto L_78eb70;
L_78e9b8: /* 78e9b8: cmp dword ptr [eax + 0x15218], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15218u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78e9be: je 0x78eb81 */
  if (zf) goto L_78eb81;
L_78e9c4: /* 78e9c4: mov eax, dword ptr [eax + 0x15014] */
  eax = R32((uint32_t)(eax + 0x15014u));
/* 78e9ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78e9cb: call 0x978010 */
  esp -= 4; W32(esp, 0x78e9d0u); SPILL(); f_978010(); if (g_unwind) return; RELOAD();
/* 78e9d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78e9d2: mov edi, dword ptr [0xcfa3a4] */
  edi = R32((uint32_t)(0xcfa3a4u));
/* 78e9d8: jge 0x78e9ed */
  if ((sf == of)) goto L_78e9ed;
L_78e9da: /* 78e9da: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 78e9e0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78e9e2: push 0xaca2f0 */
  { uint32_t v = 0xaca2f0u; esp -= 4; W32(esp, v); }
/* 78e9e7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78e9e8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x78e9eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78e9ea: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78e9ed: /* 78e9ed: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
L_78e9f2: /* 78e9f2: cmp dword ptr [eax + 0x15218], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15218u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78e9f8: je 0x78ea3c */
  if (zf) goto L_78ea3c;
L_78e9fa: /* 78e9fa: cmp dword ptr [eax + 0x15234], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15234u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78ea00: jge 0x78ea19 */
  if ((sf == of)) goto L_78ea19;
L_78ea02: /* 78ea02: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 78ea07: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78ea09: push 0xaca370 */
  { uint32_t v = 0xaca370u; esp -= 4; W32(esp, v); }
/* 78ea0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78ea0f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x78ea11u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78ea11: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78ea16: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78ea19: /* 78ea19: cmp dword ptr [eax + 0x15218], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15218u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78ea1f: je 0x78ea3c */
  if (zf) goto L_78ea3c;
L_78ea21: /* 78ea21: cmp dword ptr [eax + 0x15230], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15230u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78ea27: jge 0x78ea3c */
  if ((sf == of)) goto L_78ea3c;
L_78ea29: /* 78ea29: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 78ea2f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 78ea31: push 0xaca3d0 */
  { uint32_t v = 0xaca3d0u; esp -= 4; W32(esp, v); }
/* 78ea36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78ea37: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x78ea39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78ea39: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78ea3c: /* 78ea3c: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 78ea42: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78ea44: push 0xaca428 */
  { uint32_t v = 0xaca428u; esp -= 4; W32(esp, v); }
/* 78ea49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78ea4a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x78ea4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78ea4c: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78ea51: mov eax, dword ptr [eax + 0x15238] */
  eax = R32((uint32_t)(eax + 0x15238u));
/* 78ea57: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78ea5a: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78ea5c: je 0x78ea70 */
  if (zf) goto L_78ea70;
L_78ea5e: /* 78ea5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78ea5f: call 0x92a520 */
  esp -= 4; W32(esp, 0x78ea64u); SPILL(); f_92a520(); if (g_unwind) return; RELOAD();
/* 78ea64: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 78ea6a: mov dword ptr [ecx + 0x15238], esi */
  W32((uint32_t)(ecx + 0x15238u), esi);
L_78ea70: /* 78ea70: mov edx, dword ptr [0xb21bb4] */
  edx = R32((uint32_t)(0xb21bb4u));
/* 78ea76: cmp dword ptr [edx + 0x15014], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x15014u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78ea7c: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 78ea7f: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 78ea83: je 0x78eab5 */
  if (zf) goto L_78eab5;
L_78ea85: /* 78ea85: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 78ea8a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78ea8c: push 0xaca470 */
  { uint32_t v = 0xaca470u; esp -= 4; W32(esp, v); }
/* 78ea91: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78ea92: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x78ea94u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78ea94: mov edx, dword ptr [0xb21bb4] */
  edx = R32((uint32_t)(0xb21bb4u));
/* 78ea9a: mov eax, dword ptr [edx + 0x15014] */
  eax = R32((uint32_t)(edx + 0x15014u));
/* 78eaa0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78eaa3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78eaa4: call 0x977fe0 */
  esp -= 4; W32(esp, 0x78eaa9u); SPILL(); f_977fe0(); if (g_unwind) return; RELOAD();
/* 78eaa9: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 78eaaf: mov dword ptr [ecx + 0x15014], esi */
  W32((uint32_t)(ecx + 0x15014u), esi);
L_78eab5: /* 78eab5: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 78eabb: cmp dword ptr [ecx + 0x15010], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x15010u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78eac1: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 78eac4: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 78eac8: je 0x78eafa */
  if (zf) goto L_78eafa;
L_78eaca: /* 78eaca: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 78ead0: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 78ead2: push 0xaca4c8 */
  { uint32_t v = 0xaca4c8u; esp -= 4; W32(esp, v); }
/* 78ead7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78ead8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x78eadau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78eada: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 78eae0: mov edx, dword ptr [ecx + 0x15010] */
  edx = R32((uint32_t)(ecx + 0x15010u));
/* 78eae6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78eae9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78eaea: call 0x97d6c0 */
  esp -= 4; W32(esp, 0x78eaefu); SPILL(); f_97d6c0(); if (g_unwind) return; RELOAD();
/* 78eaef: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78eaf4: mov dword ptr [eax + 0x15010], esi */
  W32((uint32_t)(eax + 0x15010u), esi);
L_78eafa: /* 78eafa: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78eaff: cmp dword ptr [eax + 0x1500c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1500cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78eb05: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 78eb08: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 78eb0c: je 0x78eb3e */
  if (zf) goto L_78eb3e;
L_78eb0e: /* 78eb0e: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 78eb14: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78eb16: push 0xaca518 */
  { uint32_t v = 0xaca518u; esp -= 4; W32(esp, v); }
/* 78eb1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78eb1c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x78eb1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78eb1e: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78eb23: mov ecx, dword ptr [eax + 0x1500c] */
  ecx = R32((uint32_t)(eax + 0x1500cu));
/* 78eb29: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78eb2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78eb2d: call 0x929b30 */
  esp -= 4; W32(esp, 0x78eb32u); SPILL(); f_929b30(); if (g_unwind) return; RELOAD();
/* 78eb32: mov edx, dword ptr [0xb21bb4] */
  edx = R32((uint32_t)(0xb21bb4u));
/* 78eb38: mov dword ptr [edx + 0x1500c], esi */
  W32((uint32_t)(edx + 0x1500cu), esi);
L_78eb3e: /* 78eb3e: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 78eb44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78eb45: add ecx, 0x1523c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1523cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 78eb4b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 78eb4d: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 78eb50: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x78eb56u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 78eb56: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 78eb5c: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 78eb5e: mov edx, dword ptr [0xb21bb4] */
  edx = R32((uint32_t)(0xb21bb4u));
/* 78eb64: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 78eb66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78eb67: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x78eb6au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78eb6a: mov dword ptr [0xb21bb4], esi */
  W32((uint32_t)(0xb21bb4u), esi);
L_78eb70: /* 78eb70: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78eb73: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78eb74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78eb75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78eb7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78eb7d: mov esp, ebp */
  esp = ebp;
/* 78eb7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78eb80: ret  */
  esp += 4; SPILL(); return;
L_78eb81: /* 78eb81: mov edi, dword ptr [0xcfa3a4] */
  edi = R32((uint32_t)(0xcfa3a4u));
/* 78eb87: jmp 0x78e9f2 */
  goto L_78e9f2;
}

void f_78eb8c(void) {
  LOAD_REGS();
L_78eb8c: /* 78eb8c: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 78eb8f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78eb94: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 78eb97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78eb98: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 78eb9b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78eba0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78eba0(); return;
}

void f_78eba0(void) {
  LOAD_REGS();
L_78eba0: /* 78eba0: push 0xa09eec */
  { uint32_t v = 0xa09eecu; esp -= 4; W32(esp, v); }
/* 78eba5: push 0xaca4bc */
  { uint32_t v = 0xaca4bcu; esp -= 4; W32(esp, v); }
/* 78ebaa: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78ebb0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78ebb0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78ebb3: xor esi, esi */
  esi = 0;
/* 78ebb5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78ebb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78ebb7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78ebbcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78ebbc(); return;
}

void f_78ebbc(void) {
  LOAD_REGS();
L_78ebbc: /* 78ebbc: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 78ebbf: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78ebc4: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 78ebc7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78ebc8: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 78ebcb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78ebd0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78ebd0(); return;
}

void f_78ebd0(void) {
  LOAD_REGS();
L_78ebd0: /* 78ebd0: push 0xa09ed8 */
  { uint32_t v = 0xa09ed8u; esp -= 4; W32(esp, v); }
/* 78ebd5: push 0xaca510 */
  { uint32_t v = 0xaca510u; esp -= 4; W32(esp, v); }
/* 78ebda: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78ebe0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78ebe0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78ebe3: xor esi, esi */
  esi = 0;
/* 78ebe5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78ebe6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78ebe7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78ebecu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78ebec(); return;
}

void f_78ebec(void) {
  LOAD_REGS();
L_78ebec: /* 78ebec: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 78ebef: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78ebf4: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 78ebf7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78ebf8: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 78ebfb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78ec00u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78ec00(); return;
}

void f_78ec00(void) {
  LOAD_REGS();
L_78ec00: /* 78ec00: push 0xa09ec0 */
  { uint32_t v = 0xa09ec0u; esp -= 4; W32(esp, v); }
/* 78ec05: push 0xaca558 */
  { uint32_t v = 0xaca558u; esp -= 4; W32(esp, v); }
/* 78ec0a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78ec10u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78ec10: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78ec13: xor esi, esi */
  esi = 0;
/* 78ec15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78ec16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78ec17: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78ec1cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78ec1c(); return;
}

void f_78ec1c(void) {
  LOAD_REGS();
L_78ec1c: /* 78ec1c: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 78ec1f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78ec24: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 78ec27: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78ec28: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 78ec2b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78ec30u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78ec30(); return;
}

void f_78ec30(void) {
  LOAD_REGS();
L_78ec30: /* 78ec30: push 0xa09e9c */
  { uint32_t v = 0xa09e9cu; esp -= 4; W32(esp, v); }
/* 78ec35: push 0xaca560 */
  { uint32_t v = 0xaca560u; esp -= 4; W32(esp, v); }
/* 78ec3a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78ec40u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78ec40: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78ec43: xor esi, esi */
  esi = 0;
/* 78ec45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78ec46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78ec47: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78ec4cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_78ec4c: guest_badaddr(0x78ec4c); return;
}

void f_78ed20(void) {
  LOAD_REGS();
L_78ed20: /* 78ed20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78ed21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78ed22: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78ed23: mov edi, ecx */
  edi = ecx;
/* 78ed25: mov ebp, dword ptr [edi + 4] */
  ebp = R32((uint32_t)(edi + 0x4u));
/* 78ed28: xor esi, esi */
  esi = 0;
/* 78ed2a: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78ed2c: jle 0x78ed50 */
  if ((zf || sf != of)) goto L_78ed50;
L_78ed2e: /* 78ed2e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78ed2f: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_78ed33: /* 78ed33: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 78ed35: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 78ed38: cmp ecx, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78ed3a: jne 0x78ed47 */
  if (!zf) goto L_78ed47;
L_78ed3c: /* 78ed3c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78ed3e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78ed3f: mov ecx, edi */
  ecx = edi;
/* 78ed41: call 0x6c7dfb */
  esp -= 4; W32(esp, 0x78ed46u); SPILL(); f_6c7dfb(); if (g_unwind) return; RELOAD();
/* 78ed46: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_78ed47: /* 78ed47: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 78ed4a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78ed4b: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78ed4d: jl 0x78ed33 */
  if ((sf != of)) goto L_78ed33;
L_78ed4f: /* 78ed4f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_78ed50: /* 78ed50: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 78ed53: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78ed54: mov eax, ebp */
  eax = ebp;
/* 78ed56: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78ed57: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 78ed59: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78ed5a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_78ed70(void) {
  LOAD_REGS();
L_78ed70: /* 78ed70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78ed71: mov ebp, esp */
  ebp = esp;
/* 78ed73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 78ed75: push 0x9ccd20 */
  { uint32_t v = 0x9ccd20u; esp -= 4; W32(esp, v); }
/* 78ed7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78ed80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78ed81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78ed88: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78ed8b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 78ed8e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78ed90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78ed91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78ed92: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78ed93: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 78ed96: mov esi, dword ptr [edi + 0xb4] */
  esi = R32((uint32_t)(edi + 0xb4u));
/* 78ed9c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78ed9f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78eda6: je 0x78ee65 */
  if (zf) goto L_78ee65;
L_78edac: /* 78edac: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 78edb2: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78edb5: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 78edbb: je 0x78edce */
  if (zf) goto L_78edce;
L_78edbd: /* 78edbd: push 0x65 */
  { uint32_t v = 0x65u; esp -= 4; W32(esp, v); }
/* 78edbf: push 0xac8b80 */
  { uint32_t v = 0xac8b80u; esp -= 4; W32(esp, v); }
/* 78edc4: push 0xac8b94 */
  { uint32_t v = 0xac8b94u; esp -= 4; W32(esp, v); }
/* 78edc9: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x78edcbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78edcb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78edce: /* 78edce: mov al, byte ptr [edi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x50u))) & 0xffu);
/* 78edd1: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 78edd3: je 0x78edea */
  if (zf) goto L_78edea;
L_78edd5: /* 78edd5: cmp al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 78edd7: je 0x78edea */
  if (zf) goto L_78edea;
L_78edd9: /* 78edd9: push 0x66 */
  { uint32_t v = 0x66u; esp -= 4; W32(esp, v); }
/* 78eddb: push 0xac8ba8 */
  { uint32_t v = 0xac8ba8u; esp -= 4; W32(esp, v); }
/* 78ede0: push 0xac8bc0 */
  { uint32_t v = 0xac8bc0u; esp -= 4; W32(esp, v); }
/* 78ede5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x78ede7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78ede7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78edea: /* 78edea: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 78edf0: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78edf3: jne 0x78ee06 */
  if (!zf) goto L_78ee06;
L_78edf5: /* 78edf5: push 0x67 */
  { uint32_t v = 0x67u; esp -= 4; W32(esp, v); }
/* 78edf7: push 0xac8c04 */
  { uint32_t v = 0xac8c04u; esp -= 4; W32(esp, v); }
/* 78edfc: push 0xac8c18 */
  { uint32_t v = 0xac8c18u; esp -= 4; W32(esp, v); }
/* 78ee01: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x78ee03u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78ee03: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78ee06: /* 78ee06: test byte ptr [edi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78ee0d: jne 0x78ee20 */
  if (!zf) goto L_78ee20;
L_78ee0f: /* 78ee0f: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 78ee11: push 0xac8c2c */
  { uint32_t v = 0xac8c2cu; esp -= 4; W32(esp, v); }
/* 78ee16: push 0xac8c40 */
  { uint32_t v = 0xac8c40u; esp -= 4; W32(esp, v); }
/* 78ee1b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x78ee1du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78ee1d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78ee20: /* 78ee20: xor eax, eax */
  eax = 0;
L_78ee22: /* 78ee22: cmp eax, dword ptr [esi + 0x1188] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1188u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78ee28: jge 0x78ee3d */
  if ((sf == of)) goto L_78ee3d;
L_78ee2a: /* 78ee2a: mov ecx, dword ptr [esi + 0x1184] */
  ecx = R32((uint32_t)(esi + 0x1184u));
/* 78ee30: cmp dword ptr [ecx + eax*4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78ee33: je 0x78ee38 */
  if (zf) goto L_78ee38;
L_78ee35: /* 78ee35: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78ee36: jmp 0x78ee22 */
  goto L_78ee22;
L_78ee38: /* 78ee38: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78ee3b: jne 0x78ee54 */
  if (!zf) goto L_78ee54;
L_78ee3d: /* 78ee3d: add esi, 0x1184 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1184u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 78ee43: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 78ee45: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78ee47: mov ecx, esi */
  ecx = esi;
/* 78ee49: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x78ee4fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 78ee4f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 78ee51: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
L_78ee54: /* 78ee54: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78ee57: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78ee5e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78ee5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78ee60: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78ee61: mov esp, ebp */
  esp = ebp;
/* 78ee63: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78ee64: ret  */
  esp += 4; SPILL(); return;
L_78ee65: /* 78ee65: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 78ee68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78ee69: lea ecx, [esi + 0x1184] */
  ecx = (uint32_t)(esi + 0x1184u);
/* 78ee6f: call 0x6c79f5 */
  esp -= 4; W32(esp, 0x78ee74u); SPILL(); f_6c79f5(); if (g_unwind) return; RELOAD();
/* 78ee74: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78ee77: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78ee78: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78ee79: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78ee80: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78ee81: mov esp, ebp */
  esp = ebp;
/* 78ee83: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78ee84: ret  */
  esp += 4; SPILL(); return;
}

void f_78ee85(void) {
  LOAD_REGS();
L_78ee85: /* 78ee85: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78ee88: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78ee8d: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 78ee90: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78ee91: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 78ee94: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78ee99u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78ee99(); return;
}

void f_78ee99(void) {
  LOAD_REGS();
L_78ee99: /* 78ee99: push 0xa09f00 */
  { uint32_t v = 0xa09f00u; esp -= 4; W32(esp, v); }
/* 78ee9e: push 0xac8c58 */
  { uint32_t v = 0xac8c58u; esp -= 4; W32(esp, v); }
/* 78eea3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78eea9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78eea9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78eeac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78eeae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78eeb0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78eeb5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_78eeb5: guest_badaddr(0x78eeb5); return;
}

void f_78ef20(void) {
  LOAD_REGS();
L_78ef20: /* 78ef20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78ef21: mov ebp, esp */
  ebp = esp;
/* 78ef23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 78ef25: push 0x9ccd30 */
  { uint32_t v = 0x9ccd30u; esp -= 4; W32(esp, v); }
/* 78ef2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78ef30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78ef31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78ef38: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78ef3b: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78ef40: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78ef42: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78ef43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78ef44: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78ef45: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78ef48: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78ef4f: je 0x78f0bc */
  if (zf) goto L_78f0bc;
L_78ef55: /* 78ef55: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 78ef58: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 78ef5a: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 78ef60: mov ecx, esi */
  ecx = esi;
/* 78ef62: call dword ptr [eax + 0x13c] */
  { uint32_t t = R32((uint32_t)(eax + 0x13cu)); esp -= 4; W32(esp, 0x78ef68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78ef68: mov ebx, eax */
  ebx = eax;
/* 78ef6a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78ef6c: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 78ef6f: je 0x78f0bc */
  if (zf) goto L_78f0bc;
L_78ef75: /* 78ef75: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78ef77: je 0x78f0bc */
  if (zf) goto L_78f0bc;
L_78ef7d: /* 78ef7d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78ef7e: call 0x925ce0 */
  esp -= 4; W32(esp, 0x78ef83u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 78ef83: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78ef85: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 78ef88: je 0x78f0bc */
  if (zf) goto L_78f0bc;
L_78ef8e: /* 78ef8e: mov ecx, dword ptr [esi + 0x30c] */
  ecx = R32((uint32_t)(esi + 0x30cu));
/* 78ef94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78ef95: call 0x6c82e7 */
  esp -= 4; W32(esp, 0x78ef9au); SPILL(); f_6c82e7(); if (g_unwind) return; RELOAD();
/* 78ef9a: mov edi, eax */
  edi = eax;
/* 78ef9c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78ef9f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78efa1: je 0x78f02e */
  if (zf) goto L_78f02e;
L_78efa7: /* 78efa7: mov esi, dword ptr [edi + 0x4c] */
  esi = R32((uint32_t)(edi + 0x4cu));
/* 78efaa: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78efac: je 0x78efdc */
  if (zf) goto L_78efdc;
L_78efae: /* 78efae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78efaf: call 0x911cb0 */
  esp -= 4; W32(esp, 0x78efb4u); SPILL(); f_911cb0(); if (g_unwind) return; RELOAD();
/* 78efb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78efb5: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x78efbau); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
/* 78efba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78efbb: call 0x911cb0 */
  esp -= 4; W32(esp, 0x78efc0u); SPILL(); f_911cb0(); if (g_unwind) return; RELOAD();
/* 78efc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78efc1: call 0x90bbd0 */
  esp -= 4; W32(esp, 0x78efc6u); SPILL(); f_90bbd0(); if (g_unwind) return; RELOAD();
/* 78efc6: mov eax, dword ptr [edi + 0x90] */
  eax = R32((uint32_t)(edi + 0x90u));
/* 78efcc: and eax, 0xfffffff7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 78efcf: mov dword ptr [edi + 0x4c], 0 */
  W32((uint32_t)(edi + 0x4cu), 0x0u);
/* 78efd6: mov dword ptr [edi + 0x90], eax */
  W32((uint32_t)(edi + 0x90u), eax);
L_78efdc: /* 78efdc: mov eax, dword ptr [edi + 0xa4] */
  eax = R32((uint32_t)(edi + 0xa4u));
/* 78efe2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78efe4: jle 0x78f02b */
  if ((zf || sf != of)) goto L_78f02b;
L_78efe6: /* 78efe6: xor eax, eax */
  eax = 0;
L_78efe8: /* 78efe8: cmp eax, dword ptr [edi + 0xa4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xa4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78efee: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 78eff1: jge 0x78f02b */
  if ((sf == of)) goto L_78f02b;
L_78eff3: /* 78eff3: mov edx, dword ptr [edi + 0xa0] */
  edx = R32((uint32_t)(edi + 0xa0u));
/* 78eff9: mov ebx, dword ptr [edx + eax*4] */
  ebx = R32((uint32_t)(edx + eax*4));
/* 78effc: mov esi, dword ptr [ebx + 0x358] */
  esi = R32((uint32_t)(ebx + 0x358u));
/* 78f002: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78f004: je 0x78f025 */
  if (zf) goto L_78f025;
L_78f006: /* 78f006: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78f007: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x78f00cu); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 78f00c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78f00d: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x78f012u); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
/* 78f012: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78f013: call 0x90fcd0 */
  esp -= 4; W32(esp, 0x78f018u); SPILL(); f_90fcd0(); if (g_unwind) return; RELOAD();
/* 78f018: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 78f01b: mov dword ptr [ebx + 0x358], 0 */
  W32((uint32_t)(ebx + 0x358u), 0x0u);
L_78f025: /* 78f025: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78f028: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78f029: jmp 0x78efe8 */
  goto L_78efe8;
L_78f02b: /* 78f02b: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_78f02e: /* 78f02e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78f030: je 0x78f04c */
  if (zf) goto L_78f04c;
L_78f032: /* 78f032: push 0xcd93a0 */
  { uint32_t v = 0xcd93a0u; esp -= 4; W32(esp, v); }
/* 78f037: mov ecx, esi */
  ecx = esi;
/* 78f039: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x78f03fu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 78f03f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78f041: je 0x78f04c */
  if (zf) goto L_78f04c;
L_78f043: /* 78f043: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78f044: call 0x6c17ad */
  esp -= 4; W32(esp, 0x78f049u); SPILL(); f_6c17ad(); if (g_unwind) return; RELOAD();
/* 78f049: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78f04c: /* 78f04c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78f04f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78f050: call 0x6c5407 */
  esp -= 4; W32(esp, 0x78f055u); SPILL(); f_6c5407(); if (g_unwind) return; RELOAD();
/* 78f055: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78f058: push 0xac91ac */
  { uint32_t v = 0xac91acu; esp -= 4; W32(esp, v); }
/* 78f05d: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78f062u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78f062: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 78f064: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 78f066: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x78f06cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78f06c: push 0xac91cc */
  { uint32_t v = 0xac91ccu; esp -= 4; W32(esp, v); }
/* 78f071: mov esi, eax */
  esi = eax;
/* 78f073: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78f078u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78f078: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78f07b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78f07c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78f07d: call 0x90e0f0 */
  esp -= 4; W32(esp, 0x78f082u); SPILL(); f_90e0f0(); if (g_unwind) return; RELOAD();
/* 78f082: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78f083: call 0x90f080 */
  esp -= 4; W32(esp, 0x78f088u); SPILL(); f_90f080(); if (g_unwind) return; RELOAD();
/* 78f088: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78f08a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78f08b: call 0x925a30 */
  esp -= 4; W32(esp, 0x78f090u); SPILL(); f_925a30(); if (g_unwind) return; RELOAD();
/* 78f090: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78f091: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78f092: call 0x928740 */
  esp -= 4; W32(esp, 0x78f097u); SPILL(); f_928740(); if (g_unwind) return; RELOAD();
/* 78f097: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78f098: call 0x90ddf0 */
  esp -= 4; W32(esp, 0x78f09du); SPILL(); f_90ddf0(); if (g_unwind) return; RELOAD();
/* 78f09d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78f09e: call 0x9287f0 */
  esp -= 4; W32(esp, 0x78f0a3u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 78f0a3: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 78f0a6: je 0x78f0ae */
  if (zf) goto L_78f0ae;
L_78f0a8: /* 78f0a8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78f0a9: call 0x928630 */
  esp -= 4; W32(esp, 0x78f0aeu); SPILL(); f_928630(); if (g_unwind) return; RELOAD();
L_78f0ae: /* 78f0ae: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 78f0b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78f0b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78f0b4: call 0x6c7ac7 */
  esp -= 4; W32(esp, 0x78f0b9u); SPILL(); f_6c7ac7(); if (g_unwind) return; RELOAD();
/* 78f0b9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78f0bc: /* 78f0bc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78f0bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78f0c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78f0c1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78f0c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78f0c9: mov esp, ebp */
  esp = ebp;
/* 78f0cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78f0cc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_78f0cf(void) {
  LOAD_REGS();
L_78f0cf: /* 78f0cf: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 78f0d2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78f0d7: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 78f0da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78f0db: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 78f0de: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78f0e3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78f0e3(); return;
}

void f_78f0e3(void) {
  LOAD_REGS();
L_78f0e3: /* 78f0e3: push 0xa09f28 */
  { uint32_t v = 0xa09f28u; esp -= 4; W32(esp, v); }
/* 78f0e8: push 0xac91f8 */
  { uint32_t v = 0xac91f8u; esp -= 4; W32(esp, v); }
/* 78f0ed: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78f0f3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78f0f3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78f0f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78f0f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78f0fa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78f0ffu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_78f0ff: guest_badaddr(0x78f0ff); return;
}

void f_78f180(void) {
  LOAD_REGS();
L_78f180: /* 78f180: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78f181: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 78f185: mov eax, dword ptr [ebx + 0x170] */
  eax = R32((uint32_t)(ebx + 0x170u));
/* 78f18b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78f18c: xor edi, edi */
  edi = 0;
/* 78f18e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78f190: jle 0x78f1d5 */
  if ((zf || sf != of)) goto L_78f1d5;
L_78f192: /* 78f192: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_78f193: /* 78f193: mov eax, dword ptr [ebx + 0x16c] */
  eax = R32((uint32_t)(ebx + 0x16cu));
/* 78f199: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 78f19c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78f19e: je 0x78f1c9 */
  if (zf) goto L_78f1c9;
L_78f1a0: /* 78f1a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78f1a1: call 0x92a7f0 */
  esp -= 4; W32(esp, 0x78f1a6u); SPILL(); f_92a7f0(); if (g_unwind) return; RELOAD();
/* 78f1a6: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 78f1ac: mov edx, dword ptr [ecx + 0x15014] */
  edx = R32((uint32_t)(ecx + 0x15014u));
/* 78f1b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78f1b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78f1b4: call 0x6c165e */
  esp -= 4; W32(esp, 0x78f1b9u); SPILL(); f_6c165e(); if (g_unwind) return; RELOAD();
/* 78f1b9: mov eax, dword ptr [ebx + 0x16c] */
  eax = R32((uint32_t)(ebx + 0x16cu));
/* 78f1bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78f1c2: mov dword ptr [eax + edi*4], 0 */
  W32((uint32_t)(eax + edi*4), 0x0u);
L_78f1c9: /* 78f1c9: mov eax, dword ptr [ebx + 0x170] */
  eax = R32((uint32_t)(ebx + 0x170u));
/* 78f1cf: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 78f1d0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78f1d2: jl 0x78f193 */
  if ((sf != of)) goto L_78f193;
L_78f1d4: /* 78f1d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_78f1d5: /* 78f1d5: call 0x6c560f */
  esp -= 4; W32(esp, 0x78f1dau); SPILL(); f_6c560f(); if (g_unwind) return; RELOAD();
/* 78f1da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78f1db: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78f1dc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_78f200(void) {
  LOAD_REGS();
L_78f200: /* 78f200: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78f201: mov ebp, esp */
  ebp = esp;
/* 78f203: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 78f205: push 0x9ccd40 */
  { uint32_t v = 0x9ccd40u; esp -= 4; W32(esp, v); }
/* 78f20a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78f210: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78f211: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78f218: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78f21b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 78f21e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78f21f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78f220: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78f221: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78f224: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78f225: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78f22c: call 0x6cafbf */
  esp -= 4; W32(esp, 0x78f231u); SPILL(); f_6cafbf(); if (g_unwind) return; RELOAD();
/* 78f231: mov esi, eax */
  esi = eax;
/* 78f233: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78f235: je 0x78f25b */
  if (zf) goto L_78f25b;
L_78f237: /* 78f237: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 78f239: mov ecx, esi */
  ecx = esi;
/* 78f23b: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x78f241u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78f241: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78f243: je 0x78f25b */
  if (zf) goto L_78f25b;
L_78f245: /* 78f245: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 78f24b: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78f24e: jne 0x78f25b */
  if (!zf) goto L_78f25b;
L_78f250: /* 78f250: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78f252: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78f253: call 0x6c7ac7 */
  esp -= 4; W32(esp, 0x78f258u); SPILL(); f_6c7ac7(); if (g_unwind) return; RELOAD();
/* 78f258: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78f25b: /* 78f25b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78f25e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78f25f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78f260: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78f267: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78f268: mov esp, ebp */
  esp = ebp;
/* 78f26a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78f26b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_78f26e(void) {
  LOAD_REGS();
L_78f26e: /* 78f26e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78f271: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78f276: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 78f279: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78f27a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 78f27d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78f282u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78f282(); return;
}

void f_78f282(void) {
  LOAD_REGS();
L_78f282: /* 78f282: push 0xa09f58 */
  { uint32_t v = 0xa09f58u; esp -= 4; W32(esp, v); }
/* 78f287: push 0xac8b68 */
  { uint32_t v = 0xac8b68u; esp -= 4; W32(esp, v); }
/* 78f28c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78f292u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78f292: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78f295: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78f297: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78f299: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78f29eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_78f29e: guest_badaddr(0x78f29e); return;
}

void f_78f2d0(void) {
  LOAD_REGS();
L_78f2d0: /* 78f2d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78f2d1: mov ebp, esp */
  ebp = esp;
/* 78f2d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 78f2d5: push 0x9ccd50 */
  { uint32_t v = 0x9ccd50u; esp -= 4; W32(esp, v); }
/* 78f2da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78f2e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78f2e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78f2e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78f2eb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 78f2ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78f2ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78f2f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78f2f1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78f2f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78f2f5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78f2fc: call 0x6cafbf */
  esp -= 4; W32(esp, 0x78f301u); SPILL(); f_6cafbf(); if (g_unwind) return; RELOAD();
/* 78f301: mov esi, eax */
  esi = eax;
/* 78f303: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78f305: je 0x78f33a */
  if (zf) goto L_78f33a;
L_78f307: /* 78f307: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 78f309: mov ecx, esi */
  ecx = esi;
/* 78f30b: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x78f311u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78f311: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78f313: je 0x78f33a */
  if (zf) goto L_78f33a;
L_78f315: /* 78f315: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 78f31b: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78f31e: jne 0x78f33a */
  if (!zf) goto L_78f33a;
L_78f320: /* 78f320: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 78f326: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78f329: je 0x78f33a */
  if (zf) goto L_78f33a;
L_78f32b: /* 78f32b: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78f32d: je 0x78f33a */
  if (zf) goto L_78f33a;
L_78f32f: /* 78f32f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78f331: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78f332: call 0x6c7ac7 */
  esp -= 4; W32(esp, 0x78f337u); SPILL(); f_6c7ac7(); if (g_unwind) return; RELOAD();
/* 78f337: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78f33a: /* 78f33a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78f33d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78f33e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78f33f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78f346: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78f347: mov esp, ebp */
  esp = ebp;
/* 78f349: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78f34a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_78f34d(void) {
  LOAD_REGS();
L_78f34d: /* 78f34d: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78f350: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78f355: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 78f358: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78f359: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 78f35c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78f361u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78f361(); return;
}

void f_78f361(void) {
  LOAD_REGS();
L_78f361: /* 78f361: push 0xa09f98 */
  { uint32_t v = 0xa09f98u; esp -= 4; W32(esp, v); }
/* 78f366: push 0xac8b70 */
  { uint32_t v = 0xac8b70u; esp -= 4; W32(esp, v); }
/* 78f36b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78f371u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78f371: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78f374: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78f376: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78f378: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78f37du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_78f37d: guest_badaddr(0x78f37d); return;
}

void f_78f3b0(void) {
  LOAD_REGS();
L_78f3b0: /* 78f3b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78f3b1: mov ebp, esp */
  ebp = esp;
/* 78f3b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 78f3b5: push 0x9ccd6b */
  { uint32_t v = 0x9ccd6bu; esp -= 4; W32(esp, v); }
/* 78f3ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78f3c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78f3c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78f3c8: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78f3cb: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78f3d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78f3d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78f3d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78f3d3: xor edi, edi */
  edi = 0;
/* 78f3d5: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78f3d7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78f3da: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 78f3dd: je 0x78f763 */
  if (zf) goto L_78f763;
L_78f3e3: /* 78f3e3: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 78f3e9: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78f3eb: jne 0x78f763 */
  if (!zf) goto L_78f763;
L_78f3f1: /* 78f3f1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 78f3f4: cmp dword ptr [esi + 0x115c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x115cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78f3fa: jne 0x78f763 */
  if (!zf) goto L_78f763;
L_78f400: /* 78f400: cmp dword ptr [eax + 0x1500c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1500cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78f406: je 0x78f763 */
  if (zf) goto L_78f763;
L_78f40c: /* 78f40c: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 78f412: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 78f414: push 0xac9988 */
  { uint32_t v = 0xac9988u; esp -= 4; W32(esp, v); }
/* 78f419: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78f41a: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x78f420u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 78f420: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78f423: push 0xac99d8 */
  { uint32_t v = 0xac99d8u; esp -= 4; W32(esp, v); }
/* 78f428: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 78f42c: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78f431u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78f431: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 78f434: push 0xac9a00 */
  { uint32_t v = 0xac9a00u; esp -= 4; W32(esp, v); }
/* 78f439: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 78f43d: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78f442u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78f442: push 0x3f733333 */
  { uint32_t v = 0x3f733333u; esp -= 4; W32(esp, v); }
/* 78f447: push 0x3f733333 */
  { uint32_t v = 0x3f733333u; esp -= 4; W32(esp, v); }
/* 78f44c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78f44e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78f450: call 0x912a50 */
  esp -= 4; W32(esp, 0x78f455u); SPILL(); f_912a50(); if (g_unwind) return; RELOAD();
/* 78f455: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78f457: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78f458: mov dword ptr [esi + 0x115c], eax */
  W32((uint32_t)(esi + 0x115cu), eax);
/* 78f45e: call 0x913260 */
  esp -= 4; W32(esp, 0x78f463u); SPILL(); f_913260(); if (g_unwind) return; RELOAD();
/* 78f463: mov ecx, dword ptr [esi + 0x115c] */
  ecx = R32((uint32_t)(esi + 0x115cu));
/* 78f469: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78f46b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78f46c: call 0x912ff0 */
  esp -= 4; W32(esp, 0x78f471u); SPILL(); f_912ff0(); if (g_unwind) return; RELOAD();
/* 78f471: mov edx, dword ptr [esi + 0x115c] */
  edx = R32((uint32_t)(esi + 0x115cu));
/* 78f477: push 0x3a83126f */
  { uint32_t v = 0x3a83126fu; esp -= 4; W32(esp, v); }
/* 78f47c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78f47d: call 0x912f60 */
  esp -= 4; W32(esp, 0x78f482u); SPILL(); f_912f60(); if (g_unwind) return; RELOAD();
/* 78f482: mov eax, dword ptr [esi + 0x115c] */
  eax = R32((uint32_t)(esi + 0x115cu));
/* 78f488: push 0x3ca3d70a */
  { uint32_t v = 0x3ca3d70au; esp -= 4; W32(esp, v); }
/* 78f48d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78f48e: call 0x913010 */
  esp -= 4; W32(esp, 0x78f493u); SPILL(); f_913010(); if (g_unwind) return; RELOAD();
/* 78f493: mov ecx, dword ptr [esi + 0x115c] */
  ecx = R32((uint32_t)(esi + 0x115cu));
/* 78f499: push 0x3d4ccccd */
  { uint32_t v = 0x3d4ccccdu; esp -= 4; W32(esp, v); }
/* 78f49e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78f49f: call 0x913050 */
  esp -= 4; W32(esp, 0x78f4a4u); SPILL(); f_913050(); if (g_unwind) return; RELOAD();
/* 78f4a4: mov edx, dword ptr [esi + 0x115c] */
  edx = R32((uint32_t)(esi + 0x115cu));
/* 78f4aa: push 0x3a83126f */
  { uint32_t v = 0x3a83126fu; esp -= 4; W32(esp, v); }
/* 78f4af: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78f4b0: call 0x913030 */
  esp -= 4; W32(esp, 0x78f4b5u); SPILL(); f_913030(); if (g_unwind) return; RELOAD();
/* 78f4b5: mov eax, dword ptr [esi + 0x115c] */
  eax = R32((uint32_t)(esi + 0x115cu));
/* 78f4bb: push 0x3d4ccccd */
  { uint32_t v = 0x3d4ccccdu; esp -= 4; W32(esp, v); }
/* 78f4c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78f4c1: call 0x913070 */
  esp -= 4; W32(esp, 0x78f4c6u); SPILL(); f_913070(); if (g_unwind) return; RELOAD();
/* 78f4c6: mov ecx, dword ptr [esi + 0x115c] */
  ecx = R32((uint32_t)(esi + 0x115cu));
/* 78f4cc: mov dword ptr [ecx + 0x1d0], 0x6ccef0 */
  W32((uint32_t)(ecx + 0x1d0u), 0x6ccef0u);
/* 78f4d6: mov edx, dword ptr [esi + 0x115c] */
  edx = R32((uint32_t)(esi + 0x115cu));
/* 78f4dc: mov dword ptr [edx + 0x1cc], 0x6ca3d5 */
  W32((uint32_t)(edx + 0x1ccu), 0x6ca3d5u);
/* 78f4e6: mov eax, dword ptr [esi + 0x115c] */
  eax = R32((uint32_t)(esi + 0x115cu));
/* 78f4ec: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 78f4ef: push 0xac9a28 */
  { uint32_t v = 0xac9a28u; esp -= 4; W32(esp, v); }
/* 78f4f4: mov dword ptr [eax + 0x1d4], 0x6c7ea5 */
  W32((uint32_t)(eax + 0x1d4u), 0x6c7ea5u);
/* 78f4fe: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 78f502: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78f507u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78f507: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 78f50d: mov edx, dword ptr [ecx + 0x1500c] */
  edx = R32((uint32_t)(ecx + 0x1500cu));
/* 78f513: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78f514: mov ecx, 2 */
  ecx = 0x2u;
/* 78f519: call 0x78cbb0 */
  esp -= 4; W32(esp, 0x78f51eu); SPILL(); f_78cbb0(); if (g_unwind) return; RELOAD();
/* 78f51e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78f521: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 78f526: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78f527: mov dword ptr [esi + 0x1160], eax */
  W32((uint32_t)(esi + 0x1160u), eax);
/* 78f52d: call 0x926180 */
  esp -= 4; W32(esp, 0x78f532u); SPILL(); f_926180(); if (g_unwind) return; RELOAD();
/* 78f532: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 78f535: push 0xac9a54 */
  { uint32_t v = 0xac9a54u; esp -= 4; W32(esp, v); }
/* 78f53a: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 78f53e: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78f543u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78f543: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 78f548: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78f54a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78f54c: push 0xac9a7c */
  { uint32_t v = 0xac9a7cu; esp -= 4; W32(esp, v); }
/* 78f551: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 78f553: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x78f555u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78f555: mov dword ptr [esi + 0x1164], eax */
  W32((uint32_t)(esi + 0x1164u), eax);
/* 78f55b: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 78f561: mov edx, dword ptr [ecx + 0x15014] */
  edx = R32((uint32_t)(ecx + 0x15014u));
/* 78f567: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 78f569: mov eax, dword ptr [esi + 0x1164] */
  eax = R32((uint32_t)(esi + 0x1164u));
/* 78f56f: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 78f572: mov ecx, dword ptr [esi + 0x1164] */
  ecx = R32((uint32_t)(esi + 0x1164u));
/* 78f578: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 78f57b: mov edx, dword ptr [esi + 0x1164] */
  edx = R32((uint32_t)(esi + 0x1164u));
/* 78f581: mov dword ptr [edx + 0xc], 0x6c29fa */
  W32((uint32_t)(edx + 0xcu), 0x6c29fau);
/* 78f588: mov eax, dword ptr [esi + 0x1164] */
  eax = R32((uint32_t)(esi + 0x1164u));
/* 78f58e: mov dword ptr [eax + 0x10], edi */
  W32((uint32_t)(eax + 0x10u), edi);
/* 78f591: mov ecx, dword ptr [esi + 0x1164] */
  ecx = R32((uint32_t)(esi + 0x1164u));
/* 78f597: mov dword ptr [ecx + 0x14], edi */
  W32((uint32_t)(ecx + 0x14u), edi);
/* 78f59a: mov edx, dword ptr [esi + 0x1164] */
  edx = R32((uint32_t)(esi + 0x1164u));
/* 78f5a0: mov dword ptr [edx + 0x18], 0x978f20 */
  W32((uint32_t)(edx + 0x18u), 0x978f20u);
/* 78f5a7: mov eax, dword ptr [esi + 0x1164] */
  eax = R32((uint32_t)(esi + 0x1164u));
/* 78f5ad: mov dword ptr [eax + 0x1c], edi */
  W32((uint32_t)(eax + 0x1cu), edi);
/* 78f5b0: mov ecx, dword ptr [esi + 0x1164] */
  ecx = R32((uint32_t)(esi + 0x1164u));
/* 78f5b6: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 78f5b9: push 0xac9ab0 */
  { uint32_t v = 0xac9ab0u; esp -= 4; W32(esp, v); }
/* 78f5be: mov dword ptr [ecx + 0x20], edi */
  W32((uint32_t)(ecx + 0x20u), edi);
/* 78f5c1: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 78f5c5: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78f5cau); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78f5ca: push 0xac9ad0 */
  { uint32_t v = 0xac9ad0u; esp -= 4; W32(esp, v); }
/* 78f5cf: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78f5d4u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78f5d4: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 78f5d6: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 78f5d8: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x78f5deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78f5de: push 0xac9af0 */
  { uint32_t v = 0xac9af0u; esp -= 4; W32(esp, v); }
/* 78f5e3: mov ebx, eax */
  ebx = eax;
/* 78f5e5: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78f5eau); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78f5ea: mov eax, ebx */
  eax = ebx;
/* 78f5ec: call 0x78cb40 */
  esp -= 4; W32(esp, 0x78f5f1u); SPILL(); f_78cb40(); if (g_unwind) return; RELOAD();
/* 78f5f1: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 78f5f7: push 0x6c5547 */
  { uint32_t v = 0x6c5547u; esp -= 4; W32(esp, v); }
/* 78f5fc: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 78f601: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 78f604: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78f605: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 78f608: mov dword ptr [ebp - 0x3c], 0x49000000 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x49000000u);
/* 78f60f: mov dword ptr [ebp - 0x38], 0x49000000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x49000000u);
/* 78f616: mov dword ptr [ebp - 0x34], 0x49000000 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x49000000u);
/* 78f61d: mov dword ptr [ebp - 0x48], 0xc9000000 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0xc9000000u);
/* 78f624: mov dword ptr [ebp - 0x44], 0xc9000000 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0xc9000000u);
/* 78f62b: mov dword ptr [ebp - 0x40], 0xc9000000 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0xc9000000u);
/* 78f632: mov edx, dword ptr [ecx + 0x1500c] */
  edx = R32((uint32_t)(ecx + 0x1500cu));
/* 78f638: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78f639: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78f63a: call 0x92ef20 */
  esp -= 4; W32(esp, 0x78f63fu); SPILL(); f_92ef20(); if (g_unwind) return; RELOAD();
/* 78f63f: mov edi, eax */
  edi = eax;
/* 78f641: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78f646: mov ecx, dword ptr [eax + 0x15234] */
  ecx = R32((uint32_t)(eax + 0x15234u));
/* 78f64c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78f64d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 78f64e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78f64f: mov dword ptr [eax + 0x15234], ecx */
  W32((uint32_t)(eax + 0x15234u), ecx);
/* 78f655: call 0x92f4b0 */
  esp -= 4; W32(esp, 0x78f65au); SPILL(); f_92f4b0(); if (g_unwind) return; RELOAD();
/* 78f65a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78f65b: call 0x928490 */
  esp -= 4; W32(esp, 0x78f660u); SPILL(); f_928490(); if (g_unwind) return; RELOAD();
/* 78f660: mov dword ptr [esi + 0x1168], eax */
  W32((uint32_t)(esi + 0x1168u), eax);
/* 78f666: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78f66b: inc dword ptr [eax + 0x15230] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15230u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x15230u), r);
  }
/* 78f671: mov eax, dword ptr [esi + 0x1168] */
  eax = R32((uint32_t)(esi + 0x1168u));
/* 78f677: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78f678: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78f679: call 0x928740 */
  esp -= 4; W32(esp, 0x78f67eu); SPILL(); f_928740(); if (g_unwind) return; RELOAD();
/* 78f67e: mov ecx, dword ptr [esi + 0x1168] */
  ecx = R32((uint32_t)(esi + 0x1168u));
/* 78f684: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78f685: call 0x928630 */
  esp -= 4; W32(esp, 0x78f68au); SPILL(); f_928630(); if (g_unwind) return; RELOAD();
/* 78f68a: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 78f690: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 78f692: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 78f694: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 78f699: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 78f69b: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x78f69du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78f69d: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 78f6a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78f6a2: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 78f6a6: je 0x78f6b1 */
  if (zf) goto L_78f6b1;
L_78f6a8: /* 78f6a8: mov ecx, eax */
  ecx = eax;
/* 78f6aa: call 0x6c4606 */
  esp -= 4; W32(esp, 0x78f6afu); SPILL(); f_6c4606(); if (g_unwind) return; RELOAD();
/* 78f6af: jmp 0x78f6b3 */
  goto L_78f6b3;
L_78f6b1: /* 78f6b1: xor eax, eax */
  eax = 0;
L_78f6b3: /* 78f6b3: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 78f6b9: mov ecx, dword ptr [esi + 0x1168] */
  ecx = R32((uint32_t)(esi + 0x1168u));
/* 78f6bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78f6c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78f6c1: call 0x928790 */
  esp -= 4; W32(esp, 0x78f6c6u); SPILL(); f_928790(); if (g_unwind) return; RELOAD();
/* 78f6c6: mov edx, dword ptr [0xb21bb4] */
  edx = R32((uint32_t)(0xb21bb4u));
/* 78f6cc: mov eax, dword ptr [edx + 0x1500c] */
  eax = R32((uint32_t)(edx + 0x1500cu));
/* 78f6d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78f6d3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78f6da: call 0x929d20 */
  esp -= 4; W32(esp, 0x78f6dfu); SPILL(); f_929d20(); if (g_unwind) return; RELOAD();
/* 78f6df: push 0x78ce30 */
  { uint32_t v = 0x78ce30u; esp -= 4; W32(esp, v); }
/* 78f6e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78f6e6: mov dword ptr [eax + 4], 1 */
  W32((uint32_t)(eax + 0x4u), 0x1u);
/* 78f6ed: mov dword ptr [eax], 0xa */
  W32((uint32_t)(eax), 0xau);
/* 78f6f3: mov ecx, dword ptr [esi + 0x1160] */
  ecx = R32((uint32_t)(esi + 0x1160u));
/* 78f6f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78f6fb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78f6fc: call 0x9260c0 */
  esp -= 4; W32(esp, 0x78f701u); SPILL(); f_9260c0(); if (g_unwind) return; RELOAD();
/* 78f701: mov edx, dword ptr [esi + 0x1160] */
  edx = R32((uint32_t)(esi + 0x1160u));
/* 78f707: push 0x78c260 */
  { uint32_t v = 0x78c260u; esp -= 4; W32(esp, v); }
/* 78f70c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78f70e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78f710: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78f711: call 0x926060 */
  esp -= 4; W32(esp, 0x78f716u); SPILL(); f_926060(); if (g_unwind) return; RELOAD();
/* 78f716: mov eax, dword ptr [esi + 0x1160] */
  eax = R32((uint32_t)(esi + 0x1160u));
/* 78f71c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78f71e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78f720: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78f721: call 0x925ea0 */
  esp -= 4; W32(esp, 0x78f726u); SPILL(); f_925ea0(); if (g_unwind) return; RELOAD();
/* 78f726: mov esi, eax */
  esi = eax;
/* 78f728: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 78f72a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78f72b: call 0x911f10 */
  esp -= 4; W32(esp, 0x78f730u); SPILL(); f_911f10(); if (g_unwind) return; RELOAD();
/* 78f730: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78f732: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78f733: call 0x912000 */
  esp -= 4; W32(esp, 0x78f738u); SPILL(); f_912000(); if (g_unwind) return; RELOAD();
/* 78f738: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* 78f73d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78f73e: call 0x912310 */
  esp -= 4; W32(esp, 0x78f743u); SPILL(); f_912310(); if (g_unwind) return; RELOAD();
/* 78f743: push 0x3c23d70a */
  { uint32_t v = 0x3c23d70au; esp -= 4; W32(esp, v); }
/* 78f748: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78f749: call 0x912090 */
  esp -= 4; W32(esp, 0x78f74eu); SPILL(); f_912090(); if (g_unwind) return; RELOAD();
/* 78f74e: push 0x41200000 */
  { uint32_t v = 0x41200000u; esp -= 4; W32(esp, v); }
/* 78f753: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78f754: call 0x9122d0 */
  esp -= 4; W32(esp, 0x78f759u); SPILL(); f_9122d0(); if (g_unwind) return; RELOAD();
/* 78f759: push 0xac9b24 */
  { uint32_t v = 0xac9b24u; esp -= 4; W32(esp, v); }
/* 78f75e: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78f763u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
L_78f763: /* 78f763: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78f766: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78f767: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78f768: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78f76f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78f770: mov esp, ebp */
  esp = ebp;
/* 78f772: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78f773: ret 4 */
  esp += 8; SPILL(); return;
}

void f_78f776(void) {
  LOAD_REGS();
L_78f776: /* 78f776: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 78f779: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78f77e: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 78f781: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78f782: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 78f785: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78f78au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78f78a(); return;
}

void f_78f78a(void) {
  LOAD_REGS();
L_78f78a: /* 78f78a: push 0xa0a058 */
  { uint32_t v = 0xa0a058u; esp -= 4; W32(esp, v); }
/* 78f78f: push 0xac9b1c */
  { uint32_t v = 0xac9b1cu; esp -= 4; W32(esp, v); }
/* 78f794: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78f79au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78f79a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78f79d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78f79f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78f7a1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78f7a6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78f7a6(); return;
}

void f_78f7a6(void) {
  LOAD_REGS();
L_78f7a6: /* 78f7a6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 78f7a9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78f7ae: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 78f7b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78f7b2: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 78f7b5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78f7bau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78f7ba(); return;
}

void f_78f7ba(void) {
  LOAD_REGS();
L_78f7ba: /* 78f7ba: push 0xa0a038 */
  { uint32_t v = 0xa0a038u; esp -= 4; W32(esp, v); }
/* 78f7bf: push 0xac9aa8 */
  { uint32_t v = 0xac9aa8u; esp -= 4; W32(esp, v); }
/* 78f7c4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78f7cau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78f7ca: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78f7cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78f7cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78f7d1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78f7d6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78f7d6(); return;
}

void f_78f7d6(void) {
  LOAD_REGS();
L_78f7d6: /* 78f7d6: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 78f7d9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78f7de: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 78f7e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78f7e2: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 78f7e5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78f7eau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78f7ea(); return;
}

void f_78f7ea(void) {
  LOAD_REGS();
L_78f7ea: /* 78f7ea: push 0xa0a028 */
  { uint32_t v = 0xa0a028u; esp -= 4; W32(esp, v); }
/* 78f7ef: push 0xac9a4c */
  { uint32_t v = 0xac9a4cu; esp -= 4; W32(esp, v); }
/* 78f7f4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78f7fau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78f7fa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78f7fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78f7ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78f801: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78f806u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78f806(); return;
}

void f_78f806(void) {
  LOAD_REGS();
L_78f806: /* 78f806: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 78f809: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78f80e: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 78f811: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78f812: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 78f815: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78f81au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78f81a(); return;
}

void f_78f81a(void) {
  LOAD_REGS();
L_78f81a: /* 78f81a: push 0xa0a010 */
  { uint32_t v = 0xa0a010u; esp -= 4; W32(esp, v); }
/* 78f81f: push 0xac9a20 */
  { uint32_t v = 0xac9a20u; esp -= 4; W32(esp, v); }
/* 78f824: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78f82au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78f82a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78f82d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78f82f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78f831: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78f836u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78f836(); return;
}

void f_78f836(void) {
  LOAD_REGS();
L_78f836: /* 78f836: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 78f839: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78f83e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 78f841: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78f842: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 78f845: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78f84au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78f84a(); return;
}

void f_78f84a(void) {
  LOAD_REGS();
L_78f84a: /* 78f84a: push 0xa09ff8 */
  { uint32_t v = 0xa09ff8u; esp -= 4; W32(esp, v); }
/* 78f84f: push 0xac99f8 */
  { uint32_t v = 0xac99f8u; esp -= 4; W32(esp, v); }
/* 78f854: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78f85au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78f85a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78f85d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78f85f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78f861: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78f866u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78f866(); return;
}

void f_78f866(void) {
  LOAD_REGS();
L_78f866: /* 78f866: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 78f869: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78f86e: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 78f871: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78f872: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 78f875: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78f87au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78f87a(); return;
}

void f_78f87a(void) {
  LOAD_REGS();
L_78f87a: /* 78f87a: push 0xa09fd0 */
  { uint32_t v = 0xa09fd0u; esp -= 4; W32(esp, v); }
/* 78f87f: push 0xac9b54 */
  { uint32_t v = 0xac9b54u; esp -= 4; W32(esp, v); }
/* 78f884: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78f88au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78f88a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78f88d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78f88f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78f891: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78f896u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_78f896: guest_badaddr(0x78f896); return;
}

void f_78f9e0(void) {
  LOAD_REGS();
L_78f9e0: /* 78f9e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78f9e1: mov ebp, esp */
  ebp = esp;
/* 78f9e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 78f9e5: push 0x9ccd80 */
  { uint32_t v = 0x9ccd80u; esp -= 4; W32(esp, v); }
/* 78f9ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78f9f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78f9f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78f9f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78f9fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78f9fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78f9fd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 78fa00: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78fa01: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78fa04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78fa05: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78fa0c: call 0x928730 */
  esp -= 4; W32(esp, 0x78fa11u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 78fa11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78fa12: mov ebx, eax */
  ebx = eax;
/* 78fa14: call 0x9287f0 */
  esp -= 4; W32(esp, 0x78fa19u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 78fa19: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78fa1a: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 78fa1d: call 0x9287a0 */
  esp -= 4; W32(esp, 0x78fa22u); SPILL(); f_9287a0(); if (g_unwind) return; RELOAD();
/* 78fa22: mov edi, eax */
  edi = eax;
/* 78fa24: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 78fa27: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78fa29: je 0x78fa43 */
  if (zf) goto L_78fa43;
L_78fa2b: /* 78fa2b: push 0x2b1 */
  { uint32_t v = 0x2b1u; esp -= 4; W32(esp, v); }
/* 78fa30: push 0xac8ea8 */
  { uint32_t v = 0xac8ea8u; esp -= 4; W32(esp, v); }
/* 78fa35: push 0xac8ebc */
  { uint32_t v = 0xac8ebcu; esp -= 4; W32(esp, v); }
/* 78fa3a: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78fa40u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78fa40: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78fa43: /* 78fa43: mov ecx, edi */
  ecx = edi;
/* 78fa45: call 0x6c6dde */
  esp -= 4; W32(esp, 0x78fa4au); SPILL(); f_6c6dde(); if (g_unwind) return; RELOAD();
/* 78fa4a: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 78fa4f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78fa51: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78fa53: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78fa54: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x78fa57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78fa57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78fa58: call 0x928510 */
  esp -= 4; W32(esp, 0x78fa5du); SPILL(); f_928510(); if (g_unwind) return; RELOAD();
/* 78fa5d: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78fa62: mov ecx, dword ptr [eax + 0x15230] */
  ecx = R32((uint32_t)(eax + 0x15230u));
/* 78fa68: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 78fa69: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78fa6a: mov dword ptr [eax + 0x15230], ecx */
  W32((uint32_t)(eax + 0x15230u), ecx);
/* 78fa70: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x78fa76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78fa76: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 78fa79: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 78fa7c: je 0x78fa93 */
  if (zf) goto L_78fa93;
L_78fa7e: /* 78fa7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78fa7f: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78fa84: mov ecx, dword ptr [eax + 0x15014] */
  ecx = R32((uint32_t)(eax + 0x15014u));
/* 78fa8a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78fa8b: call 0x6c165e */
  esp -= 4; W32(esp, 0x78fa90u); SPILL(); f_6c165e(); if (g_unwind) return; RELOAD();
/* 78fa90: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78fa93: /* 78fa93: call 0x6c560f */
  esp -= 4; W32(esp, 0x78fa98u); SPILL(); f_6c560f(); if (g_unwind) return; RELOAD();
/* 78fa98: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78fa9b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78fa9c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78fa9d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78faa4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78faa5: mov esp, ebp */
  esp = ebp;
/* 78faa7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78faa8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_78faab(void) {
  LOAD_REGS();
L_78faab: /* 78faab: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78faae: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78fab3: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 78fab6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78fab7: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 78faba: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78fabfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78fabf(); return;
}

void f_78fabf(void) {
  LOAD_REGS();
L_78fabf: /* 78fabf: push 0xa0a07c */
  { uint32_t v = 0xa0a07cu; esp -= 4; W32(esp, v); }
/* 78fac4: push 0xac8edc */
  { uint32_t v = 0xac8edcu; esp -= 4; W32(esp, v); }
/* 78fac9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78facfu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78facf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78fad2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78fad4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78fad6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78fadbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_78fadb: guest_badaddr(0x78fadb); return;
}

void f_78fb20(void) {
  LOAD_REGS();
L_78fb20: /* 78fb20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78fb21: mov ebp, esp */
  ebp = esp;
/* 78fb23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 78fb25: push 0x9ccd90 */
  { uint32_t v = 0x9ccd90u; esp -= 4; W32(esp, v); }
/* 78fb2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78fb30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78fb31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78fb38: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78fb3b: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78fb40: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78fb42: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78fb43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78fb44: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78fb45: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78fb48: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78fb4f: je 0x78fb79 */
  if (zf) goto L_78fb79;
L_78fb51: /* 78fb51: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 78fb54: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 78fb56: mov ecx, esi */
  ecx = esi;
/* 78fb58: call dword ptr [eax + 0x13c] */
  { uint32_t t = R32((uint32_t)(eax + 0x13cu)); esp -= 4; W32(esp, 0x78fb5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78fb5e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78fb60: jne 0x78fb8c */
  if (!zf) goto L_78fb8c;
L_78fb62: /* 78fb62: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 78fb68: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78fb6a: push 0xac96e8 */
  { uint32_t v = 0xac96e8u; esp -= 4; W32(esp, v); }
/* 78fb6f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78fb70: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x78fb76u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 78fb76: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78fb79: /* 78fb79: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78fb7c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78fb83: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78fb84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78fb85: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78fb86: mov esp, ebp */
  esp = ebp;
/* 78fb88: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78fb89: ret 4 */
  esp += 8; SPILL(); return;
L_78fb8c: /* 78fb8c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 78fb8e: mov ecx, esi */
  ecx = esi;
/* 78fb90: call dword ptr [eax + 0x13c] */
  { uint32_t t = R32((uint32_t)(eax + 0x13cu)); esp -= 4; W32(esp, 0x78fb96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78fb96: mov edi, eax */
  edi = eax;
/* 78fb98: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78fb99: call 0x925ce0 */
  esp -= 4; W32(esp, 0x78fb9eu); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 78fb9e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78fba0: je 0x78fbbf */
  if (zf) goto L_78fbbf;
L_78fba2: /* 78fba2: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 78fba8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78fbaa: push 0xac9758 */
  { uint32_t v = 0xac9758u; esp -= 4; W32(esp, v); }
/* 78fbaf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78fbb0: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x78fbb6u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 78fbb6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78fbb9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78fbba: call 0x6c5ab0 */
  esp -= 4; W32(esp, 0x78fbbfu); SPILL(); f_6c5ab0(); if (g_unwind) return; RELOAD();
L_78fbbf: /* 78fbbf: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 78fbc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78fbc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78fbc7: call 0x6c619f */
  esp -= 4; W32(esp, 0x78fbccu); SPILL(); f_6c619f(); if (g_unwind) return; RELOAD();
/* 78fbcc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78fbcf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78fbd0: call 0x6c7513 */
  esp -= 4; W32(esp, 0x78fbd5u); SPILL(); f_6c7513(); if (g_unwind) return; RELOAD();
/* 78fbd5: mov eax, dword ptr [esi + 0x30c] */
  eax = R32((uint32_t)(esi + 0x30cu));
/* 78fbdb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78fbde: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78fbdf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78fbe0: mov dword ptr [eax + 0x28], 0 */
  W32((uint32_t)(eax + 0x28u), 0x0u);
/* 78fbe7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78fbee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78fbef: mov esp, ebp */
  esp = ebp;
/* 78fbf1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78fbf2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_78fbf5(void) {
  LOAD_REGS();
L_78fbf5: /* 78fbf5: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78fbf8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78fbfd: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 78fc00: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78fc01: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 78fc04: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78fc09u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78fc09(); return;
}

void f_78fc09(void) {
  LOAD_REGS();
L_78fc09: /* 78fc09: push 0xa0a0a0 */
  { uint32_t v = 0xa0a0a0u; esp -= 4; W32(esp, v); }
/* 78fc0e: push 0xac9804 */
  { uint32_t v = 0xac9804u; esp -= 4; W32(esp, v); }
/* 78fc13: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78fc19u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78fc19: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78fc1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78fc1e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78fc20: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78fc25u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_78fc25: guest_badaddr(0x78fc25); return;
}

void f_78fc80(void) {
  LOAD_REGS();
L_78fc80: /* 78fc80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78fc81: mov ebp, esp */
  ebp = esp;
/* 78fc83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 78fc85: push 0x9ccda0 */
  { uint32_t v = 0x9ccda0u; esp -= 4; W32(esp, v); }
/* 78fc8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78fc90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78fc91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78fc98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78fc9b: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78fca0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78fca2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78fca3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78fca4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78fca5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78fca8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78fcaf: je 0x78fce2 */
  if (zf) goto L_78fce2;
L_78fcb1: /* 78fcb1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 78fcb4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 78fcb6: mov ecx, esi */
  ecx = esi;
/* 78fcb8: call dword ptr [eax + 0x13c] */
  { uint32_t t = R32((uint32_t)(eax + 0x13cu)); esp -= 4; W32(esp, 0x78fcbeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78fcbe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78fcc0: je 0x78fcf5 */
  if (zf) goto L_78fcf5;
L_78fcc2: /* 78fcc2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 78fcc4: mov ecx, esi */
  ecx = esi;
/* 78fcc6: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x78fcccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78fccc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78fccd: call 0x925ce0 */
  esp -= 4; W32(esp, 0x78fcd2u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 78fcd2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78fcd4: je 0x78fcdc */
  if (zf) goto L_78fcdc;
L_78fcd6: /* 78fcd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78fcd7: call 0x6c5ab0 */
  esp -= 4; W32(esp, 0x78fcdcu); SPILL(); f_6c5ab0(); if (g_unwind) return; RELOAD();
L_78fcdc: /* 78fcdc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78fcdd: call 0x6c7824 */
  esp -= 4; W32(esp, 0x78fce2u); SPILL(); f_6c7824(); if (g_unwind) return; RELOAD();
L_78fce2: /* 78fce2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78fce5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78fcec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78fced: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78fcee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78fcef: mov esp, ebp */
  esp = ebp;
/* 78fcf1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78fcf2: ret 4 */
  esp += 8; SPILL(); return;
L_78fcf5: /* 78fcf5: mov ecx, dword ptr [esi + 0xec] */
  ecx = R32((uint32_t)(esi + 0xecu));
/* 78fcfb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78fcfd: je 0x78fd36 */
  if (zf) goto L_78fd36;
L_78fcff: /* 78fcff: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 78fd04: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x78fd0au); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 78fd0a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78fd0c: je 0x78fd36 */
  if (zf) goto L_78fd36;
L_78fd0e: /* 78fd0e: mov eax, dword ptr [esi + 0xec] */
  eax = R32((uint32_t)(esi + 0xecu));
/* 78fd14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78fd15: call 0x6c8116 */
  esp -= 4; W32(esp, 0x78fd1au); SPILL(); f_6c8116(); if (g_unwind) return; RELOAD();
/* 78fd1a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78fd1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78fd1e: call 0x6c458e */
  esp -= 4; W32(esp, 0x78fd23u); SPILL(); f_6c458e(); if (g_unwind) return; RELOAD();
/* 78fd23: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78fd26: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78fd2d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78fd2e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78fd2f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78fd30: mov esp, ebp */
  esp = ebp;
/* 78fd32: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78fd33: ret 4 */
  esp += 8; SPILL(); return;
L_78fd36: /* 78fd36: push 0xb1c480 */
  { uint32_t v = 0xb1c480u; esp -= 4; W32(esp, v); }
/* 78fd3b: mov ecx, esi */
  ecx = esi;
/* 78fd3d: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x78fd43u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 78fd43: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78fd45: je 0x78fce2 */
  if (zf) goto L_78fce2;
L_78fd47: /* 78fd47: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 78fd49: mov ecx, esi */
  ecx = esi;
/* 78fd4b: call dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); esp -= 4; W32(esp, 0x78fd51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78fd51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78fd53: je 0x78fce2 */
  if (zf) goto L_78fce2;
L_78fd55: /* 78fd55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78fd56: call 0x6c9417 */
  esp -= 4; W32(esp, 0x78fd5bu); SPILL(); f_6c9417(); if (g_unwind) return; RELOAD();
/* 78fd5b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78fd5e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78fd5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78fd60: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78fd67: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78fd68: mov esp, ebp */
  esp = ebp;
/* 78fd6a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78fd6b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_78fd6e(void) {
  LOAD_REGS();
L_78fd6e: /* 78fd6e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78fd71: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78fd76: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 78fd79: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78fd7a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 78fd7d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78fd82u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78fd82(); return;
}

void f_78fd82(void) {
  LOAD_REGS();
L_78fd82: /* 78fd82: push 0xa0a0d0 */
  { uint32_t v = 0xa0a0d0u; esp -= 4; W32(esp, v); }
/* 78fd87: push 0xac997c */
  { uint32_t v = 0xac997cu; esp -= 4; W32(esp, v); }
/* 78fd8c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78fd92u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78fd92: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78fd95: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78fd97: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78fd99: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78fd9eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_78fd9e: guest_badaddr(0x78fd9e); return;
}

void f_78fdf0(void) {
  LOAD_REGS();
L_78fdf0: /* 78fdf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78fdf1: mov ebp, esp */
  ebp = esp;
/* 78fdf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 78fdf5: push 0x9ccdb0 */
  { uint32_t v = 0x9ccdb0u; esp -= 4; W32(esp, v); }
/* 78fdfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78fe00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78fe01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78fe08: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78fe0b: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78fe10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78fe11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78fe12: xor ebx, ebx */
  ebx = 0;
/* 78fe14: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78fe16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78fe17: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78fe1a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 78fe1d: je 0x790244 */
  if (zf) goto L_790244;
L_78fe23: /* 78fe23: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 78fe26: cmp dword ptr [esi + 0x115c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x115cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78fe2c: je 0x790244 */
  if (zf) goto L_790244;
L_78fe32: /* 78fe32: cmp dword ptr [esi + 0x1160], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1160u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78fe38: je 0x790244 */
  if (zf) goto L_790244;
L_78fe3e: /* 78fe3e: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 78fe43: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78fe45: push 0xac9c38 */
  { uint32_t v = 0xac9c38u; esp -= 4; W32(esp, v); }
/* 78fe4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78fe4b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x78fe51u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 78fe51: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78fe54: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 78fe58: xor edi, edi */
  edi = 0;
/* 78fe5a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_78fe60: /* 78fe60: cmp edi, dword ptr [esi + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78fe63: jge 0x78fea8 */
  if ((sf == of)) goto L_78fea8;
L_78fe65: /* 78fe65: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 78fe68: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 78fe6b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78fe6d: je 0x78fe75 */
  if (zf) goto L_78fe75;
L_78fe6f: /* 78fe6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78fe70: call 0x6c20a4 */
  esp -= 4; W32(esp, 0x78fe75u); SPILL(); f_6c20a4(); if (g_unwind) return; RELOAD();
L_78fe75: /* 78fe75: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 78fe76: jmp 0x78fe60 */
  goto L_78fe60;
L_78fea8: /* 78fea8: cmp dword ptr [esi + 0x1188], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1188u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78feae: mov edi, dword ptr [0xcfa2fc] */
  edi = R32((uint32_t)(0xcfa2fcu));
/* 78feb4: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 78feb7: je 0x78fecd */
  if (zf) goto L_78fecd;
L_78feb9: /* 78feb9: push 0x5e2 */
  { uint32_t v = 0x5e2u; esp -= 4; W32(esp, v); }
/* 78febe: push 0xac9c8c */
  { uint32_t v = 0xac9c8cu; esp -= 4; W32(esp, v); }
/* 78fec3: push 0xac9ca0 */
  { uint32_t v = 0xac9ca0u; esp -= 4; W32(esp, v); }
/* 78fec8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x78fecau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78feca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78fecd: /* 78fecd: cmp dword ptr [esi + 0x1170], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1170u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78fed3: je 0x78fee9 */
  if (zf) goto L_78fee9;
L_78fed5: /* 78fed5: push 0x5e3 */
  { uint32_t v = 0x5e3u; esp -= 4; W32(esp, v); }
/* 78feda: push 0xac9cc4 */
  { uint32_t v = 0xac9cc4u; esp -= 4; W32(esp, v); }
/* 78fedf: push 0xac9cd8 */
  { uint32_t v = 0xac9cd8u; esp -= 4; W32(esp, v); }
/* 78fee4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x78fee6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78fee6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78fee9: /* 78fee9: mov eax, dword ptr [esi + 0x1168] */
  eax = R32((uint32_t)(esi + 0x1168u));
/* 78feef: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78fef1: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 78fef5: je 0x78ffcc */
  if (zf) goto L_78ffcc;
L_78fefb: /* 78fefb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78fefc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78fefd: call 0x6c619f */
  esp -= 4; W32(esp, 0x78ff02u); SPILL(); f_6c619f(); if (g_unwind) return; RELOAD();
/* 78ff02: mov edx, dword ptr [esi + 0x1168] */
  edx = R32((uint32_t)(esi + 0x1168u));
/* 78ff08: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78ff0b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78ff0c: call 0x9287f0 */
  esp -= 4; W32(esp, 0x78ff11u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 78ff11: mov ebx, eax */
  ebx = eax;
/* 78ff13: mov eax, dword ptr [esi + 0x1168] */
  eax = R32((uint32_t)(esi + 0x1168u));
/* 78ff19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78ff1a: call 0x928730 */
  esp -= 4; W32(esp, 0x78ff1fu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 78ff1f: mov ecx, dword ptr [esi + 0x1168] */
  ecx = R32((uint32_t)(esi + 0x1168u));
/* 78ff25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78ff26: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 78ff29: call 0x9287a0 */
  esp -= 4; W32(esp, 0x78ff2eu); SPILL(); f_9287a0(); if (g_unwind) return; RELOAD();
/* 78ff2e: mov edi, eax */
  edi = eax;
/* 78ff30: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 78ff33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78ff35: je 0x78ff4f */
  if (zf) goto L_78ff4f;
L_78ff37: /* 78ff37: push 0x5f1 */
  { uint32_t v = 0x5f1u; esp -= 4; W32(esp, v); }
/* 78ff3c: push 0xac9cf4 */
  { uint32_t v = 0xac9cf4u; esp -= 4; W32(esp, v); }
/* 78ff41: push 0xac9d08 */
  { uint32_t v = 0xac9d08u; esp -= 4; W32(esp, v); }
/* 78ff46: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78ff4cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78ff4c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78ff4f: /* 78ff4f: cmp dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78ff52: je 0x78ff6c */
  if (zf) goto L_78ff6c;
L_78ff54: /* 78ff54: push 0x5f2 */
  { uint32_t v = 0x5f2u; esp -= 4; W32(esp, v); }
/* 78ff59: push 0xac9d28 */
  { uint32_t v = 0xac9d28u; esp -= 4; W32(esp, v); }
/* 78ff5e: push 0xac9d3c */
  { uint32_t v = 0xac9d3cu; esp -= 4; W32(esp, v); }
/* 78ff63: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78ff69u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78ff69: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78ff6c: /* 78ff6c: mov ecx, edi */
  ecx = edi;
/* 78ff6e: call 0x6c6dde */
  esp -= 4; W32(esp, 0x78ff73u); SPILL(); f_6c6dde(); if (g_unwind) return; RELOAD();
/* 78ff73: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 78ff79: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 78ff7b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 78ff7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78ff7e: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x78ff81u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78ff81: mov ecx, dword ptr [esi + 0x1168] */
  ecx = R32((uint32_t)(esi + 0x1168u));
/* 78ff87: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78ff88: call 0x928510 */
  esp -= 4; W32(esp, 0x78ff8du); SPILL(); f_928510(); if (g_unwind) return; RELOAD();
/* 78ff8d: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78ff92: dec dword ptr [eax + 0x15230] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15230u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax + 0x15230u), r);
  }
/* 78ff98: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78ff99: mov dword ptr [esi + 0x1168], 0 */
  W32((uint32_t)(esi + 0x1168u), 0x0u);
/* 78ffa3: call 0x92a810 */
  esp -= 4; W32(esp, 0x78ffa8u); SPILL(); f_92a810(); if (g_unwind) return; RELOAD();
/* 78ffa8: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78ffad: mov ecx, dword ptr [eax + 0x15234] */
  ecx = R32((uint32_t)(eax + 0x15234u));
/* 78ffb3: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 78ffb6: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 78ffb7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78ffb8: mov dword ptr [eax + 0x15234], ecx */
  W32((uint32_t)(eax + 0x15234u), ecx);
/* 78ffbe: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x78ffc4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78ffc4: mov edi, dword ptr [0xcfa2fc] */
  edi = R32((uint32_t)(0xcfa2fcu));
/* 78ffca: xor ebx, ebx */
  ebx = 0;
L_78ffcc: /* 78ffcc: mov eax, dword ptr [esi + 0x1160] */
  eax = R32((uint32_t)(esi + 0x1160u));
/* 78ffd2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78ffd4: je 0x78ffe2 */
  if (zf) goto L_78ffe2;
L_78ffd6: /* 78ffd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78ffd7: call 0x925d90 */
  esp -= 4; W32(esp, 0x78ffdcu); SPILL(); f_925d90(); if (g_unwind) return; RELOAD();
/* 78ffdc: mov dword ptr [esi + 0x1160], ebx */
  W32((uint32_t)(esi + 0x1160u), ebx);
L_78ffe2: /* 78ffe2: cmp dword ptr [esi + 0x1194], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1194u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78ffe8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 78ffeb: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 78ffef: je 0x790005 */
  if (zf) goto L_790005;
L_78fff1: /* 78fff1: push 0x60d */
  { uint32_t v = 0x60du; esp -= 4; W32(esp, v); }
/* 78fff6: push 0xac9d60 */
  { uint32_t v = 0xac9d60u; esp -= 4; W32(esp, v); }
/* 78fffb: push 0xac9d74 */
  { uint32_t v = 0xac9d74u; esp -= 4; W32(esp, v); }
/* 790000: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x790002u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 790002: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_790005: /* 790005: mov eax, dword ptr [esi + 0x115c] */
  eax = R32((uint32_t)(esi + 0x115cu));
/* 79000b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79000d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 790010: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 790014: je 0x7900b0 */
  if (zf) goto L_7900b0;
L_79001a: /* 79001a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79001b: call 0x912e40 */
  esp -= 4; W32(esp, 0x790020u); SPILL(); f_912e40(); if (g_unwind) return; RELOAD();
/* 790020: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 790022: je 0x790050 */
  if (zf) goto L_790050;
L_790024: /* 790024: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 79002a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79002c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79002d: push 0xac9da0 */
  { uint32_t v = 0xac9da0u; esp -= 4; W32(esp, v); }
/* 790032: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 790033: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x790039u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 790039: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79003c: push 0x619 */
  { uint32_t v = 0x619u; esp -= 4; W32(esp, v); }
/* 790041: push 0xac9e0c */
  { uint32_t v = 0xac9e0cu; esp -= 4; W32(esp, v); }
/* 790046: push 0xac9e20 */
  { uint32_t v = 0xac9e20u; esp -= 4; W32(esp, v); }
/* 79004b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79004du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79004d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_790050: /* 790050: mov eax, dword ptr [esi + 0x115c] */
  eax = R32((uint32_t)(esi + 0x115cu));
/* 790056: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790057: call 0x912e60 */
  esp -= 4; W32(esp, 0x79005cu); SPILL(); f_912e60(); if (g_unwind) return; RELOAD();
/* 79005c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79005e: je 0x79009e */
  if (zf) goto L_79009e;
L_790060: /* 790060: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 790066: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 790068: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790069: push 0xac9e30 */
  { uint32_t v = 0xac9e30u; esp -= 4; W32(esp, v); }
/* 79006e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79006f: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x790075u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 790075: mov eax, dword ptr [esi + 0x115c] */
  eax = R32((uint32_t)(esi + 0x115cu));
/* 79007b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79007e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79007f: push 0x78c280 */
  { uint32_t v = 0x78c280u; esp -= 4; W32(esp, v); }
/* 790084: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790085: call 0x913a30 */
  esp -= 4; W32(esp, 0x79008au); SPILL(); f_913a30(); if (g_unwind) return; RELOAD();
/* 79008a: push 0x622 */
  { uint32_t v = 0x622u; esp -= 4; W32(esp, v); }
/* 79008f: push 0xac9ea8 */
  { uint32_t v = 0xac9ea8u; esp -= 4; W32(esp, v); }
/* 790094: push 0xac9ebc */
  { uint32_t v = 0xac9ebcu; esp -= 4; W32(esp, v); }
/* 790099: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79009bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79009b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_79009e: /* 79009e: mov eax, dword ptr [esi + 0x115c] */
  eax = R32((uint32_t)(esi + 0x115cu));
/* 7900a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7900a5: call 0x912bb0 */
  esp -= 4; W32(esp, 0x7900aau); SPILL(); f_912bb0(); if (g_unwind) return; RELOAD();
/* 7900aa: mov dword ptr [esi + 0x115c], ebx */
  W32((uint32_t)(esi + 0x115cu), ebx);
L_7900b0: /* 7900b0: mov eax, dword ptr [esi + 0x1164] */
  eax = R32((uint32_t)(esi + 0x1164u));
/* 7900b6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7900b8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7900bb: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 7900bf: je 0x7900d5 */
  if (zf) goto L_7900d5;
L_7900c1: /* 7900c1: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7900c7: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7900c9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7900cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7900cc: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7900cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7900cf: mov dword ptr [esi + 0x1164], ebx */
  W32((uint32_t)(esi + 0x1164u), ebx);
L_7900d5: /* 7900d5: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7900d8: call 0x6c560f */
  esp -= 4; W32(esp, 0x7900ddu); SPILL(); f_6c560f(); if (g_unwind) return; RELOAD();
/* 7900dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7900e0: /* 7900e0: cmp dword ptr [esi + 0x117c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x117cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7900e6: jle 0x79022e */
  if ((zf || sf != of)) goto L_79022e;
L_7900ec: /* 7900ec: mov eax, dword ptr [esi + 0x117c] */
  eax = R32((uint32_t)(esi + 0x117cu));
/* 7900f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7900f4: mov edx, dword ptr [esi + 0x1178] */
  edx = R32((uint32_t)(esi + 0x1178u));
/* 7900fa: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 7900fc: lea edi, [esi + 0x1178] */
  edi = (uint32_t)(esi + 0x1178u);
/* 790102: jge 0x79011c */
  if ((sf == of)) goto L_79011c;
L_790104: /* 790104: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 790109: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 79010e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 790113: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x790119u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 790119: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_79011c: /* 79011c: cmp dword ptr [edi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 790120: jge 0x79013a */
  if ((sf == of)) goto L_79013a;
L_790122: /* 790122: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 790127: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 79012c: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 790131: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x790137u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 790137: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_79013a: /* 79013a: xor eax, eax */
  eax = 0;
/* 79013c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_790140: /* 790140: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 790143: jge 0x79020c */
  if ((sf == of)) goto L_79020c;
L_790149: /* 790149: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 79014a: jmp 0x790140 */
  goto L_790140;
L_79020c: /* 79020c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 79020e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 790210: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790212: mov ecx, edi */
  ecx = edi;
/* 790214: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x79021au); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 79021a: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 79021f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 790221: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 790223: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 790224: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x790227u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 790227: xor ebx, ebx */
  ebx = 0;
/* 790229: jmp 0x7900e0 */
  goto L_7900e0;
L_79022e: /* 79022e: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 790233: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 790235: push 0xac9ee0 */
  { uint32_t v = 0xac9ee0u; esp -= 4; W32(esp, v); }
/* 79023a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79023b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x790241u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 790241: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_790244: /* 790244: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 790247: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 790248: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 790249: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 790250: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 790251: mov esp, ebp */
  esp = ebp;
/* 790253: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 790254: ret 4 */
  esp += 8; SPILL(); return;
}

void f_78fe78(void) {
  LOAD_REGS();
L_78fe78: /* 78fe78: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 78fe7b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78fe80: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 78fe83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78fe84: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 78fe87: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78fe8cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78fe8c(); return;
}

void f_78fe8c(void) {
  LOAD_REGS();
L_78fe8c: /* 78fe8c: push 0xa0a198 */
  { uint32_t v = 0xa0a198u; esp -= 4; W32(esp, v); }
/* 78fe91: push 0xac9c84 */
  { uint32_t v = 0xac9c84u; esp -= 4; W32(esp, v); }
/* 78fe96: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78fe9cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78fe9c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78fe9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78fea1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78fea3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78fea8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 78fea8: cmp dword ptr [esi + 0x1188], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1188u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78feae: mov edi, dword ptr [0xcfa2fc] */
  edi = R32((uint32_t)(0xcfa2fcu));
/* 78feb4: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 78feb7: je 0x78fecd */
  if (zf) goto L_78fecd;
L_78feb9: /* 78feb9: push 0x5e2 */
  { uint32_t v = 0x5e2u; esp -= 4; W32(esp, v); }
/* 78febe: push 0xac9c8c */
  { uint32_t v = 0xac9c8cu; esp -= 4; W32(esp, v); }
/* 78fec3: push 0xac9ca0 */
  { uint32_t v = 0xac9ca0u; esp -= 4; W32(esp, v); }
/* 78fec8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x78fecau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78feca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78fecd: /* 78fecd: cmp dword ptr [esi + 0x1170], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1170u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78fed3: je 0x78fee9 */
  if (zf) goto L_78fee9;
L_78fed5: /* 78fed5: push 0x5e3 */
  { uint32_t v = 0x5e3u; esp -= 4; W32(esp, v); }
/* 78feda: push 0xac9cc4 */
  { uint32_t v = 0xac9cc4u; esp -= 4; W32(esp, v); }
/* 78fedf: push 0xac9cd8 */
  { uint32_t v = 0xac9cd8u; esp -= 4; W32(esp, v); }
/* 78fee4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x78fee6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78fee6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78fee9: /* 78fee9: mov eax, dword ptr [esi + 0x1168] */
  eax = R32((uint32_t)(esi + 0x1168u));
/* 78feef: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78fef1: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 78fef5: je 0x78ffcc */
  if (zf) goto L_78ffcc;
L_78fefb: /* 78fefb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78fefc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78fefd: call 0x6c619f */
  esp -= 4; W32(esp, 0x78ff02u); SPILL(); f_6c619f(); if (g_unwind) return; RELOAD();
/* 78ff02: mov edx, dword ptr [esi + 0x1168] */
  edx = R32((uint32_t)(esi + 0x1168u));
/* 78ff08: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78ff0b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78ff0c: call 0x9287f0 */
  esp -= 4; W32(esp, 0x78ff11u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 78ff11: mov ebx, eax */
  ebx = eax;
/* 78ff13: mov eax, dword ptr [esi + 0x1168] */
  eax = R32((uint32_t)(esi + 0x1168u));
/* 78ff19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78ff1a: call 0x928730 */
  esp -= 4; W32(esp, 0x78ff1fu); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 78ff1f: mov ecx, dword ptr [esi + 0x1168] */
  ecx = R32((uint32_t)(esi + 0x1168u));
/* 78ff25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78ff26: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 78ff29: call 0x9287a0 */
  esp -= 4; W32(esp, 0x78ff2eu); SPILL(); f_9287a0(); if (g_unwind) return; RELOAD();
/* 78ff2e: mov edi, eax */
  edi = eax;
/* 78ff30: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 78ff33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78ff35: je 0x78ff4f */
  if (zf) goto L_78ff4f;
L_78ff37: /* 78ff37: push 0x5f1 */
  { uint32_t v = 0x5f1u; esp -= 4; W32(esp, v); }
/* 78ff3c: push 0xac9cf4 */
  { uint32_t v = 0xac9cf4u; esp -= 4; W32(esp, v); }
/* 78ff41: push 0xac9d08 */
  { uint32_t v = 0xac9d08u; esp -= 4; W32(esp, v); }
/* 78ff46: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78ff4cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78ff4c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78ff4f: /* 78ff4f: cmp dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78ff52: je 0x78ff6c */
  if (zf) goto L_78ff6c;
L_78ff54: /* 78ff54: push 0x5f2 */
  { uint32_t v = 0x5f2u; esp -= 4; W32(esp, v); }
/* 78ff59: push 0xac9d28 */
  { uint32_t v = 0xac9d28u; esp -= 4; W32(esp, v); }
/* 78ff5e: push 0xac9d3c */
  { uint32_t v = 0xac9d3cu; esp -= 4; W32(esp, v); }
/* 78ff63: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78ff69u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78ff69: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78ff6c: /* 78ff6c: mov ecx, edi */
  ecx = edi;
/* 78ff6e: call 0x6c6dde */
  esp -= 4; W32(esp, 0x78ff73u); SPILL(); f_6c6dde(); if (g_unwind) return; RELOAD();
/* 78ff73: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 78ff79: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 78ff7b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 78ff7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78ff7e: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x78ff81u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78ff81: mov ecx, dword ptr [esi + 0x1168] */
  ecx = R32((uint32_t)(esi + 0x1168u));
/* 78ff87: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78ff88: call 0x928510 */
  esp -= 4; W32(esp, 0x78ff8du); SPILL(); f_928510(); if (g_unwind) return; RELOAD();
/* 78ff8d: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78ff92: dec dword ptr [eax + 0x15230] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15230u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax + 0x15230u), r);
  }
/* 78ff98: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78ff99: mov dword ptr [esi + 0x1168], 0 */
  W32((uint32_t)(esi + 0x1168u), 0x0u);
/* 78ffa3: call 0x92a810 */
  esp -= 4; W32(esp, 0x78ffa8u); SPILL(); f_92a810(); if (g_unwind) return; RELOAD();
/* 78ffa8: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78ffad: mov ecx, dword ptr [eax + 0x15234] */
  ecx = R32((uint32_t)(eax + 0x15234u));
/* 78ffb3: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 78ffb6: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 78ffb7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78ffb8: mov dword ptr [eax + 0x15234], ecx */
  W32((uint32_t)(eax + 0x15234u), ecx);
/* 78ffbe: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x78ffc4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78ffc4: mov edi, dword ptr [0xcfa2fc] */
  edi = R32((uint32_t)(0xcfa2fcu));
/* 78ffca: xor ebx, ebx */
  ebx = 0;
L_78ffcc: /* 78ffcc: mov eax, dword ptr [esi + 0x1160] */
  eax = R32((uint32_t)(esi + 0x1160u));
/* 78ffd2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78ffd4: je 0x78ffe2 */
  if (zf) goto L_78ffe2;
L_78ffd6: /* 78ffd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78ffd7: call 0x925d90 */
  esp -= 4; W32(esp, 0x78ffdcu); SPILL(); f_925d90(); if (g_unwind) return; RELOAD();
/* 78ffdc: mov dword ptr [esi + 0x1160], ebx */
  W32((uint32_t)(esi + 0x1160u), ebx);
L_78ffe2: /* 78ffe2: cmp dword ptr [esi + 0x1194], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1194u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78ffe8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 78ffeb: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 78ffef: je 0x790005 */
  if (zf) goto L_790005;
L_78fff1: /* 78fff1: push 0x60d */
  { uint32_t v = 0x60du; esp -= 4; W32(esp, v); }
/* 78fff6: push 0xac9d60 */
  { uint32_t v = 0xac9d60u; esp -= 4; W32(esp, v); }
/* 78fffb: push 0xac9d74 */
  { uint32_t v = 0xac9d74u; esp -= 4; W32(esp, v); }
/* 790000: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x790002u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 790002: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_790005: /* 790005: mov eax, dword ptr [esi + 0x115c] */
  eax = R32((uint32_t)(esi + 0x115cu));
/* 79000b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79000d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 790010: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 790014: je 0x7900b0 */
  if (zf) goto L_7900b0;
L_79001a: /* 79001a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79001b: call 0x912e40 */
  esp -= 4; W32(esp, 0x790020u); SPILL(); f_912e40(); if (g_unwind) return; RELOAD();
/* 790020: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 790022: je 0x790050 */
  if (zf) goto L_790050;
L_790024: /* 790024: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 79002a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79002c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79002d: push 0xac9da0 */
  { uint32_t v = 0xac9da0u; esp -= 4; W32(esp, v); }
/* 790032: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 790033: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x790039u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 790039: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79003c: push 0x619 */
  { uint32_t v = 0x619u; esp -= 4; W32(esp, v); }
/* 790041: push 0xac9e0c */
  { uint32_t v = 0xac9e0cu; esp -= 4; W32(esp, v); }
/* 790046: push 0xac9e20 */
  { uint32_t v = 0xac9e20u; esp -= 4; W32(esp, v); }
/* 79004b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79004du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79004d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_790050: /* 790050: mov eax, dword ptr [esi + 0x115c] */
  eax = R32((uint32_t)(esi + 0x115cu));
/* 790056: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790057: call 0x912e60 */
  esp -= 4; W32(esp, 0x79005cu); SPILL(); f_912e60(); if (g_unwind) return; RELOAD();
/* 79005c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79005e: je 0x79009e */
  if (zf) goto L_79009e;
L_790060: /* 790060: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 790066: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 790068: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790069: push 0xac9e30 */
  { uint32_t v = 0xac9e30u; esp -= 4; W32(esp, v); }
/* 79006e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79006f: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x790075u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 790075: mov eax, dword ptr [esi + 0x115c] */
  eax = R32((uint32_t)(esi + 0x115cu));
/* 79007b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79007e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79007f: push 0x78c280 */
  { uint32_t v = 0x78c280u; esp -= 4; W32(esp, v); }
/* 790084: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790085: call 0x913a30 */
  esp -= 4; W32(esp, 0x79008au); SPILL(); f_913a30(); if (g_unwind) return; RELOAD();
/* 79008a: push 0x622 */
  { uint32_t v = 0x622u; esp -= 4; W32(esp, v); }
/* 79008f: push 0xac9ea8 */
  { uint32_t v = 0xac9ea8u; esp -= 4; W32(esp, v); }
/* 790094: push 0xac9ebc */
  { uint32_t v = 0xac9ebcu; esp -= 4; W32(esp, v); }
/* 790099: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79009bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79009b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_79009e: /* 79009e: mov eax, dword ptr [esi + 0x115c] */
  eax = R32((uint32_t)(esi + 0x115cu));
/* 7900a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7900a5: call 0x912bb0 */
  esp -= 4; W32(esp, 0x7900aau); SPILL(); f_912bb0(); if (g_unwind) return; RELOAD();
/* 7900aa: mov dword ptr [esi + 0x115c], ebx */
  W32((uint32_t)(esi + 0x115cu), ebx);
L_7900b0: /* 7900b0: mov eax, dword ptr [esi + 0x1164] */
  eax = R32((uint32_t)(esi + 0x1164u));
/* 7900b6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7900b8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7900bb: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 7900bf: je 0x7900d5 */
  if (zf) goto L_7900d5;
L_7900c1: /* 7900c1: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7900c7: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7900c9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7900cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7900cc: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7900cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7900cf: mov dword ptr [esi + 0x1164], ebx */
  W32((uint32_t)(esi + 0x1164u), ebx);
L_7900d5: /* 7900d5: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7900d8: call 0x6c560f */
  esp -= 4; W32(esp, 0x7900ddu); SPILL(); f_6c560f(); if (g_unwind) return; RELOAD();
/* 7900dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7900e0: /* 7900e0: cmp dword ptr [esi + 0x117c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x117cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7900e6: jle 0x79022e */
  if ((zf || sf != of)) goto L_79022e;
L_7900ec: /* 7900ec: mov eax, dword ptr [esi + 0x117c] */
  eax = R32((uint32_t)(esi + 0x117cu));
/* 7900f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7900f4: mov edx, dword ptr [esi + 0x1178] */
  edx = R32((uint32_t)(esi + 0x1178u));
/* 7900fa: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 7900fc: lea edi, [esi + 0x1178] */
  edi = (uint32_t)(esi + 0x1178u);
/* 790102: jge 0x79011c */
  if ((sf == of)) goto L_79011c;
L_790104: /* 790104: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 790109: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 79010e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 790113: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x790119u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 790119: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_79011c: /* 79011c: cmp dword ptr [edi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 790120: jge 0x79013a */
  if ((sf == of)) goto L_79013a;
L_790122: /* 790122: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 790127: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 79012c: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 790131: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x790137u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 790137: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_79013a: /* 79013a: xor eax, eax */
  eax = 0;
/* 79013c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_790140: /* 790140: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 790143: jge 0x79020c */
  if ((sf == of)) goto L_79020c;
L_790149: /* 790149: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 79014a: jmp 0x790140 */
  goto L_790140;
L_79020c: /* 79020c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 79020e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 790210: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790212: mov ecx, edi */
  ecx = edi;
/* 790214: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x79021au); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 79021a: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 79021f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 790221: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 790223: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 790224: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x790227u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 790227: xor ebx, ebx */
  ebx = 0;
/* 790229: jmp 0x7900e0 */
  goto L_7900e0;
L_79022e: /* 79022e: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 790233: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 790235: push 0xac9ee0 */
  { uint32_t v = 0xac9ee0u; esp -= 4; W32(esp, v); }
/* 79023a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79023b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x790241u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 790241: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 790244: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 790247: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 790248: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 790249: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 790250: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 790251: mov esp, ebp */
  esp = ebp;
/* 790253: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 790254: ret 4 */
  esp += 8; SPILL(); return;
}

void f_79004d(void) {
  LOAD_REGS();
L_79004d: /* 79004d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 790050: mov eax, dword ptr [esi + 0x115c] */
  eax = R32((uint32_t)(esi + 0x115cu));
/* 790056: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790057: call 0x912e60 */
  esp -= 4; W32(esp, 0x79005cu); SPILL(); f_912e60(); if (g_unwind) return; RELOAD();
/* 79005c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79005e: je 0x79009e */
  if (zf) goto L_79009e;
L_790060: /* 790060: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 790066: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 790068: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790069: push 0xac9e30 */
  { uint32_t v = 0xac9e30u; esp -= 4; W32(esp, v); }
/* 79006e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79006f: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x790075u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 790075: mov eax, dword ptr [esi + 0x115c] */
  eax = R32((uint32_t)(esi + 0x115cu));
/* 79007b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79007e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79007f: push 0x78c280 */
  { uint32_t v = 0x78c280u; esp -= 4; W32(esp, v); }
/* 790084: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790085: call 0x913a30 */
  esp -= 4; W32(esp, 0x79008au); SPILL(); f_913a30(); if (g_unwind) return; RELOAD();
/* 79008a: push 0x622 */
  { uint32_t v = 0x622u; esp -= 4; W32(esp, v); }
/* 79008f: push 0xac9ea8 */
  { uint32_t v = 0xac9ea8u; esp -= 4; W32(esp, v); }
/* 790094: push 0xac9ebc */
  { uint32_t v = 0xac9ebcu; esp -= 4; W32(esp, v); }
/* 790099: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79009bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79009b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_79009e: /* 79009e: mov eax, dword ptr [esi + 0x115c] */
  eax = R32((uint32_t)(esi + 0x115cu));
/* 7900a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7900a5: call 0x912bb0 */
  esp -= 4; W32(esp, 0x7900aau); SPILL(); f_912bb0(); if (g_unwind) return; RELOAD();
/* 7900aa: mov dword ptr [esi + 0x115c], ebx */
  W32((uint32_t)(esi + 0x115cu), ebx);
/* 7900b0: mov eax, dword ptr [esi + 0x1164] */
  eax = R32((uint32_t)(esi + 0x1164u));
/* 7900b6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7900b8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7900bb: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 7900bf: je 0x7900d5 */
  if (zf) goto L_7900d5;
L_7900c1: /* 7900c1: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7900c7: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7900c9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7900cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7900cc: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7900cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7900cf: mov dword ptr [esi + 0x1164], ebx */
  W32((uint32_t)(esi + 0x1164u), ebx);
L_7900d5: /* 7900d5: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7900d8: call 0x6c560f */
  esp -= 4; W32(esp, 0x7900ddu); SPILL(); f_6c560f(); if (g_unwind) return; RELOAD();
/* 7900dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7900e0: /* 7900e0: cmp dword ptr [esi + 0x117c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x117cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7900e6: jle 0x79022e */
  if ((zf || sf != of)) goto L_79022e;
L_7900ec: /* 7900ec: mov eax, dword ptr [esi + 0x117c] */
  eax = R32((uint32_t)(esi + 0x117cu));
/* 7900f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7900f4: mov edx, dword ptr [esi + 0x1178] */
  edx = R32((uint32_t)(esi + 0x1178u));
/* 7900fa: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 7900fc: lea edi, [esi + 0x1178] */
  edi = (uint32_t)(esi + 0x1178u);
/* 790102: jge 0x79011c */
  if ((sf == of)) goto L_79011c;
L_790104: /* 790104: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 790109: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 79010e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 790113: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x790119u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 790119: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_79011c: /* 79011c: cmp dword ptr [edi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 790120: jge 0x79013a */
  if ((sf == of)) goto L_79013a;
L_790122: /* 790122: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 790127: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 79012c: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 790131: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x790137u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 790137: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_79013a: /* 79013a: xor eax, eax */
  eax = 0;
/* 79013c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_790140: /* 790140: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 790143: jge 0x79020c */
  if ((sf == of)) goto L_79020c;
L_790149: /* 790149: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 79014a: jmp 0x790140 */
  goto L_790140;
L_79020c: /* 79020c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 79020e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 790210: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790212: mov ecx, edi */
  ecx = edi;
/* 790214: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x79021au); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 79021a: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 79021f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 790221: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 790223: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 790224: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x790227u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 790227: xor ebx, ebx */
  ebx = 0;
/* 790229: jmp 0x7900e0 */
  goto L_7900e0;
L_79022e: /* 79022e: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 790233: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 790235: push 0xac9ee0 */
  { uint32_t v = 0xac9ee0u; esp -= 4; W32(esp, v); }
/* 79023a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79023b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x790241u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 790241: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 790244: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 790247: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 790248: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 790249: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 790250: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 790251: mov esp, ebp */
  esp = ebp;
/* 790253: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 790254: ret 4 */
  esp += 8; SPILL(); return;
}

void f_790066(void) {
  LOAD_REGS();
L_790066: /* 790066: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 790068: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790069: push 0xac9e30 */
  { uint32_t v = 0xac9e30u; esp -= 4; W32(esp, v); }
/* 79006e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79006f: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x790075u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 790075: mov eax, dword ptr [esi + 0x115c] */
  eax = R32((uint32_t)(esi + 0x115cu));
/* 79007b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79007e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79007f: push 0x78c280 */
  { uint32_t v = 0x78c280u; esp -= 4; W32(esp, v); }
/* 790084: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790085: call 0x913a30 */
  esp -= 4; W32(esp, 0x79008au); SPILL(); f_913a30(); if (g_unwind) return; RELOAD();
/* 79008a: push 0x622 */
  { uint32_t v = 0x622u; esp -= 4; W32(esp, v); }
/* 79008f: push 0xac9ea8 */
  { uint32_t v = 0xac9ea8u; esp -= 4; W32(esp, v); }
/* 790094: push 0xac9ebc */
  { uint32_t v = 0xac9ebcu; esp -= 4; W32(esp, v); }
/* 790099: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79009bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79009b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79009e: mov eax, dword ptr [esi + 0x115c] */
  eax = R32((uint32_t)(esi + 0x115cu));
/* 7900a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7900a5: call 0x912bb0 */
  esp -= 4; W32(esp, 0x7900aau); SPILL(); f_912bb0(); if (g_unwind) return; RELOAD();
/* 7900aa: mov dword ptr [esi + 0x115c], ebx */
  W32((uint32_t)(esi + 0x115cu), ebx);
/* 7900b0: mov eax, dword ptr [esi + 0x1164] */
  eax = R32((uint32_t)(esi + 0x1164u));
/* 7900b6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7900b8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7900bb: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 7900bf: je 0x7900d5 */
  if (zf) goto L_7900d5;
L_7900c1: /* 7900c1: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7900c7: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7900c9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7900cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7900cc: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7900cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7900cf: mov dword ptr [esi + 0x1164], ebx */
  W32((uint32_t)(esi + 0x1164u), ebx);
L_7900d5: /* 7900d5: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7900d8: call 0x6c560f */
  esp -= 4; W32(esp, 0x7900ddu); SPILL(); f_6c560f(); if (g_unwind) return; RELOAD();
/* 7900dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7900e0: /* 7900e0: cmp dword ptr [esi + 0x117c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x117cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7900e6: jle 0x79022e */
  if ((zf || sf != of)) goto L_79022e;
L_7900ec: /* 7900ec: mov eax, dword ptr [esi + 0x117c] */
  eax = R32((uint32_t)(esi + 0x117cu));
/* 7900f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7900f4: mov edx, dword ptr [esi + 0x1178] */
  edx = R32((uint32_t)(esi + 0x1178u));
/* 7900fa: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 7900fc: lea edi, [esi + 0x1178] */
  edi = (uint32_t)(esi + 0x1178u);
/* 790102: jge 0x79011c */
  if ((sf == of)) goto L_79011c;
L_790104: /* 790104: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 790109: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 79010e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 790113: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x790119u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 790119: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_79011c: /* 79011c: cmp dword ptr [edi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 790120: jge 0x79013a */
  if ((sf == of)) goto L_79013a;
L_790122: /* 790122: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 790127: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 79012c: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 790131: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x790137u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 790137: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_79013a: /* 79013a: xor eax, eax */
  eax = 0;
/* 79013c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_790140: /* 790140: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 790143: jge 0x79020c */
  if ((sf == of)) goto L_79020c;
L_790149: /* 790149: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 79014a: jmp 0x790140 */
  goto L_790140;
L_79020c: /* 79020c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 79020e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 790210: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790212: mov ecx, edi */
  ecx = edi;
/* 790214: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x79021au); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 79021a: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 79021f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 790221: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 790223: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 790224: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x790227u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 790227: xor ebx, ebx */
  ebx = 0;
/* 790229: jmp 0x7900e0 */
  goto L_7900e0;
L_79022e: /* 79022e: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 790233: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 790235: push 0xac9ee0 */
  { uint32_t v = 0xac9ee0u; esp -= 4; W32(esp, v); }
/* 79023a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79023b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x790241u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 790241: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 790244: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 790247: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 790248: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 790249: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 790250: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 790251: mov esp, ebp */
  esp = ebp;
/* 790253: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 790254: ret 4 */
  esp += 8; SPILL(); return;
}

void f_790068(void) {
  LOAD_REGS();
L_790068: /* 790068: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790069: push 0xac9e30 */
  { uint32_t v = 0xac9e30u; esp -= 4; W32(esp, v); }
/* 79006e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79006f: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x790075u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 790075: mov eax, dword ptr [esi + 0x115c] */
  eax = R32((uint32_t)(esi + 0x115cu));
/* 79007b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79007e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79007f: push 0x78c280 */
  { uint32_t v = 0x78c280u; esp -= 4; W32(esp, v); }
/* 790084: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790085: call 0x913a30 */
  esp -= 4; W32(esp, 0x79008au); SPILL(); f_913a30(); if (g_unwind) return; RELOAD();
/* 79008a: push 0x622 */
  { uint32_t v = 0x622u; esp -= 4; W32(esp, v); }
/* 79008f: push 0xac9ea8 */
  { uint32_t v = 0xac9ea8u; esp -= 4; W32(esp, v); }
/* 790094: push 0xac9ebc */
  { uint32_t v = 0xac9ebcu; esp -= 4; W32(esp, v); }
/* 790099: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79009bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79009b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79009e: mov eax, dword ptr [esi + 0x115c] */
  eax = R32((uint32_t)(esi + 0x115cu));
/* 7900a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7900a5: call 0x912bb0 */
  esp -= 4; W32(esp, 0x7900aau); SPILL(); f_912bb0(); if (g_unwind) return; RELOAD();
/* 7900aa: mov dword ptr [esi + 0x115c], ebx */
  W32((uint32_t)(esi + 0x115cu), ebx);
/* 7900b0: mov eax, dword ptr [esi + 0x1164] */
  eax = R32((uint32_t)(esi + 0x1164u));
/* 7900b6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7900b8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7900bb: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 7900bf: je 0x7900d5 */
  if (zf) goto L_7900d5;
L_7900c1: /* 7900c1: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7900c7: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7900c9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7900cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7900cc: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7900cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7900cf: mov dword ptr [esi + 0x1164], ebx */
  W32((uint32_t)(esi + 0x1164u), ebx);
L_7900d5: /* 7900d5: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7900d8: call 0x6c560f */
  esp -= 4; W32(esp, 0x7900ddu); SPILL(); f_6c560f(); if (g_unwind) return; RELOAD();
/* 7900dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7900e0: /* 7900e0: cmp dword ptr [esi + 0x117c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x117cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7900e6: jle 0x79022e */
  if ((zf || sf != of)) goto L_79022e;
L_7900ec: /* 7900ec: mov eax, dword ptr [esi + 0x117c] */
  eax = R32((uint32_t)(esi + 0x117cu));
/* 7900f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7900f4: mov edx, dword ptr [esi + 0x1178] */
  edx = R32((uint32_t)(esi + 0x1178u));
/* 7900fa: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 7900fc: lea edi, [esi + 0x1178] */
  edi = (uint32_t)(esi + 0x1178u);
/* 790102: jge 0x79011c */
  if ((sf == of)) goto L_79011c;
L_790104: /* 790104: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 790109: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 79010e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 790113: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x790119u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 790119: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_79011c: /* 79011c: cmp dword ptr [edi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 790120: jge 0x79013a */
  if ((sf == of)) goto L_79013a;
L_790122: /* 790122: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 790127: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 79012c: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 790131: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x790137u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 790137: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_79013a: /* 79013a: xor eax, eax */
  eax = 0;
/* 79013c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_790140: /* 790140: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 790143: jge 0x79020c */
  if ((sf == of)) goto L_79020c;
L_790149: /* 790149: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 79014a: jmp 0x790140 */
  goto L_790140;
L_79020c: /* 79020c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 79020e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 790210: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790212: mov ecx, edi */
  ecx = edi;
/* 790214: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x79021au); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 79021a: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 79021f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 790221: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 790223: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 790224: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x790227u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 790227: xor ebx, ebx */
  ebx = 0;
/* 790229: jmp 0x7900e0 */
  goto L_7900e0;
L_79022e: /* 79022e: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 790233: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 790235: push 0xac9ee0 */
  { uint32_t v = 0xac9ee0u; esp -= 4; W32(esp, v); }
/* 79023a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79023b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x790241u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 790241: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 790244: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 790247: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 790248: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 790249: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 790250: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 790251: mov esp, ebp */
  esp = ebp;
/* 790253: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 790254: ret 4 */
  esp += 8; SPILL(); return;
}

void f_79006e(void) {
  LOAD_REGS();
L_79006e: /* 79006e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79006f: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x790075u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 790075: mov eax, dword ptr [esi + 0x115c] */
  eax = R32((uint32_t)(esi + 0x115cu));
/* 79007b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79007e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79007f: push 0x78c280 */
  { uint32_t v = 0x78c280u; esp -= 4; W32(esp, v); }
/* 790084: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790085: call 0x913a30 */
  esp -= 4; W32(esp, 0x79008au); SPILL(); f_913a30(); if (g_unwind) return; RELOAD();
/* 79008a: push 0x622 */
  { uint32_t v = 0x622u; esp -= 4; W32(esp, v); }
/* 79008f: push 0xac9ea8 */
  { uint32_t v = 0xac9ea8u; esp -= 4; W32(esp, v); }
/* 790094: push 0xac9ebc */
  { uint32_t v = 0xac9ebcu; esp -= 4; W32(esp, v); }
/* 790099: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79009bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79009b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79009e: mov eax, dword ptr [esi + 0x115c] */
  eax = R32((uint32_t)(esi + 0x115cu));
/* 7900a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7900a5: call 0x912bb0 */
  esp -= 4; W32(esp, 0x7900aau); SPILL(); f_912bb0(); if (g_unwind) return; RELOAD();
/* 7900aa: mov dword ptr [esi + 0x115c], ebx */
  W32((uint32_t)(esi + 0x115cu), ebx);
/* 7900b0: mov eax, dword ptr [esi + 0x1164] */
  eax = R32((uint32_t)(esi + 0x1164u));
/* 7900b6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7900b8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7900bb: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 7900bf: je 0x7900d5 */
  if (zf) goto L_7900d5;
L_7900c1: /* 7900c1: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7900c7: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7900c9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7900cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7900cc: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7900cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7900cf: mov dword ptr [esi + 0x1164], ebx */
  W32((uint32_t)(esi + 0x1164u), ebx);
L_7900d5: /* 7900d5: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7900d8: call 0x6c560f */
  esp -= 4; W32(esp, 0x7900ddu); SPILL(); f_6c560f(); if (g_unwind) return; RELOAD();
/* 7900dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7900e0: /* 7900e0: cmp dword ptr [esi + 0x117c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x117cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7900e6: jle 0x79022e */
  if ((zf || sf != of)) goto L_79022e;
L_7900ec: /* 7900ec: mov eax, dword ptr [esi + 0x117c] */
  eax = R32((uint32_t)(esi + 0x117cu));
/* 7900f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7900f4: mov edx, dword ptr [esi + 0x1178] */
  edx = R32((uint32_t)(esi + 0x1178u));
/* 7900fa: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 7900fc: lea edi, [esi + 0x1178] */
  edi = (uint32_t)(esi + 0x1178u);
/* 790102: jge 0x79011c */
  if ((sf == of)) goto L_79011c;
L_790104: /* 790104: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 790109: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 79010e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 790113: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x790119u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 790119: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_79011c: /* 79011c: cmp dword ptr [edi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 790120: jge 0x79013a */
  if ((sf == of)) goto L_79013a;
L_790122: /* 790122: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 790127: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 79012c: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 790131: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x790137u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 790137: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_79013a: /* 79013a: xor eax, eax */
  eax = 0;
/* 79013c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_790140: /* 790140: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 790143: jge 0x79020c */
  if ((sf == of)) goto L_79020c;
L_790149: /* 790149: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 79014a: jmp 0x790140 */
  goto L_790140;
L_79020c: /* 79020c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 79020e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 790210: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790212: mov ecx, edi */
  ecx = edi;
/* 790214: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x79021au); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 79021a: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 79021f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 790221: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 790223: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 790224: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x790227u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 790227: xor ebx, ebx */
  ebx = 0;
/* 790229: jmp 0x7900e0 */
  goto L_7900e0;
L_79022e: /* 79022e: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 790233: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 790235: push 0xac9ee0 */
  { uint32_t v = 0xac9ee0u; esp -= 4; W32(esp, v); }
/* 79023a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79023b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x790241u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 790241: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 790244: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 790247: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 790248: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 790249: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 790250: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 790251: mov esp, ebp */
  esp = ebp;
/* 790253: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 790254: ret 4 */
  esp += 8; SPILL(); return;
}

void f_79006f(void) {
  LOAD_REGS();
L_79006f: /* 79006f: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x790075u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 790075: mov eax, dword ptr [esi + 0x115c] */
  eax = R32((uint32_t)(esi + 0x115cu));
/* 79007b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79007e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79007f: push 0x78c280 */
  { uint32_t v = 0x78c280u; esp -= 4; W32(esp, v); }
/* 790084: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790085: call 0x913a30 */
  esp -= 4; W32(esp, 0x79008au); SPILL(); f_913a30(); if (g_unwind) return; RELOAD();
/* 79008a: push 0x622 */
  { uint32_t v = 0x622u; esp -= 4; W32(esp, v); }
/* 79008f: push 0xac9ea8 */
  { uint32_t v = 0xac9ea8u; esp -= 4; W32(esp, v); }
/* 790094: push 0xac9ebc */
  { uint32_t v = 0xac9ebcu; esp -= 4; W32(esp, v); }
/* 790099: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79009bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79009b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79009e: mov eax, dword ptr [esi + 0x115c] */
  eax = R32((uint32_t)(esi + 0x115cu));
/* 7900a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7900a5: call 0x912bb0 */
  esp -= 4; W32(esp, 0x7900aau); SPILL(); f_912bb0(); if (g_unwind) return; RELOAD();
/* 7900aa: mov dword ptr [esi + 0x115c], ebx */
  W32((uint32_t)(esi + 0x115cu), ebx);
/* 7900b0: mov eax, dword ptr [esi + 0x1164] */
  eax = R32((uint32_t)(esi + 0x1164u));
/* 7900b6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7900b8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7900bb: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 7900bf: je 0x7900d5 */
  if (zf) goto L_7900d5;
L_7900c1: /* 7900c1: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7900c7: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7900c9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7900cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7900cc: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7900cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7900cf: mov dword ptr [esi + 0x1164], ebx */
  W32((uint32_t)(esi + 0x1164u), ebx);
L_7900d5: /* 7900d5: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7900d8: call 0x6c560f */
  esp -= 4; W32(esp, 0x7900ddu); SPILL(); f_6c560f(); if (g_unwind) return; RELOAD();
/* 7900dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7900e0: /* 7900e0: cmp dword ptr [esi + 0x117c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x117cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7900e6: jle 0x79022e */
  if ((zf || sf != of)) goto L_79022e;
L_7900ec: /* 7900ec: mov eax, dword ptr [esi + 0x117c] */
  eax = R32((uint32_t)(esi + 0x117cu));
/* 7900f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7900f4: mov edx, dword ptr [esi + 0x1178] */
  edx = R32((uint32_t)(esi + 0x1178u));
/* 7900fa: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 7900fc: lea edi, [esi + 0x1178] */
  edi = (uint32_t)(esi + 0x1178u);
/* 790102: jge 0x79011c */
  if ((sf == of)) goto L_79011c;
L_790104: /* 790104: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 790109: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 79010e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 790113: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x790119u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 790119: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_79011c: /* 79011c: cmp dword ptr [edi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 790120: jge 0x79013a */
  if ((sf == of)) goto L_79013a;
L_790122: /* 790122: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 790127: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 79012c: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 790131: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x790137u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 790137: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_79013a: /* 79013a: xor eax, eax */
  eax = 0;
/* 79013c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_790140: /* 790140: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 790143: jge 0x79020c */
  if ((sf == of)) goto L_79020c;
L_790149: /* 790149: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 79014a: jmp 0x790140 */
  goto L_790140;
L_79020c: /* 79020c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 79020e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 790210: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790212: mov ecx, edi */
  ecx = edi;
/* 790214: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x79021au); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 79021a: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 79021f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 790221: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 790223: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 790224: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x790227u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 790227: xor ebx, ebx */
  ebx = 0;
/* 790229: jmp 0x7900e0 */
  goto L_7900e0;
L_79022e: /* 79022e: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 790233: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 790235: push 0xac9ee0 */
  { uint32_t v = 0xac9ee0u; esp -= 4; W32(esp, v); }
/* 79023a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79023b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x790241u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 790241: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 790244: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 790247: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 790248: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 790249: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 790250: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 790251: mov esp, ebp */
  esp = ebp;
/* 790253: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 790254: ret 4 */
  esp += 8; SPILL(); return;
}

void f_79014c(void) {
  LOAD_REGS();
L_79014c: /* 79014c: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 79014f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 790154: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 790157: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 790158: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 79015b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x790160u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_790160(); return;
}

void f_790160(void) {
  LOAD_REGS();
L_790160: /* 790160: push 0xa0a170 */
  { uint32_t v = 0xa0a170u; esp -= 4; W32(esp, v); }
/* 790165: push 0xac9d50 */
  { uint32_t v = 0xac9d50u; esp -= 4; W32(esp, v); }
/* 79016a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x790170u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 790170: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 790173: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790175: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790177: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79017cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79017c(); return;
}

void f_79017c(void) {
  LOAD_REGS();
L_79017c: /* 79017c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 79017f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 790184: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 790187: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790188: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 79018b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x790190u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_790190(); return;
}

void f_790190(void) {
  LOAD_REGS();
L_790190: /* 790190: push 0xa0a158 */
  { uint32_t v = 0xa0a158u; esp -= 4; W32(esp, v); }
/* 790195: push 0xac9d94 */
  { uint32_t v = 0xac9d94u; esp -= 4; W32(esp, v); }
/* 79019a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7901a0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7901a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7901a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7901a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7901a7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7901acu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7901ac(); return;
}

void f_7901ac(void) {
  LOAD_REGS();
L_7901ac: /* 7901ac: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7901af: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7901b4: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 7901b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7901b8: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7901bb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7901c0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7901c0(); return;
}

void f_7901c0(void) {
  LOAD_REGS();
L_7901c0: /* 7901c0: push 0xa0a140 */
  { uint32_t v = 0xa0a140u; esp -= 4; W32(esp, v); }
/* 7901c5: push 0xac9ecc */
  { uint32_t v = 0xac9eccu; esp -= 4; W32(esp, v); }
/* 7901ca: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7901d0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7901d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7901d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7901d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7901d7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7901dcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7901dc(); return;
}

void f_7901dc(void) {
  LOAD_REGS();
L_7901dc: /* 7901dc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7901df: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7901e4: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7901e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7901e8: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7901eb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7901f0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7901f0(); return;
}

void f_7901f0(void) {
  LOAD_REGS();
  goto L_7901f0;
L_7900e0: /* 7900e0: cmp dword ptr [esi + 0x117c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x117cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7900e6: jle 0x79022e */
  if ((zf || sf != of)) goto L_79022e;
L_7900ec: /* 7900ec: mov eax, dword ptr [esi + 0x117c] */
  eax = R32((uint32_t)(esi + 0x117cu));
/* 7900f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7900f4: mov edx, dword ptr [esi + 0x1178] */
  edx = R32((uint32_t)(esi + 0x1178u));
/* 7900fa: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 7900fc: lea edi, [esi + 0x1178] */
  edi = (uint32_t)(esi + 0x1178u);
/* 790102: jge 0x79011c */
  if ((sf == of)) goto L_79011c;
L_790104: /* 790104: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 790109: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 79010e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 790113: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x790119u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 790119: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_79011c: /* 79011c: cmp dword ptr [edi + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 790120: jge 0x79013a */
  if ((sf == of)) goto L_79013a;
L_790122: /* 790122: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 790127: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 79012c: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 790131: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x790137u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 790137: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_79013a: /* 79013a: xor eax, eax */
  eax = 0;
/* 79013c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_790140: /* 790140: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 790143: jge 0x79020c */
  if ((sf == of)) goto L_79020c;
L_790149: /* 790149: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 79014a: jmp 0x790140 */
  goto L_790140;
L_7901f0: /* 7901f0: push 0xa0a120 */
  { uint32_t v = 0xa0a120u; esp -= 4; W32(esp, v); }
/* 7901f5: push 0xac9ed4 */
  { uint32_t v = 0xac9ed4u; esp -= 4; W32(esp, v); }
/* 7901fa: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x790200u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 790200: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 790203: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790205: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790207: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79020cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79020c: /* 79020c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 79020e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 790210: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790212: mov ecx, edi */
  ecx = edi;
/* 790214: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x79021au); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 79021a: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 79021f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 790221: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 790223: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 790224: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x790227u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 790227: xor ebx, ebx */
  ebx = 0;
/* 790229: jmp 0x7900e0 */
  goto L_7900e0;
L_79022e: /* 79022e: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 790233: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 790235: push 0xac9ee0 */
  { uint32_t v = 0xac9ee0u; esp -= 4; W32(esp, v); }
/* 79023a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79023b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x790241u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 790241: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 790244: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 790247: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 790248: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 790249: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 790250: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 790251: mov esp, ebp */
  esp = ebp;
/* 790253: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 790254: ret 4 */
  esp += 8; SPILL(); return;
}

void f_790257(void) {
  LOAD_REGS();
L_790257: /* 790257: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 79025a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79025f: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 790262: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790263: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 790266: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79026bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79026b(); return;
}

void f_79026b(void) {
  LOAD_REGS();
L_79026b: /* 79026b: push 0xa0a0f8 */
  { uint32_t v = 0xa0a0f8u; esp -= 4; W32(esp, v); }
/* 790270: push 0xac9f24 */
  { uint32_t v = 0xac9f24u; esp -= 4; W32(esp, v); }
/* 790275: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79027bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79027b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79027e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790280: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790282: call 0x99caf8 */
  esp -= 4; W32(esp, 0x790287u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_790287: guest_badaddr(0x790287); return;
}

void f_7903c0(void) {
  LOAD_REGS();
L_7903c0: /* 7903c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7903c1: mov ebp, esp */
  ebp = esp;
/* 7903c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7903c5: push 0x9ccdc8 */
  { uint32_t v = 0x9ccdc8u; esp -= 4; W32(esp, v); }
/* 7903ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7903d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7903d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7903d8: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7903db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7903dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7903dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7903de: mov esi, ecx */
  esi = ecx;
/* 7903e0: mov ebx, dword ptr [esi + 0xd0] */
  ebx = R32((uint32_t)(esi + 0xd0u));
/* 7903e6: xor edi, edi */
  edi = 0;
/* 7903e8: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7903ea: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7903ed: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7903f0: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 7903f3: je 0x79040a */
  if (zf) goto L_79040a;
L_7903f5: /* 7903f5: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 7903fa: mov ecx, ebx */
  ecx = ebx;
/* 7903fc: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x790402u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 790402: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 790404: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 790406: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 790408: mov edi, eax */
  edi = eax;
L_79040a: /* 79040a: mov eax, dword ptr [esi + 0x284] */
  eax = R32((uint32_t)(esi + 0x284u));
/* 790410: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 790413: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 790416: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 790419: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79041b: fmul dword ptr [esi + 0x290] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x290u)));
/* 790421: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 790424: fmul dword ptr [esi + 0x28c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28cu)));
/* 79042a: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 79042d: fmul dword ptr [esi + 0x288] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x288u)));
/* 790433: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 790436: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 790439: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 79043c: je 0x7905de */
  if (zf) goto L_7905de;
L_790442: /* 790442: mov ecx, dword ptr [eax + 0x168] */
  ecx = R32((uint32_t)(eax + 0x168u));
/* 790448: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79044a: je 0x7905de */
  if (zf) goto L_7905de;
L_790450: /* 790450: mov ecx, dword ptr [eax + 0x12c] */
  ecx = R32((uint32_t)(eax + 0x12cu));
/* 790456: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 790458: je 0x7905de */
  if (zf) goto L_7905de;
L_79045e: /* 79045e: push 0xac9200 */
  { uint32_t v = 0xac9200u; esp -= 4; W32(esp, v); }
/* 790463: call 0x6c7405 */
  esp -= 4; W32(esp, 0x790468u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 790468: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 79046b: mov eax, dword ptr [ecx + 0x168] */
  eax = R32((uint32_t)(ecx + 0x168u));
/* 790471: mov edx, dword ptr [eax + 0x50] */
  edx = R32((uint32_t)(eax + 0x50u));
/* 790474: mov edi, dword ptr [eax + 0x68] */
  edi = R32((uint32_t)(eax + 0x68u));
/* 790477: mov ebx, dword ptr [eax + 0x5c] */
  ebx = R32((uint32_t)(eax + 0x5cu));
/* 79047a: add eax, 0x4c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79047d: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 790480: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 790482: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 790484: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 790486: jne 0x7904b9 */
  if (!zf) goto L_7904b9;
L_790488: /* 790488: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x79048eu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 79048e: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 790494: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 790496: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790497: push 0xac9250 */
  { uint32_t v = 0xac9250u; esp -= 4; W32(esp, v); }
/* 79049c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_79049d: /* 79049d: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7904a3u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7904a3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7904a6: /* 7904a6: xor eax, eax */
  eax = 0;
/* 7904a8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7904ab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7904b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7904b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7904b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7904b5: mov esp, ebp */
  esp = ebp;
/* 7904b7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7904b8: ret  */
  esp += 4; SPILL(); return;
L_7904b9: /* 7904b9: xor edi, edi */
  edi = 0;
/* 7904bb: jmp 0x7904c0 */
  goto L_7904c0;
L_7904c0: /* 7904c0: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 7904c3: cmp edi, dword ptr [eax + 0x17c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x17cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7904c9: jge 0x790511 */
  if ((sf == of)) goto L_790511;
L_7904cb: /* 7904cb: mov edx, dword ptr [eax + 0x178] */
  edx = R32((uint32_t)(eax + 0x178u));
/* 7904d1: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 7904d4: fld dword ptr [edx + ecx*4 + 8] */
  { double v = F32((uint32_t)(edx + ecx*4 + 0x8u)); FPUSH(v); }
/* 7904d8: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 7904db: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7904de: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7904e1: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7904e4: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7904e7: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 7904e9: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7904ec: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7904ef: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7904f2: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7904f5: call dword ptr [0xcfa5d4] */
  esp -= 4; W32(esp, 0x7904fbu); SPILL(); f_4e2b03(); if (g_unwind) return; /* Core!?IsNearlyZero@FVector@@QBEHXZ */ RELOAD();
/* 7904fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7904fd: je 0x79050e */
  if (zf) goto L_79050e;
L_7904ff: /* 7904ff: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 790502: mov ecx, dword ptr [eax + 0x16c] */
  ecx = R32((uint32_t)(eax + 0x16cu));
/* 790508: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 79050b: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
L_79050e: /* 79050e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 79050f: jmp 0x7904c0 */
  goto L_7904c0;
L_790511: /* 790511: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 790514: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 790516: jne 0x7907f9 */
  if (!zf) goto L_7907f9;
L_79051c: /* 79051c: mov eax, dword ptr [esi + 0x284] */
  eax = R32((uint32_t)(esi + 0x284u));
/* 790522: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 790525: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 790528: mov ecx, esi */
  ecx = esi;
/* 79052a: fmul dword ptr [esi + 0x290] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x290u)));
/* 790530: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 790533: fmul dword ptr [esi + 0x28c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28cu)));
/* 790539: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 79053c: fmul dword ptr [esi + 0x288] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x288u)));
/* 790542: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 790545: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 790548: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 79054b: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x790551u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 790551: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 790557: mov edx, dword ptr [ecx + 0x15014] */
  edx = R32((uint32_t)(ecx + 0x15014u));
/* 79055d: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 790560: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790561: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 790562: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 790565: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 790568: mov eax, esp */
  eax = esp;
/* 79056a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 79056c: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 79056f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 790572: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* 790575: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 790578: mov eax, dword ptr [edx + 0x168] */
  eax = R32((uint32_t)(edx + 0x168u));
/* 79057e: add eax, 0x4c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 790581: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790582: call 0x6ca4f2 */
  esp -= 4; W32(esp, 0x790587u); SPILL(); f_6ca4f2(); if (g_unwind) return; RELOAD();
/* 790587: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79058a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79058c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 79058f: je 0x7907f9 */
  if (zf) goto L_7907f9;
L_790595: /* 790595: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 790598: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 790599: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 79059c: add ecx, 0x178 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x178u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7905a2: call 0x6c6861 */
  esp -= 4; W32(esp, 0x7905a7u); SPILL(); f_6c6861(); if (g_unwind) return; RELOAD();
/* 7905a7: mov esi, dword ptr [esi + 0x54] */
  esi = R32((uint32_t)(esi + 0x54u));
/* 7905aa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7905ac: add esi, 0x16c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x16cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7905b2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7905b4: mov ecx, esi */
  ecx = esi;
/* 7905b6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7905bcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7905bc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7905bf: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7905c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7905c2: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7905c5: call 0x92a7e0 */
  esp -= 4; W32(esp, 0x7905cau); SPILL(); f_92a7e0(); if (g_unwind) return; RELOAD();
/* 7905ca: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7905cd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7905d0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7905d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7905d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7905d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7905da: mov esp, ebp */
  esp = ebp;
/* 7905dc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7905dd: ret  */
  esp += 4; SPILL(); return;
L_7905de: /* 7905de: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7905e0: je 0x7906de */
  if (zf) goto L_7906de;
L_7905e6: /* 7905e6: mov eax, dword ptr [edi + 0x334] */
  eax = R32((uint32_t)(edi + 0x334u));
/* 7905ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7905ee: je 0x7906de */
  if (zf) goto L_7906de;
L_7905f4: /* 7905f4: push 0xac92d0 */
  { uint32_t v = 0xac92d0u; esp -= 4; W32(esp, v); }
/* 7905f9: call 0x6c7405 */
  esp -= 4; W32(esp, 0x7905feu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 7905fe: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 790601: call dword ptr [0xcfa5c4] */
  esp -= 4; W32(esp, 0x790607u); SPILL(); f_4e3d37(); if (g_unwind) return; /* Core!?IsUniform@FVector@@QAEHXZ */ RELOAD();
/* 790607: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 790609: jne 0x790626 */
  if (!zf) goto L_790626;
L_79060b: /* 79060b: mov ecx, esi */
  ecx = esi;
/* 79060d: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x790613u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 790613: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790614: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 790619: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 79061b: push 0xac9328 */
  { uint32_t v = 0xac9328u; esp -= 4; W32(esp, v); }
/* 790620: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 790621: jmp 0x79049d */
  goto L_79049d;
L_790626: /* 790626: mov eax, dword ptr [edi + 0x334] */
  eax = R32((uint32_t)(edi + 0x334u));
/* 79062c: mov ecx, dword ptr [eax + 0x50] */
  ecx = R32((uint32_t)(eax + 0x50u));
/* 79062f: mov edx, dword ptr [eax + 0x68] */
  edx = R32((uint32_t)(eax + 0x68u));
/* 790632: mov ebx, dword ptr [eax + 0x5c] */
  ebx = R32((uint32_t)(eax + 0x5cu));
/* 790635: add eax, 0x4c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 790638: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 79063b: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79063d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79063f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 790641: jne 0x79065f */
  if (!zf) goto L_79065f;
L_790643: /* 790643: mov ecx, edi */
  ecx = edi;
/* 790645: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x79064bu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 79064b: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 790651: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790652: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 790654: push 0xac93e0 */
  { uint32_t v = 0xac93e0u; esp -= 4; W32(esp, v); }
/* 790659: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79065a: jmp 0x79049d */
  goto L_79049d;
L_79065f: /* 79065f: mov ecx, dword ptr [esi + 0x284] */
  ecx = R32((uint32_t)(esi + 0x284u));
/* 790665: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 790668: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 79066b: mov ecx, esi */
  ecx = esi;
/* 79066d: fmul dword ptr [esi + 0x290] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x290u)));
/* 790673: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 790676: fmul dword ptr [esi + 0x28c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28cu)));
/* 79067c: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 79067f: fmul dword ptr [esi + 0x288] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x288u)));
/* 790685: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 790688: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 79068b: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 79068e: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x790694u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 790694: mov edx, dword ptr [0xb21bb4] */
  edx = R32((uint32_t)(0xb21bb4u));
/* 79069a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79069b: mov eax, dword ptr [edx + 0x15014] */
  eax = R32((uint32_t)(edx + 0x15014u));
/* 7906a1: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7906a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7906a5: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7906a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7906ab: mov ecx, esp */
  ecx = esp;
/* 7906ad: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7906af: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7906b2: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7906b5: mov eax, dword ptr [edi + 0x334] */
  eax = R32((uint32_t)(edi + 0x334u));
/* 7906bb: add eax, 0x4c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7906be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7906bf: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7906c2: call 0x6ca4f2 */
  esp -= 4; W32(esp, 0x7906c7u); SPILL(); f_6ca4f2(); if (g_unwind) return; RELOAD();
/* 7906c7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7906ca: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7906cd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7906d0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7906d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7906d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7906d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7906da: mov esp, ebp */
  esp = ebp;
/* 7906dc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7906dd: ret  */
  esp += 4; SPILL(); return;
L_7906de: /* 7906de: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7906e3: mov ecx, esi */
  ecx = esi;
/* 7906e5: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7906ebu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7906eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7906ed: jne 0x7904a6 */
  if (!zf) goto L_7904a6;
L_7906f3: /* 7906f3: push 0xb6f6a8 */
  { uint32_t v = 0xb6f6a8u; esp -= 4; W32(esp, v); }
/* 7906f8: mov ecx, esi */
  ecx = esi;
/* 7906fa: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x790700u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 790700: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 790702: je 0x7907f9 */
  if (zf) goto L_7907f9;
L_790708: /* 790708: mov eax, dword ptr [esi + 0x280] */
  eax = R32((uint32_t)(esi + 0x280u));
/* 79070e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 790710: je 0x7907f9 */
  if (zf) goto L_7907f9;
L_790716: /* 790716: push 0xac9460 */
  { uint32_t v = 0xac9460u; esp -= 4; W32(esp, v); }
/* 79071b: call 0x6c7405 */
  esp -= 4; W32(esp, 0x790720u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 790720: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 790723: call 0x6cba41 */
  esp -= 4; W32(esp, 0x790728u); SPILL(); f_6cba41(); if (g_unwind) return; RELOAD();
/* 790728: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79072b: lea ecx, [esi + 0x294] */
  ecx = (uint32_t)(esi + 0x294u);
/* 790731: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 790733: mov edx, esp */
  edx = esp;
/* 790735: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 790737: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 79073a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 79073d: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 790740: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 790743: mov edx, dword ptr [esi + 0x280] */
  edx = R32((uint32_t)(esi + 0x280u));
/* 790749: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79074a: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 79074d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79074e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 790752: call 0x6c1636 */
  esp -= 4; W32(esp, 0x790757u); SPILL(); f_6c1636(); if (g_unwind) return; RELOAD();
/* 790757: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 79075a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79075d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79075f: mov ecx, esi */
  ecx = esi;
/* 790761: jne 0x7907a0 */
  if (!zf) goto L_7907a0;
L_790763: /* 790763: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x790769u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 790769: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 79076f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 790771: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790772: push 0xac94c0 */
  { uint32_t v = 0xac94c0u; esp -= 4; W32(esp, v); }
/* 790777: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 790778: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x79077eu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 79077e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 790781: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 790784: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 790788: call 0x6c736a */
  esp -= 4; W32(esp, 0x79078du); SPILL(); f_6c736a(); if (g_unwind) return; RELOAD();
/* 79078d: xor eax, eax */
  eax = 0;
/* 79078f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 790792: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 790799: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79079a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79079b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79079c: mov esp, ebp */
  esp = ebp;
/* 79079e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79079f: ret  */
  esp += 4; SPILL(); return;
L_7907a0: /* 7907a0: mov dword ptr [ebp - 0x38], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x3f800000u);
/* 7907a7: mov dword ptr [ebp - 0x34], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x3f800000u);
/* 7907ae: mov dword ptr [ebp - 0x30], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x3f800000u);
/* 7907b5: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7907bbu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7907bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7907bc: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 7907c1: mov ecx, dword ptr [eax + 0x15014] */
  ecx = R32((uint32_t)(eax + 0x15014u));
/* 7907c7: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7907ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7907cb: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7907ce: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7907d1: mov edx, esp */
  edx = esp;
/* 7907d3: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7907d5: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7907d8: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7907db: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7907de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7907df: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7907e2: call 0x6ca4f2 */
  esp -= 4; W32(esp, 0x7907e7u); SPILL(); f_6ca4f2(); if (g_unwind) return; RELOAD();
/* 7907e7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7907ea: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 7907ed: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7907f0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7907f4: call 0x6c736a */
  esp -= 4; W32(esp, 0x7907f9u); SPILL(); f_6c736a(); if (g_unwind) return; RELOAD();
L_7907f9: /* 7907f9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7907fc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7907ff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 790800: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 790801: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 790808: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 790809: mov esp, ebp */
  esp = ebp;
/* 79080b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79080c: ret  */
  esp += 4; SPILL(); return;
}

void f_7904bd(void) {
  LOAD_REGS();
L_7904bd: /* 7904bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7904c0: /* 7904c0: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 7904c3: cmp edi, dword ptr [eax + 0x17c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x17cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7904c9: jge 0x790511 */
  if ((sf == of)) goto L_790511;
L_7904cb: /* 7904cb: mov edx, dword ptr [eax + 0x178] */
  edx = R32((uint32_t)(eax + 0x178u));
/* 7904d1: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 7904d4: fld dword ptr [edx + ecx*4 + 8] */
  { double v = F32((uint32_t)(edx + ecx*4 + 0x8u)); FPUSH(v); }
/* 7904d8: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 7904db: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7904de: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7904e1: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7904e4: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7904e7: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 7904e9: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7904ec: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7904ef: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7904f2: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7904f5: call dword ptr [0xcfa5d4] */
  esp -= 4; W32(esp, 0x7904fbu); SPILL(); f_4e2b03(); if (g_unwind) return; /* Core!?IsNearlyZero@FVector@@QBEHXZ */ RELOAD();
/* 7904fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7904fd: je 0x79050e */
  if (zf) goto L_79050e;
L_7904ff: /* 7904ff: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 790502: mov ecx, dword ptr [eax + 0x16c] */
  ecx = R32((uint32_t)(eax + 0x16cu));
/* 790508: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 79050b: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
L_79050e: /* 79050e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 79050f: jmp 0x7904c0 */
  goto L_7904c0;
L_790511: /* 790511: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 790514: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 790516: jne 0x7907f9 */
  if (!zf) goto L_7907f9;
L_79051c: /* 79051c: mov eax, dword ptr [esi + 0x284] */
  eax = R32((uint32_t)(esi + 0x284u));
/* 790522: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 790525: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 790528: mov ecx, esi */
  ecx = esi;
/* 79052a: fmul dword ptr [esi + 0x290] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x290u)));
/* 790530: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 790533: fmul dword ptr [esi + 0x28c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28cu)));
/* 790539: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 79053c: fmul dword ptr [esi + 0x288] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x288u)));
/* 790542: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 790545: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 790548: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 79054b: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x790551u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 790551: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 790557: mov edx, dword ptr [ecx + 0x15014] */
  edx = R32((uint32_t)(ecx + 0x15014u));
/* 79055d: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 790560: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790561: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 790562: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 790565: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 790568: mov eax, esp */
  eax = esp;
/* 79056a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 79056c: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 79056f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 790572: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* 790575: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 790578: mov eax, dword ptr [edx + 0x168] */
  eax = R32((uint32_t)(edx + 0x168u));
/* 79057e: add eax, 0x4c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 790581: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790582: call 0x6ca4f2 */
  esp -= 4; W32(esp, 0x790587u); SPILL(); f_6ca4f2(); if (g_unwind) return; RELOAD();
/* 790587: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79058a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79058c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 79058f: je 0x7907f9 */
  if (zf) goto L_7907f9;
L_790595: /* 790595: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 790598: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 790599: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 79059c: add ecx, 0x178 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x178u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7905a2: call 0x6c6861 */
  esp -= 4; W32(esp, 0x7905a7u); SPILL(); f_6c6861(); if (g_unwind) return; RELOAD();
/* 7905a7: mov esi, dword ptr [esi + 0x54] */
  esi = R32((uint32_t)(esi + 0x54u));
/* 7905aa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7905ac: add esi, 0x16c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x16cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7905b2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7905b4: mov ecx, esi */
  ecx = esi;
/* 7905b6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7905bcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7905bc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7905bf: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7905c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7905c2: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 7905c5: call 0x92a7e0 */
  esp -= 4; W32(esp, 0x7905cau); SPILL(); f_92a7e0(); if (g_unwind) return; RELOAD();
/* 7905ca: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7905cd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7905d0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7905d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7905d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7905d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7905da: mov esp, ebp */
  esp = ebp;
/* 7905dc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7905dd: ret  */
  esp += 4; SPILL(); return;
L_7907f9: /* 7907f9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7907fc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7907ff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 790800: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 790801: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 790808: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 790809: mov esp, ebp */
  esp = ebp;
/* 79080b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79080c: ret  */
  esp += 4; SPILL(); return;
}

void f_79080d(void) {
  LOAD_REGS();
L_79080d: /* 79080d: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 790810: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 790815: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 790818: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790819: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 79081c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x790821u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_790821(); return;
}

void f_790821(void) {
  LOAD_REGS();
L_790821: /* 790821: push 0xa0a1c0 */
  { uint32_t v = 0xa0a1c0u; esp -= 4; W32(esp, v); }
/* 790826: push 0xac9548 */
  { uint32_t v = 0xac9548u; esp -= 4; W32(esp, v); }
/* 79082b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x790831u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 790831: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 790834: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790836: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790838: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79083du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79083d: guest_badaddr(0x79083d); return;
}

void f_790960(void) {
  LOAD_REGS();
L_790960: /* 790960: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 790961: mov ebp, esp */
  ebp = esp;
/* 790963: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 790965: push 0x9ccdeb */
  { uint32_t v = 0x9ccdebu; esp -= 4; W32(esp, v); }
/* 79096a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 790970: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790971: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 790978: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79097b: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 790981: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 790982: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 790983: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 790984: xor edi, edi */
  edi = 0;
/* 790986: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 790988: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79098b: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 79098e: je 0x790b8e */
  if (zf) goto L_790b8e;
L_790994: /* 790994: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 790997: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 79099d: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7909a0: jne 0x790b8e */
  if (!zf) goto L_790b8e;
L_7909a6: /* 7909a6: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 7909ac: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7909ae: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7909b4: jne 0x790b8e */
  if (!zf) goto L_790b8e;
L_7909ba: /* 7909ba: cmp dword ptr [ecx + 0x1500c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1500cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7909c0: je 0x790b8e */
  if (zf) goto L_790b8e;
L_7909c6: /* 7909c6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7909c8: je 0x790b8e */
  if (zf) goto L_790b8e;
L_7909ce: /* 7909ce: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7909d0: mov ecx, esi */
  ecx = esi;
/* 7909d2: call dword ptr [eax + 0x13c] */
  { uint32_t t = R32((uint32_t)(eax + 0x13cu)); esp -= 4; W32(esp, 0x7909d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7909d8: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7909da: jne 0x790b8e */
  if (!zf) goto L_790b8e;
L_7909e0: /* 7909e0: push 0xac9550 */
  { uint32_t v = 0xac9550u; esp -= 4; W32(esp, v); }
/* 7909e5: call 0x6c7405 */
  esp -= 4; W32(esp, 0x7909eau); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 7909ea: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 7909f0: cmp dword ptr [ecx + 0x15014], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x15014u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7909f6: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7909fa: jne 0x790a14 */
  if (!zf) goto L_790a14;
L_7909fc: /* 7909fc: push 0x42c */
  { uint32_t v = 0x42cu; esp -= 4; W32(esp, v); }
/* 790a01: push 0xac9588 */
  { uint32_t v = 0xac9588u; esp -= 4; W32(esp, v); }
/* 790a06: push 0xac959c */
  { uint32_t v = 0xac959cu; esp -= 4; W32(esp, v); }
/* 790a0b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x790a11u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 790a11: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_790a14: /* 790a14: cmp dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 790a17: je 0x790a2a */
  if (zf) goto L_790a2a;
L_790a19: /* 790a19: mov edx, dword ptr [0xb21bb4] */
  edx = R32((uint32_t)(0xb21bb4u));
/* 790a1f: mov eax, dword ptr [edx + 0x15014] */
  eax = R32((uint32_t)(edx + 0x15014u));
/* 790a25: mov esi, dword ptr [eax + 0xc] */
  esi = R32((uint32_t)(eax + 0xcu));
/* 790a28: jmp 0x790a33 */
  goto L_790a33;
L_790a2a: /* 790a2a: mov ecx, esi */
  ecx = esi;
/* 790a2c: call 0x7903c0 */
  esp -= 4; W32(esp, 0x790a31u); SPILL(); f_7903c0(); if (g_unwind) return; RELOAD();
/* 790a31: mov esi, eax */
  esi = eax;
L_790a33: /* 790a33: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 790a35: je 0x790b8e */
  if (zf) goto L_790b8e;
L_790a3b: /* 790a3b: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 790a3e: push 0xac95b4 */
  { uint32_t v = 0xac95b4u; esp -= 4; W32(esp, v); }
/* 790a43: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 790a47: call 0x6c7405 */
  esp -= 4; W32(esp, 0x790a4cu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 790a4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 790a4d: call 0x928490 */
  esp -= 4; W32(esp, 0x790a52u); SPILL(); f_928490(); if (g_unwind) return; RELOAD();
/* 790a52: mov ebx, eax */
  ebx = eax;
/* 790a54: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 790a56: jne 0x790a70 */
  if (!zf) goto L_790a70;
L_790a58: /* 790a58: push 0x43f */
  { uint32_t v = 0x43fu; esp -= 4; W32(esp, v); }
/* 790a5d: push 0xac95f0 */
  { uint32_t v = 0xac95f0u; esp -= 4; W32(esp, v); }
/* 790a62: push 0xac9604 */
  { uint32_t v = 0xac9604u; esp -= 4; W32(esp, v); }
/* 790a67: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x790a6du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 790a6d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_790a70: /* 790a70: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 790a75: mov ecx, dword ptr [eax + 0x15230] */
  ecx = R32((uint32_t)(eax + 0x15230u));
/* 790a7b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 790a7c: push 0xac960c */
  { uint32_t v = 0xac960cu; esp -= 4; W32(esp, v); }
/* 790a81: mov dword ptr [eax + 0x15230], ecx */
  W32((uint32_t)(eax + 0x15230u), ecx);
/* 790a87: call 0x6c7405 */
  esp -= 4; W32(esp, 0x790a8cu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 790a8c: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 790a8e: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 790a90: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x790a96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 790a96: push 0xac962c */
  { uint32_t v = 0xac962cu; esp -= 4; W32(esp, v); }
/* 790a9b: mov edi, eax */
  edi = eax;
/* 790a9d: call 0x6c7405 */
  esp -= 4; W32(esp, 0x790aa2u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 790aa2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 790aa5: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 790aab: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 790aad: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 790ab0: mov edx, esp */
  edx = esp;
/* 790ab2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 790ab4: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 790ab7: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 790aba: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 790abd: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 790ac0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 790ac3: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 790ac9: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 790acb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 790ace: mov eax, esp */
  eax = esp;
/* 790ad0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 790ad2: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 790ad5: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 790ad8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 790adb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 790adc: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 790adf: call 0x6c8eae */
  esp -= 4; W32(esp, 0x790ae4u); SPILL(); f_6c8eae(); if (g_unwind) return; RELOAD();
/* 790ae4: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 790ae7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 790ae8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 790ae9: call 0x928740 */
  esp -= 4; W32(esp, 0x790aeeu); SPILL(); f_928740(); if (g_unwind) return; RELOAD();
/* 790aee: cmp byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 790af1: je 0x790af9 */
  if (zf) goto L_790af9;
L_790af3: /* 790af3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 790af4: call 0x928630 */
  esp -= 4; W32(esp, 0x790af9u); SPILL(); f_928630(); if (g_unwind) return; RELOAD();
L_790af9: /* 790af9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 790b00: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 790b02: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 790b06: call 0x6c242d */
  esp -= 4; W32(esp, 0x790b0bu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 790b0b: mov ecx, eax */
  ecx = eax;
/* 790b0d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 790b10: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 790b13: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 790b15: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 790b19: je 0x790b24 */
  if (zf) goto L_790b24;
L_790b1b: /* 790b1b: call 0x6c4606 */
  esp -= 4; W32(esp, 0x790b20u); SPILL(); f_6c4606(); if (g_unwind) return; RELOAD();
/* 790b20: mov esi, eax */
  esi = eax;
/* 790b22: jmp 0x790b26 */
  goto L_790b26;
L_790b24: /* 790b24: xor esi, esi */
  esi = 0;
L_790b26: /* 790b26: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 790b28: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 790b2c: jne 0x790b46 */
  if (!zf) goto L_790b46;
L_790b2e: /* 790b2e: push 0x454 */
  { uint32_t v = 0x454u; esp -= 4; W32(esp, v); }
/* 790b33: push 0xac9660 */
  { uint32_t v = 0xac9660u; esp -= 4; W32(esp, v); }
/* 790b38: push 0xac9674 */
  { uint32_t v = 0xac9674u; esp -= 4; W32(esp, v); }
/* 790b3d: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x790b43u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 790b43: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_790b46: /* 790b46: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 790b49: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 790b4a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 790b4b: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 790b4d: call 0x928790 */
  esp -= 4; W32(esp, 0x790b52u); SPILL(); f_928790(); if (g_unwind) return; RELOAD();
/* 790b52: mov eax, dword ptr [edi + 0x30c] */
  eax = R32((uint32_t)(edi + 0x30cu));
/* 790b58: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 790b5a: jne 0x790b74 */
  if (!zf) goto L_790b74;
L_790b5c: /* 790b5c: push 0x458 */
  { uint32_t v = 0x458u; esp -= 4; W32(esp, v); }
/* 790b61: push 0xac967c */
  { uint32_t v = 0xac967cu; esp -= 4; W32(esp, v); }
/* 790b66: push 0xac9690 */
  { uint32_t v = 0xac9690u; esp -= 4; W32(esp, v); }
/* 790b6b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x790b71u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 790b71: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_790b74: /* 790b74: mov eax, dword ptr [edi + 0x30c] */
  eax = R32((uint32_t)(edi + 0x30cu));
/* 790b7a: push 0xac96a8 */
  { uint32_t v = 0xac96a8u; esp -= 4; W32(esp, v); }
/* 790b7f: mov dword ptr [eax + 0x28], ebx */
  W32((uint32_t)(eax + 0x28u), ebx);
/* 790b82: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 790b89: call 0x6c7405 */
  esp -= 4; W32(esp, 0x790b8eu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
L_790b8e: /* 790b8e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 790b91: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 790b92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 790b93: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 790b9a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 790b9b: mov esp, ebp */
  esp = ebp;
/* 790b9d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 790b9e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_790ba1(void) {
  LOAD_REGS();
L_790ba1: /* 790ba1: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 790ba4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 790ba9: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 790bac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 790bad: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 790bb0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x790bb5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_790bb5(); return;
}

void f_790bb5(void) {
  LOAD_REGS();
L_790bb5: /* 790bb5: push 0xa0a264 */
  { uint32_t v = 0xa0a264u; esp -= 4; W32(esp, v); }
/* 790bba: push 0xac96a0 */
  { uint32_t v = 0xac96a0u; esp -= 4; W32(esp, v); }
/* 790bbf: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x790bc5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 790bc5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 790bc8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790bca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790bcc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x790bd1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_790bd1(); return;
}

void f_790bd1(void) {
  LOAD_REGS();
L_790bd1: /* 790bd1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 790bd4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 790bd9: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 790bdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 790bdd: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 790be0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x790be5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_790be5(); return;
}

void f_790be5(void) {
  LOAD_REGS();
L_790be5: /* 790be5: push 0xa0a248 */
  { uint32_t v = 0xa0a248u; esp -= 4; W32(esp, v); }
/* 790bea: push 0xac9658 */
  { uint32_t v = 0xac9658u; esp -= 4; W32(esp, v); }
/* 790bef: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x790bf5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 790bf5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 790bf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790bfa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790bfc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x790c01u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_790c01(); return;
}

void f_790c01(void) {
  LOAD_REGS();
L_790c01: /* 790c01: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 790c04: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 790c09: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 790c0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790c0d: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 790c10: call 0x99caf8 */
  esp -= 4; W32(esp, 0x790c15u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_790c15(); return;
}

void f_790c15(void) {
  LOAD_REGS();
L_790c15: /* 790c15: push 0xa0a224 */
  { uint32_t v = 0xa0a224u; esp -= 4; W32(esp, v); }
/* 790c1a: push 0xac95ac */
  { uint32_t v = 0xac95acu; esp -= 4; W32(esp, v); }
/* 790c1f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x790c25u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 790c25: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 790c28: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790c2a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790c2c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x790c31u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_790c31(); return;
}

void f_790c31(void) {
  LOAD_REGS();
L_790c31: /* 790c31: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 790c34: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 790c39: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 790c3c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 790c3d: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 790c40: call 0x99caf8 */
  esp -= 4; W32(esp, 0x790c45u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_790c45(); return;
}

void f_790c45(void) {
  LOAD_REGS();
L_790c45: /* 790c45: push 0xa0a1f4 */
  { uint32_t v = 0xa0a1f4u; esp -= 4; W32(esp, v); }
/* 790c4a: push 0xac96e0 */
  { uint32_t v = 0xac96e0u; esp -= 4; W32(esp, v); }
/* 790c4f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x790c55u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 790c55: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 790c58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790c5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790c5c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x790c61u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_790c61: guest_badaddr(0x790c61); return;
}

void f_790d40(void) {
  LOAD_REGS();
L_790d40: /* 790d40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 790d41: mov ebp, esp */
  ebp = esp;
/* 790d43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 790d45: push 0x9cce00 */
  { uint32_t v = 0x9cce00u; esp -= 4; W32(esp, v); }
/* 790d4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 790d50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790d51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 790d58: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 790d5b: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 790d60: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 790d62: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 790d63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 790d64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 790d65: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 790d68: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 790d6f: je 0x790de6 */
  if (zf) goto L_790de6;
L_790d71: /* 790d71: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 790d74: mov ecx, dword ptr [esi + 0x80] */
  ecx = R32((uint32_t)(esi + 0x80u));
/* 790d7a: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 790d7d: jne 0x790de6 */
  if (!zf) goto L_790de6;
L_790d7f: /* 790d7f: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 790d85: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 790d87: je 0x790de6 */
  if (zf) goto L_790de6;
L_790d89: /* 790d89: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 790d8f: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 790d92: jne 0x790de6 */
  if (!zf) goto L_790de6;
L_790d94: /* 790d94: mov ecx, dword ptr [eax + 0x1500c] */
  ecx = R32((uint32_t)(eax + 0x1500cu));
/* 790d9a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 790d9c: je 0x790de6 */
  if (zf) goto L_790de6;
L_790d9e: /* 790d9e: cmp byte ptr [esi + 0x50], 0xe */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 790da2: jne 0x790df9 */
  if (!zf) goto L_790df9;
L_790da4: /* 790da4: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 790daa: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 790dac: je 0x790de6 */
  if (zf) goto L_790de6;
L_790dae: /* 790dae: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 790db3: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x790db9u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 790db9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 790dbb: je 0x790de6 */
  if (zf) goto L_790de6;
L_790dbd: /* 790dbd: mov edx, dword ptr [esi + 0xd0] */
  edx = R32((uint32_t)(esi + 0xd0u));
/* 790dc3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 790dc4: call 0x6ca8ad */
  esp -= 4; W32(esp, 0x790dc9u); SPILL(); f_6ca8ad(); if (g_unwind) return; RELOAD();
/* 790dc9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 790dcb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 790dce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 790dcf: mov ecx, eax */
  ecx = eax;
/* 790dd1: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x790dd7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 790dd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790dd8: call 0x6c8116 */
  esp -= 4; W32(esp, 0x790dddu); SPILL(); f_6c8116(); if (g_unwind) return; RELOAD();
/* 790ddd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 790de0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790de1: call 0x6c56c3 */
  esp -= 4; W32(esp, 0x790de6u); SPILL(); f_6c56c3(); if (g_unwind) return; RELOAD();
L_790de6: /* 790de6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 790de9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 790df0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 790df1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 790df2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 790df3: mov esp, ebp */
  esp = ebp;
/* 790df5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 790df6: ret 4 */
  esp += 8; SPILL(); return;
L_790df9: /* 790df9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 790dfa: call 0x6ccd06 */
  esp -= 4; W32(esp, 0x790dffu); SPILL(); f_6ccd06(); if (g_unwind) return; RELOAD();
/* 790dff: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 790e02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 790e04: je 0x790e4a */
  if (zf) goto L_790e4a;
L_790e06: /* 790e06: mov ecx, dword ptr [eax + 0x364] */
  ecx = R32((uint32_t)(eax + 0x364u));
/* 790e0c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 790e0e: jne 0x790e31 */
  if (!zf) goto L_790e31;
L_790e10: /* 790e10: mov ecx, dword ptr [eax + 0x368] */
  ecx = R32((uint32_t)(eax + 0x368u));
/* 790e16: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 790e18: jne 0x790e31 */
  if (!zf) goto L_790e31;
L_790e1a: /* 790e1a: mov byte ptr [eax + 0x50], 0 */
  W8((uint32_t)(eax + 0x50u), 0x0u);
/* 790e1e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 790e21: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 790e28: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 790e29: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 790e2a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 790e2b: mov esp, ebp */
  esp = ebp;
/* 790e2d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 790e2e: ret 4 */
  esp += 8; SPILL(); return;
L_790e31: /* 790e31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790e32: call 0x6cca90 */
  esp -= 4; W32(esp, 0x790e37u); SPILL(); f_6cca90(); if (g_unwind) return; RELOAD();
/* 790e37: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 790e3a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 790e41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 790e42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 790e43: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 790e44: mov esp, ebp */
  esp = ebp;
/* 790e46: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 790e47: ret 4 */
  esp += 8; SPILL(); return;
L_790e4a: /* 790e4a: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 790e50: mov edi, 0x400 */
  edi = 0x400u;
/* 790e55: test edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 790e57: je 0x790e97 */
  if (zf) goto L_790e97;
L_790e59: /* 790e59: mov eax, dword ptr [esi + 0x30c] */
  eax = R32((uint32_t)(esi + 0x30cu));
/* 790e5f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 790e61: jne 0x790e8f */
  if (!zf) goto L_790e8f;
L_790e63: /* 790e63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790e65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 790e66: mov ecx, esp */
  ecx = esp;
/* 790e68: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 790e6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790e6d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x790e73u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 790e73: mov ecx, esi */
  ecx = esi;
/* 790e75: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x790e7bu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 790e7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790e7c: push 0xb1e8d8 */
  { uint32_t v = 0xb1e8d8u; esp -= 4; W32(esp, v); }
/* 790e81: call 0x6c9c3c */
  esp -= 4; W32(esp, 0x790e86u); SPILL(); f_6c9c3c(); if (g_unwind) return; RELOAD();
/* 790e86: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 790e89: mov dword ptr [esi + 0x30c], eax */
  W32((uint32_t)(esi + 0x30cu), eax);
L_790e8f: /* 790e8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790e91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 790e92: call 0x6c9a5c */
  esp -= 4; W32(esp, 0x790e97u); SPILL(); f_6c9a5c(); if (g_unwind) return; RELOAD();
L_790e97: /* 790e97: cmp byte ptr [esi + 0x50], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 790e9b: jne 0x790de6 */
  if (!zf) goto L_790de6;
L_790ea1: /* 790ea1: test dword ptr [esi + 0x88], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 790ea7: jne 0x790eb1 */
  if (!zf) goto L_790eb1;
L_790ea9: /* 790ea9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 790eab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 790eac: call 0x6c9a5c */
  esp -= 4; W32(esp, 0x790eb1u); SPILL(); f_6c9a5c(); if (g_unwind) return; RELOAD();
L_790eb1: /* 790eb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 790eb2: call 0x6c53da */
  esp -= 4; W32(esp, 0x790eb7u); SPILL(); f_6c53da(); if (g_unwind) return; RELOAD();
/* 790eb7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 790eba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 790ebb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 790ebc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 790ec3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 790ec4: mov esp, ebp */
  esp = ebp;
/* 790ec6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 790ec7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_790eca(void) {
  LOAD_REGS();
L_790eca: /* 790eca: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 790ecd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 790ed2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 790ed5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 790ed6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 790ed9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x790edeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_790ede(); return;
}

void f_790ede(void) {
  LOAD_REGS();
L_790ede: /* 790ede: push 0xa0a28c */
  { uint32_t v = 0xa0a28cu; esp -= 4; W32(esp, v); }
/* 790ee3: push 0xac980c */
  { uint32_t v = 0xac980cu; esp -= 4; W32(esp, v); }
/* 790ee8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x790eeeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 790eee: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 790ef1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790ef3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 790ef5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x790efau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_790efa: guest_badaddr(0x790efa); return;
}

void f_790f70(void) {
  LOAD_REGS();
L_790f70: /* 790f70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 790f71: mov ebp, esp */
  ebp = esp;
/* 790f73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 790f75: push 0x9cce10 */
  { uint32_t v = 0x9cce10u; esp -= 4; W32(esp, v); }
/* 790f7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 790f80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 790f81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 790f88: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 790f8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 790f8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 790f8d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 790f90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 790f91: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 790f94: push 0xb1c480 */
  { uint32_t v = 0xb1c480u; esp -= 4; W32(esp, v); }
/* 790f99: mov ecx, esi */
  ecx = esi;
/* 790f9b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 790fa2: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x790fa8u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 790fa8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 790faa: jne 0x790ffc */
  if (!zf) goto L_790ffc;
L_790fac: /* 790fac: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 790fb2: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 790fb5: jne 0x790ffc */
  if (!zf) goto L_790ffc;
L_790fb7: /* 790fb7: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 790fba: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 790fbc: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 790fc2: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 790fc5: jne 0x790fca */
  if (!zf) goto L_790fca;
L_790fc7: /* 790fc7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 790fc8: jmp 0x790fe0 */
  goto L_790fe0;
L_790fca: /* 790fca: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 790fd1: je 0x790fe9 */
  if (zf) goto L_790fe9;
L_790fd3: /* 790fd3: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 790fd6: cmp al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 790fd8: je 0x790fde */
  if (zf) goto L_790fde;
L_790fda: /* 790fda: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 790fdc: jne 0x790fe9 */
  if (!zf) goto L_790fe9;
L_790fde: /* 790fde: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
L_790fe0: /* 790fe0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 790fe1: call 0x6c7ac7 */
  esp -= 4; W32(esp, 0x790fe6u); SPILL(); f_6c7ac7(); if (g_unwind) return; RELOAD();
/* 790fe6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_790fe9: /* 790fe9: cmp byte ptr [esi + 0x50], 0xe */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 790fed: jne 0x79100f */
  if (!zf) goto L_79100f;
L_790fef: /* 790fef: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 790ff1: jne 0x790ffc */
  if (!zf) goto L_790ffc;
L_790ff3: /* 790ff3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 790ff4: call 0x6cb4ec */
  esp -= 4; W32(esp, 0x790ff9u); SPILL(); f_6cb4ec(); if (g_unwind) return; RELOAD();
/* 790ff9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_790ffc: /* 790ffc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 790fff: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 791006: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 791007: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 791008: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 791009: mov esp, ebp */
  esp = ebp;
/* 79100b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79100c: ret 8 */
  esp += 12; SPILL(); return;
L_79100f: /* 79100f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 791011: mov ecx, esi */
  ecx = esi;
/* 791013: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x791019u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 791019: mov edi, eax */
  edi = eax;
/* 79101b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79101d: jne 0x79103d */
  if (!zf) goto L_79103d;
L_79101f: /* 79101f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 791021: je 0x790ffc */
  if (zf) goto L_790ffc;
L_791023: /* 791023: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 791024: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 791025: call 0x6c9a5c */
  esp -= 4; W32(esp, 0x79102au); SPILL(); f_6c9a5c(); if (g_unwind) return; RELOAD();
/* 79102a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79102d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 791034: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 791035: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 791036: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 791037: mov esp, ebp */
  esp = ebp;
/* 791039: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79103a: ret 8 */
  esp += 12; SPILL(); return;
L_79103d: /* 79103d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79103e: call 0x925ce0 */
  esp -= 4; W32(esp, 0x791043u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 791043: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 791045: jne 0x791064 */
  if (!zf) goto L_791064;
L_791047: /* 791047: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 791049: jne 0x791064 */
  if (!zf) goto L_791064;
L_79104b: /* 79104b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79104c: call 0x6c7824 */
  esp -= 4; W32(esp, 0x791051u); SPILL(); f_6c7824(); if (g_unwind) return; RELOAD();
/* 791051: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 791054: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79105b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79105c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79105d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79105e: mov esp, ebp */
  esp = ebp;
/* 791060: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 791061: ret 8 */
  esp += 12; SPILL(); return;
L_791064: /* 791064: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 791065: call 0x9287f0 */
  esp -= 4; W32(esp, 0x79106au); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 79106a: mov ebx, eax */
  ebx = eax;
/* 79106c: cmp byte ptr [ebx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79106f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 791072: jne 0x791099 */
  if (!zf) goto L_791099;
L_791074: /* 791074: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 791076: je 0x790ffc */
  if (zf) goto L_790ffc;
L_791078: /* 791078: mov ecx, esi */
  ecx = esi;
/* 79107a: call 0x7903c0 */
  esp -= 4; W32(esp, 0x79107fu); SPILL(); f_7903c0(); if (g_unwind) return; RELOAD();
/* 79107f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 791080: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 791081: call 0x9287b0 */
  esp -= 4; W32(esp, 0x791086u); SPILL(); f_9287b0(); if (g_unwind) return; RELOAD();
/* 791086: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 791089: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 791090: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 791091: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 791092: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 791093: mov esp, ebp */
  esp = ebp;
/* 791095: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 791096: ret 8 */
  esp += 12; SPILL(); return;
L_791099: /* 791099: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79109b: jne 0x790ffc */
  if (!zf) goto L_790ffc;
L_7910a1: /* 7910a1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7910a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7910a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7910a6: call 0x6c619f */
  esp -= 4; W32(esp, 0x7910abu); SPILL(); f_6c619f(); if (g_unwind) return; RELOAD();
/* 7910ab: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 7910b1: mov edx, dword ptr [ecx + 0x15014] */
  edx = R32((uint32_t)(ecx + 0x15014u));
/* 7910b7: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 7910ba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7910bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7910be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7910bf: call 0x9287b0 */
  esp -= 4; W32(esp, 0x7910c4u); SPILL(); f_9287b0(); if (g_unwind) return; RELOAD();
/* 7910c4: mov dword ptr [edi + 0x70], 0 */
  W32((uint32_t)(edi + 0x70u), 0x0u);
/* 7910cb: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 7910d1: mov edx, dword ptr [ecx + 0x15014] */
  edx = R32((uint32_t)(ecx + 0x15014u));
/* 7910d7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7910d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7910d9: call 0x6c165e */
  esp -= 4; W32(esp, 0x7910deu); SPILL(); f_6c165e(); if (g_unwind) return; RELOAD();
/* 7910de: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7910e1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7910e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7910e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7910e6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7910ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7910ee: mov esp, ebp */
  esp = ebp;
/* 7910f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7910f1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7910f4(void) {
  LOAD_REGS();
L_7910f4: /* 7910f4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7910f7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7910fc: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7910ff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 791100: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 791103: call 0x99caf8 */
  esp -= 4; W32(esp, 0x791108u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_791108(); return;
}

void f_791108(void) {
  LOAD_REGS();
L_791108: /* 791108: push 0xa0a2b4 */
  { uint32_t v = 0xa0a2b4u; esp -= 4; W32(esp, v); }
/* 79110d: push 0xaca568 */
  { uint32_t v = 0xaca568u; esp -= 4; W32(esp, v); }
/* 791112: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x791118u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 791118: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79111b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79111d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79111f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x791124u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_791124: guest_badaddr(0x791124); return;
}

void f_7911a0(void) {
  LOAD_REGS();
L_7911a0: /* 7911a0: mov eax, 0xb21bb8 */
  eax = 0xb21bb8u;
/* 7911a5: ret  */
  esp += 4; SPILL(); return;
}

void f_7911c0(void) {
  LOAD_REGS();
L_7911c0: /* 7911c0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 7911c5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7911c7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7911cb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7911cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7911d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7911d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7911d4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7911d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7911da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7911db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7911dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7911dd: push 0xb21bb8 */
  { uint32_t v = 0xb21bb8u; esp -= 4; W32(esp, v); }
/* 7911e2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x7911e8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 7911e8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7911eb: ret  */
  esp += 4; SPILL(); return;
}

void f_791200(void) {
  LOAD_REGS();
L_791200: /* 791200: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 791204: ret  */
  esp += 4; SPILL(); return;
}

void f_791220(void) {
  LOAD_REGS();
L_791220: /* 791220: ret  */
  esp += 4; SPILL(); return;
}

void f_791240(void) {
  LOAD_REGS();
L_791240: /* 791240: ret 4 */
  esp += 8; SPILL(); return;
}

void f_791260(void) {
  LOAD_REGS();
L_791260: /* 791260: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 791264: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 791268: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 79126a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 79126c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79126d: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 791271: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 791272: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 791274: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x79127au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79127a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79127c: jne 0x791293 */
  if (!zf) goto L_791293;
L_79127e: /* 79127e: push 0x59 */
  { uint32_t v = 0x59u; esp -= 4; W32(esp, v); }
/* 791280: push 0xacabdc */
  { uint32_t v = 0xacabdcu; esp -= 4; W32(esp, v); }
/* 791285: push 0xacab9c */
  { uint32_t v = 0xacab9cu; esp -= 4; W32(esp, v); }
/* 79128a: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x791290u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 791290: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_791293: /* 791293: mov eax, 1 */
  eax = 0x1u;
/* 791298: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_7912b0(void) {
  LOAD_REGS();
L_7912b0: /* 7912b0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7912d0(void) {
  LOAD_REGS();
L_7912d0: /* 7912d0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7912f0(void) {
  LOAD_REGS();
L_7912f0: /* 7912f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_791310(void) {
  LOAD_REGS();
L_791310: /* 791310: ret  */
  esp += 4; SPILL(); return;
}

void f_791330(void) {
  LOAD_REGS();
L_791330: /* 791330: xor eax, eax */
  eax = 0;
/* 791332: ret 8 */
  esp += 12; SPILL(); return;
}

void f_791350(void) {
  LOAD_REGS();
L_791350: /* 791350: lea eax, [ecx + 0xb0] */
  eax = (uint32_t)(ecx + 0xb0u);
/* 791356: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_791370(void) {
  LOAD_REGS();
L_791370: /* 791370: ret 4 */
  esp += 8; SPILL(); return;
}

void f_791390(void) {
  LOAD_REGS();
L_791390: /* 791390: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7913b0(void) {
  LOAD_REGS();
L_7913b0: /* 7913b0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7913d0(void) {
  LOAD_REGS();
L_7913d0: /* 7913d0: mov eax, 1 */
  eax = 0x1u;
/* 7913d5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7913f0(void) {
  LOAD_REGS();
L_7913f0: /* 7913f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_791410(void) {
  LOAD_REGS();
L_791410: /* 791410: lea eax, [ecx + 0xc8] */
  eax = (uint32_t)(ecx + 0xc8u);
/* 791416: ret  */
  esp += 4; SPILL(); return;
}

void f_791430(void) {
  LOAD_REGS();
L_791430: /* 791430: mov eax, ecx */
  eax = ecx;
/* 791432: xor ecx, ecx */
  ecx = 0;
/* 791434: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* 79143a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 79143d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 791440: ret  */
  esp += 4; SPILL(); return;
}

void f_791460(void) {
  LOAD_REGS();
L_791460: /* 791460: mov eax, ecx */
  eax = ecx;
/* 791462: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 791466: mov dword ptr [eax], 0xa0a2e8 */
  W32((uint32_t)(eax), 0xa0a2e8u);
/* 79146c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 79146f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_791490(void) {
  LOAD_REGS();
L_791490: /* 791490: ret  */
  esp += 4; SPILL(); return;
}

void f_7914b0(void) {
  LOAD_REGS();
L_7914b0: /* 7914b0: ret  */
  esp += 4; SPILL(); return;
}

void f_7914d0(void) {
  LOAD_REGS();
L_7914d0: /* 7914d0: mov eax, 1 */
  eax = 0x1u;
/* 7914d5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7914f0(void) {
  LOAD_REGS();
L_7914f0: /* 7914f0: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_791510(void) {
  LOAD_REGS();
L_791510: /* 791510: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_791530(void) {
  LOAD_REGS();
L_791530: /* 791530: ret 8 */
  esp += 12; SPILL(); return;
}

void f_791550(void) {
  LOAD_REGS();
L_791550: /* 791550: ret 8 */
  esp += 12; SPILL(); return;
}

void f_791570(void) {
  LOAD_REGS();
L_791570: /* 791570: ret 4 */
  esp += 8; SPILL(); return;
}

void f_791590(void) {
  LOAD_REGS();
L_791590: /* 791590: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7915b0(void) {
  LOAD_REGS();
L_7915b0: /* 7915b0: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_7915d0(void) {
  LOAD_REGS();
L_7915d0: /* 7915d0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7915f0(void) {
  LOAD_REGS();
L_7915f0: /* 7915f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_791610(void) {
  LOAD_REGS();
L_791610: /* 791610: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_791630(void) {
  LOAD_REGS();
L_791630: /* 791630: ret 4 */
  esp += 8; SPILL(); return;
}

void f_791650(void) {
  LOAD_REGS();
L_791650: /* 791650: ret 8 */
  esp += 12; SPILL(); return;
}

void f_791670(void) {
  LOAD_REGS();
L_791670: /* 791670: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_791690(void) {
  LOAD_REGS();
L_791690: /* 791690: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7916b0(void) {
  LOAD_REGS();
L_7916b0: /* 7916b0: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_7916d0(void) {
  LOAD_REGS();
L_7916d0: /* 7916d0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7916f0(void) {
  LOAD_REGS();
L_7916f0: /* 7916f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_791710(void) {
  LOAD_REGS();
L_791710: /* 791710: xor eax, eax */
  eax = 0;
/* 791712: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_791730(void) {
  LOAD_REGS();
L_791730: /* 791730: xor eax, eax */
  eax = 0;
/* 791732: ret 8 */
  esp += 12; SPILL(); return;
}

void f_791750(void) {
  LOAD_REGS();
L_791750: /* 791750: xor eax, eax */
  eax = 0;
/* 791752: ret 8 */
  esp += 12; SPILL(); return;
}

void f_791770(void) {
  LOAD_REGS();
L_791770: /* 791770: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_791790(void) {
  LOAD_REGS();
L_791790: /* 791790: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 791791: lea esi, [ecx + 0xbc] */
  esi = (uint32_t)(ecx + 0xbcu);
/* 791797: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 791799: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 79179b: mov ecx, esi */
  ecx = esi;
/* 79179d: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7917a3u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7917a3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7917a5: push 0x10000 */
  { uint32_t v = 0x10000u; esp -= 4; W32(esp, v); }
/* 7917aa: mov ecx, esi */
  ecx = esi;
/* 7917ac: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7917b2u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7917b2: mov eax, 1 */
  eax = 0x1u;
/* 7917b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7917b8: ret  */
  esp += 4; SPILL(); return;
}

void f_7917d0(void) {
  LOAD_REGS();
L_7917d0: /* 7917d0: mov eax, ecx */
  eax = ecx;
/* 7917d2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7917d6: mov dword ptr [eax], 0xa0a2e8 */
  W32((uint32_t)(eax), 0xa0a2e8u);
/* 7917dc: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7917df: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7917e2: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7917e5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7917e8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_791800(void) {
  LOAD_REGS();
L_791800: /* 791800: mov eax, ecx */
  eax = ecx;
/* 791802: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 791806: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 791809: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 79180c: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 79180f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 791812: ret 4 */
  esp += 8; SPILL(); return;
}

void f_791830(void) {
  LOAD_REGS();
L_791830: /* 791830: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 791831: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 791832: mov esi, ecx */
  esi = ecx;
/* 791834: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 791837: mov ebx, dword ptr [eax + 0xc0] */
  ebx = R32((uint32_t)(eax + 0xc0u));
/* 79183d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79183e: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 791842: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 791844: mov ecx, edi */
  ecx = edi;
/* 791846: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x791849u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 791849: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 79184b: jle 0x791892 */
  if ((zf || sf != of)) goto L_791892;
L_79184d: /* 79184d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 791850: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 791852: mov ebx, dword ptr [eax + 0xc0] */
  ebx = R32((uint32_t)(eax + 0xc0u));
/* 791858: mov ecx, edi */
  ecx = edi;
/* 79185a: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x79185du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79185d: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 791860: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 791862: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 791864: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 791865: add ecx, 0xbc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xbcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 79186b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x791871u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 791871: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 791874: mov ecx, dword ptr [eax + 0xc0] */
  ecx = R32((uint32_t)(eax + 0xc0u));
/* 79187a: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 791880: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 791882: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 791883: push 0xacab48 */
  { uint32_t v = 0xacab48u; esp -= 4; W32(esp, v); }
/* 791888: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 791889: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x79188fu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 79188f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_791892: /* 791892: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 791895: mov ecx, dword ptr [eax + 0xbc] */
  ecx = R32((uint32_t)(eax + 0xbcu));
/* 79189b: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 79189d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79189e: mov ecx, edi */
  ecx = edi;
/* 7918a0: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x7918a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7918a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7918a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7918a5: xor eax, eax */
  eax = 0;
/* 7918a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7918a8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7918d0(void) {
  LOAD_REGS();
L_7918d0: /* 7918d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7918d2: push 0x9cce36 */
  { uint32_t v = 0x9cce36u; esp -= 4; W32(esp, v); }
/* 7918d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7918dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7918de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7918e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7918e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7918e7: mov esi, ecx */
  esi = ecx;
/* 7918e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7918ed: mov dword ptr [esi], 0xa0a380 */
  W32((uint32_t)(esi), 0xa0a380u);
/* 7918f3: mov dword ptr [esi + 0x28], 0xa0a37c */
  W32((uint32_t)(esi + 0x28u), 0xa0a37cu);
/* 7918fa: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 791902: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x791908u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 791908: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 79190e: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 791913: call 0x6c3e13 */
  esp -= 4; W32(esp, 0x791918u); SPILL(); f_6c3e13(); if (g_unwind) return; RELOAD();
/* 791918: mov ecx, esi */
  ecx = esi;
/* 79191a: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 791922: call 0x6c8dc3 */
  esp -= 4; W32(esp, 0x791927u); SPILL(); f_6c8dc3(); if (g_unwind) return; RELOAD();
/* 791927: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 79192b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79192c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 791933: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 791936: ret  */
  esp += 4; SPILL(); return;
}

void f_791960(void) {
  LOAD_REGS();
L_791960: /* 791960: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 791962: push 0x9cce58 */
  { uint32_t v = 0x9cce58u; esp -= 4; W32(esp, v); }
/* 791967: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79196d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79196e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 791975: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 791976: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 791977: mov esi, ecx */
  esi = ecx;
/* 791979: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 79197d: call dword ptr [0xcfa2a4] */
  esp -= 4; W32(esp, 0x791983u); SPILL(); f_4e22e3(); if (g_unwind) return; /* Core!??0USubsystem@@IAE@XZ */ RELOAD();
/* 791983: mov dword ptr [esi], 0xa0a380 */
  W32((uint32_t)(esi), 0xa0a380u);
/* 791989: mov dword ptr [esi + 0x28], 0xa0a37c */
  W32((uint32_t)(esi + 0x28u), 0xa0a37cu);
/* 791990: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 791996: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 79199e: mov dword ptr [esi + 0xb0], 0xa0a2e8 */
  W32((uint32_t)(esi + 0xb0u), 0xa0a2e8u);
/* 7919a8: mov dword ptr [esi + 0xb4], esi */
  W32((uint32_t)(esi + 0xb4u), esi);
/* 7919ae: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7919b4u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7919b4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7919b8: mov dword ptr [esi + 0xc8], 1 */
  W32((uint32_t)(esi + 0xc8u), 0x1u);
/* 7919c2: mov dword ptr [esi + 0xcc], 0 */
  W32((uint32_t)(esi + 0xccu), 0x0u);
/* 7919cc: mov dword ptr [esi + 0xd0], 0 */
  W32((uint32_t)(esi + 0xd0u), 0x0u);
/* 7919d6: mov eax, esi */
  eax = esi;
/* 7919d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7919d9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7919e0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7919e3: ret  */
  esp += 4; SPILL(); return;
}

void f_791a20(void) {
  LOAD_REGS();
L_791a20: /* 791a20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 791a22: push 0x9cce78 */
  { uint32_t v = 0x9cce78u; esp -= 4; W32(esp, v); }
/* 791a27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 791a2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 791a2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 791a35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 791a36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 791a37: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 791a38: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 791a3c: mov esi, ecx */
  esi = ecx;
/* 791a3e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 791a3f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 791a43: call 0x6c2806 */
  esp -= 4; W32(esp, 0x791a48u); SPILL(); f_6c2806(); if (g_unwind) return; RELOAD();
/* 791a48: mov dword ptr [esi], 0xa0a380 */
  W32((uint32_t)(esi), 0xa0a380u);
/* 791a4e: mov dword ptr [esi + 0x28], 0xa0a37c */
  W32((uint32_t)(esi + 0x28u), 0xa0a37cu);
/* 791a55: mov dword ptr [esi + 0xb0], 0xa0a2e8 */
  W32((uint32_t)(esi + 0xb0u), 0xa0a2e8u);
/* 791a5f: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 791a65: mov dword ptr [esi + 0xb4], eax */
  W32((uint32_t)(esi + 0xb4u), eax);
/* 791a6b: mov ecx, dword ptr [edi + 0xb8] */
  ecx = R32((uint32_t)(edi + 0xb8u));
/* 791a71: lea edx, [edi + 0xbc] */
  edx = (uint32_t)(edi + 0xbcu);
/* 791a77: mov dword ptr [esi + 0xb8], ecx */
  W32((uint32_t)(esi + 0xb8u), ecx);
/* 791a7d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 791a7e: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 791a84: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 791a8c: call 0x6cb258 */
  esp -= 4; W32(esp, 0x791a91u); SPILL(); f_6cb258(); if (g_unwind) return; RELOAD();
/* 791a91: add edi, 0xc8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 791a97: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 791a99: lea eax, [esi + 0xc8] */
  eax = (uint32_t)(esi + 0xc8u);
/* 791a9f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 791aa1: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 791aa4: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 791aa7: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 791aaa: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 791aad: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 791ab1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 791ab2: mov eax, esi */
  eax = esi;
/* 791ab4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 791ab5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 791abc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 791abf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_791b00(void) {
  LOAD_REGS();
L_791b00: /* 791b00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 791b01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 791b02: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 791b06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 791b07: mov esi, ecx */
  esi = ecx;
/* 791b09: call 0x6c90ac */
  esp -= 4; W32(esp, 0x791b0eu); SPILL(); f_6c90ac(); if (g_unwind) return; RELOAD();
/* 791b0e: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 791b14: mov dword ptr [esi + 0xb4], eax */
  W32((uint32_t)(esi + 0xb4u), eax);
/* 791b1a: mov ecx, dword ptr [edi + 0xb8] */
  ecx = R32((uint32_t)(edi + 0xb8u));
/* 791b20: lea edx, [edi + 0xbc] */
  edx = (uint32_t)(edi + 0xbcu);
/* 791b26: mov dword ptr [esi + 0xb8], ecx */
  W32((uint32_t)(esi + 0xb8u), ecx);
/* 791b2c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 791b2d: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 791b33: call 0x6c5ecf */
  esp -= 4; W32(esp, 0x791b38u); SPILL(); f_6c5ecf(); if (g_unwind) return; RELOAD();
/* 791b38: add edi, 0xc8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 791b3e: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 791b40: lea eax, [esi + 0xc8] */
  eax = (uint32_t)(esi + 0xc8u);
/* 791b46: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 791b48: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 791b4b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 791b4e: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 791b51: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 791b54: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 791b55: mov eax, esi */
  eax = esi;
/* 791b57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 791b58: ret 4 */
  esp += 8; SPILL(); return;
}

void f_791b80(void) {
  LOAD_REGS();
L_791b80: /* 791b80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 791b81: mov esi, ecx */
  esi = ecx;
/* 791b83: call 0x6c3bc5 */
  esp -= 4; W32(esp, 0x791b88u); SPILL(); f_6c3bc5(); if (g_unwind) return; RELOAD();
/* 791b88: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 791b8d: je 0x791b9e */
  if (zf) goto L_791b9e;
L_791b8f: /* 791b8f: push 0xd4 */
  { uint32_t v = 0xd4u; esp -= 4; W32(esp, v); }
/* 791b94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 791b95: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x791b9bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 791b9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_791b9e: /* 791b9e: mov eax, esi */
  eax = esi;
/* 791ba0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 791ba1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_791bc0(void) {
  LOAD_REGS();
L_791bc0: /* 791bc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 791bc1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 791bc5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 791bc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 791bc9: mov esi, ecx */
  esi = ecx;
/* 791bcb: je 0x791c00 */
  if (zf) goto L_791c00;
L_791bcd: /* 791bcd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 791bd0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 791bd1: push 0x6c3bc5 */
  { uint32_t v = 0x6c3bc5u; esp -= 4; W32(esp, v); }
/* 791bd6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 791bd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 791bda: push 0xd4 */
  { uint32_t v = 0xd4u; esp -= 4; W32(esp, v); }
/* 791bdf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 791be0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x791be5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 791be5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 791be8: je 0x791bf8 */
  if (zf) goto L_791bf8;
L_791bea: /* 791bea: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 791bf0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 791bf2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 791bf4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 791bf5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x791bf8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_791bf8: /* 791bf8: mov eax, edi */
  eax = edi;
/* 791bfa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 791bfb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 791bfc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 791bfd: ret 4 */
  esp += 8; SPILL(); return;
L_791c00: /* 791c00: mov ecx, esi */
  ecx = esi;
/* 791c02: call 0x6c3bc5 */
  esp -= 4; W32(esp, 0x791c07u); SPILL(); f_6c3bc5(); if (g_unwind) return; RELOAD();
/* 791c07: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 791c0a: je 0x791c1b */
  if (zf) goto L_791c1b;
L_791c0c: /* 791c0c: push 0xd4 */
  { uint32_t v = 0xd4u; esp -= 4; W32(esp, v); }
/* 791c11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 791c12: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x791c18u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 791c18: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_791c1b: /* 791c1b: mov eax, esi */
  eax = esi;
/* 791c1d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 791c1e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 791c1f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_791c50(void) {
  LOAD_REGS();
L_791c50: /* 791c50: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 791c54: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 791c56: je 0x791c5d */
  if (zf) goto L_791c5d;
L_791c58: /* 791c58: jmp 0x6c3aa3 */
  SPILL(); f_6c3aa3(); return;
L_791c5d: /* 791c5d: ret  */
  esp += 4; SPILL(); return;
}

void f_791c70(void) {
  LOAD_REGS();
L_791c70: /* 791c70: mov eax, ecx */
  eax = ecx;
/* 791c72: mov dword ptr [eax], 0xa0a44c */
  W32((uint32_t)(eax), 0xa0a44cu);
/* 791c78: ret 4 */
  esp += 8; SPILL(); return;
}

void f_791c90(void) {
  LOAD_REGS();
L_791c90: /* 791c90: mov eax, ecx */
  eax = ecx;
/* 791c92: ret 4 */
  esp += 8; SPILL(); return;
}

void f_791cb0(void) {
  LOAD_REGS();
L_791cb0: /* 791cb0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 791cb4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 791cb8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 791cb9: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 791cbd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 791cbe: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 791cc2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 791cc3: mov edi, eax */
  edi = eax;
/* 791cc5: shl edi, 0xa */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 791cc8: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 791cca: shl edi, 0xa */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 791ccd: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 791ccf: mov dword ptr [ebx], edi */
  W32((uint32_t)(ebx), edi);
/* 791cd1: mov esi, dword ptr [esi*4 + 0xb421f8] */
  esi = R32((uint32_t)(esi*4 + 0xb421f8u));
/* 791cd8: mov edi, dword ptr [edx*4 + 0xb321f8] */
  edi = R32((uint32_t)(edx*4 + 0xb321f8u));
/* 791cdf: mov edx, dword ptr [eax*4 + 0xb221f8] */
  edx = R32((uint32_t)(eax*4 + 0xb221f8u));
/* 791ce6: xor esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 791ce8: xor esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 791cea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 791ceb: lea eax, [ecx + esi*4 + 4] */
  eax = (uint32_t)(ecx + esi*4 + 0x4u);
/* 791cef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 791cf0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 791cf1: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_791d20(void) {
  LOAD_REGS();
L_791d20: /* 791d20: mov eax, ecx */
  eax = ecx;
/* 791d22: mov dword ptr [eax], 0xa0a44c */
  W32((uint32_t)(eax), 0xa0a44cu);
/* 791d28: ret  */
  esp += 4; SPILL(); return;
}

void f_791d40(void) {
  LOAD_REGS();
L_791d40: /* 791d40: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 791d45: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 791d47: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 791d4b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 791d4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 791d4e: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 791d52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 791d53: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x791d55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 791d55: ret  */
  esp += 4; SPILL(); return;
}

void f_791d70(void) {
  LOAD_REGS();
L_791d70: /* 791d70: xor eax, eax */
  eax = 0;
/* 791d72: mov dword ptr [0xb5220c], eax */
  W32((uint32_t)(0xb5220cu), eax);
/* 791d77: mov dword ptr [0xb52204], eax */
  W32((uint32_t)(0xb52204u), eax);
/* 791d7c: mov dword ptr [0xb52200], eax */
  W32((uint32_t)(0xb52200u), eax);
/* 791d81: ret  */
  esp += 4; SPILL(); return;
}

void f_791da0(void) {
  LOAD_REGS();
L_791da0: /* 791da0: xor eax, eax */
  eax = 0;
/* 791da2: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_791dc0(void) {
  LOAD_REGS();
L_791dc0: /* 791dc0: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 791dc4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 791dca: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 791dcc: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 791dcf: jp 0x791dda */
  if (pf) goto L_791dda;
L_791dd1: /* 791dd1: fld dword ptr [0xa0a488] */
  { double v = F32((uint32_t)(0xa0a488u)); FPUSH(v); }
/* 791dd7: ret 0x10 */
  esp += 20; SPILL(); return;
L_791dda: /* 791dda: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 791dde: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 791de4: fild dword ptr [esp + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 791de8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 791dea: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 791ded: jne 0x791df7 */
  if (!zf) goto L_791df7;
L_791def: /* 791def: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 791df5: jmp 0x791dfd */
  goto L_791dfd;
L_791df7: /* 791df7: fsub dword ptr [0x9f7194] */
  ST0 = ST0 - (F32((uint32_t)(0x9f7194u)));
L_791dfd: /* 791dfd: fimul dword ptr [esp + 0x10] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(esp + 0x10u)));
/* 791e01: fsub qword ptr [0xa09498] */
  ST0 = ST0 - (F64((uint32_t)(0xa09498u)));
/* 791e07: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* 791e0b: fdiv dword ptr [esp + 8] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x8u)));
/* 791e0f: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_791e40(void) {
  LOAD_REGS();
L_791e40: /* 791e40: ret 4 */
  esp += 8; SPILL(); return;
}

void f_791e60(void) {
  LOAD_REGS();
L_791e60: /* 791e60: ret  */
  esp += 4; SPILL(); return;
}

void f_791e80(void) {
  LOAD_REGS();
L_791e80: /* 791e80: ret 4 */
  esp += 8; SPILL(); return;
}

void f_791ea0(void) {
  LOAD_REGS();
L_791ea0: /* 791ea0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 791ea1: mov esi, ecx */
  esi = ecx;
/* 791ea3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x791ea9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 791ea9: mov eax, esi */
  eax = esi;
/* 791eab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 791eac: ret  */
  esp += 4; SPILL(); return;
}

void f_791ec0(void) {
  LOAD_REGS();
L_791ec0: /* 791ec0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 791ec2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 791ec6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 791ec9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_791ee0(void) {
  LOAD_REGS();
L_791ee0: /* 791ee0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 791ee2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 791ee6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 791ee9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_791f00(void) {
  LOAD_REGS();
L_791f00: /* 791f00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 791f04: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 791f06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 791f07: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x791f0du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 791f0d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_791f20(void) {
  LOAD_REGS();
L_791f20: /* 791f20: mov eax, 1 */
  eax = 0x1u;
/* 791f25: ret  */
  esp += 4; SPILL(); return;
}

void f_791f40(void) {
  LOAD_REGS();
L_791f40: /* 791f40: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 791f44: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 791f48: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 791f4a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 791f4b: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 791f4d: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 791f4f: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 791f51: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 791f52: ret  */
  esp += 4; SPILL(); return;
}

void f_791f70(void) {
  LOAD_REGS();
L_791f70: /* 791f70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 791f74: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 791f75: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 791f76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 791f77: mov ecx, eax */
  ecx = eax;
/* 791f79: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 791f7b: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 791f7e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 791f7f: mov edi, dword ptr [ecx + 8] */
  edi = R32((uint32_t)(ecx + 0x8u));
/* 791f82: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 791f86: mov ebx, ecx */
  ebx = ecx;
/* 791f88: mov ebp, dword ptr [ebx] */
  ebp = R32((uint32_t)(ebx));
/* 791f8a: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 791f8c: mov ebp, dword ptr [ebx + 4] */
  ebp = R32((uint32_t)(ebx + 0x4u));
/* 791f8f: mov dword ptr [eax + 4], ebp */
  W32((uint32_t)(eax + 0x4u), ebp);
/* 791f92: mov ebx, dword ptr [ebx + 8] */
  ebx = R32((uint32_t)(ebx + 0x8u));
/* 791f95: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 791f98: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 791f9a: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 791f9d: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 791fa0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 791fa1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 791fa2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 791fa3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 791fa4: ret  */
  esp += 4; SPILL(); return;
}

void f_791fc0(void) {
  LOAD_REGS();
L_791fc0: /* 791fc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 791fc4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 791fc5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 791fc6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 791fc7: mov ecx, eax */
  ecx = eax;
/* 791fc9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 791fcb: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 791fce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 791fcf: mov edi, dword ptr [ecx + 8] */
  edi = R32((uint32_t)(ecx + 0x8u));
/* 791fd2: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 791fd6: mov ebx, ecx */
  ebx = ecx;
/* 791fd8: mov ebp, dword ptr [ebx] */
  ebp = R32((uint32_t)(ebx));
/* 791fda: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 791fdc: mov ebp, dword ptr [ebx + 4] */
  ebp = R32((uint32_t)(ebx + 0x4u));
/* 791fdf: mov dword ptr [eax + 4], ebp */
  W32((uint32_t)(eax + 0x4u), ebp);
/* 791fe2: mov ebx, dword ptr [ebx + 8] */
  ebx = R32((uint32_t)(ebx + 0x8u));
/* 791fe5: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 791fe8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 791fea: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 791fed: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 791ff0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 791ff1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 791ff2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 791ff3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 791ff4: ret  */
  esp += 4; SPILL(); return;
}

void f_792010(void) {
  LOAD_REGS();
L_792010: /* 792010: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 792011: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 792015: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 792017: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 792019: mov ecx, esi */
  ecx = esi;
/* 79201b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x792021u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 792021: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 792023: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 792026: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 792027: ret  */
  esp += 4; SPILL(); return;
}

void f_792040(void) {
  LOAD_REGS();
L_792040: /* 792040: mov eax, ecx */
  eax = ecx;
/* 792042: ret  */
  esp += 4; SPILL(); return;
}

void f_792060(void) {
  LOAD_REGS();
L_792060: /* 792060: mov eax, ecx */
  eax = ecx;
/* 792062: ret  */
  esp += 4; SPILL(); return;
}

void f_792080(void) {
  LOAD_REGS();
L_792080: /* 792080: mov eax, ecx */
  eax = ecx;
/* 792082: mov dword ptr [eax + 0x2c], 0 */
  W32((uint32_t)(eax + 0x2cu), 0x0u);
/* 792089: ret  */
  esp += 4; SPILL(); return;
}

void f_7920a0(void) {
  LOAD_REGS();
L_7920a0: /* 7920a0: mov dword ptr [ecx], 0xa0a44c */
  W32((uint32_t)(ecx), 0xa0a44cu);
/* 7920a6: ret  */
  esp += 4; SPILL(); return;
}

void f_7920c0(void) {
  LOAD_REGS();
L_7920c0: /* 7920c0: test byte ptr [esp + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7920c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7920c6: mov esi, ecx */
  esi = ecx;
/* 7920c8: mov dword ptr [esi], 0xa0a44c */
  W32((uint32_t)(esi), 0xa0a44cu);
/* 7920ce: je 0x7920dd */
  if (zf) goto L_7920dd;
L_7920d0: /* 7920d0: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7920d5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7920d7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7920d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7920da: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7920ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7920dd: /* 7920dd: mov eax, esi */
  eax = esi;
/* 7920df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7920e0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_792100(void) {
  LOAD_REGS();
L_792100: /* 792100: mov eax, ecx */
  eax = ecx;
/* 792102: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 792106: mov dword ptr [eax], 0xa0a48c */
  W32((uint32_t)(eax), 0xa0a48cu);
/* 79210c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 79210f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 792112: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 792115: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 792118: mov ecx, dword ptr [edx + 0xc] */
  ecx = R32((uint32_t)(edx + 0xcu));
/* 79211b: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 79211e: mov ecx, dword ptr [edx + 0x10] */
  ecx = R32((uint32_t)(edx + 0x10u));
/* 792121: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 792124: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 792125: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 792126: lea ecx, [edx + 0x14] */
  ecx = (uint32_t)(edx + 0x14u);
/* 792129: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 79212b: lea esi, [eax + 0x14] */
  esi = (uint32_t)(eax + 0x14u);
/* 79212e: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 792130: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 792133: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 792136: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 792139: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 79213c: lea ecx, [edx + 0x20] */
  ecx = (uint32_t)(edx + 0x20u);
/* 79213f: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 792141: lea esi, [eax + 0x20] */
  esi = (uint32_t)(eax + 0x20u);
/* 792144: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 792146: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 792149: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 79214c: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 79214f: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 792152: lea ecx, [edx + 0x2c] */
  ecx = (uint32_t)(edx + 0x2cu);
/* 792155: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 792157: lea esi, [eax + 0x2c] */
  esi = (uint32_t)(eax + 0x2cu);
/* 79215a: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 79215c: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 79215f: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 792162: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 792165: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 792168: lea ecx, [edx + 0x38] */
  ecx = (uint32_t)(edx + 0x38u);
/* 79216b: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 79216d: lea esi, [eax + 0x38] */
  esi = (uint32_t)(eax + 0x38u);
/* 792170: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 792172: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 792175: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 792178: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 79217b: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 79217e: lea ecx, [edx + 0x44] */
  ecx = (uint32_t)(edx + 0x44u);
/* 792181: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 792183: lea esi, [eax + 0x44] */
  esi = (uint32_t)(eax + 0x44u);
/* 792186: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 792188: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 79218b: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 79218e: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 792191: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 792194: lea ecx, [edx + 0x50] */
  ecx = (uint32_t)(edx + 0x50u);
/* 792197: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 792199: lea esi, [eax + 0x50] */
  esi = (uint32_t)(eax + 0x50u);
/* 79219c: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 79219e: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7921a1: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7921a4: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7921a7: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 7921aa: mov ecx, dword ptr [edx + 0x5c] */
  ecx = R32((uint32_t)(edx + 0x5cu));
/* 7921ad: mov dword ptr [eax + 0x5c], ecx */
  W32((uint32_t)(eax + 0x5cu), ecx);
/* 7921b0: mov ecx, dword ptr [edx + 0x60] */
  ecx = R32((uint32_t)(edx + 0x60u));
/* 7921b3: mov dword ptr [eax + 0x60], ecx */
  W32((uint32_t)(eax + 0x60u), ecx);
/* 7921b6: mov ecx, dword ptr [edx + 0x64] */
  ecx = R32((uint32_t)(edx + 0x64u));
/* 7921b9: mov dword ptr [eax + 0x64], ecx */
  W32((uint32_t)(eax + 0x64u), ecx);
/* 7921bc: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 7921bf: mov dword ptr [eax + 0x68], ecx */
  W32((uint32_t)(eax + 0x68u), ecx);
/* 7921c2: lea esi, [edx + 0x6c] */
  esi = (uint32_t)(edx + 0x6cu);
/* 7921c5: lea edi, [eax + 0x6c] */
  edi = (uint32_t)(eax + 0x6cu);
/* 7921c8: mov ecx, 7 */
  ecx = 0x7u;
/* 7921cd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7921cf: mov ecx, dword ptr [edx + 0x88] */
  ecx = R32((uint32_t)(edx + 0x88u));
/* 7921d5: mov dword ptr [eax + 0x88], ecx */
  W32((uint32_t)(eax + 0x88u), ecx);
/* 7921db: mov ecx, dword ptr [edx + 0x8c] */
  ecx = R32((uint32_t)(edx + 0x8cu));
/* 7921e1: mov dword ptr [eax + 0x8c], ecx */
  W32((uint32_t)(eax + 0x8cu), ecx);
/* 7921e7: lea ecx, [edx + 0x90] */
  ecx = (uint32_t)(edx + 0x90u);
/* 7921ed: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7921ef: lea esi, [eax + 0x90] */
  esi = (uint32_t)(eax + 0x90u);
/* 7921f5: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7921f7: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7921fa: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7921fd: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 792200: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 792203: mov ecx, dword ptr [edx + 0x9c] */
  ecx = R32((uint32_t)(edx + 0x9cu));
/* 792209: mov dword ptr [eax + 0x9c], ecx */
  W32((uint32_t)(eax + 0x9cu), ecx);
/* 79220f: mov ecx, dword ptr [edx + 0xa0] */
  ecx = R32((uint32_t)(edx + 0xa0u));
/* 792215: mov dword ptr [eax + 0xa0], ecx */
  W32((uint32_t)(eax + 0xa0u), ecx);
/* 79221b: mov ecx, dword ptr [edx + 0xa4] */
  ecx = R32((uint32_t)(edx + 0xa4u));
/* 792221: mov dword ptr [eax + 0xa4], ecx */
  W32((uint32_t)(eax + 0xa4u), ecx);
/* 792227: mov ecx, dword ptr [edx + 0xa8] */
  ecx = R32((uint32_t)(edx + 0xa8u));
/* 79222d: mov dword ptr [eax + 0xa8], ecx */
  W32((uint32_t)(eax + 0xa8u), ecx);
/* 792233: mov ecx, dword ptr [edx + 0xac] */
  ecx = R32((uint32_t)(edx + 0xacu));
/* 792239: mov dword ptr [eax + 0xac], ecx */
  W32((uint32_t)(eax + 0xacu), ecx);
/* 79223f: mov ecx, dword ptr [edx + 0xb0] */
  ecx = R32((uint32_t)(edx + 0xb0u));
/* 792245: mov dword ptr [eax + 0xb0], ecx */
  W32((uint32_t)(eax + 0xb0u), ecx);
/* 79224b: mov ecx, dword ptr [edx + 0xb4] */
  ecx = R32((uint32_t)(edx + 0xb4u));
/* 792251: mov dword ptr [eax + 0xb4], ecx */
  W32((uint32_t)(eax + 0xb4u), ecx);
/* 792257: mov ecx, dword ptr [edx + 0xb8] */
  ecx = R32((uint32_t)(edx + 0xb8u));
/* 79225d: mov dword ptr [eax + 0xb8], ecx */
  W32((uint32_t)(eax + 0xb8u), ecx);
/* 792263: mov ecx, dword ptr [edx + 0xbc] */
  ecx = R32((uint32_t)(edx + 0xbcu));
/* 792269: mov dword ptr [eax + 0xbc], ecx */
  W32((uint32_t)(eax + 0xbcu), ecx);
/* 79226f: mov ecx, dword ptr [edx + 0xc0] */
  ecx = R32((uint32_t)(edx + 0xc0u));
/* 792275: mov dword ptr [eax + 0xc0], ecx */
  W32((uint32_t)(eax + 0xc0u), ecx);
/* 79227b: mov ecx, dword ptr [edx + 0xc4] */
  ecx = R32((uint32_t)(edx + 0xc4u));
/* 792281: mov dword ptr [eax + 0xc4], ecx */
  W32((uint32_t)(eax + 0xc4u), ecx);
/* 792287: mov ecx, dword ptr [edx + 0xc8] */
  ecx = R32((uint32_t)(edx + 0xc8u));
/* 79228d: mov dword ptr [eax + 0xc8], ecx */
  W32((uint32_t)(eax + 0xc8u), ecx);
/* 792293: mov ecx, dword ptr [edx + 0xcc] */
  ecx = R32((uint32_t)(edx + 0xccu));
/* 792299: mov dword ptr [eax + 0xcc], ecx */
  W32((uint32_t)(eax + 0xccu), ecx);
/* 79229f: mov ecx, dword ptr [edx + 0xd0] */
  ecx = R32((uint32_t)(edx + 0xd0u));
/* 7922a5: mov dword ptr [eax + 0xd0], ecx */
  W32((uint32_t)(eax + 0xd0u), ecx);
/* 7922ab: mov ecx, dword ptr [edx + 0xd4] */
  ecx = R32((uint32_t)(edx + 0xd4u));
/* 7922b1: mov dword ptr [eax + 0xd4], ecx */
  W32((uint32_t)(eax + 0xd4u), ecx);
/* 7922b7: mov ecx, dword ptr [edx + 0xd8] */
  ecx = R32((uint32_t)(edx + 0xd8u));
/* 7922bd: mov dword ptr [eax + 0xd8], ecx */
  W32((uint32_t)(eax + 0xd8u), ecx);
/* 7922c3: mov ecx, dword ptr [edx + 0xdc] */
  ecx = R32((uint32_t)(edx + 0xdcu));
/* 7922c9: mov dword ptr [eax + 0xdc], ecx */
  W32((uint32_t)(eax + 0xdcu), ecx);
/* 7922cf: mov ecx, dword ptr [edx + 0xe0] */
  ecx = R32((uint32_t)(edx + 0xe0u));
/* 7922d5: mov dword ptr [eax + 0xe0], ecx */
  W32((uint32_t)(eax + 0xe0u), ecx);
/* 7922db: mov ecx, dword ptr [edx + 0xe4] */
  ecx = R32((uint32_t)(edx + 0xe4u));
/* 7922e1: mov dword ptr [eax + 0xe4], ecx */
  W32((uint32_t)(eax + 0xe4u), ecx);
/* 7922e7: mov ecx, dword ptr [edx + 0xe8] */
  ecx = R32((uint32_t)(edx + 0xe8u));
/* 7922ed: mov dword ptr [eax + 0xe8], ecx */
  W32((uint32_t)(eax + 0xe8u), ecx);
/* 7922f3: mov ecx, dword ptr [edx + 0xec] */
  ecx = R32((uint32_t)(edx + 0xecu));
/* 7922f9: mov dword ptr [eax + 0xec], ecx */
  W32((uint32_t)(eax + 0xecu), ecx);
/* 7922ff: mov ecx, dword ptr [edx + 0xf0] */
  ecx = R32((uint32_t)(edx + 0xf0u));
/* 792305: mov dword ptr [eax + 0xf0], ecx */
  W32((uint32_t)(eax + 0xf0u), ecx);
/* 79230b: mov ecx, dword ptr [edx + 0xf4] */
  ecx = R32((uint32_t)(edx + 0xf4u));
/* 792311: mov dword ptr [eax + 0xf4], ecx */
  W32((uint32_t)(eax + 0xf4u), ecx);
/* 792317: mov ecx, dword ptr [edx + 0xf8] */
  ecx = R32((uint32_t)(edx + 0xf8u));
/* 79231d: mov dword ptr [eax + 0xf8], ecx */
  W32((uint32_t)(eax + 0xf8u), ecx);
/* 792323: mov ecx, dword ptr [edx + 0xfc] */
  ecx = R32((uint32_t)(edx + 0xfcu));
/* 792329: mov dword ptr [eax + 0xfc], ecx */
  W32((uint32_t)(eax + 0xfcu), ecx);
/* 79232f: mov ecx, dword ptr [edx + 0x100] */
  ecx = R32((uint32_t)(edx + 0x100u));
/* 792335: mov dword ptr [eax + 0x100], ecx */
  W32((uint32_t)(eax + 0x100u), ecx);
/* 79233b: mov ecx, dword ptr [edx + 0x104] */
  ecx = R32((uint32_t)(edx + 0x104u));
/* 792341: mov dword ptr [eax + 0x104], ecx */
  W32((uint32_t)(eax + 0x104u), ecx);
/* 792347: mov ecx, dword ptr [edx + 0x108] */
  ecx = R32((uint32_t)(edx + 0x108u));
/* 79234d: mov dword ptr [eax + 0x108], ecx */
  W32((uint32_t)(eax + 0x108u), ecx);
/* 792353: mov ecx, dword ptr [edx + 0x10c] */
  ecx = R32((uint32_t)(edx + 0x10cu));
/* 792359: mov dword ptr [eax + 0x10c], ecx */
  W32((uint32_t)(eax + 0x10cu), ecx);
/* 79235f: mov edx, dword ptr [edx + 0x110] */
  edx = R32((uint32_t)(edx + 0x110u));
/* 792365: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 792366: mov dword ptr [eax + 0x110], edx */
  W32((uint32_t)(eax + 0x110u), edx);
/* 79236c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79236d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_792410(void) {
  LOAD_REGS();
L_792410: /* 792410: mov eax, ecx */
  eax = ecx;
/* 792412: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 792416: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 792419: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 79241c: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 79241f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 792422: mov ecx, dword ptr [edx + 0xc] */
  ecx = R32((uint32_t)(edx + 0xcu));
/* 792425: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 792428: mov ecx, dword ptr [edx + 0x10] */
  ecx = R32((uint32_t)(edx + 0x10u));
/* 79242b: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 79242e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79242f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 792430: lea ecx, [edx + 0x14] */
  ecx = (uint32_t)(edx + 0x14u);
/* 792433: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 792435: lea esi, [eax + 0x14] */
  esi = (uint32_t)(eax + 0x14u);
/* 792438: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 79243a: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 79243d: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 792440: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 792443: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 792446: lea ecx, [edx + 0x20] */
  ecx = (uint32_t)(edx + 0x20u);
/* 792449: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 79244b: lea esi, [eax + 0x20] */
  esi = (uint32_t)(eax + 0x20u);
/* 79244e: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 792450: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 792453: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 792456: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 792459: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 79245c: lea ecx, [edx + 0x2c] */
  ecx = (uint32_t)(edx + 0x2cu);
/* 79245f: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 792461: lea esi, [eax + 0x2c] */
  esi = (uint32_t)(eax + 0x2cu);
/* 792464: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 792466: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 792469: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 79246c: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 79246f: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 792472: lea ecx, [edx + 0x38] */
  ecx = (uint32_t)(edx + 0x38u);
/* 792475: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 792477: lea esi, [eax + 0x38] */
  esi = (uint32_t)(eax + 0x38u);
/* 79247a: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 79247c: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 79247f: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 792482: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 792485: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 792488: lea ecx, [edx + 0x44] */
  ecx = (uint32_t)(edx + 0x44u);
/* 79248b: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 79248d: lea esi, [eax + 0x44] */
  esi = (uint32_t)(eax + 0x44u);
/* 792490: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 792492: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 792495: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 792498: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 79249b: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 79249e: lea ecx, [edx + 0x50] */
  ecx = (uint32_t)(edx + 0x50u);
/* 7924a1: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7924a3: lea esi, [eax + 0x50] */
  esi = (uint32_t)(eax + 0x50u);
/* 7924a6: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7924a8: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7924ab: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7924ae: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7924b1: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 7924b4: mov ecx, dword ptr [edx + 0x5c] */
  ecx = R32((uint32_t)(edx + 0x5cu));
/* 7924b7: mov dword ptr [eax + 0x5c], ecx */
  W32((uint32_t)(eax + 0x5cu), ecx);
/* 7924ba: mov ecx, dword ptr [edx + 0x60] */
  ecx = R32((uint32_t)(edx + 0x60u));
/* 7924bd: mov dword ptr [eax + 0x60], ecx */
  W32((uint32_t)(eax + 0x60u), ecx);
/* 7924c0: mov ecx, dword ptr [edx + 0x64] */
  ecx = R32((uint32_t)(edx + 0x64u));
/* 7924c3: mov dword ptr [eax + 0x64], ecx */
  W32((uint32_t)(eax + 0x64u), ecx);
/* 7924c6: mov ecx, dword ptr [edx + 0x68] */
  ecx = R32((uint32_t)(edx + 0x68u));
/* 7924c9: mov dword ptr [eax + 0x68], ecx */
  W32((uint32_t)(eax + 0x68u), ecx);
/* 7924cc: lea esi, [edx + 0x6c] */
  esi = (uint32_t)(edx + 0x6cu);
/* 7924cf: lea edi, [eax + 0x6c] */
  edi = (uint32_t)(eax + 0x6cu);
/* 7924d2: mov ecx, 7 */
  ecx = 0x7u;
/* 7924d7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7924d9: mov ecx, dword ptr [edx + 0x88] */
  ecx = R32((uint32_t)(edx + 0x88u));
/* 7924df: mov dword ptr [eax + 0x88], ecx */
  W32((uint32_t)(eax + 0x88u), ecx);
/* 7924e5: mov ecx, dword ptr [edx + 0x8c] */
  ecx = R32((uint32_t)(edx + 0x8cu));
/* 7924eb: mov dword ptr [eax + 0x8c], ecx */
  W32((uint32_t)(eax + 0x8cu), ecx);
/* 7924f1: lea ecx, [edx + 0x90] */
  ecx = (uint32_t)(edx + 0x90u);
/* 7924f7: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7924f9: lea esi, [eax + 0x90] */
  esi = (uint32_t)(eax + 0x90u);
/* 7924ff: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 792501: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 792504: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 792507: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 79250a: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 79250d: mov ecx, dword ptr [edx + 0x9c] */
  ecx = R32((uint32_t)(edx + 0x9cu));
/* 792513: mov dword ptr [eax + 0x9c], ecx */
  W32((uint32_t)(eax + 0x9cu), ecx);
/* 792519: mov ecx, dword ptr [edx + 0xa0] */
  ecx = R32((uint32_t)(edx + 0xa0u));
/* 79251f: mov dword ptr [eax + 0xa0], ecx */
  W32((uint32_t)(eax + 0xa0u), ecx);
/* 792525: mov ecx, dword ptr [edx + 0xa4] */
  ecx = R32((uint32_t)(edx + 0xa4u));
/* 79252b: mov dword ptr [eax + 0xa4], ecx */
  W32((uint32_t)(eax + 0xa4u), ecx);
/* 792531: mov ecx, dword ptr [edx + 0xa8] */
  ecx = R32((uint32_t)(edx + 0xa8u));
/* 792537: mov dword ptr [eax + 0xa8], ecx */
  W32((uint32_t)(eax + 0xa8u), ecx);
/* 79253d: mov ecx, dword ptr [edx + 0xac] */
  ecx = R32((uint32_t)(edx + 0xacu));
/* 792543: mov dword ptr [eax + 0xac], ecx */
  W32((uint32_t)(eax + 0xacu), ecx);
/* 792549: mov ecx, dword ptr [edx + 0xb0] */
  ecx = R32((uint32_t)(edx + 0xb0u));
/* 79254f: mov dword ptr [eax + 0xb0], ecx */
  W32((uint32_t)(eax + 0xb0u), ecx);
/* 792555: mov ecx, dword ptr [edx + 0xb4] */
  ecx = R32((uint32_t)(edx + 0xb4u));
/* 79255b: mov dword ptr [eax + 0xb4], ecx */
  W32((uint32_t)(eax + 0xb4u), ecx);
/* 792561: mov ecx, dword ptr [edx + 0xb8] */
  ecx = R32((uint32_t)(edx + 0xb8u));
/* 792567: mov dword ptr [eax + 0xb8], ecx */
  W32((uint32_t)(eax + 0xb8u), ecx);
/* 79256d: mov ecx, dword ptr [edx + 0xbc] */
  ecx = R32((uint32_t)(edx + 0xbcu));
/* 792573: mov dword ptr [eax + 0xbc], ecx */
  W32((uint32_t)(eax + 0xbcu), ecx);
/* 792579: mov ecx, dword ptr [edx + 0xc0] */
  ecx = R32((uint32_t)(edx + 0xc0u));
/* 79257f: mov dword ptr [eax + 0xc0], ecx */
  W32((uint32_t)(eax + 0xc0u), ecx);
/* 792585: mov ecx, dword ptr [edx + 0xc4] */
  ecx = R32((uint32_t)(edx + 0xc4u));
/* 79258b: mov dword ptr [eax + 0xc4], ecx */
  W32((uint32_t)(eax + 0xc4u), ecx);
/* 792591: mov ecx, dword ptr [edx + 0xc8] */
  ecx = R32((uint32_t)(edx + 0xc8u));
/* 792597: mov dword ptr [eax + 0xc8], ecx */
  W32((uint32_t)(eax + 0xc8u), ecx);
/* 79259d: mov ecx, dword ptr [edx + 0xcc] */
  ecx = R32((uint32_t)(edx + 0xccu));
/* 7925a3: mov dword ptr [eax + 0xcc], ecx */
  W32((uint32_t)(eax + 0xccu), ecx);
/* 7925a9: mov ecx, dword ptr [edx + 0xd0] */
  ecx = R32((uint32_t)(edx + 0xd0u));
/* 7925af: mov dword ptr [eax + 0xd0], ecx */
  W32((uint32_t)(eax + 0xd0u), ecx);
/* 7925b5: mov ecx, dword ptr [edx + 0xd4] */
  ecx = R32((uint32_t)(edx + 0xd4u));
/* 7925bb: mov dword ptr [eax + 0xd4], ecx */
  W32((uint32_t)(eax + 0xd4u), ecx);
/* 7925c1: mov ecx, dword ptr [edx + 0xd8] */
  ecx = R32((uint32_t)(edx + 0xd8u));
/* 7925c7: mov dword ptr [eax + 0xd8], ecx */
  W32((uint32_t)(eax + 0xd8u), ecx);
/* 7925cd: mov ecx, dword ptr [edx + 0xdc] */
  ecx = R32((uint32_t)(edx + 0xdcu));
/* 7925d3: mov dword ptr [eax + 0xdc], ecx */
  W32((uint32_t)(eax + 0xdcu), ecx);
/* 7925d9: mov ecx, dword ptr [edx + 0xe0] */
  ecx = R32((uint32_t)(edx + 0xe0u));
/* 7925df: mov dword ptr [eax + 0xe0], ecx */
  W32((uint32_t)(eax + 0xe0u), ecx);
/* 7925e5: mov ecx, dword ptr [edx + 0xe4] */
  ecx = R32((uint32_t)(edx + 0xe4u));
/* 7925eb: mov dword ptr [eax + 0xe4], ecx */
  W32((uint32_t)(eax + 0xe4u), ecx);
/* 7925f1: mov ecx, dword ptr [edx + 0xe8] */
  ecx = R32((uint32_t)(edx + 0xe8u));
/* 7925f7: mov dword ptr [eax + 0xe8], ecx */
  W32((uint32_t)(eax + 0xe8u), ecx);
/* 7925fd: mov ecx, dword ptr [edx + 0xec] */
  ecx = R32((uint32_t)(edx + 0xecu));
/* 792603: mov dword ptr [eax + 0xec], ecx */
  W32((uint32_t)(eax + 0xecu), ecx);
/* 792609: mov ecx, dword ptr [edx + 0xf0] */
  ecx = R32((uint32_t)(edx + 0xf0u));
/* 79260f: mov dword ptr [eax + 0xf0], ecx */
  W32((uint32_t)(eax + 0xf0u), ecx);
/* 792615: mov ecx, dword ptr [edx + 0xf4] */
  ecx = R32((uint32_t)(edx + 0xf4u));
/* 79261b: mov dword ptr [eax + 0xf4], ecx */
  W32((uint32_t)(eax + 0xf4u), ecx);
/* 792621: mov ecx, dword ptr [edx + 0xf8] */
  ecx = R32((uint32_t)(edx + 0xf8u));
/* 792627: mov dword ptr [eax + 0xf8], ecx */
  W32((uint32_t)(eax + 0xf8u), ecx);
/* 79262d: mov ecx, dword ptr [edx + 0xfc] */
  ecx = R32((uint32_t)(edx + 0xfcu));
/* 792633: mov dword ptr [eax + 0xfc], ecx */
  W32((uint32_t)(eax + 0xfcu), ecx);
/* 792639: mov ecx, dword ptr [edx + 0x100] */
  ecx = R32((uint32_t)(edx + 0x100u));
/* 79263f: mov dword ptr [eax + 0x100], ecx */
  W32((uint32_t)(eax + 0x100u), ecx);
/* 792645: mov ecx, dword ptr [edx + 0x104] */
  ecx = R32((uint32_t)(edx + 0x104u));
/* 79264b: mov dword ptr [eax + 0x104], ecx */
  W32((uint32_t)(eax + 0x104u), ecx);
/* 792651: mov ecx, dword ptr [edx + 0x108] */
  ecx = R32((uint32_t)(edx + 0x108u));
/* 792657: mov dword ptr [eax + 0x108], ecx */
  W32((uint32_t)(eax + 0x108u), ecx);
/* 79265d: mov ecx, dword ptr [edx + 0x10c] */
  ecx = R32((uint32_t)(edx + 0x10cu));
/* 792663: mov dword ptr [eax + 0x10c], ecx */
  W32((uint32_t)(eax + 0x10cu), ecx);
/* 792669: mov edx, dword ptr [edx + 0x110] */
  edx = R32((uint32_t)(edx + 0x110u));
/* 79266f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 792670: mov dword ptr [eax + 0x110], edx */
  W32((uint32_t)(eax + 0x110u), edx);
/* 792676: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 792677: ret 4 */
  esp += 8; SPILL(); return;
}

void f_792720(void) {
  LOAD_REGS();
L_792720: /* 792720: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 792721: mov esi, ecx */
  esi = ecx;
/* 792723: call 0x6ca880 */
  esp -= 4; W32(esp, 0x792728u); SPILL(); f_6ca880(); if (g_unwind) return; RELOAD();
/* 792728: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79272d: je 0x79273c */
  if (zf) goto L_79273c;
L_79272f: /* 79272f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 792734: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 792736: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 792738: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 792739: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x79273cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_79273c: /* 79273c: mov eax, esi */
  eax = esi;
/* 79273e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79273f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_792760(void) {
  LOAD_REGS();
L_792760: /* 792760: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 792761: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 792765: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 792768: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 792769: mov esi, ecx */
  esi = ecx;
/* 79276b: je 0x7927a0 */
  if (zf) goto L_7927a0;
L_79276d: /* 79276d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 792770: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 792771: push 0x6ca880 */
  { uint32_t v = 0x6ca880u; esp -= 4; W32(esp, v); }
/* 792776: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 792779: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79277a: push 0x114 */
  { uint32_t v = 0x114u; esp -= 4; W32(esp, v); }
/* 79277f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 792780: call 0x99ca3d */
  esp -= 4; W32(esp, 0x792785u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 792785: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 792788: je 0x792798 */
  if (zf) goto L_792798;
L_79278a: /* 79278a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 792790: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 792792: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 792794: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 792795: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x792798u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_792798: /* 792798: mov eax, edi */
  eax = edi;
/* 79279a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79279b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79279c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79279d: ret 4 */
  esp += 8; SPILL(); return;
L_7927a0: /* 7927a0: mov ecx, esi */
  ecx = esi;
/* 7927a2: call 0x6ca880 */
  esp -= 4; W32(esp, 0x7927a7u); SPILL(); f_6ca880(); if (g_unwind) return; RELOAD();
/* 7927a7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7927aa: je 0x7927b9 */
  if (zf) goto L_7927b9;
L_7927ac: /* 7927ac: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7927b1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7927b3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7927b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7927b6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7927b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7927b9: /* 7927b9: mov eax, esi */
  eax = esi;
/* 7927bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7927bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7927bd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7927e0(void) {
  LOAD_REGS();
L_7927e0: /* 7927e0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 7927e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7927e5: fadd qword ptr [0xa09498] */
  ST0 = ST0 + (F64((uint32_t)(0xa09498u)));
/* 7927eb: mov esi, dword ptr [0xcfa5d8] */
  esi = R32((uint32_t)(0xcfa5d8u));
/* 7927f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7927f2: fmul qword ptr [0xa0a4c8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0a4c8u)));
/* 7927f8: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7927fb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7927fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7927fd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 792800: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 792802: jge 0x792808 */
  if ((sf == of)) goto L_792808;
L_792804: /* 792804: xor eax, eax */
  eax = 0;
/* 792806: jmp 0x792814 */
  goto L_792814;
L_792808: /* 792808: cmp eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 79280d: jl 0x792814 */
  if ((sf != of)) goto L_792814;
L_79280f: /* 79280f: mov eax, 0x3fff */
  eax = 0x3fffu;
L_792814: /* 792814: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 792818: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 79281c: fadd qword ptr [0xa09498] */
  ST0 = ST0 + (F64((uint32_t)(0xa09498u)));
/* 792822: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 792823: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 792825: fmul qword ptr [0xa0a4c8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0a4c8u)));
/* 79282b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 79282e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x792830u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 792830: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 792833: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 792835: jge 0x79283b */
  if ((sf == of)) goto L_79283b;
L_792837: /* 792837: xor eax, eax */
  eax = 0;
/* 792839: jmp 0x792847 */
  goto L_792847;
L_79283b: /* 79283b: cmp eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 792840: jl 0x792847 */
  if ((sf != of)) goto L_792847;
L_792842: /* 792842: mov eax, 0x3fff */
  eax = 0x3fffu;
L_792847: /* 792847: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 79284b: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 79284f: fadd qword ptr [0xa09498] */
  ST0 = ST0 + (F64((uint32_t)(0xa09498u)));
/* 792855: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 792856: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 792858: fmul qword ptr [0xa0a4c8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0a4c8u)));
/* 79285e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 792861: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x792863u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 792863: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 792866: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 792868: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 792869: jge 0x792876 */
  if ((sf == of)) goto L_792876;
L_79286b: /* 79286b: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 79286f: xor eax, eax */
  eax = 0;
/* 792871: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 792873: ret 0x18 */
  esp += 28; SPILL(); return;
L_792876: /* 792876: cmp eax, 0x3fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 79287b: jge 0x792886 */
  if ((sf == of)) goto L_792886;
L_79287d: /* 79287d: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 792881: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 792883: ret 0x18 */
  esp += 28; SPILL(); return;
L_792886: /* 792886: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 79288a: mov eax, 0x3fff */
  eax = 0x3fffu;
/* 79288f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 792891: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_7928d0(void) {
  LOAD_REGS();
L_7928d0: /* 7928d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7928d1: mov ebp, esp */
  ebp = esp;
/* 7928d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7928d5: push 0x9cce90 */
  { uint32_t v = 0x9cce90u; esp -= 4; W32(esp, v); }
/* 7928da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7928e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7928e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7928e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7928eb: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7928f0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7928f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7928f4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7928f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7928f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7928f7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7928fa: push 0xacac00 */
  { uint32_t v = 0xacac00u; esp -= 4; W32(esp, v); }
/* 7928ff: push 0x114 */
  { uint32_t v = 0x114u; esp -= 4; W32(esp, v); }
/* 792904: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79290b: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x79290du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79290d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79290f: je 0x792929 */
  if (zf) goto L_792929;
L_792911: /* 792911: mov ecx, eax */
  ecx = eax;
/* 792913: call 0x6ca001 */
  esp -= 4; W32(esp, 0x792918u); SPILL(); f_6ca001(); if (g_unwind) return; RELOAD();
/* 792918: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79291b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 792922: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 792923: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 792924: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 792925: mov esp, ebp */
  esp = ebp;
/* 792927: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 792928: ret  */
  esp += 4; SPILL(); return;
L_792929: /* 792929: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79292c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79292d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79292e: xor eax, eax */
  eax = 0;
/* 792930: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 792937: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 792938: mov esp, ebp */
  esp = ebp;
/* 79293a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79293b: ret  */
  esp += 4; SPILL(); return;
}

void f_79293c(void) {
  LOAD_REGS();
L_79293c: /* 79293c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79293f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 792944: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 792947: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 792948: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 79294b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x792950u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_792950(); return;
}

void f_792950(void) {
  LOAD_REGS();
L_792950: /* 792950: push 0xa0a4d4 */
  { uint32_t v = 0xa0a4d4u; esp -= 4; W32(esp, v); }
/* 792955: push 0xacac24 */
  { uint32_t v = 0xacac24u; esp -= 4; W32(esp, v); }
/* 79295a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x792960u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 792960: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 792963: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 792965: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 792967: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79296cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79296c: guest_badaddr(0x79296c); return;
}

void f_7929a0(void) {
  LOAD_REGS();
L_7929a0: /* 7929a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7929a1: mov ebp, esp */
  ebp = esp;
/* 7929a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7929a5: push 0x9ccea0 */
  { uint32_t v = 0x9ccea0u; esp -= 4; W32(esp, v); }
/* 7929aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7929b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7929b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7929b8: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7929bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7929bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7929bd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7929c0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7929c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7929c3: mov edi, ecx */
  edi = ecx;
/* 7929c5: mov ecx, esi */
  ecx = esi;
/* 7929c7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7929ca: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7929d1: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x7929d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7929d7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7929d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7929da: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7929dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7929de: mov ecx, eax */
  ecx = eax;
/* 7929e0: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7929e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7929e3: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 7929e6: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7929e9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7929ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7929ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7929ee: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7929f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7929f2: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7929f5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7929f8: mov edx, esp */
  edx = esp;
/* 7929fa: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7929fc: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7929ff: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 792a02: mov ecx, edi */
  ecx = edi;
/* 792a04: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 792a07: call 0x6c1398 */
  esp -= 4; W32(esp, 0x792a0cu); SPILL(); f_6c1398(); if (g_unwind) return; RELOAD();
/* 792a0c: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 792a0f: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 792a12: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 792a15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 792a16: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 792a17: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 792a1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 792a1b: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 792a1e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 792a21: mov ecx, esp */
  ecx = esp;
/* 792a23: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 792a25: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 792a28: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 792a2b: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 792a2e: mov ecx, edi */
  ecx = edi;
/* 792a30: call 0x6c1398 */
  esp -= 4; W32(esp, 0x792a35u); SPILL(); f_6c1398(); if (g_unwind) return; RELOAD();
/* 792a35: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 792a38: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 792a39: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 792a3a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 792a41: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 792a42: mov esp, ebp */
  esp = ebp;
/* 792a44: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 792a45: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_792a48(void) {
  LOAD_REGS();
L_792a48: /* 792a48: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 792a4b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 792a50: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 792a53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 792a54: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 792a57: call 0x99caf8 */
  esp -= 4; W32(esp, 0x792a5cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_792a5c(); return;
}

void f_792a5c(void) {
  LOAD_REGS();
L_792a5c: /* 792a5c: push 0xa0a500 */
  { uint32_t v = 0xa0a500u; esp -= 4; W32(esp, v); }
/* 792a61: push 0xacac44 */
  { uint32_t v = 0xacac44u; esp -= 4; W32(esp, v); }
/* 792a66: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x792a6cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 792a6c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 792a6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 792a71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 792a73: call 0x99caf8 */
  esp -= 4; W32(esp, 0x792a78u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_792a78: guest_badaddr(0x792a78); return;
}

void f_792ac0(void) {
  LOAD_REGS();
L_792ac0: /* 792ac0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 792ac1: mov ebp, esp */
  ebp = esp;
/* 792ac3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 792ac5: push 0x9cceb0 */
  { uint32_t v = 0x9cceb0u; esp -= 4; W32(esp, v); }
/* 792aca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 792ad0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 792ad1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 792ad8: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 792adb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 792adc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 792adf: test byte ptr [ebx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 792ae6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 792ae7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 792ae8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 792aeb: mov edi, ecx */
  edi = ecx;
/* 792aed: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 792af4: jne 0x792b0e */
  if (!zf) goto L_792b0e;
L_792af6: /* 792af6: push 0x3fe */
  { uint32_t v = 0x3feu; esp -= 4; W32(esp, v); }
/* 792afb: push 0xacac9c */
  { uint32_t v = 0xacac9cu; esp -= 4; W32(esp, v); }
/* 792b00: push 0xacacac */
  { uint32_t v = 0xacacacu; esp -= 4; W32(esp, v); }
/* 792b05: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x792b0bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 792b0b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_792b0e: /* 792b0e: mov eax, dword ptr [ebx + 0x80] */
  eax = R32((uint32_t)(ebx + 0x80u));
/* 792b14: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 792b17: jne 0x792c81 */
  if (!zf) goto L_792c81;
L_792b1d: /* 792b1d: lea esi, [ebx + 0x300] */
  esi = (uint32_t)(ebx + 0x300u);
/* 792b23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 792b24: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 792b2a: call dword ptr [0xcfa1d8] */
  esp -= 4; W32(esp, 0x792b30u); SPILL(); f_4e119f(); if (g_unwind) return; /* Core!??9FVector@@QBEHABV0@@Z */ RELOAD();
/* 792b30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 792b32: je 0x792b9b */
  if (zf) goto L_792b9b;
L_792b34: /* 792b34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 792b35: mov ecx, esi */
  ecx = esi;
/* 792b37: call dword ptr [0xcfa5e0] */
  esp -= 4; W32(esp, 0x792b3du); SPILL(); f_4e2e87(); if (g_unwind) return; /* Core!??8FVector@@QBEHABV0@@Z */ RELOAD();
/* 792b3d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 792b3f: jne 0x792b59 */
  if (!zf) goto L_792b59;
L_792b41: /* 792b41: push 0x403 */
  { uint32_t v = 0x403u; esp -= 4; W32(esp, v); }
/* 792b46: push 0xacacc4 */
  { uint32_t v = 0xacacc4u; esp -= 4; W32(esp, v); }
/* 792b4b: push 0xacacd4 */
  { uint32_t v = 0xacacd4u; esp -= 4; W32(esp, v); }
/* 792b50: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x792b56u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 792b56: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_792b59: /* 792b59: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 792b5e: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 792b61: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 792b63: mov ecx, ebx */
  ecx = ebx;
/* 792b65: je 0x792b7e */
  if (zf) goto L_792b7e;
L_792b67: /* 792b67: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x792b6du); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 792b6d: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 792b73: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 792b75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 792b76: push 0xacad00 */
  { uint32_t v = 0xacad00u; esp -= 4; W32(esp, v); }
/* 792b7b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 792b7c: jmp 0x792b92 */
  goto L_792b92;
L_792b7e: /* 792b7e: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x792b84u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 792b84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 792b85: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 792b8a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 792b8c: push 0xacad40 */
  { uint32_t v = 0xacad40u; esp -= 4; W32(esp, v); }
/* 792b91: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_792b92: /* 792b92: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x792b98u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 792b98: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_792b9b: /* 792b9b: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 792b9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 792b9f: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 792ba2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 792ba3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 792ba6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 792ba7: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 792baa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 792bab: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 792bae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 792baf: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 792bb2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 792bb3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 792bb4: mov ecx, edi */
  ecx = edi;
/* 792bb6: call 0x6cce9b */
  esp -= 4; W32(esp, 0x792bbbu); SPILL(); f_6cce9b(); if (g_unwind) return; RELOAD();
/* 792bbb: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
L_792bbe: /* 792bbe: cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 792bc1: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 792bc4: jg 0x792c79 */
  if ((!zf && sf == of)) goto L_792c79;
L_792bca: /* 792bca: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
L_792bcd: /* 792bcd: cmp ecx, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 792bd0: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 792bd3: jg 0x792c73 */
  if ((!zf && sf == of)) goto L_792c73;
L_792bd9: /* 792bd9: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
L_792bdc: /* 792bdc: cmp eax, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 792bdf: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 792be2: jg 0x792c6a */
  if ((!zf && sf == of)) goto L_792c6a;
L_792be8: /* 792be8: mov esi, dword ptr [ecx*4 + 0xb321f8] */
  esi = R32((uint32_t)(ecx*4 + 0xb321f8u));
/* 792bef: mov eax, dword ptr [eax*4 + 0xb221f8] */
  eax = R32((uint32_t)(eax*4 + 0xb221f8u));
/* 792bf6: mov ecx, dword ptr [edx*4 + 0xb421f8] */
  ecx = R32((uint32_t)(edx*4 + 0xb421f8u));
/* 792bfd: xor eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 792bff: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 792c01: lea esi, [edi + eax*4 + 4] */
  esi = (uint32_t)(edi + eax*4 + 0x4u);
/* 792c05: xor ebx, ebx */
  ebx = 0;
L_792c07: /* 792c07: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 792c09: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 792c0b: je 0x792c5b */
  if (zf) goto L_792c5b;
L_792c0d: /* 792c0d: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 792c13: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 792c16: je 0x792c33 */
  if (zf) goto L_792c33;
L_792c18: /* 792c18: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 792c19: cmp ebx, 0x2710 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2710u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 792c1f: jle 0x792c33 */
  if ((zf || sf != of)) goto L_792c33;
L_792c21: /* 792c21: push 0xacad80 */
  { uint32_t v = 0xacad80u; esp -= 4; W32(esp, v); }
/* 792c26: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 792c28: call dword ptr [0xcfa5dc] */
  esp -= 4; W32(esp, 0x792c2eu); SPILL(); f_4e2ee6(); if (g_unwind) return; /* Core!?appMsgf@@YA?BHHPBGZZ */ RELOAD();
/* 792c2e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 792c31: jmp 0x792c07 */
  goto L_792c07;
L_792c33: /* 792c33: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 792c36: cmp dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 792c38: je 0x792c3f */
  if (zf) goto L_792c3f;
L_792c3a: /* 792c3a: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
/* 792c3d: jmp 0x792c07 */
  goto L_792c07;
L_792c3f: /* 792c3f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 792c42: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 792c44: mov edx, dword ptr [edi + 0x10004] */
  edx = R32((uint32_t)(edi + 0x10004u));
/* 792c4a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 792c4d: mov dword ptr [edi + 0x10004], eax */
  W32((uint32_t)(edi + 0x10004u), eax);
/* 792c53: dec dword ptr [0xb52208] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb52208u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(0xb52208u), r);
  }
/* 792c59: jmp 0x792c07 */
  goto L_792c07;
L_792c5b: /* 792c5b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 792c5e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 792c61: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 792c64: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 792c65: jmp 0x792bdc */
  goto L_792bdc;
L_792c6a: /* 792c6a: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 792c6d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 792c6e: jmp 0x792bcd */
  goto L_792bcd;
L_792c73: /* 792c73: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 792c74: jmp 0x792bbe */
  goto L_792bbe;
L_792c79: /* 792c79: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 792c7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 792c7c: mov ecx, edi */
  ecx = edi;
/* 792c7e: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x792c81u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_792c81: /* 792c81: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 792c84: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 792c85: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 792c86: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 792c8d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 792c8e: mov esp, ebp */
  esp = ebp;
/* 792c90: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 792c91: ret 4 */
  esp += 8; SPILL(); return;
}

void f_792c94(void) {
  LOAD_REGS();
L_792c94: /* 792c94: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 792c97: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 792c9c: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 792c9f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 792ca0: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 792ca3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x792ca8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_792ca8(); return;
}

void f_792ca8(void) {
  LOAD_REGS();
L_792ca8: /* 792ca8: push 0xa0a54c */
  { uint32_t v = 0xa0a54cu; esp -= 4; W32(esp, v); }
/* 792cad: push 0xacadf0 */
  { uint32_t v = 0xacadf0u; esp -= 4; W32(esp, v); }
/* 792cb2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x792cb8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 792cb8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 792cbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 792cbd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 792cbf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x792cc4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_792cc4: guest_badaddr(0x792cc4); return;
}

void f_792d60(void) {
  LOAD_REGS();
L_792d60: /* 792d60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 792d61: mov ebp, esp */
  ebp = esp;
/* 792d63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 792d65: push 0x9ccec0 */
  { uint32_t v = 0x9ccec0u; esp -= 4; W32(esp, v); }
/* 792d6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 792d70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 792d71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 792d78: sub esp, 0x74 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 792d7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 792d7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 792d7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 792d7e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 792d81: mov ebx, ecx */
  ebx = ecx;
/* 792d83: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 792d86: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 792d89: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 792d8c: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 792d8f: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 792d92: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 792d95: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 792d98: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 792d9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 792d9c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 792d9f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 792da0: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 792da3: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 792da6: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 792da9: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 792dac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 792dad: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 792db0: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 792db3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 792db6: mov eax, esp */
  eax = esp;
/* 792db8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 792dba: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 792dbd: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 792dc0: xor edi, edi */
  edi = 0;
/* 792dc2: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 792dc5: mov ecx, ebx */
  ecx = ebx;
/* 792dc7: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 792dca: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 792dcd: call 0x6c1398 */
  esp -= 4; W32(esp, 0x792dd2u); SPILL(); f_6c1398(); if (g_unwind) return; RELOAD();
/* 792dd2: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 792dd5: fadd dword ptr [ebp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x14u)));
/* 792dd8: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 792ddb: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 792dde: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 792ddf: fadd dword ptr [ebp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x10u)));
/* 792de2: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 792de5: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 792de8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 792de9: fadd dword ptr [ebp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xcu)));
/* 792dec: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 792def: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 792df0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 792df3: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 792df6: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 792df9: mov edx, esp */
  edx = esp;
/* 792dfb: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 792dfe: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 792e01: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 792e03: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 792e06: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 792e09: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 792e0c: mov ecx, ebx */
  ecx = ebx;
/* 792e0e: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 792e11: call 0x6c1398 */
  esp -= 4; W32(esp, 0x792e16u); SPILL(); f_6c1398(); if (g_unwind) return; RELOAD();
/* 792e16: mov eax, dword ptr [0xb521fc] */
  eax = R32((uint32_t)(0xb521fcu));
/* 792e1b: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 792e1e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 792e1f: mov dword ptr [0xb521fc], eax */
  W32((uint32_t)(0xb521fcu), eax);
L_792e24: /* 792e24: cmp edx, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 792e27: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 792e2a: jg 0x792fe5 */
  if ((!zf && sf == of)) goto L_792fe5;
L_792e30: /* 792e30: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
L_792e33: /* 792e33: cmp ecx, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 792e36: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 792e39: jg 0x792fdf */
  if ((!zf && sf == of)) goto L_792fdf;
L_792e3f: /* 792e3f: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
L_792e42: /* 792e42: cmp eax, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 792e45: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 792e48: jg 0x792fd9 */
  if ((!zf && sf == of)) goto L_792fd9;
L_792e4e: /* 792e4e: mov esi, eax */
  esi = eax;
/* 792e50: shl esi, 0xa */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 792e53: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 792e55: shl esi, 0xa */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 792e58: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 792e5a: mov edx, dword ptr [eax*4 + 0xb221f8] */
  edx = R32((uint32_t)(eax*4 + 0xb221f8u));
/* 792e61: xor edx, dword ptr [ecx*4 + 0xb321f8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx*4 + 0xb321f8u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 792e68: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 792e6b: xor edx, dword ptr [ecx*4 + 0xb421f8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx*4 + 0xb421f8u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 792e72: mov dword ptr [ebp - 0x38], esi */
  W32((uint32_t)(ebp + 0xffffffc8u), esi);
/* 792e75: mov ebx, dword ptr [ebx + edx*4 + 4] */
  ebx = R32((uint32_t)(ebx + edx*4 + 0x4u));
/* 792e79: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_792e80: /* 792e80: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 792e82: je 0x792fca */
  if (zf) goto L_792fca;
L_792e88: /* 792e88: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 792e8a: mov dl, byte ptr [ecx + 0x88] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x88u))) & 0xffu);
/* 792e90: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 792e92: jns 0x792fc2 */
  if (!sf) goto L_792fc2;
L_792e98: /* 792e98: mov edx, dword ptr [ecx + 0x164] */
  edx = R32((uint32_t)(ecx + 0x164u));
/* 792e9e: cmp edx, dword ptr [0xb521fc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(0xb521fcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 792ea4: je 0x792fc2 */
  if (zf) goto L_792fc2;
L_792eaa: /* 792eaa: cmp dword ptr [ebx + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 792ead: jne 0x792fc2 */
  if (!zf) goto L_792fc2;
L_792eb3: /* 792eb3: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 792eb6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 792eb8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 792eb9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 792eba: call dword ptr [eax + 0xc4] */
  { uint32_t t = R32((uint32_t)(eax + 0xc4u)); esp -= 4; W32(esp, 0x792ec0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 792ec0: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 792ec2: je 0x792fbf */
  if (zf) goto L_792fbf;
L_792ec8: /* 792ec8: mov ecx, dword ptr [0xb521fc] */
  ecx = R32((uint32_t)(0xb521fcu));
/* 792ece: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 792ed0: mov dword ptr [eax + 0x164], ecx */
  W32((uint32_t)(eax + 0x164u), ecx);
/* 792ed6: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 792ed8: mov dword ptr [ebp - 0x80], edi */
  W32((uint32_t)(ebp + 0xffffff80u), edi);
/* 792edb: mov dword ptr [ebp - 0x7c], edi */
  W32((uint32_t)(ebp + 0xffffff84u), edi);
/* 792ede: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 792ee5: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 792eec: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 792ef3: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 792efa: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 792f01: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 792f08: mov dword ptr [ebp - 0x60], edi */
  W32((uint32_t)(ebp + 0xffffffa0u), edi);
/* 792f0b: mov dword ptr [ebp - 0x5c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x3f800000u);
/* 792f12: mov dword ptr [ebp - 0x58], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffa8u), 0xffffffffu);
/* 792f19: mov dword ptr [ebp - 0x54], edi */
  W32((uint32_t)(ebp + 0xffffffacu), edi);
/* 792f1c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 792f1e: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x792f24u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 792f24: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 792f25: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 792f28: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 792f2a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 792f2d: mov ecx, esp */
  ecx = esp;
/* 792f2f: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 792f31: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 792f34: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 792f37: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 792f3a: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 792f3d: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 792f40: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 792f43: mov ecx, esp */
  ecx = esp;
/* 792f45: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 792f47: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 792f4a: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 792f4d: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 792f50: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 792f53: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 792f55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 792f56: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 792f59: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 792f5a: mov ecx, eax */
  ecx = eax;
/* 792f5c: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x792f5fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 792f5f: xor edi, edi */
  edi = 0;
/* 792f61: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 792f63: jne 0x792fbf */
  if (!zf) goto L_792fbf;
L_792f65: /* 792f65: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 792f68: cmp edx, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 792f6a: je 0x792f84 */
  if (zf) goto L_792f84;
L_792f6c: /* 792f6c: push 0x467 */
  { uint32_t v = 0x467u; esp -= 4; W32(esp, v); }
/* 792f71: push 0xacadf8 */
  { uint32_t v = 0xacadf8u; esp -= 4; W32(esp, v); }
/* 792f76: push 0xacae08 */
  { uint32_t v = 0xacae08u; esp -= 4; W32(esp, v); }
/* 792f7b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x792f81u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 792f81: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_792f84: /* 792f84: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 792f8a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 792f8c: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 792f8e: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x792f94u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 792f94: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 792f96: je 0x792f9d */
  if (zf) goto L_792f9d;
L_792f98: /* 792f98: mov dword ptr [eax + 0x2c], edi */
  W32((uint32_t)(eax + 0x2cu), edi);
/* 792f9b: jmp 0x792f9f */
  goto L_792f9f;
L_792f9d: /* 792f9d: xor eax, eax */
  eax = 0;
L_792f9f: /* 792f9f: mov ecx, 0xc */
  ecx = 0xcu;
/* 792fa4: lea esi, [ebp - 0x80] */
  esi = (uint32_t)(ebp + 0xffffff80u);
/* 792fa7: mov edi, eax */
  edi = eax;
/* 792fa9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 792fab: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 792fae: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 792fb0: mov ecx, dword ptr [ebp + 0x2c] */
  ecx = R32((uint32_t)(ebp + 0x2cu));
/* 792fb3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 792fb5: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 792fb8: jne 0x792fe8 */
  if (!zf) goto L_792fe8;
L_792fba: /* 792fba: mov esi, dword ptr [ebp - 0x38] */
  esi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 792fbd: xor edi, edi */
  edi = 0;
L_792fbf: /* 792fbf: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_792fc2: /* 792fc2: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 792fc5: jmp 0x792e80 */
  goto L_792e80;
L_792fca: /* 792fca: mov ebx, dword ptr [ebp - 0x3c] */
  ebx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 792fcd: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 792fd0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 792fd3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 792fd4: jmp 0x792e42 */
  goto L_792e42;
L_792fd9: /* 792fd9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 792fda: jmp 0x792e33 */
  goto L_792e33;
L_792fdf: /* 792fdf: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 792fe0: jmp 0x792e24 */
  goto L_792e24;
L_792fe5: /* 792fe5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
L_792fe8: /* 792fe8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 792feb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 792fec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 792fed: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 792ff4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 792ff5: mov esp, ebp */
  esp = ebp;
/* 792ff7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 792ff8: ret 0x28 */
  esp += 44; SPILL(); return;
}

void f_792ffb(void) {
  LOAD_REGS();
L_792ffb: /* 792ffb: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 792ffe: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 793003: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 793006: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793007: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 79300a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79300fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79300f(); return;
}

void f_79300f(void) {
  LOAD_REGS();
L_79300f: /* 79300f: push 0xa0a590 */
  { uint32_t v = 0xa0a590u; esp -= 4; W32(esp, v); }
/* 793014: push 0xacae24 */
  { uint32_t v = 0xacae24u; esp -= 4; W32(esp, v); }
/* 793019: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79301fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79301f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 793022: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 793024: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 793026: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79302bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79302b: guest_badaddr(0x79302b); return;
}

void f_7930f0(void) {
  LOAD_REGS();
L_7930f0: /* 7930f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7930f1: mov ebp, esp */
  ebp = esp;
/* 7930f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7930f5: push 0x9cced0 */
  { uint32_t v = 0x9cced0u; esp -= 4; W32(esp, v); }
/* 7930fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 793100: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793101: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 793108: sub esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79310b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79310c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79310d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79310e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 793111: mov esi, ecx */
  esi = ecx;
/* 793113: mov dword ptr [ebp - 0x38], esi */
  W32((uint32_t)(ebp + 0xffffffc8u), esi);
/* 793116: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 793119: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 79311c: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 79311f: xor eax, eax */
  eax = 0;
/* 793121: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 793124: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 793127: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 79312a: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 79312d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 793130: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 793133: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 793136: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793137: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 79313a: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 79313d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79313e: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 793141: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 793144: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 793147: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793148: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 79314b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79314e: mov eax, esp */
  eax = esp;
/* 793150: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 793152: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 793155: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 793158: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 79315b: mov ecx, esi */
  ecx = esi;
/* 79315d: call 0x6c1398 */
  esp -= 4; W32(esp, 0x793162u); SPILL(); f_6c1398(); if (g_unwind) return; RELOAD();
/* 793162: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 793165: fadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x18u)));
/* 793168: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 79316b: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 79316e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79316f: fadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x18u)));
/* 793172: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 793175: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 793178: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 793179: fadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x18u)));
/* 79317c: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 79317f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793180: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 793183: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 793186: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 793189: mov edx, esp */
  edx = esp;
/* 79318b: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 79318e: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 793191: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 793193: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 793196: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 793199: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 79319c: mov ecx, esi */
  ecx = esi;
/* 79319e: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7931a1: call 0x6c1398 */
  esp -= 4; W32(esp, 0x7931a6u); SPILL(); f_6c1398(); if (g_unwind) return; RELOAD();
/* 7931a6: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 7931a9: mov eax, dword ptr [0xb521fc] */
  eax = R32((uint32_t)(0xb521fcu));
/* 7931ae: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 7931b1: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7931b4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7931b5: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7931b8: mov dword ptr [0xb521fc], eax */
  W32((uint32_t)(0xb521fcu), eax);
L_7931bd: /* 7931bd: cmp edx, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7931c0: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7931c3: jg 0x7932de */
  if ((!zf && sf == of)) goto L_7932de;
L_7931c9: /* 7931c9: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
L_7931cc: /* 7931cc: cmp eax, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7931cf: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
/* 7931d2: jg 0x7932d8 */
  if ((!zf && sf == of)) goto L_7932d8;
L_7931d8: /* 7931d8: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7931db: jmp 0x7931e0 */
  goto L_7931e0;
L_7931e0: /* 7931e0: cmp ebx, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7931e3: jg 0x7932d2 */
  if ((!zf && sf == of)) goto L_7932d2;
L_7931e9: /* 7931e9: mov ecx, dword ptr [ebx*4 + 0xb221f8] */
  ecx = R32((uint32_t)(ebx*4 + 0xb221f8u));
/* 7931f0: xor ecx, dword ptr [eax*4 + 0xb321f8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax*4 + 0xb321f8u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7931f7: mov edi, ebx */
  edi = ebx;
/* 7931f9: shl edi, 0xa */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7931fc: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7931fe: shl edi, 0xa */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 793201: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 793203: xor ecx, dword ptr [edx*4 + 0xb421f8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx*4 + 0xb421f8u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 79320a: mov esi, dword ptr [esi + ecx*4 + 4] */
  esi = R32((uint32_t)(esi + ecx*4 + 0x4u));
L_79320e: /* 79320e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 793210: mov ecx, dword ptr [0xb521fc] */
  ecx = R32((uint32_t)(0xb521fcu));
/* 793216: je 0x7932c9 */
  if (zf) goto L_7932c9;
L_79321c: /* 79321c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 79321e: cmp dword ptr [eax + 0x164], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x164u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 793224: je 0x7932bb */
  if (zf) goto L_7932bb;
L_79322a: /* 79322a: cmp dword ptr [esi + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79322d: jne 0x7932bb */
  if (!zf) goto L_7932bb;
L_793233: /* 793233: mov dword ptr [eax + 0x164], ecx */
  W32((uint32_t)(eax + 0x164u), ecx);
/* 793239: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 79323b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79323d: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x793243u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 793243: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 793245: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 793247: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 793248: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 79324b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79324c: mov ecx, eax */
  ecx = eax;
/* 79324e: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x793251u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 793251: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 793254: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 793255: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 793258: call dword ptr [0xcfa34c] */
  esp -= 4; W32(esp, 0x79325eu); SPILL(); f_4e3139(); if (g_unwind) return; /* Core!?GetCenter@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 79325e: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 793261: fsub dword ptr [ebp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x14u)));
/* 793264: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 793267: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 79326a: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 79326d: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 793270: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 793273: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 793276: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 793279: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 79327c: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x793282u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 793282: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 793285: fcomp dword ptr [ebp - 0x34] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffccu)));
  FPOP();
/* 793288: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 79328a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 79328d: jp 0x7932bb */
  if (pf) goto L_7932bb;
L_79328f: /* 79328f: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 793295: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 793297: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 793299: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x79329fu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 79329f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7932a1: je 0x7932ac */
  if (zf) goto L_7932ac;
L_7932a3: /* 7932a3: mov dword ptr [eax + 0x2c], 0 */
  W32((uint32_t)(eax + 0x2cu), 0x0u);
/* 7932aa: jmp 0x7932ae */
  goto L_7932ae;
L_7932ac: /* 7932ac: xor eax, eax */
  eax = 0;
L_7932ae: /* 7932ae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7932b0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7932b3: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7932b6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7932b8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_7932bb: /* 7932bb: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 7932be: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7932c1: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7932c4: jmp 0x79320e */
  goto L_79320e;
L_7932c9: /* 7932c9: mov esi, dword ptr [ebp - 0x38] */
  esi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7932cc: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7932cd: jmp 0x7931e0 */
  goto L_7931e0;
L_7932d2: /* 7932d2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7932d3: jmp 0x7931cc */
  goto L_7931cc;
L_7932d8: /* 7932d8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7932d9: jmp 0x7931bd */
  goto L_7931bd;
L_7932de: /* 7932de: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7932e1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7932e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7932e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7932e6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7932ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7932ee: mov esp, ebp */
  esp = ebp;
/* 7932f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7932f1: ret 0x18 */
  esp += 28; SPILL(); return;
}
