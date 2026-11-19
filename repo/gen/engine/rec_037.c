#include "recomp.h"
#include "rec_mod.h"

void f_7a96e2(void) {
  LOAD_REGS();
L_7a96e2: /* 7a96e2: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a96e5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a96ea: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7a96ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a96ee: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7a96f1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a96f6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a96f6(); return;
}

void f_7a96f6(void) {
  LOAD_REGS();
L_7a96f6: /* 7a96f6: push 0xa0c160 */
  { uint32_t v = 0xa0c160u; esp -= 4; W32(esp, v); }
/* 7a96fb: push 0xacde78 */
  { uint32_t v = 0xacde78u; esp -= 4; W32(esp, v); }
/* 7a9700: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a9706u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a9706: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a9709: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a970b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a970d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a9712u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a9712: guest_badaddr(0x7a9712); return;
}

void f_7a9810(void) {
  LOAD_REGS();
L_7a9810: /* 7a9810: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a9811: mov ebp, esp */
  ebp = esp;
/* 7a9813: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a9815: push 0x9ce980 */
  { uint32_t v = 0x9ce980u; esp -= 4; W32(esp, v); }
/* 7a981a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a9820: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a9821: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a9828: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a982b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a982c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a982d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7a9830: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a9831: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7a9834: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a9837: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a9839: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a983a: mov ecx, esi */
  ecx = esi;
/* 7a983c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a9843: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7a9849u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7a9849: mov ecx, edi */
  ecx = edi;
/* 7a984b: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7a9851u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7a9851: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a9853: je 0x7a98a1 */
  if (zf) goto L_7a98a1;
L_7a9855: /* 7a9855: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7a9858: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a9859: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a985a: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7a9860u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7a9860: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7a9863: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a9866: xor eax, eax */
  eax = 0;
L_7a9868: /* 7a9868: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a986b: jge 0x7a9870 */
  if ((sf == of)) goto L_7a9870;
L_7a986d: /* 7a986d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7a986e: jmp 0x7a9868 */
  goto L_7a9868;
L_7a9870: /* 7a9870: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a9871: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a9873: mov ecx, esi */
  ecx = esi;
/* 7a9875: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7a987bu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7a987b: xor ebx, ebx */
  ebx = 0;
/* 7a987d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7a9880: /* 7a9880: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a9883: jge 0x7a98c6 */
  if ((sf == of)) goto L_7a98c6;
L_7a9885: /* 7a9885: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a9887: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a9889: mov ecx, esi */
  ecx = esi;
/* 7a988b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7a9891u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7a9891: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7a9893: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7a9895: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7a9898: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a9899: mov ecx, edi */
  ecx = edi;
/* 7a989b: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7a989eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a989e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7a989f: jmp 0x7a9880 */
  goto L_7a9880;
L_7a98a1: /* 7a98a1: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7a98a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a98a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a98a6: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7a98acu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7a98ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a98af: xor ebx, ebx */
  ebx = 0;
L_7a98b1: /* 7a98b1: cmp ebx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a98b4: jge 0x7a98c6 */
  if ((sf == of)) goto L_7a98c6;
L_7a98b6: /* 7a98b6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7a98b8: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7a98ba: lea eax, [eax + ebx*4] */
  eax = (uint32_t)(eax + ebx*4);
/* 7a98bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a98be: mov ecx, edi */
  ecx = edi;
/* 7a98c0: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7a98c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a98c3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7a98c4: jmp 0x7a98b1 */
  goto L_7a98b1;
L_7a98c6: /* 7a98c6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a98c9: mov eax, edi */
  eax = edi;
/* 7a98cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a98cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a98cd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a98d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a98d5: mov esp, ebp */
  esp = ebp;
/* 7a98d7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a98d8: ret  */
  esp += 4; SPILL(); return;
}

void f_7a98d9(void) {
  LOAD_REGS();
L_7a98d9: /* 7a98d9: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a98dc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a98e1: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7a98e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a98e5: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7a98e8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a98edu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a98ed(); return;
}

void f_7a98ed(void) {
  LOAD_REGS();
L_7a98ed: /* 7a98ed: push 0xa0c190 */
  { uint32_t v = 0xa0c190u; esp -= 4; W32(esp, v); }
/* 7a98f2: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7a98f7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a98fdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a98fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a9900: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a9902: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a9904: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a9909u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a9909: guest_badaddr(0x7a9909); return;
}

void f_7a9950(void) {
  LOAD_REGS();
L_7a9950: /* 7a9950: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7a9953: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7a9959: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7a995b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 7a995e: ret  */
  esp += 4; SPILL(); return;
}

void f_7a9970(void) {
  LOAD_REGS();
L_7a9970: /* 7a9970: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a9972: push 0x9ce9a4 */
  { uint32_t v = 0x9ce9a4u; esp -= 4; W32(esp, v); }
/* 7a9977: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a997d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a997e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a9985: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a9988: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a9989: mov esi, ecx */
  esi = ecx;
/* 7a998b: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7a998f: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x7a9995u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 7a9995: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 7a9998: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 7a99a0: mov dword ptr [esi], 0x9f9030 */
  W32((uint32_t)(esi), 0x9f9030u);
/* 7a99a6: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7a99acu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7a99ac: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 7a99b0: mov dword ptr [0xce9ec0], esi */
  W32((uint32_t)(0xce9ec0u), esi);
/* 7a99b6: mov eax, esi */
  eax = esi;
/* 7a99b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a99b9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a99c0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a99c3: ret  */
  esp += 4; SPILL(); return;
}

void f_7a99f0(void) {
  LOAD_REGS();
L_7a99f0: /* 7a99f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a99f1: mov ebp, esp */
  ebp = esp;
/* 7a99f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a99f5: push 0x9ce9c0 */
  { uint32_t v = 0x9ce9c0u; esp -= 4; W32(esp, v); }
/* 7a99fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a9a00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a9a01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a9a08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a9a0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a9a0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a9a0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a9a0e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7a9a11: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a9a14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a9a15: mov esi, ecx */
  esi = ecx;
/* 7a9a17: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a9a1e: call dword ptr [0xcfa29c] */
  esp -= 4; W32(esp, 0x7a9a24u); SPILL(); f_4e1519(); if (g_unwind) return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */ RELOAD();
/* 7a9a24: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7a9a27: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a9a28: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a9a29: call 0x6cb0d2 */
  esp -= 4; W32(esp, 0x7a9a2eu); SPILL(); f_6cb0d2(); if (g_unwind) return; RELOAD();
/* 7a9a2e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a9a31: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a9a34: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a9a35: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a9a36: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a9a3d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a9a3e: mov esp, ebp */
  esp = ebp;
/* 7a9a40: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a9a41: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a9a44(void) {
  LOAD_REGS();
L_7a9a44: /* 7a9a44: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a9a47: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a9a4c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7a9a4f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a9a50: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a9a53: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a9a58u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a9a58(); return;
}

void f_7a9a58(void) {
  LOAD_REGS();
L_7a9a58: /* 7a9a58: push 0xa0c1a8 */
  { uint32_t v = 0xa0c1a8u; esp -= 4; W32(esp, v); }
/* 7a9a5d: push 0xacdea0 */
  { uint32_t v = 0xacdea0u; esp -= 4; W32(esp, v); }
/* 7a9a62: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a9a68u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a9a68: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a9a6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a9a6d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a9a6f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a9a74u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a9a74: guest_badaddr(0x7a9a74); return;
}

void f_7a9ab0(void) {
  LOAD_REGS();
L_7a9ab0: /* 7a9ab0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a9ab1: mov esi, ecx */
  esi = ecx;
/* 7a9ab3: mov dword ptr [esi], 0xce9ec8 */
  W32((uint32_t)(esi), 0xce9ec8u);
/* 7a9ab9: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* 7a9ac0: call 0x6c38b4 */
  esp -= 4; W32(esp, 0x7a9ac5u); SPILL(); f_6c38b4(); if (g_unwind) return; RELOAD();
/* 7a9ac5: mov eax, esi */
  eax = esi;
/* 7a9ac7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a9ac8: ret  */
  esp += 4; SPILL(); return;
}

void f_7a9ae0(void) {
  LOAD_REGS();
L_7a9ae0: /* 7a9ae0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a9ae1: mov ebp, esp */
  ebp = esp;
/* 7a9ae3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a9ae5: push 0x9ce9d0 */
  { uint32_t v = 0x9ce9d0u; esp -= 4; W32(esp, v); }
/* 7a9aea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a9af0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a9af1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a9af8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a9afb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a9afc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a9afd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a9afe: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a9b01: mov ebx, ecx */
  ebx = ecx;
/* 7a9b03: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a9b0a: call dword ptr [0xcfa214] */
  esp -= 4; W32(esp, 0x7a9b10u); SPILL(); f_4e1d11(); if (g_unwind) return; /* Core!?PostEditChange@UObject@@UAEXXZ */ RELOAD();
/* 7a9b10: fld dword ptr [ebx + 0x70] */
  { double v = F32((uint32_t)(ebx + 0x70u)); FPUSH(v); }
/* 7a9b13: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7a9b19: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a9b1b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7a9b1e: jp 0x7a9b2a */
  if (pf) goto L_7a9b2a;
L_7a9b20: /* 7a9b20: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a9b22: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 7a9b28: jmp 0x7a9b3f */
  goto L_7a9b3f;
L_7a9b2a: /* 7a9b2a: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 7a9b30: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a9b32: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7a9b35: jnp 0x7a9b3f */
  if (!pf) goto L_7a9b3f;
L_7a9b37: /* 7a9b37: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a9b39: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_7a9b3f: /* 7a9b3f: fstp dword ptr [ebx + 0x70] */
  WF32((uint32_t)(ebx + 0x70u), ST0); FPOP();
/* 7a9b42: fld dword ptr [ebx + 0x74] */
  { double v = F32((uint32_t)(ebx + 0x74u)); FPUSH(v); }
/* 7a9b45: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7a9b4b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a9b4d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7a9b50: jp 0x7a9b5c */
  if (pf) goto L_7a9b5c;
L_7a9b52: /* 7a9b52: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a9b54: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 7a9b5a: jmp 0x7a9b71 */
  goto L_7a9b71;
L_7a9b5c: /* 7a9b5c: fcom dword ptr [0xa0b130] */
  fpu_com(ST0, F32((uint32_t)(0xa0b130u)));
/* 7a9b62: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a9b64: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7a9b67: jnp 0x7a9b71 */
  if (!pf) goto L_7a9b71;
L_7a9b69: /* 7a9b69: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a9b6b: fld dword ptr [0xa0b130] */
  { double v = F32((uint32_t)(0xa0b130u)); FPUSH(v); }
L_7a9b71: /* 7a9b71: fstp dword ptr [ebx + 0x74] */
  WF32((uint32_t)(ebx + 0x74u), ST0); FPOP();
/* 7a9b74: fld dword ptr [ebx + 0x78] */
  { double v = F32((uint32_t)(ebx + 0x78u)); FPUSH(v); }
/* 7a9b77: fcom dword ptr [0x9f7194] */
  fpu_com(ST0, F32((uint32_t)(0x9f7194u)));
/* 7a9b7d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a9b7f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7a9b82: jp 0x7a9b8e */
  if (pf) goto L_7a9b8e;
L_7a9b84: /* 7a9b84: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a9b86: fld dword ptr [0x9f7194] */
  { double v = F32((uint32_t)(0x9f7194u)); FPUSH(v); }
/* 7a9b8c: jmp 0x7a9ba3 */
  goto L_7a9ba3;
L_7a9b8e: /* 7a9b8e: fcom dword ptr [0xa0c214] */
  fpu_com(ST0, F32((uint32_t)(0xa0c214u)));
/* 7a9b94: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7a9b96: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7a9b99: jnp 0x7a9ba3 */
  if (!pf) goto L_7a9ba3;
L_7a9b9b: /* 7a9b9b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7a9b9d: fld dword ptr [0xa0c214] */
  { double v = F32((uint32_t)(0xa0c214u)); FPUSH(v); }
L_7a9ba3: /* 7a9ba3: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 7a9ba6: fstp dword ptr [ebx + 0x78] */
  WF32((uint32_t)(ebx + 0x78u), ST0); FPOP();
/* 7a9ba9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7a9bab: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7a9baeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a9bae: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7a9bb1: mov dword ptr [ebp - 0x20], 0xce9ec8 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xce9ec8u);
/* 7a9bb8: mov dword ptr [ebp - 0x1c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xffffffffu);
/* 7a9bbf: call 0x6c38b4 */
  esp -= 4; W32(esp, 0x7a9bc4u); SPILL(); f_6c38b4(); if (g_unwind) return; RELOAD();
/* 7a9bc4: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7a9bc7: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
L_7a9bca: /* 7a9bca: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 7a9bcf: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a9bd2: jge 0x7a9c03 */
  if ((sf == of)) goto L_7a9c03;
L_7a9bd4: /* 7a9bd4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7a9bd6: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7a9bd9: or dword ptr [eax + 0x7c], 0x80 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x7cu))); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x7cu), r);
  }
L_7a9be0: /* 7a9be0: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
L_7a9be5: /* 7a9be5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7a9be8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7a9be9: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7a9beb: jge 0x7a9c03 */
  if ((sf == of)) goto L_7a9c03;
L_7a9bed: /* 7a9bed: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7a9bef: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7a9bf2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a9bf4: je 0x7a9be5 */
  if (zf) goto L_7a9be5;
L_7a9bf6: /* 7a9bf6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a9bf7: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7a9bfdu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7a9bfd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a9bff: je 0x7a9be0 */
  if (zf) goto L_7a9be0;
L_7a9c01: /* 7a9c01: jmp 0x7a9bca */
  goto L_7a9bca;
L_7a9c03: /* 7a9c03: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a9c05: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a9c0a: mov ecx, ebx */
  ecx = ebx;
/* 7a9c0c: call dword ptr [0xcfa774] */
  esp -= 4; W32(esp, 0x7a9c12u); SPILL(); f_4e3b84(); if (g_unwind) return; /* Core!?SaveConfig@UObject@@QAEXKPBG@Z */ RELOAD();
/* 7a9c12: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7a9c15: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7a9c16: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a9c17: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7a9c1e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7a9c1f: mov esp, ebp */
  esp = ebp;
/* 7a9c21: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7a9c22: ret  */
  esp += 4; SPILL(); return;
}

void f_7a9c23(void) {
  LOAD_REGS();
L_7a9c23: /* 7a9c23: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7a9c26: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7a9c2b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7a9c2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a9c2f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7a9c32: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a9c37u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7a9c37(); return;
}

void f_7a9c37(void) {
  LOAD_REGS();
L_7a9c37: /* 7a9c37: push 0xa0c1d8 */
  { uint32_t v = 0xa0c1d8u; esp -= 4; W32(esp, v); }
/* 7a9c3c: push 0xacd7f0 */
  { uint32_t v = 0xacd7f0u; esp -= 4; W32(esp, v); }
/* 7a9c41: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7a9c47u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7a9c47: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a9c4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a9c4c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a9c4e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7a9c53u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7a9c53: guest_badaddr(0x7a9c53); return;
}

void f_7a9cc0(void) {
  LOAD_REGS();
L_7a9cc0: /* 7a9cc0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a9cc3: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7a9cc5: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 7a9cc9: mov dword ptr [esp], edx */
  W32((uint32_t)(esp), edx);
/* 7a9ccd: fild dword ptr [esp] */
  { double v = (double)(int32_t)R32((uint32_t)(esp)); FPUSH(v); }
/* 7a9cd1: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 7a9cd5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7a9cd7: jge 0x7a9cdf */
  if ((sf == of)) goto L_7a9cdf;
L_7a9cd9: /* 7a9cd9: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_7a9cdf: /* 7a9cdf: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7a9ce3: fmul qword ptr [0xa0c228] */
  ST0 = ST0 * (F64((uint32_t)(0xa0c228u)));
/* 7a9ce9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7a9ceb: fild dword ptr [esp + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 7a9cef: jge 0x7a9cf7 */
  if ((sf == of)) goto L_7a9cf7;
L_7a9cf1: /* 7a9cf1: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_7a9cf7: /* 7a9cf7: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 7a9cfd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7a9cff: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 7a9d01: fadd qword ptr [0xa0c218] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c218u)));
/* 7a9d07: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a9d0a: ret  */
  esp += 4; SPILL(); return;
}

void f_7a9d30(void) {
  LOAD_REGS();
L_7a9d30: /* 7a9d30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7a9d34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a9d35: mov esi, ecx */
  esi = ecx;
/* 7a9d37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a9d38: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7a9d3b: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7a9d41u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7a9d41: mov ecx, esi */
  ecx = esi;
/* 7a9d43: call dword ptr [0xcfa780] */
  esp -= 4; W32(esp, 0x7a9d49u); SPILL(); f_4e22ed(); if (g_unwind) return; /* Core!??0FOutputDevice@@QAE@XZ */ RELOAD();
/* 7a9d49: mov dword ptr [esi], 0xa0c234 */
  W32((uint32_t)(esi), 0xa0c234u);
/* 7a9d4f: mov eax, esi */
  eax = esi;
/* 7a9d51: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7a9d52: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7a9d70(void) {
  LOAD_REGS();
L_7a9d70: /* 7a9d70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7a9d74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a9d75: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7a9d78: call dword ptr [0xcfa3c0] */
  esp -= 4; W32(esp, 0x7a9d7eu); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* 7a9d7e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7a9da0(void) {
  LOAD_REGS();
L_7a9da0: /* 7a9da0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7a9da1: mov ebp, esp */
  ebp = esp;
/* 7a9da3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7a9da5: push 0x9ce9e0 */
  { uint32_t v = 0x9ce9e0u; esp -= 4; W32(esp, v); }
/* 7a9daa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7a9db0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a9db1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7a9db8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7a9dbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7a9dbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7a9dbd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7a9dbe: mov edi, dword ptr [0xcfa33c] */
  edi = R32((uint32_t)(0xcfa33cu));
/* 7a9dc4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7a9dc7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a9dc9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a9dca: mov ebx, ecx */
  ebx = ecx;
/* 7a9dcc: mov ecx, esp */
  ecx = esp;
/* 7a9dce: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a9dd1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a9dd3: push 0xace070 */
  { uint32_t v = 0xace070u; esp -= 4; W32(esp, v); }
/* 7a9dd8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7a9ddf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7a9de1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a9de1: mov ecx, ebx */
  ecx = ebx;
/* 7a9de3: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a9de9u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a9de9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a9dea: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a9dec: call dword ptr [0xcfa744] */
  esp -= 4; W32(esp, 0x7a9df2u); SPILL(); f_4e448a(); if (g_unwind) return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a9df2: mov esi, eax */
  esi = eax;
/* 7a9df4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a9df7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a9df9: je 0x7a9e17 */
  if (zf) goto L_7a9e17;
L_7a9dfb: /* 7a9dfb: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a9e00: push 0xace094 */
  { uint32_t v = 0xace094u; esp -= 4; W32(esp, v); }
/* 7a9e05: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 7a9e07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a9e09: mov ecx, esi */
  ecx = esi;
/* 7a9e0b: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x7a9e11u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7a9e11: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
L_7a9e17: /* 7a9e17: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a9e19: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a9e1a: mov ecx, esp */
  ecx = esp;
/* 7a9e1c: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a9e1f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a9e21: push 0xace0a4 */
  { uint32_t v = 0xace0a4u; esp -= 4; W32(esp, v); }
/* 7a9e26: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7a9e28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a9e28: mov ecx, ebx */
  ecx = ebx;
/* 7a9e2a: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a9e30u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a9e30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a9e31: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a9e33: call dword ptr [0xcfa744] */
  esp -= 4; W32(esp, 0x7a9e39u); SPILL(); f_4e448a(); if (g_unwind) return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a9e39: mov esi, eax */
  esi = eax;
/* 7a9e3b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a9e3e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a9e40: je 0x7a9e5e */
  if (zf) goto L_7a9e5e;
L_7a9e42: /* 7a9e42: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a9e47: push 0xace0d0 */
  { uint32_t v = 0xace0d0u; esp -= 4; W32(esp, v); }
/* 7a9e4c: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 7a9e4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a9e50: mov ecx, esi */
  ecx = esi;
/* 7a9e52: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x7a9e58u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7a9e58: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
L_7a9e5e: /* 7a9e5e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a9e60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a9e61: mov ecx, esp */
  ecx = esp;
/* 7a9e63: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a9e66: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a9e68: push 0xace0e0 */
  { uint32_t v = 0xace0e0u; esp -= 4; W32(esp, v); }
/* 7a9e6d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7a9e6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a9e6f: mov ecx, ebx */
  ecx = ebx;
/* 7a9e71: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a9e77u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a9e77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a9e78: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a9e7a: call dword ptr [0xcfa744] */
  esp -= 4; W32(esp, 0x7a9e80u); SPILL(); f_4e448a(); if (g_unwind) return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a9e80: mov esi, eax */
  esi = eax;
/* 7a9e82: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a9e85: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a9e87: je 0x7a9ea5 */
  if (zf) goto L_7a9ea5;
L_7a9e89: /* 7a9e89: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a9e8e: push 0xace100 */
  { uint32_t v = 0xace100u; esp -= 4; W32(esp, v); }
/* 7a9e93: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 7a9e95: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a9e97: mov ecx, esi */
  ecx = esi;
/* 7a9e99: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x7a9e9fu); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7a9e9f: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
L_7a9ea5: /* 7a9ea5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a9ea7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a9ea8: mov ecx, esp */
  ecx = esp;
/* 7a9eaa: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a9ead: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a9eaf: push 0xace110 */
  { uint32_t v = 0xace110u; esp -= 4; W32(esp, v); }
/* 7a9eb4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7a9eb6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a9eb6: mov ecx, ebx */
  ecx = ebx;
/* 7a9eb8: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a9ebeu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a9ebe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a9ebf: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a9ec1: call dword ptr [0xcfa744] */
  esp -= 4; W32(esp, 0x7a9ec7u); SPILL(); f_4e448a(); if (g_unwind) return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a9ec7: mov esi, eax */
  esi = eax;
/* 7a9ec9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a9ecc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a9ece: je 0x7a9eec */
  if (zf) goto L_7a9eec;
L_7a9ed0: /* 7a9ed0: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a9ed5: push 0xace140 */
  { uint32_t v = 0xace140u; esp -= 4; W32(esp, v); }
/* 7a9eda: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 7a9edc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a9ede: mov ecx, esi */
  ecx = esi;
/* 7a9ee0: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x7a9ee6u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7a9ee6: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
L_7a9eec: /* 7a9eec: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a9eee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a9eef: mov ecx, esp */
  ecx = esp;
/* 7a9ef1: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a9ef4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a9ef6: push 0xace150 */
  { uint32_t v = 0xace150u; esp -= 4; W32(esp, v); }
/* 7a9efb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7a9efdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a9efd: mov ecx, ebx */
  ecx = ebx;
/* 7a9eff: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a9f05u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a9f05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a9f06: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a9f08: call dword ptr [0xcfa744] */
  esp -= 4; W32(esp, 0x7a9f0eu); SPILL(); f_4e448a(); if (g_unwind) return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a9f0e: mov esi, eax */
  esi = eax;
/* 7a9f10: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a9f13: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a9f15: je 0x7a9f33 */
  if (zf) goto L_7a9f33;
L_7a9f17: /* 7a9f17: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a9f1c: push 0xace168 */
  { uint32_t v = 0xace168u; esp -= 4; W32(esp, v); }
/* 7a9f21: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 7a9f23: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a9f25: mov ecx, esi */
  ecx = esi;
/* 7a9f27: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x7a9f2du); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7a9f2d: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
L_7a9f33: /* 7a9f33: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a9f35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a9f36: mov ecx, esp */
  ecx = esp;
/* 7a9f38: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a9f3b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a9f3d: push 0xace178 */
  { uint32_t v = 0xace178u; esp -= 4; W32(esp, v); }
/* 7a9f42: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7a9f44u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a9f44: mov ecx, ebx */
  ecx = ebx;
/* 7a9f46: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a9f4cu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a9f4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a9f4d: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a9f4f: call dword ptr [0xcfa744] */
  esp -= 4; W32(esp, 0x7a9f55u); SPILL(); f_4e448a(); if (g_unwind) return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a9f55: mov esi, eax */
  esi = eax;
/* 7a9f57: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a9f5a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a9f5c: je 0x7a9f7a */
  if (zf) goto L_7a9f7a;
L_7a9f5e: /* 7a9f5e: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a9f63: push 0xace18c */
  { uint32_t v = 0xace18cu; esp -= 4; W32(esp, v); }
/* 7a9f68: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 7a9f6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a9f6c: mov ecx, esi */
  ecx = esi;
/* 7a9f6e: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x7a9f74u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7a9f74: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
L_7a9f7a: /* 7a9f7a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a9f7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a9f7d: mov ecx, esp */
  ecx = esp;
/* 7a9f7f: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a9f82: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a9f84: push 0xace19c */
  { uint32_t v = 0xace19cu; esp -= 4; W32(esp, v); }
/* 7a9f89: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7a9f8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a9f8b: mov ecx, ebx */
  ecx = ebx;
/* 7a9f8d: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a9f93u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a9f93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a9f94: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a9f96: call dword ptr [0xcfa744] */
  esp -= 4; W32(esp, 0x7a9f9cu); SPILL(); f_4e448a(); if (g_unwind) return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a9f9c: mov esi, eax */
  esi = eax;
/* 7a9f9e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a9fa1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a9fa3: je 0x7a9fc1 */
  if (zf) goto L_7a9fc1;
L_7a9fa5: /* 7a9fa5: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a9faa: push 0xace1c0 */
  { uint32_t v = 0xace1c0u; esp -= 4; W32(esp, v); }
/* 7a9faf: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 7a9fb1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a9fb3: mov ecx, esi */
  ecx = esi;
/* 7a9fb5: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x7a9fbbu); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7a9fbb: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
L_7a9fc1: /* 7a9fc1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7a9fc3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7a9fc4: mov ecx, esp */
  ecx = esp;
/* 7a9fc6: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7a9fc9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7a9fcb: push 0xace1d0 */
  { uint32_t v = 0xace1d0u; esp -= 4; W32(esp, v); }
/* 7a9fd0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7a9fd2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7a9fd2: mov ecx, ebx */
  ecx = ebx;
/* 7a9fd4: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7a9fdau); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7a9fda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7a9fdb: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7a9fdd: call dword ptr [0xcfa744] */
  esp -= 4; W32(esp, 0x7a9fe3u); SPILL(); f_4e448a(); if (g_unwind) return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7a9fe3: mov esi, eax */
  esi = eax;
/* 7a9fe5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7a9fe8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7a9fea: je 0x7aa008 */
  if (zf) goto L_7aa008;
L_7a9fec: /* 7a9fec: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7a9ff1: push 0xace1f4 */
  { uint32_t v = 0xace1f4u; esp -= 4; W32(esp, v); }
/* 7a9ff6: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 7a9ff8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7a9ffa: mov ecx, esi */
  ecx = esi;
/* 7a9ffc: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x7aa002u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7aa002: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
L_7aa008: /* 7aa008: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7aa00a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aa00b: mov ecx, esp */
  ecx = esp;
/* 7aa00d: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7aa010: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7aa012: push 0xace204 */
  { uint32_t v = 0xace204u; esp -= 4; W32(esp, v); }
/* 7aa017: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aa019u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aa019: mov ecx, ebx */
  ecx = ebx;
/* 7aa01b: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7aa021u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7aa021: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aa022: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 7aa024: call dword ptr [0xcfa744] */
  esp -= 4; W32(esp, 0x7aa02au); SPILL(); f_4e448a(); if (g_unwind) return; /* Core!??2UBoolProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7aa02a: mov esi, eax */
  esi = eax;
/* 7aa02c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aa02f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aa031: je 0x7aa04f */
  if (zf) goto L_7aa04f;
L_7aa033: /* 7aa033: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7aa038: push 0xace21c */
  { uint32_t v = 0xace21cu; esp -= 4; W32(esp, v); }
/* 7aa03d: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 7aa03f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aa041: mov ecx, esi */
  ecx = esi;
/* 7aa043: call dword ptr [0xcfa740] */
  esp -= 4; W32(esp, 0x7aa049u); SPILL(); f_4e4278(); if (g_unwind) return; /* Core!??0UBoolProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7aa049: mov dword ptr [esi], 0xa0bda0 */
  W32((uint32_t)(esi), 0xa0bda0u);
L_7aa04f: /* 7aa04f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7aa051: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aa052: mov ecx, esp */
  ecx = esp;
/* 7aa054: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7aa057: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7aa059: push 0xace22c */
  { uint32_t v = 0xace22cu; esp -= 4; W32(esp, v); }
/* 7aa05e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aa060u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aa060: mov ecx, ebx */
  ecx = ebx;
/* 7aa062: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7aa068u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7aa068: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aa069: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 7aa06b: call dword ptr [0xcfa754] */
  esp -= 4; W32(esp, 0x7aa071u); SPILL(); f_4e2cb1(); if (g_unwind) return; /* Core!??2UIntProperty@@SAPAXIPAVUObject@@VFName@@K@Z */ RELOAD();
/* 7aa071: mov esi, eax */
  esi = eax;
/* 7aa073: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aa076: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aa078: je 0x7aa096 */
  if (zf) goto L_7aa096;
L_7aa07a: /* 7aa07a: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7aa07f: push 0xace244 */
  { uint32_t v = 0xace244u; esp -= 4; W32(esp, v); }
/* 7aa084: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 7aa086: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aa088: mov ecx, esi */
  ecx = esi;
/* 7aa08a: call dword ptr [0xcfa750] */
  esp -= 4; W32(esp, 0x7aa090u); SPILL(); f_4e29d7(); if (g_unwind) return; /* Core!??0UIntProperty@@QAE@W4ECppProperty@@HPBGK@Z */ RELOAD();
/* 7aa090: mov dword ptr [esi], 0xa0bf60 */
  W32((uint32_t)(esi), 0xa0bf60u);
L_7aa096: /* 7aa096: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7aa099: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7aa09a: mov byte ptr [ebx + 0x2c], 0 */
  W8((uint32_t)(ebx + 0x2cu), 0x0u);
/* 7aa09e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7aa09f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7aa0a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7aa0a7: mov esp, ebp */
  esp = ebp;
/* 7aa0a9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7aa0aa: ret  */
  esp += 4; SPILL(); return;
}

void f_7aa0ab(void) {
  LOAD_REGS();
L_7aa0ab: /* 7aa0ab: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7aa0ae: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7aa0b3: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7aa0b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aa0b7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7aa0ba: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7aa0bfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7aa0bf(); return;
}

void f_7aa0bf(void) {
  LOAD_REGS();
L_7aa0bf: /* 7aa0bf: push 0xa0c240 */
  { uint32_t v = 0xa0c240u; esp -= 4; W32(esp, v); }
/* 7aa0c4: push 0xace254 */
  { uint32_t v = 0xace254u; esp -= 4; W32(esp, v); }
/* 7aa0c9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7aa0cfu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7aa0cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aa0d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aa0d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aa0d6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7aa0dbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7aa0db: guest_badaddr(0x7aa0db); return;
}

void f_7aa1b0(void) {
  LOAD_REGS();
L_7aa1b0: /* 7aa1b0: xor eax, eax */
  eax = 0;
/* 7aa1b2: ret  */
  esp += 4; SPILL(); return;
}

void f_7aa1d0(void) {
  LOAD_REGS();
L_7aa1d0: /* 7aa1d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7aa1d1: mov ebp, esp */
  ebp = esp;
/* 7aa1d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7aa1d5: push 0x9ce9f0 */
  { uint32_t v = 0x9ce9f0u; esp -= 4; W32(esp, v); }
/* 7aa1da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7aa1e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aa1e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7aa1e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7aa1eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7aa1ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aa1ed: mov esi, ecx */
  esi = ecx;
/* 7aa1ef: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 7aa1f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aa1f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7aa1f5: mov edi, dword ptr [0xcfa2fc] */
  edi = R32((uint32_t)(0xcfa2fcu));
/* 7aa1fb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7aa1fe: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7aa205: jne 0x7aa21b */
  if (!zf) goto L_7aa21b;
L_7aa207: /* 7aa207: push 0x10e */
  { uint32_t v = 0x10eu; esp -= 4; W32(esp, v); }
/* 7aa20c: push 0xace3a4 */
  { uint32_t v = 0xace3a4u; esp -= 4; W32(esp, v); }
/* 7aa211: push 0xace3b4 */
  { uint32_t v = 0xace3b4u; esp -= 4; W32(esp, v); }
/* 7aa216: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aa218u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aa218: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7aa21b: /* 7aa21b: mov eax, dword ptr [esi + 0x70] */
  eax = R32((uint32_t)(esi + 0x70u));
/* 7aa21e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aa220: jne 0x7aa236 */
  if (!zf) goto L_7aa236;
L_7aa222: /* 7aa222: push 0x10f */
  { uint32_t v = 0x10fu; esp -= 4; W32(esp, v); }
/* 7aa227: push 0xace3bc */
  { uint32_t v = 0xace3bcu; esp -= 4; W32(esp, v); }
/* 7aa22c: push 0xace3cc */
  { uint32_t v = 0xace3ccu; esp -= 4; W32(esp, v); }
/* 7aa231: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aa233u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aa233: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7aa236: /* 7aa236: mov eax, dword ptr [esi + 0x174] */
  eax = R32((uint32_t)(esi + 0x174u));
/* 7aa23c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aa23e: je 0x7aa254 */
  if (zf) goto L_7aa254;
L_7aa240: /* 7aa240: push 0x110 */
  { uint32_t v = 0x110u; esp -= 4; W32(esp, v); }
/* 7aa245: push 0xace3d4 */
  { uint32_t v = 0xace3d4u; esp -= 4; W32(esp, v); }
/* 7aa24a: push 0xace3e4 */
  { uint32_t v = 0xace3e4u; esp -= 4; W32(esp, v); }
/* 7aa24f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aa251u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aa251: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7aa254: /* 7aa254: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* 7aa257: mov edx, dword ptr [esi + 0x148] */
  edx = R32((uint32_t)(esi + 0x148u));
/* 7aa25d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7aa25f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aa260: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x7aa266u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aa266: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7aa269: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7aa26a: mov dword ptr [esi + 0x158], 1 */
  W32((uint32_t)(esi + 0x158u), 0x1u);
/* 7aa274: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7aa275: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7aa27c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7aa27d: mov esp, ebp */
  esp = ebp;
/* 7aa27f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7aa280: ret  */
  esp += 4; SPILL(); return;
}

void f_7aa281(void) {
  LOAD_REGS();
L_7aa281: /* 7aa281: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7aa284: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7aa289: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7aa28c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aa28d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7aa290: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7aa295u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7aa295(); return;
}

void f_7aa295(void) {
  LOAD_REGS();
L_7aa295: /* 7aa295: push 0xa0c290 */
  { uint32_t v = 0xa0c290u; esp -= 4; W32(esp, v); }
/* 7aa29a: push 0xace3f8 */
  { uint32_t v = 0xace3f8u; esp -= 4; W32(esp, v); }
/* 7aa29f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7aa2a5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7aa2a5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aa2a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aa2aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aa2ac: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7aa2b1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7aa2b1: guest_badaddr(0x7aa2b1); return;
}

void f_7aa300(void) {
  LOAD_REGS();
L_7aa300: /* 7aa300: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aa301: mov esi, ecx */
  esi = ecx;
/* 7aa303: mov eax, dword ptr [esi + 0x158] */
  eax = R32((uint32_t)(esi + 0x158u));
/* 7aa309: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aa30b: jne 0x7aa325 */
  if (!zf) goto L_7aa325;
L_7aa30d: /* 7aa30d: push 0x11f */
  { uint32_t v = 0x11fu; esp -= 4; W32(esp, v); }
/* 7aa312: push 0xace400 */
  { uint32_t v = 0xace400u; esp -= 4; W32(esp, v); }
/* 7aa317: push 0xace410 */
  { uint32_t v = 0xace410u; esp -= 4; W32(esp, v); }
/* 7aa31c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7aa322u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7aa322: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7aa325: /* 7aa325: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* 7aa328: mov dword ptr [esi + 0x158], 0 */
  W32((uint32_t)(esi + 0x158u), 0x0u);
/* 7aa332: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7aa334: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aa335: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x7aa33bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aa33b: mov ecx, dword ptr [esi + 0x138] */
  ecx = R32((uint32_t)(esi + 0x138u));
/* 7aa341: mov edx, dword ptr [esi + 0x13c] */
  edx = R32((uint32_t)(esi + 0x13cu));
/* 7aa347: mov dword ptr [esi + 0x7c], ecx */
  W32((uint32_t)(esi + 0x7cu), ecx);
/* 7aa34a: mov dword ptr [esi + 0x80], edx */
  W32((uint32_t)(esi + 0x80u), edx);
/* 7aa350: mov dword ptr [esi + 0x84], 0 */
  W32((uint32_t)(esi + 0x84u), 0x0u);
/* 7aa35a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7aa35b: ret  */
  esp += 4; SPILL(); return;
}

void f_7aa380(void) {
  LOAD_REGS();
L_7aa380: /* 7aa380: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aa382: je 0x7aa389 */
  if (zf) goto L_7aa389;
L_7aa384: /* 7aa384: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7aa387: jmp 0x7aa38b */
  goto L_7aa38b;
L_7aa389: /* 7aa389: xor ecx, ecx */
  ecx = 0;
L_7aa38b: /* 7aa38b: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_7aa3b0(void) {
  LOAD_REGS();
L_7aa3b0: /* 7aa3b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7aa3b1: mov ebp, esp */
  ebp = esp;
/* 7aa3b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7aa3b5: push 0x9cea09 */
  { uint32_t v = 0x9cea09u; esp -= 4; W32(esp, v); }
/* 7aa3ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7aa3c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aa3c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7aa3c8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7aa3cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7aa3cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aa3cd: mov esi, ecx */
  esi = ecx;
/* 7aa3cf: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 7aa3d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aa3d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7aa3d5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7aa3d8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7aa3df: je 0x7aa412 */
  if (zf) goto L_7aa412;
L_7aa3e1: /* 7aa3e1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7aa3e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aa3e5: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7aa3e8: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7aa3eeu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7aa3ee: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7aa3f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aa3f2: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7aa3f5: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7aa3f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aa3f9: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 7aa3fc: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7aa400: call 0x6c27a2 */
  esp -= 4; W32(esp, 0x7aa405u); SPILL(); f_6c27a2(); if (g_unwind) return; RELOAD();
/* 7aa405: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7aa408: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7aa40c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7aa412u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7aa412: /* 7aa412: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7aa415: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7aa416: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7aa417: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7aa41e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7aa41f: mov esp, ebp */
  esp = ebp;
/* 7aa421: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7aa422: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7aa425(void) {
  LOAD_REGS();
L_7aa425: /* 7aa425: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7aa428: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7aa42d: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7aa430: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aa431: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7aa434: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7aa439u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7aa439(); return;
}

void f_7aa439(void) {
  LOAD_REGS();
L_7aa439: /* 7aa439: push 0xa0c2bc */
  { uint32_t v = 0xa0c2bcu; esp -= 4; W32(esp, v); }
/* 7aa43e: push 0xace928 */
  { uint32_t v = 0xace928u; esp -= 4; W32(esp, v); }
/* 7aa443: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7aa449u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7aa449: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aa44c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aa44e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aa450: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7aa455u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7aa455: guest_badaddr(0x7aa455); return;
}

void f_7aa490(void) {
  LOAD_REGS();
L_7aa490: /* 7aa490: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7aa491: mov ebp, esp */
  ebp = esp;
/* 7aa493: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7aa495: push 0x9cea20 */
  { uint32_t v = 0x9cea20u; esp -= 4; W32(esp, v); }
/* 7aa49a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7aa4a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aa4a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7aa4a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7aa4ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7aa4ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aa4ad: mov esi, ecx */
  esi = ecx;
/* 7aa4af: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 7aa4b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aa4b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7aa4b5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7aa4b8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7aa4bf: jne 0x7aa4d9 */
  if (!zf) goto L_7aa4d9;
L_7aa4c1: /* 7aa4c1: push 0x289 */
  { uint32_t v = 0x289u; esp -= 4; W32(esp, v); }
/* 7aa4c6: push 0xace930 */
  { uint32_t v = 0xace930u; esp -= 4; W32(esp, v); }
/* 7aa4cb: push 0xace940 */
  { uint32_t v = 0xace940u; esp -= 4; W32(esp, v); }
/* 7aa4d0: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7aa4d6u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7aa4d6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7aa4d9: /* 7aa4d9: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7aa4dc: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 7aa4e2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7aa4e4: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7aa4e7: jnp 0x7aa4f9 */
  if (!pf) goto L_7aa4f9;
L_7aa4e9: /* 7aa4e9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7aa4ec: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7aa4ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aa4ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aa4f1: mov ecx, esi */
  ecx = esi;
/* 7aa4f3: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x7aa4f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7aa4f9: /* 7aa4f9: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7aa4fe: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7aa500: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 7aa503: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7aa505: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aa506: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7aa509: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aa50a: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x7aa50du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aa50d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7aa510: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7aa511: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7aa512: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7aa519: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7aa51a: mov esp, ebp */
  esp = ebp;
/* 7aa51c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7aa51d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7aa520(void) {
  LOAD_REGS();
L_7aa520: /* 7aa520: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7aa523: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7aa528: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7aa52b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aa52c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7aa52f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7aa534u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7aa534(); return;
}

void f_7aa534(void) {
  LOAD_REGS();
L_7aa534: /* 7aa534: push 0xa0c2f0 */
  { uint32_t v = 0xa0c2f0u; esp -= 4; W32(esp, v); }
/* 7aa539: push 0xace948 */
  { uint32_t v = 0xace948u; esp -= 4; W32(esp, v); }
/* 7aa53e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7aa544u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7aa544: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aa547: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aa549: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aa54b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7aa550u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7aa550: guest_badaddr(0x7aa550); return;
}

void f_7aa5a0(void) {
  LOAD_REGS();
L_7aa5a0: /* 7aa5a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7aa5a1: mov ebp, esp */
  ebp = esp;
/* 7aa5a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7aa5a5: push 0x9cea30 */
  { uint32_t v = 0x9cea30u; esp -= 4; W32(esp, v); }
/* 7aa5aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7aa5b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aa5b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7aa5b8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7aa5bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7aa5bc: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 7aa5bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aa5c0: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7aa5c3: xor ecx, ecx */
  ecx = 0;
/* 7aa5c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7aa5c6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7aa5c9: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 7aa5cc: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7aa5cf: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7aa5d2: jmp 0x7aa5d7 */
  goto L_7aa5d7;
L_7aa5d4: /* 7aa5d4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_7aa5d7: /* 7aa5d7: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7aa5d9: jle 0x7aa609 */
  if ((zf || sf != of)) goto L_7aa609;
L_7aa5db: /* 7aa5db: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7aa5de: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 7aa5e1: mov edi, esi */
  edi = esi;
/* 7aa5e3: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7aa5e5: mov edx, ecx */
  edx = ecx;
/* 7aa5e7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7aa5ea: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7aa5ec: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7aa5ef: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 7aa5f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aa5f3: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 7aa5f6: je 0x7aa604 */
  if (zf) goto L_7aa604;
L_7aa5f8: /* 7aa5f8: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7aa5fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aa5fb: mov ecx, edi */
  ecx = edi;
/* 7aa5fd: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7aa600u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aa600: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aa602: je 0x7aa5d4 */
  if (zf) goto L_7aa5d4;
L_7aa604: /* 7aa604: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 7aa607: jmp 0x7aa5d4 */
  goto L_7aa5d4;
L_7aa609: /* 7aa609: jne 0x7aa61b */
  if (!zf) goto L_7aa61b;
L_7aa60b: /* 7aa60b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aa60d: je 0x7aa61b */
  if (zf) goto L_7aa61b;
L_7aa60f: /* 7aa60f: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7aa612: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aa614: je 0x7aa62e */
  if (zf) goto L_7aa62e;
L_7aa616: /* 7aa616: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7aa619: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_7aa61b: /* 7aa61b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7aa61e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7aa625: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7aa626: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7aa627: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7aa628: mov esp, ebp */
  esp = ebp;
/* 7aa62a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7aa62b: ret 0x18 */
  esp += 28; SPILL(); return;
L_7aa62e: /* 7aa62e: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 7aa631: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aa633: je 0x7aa64f */
  if (zf) goto L_7aa64f;
L_7aa635: /* 7aa635: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7aa637: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7aa63au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aa63a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7aa63c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7aa63f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7aa646: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7aa647: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7aa648: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7aa649: mov esp, ebp */
  esp = ebp;
/* 7aa64b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7aa64c: ret 0x18 */
  esp += 28; SPILL(); return;
L_7aa64f: /* 7aa64f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7aa652: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7aa654: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aa655: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x7aa658u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aa658: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7aa65b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7aa65c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7aa65d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7aa664: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7aa665: mov esp, ebp */
  esp = ebp;
/* 7aa667: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7aa668: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_7aa66b(void) {
  LOAD_REGS();
L_7aa66b: /* 7aa66b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7aa66e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7aa673: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7aa676: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aa677: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7aa67a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7aa67fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7aa67f(); return;
}

void f_7aa67f(void) {
  LOAD_REGS();
L_7aa67f: /* 7aa67f: push 0xa0c324 */
  { uint32_t v = 0xa0c324u; esp -= 4; W32(esp, v); }
/* 7aa684: push 0xace980 */
  { uint32_t v = 0xace980u; esp -= 4; W32(esp, v); }
/* 7aa689: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7aa68fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7aa68f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aa692: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aa694: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aa696: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7aa69bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7aa69b: guest_badaddr(0x7aa69b); return;
}

void f_7aa6e0(void) {
  LOAD_REGS();
L_7aa6e0: /* 7aa6e0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7aa6e3: mov eax, dword ptr [eax + 0x88] */
  eax = R32((uint32_t)(eax + 0x88u));
/* 7aa6e9: ret  */
  esp += 4; SPILL(); return;
}

void f_7aa700(void) {
  LOAD_REGS();
L_7aa700: /* 7aa700: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7aa703: mov eax, dword ptr [eax + 0x8c] */
  eax = R32((uint32_t)(eax + 0x8cu));
/* 7aa709: ret  */
  esp += 4; SPILL(); return;
}

void f_7aa720(void) {
  LOAD_REGS();
L_7aa720: /* 7aa720: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7aa723: mov edx, dword ptr [eax + 0x98] */
  edx = R32((uint32_t)(eax + 0x98u));
/* 7aa729: xor ecx, ecx */
  ecx = 0;
/* 7aa72b: cmp edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7aa72e: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7aa731: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7aa732: and ecx, 0xfffffffd */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7aa735: add ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7aa738: mov eax, ecx */
  eax = ecx;
/* 7aa73a: ret  */
  esp += 4; SPILL(); return;
}

void f_7aa750(void) {
  LOAD_REGS();
L_7aa750: /* 7aa750: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7aa754: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7aa756: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aa757: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7aa75du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7aa75d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7aa770(void) {
  LOAD_REGS();
L_7aa770: /* 7aa770: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7aa774: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7aa776: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aa777: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7aa77du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7aa77d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7aa790(void) {
  LOAD_REGS();
L_7aa790: /* 7aa790: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7aa794: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aa796: je 0x7aa7a0 */
  if (zf) goto L_7aa7a0;
L_7aa798: /* 7aa798: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x7aa79eu); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 7aa79e: jmp 0x7aa7a2 */
  goto L_7aa7a2;
L_7aa7a0: /* 7aa7a0: xor eax, eax */
  eax = 0;
L_7aa7a2: /* 7aa7a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aa7a3: xor ecx, ecx */
  ecx = 0;
/* 7aa7a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aa7a6: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7aa7ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aa7ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aa7ad: call 0x99c910 */
  esp -= 4; W32(esp, 0x7aa7b2u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 7aa7b2: mov ecx, eax */
  ecx = eax;
/* 7aa7b4: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7aa7b8: mov esi, edx */
  esi = edx;
/* 7aa7ba: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7aa7bb: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 7aa7bd: adc esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  esi = r;
  }
/* 7aa7bf: mov edx, esi */
  edx = esi;
/* 7aa7c1: mov eax, ecx */
  eax = ecx;
/* 7aa7c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7aa7c4: ret  */
  esp += 4; SPILL(); return;
}

void f_7aa7e0(void) {
  LOAD_REGS();
L_7aa7e0: /* 7aa7e0: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 7aa7e4: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 7aa7e8: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 7aa7ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aa7ed: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 7aa7f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aa7f2: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 7aa7f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aa7f7: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 7aa7fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aa7fc: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 7aa800: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aa801: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 7aa805: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aa806: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aa807: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aa808: call dword ptr [0xcfa788] */
  esp -= 4; W32(esp, 0x7aa80eu); SPILL(); f_4e3acb(); if (g_unwind) return; /* Core!?StaticClass@UTextBuffer@@SAPAVUClass@@XZ */ RELOAD();
/* 7aa80e: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 7aa812: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aa813: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aa814: call dword ptr [0xcfa784] */
  esp -= 4; W32(esp, 0x7aa81au); SPILL(); f_4e1299(); if (g_unwind) return; /* Core!?StaticImportObject@UFactory@@SAPAVUObject@@PAVULevel@@PAVUClass@@PAV2@VFName@@KPBG2PAV1@4PAVFFeedbackContext@@@Z */ RELOAD();
/* 7aa81a: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aa81d: ret  */
  esp += 4; SPILL(); return;
}

void f_7aa830(void) {
  LOAD_REGS();
L_7aa830: /* 7aa830: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7aa834: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7aa838: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7aa83a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aa83b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7aa83eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aa83e: ret  */
  esp += 4; SPILL(); return;
}

void f_7aa850(void) {
  LOAD_REGS();
L_7aa850: /* 7aa850: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7aa854: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7aa858: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7aa85a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aa85b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7aa85eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aa85e: ret  */
  esp += 4; SPILL(); return;
}

void f_7aa870(void) {
  LOAD_REGS();
L_7aa870: /* 7aa870: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7aa874: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7aa878: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7aa87a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aa87b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7aa87eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aa87e: ret  */
  esp += 4; SPILL(); return;
}

void f_7aa890(void) {
  LOAD_REGS();
L_7aa890: /* 7aa890: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7aa894: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7aa898: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7aa89a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aa89b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7aa89eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aa89e: ret  */
  esp += 4; SPILL(); return;
}

void f_7aa8b0(void) {
  LOAD_REGS();
L_7aa8b0: /* 7aa8b0: mov eax, ecx */
  eax = ecx;
/* 7aa8b2: mov dword ptr [eax], 0x9f6cf4 */
  W32((uint32_t)(eax), 0x9f6cf4u);
/* 7aa8b8: ret  */
  esp += 4; SPILL(); return;
}

void f_7aa8d0(void) {
  LOAD_REGS();
L_7aa8d0: /* 7aa8d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7aa8d1: mov ebp, esp */
  ebp = esp;
/* 7aa8d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7aa8d5: push 0x9cea40 */
  { uint32_t v = 0x9cea40u; esp -= 4; W32(esp, v); }
/* 7aa8da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7aa8e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aa8e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7aa8e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7aa8eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7aa8ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aa8ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7aa8ee: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7aa8f1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7aa8f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7aa8f5: mov esi, ecx */
  esi = ecx;
/* 7aa8f7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7aa8fe: call 0x6c7fbd */
  esp -= 4; W32(esp, 0x7aa903u); SPILL(); f_6c7fbd(); if (g_unwind) return; RELOAD();
/* 7aa903: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7aa905: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 7aa908: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aa909: mov ecx, edi */
  ecx = edi;
/* 7aa90b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7aa90eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aa90e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7aa910: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* 7aa913: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aa914: mov ecx, eax */
  ecx = eax;
/* 7aa916: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7aa919u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aa919: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7aa91b: lea ecx, [esi + 0x68] */
  ecx = (uint32_t)(esi + 0x68u);
/* 7aa91e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aa91f: mov ecx, eax */
  ecx = eax;
/* 7aa921: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7aa924u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aa924: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7aa926: lea ecx, [esi + 0x70] */
  ecx = (uint32_t)(esi + 0x70u);
/* 7aa929: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aa92a: mov ecx, eax */
  ecx = eax;
/* 7aa92c: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7aa92fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aa92f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7aa931: add esi, 0x6c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7aa934: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aa935: mov ecx, eax */
  ecx = eax;
/* 7aa937: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7aa93au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aa93a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7aa93d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7aa93e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7aa93f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7aa946: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7aa947: mov esp, ebp */
  esp = ebp;
/* 7aa949: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7aa94a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7aa94d(void) {
  LOAD_REGS();
L_7aa94d: /* 7aa94d: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7aa950: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7aa955: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7aa958: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aa959: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7aa95c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7aa961u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7aa961(); return;
}

void f_7aa961(void) {
  LOAD_REGS();
L_7aa961: /* 7aa961: push 0xa0c35c */
  { uint32_t v = 0xa0c35cu; esp -= 4; W32(esp, v); }
/* 7aa966: push 0xace25c */
  { uint32_t v = 0xace25cu; esp -= 4; W32(esp, v); }
/* 7aa96b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7aa971u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7aa971: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aa974: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aa976: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aa978: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7aa97du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7aa97d: guest_badaddr(0x7aa97d); return;
}

void f_7aa9b0(void) {
  LOAD_REGS();
L_7aa9b0: /* 7aa9b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7aa9b1: mov ebp, esp */
  ebp = esp;
/* 7aa9b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7aa9b5: push 0x9cea50 */
  { uint32_t v = 0x9cea50u; esp -= 4; W32(esp, v); }
/* 7aa9ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7aa9c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aa9c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7aa9c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7aa9cb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7aa9ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7aa9cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aa9d0: mov esi, ecx */
  esi = ecx;
/* 7aa9d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7aa9d3: mov edi, dword ptr [esi + 0xa8] */
  edi = R32((uint32_t)(esi + 0xa8u));
/* 7aa9d9: mov dword ptr [esi + 0xa8], eax */
  W32((uint32_t)(esi + 0xa8u), eax);
/* 7aa9df: mov ecx, dword ptr [0xcfa78c] */
  ecx = R32((uint32_t)(0xcfa78cu));
/* 7aa9e5: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7aa9e8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7aa9eb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7aa9f2: je 0x7aaa14 */
  if (zf) goto L_7aaa14;
L_7aa9f4: /* 7aa9f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aa9f6: je 0x7aaa29 */
  if (zf) goto L_7aaa29;
L_7aa9f8: /* 7aa9f8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aa9fa: jne 0x7aaa14 */
  if (!zf) goto L_7aaa14;
L_7aa9fc: /* 7aa9fc: mov ecx, esi */
  ecx = esi;
/* 7aa9fe: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7aaa04u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7aaa04: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 7aaa07: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7aaa09: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7aaa0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7aaa0b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7aaa0d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aaa0e: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x7aaa14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7aaa14: /* 7aaa14: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7aaa17: mov eax, edi */
  eax = edi;
/* 7aaa19: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7aaa1a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7aaa1b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7aaa22: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7aaa23: mov esp, ebp */
  esp = ebp;
/* 7aaa25: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7aaa26: ret 4 */
  esp += 8; SPILL(); return;
L_7aaa29: /* 7aaa29: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aaa2b: je 0x7aaa14 */
  if (zf) goto L_7aaa14;
L_7aaa2d: /* 7aaa2d: mov ecx, esi */
  ecx = esi;
/* 7aaa2f: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7aaa35u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7aaa35: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 7aaa38: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7aaa3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aaa3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aaa3e: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7aaa40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aaa41: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x7aaa47u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aaa47: jmp 0x7aaa14 */
  goto L_7aaa14;
}

void f_7aaa49(void) {
  LOAD_REGS();
L_7aaa49: /* 7aaa49: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7aaa4c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7aaa51: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7aaa54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aaa55: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7aaa58: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7aaa5du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7aaa5d(); return;
}

void f_7aaa5d(void) {
  LOAD_REGS();
L_7aaa5d: /* 7aaa5d: push 0xa0c390 */
  { uint32_t v = 0xa0c390u; esp -= 4; W32(esp, v); }
/* 7aaa62: push 0xace280 */
  { uint32_t v = 0xace280u; esp -= 4; W32(esp, v); }
/* 7aaa67: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7aaa6du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7aaa6d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aaa70: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aaa72: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aaa74: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7aaa79u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7aaa79: guest_badaddr(0x7aaa79); return;
}

void f_7aaac0(void) {
  LOAD_REGS();
L_7aaac0: /* 7aaac0: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 7aaac3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aaac5: je 0x7aab28 */
  if (zf) goto L_7aab28;
L_7aaac7: /* 7aaac7: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 7aaacd: mov edx, dword ptr [ecx + 0x8c] */
  edx = R32((uint32_t)(ecx + 0x8cu));
/* 7aaad3: mov ecx, dword ptr [edx + 0x5c] */
  ecx = R32((uint32_t)(edx + 0x5cu));
/* 7aaad6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aaad8: je 0x7aaaf4 */
  if (zf) goto L_7aaaf4;
L_7aaada: /* 7aaada: mov ecx, dword ptr [eax + 0x540] */
  ecx = R32((uint32_t)(eax + 0x540u));
/* 7aaae0: cmp ecx, 0xd */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7aaae3: je 0x7aaaf4 */
  if (zf) goto L_7aaaf4;
L_7aaae5: /* 7aaae5: cmp ecx, 0xe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7aaae8: je 0x7aaaf4 */
  if (zf) goto L_7aaaf4;
L_7aaaea: /* 7aaaea: cmp ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7aaaed: je 0x7aaaf4 */
  if (zf) goto L_7aaaf4;
L_7aaaef: /* 7aaaef: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7aaaf2: jne 0x7aab28 */
  if (!zf) goto L_7aab28;
L_7aaaf4: /* 7aaaf4: mov eax, dword ptr [eax + 0x540] */
  eax = R32((uint32_t)(eax + 0x540u));
/* 7aaafa: cmp eax, 0x12 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7aaafd: je 0x7aab28 */
  if (zf) goto L_7aab28;
L_7aaaff: /* 7aaaff: cmp eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7aab02: je 0x7aab28 */
  if (zf) goto L_7aab28;
L_7aab04: /* 7aab04: cmp eax, 0x13 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x13u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7aab07: je 0x7aab28 */
  if (zf) goto L_7aab28;
L_7aab09: /* 7aab09: cmp eax, 0x1a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7aab0c: je 0x7aab28 */
  if (zf) goto L_7aab28;
L_7aab0e: /* 7aab0e: cmp eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7aab11: je 0x7aab28 */
  if (zf) goto L_7aab28;
L_7aab13: /* 7aab13: cmp eax, 0x15 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x15u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7aab16: je 0x7aab28 */
  if (zf) goto L_7aab28;
L_7aab18: /* 7aab18: cmp eax, 0x1e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7aab1b: je 0x7aab28 */
  if (zf) goto L_7aab28;
L_7aab1d: /* 7aab1d: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7aab20: je 0x7aab28 */
  if (zf) goto L_7aab28;
L_7aab22: /* 7aab22: mov eax, 1 */
  eax = 0x1u;
/* 7aab27: ret  */
  esp += 4; SPILL(); return;
L_7aab28: /* 7aab28: xor eax, eax */
  eax = 0;
/* 7aab2a: ret  */
  esp += 4; SPILL(); return;
}

void f_7aab50(void) {
  LOAD_REGS();
L_7aab50: /* 7aab50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7aab51: mov ebp, esp */
  ebp = esp;
/* 7aab53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7aab55: push 0x9cea60 */
  { uint32_t v = 0x9cea60u; esp -= 4; W32(esp, v); }
/* 7aab5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7aab60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aab61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7aab68: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7aab6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7aab6c: mov eax, ecx */
  eax = ecx;
/* 7aab6e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aab6f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7aab72: mov ecx, dword ptr [eax + 0x70] */
  ecx = R32((uint32_t)(eax + 0x70u));
/* 7aab75: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aab77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7aab78: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7aab7b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7aab82: jne 0x7aab9f */
  if (!zf) goto L_7aab9f;
L_7aab84: /* 7aab84: push 0xf4 */
  { uint32_t v = 0xf4u; esp -= 4; W32(esp, v); }
/* 7aab89: push 0xace384 */
  { uint32_t v = 0xace384u; esp -= 4; W32(esp, v); }
/* 7aab8e: push 0xace394 */
  { uint32_t v = 0xace394u; esp -= 4; W32(esp, v); }
/* 7aab93: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7aab99u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7aab99: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7aab9c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7aab9f: /* 7aab9f: mov ecx, dword ptr [0xcfa790] */
  ecx = R32((uint32_t)(0xcfa790u));
/* 7aaba5: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7aaba8: je 0x7aabbe */
  if (zf) goto L_7aabbe;
L_7aabaa: /* 7aabaa: fld qword ptr [eax + 0x138] */
  { double v = F64((uint32_t)(eax + 0x138u)); FPUSH(v); }
/* 7aabb0: fadd qword ptr [0xa0c3e8] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c3e8u)));
/* 7aabb6: fstp qword ptr [eax + 0x138] */
  WF64((uint32_t)(eax + 0x138u), ST0); FPOP();
/* 7aabbc: jmp 0x7aac05 */
  goto L_7aac05;
L_7aabbe: /* 7aabbe: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7aabc0: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7aabc3: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7aabc6: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7aabc9: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7aabcc: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7aabce: jge 0x7aabd6 */
  if ((sf == of)) goto L_7aabd6;
L_7aabd0: /* 7aabd0: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_7aabd6: /* 7aabd6: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7aabd9: fmul qword ptr [0xa0c228] */
  ST0 = ST0 * (F64((uint32_t)(0xa0c228u)));
/* 7aabdf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7aabe1: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7aabe4: jge 0x7aabec */
  if ((sf == of)) goto L_7aabec;
L_7aabe6: /* 7aabe6: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_7aabec: /* 7aabec: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 7aabf2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7aabf4: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7aabf7: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 7aabf9: fadd qword ptr [0xa0c218] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c218u)));
/* 7aabff: fstp qword ptr [edx + 0x138] */
  WF64((uint32_t)(edx + 0x138u), ST0); FPOP();
L_7aac05: /* 7aac05: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7aac08: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7aac0b: xor eax, eax */
  eax = 0;
/* 7aac0d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aac0f: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7aac12: mov dword ptr [ecx + 0x15c], eax */
  W32((uint32_t)(ecx + 0x15cu), eax);
/* 7aac18: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7aac1b: inc dword ptr [eax + 0x9c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x9cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x9cu), r);
  }
/* 7aac21: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7aac24: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7aac27: mov ecx, dword ptr [eax + 0x70] */
  ecx = R32((uint32_t)(eax + 0x70u));
/* 7aac2a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7aac2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aac2d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7aac30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aac31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aac32: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x7aac38u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aac38: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7aac3b: mov dword ptr [ecx + 0x148], eax */
  W32((uint32_t)(ecx + 0x148u), eax);
/* 7aac41: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7aac44: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 7aac47: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aac49: je 0x7aac5b */
  if (zf) goto L_7aac5b;
L_7aac4b: /* 7aac4b: cmp dword ptr [eax + 0x540], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x540u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7aac52: jne 0x7aac5b */
  if (!zf) goto L_7aac5b;
L_7aac54: /* 7aac54: mov ecx, 1 */
  ecx = 0x1u;
/* 7aac59: jmp 0x7aac5d */
  goto L_7aac5d;
L_7aac5b: /* 7aac5b: xor ecx, ecx */
  ecx = 0;
L_7aac5d: /* 7aac5d: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* 7aac5f: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 7aac61: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 7aac64: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 7aac66: shl al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 7aac68: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7aac69: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7aac6a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7aac6b: mov byte ptr [edx + 0x150], al */
  W8((uint32_t)(edx + 0x150u), (eax & 0xffu));
/* 7aac71: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7aac74: mov edx, dword ptr [ecx + 0x148] */
  edx = R32((uint32_t)(ecx + 0x148u));
/* 7aac7a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7aac7d: xor eax, eax */
  eax = 0;
/* 7aac7f: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aac81: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7aac84: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7aac8b: mov esp, ebp */
  esp = ebp;
/* 7aac8d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7aac8e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7aac91(void) {
  LOAD_REGS();
L_7aac91: /* 7aac91: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7aac94: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7aac99: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7aac9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aac9d: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 7aaca0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7aaca5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7aaca5(); return;
}

void f_7aaca5(void) {
  LOAD_REGS();
L_7aaca5: /* 7aaca5: push 0xa0c3c0 */
  { uint32_t v = 0xa0c3c0u; esp -= 4; W32(esp, v); }
/* 7aacaa: push 0xace39c */
  { uint32_t v = 0xace39cu; esp -= 4; W32(esp, v); }
/* 7aacaf: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7aacb5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7aacb5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aacb8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aacba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aacbc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7aacc1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7aacc1: guest_badaddr(0x7aacc1); return;
}

void f_7aad30(void) {
  LOAD_REGS();
L_7aad30: /* 7aad30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7aad31: mov ebp, esp */
  ebp = esp;
/* 7aad33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7aad35: push 0x9cea70 */
  { uint32_t v = 0x9cea70u; esp -= 4; W32(esp, v); }
/* 7aad3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7aad40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aad41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7aad48: sub esp, 0x214 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x214u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7aad4e: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 7aad51: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7aad52: mov ebx, dword ptr [eax + 0xb4] */
  ebx = R32((uint32_t)(eax + 0xb4u));
/* 7aad58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aad59: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7aad5a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7aad5d: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7aad60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aad62: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7aad65: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7aad6c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7aad72u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7aad72: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7aad78: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 7aad7a: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7aad80u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 7aad80: mov edi, eax */
  edi = eax;
/* 7aad82: call dword ptr [0xcfa788] */
  esp -= 4; W32(esp, 0x7aad88u); SPILL(); f_4e3acb(); if (g_unwind) return; /* Core!?StaticClass@UTextBuffer@@SAPAVUClass@@XZ */ RELOAD();
/* 7aad88: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7aad8b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aad8c: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7aad8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aad91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aad93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aad95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aad96: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aad98: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aad99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7aad9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aad9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7aad9c: call dword ptr [0xcfa784] */
  esp -= 4; W32(esp, 0x7aada2u); SPILL(); f_4e1299(); if (g_unwind) return; /* Core!?StaticImportObject@UFactory@@SAPAVUObject@@PAVULevel@@PAVUClass@@PAV2@VFName@@KPBG2PAV1@4PAVFFeedbackContext@@@Z */ RELOAD();
/* 7aada2: mov edi, eax */
  edi = eax;
/* 7aada4: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aada7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aada9: je 0x7aae3b */
  if (zf) goto L_7aae3b;
L_7aadaf: /* 7aadaf: mov ecx, edi */
  ecx = edi;
/* 7aadb1: call dword ptr [0xcfa7a4] */
  esp -= 4; W32(esp, 0x7aadb7u); SPILL(); f_4e3ef4(); if (g_unwind) return; /* Core!?AddToRoot@UObject@@QAEXXZ */ RELOAD();
/* 7aadb7: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7aadbc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7aadbe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aadbf: push 0xace8ec */
  { uint32_t v = 0xace8ecu; esp -= 4; W32(esp, v); }
/* 7aadc4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aadc5: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7aadcbu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7aadcb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aadce: lea ecx, [edi + 0x34] */
  ecx = (uint32_t)(edi + 0x34u);
/* 7aadd1: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7aadd7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7aadd7: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 7aadda: mov esi, dword ptr [0xcfa7a0] */
  esi = R32((uint32_t)(0xcfa7a0u));
/* 7aade0: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_7aade3: /* 7aade3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aade5: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7aadea: lea edx, [ebp - 0x220] */
  edx = (uint32_t)(ebp + 0xfffffde0u);
/* 7aadf0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aadf1: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7aadf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aadf5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7aadf7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aadf7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aadfa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aadfc: je 0x7aae13 */
  if (zf) goto L_7aae13;
L_7aadfe: /* 7aadfe: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7aae01: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7aae04: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7aae07: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7aae08: lea eax, [ebp - 0x220] */
  eax = (uint32_t)(ebp + 0xfffffde0u);
/* 7aae0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aae0f: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x7aae11u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aae11: jmp 0x7aade3 */
  goto L_7aade3;
L_7aae13: /* 7aae13: mov ecx, edi */
  ecx = edi;
/* 7aae15: call dword ptr [0xcfa79c] */
  esp -= 4; W32(esp, 0x7aae1bu); SPILL(); f_4e211c(); if (g_unwind) return; /* Core!?RemoveFromRoot@UObject@@QAEXXZ */ RELOAD();
/* 7aae1b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aae1d: je 0x7aae28 */
  if (zf) goto L_7aae28;
L_7aae1f: /* 7aae1f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7aae21: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7aae23: mov ecx, edi */
  ecx = edi;
/* 7aae25: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7aae28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7aae28: /* 7aae28: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7aae2b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7aae32: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7aae33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7aae34: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7aae35: mov esp, ebp */
  esp = ebp;
/* 7aae37: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7aae38: ret 8 */
  esp += 12; SPILL(); return;
L_7aae3b: /* 7aae3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aae3d: push 0xace904 */
  { uint32_t v = 0xace904u; esp -= 4; W32(esp, v); }
/* 7aae42: push 0xace910 */
  { uint32_t v = 0xace910u; esp -= 4; W32(esp, v); }
/* 7aae47: call dword ptr [0xcfa798] */
  esp -= 4; W32(esp, 0x7aae4du); SPILL(); f_4e2702(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBDPBG1@Z */ RELOAD();
/* 7aae4d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aae50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aae51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aae52: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7aae55: push 0x300 */
  { uint32_t v = 0x300u; esp -= 4; W32(esp, v); }
/* 7aae5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aae5b: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7aae61u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7aae61: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7aae64: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aae67: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7aae68: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7aae69: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7aae70: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7aae71: mov esp, ebp */
  esp = ebp;
/* 7aae73: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7aae74: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7aae77(void) {
  LOAD_REGS();
L_7aae77: /* 7aae77: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7aae7a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7aae7f: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7aae82: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aae83: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7aae86: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7aae8bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7aae8b(); return;
}

void f_7aae8b(void) {
  LOAD_REGS();
L_7aae8b: /* 7aae8b: push 0xa0c3f4 */
  { uint32_t v = 0xa0c3f4u; esp -= 4; W32(esp, v); }
/* 7aae90: push 0xace920 */
  { uint32_t v = 0xace920u; esp -= 4; W32(esp, v); }
/* 7aae95: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7aae9bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7aae9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aae9e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aaea0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aaea2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7aaea7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7aaea7: guest_badaddr(0x7aaea7); return;
}

void f_7aaf10(void) {
  LOAD_REGS();
L_7aaf10: /* 7aaf10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aaf11: mov esi, ecx */
  esi = ecx;
/* 7aaf13: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aaf16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7aaf18: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7aaf19: jg 0x7aaf33 */
  if ((!zf && sf == of)) goto L_7aaf33;
L_7aaf1b: /* 7aaf1b: push 0x1a3 */
  { uint32_t v = 0x1a3u; esp -= 4; W32(esp, v); }
/* 7aaf20: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7aaf25: push 0xac3d0c */
  { uint32_t v = 0xac3d0cu; esp -= 4; W32(esp, v); }
/* 7aaf2a: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7aaf30u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7aaf30: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7aaf33: /* 7aaf33: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aaf36: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7aaf38: mov edi, dword ptr [ecx + eax*4 - 4] */
  edi = R32((uint32_t)(ecx + eax*4 + 0xfffffffcu));
/* 7aaf3c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7aaf3e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7aaf3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aaf40: mov ecx, esi */
  ecx = esi;
/* 7aaf42: call 0x6c392c */
  esp -= 4; W32(esp, 0x7aaf47u); SPILL(); f_6c392c(); if (g_unwind) return; RELOAD();
/* 7aaf47: mov eax, edi */
  eax = edi;
/* 7aaf49: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7aaf4a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7aaf4b: ret  */
  esp += 4; SPILL(); return;
}

void f_7aaf60(void) {
  LOAD_REGS();
L_7aaf60: /* 7aaf60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aaf61: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7aaf63: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7aaf65: mov esi, ecx */
  esi = ecx;
/* 7aaf67: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7aaf6du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7aaf6d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7aaf71: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7aaf73: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7aaf75: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 7aaf78: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7aaf79: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7aaf90(void) {
  LOAD_REGS();
L_7aaf90: /* 7aaf90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aaf91: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7aaf93: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7aaf95: mov esi, ecx */
  esi = ecx;
/* 7aaf97: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7aaf9du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7aaf9d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7aafa1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7aafa3: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7aafa5: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 7aafa8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7aafa9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7aafc0(void) {
  LOAD_REGS();
L_7aafc0: /* 7aafc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aafc1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7aafc5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aafc7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7aafc8: je 0x7aafe8 */
  if (zf) goto L_7aafe8;
L_7aafca: /* 7aafca: push 0xb7bee0 */
  { uint32_t v = 0xb7bee0u; esp -= 4; W32(esp, v); }
/* 7aafcf: mov ecx, esi */
  ecx = esi;
/* 7aafd1: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7aafd7u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7aafd7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aafd9: jne 0x7ab010 */
  if (!zf) goto L_7ab010;
L_7aafdb: /* 7aafdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aafdc: mov ecx, esi */
  ecx = esi;
/* 7aafde: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7aafe4u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7aafe4: mov edi, eax */
  edi = eax;
/* 7aafe6: jmp 0x7aafed */
  goto L_7aafed;
L_7aafe8: /* 7aafe8: mov edi, 0xace988 */
  edi = 0xace988u;
L_7aafed: /* 7aafed: mov ecx, 0xb7bee0 */
  ecx = 0xb7bee0u;
/* 7aaff2: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7aaff8u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7aaff8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aaff9: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 7aaffe: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7ab000: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ab001: push 0xace994 */
  { uint32_t v = 0xace994u; esp -= 4; W32(esp, v); }
/* 7ab006: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab007: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7ab00du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7ab00d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ab010: /* 7ab010: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab011: mov eax, esi */
  eax = esi;
/* 7ab013: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab014: ret  */
  esp += 4; SPILL(); return;
}

void f_7ab040(void) {
  LOAD_REGS();
L_7ab040: /* 7ab040: mov eax, dword ptr [0xcc7fe8] */
  eax = R32((uint32_t)(0xcc7fe8u));
/* 7ab045: ret  */
  esp += 4; SPILL(); return;
}

void f_7ab060(void) {
  LOAD_REGS();
L_7ab060: /* 7ab060: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ab061: mov esi, ecx */
  esi = ecx;
/* 7ab063: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7ab067: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab069: mov dword ptr [esi], 0x9f7e94 */
  W32((uint32_t)(esi), 0x9f7e94u);
/* 7ab06f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 7ab072: je 0x7ab07c */
  if (zf) goto L_7ab07c;
L_7ab074: /* 7ab074: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x7ab07au); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 7ab07a: jmp 0x7ab07e */
  goto L_7ab07e;
L_7ab07c: /* 7ab07c: xor eax, eax */
  eax = 0;
L_7ab07e: /* 7ab07e: xor ecx, ecx */
  ecx = 0;
/* 7ab080: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab081: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7ab086: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab087: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab088: call 0x99c910 */
  esp -= 4; W32(esp, 0x7ab08du); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 7ab08d: add eax, 0xe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 7ab092: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 7ab095: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 7ab098: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7ab09b: mov eax, esi */
  eax = esi;
/* 7ab09d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab09e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ab0d0(void) {
  LOAD_REGS();
  extern int host_handle_unrealscript_cmd(uint32_t cmd_ptr);
  if (host_handle_unrealscript_cmd(R32(esp + 4))) {
    eax = 1;
    esp += 12;
    SPILL();
    return;
  }
L_7ab0d0: /* 7ab0d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ab0d1: mov ebp, esp */
  ebp = esp;
/* 7ab0d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ab0d5: push 0x9cea91 */
  { uint32_t v = 0x9cea91u; esp -= 4; W32(esp, v); }
/* 7ab0da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ab0e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab0e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ab0e8: sub esp, 0x828 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x828u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ab0ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ab0ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ab0f0: mov esi, ecx */
  esi = ecx;
/* 7ab0f2: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab0f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab0f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ab0f8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ab0fb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ab102: jne 0x7ab11c */
  if (!zf) goto L_7ab11c;
L_7ab104: /* 7ab104: push 0x134 */
  { uint32_t v = 0x134u; esp -= 4; W32(esp, v); }
/* 7ab109: push 0xace420 */
  { uint32_t v = 0xace420u; esp -= 4; W32(esp, v); }
/* 7ab10e: push 0xace430 */
  { uint32_t v = 0xace430u; esp -= 4; W32(esp, v); }
/* 7ab113: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7ab119u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7ab119: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ab11c: /* 7ab11c: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 7ab11f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab121: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 7ab124: je 0x7ab13a */
  if (zf) goto L_7ab13a;
L_7ab126: /* 7ab126: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7ab129: lea ecx, [eax + 0x28] */
  ecx = (uint32_t)(eax + 0x28u);
/* 7ab12c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7ab12e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ab12f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab130: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7ab132u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab132: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab134: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7ab13a: /* 7ab13a: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 7ab13d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab13f: je 0x7ab155 */
  if (zf) goto L_7ab155;
L_7ab141: /* 7ab141: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7ab144: lea ecx, [eax + 0x28] */
  ecx = (uint32_t)(eax + 0x28u);
/* 7ab147: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7ab149: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ab14a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab14b: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7ab14du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab14d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab14f: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7ab155: /* 7ab155: mov edi, dword ptr [0xcfa5b8] */
  edi = R32((uint32_t)(0xcfa5b8u));
/* 7ab15b: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab15e: push 0xace438 */
  { uint32_t v = 0xace438u; esp -= 4; W32(esp, v); }
/* 7ab163: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab164: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab166u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab166: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab169: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab16b: je 0x7ab192 */
  if (zf) goto L_7ab192;
L_7ab16d: /* 7ab16d: mov edx, dword ptr [esi - 0x2c] */
  edx = R32((uint32_t)(esi + 0xffffffd4u));
/* 7ab170: lea ecx, [esi - 0x2c] */
  ecx = (uint32_t)(esi + 0xffffffd4u);
/* 7ab173: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x7ab176u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab176: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab178: mov eax, 0xace454 */
  eax = 0xace454u;
/* 7ab17d: jne 0x7ab184 */
  if (!zf) goto L_7ab184;
L_7ab17f: /* 7ab17f: mov eax, 0xace460 */
  eax = 0xace460u;
L_7ab184: /* 7ab184: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab185: mov ecx, ebx */
  ecx = ebx;
/* 7ab187: call dword ptr [0xcfa5b4] */
  esp -= 4; W32(esp, 0x7ab18du); SPILL(); f_4e35da(); if (g_unwind) return; /* Core!?Log@FOutputDevice@@QAEXPBG@Z */ RELOAD();
/* 7ab18d: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab192: /* 7ab192: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab195: push 0xace46c */
  { uint32_t v = 0xace46cu; esp -= 4; W32(esp, v); }
/* 7ab19a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab19b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab19du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab19d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab1a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab1a2: je 0x7ab1b8 */
  if (zf) goto L_7ab1b8;
L_7ab1a4: /* 7ab1a4: push 0xace47c */
  { uint32_t v = 0xace47cu; esp -= 4; W32(esp, v); }
/* 7ab1a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ab1aa: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7ab1b0u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7ab1b0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab1b3: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab1b8: /* 7ab1b8: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab1bb: push 0xace480 */
  { uint32_t v = 0xace480u; esp -= 4; W32(esp, v); }
/* 7ab1c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab1c1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab1c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab1c3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab1c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab1c8: je 0x7ab213 */
  if (zf) goto L_7ab213;
L_7ab1ca: /* 7ab1ca: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7ab1cd: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 7ab1d3: mov esi, dword ptr [eax + 0x3c] */
  esi = R32((uint32_t)(eax + 0x3cu));
/* 7ab1d6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab1d8: je 0x7ab683 */
  if (zf) goto L_7ab683;
L_7ab1de: /* 7ab1de: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 7ab1e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab1e3: je 0x7ab683 */
  if (zf) goto L_7ab683;
L_7ab1e9: /* 7ab1e9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ab1ec: mov edi, dword ptr [0xcfa3a4] */
  edi = R32((uint32_t)(0xcfa3a4u));
/* 7ab1f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab1f3: push 0xace490 */
  { uint32_t v = 0xace490u; esp -= 4; W32(esp, v); }
/* 7ab1f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ab1f9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab1fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab1fb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ab1fe: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 7ab201: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab204: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab205: add edx, 0x28 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7ab208: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab209: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab20bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab20b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab20e: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab213: /* 7ab213: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab216: push 0xace4ac */
  { uint32_t v = 0xace4acu; esp -= 4; W32(esp, v); }
/* 7ab21b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab21c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab21eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab21e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab221: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab223: je 0x7ab300 */
  if (zf) goto L_7ab300;
L_7ab229: /* 7ab229: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ab22c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab22d: call dword ptr [0xcfa7b4] */
  esp -= 4; W32(esp, 0x7ab233u); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 7ab233: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7ab236: mov ebx, eax */
  ebx = eax;
/* 7ab238: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 7ab23e: mov edi, dword ptr [eax + 0x3c] */
  edi = R32((uint32_t)(eax + 0x3cu));
/* 7ab241: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab244: cmp ebx, 0x708 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x708u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ab24a: jl 0x7ab683 */
  if ((sf != of)) goto L_7ab683;
L_7ab250: /* 7ab250: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 7ab256: fld dword ptr [edx + 0x3ac] */
  { double v = F32((uint32_t)(edx + 0x3acu)); FPUSH(v); }
/* 7ab25c: fcomp dword ptr [ecx + 0x7c4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x7c4u)));
  FPOP();
/* 7ab262: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ab264: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab267: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7ab26d: /* 7ab26d: mov al, byte ptr [edx + 0x4c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x4c8u))) & 0xffu);
/* 7ab273: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab275: je 0x7ab289 */
  if (zf) goto L_7ab289;
L_7ab277: /* 7ab277: fld dword ptr [edx + 0x3ac] */
  { double v = F32((uint32_t)(edx + 0x3acu)); FPUSH(v); }
/* 7ab27d: fadd dword ptr [0x9f74fc] */
  ST0 = ST0 + (F32((uint32_t)(0x9f74fcu)));
/* 7ab283: fstp dword ptr [ecx + 0x7c4] */
  WF32((uint32_t)(ecx + 0x7c4u), ST0); FPOP();
L_7ab289: /* 7ab289: mov edx, dword ptr [0xcc7fe8] */
  edx = R32((uint32_t)(0xcc7fe8u));
/* 7ab28f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ab291: mov dword ptr [edx + 0x48], ebx */
  W32((uint32_t)(edx + 0x48u), ebx);
/* 7ab294: mov ecx, dword ptr [0xcc7fe8] */
  ecx = R32((uint32_t)(0xcc7fe8u));
/* 7ab29a: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7ab29f: call dword ptr [0xcfa774] */
  esp -= 4; W32(esp, 0x7ab2a5u); SPILL(); f_4e3b84(); if (g_unwind) return; /* Core!?SaveConfig@UObject@@QAEXKPBG@Z */ RELOAD();
/* 7ab2a5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab2a7: je 0x7ab683 */
  if (zf) goto L_7ab683;
L_7ab2ad: /* 7ab2ad: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 7ab2b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab2b2: je 0x7ab683 */
  if (zf) goto L_7ab683;
L_7ab2b8: /* 7ab2b8: push 0xace4c0 */
  { uint32_t v = 0xace4c0u; esp -= 4; W32(esp, v); }
/* 7ab2bd: lea ecx, [eax + 0x70] */
  ecx = (uint32_t)(eax + 0x70u);
/* 7ab2c0: call 0x6c991c */
  esp -= 4; W32(esp, 0x7ab2c5u); SPILL(); f_6c991c(); if (g_unwind) return; RELOAD();
/* 7ab2c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab2c7: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7ab2cd: /* 7ab2cd: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 7ab2d0: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ab2d2: jge 0x7ab2d6 */
  if ((sf == of)) goto L_7ab2d6;
L_7ab2d4: /* 7ab2d4: mov eax, ebx */
  eax = ebx;
L_7ab2d6: /* 7ab2d6: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 7ab2d9: mov dword ptr [ecx + 0x44], eax */
  W32((uint32_t)(ecx + 0x44u), eax);
/* 7ab2dc: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 7ab2df: mov eax, dword ptr [edx + 0x44] */
  eax = R32((uint32_t)(edx + 0x44u));
/* 7ab2e2: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 7ab2e5: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 7ab2e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ab2e9: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7ab2ec: push 0xace4c8 */
  { uint32_t v = 0xace4c8u; esp -= 4; W32(esp, v); }
/* 7ab2f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab2f2: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7ab2f8u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7ab2f8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab2fb: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab300: /* 7ab300: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab303: push 0xace4e0 */
  { uint32_t v = 0xace4e0u; esp -= 4; W32(esp, v); }
/* 7ab308: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab309: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab30bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab30b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab30e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab310: je 0x7ab3ed */
  if (zf) goto L_7ab3ed;
L_7ab316: /* 7ab316: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ab319: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab31a: call dword ptr [0xcfa7b4] */
  esp -= 4; W32(esp, 0x7ab320u); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 7ab320: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7ab323: mov ebx, eax */
  ebx = eax;
/* 7ab325: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 7ab32b: mov edi, dword ptr [eax + 0x3c] */
  edi = R32((uint32_t)(eax + 0x3cu));
/* 7ab32e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab331: cmp ebx, 0x708 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x708u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ab337: jl 0x7ab683 */
  if ((sf != of)) goto L_7ab683;
L_7ab33d: /* 7ab33d: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 7ab343: fld dword ptr [edx + 0x3ac] */
  { double v = F32((uint32_t)(edx + 0x3acu)); FPUSH(v); }
/* 7ab349: fcomp dword ptr [ecx + 0x7c4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x7c4u)));
  FPOP();
/* 7ab34f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ab351: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab354: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7ab35a: /* 7ab35a: mov al, byte ptr [edx + 0x4c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x4c8u))) & 0xffu);
/* 7ab360: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab362: je 0x7ab376 */
  if (zf) goto L_7ab376;
L_7ab364: /* 7ab364: fld dword ptr [edx + 0x3ac] */
  { double v = F32((uint32_t)(edx + 0x3acu)); FPUSH(v); }
/* 7ab36a: fadd dword ptr [0x9f74fc] */
  ST0 = ST0 + (F32((uint32_t)(0x9f74fcu)));
/* 7ab370: fstp dword ptr [ecx + 0x7c4] */
  WF32((uint32_t)(ecx + 0x7c4u), ST0); FPOP();
L_7ab376: /* 7ab376: mov ecx, dword ptr [0xcc7fe8] */
  ecx = R32((uint32_t)(0xcc7fe8u));
/* 7ab37c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ab37e: mov dword ptr [ecx + 0x48], ebx */
  W32((uint32_t)(ecx + 0x48u), ebx);
/* 7ab381: mov ecx, dword ptr [0xcc7fe8] */
  ecx = R32((uint32_t)(0xcc7fe8u));
/* 7ab387: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* 7ab38c: call dword ptr [0xcfa774] */
  esp -= 4; W32(esp, 0x7ab392u); SPILL(); f_4e3b84(); if (g_unwind) return; /* Core!?SaveConfig@UObject@@QAEXKPBG@Z */ RELOAD();
/* 7ab392: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab394: je 0x7ab683 */
  if (zf) goto L_7ab683;
L_7ab39a: /* 7ab39a: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 7ab39d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab39f: je 0x7ab683 */
  if (zf) goto L_7ab683;
L_7ab3a5: /* 7ab3a5: push 0xace4f4 */
  { uint32_t v = 0xace4f4u; esp -= 4; W32(esp, v); }
/* 7ab3aa: lea ecx, [eax + 0x70] */
  ecx = (uint32_t)(eax + 0x70u);
/* 7ab3ad: call 0x6c991c */
  esp -= 4; W32(esp, 0x7ab3b2u); SPILL(); f_6c991c(); if (g_unwind) return; RELOAD();
/* 7ab3b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab3b4: je 0x7ab683 */
  if (zf) goto L_7ab683;
L_7ab3ba: /* 7ab3ba: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 7ab3bd: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ab3bf: jge 0x7ab3c3 */
  if ((sf == of)) goto L_7ab3c3;
L_7ab3c1: /* 7ab3c1: mov eax, ebx */
  eax = ebx;
L_7ab3c3: /* 7ab3c3: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 7ab3c6: mov dword ptr [edx + 0x44], eax */
  W32((uint32_t)(edx + 0x44u), eax);
/* 7ab3c9: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 7ab3cc: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* 7ab3cf: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 7ab3d2: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 7ab3d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ab3d6: add edx, 0x28 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7ab3d9: push 0xace4fc */
  { uint32_t v = 0xace4fcu; esp -= 4; W32(esp, v); }
/* 7ab3de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab3df: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7ab3e5u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7ab3e5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab3e8: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab3ed: /* 7ab3ed: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab3f0: push 0xace514 */
  { uint32_t v = 0xace514u; esp -= 4; W32(esp, v); }
/* 7ab3f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab3f6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab3f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab3f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab3fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab3fd: je 0x7ab435 */
  if (zf) goto L_7ab435;
L_7ab3ff: /* 7ab3ff: xor ecx, ecx */
  ecx = 0;
/* 7ab401: mov edx, 0xffffff7f */
  edx = 0xffffff7fu;
/* 7ab406: jmp 0x7ab410 */
  goto L_7ab410;
L_7ab410: /* 7ab410: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab413: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 7ab419: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ab41c: jge 0x7ab683 */
  if ((sf == of)) goto L_7ab683;
L_7ab422: /* 7ab422: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7ab425: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7ab428: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab42a: je 0x7ab432 */
  if (zf) goto L_7ab432;
L_7ab42c: /* 7ab42c: and dword ptr [eax + 0x80], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x80u), r);
  }
L_7ab432: /* 7ab432: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7ab433: jmp 0x7ab410 */
  goto L_7ab410;
L_7ab435: /* 7ab435: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab438: push 0xace524 */
  { uint32_t v = 0xace524u; esp -= 4; W32(esp, v); }
/* 7ab43d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab43e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab440u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab440: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab443: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab445: je 0x7ab5c2 */
  if (zf) goto L_7ab5c2;
L_7ab44b: /* 7ab44b: push 0xb79f80 */
  { uint32_t v = 0xb79f80u; esp -= 4; W32(esp, v); }
/* 7ab450: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7ab453: call 0x6c1f55 */
  esp -= 4; W32(esp, 0x7ab458u); SPILL(); f_6c1f55(); if (g_unwind) return; RELOAD();
/* 7ab458: push 0xace534 */
  { uint32_t v = 0xace534u; esp -= 4; W32(esp, v); }
/* 7ab45d: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7ab460: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ab464: call dword ptr [0xcfa5b4] */
  esp -= 4; W32(esp, 0x7ab46au); SPILL(); f_4e35da(); if (g_unwind) return; /* Core!?Log@FOutputDevice@@QAEXPBG@Z */ RELOAD();
/* 7ab46a: mov edi, dword ptr [0xcfa7b0] */
  edi = R32((uint32_t)(0xcfa7b0u));
/* 7ab470: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ab472: push 0xace548 */
  { uint32_t v = 0xace548u; esp -= 4; W32(esp, v); }
/* 7ab477: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab479u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab479: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab47c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ab47e: push 0xace554 */
  { uint32_t v = 0xace554u; esp -= 4; W32(esp, v); }
/* 7ab483: mov ebx, eax */
  ebx = eax;
/* 7ab485: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab487u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab487: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab48a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ab48b: mov ebx, dword ptr [0xcfa3a4] */
  ebx = R32((uint32_t)(0xcfa3a4u));
/* 7ab491: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab492: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 7ab495: push 0xace560 */
  { uint32_t v = 0xace560u; esp -= 4; W32(esp, v); }
/* 7ab49a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab49b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ab49du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab49d: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7ab4a0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab4a3: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7ab4a9u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7ab4a9: mov ecx, eax */
  ecx = eax;
/* 7ab4ab: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7ab4b1u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7ab4b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab4b2: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7ab4b5: push 0xace588 */
  { uint32_t v = 0xace588u; esp -= 4; W32(esp, v); }
/* 7ab4ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab4bb: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ab4bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab4bd: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7ab4c0: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 7ab4c6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab4c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ab4cb: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 7ab4ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab4cf: lea ecx, [eax + 0x44] */
  ecx = (uint32_t)(eax + 0x44u);
/* 7ab4d2: call 0x6c7b3f */
  esp -= 4; W32(esp, 0x7ab4d7u); SPILL(); f_6c7b3f(); if (g_unwind) return; RELOAD();
/* 7ab4d7: mov ecx, eax */
  ecx = eax;
/* 7ab4d9: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7ab4dd: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ab4e3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ab4e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab4e4: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7ab4e7: push 0xace5b4 */
  { uint32_t v = 0xace5b4u; esp -= 4; W32(esp, v); }
/* 7ab4ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab4ed: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ab4efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab4ef: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab4f2: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7ab4f5: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ab4f9: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7ab4ffu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7ab4ff: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7ab502: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 7ab508: call 0x99c958 */
  esp -= 4; W32(esp, 0x7ab50du); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7ab50d: fld dword ptr [edi + 0x174] */
  { double v = F32((uint32_t)(edi + 0x174u)); FPUSH(v); }
/* 7ab513: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab514: call 0x99c958 */
  esp -= 4; W32(esp, 0x7ab519u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7ab519: fld dword ptr [edi + 0x170] */
  { double v = F32((uint32_t)(edi + 0x170u)); FPUSH(v); }
/* 7ab51f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab520: call 0x99c958 */
  esp -= 4; W32(esp, 0x7ab525u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7ab525: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab526: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7ab529: push 0xace5d0 */
  { uint32_t v = 0xace5d0u; esp -= 4; W32(esp, v); }
/* 7ab52e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab52f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ab531u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab531: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7ab534: mov eax, dword ptr [edx + 0xb0] */
  eax = R32((uint32_t)(edx + 0xb0u));
/* 7ab53a: mov ecx, dword ptr [eax + 0x508] */
  ecx = R32((uint32_t)(eax + 0x508u));
/* 7ab540: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab543: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab545: jne 0x7ab557 */
  if (!zf) goto L_7ab557;
L_7ab547: /* 7ab547: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7ab54a: push 0xace600 */
  { uint32_t v = 0xace600u; esp -= 4; W32(esp, v); }
/* 7ab54f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab550: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ab552u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab552: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab555: jmp 0x7ab59d */
  goto L_7ab59d;
L_7ab557: /* 7ab557: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7ab55du); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7ab55d: mov ecx, eax */
  ecx = eax;
/* 7ab55f: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7ab565u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7ab565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab566: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 7ab569: push 0xace628 */
  { uint32_t v = 0xace628u; esp -= 4; W32(esp, v); }
/* 7ab56e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab56f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ab571u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab571: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab574: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 7ab57a: mov edx, dword ptr [ecx + 0x508] */
  edx = R32((uint32_t)(ecx + 0x508u));
/* 7ab580: fld dword ptr [edx + 0x340] */
  { double v = F32((uint32_t)(edx + 0x340u)); FPUSH(v); }
/* 7ab586: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab589: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ab58c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7ab58f: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7ab592: push 0xace650 */
  { uint32_t v = 0xace650u; esp -= 4; W32(esp, v); }
/* 7ab597: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab598: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ab59au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab59a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ab59d: /* 7ab59d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7ab5a0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ab5a6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ab5a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab5a7: call dword ptr [0xcfa5bc] */
  esp -= 4; W32(esp, 0x7ab5adu); SPILL(); f_4e15eb(); if (g_unwind) return; /* Core!?appClipboardCopy@@YAXPBG@Z */ RELOAD();
/* 7ab5ad: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab5b0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7ab5b3: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ab5b7: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7ab5bdu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7ab5bd: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab5c2: /* 7ab5c2: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab5c5: push 0xace678 */
  { uint32_t v = 0xace678u; esp -= 4; W32(esp, v); }
/* 7ab5ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab5cb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab5cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab5cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab5d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab5d2: je 0x7ab63a */
  if (zf) goto L_7ab63a;
L_7ab5d4: /* 7ab5d4: mov edx, dword ptr [0xcfa538] */
  edx = R32((uint32_t)(0xcfa538u));
/* 7ab5da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab5db: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7ab5de: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x7ab5e4u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 7ab5e4: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 7ab5e7: imul eax, dword ptr [esi + 0x60] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x60u)));
  eax = (uint32_t)r;
  }
/* 7ab5eb: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 7ab5f1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ab5f3: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7ab5f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab5f7: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x7ab5fdu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 7ab5fd: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 7ab600: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ab602: mov edi, eax */
  edi = eax;
/* 7ab604: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ab605: lea eax, [esi - 0x2c] */
  eax = (uint32_t)(esi + 0xffffffd4u);
/* 7ab608: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab609: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x7ab60fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab60f: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 7ab615: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ab617: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 7ab61a: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 7ab61d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab61e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ab61f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab620: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab621: push 0xace684 */
  { uint32_t v = 0xace684u; esp -= 4; W32(esp, v); }
/* 7ab626: call dword ptr [0xcfa7ac] */
  esp -= 4; W32(esp, 0x7ab62cu); SPILL(); f_4e3620(); if (g_unwind) return; /* Core!?appCreateBitmap@@YAHPBGHHPAKPAVFFileManager@@@Z */ RELOAD();
/* 7ab62c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab62f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7ab632: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7ab638u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7ab638: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab63a: /* 7ab63a: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab63d: push 0xace69c */
  { uint32_t v = 0xace69cu; esp -= 4; W32(esp, v); }
/* 7ab642: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab643: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab645u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab645: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab648: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab64a: je 0x7ab69b */
  if (zf) goto L_7ab69b;
L_7ab64c: /* 7ab64c: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 7ab64f: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 7ab655: mov cl, byte ptr [eax + 0x4c8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x4c8u))) & 0xffu);
/* 7ab65b: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab65d: je 0x7ab674 */
  if (zf) goto L_7ab674;
L_7ab65f: /* 7ab65f: xor eax, eax */
  eax = 0;
/* 7ab661: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab664: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab66b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab66c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab66d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab66e: mov esp, ebp */
  esp = ebp;
/* 7ab670: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab671: ret 8 */
  esp += 12; SPILL(); return;
L_7ab674: /* 7ab674: mov eax, dword ptr [esi + 0x534] */
  eax = R32((uint32_t)(esi + 0x534u));
/* 7ab67a: or eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_7ab67d: /* 7ab67d: mov dword ptr [esi + 0x534], eax */
  W32((uint32_t)(esi + 0x534u), eax);
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7ab69b: /* 7ab69b: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab69e: push 0xace6b4 */
  { uint32_t v = 0xace6b4u; esp -= 4; W32(esp, v); }
/* 7ab6a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab6a4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab6a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab6a6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab6a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab6ab: je 0x7ab6cb */
  if (zf) goto L_7ab6cb;
L_7ab6ad: /* 7ab6ad: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 7ab6b0: mov edx, dword ptr [esi + 0xb0] */
  edx = R32((uint32_t)(esi + 0xb0u));
/* 7ab6b6: mov al, byte ptr [edx + 0x4c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x4c8u))) & 0xffu);
/* 7ab6bc: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab6be: jne 0x7ab65f */
  if (!zf) goto L_7ab65f;
L_7ab6c0: /* 7ab6c0: mov eax, dword ptr [esi + 0x534] */
  eax = R32((uint32_t)(esi + 0x534u));
/* 7ab6c6: and eax, 0xfffffff7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7ab6c9: jmp 0x7ab67d */
  goto L_7ab67d;
L_7ab6cb: /* 7ab6cb: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab6ce: push 0xace6cc */
  { uint32_t v = 0xace6ccu; esp -= 4; W32(esp, v); }
/* 7ab6d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab6d4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab6d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab6d6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab6d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab6db: je 0x7ab717 */
  if (zf) goto L_7ab717;
L_7ab6dd: /* 7ab6dd: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7ab6e0: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 7ab6e6: mov al, byte ptr [edx + 0x4c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x4c8u))) & 0xffu);
/* 7ab6ec: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab6ee: jne 0x7ab65f */
  if (!zf) goto L_7ab65f;
L_7ab6f4: /* 7ab6f4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ab6f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab6f8: call dword ptr [0xcfa7b4] */
  esp -= 4; W32(esp, 0x7ab6feu); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 7ab6fe: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab701: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ab703: jle 0x7ab683 */
  if ((zf || sf != of)) goto L_7ab683;
L_7ab709: /* 7ab709: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7ab70c: mov dword ptr [ecx + 0x540], eax */
  W32((uint32_t)(ecx + 0x540u), eax);
/* 7ab712: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab717: /* 7ab717: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab71a: push 0xace6d8 */
  { uint32_t v = 0xace6d8u; esp -= 4; W32(esp, v); }
/* 7ab71f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab720: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab722u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab722: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab725: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab727: je 0x7ab877 */
  if (zf) goto L_7ab877;
L_7ab72d: /* 7ab72d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab730: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 7ab736: mov al, byte ptr [ecx + 0x4c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x4c8u))) & 0xffu);
/* 7ab73c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab73e: jne 0x7ab65f */
  if (!zf) goto L_7ab65f;
L_7ab744: /* 7ab744: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab747: push 0xace6e4 */
  { uint32_t v = 0xace6e4u; esp -= 4; W32(esp, v); }
/* 7ab74c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab74d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab74fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab74f: xor ebx, ebx */
  ebx = 0;
/* 7ab751: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab754: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab756: jne 0x7ab85f */
  if (!zf) goto L_7ab85f;
L_7ab75c: /* 7ab75c: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab75f: push 0xace6f0 */
  { uint32_t v = 0xace6f0u; esp -= 4; W32(esp, v); }
/* 7ab764: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab765: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab767u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab767: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab76a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab76c: jne 0x7ab85f */
  if (!zf) goto L_7ab85f;
L_7ab772: /* 7ab772: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab775: push 0xace700 */
  { uint32_t v = 0xace700u; esp -= 4; W32(esp, v); }
/* 7ab77a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab77b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab77du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab77d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab780: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab782: je 0x7ab79c */
  if (zf) goto L_7ab79c;
L_7ab784: /* 7ab784: mov eax, dword ptr [esi + 0xdc] */
  eax = R32((uint32_t)(esi + 0xdcu));
/* 7ab78a: xor edx, edx */
  edx = 0;
/* 7ab78c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab78e: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ab791: mov dword ptr [esi + 0xdc], edx */
  W32((uint32_t)(esi + 0xdcu), edx);
/* 7ab797: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab79c: /* 7ab79c: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab79f: push 0xace70c */
  { uint32_t v = 0xace70cu; esp -= 4; W32(esp, v); }
/* 7ab7a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab7a5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab7a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab7a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab7aa: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab7ac: je 0x7ab7c6 */
  if (zf) goto L_7ab7c6;
L_7ab7ae: /* 7ab7ae: mov eax, dword ptr [esi + 0xe0] */
  eax = R32((uint32_t)(esi + 0xe0u));
/* 7ab7b4: xor ecx, ecx */
  ecx = 0;
/* 7ab7b6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab7b8: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ab7bb: mov dword ptr [esi + 0xe0], ecx */
  W32((uint32_t)(esi + 0xe0u), ecx);
/* 7ab7c1: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab7c6: /* 7ab7c6: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab7c9: push 0xace718 */
  { uint32_t v = 0xace718u; esp -= 4; W32(esp, v); }
/* 7ab7ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab7cf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab7d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab7d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab7d4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab7d6: je 0x7ab7f0 */
  if (zf) goto L_7ab7f0;
L_7ab7d8: /* 7ab7d8: mov ecx, dword ptr [esi + 0xd8] */
  ecx = R32((uint32_t)(esi + 0xd8u));
/* 7ab7de: xor eax, eax */
  eax = 0;
/* 7ab7e0: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab7e2: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ab7e5: mov dword ptr [esi + 0xd8], eax */
  W32((uint32_t)(esi + 0xd8u), eax);
/* 7ab7eb: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab7f0: /* 7ab7f0: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab7f3: push 0xace724 */
  { uint32_t v = 0xace724u; esp -= 4; W32(esp, v); }
/* 7ab7f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab7f9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab7fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab7fb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab7fe: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab800: je 0x7ab81a */
  if (zf) goto L_7ab81a;
L_7ab802: /* 7ab802: mov eax, dword ptr [esi + 0xec] */
  eax = R32((uint32_t)(esi + 0xecu));
/* 7ab808: xor edx, edx */
  edx = 0;
/* 7ab80a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab80c: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ab80f: mov dword ptr [esi + 0xec], edx */
  W32((uint32_t)(esi + 0xecu), edx);
/* 7ab815: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab81a: /* 7ab81a: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab81d: push 0xace738 */
  { uint32_t v = 0xace738u; esp -= 4; W32(esp, v); }
/* 7ab822: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab823: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab825u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab825: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab828: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab82a: jne 0x7ab842 */
  if (!zf) goto L_7ab842;
L_7ab82c: /* 7ab82c: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab82f: push 0xace748 */
  { uint32_t v = 0xace748u; esp -= 4; W32(esp, v); }
/* 7ab834: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab835: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab837u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab837: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab83a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab83c: je 0x7ab65f */
  if (zf) goto L_7ab65f;
L_7ab842: /* 7ab842: mov dword ptr [esi + 0xd8], ebx */
  W32((uint32_t)(esi + 0xd8u), ebx);
/* 7ab848: mov dword ptr [esi + 0xe4], ebx */
  W32((uint32_t)(esi + 0xe4u), ebx);
/* 7ab84e: mov dword ptr [esi + 0xdc], ebx */
  W32((uint32_t)(esi + 0xdcu), ebx);
/* 7ab854: mov dword ptr [esi + 0xec], ebx */
  W32((uint32_t)(esi + 0xecu), ebx);
/* 7ab85a: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab85f: /* 7ab85f: mov eax, dword ptr [esi + 0xe4] */
  eax = R32((uint32_t)(esi + 0xe4u));
/* 7ab865: xor edx, edx */
  edx = 0;
/* 7ab867: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab869: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ab86c: mov dword ptr [esi + 0xe4], edx */
  W32((uint32_t)(esi + 0xe4u), edx);
/* 7ab872: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab877: /* 7ab877: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab87a: push 0xace754 */
  { uint32_t v = 0xace754u; esp -= 4; W32(esp, v); }
/* 7ab87f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab880: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab882u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab882: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab885: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab887: je 0x7abb0b */
  if (zf) goto L_7abb0b;
L_7ab88d: /* 7ab88d: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7ab890: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 7ab896: mov al, byte ptr [edx + 0x4c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x4c8u))) & 0xffu);
/* 7ab89c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab89e: jne 0x7ab65f */
  if (!zf) goto L_7ab65f;
L_7ab8a4: /* 7ab8a4: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab8a7: push 0xace760 */
  { uint32_t v = 0xace760u; esp -= 4; W32(esp, v); }
/* 7ab8ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab8ad: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab8afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab8af: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab8b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab8b4: je 0x7ab8c7 */
  if (zf) goto L_7ab8c7;
L_7ab8b6: /* 7ab8b6: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab8b9: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab8bf: xor ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab8c2: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab8c7: /* 7ab8c7: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab8ca: push 0xace770 */
  { uint32_t v = 0xace770u; esp -= 4; W32(esp, v); }
/* 7ab8cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab8d0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab8d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab8d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab8d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab8d7: je 0x7ab8ed */
  if (zf) goto L_7ab8ed;
L_7ab8d9: /* 7ab8d9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab8dc: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab8e2: xor ecx, 0x4000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab8e8: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab8ed: /* 7ab8ed: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab8f0: push 0xace784 */
  { uint32_t v = 0xace784u; esp -= 4; W32(esp, v); }
/* 7ab8f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab8f6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab8f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab8f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab8fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab8fd: je 0x7ab913 */
  if (zf) goto L_7ab913;
L_7ab8ff: /* 7ab8ff: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab902: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab908: xor ecx, 0x8000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab90e: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab913: /* 7ab913: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab916: push 0xace7a0 */
  { uint32_t v = 0xace7a0u; esp -= 4; W32(esp, v); }
/* 7ab91b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab91c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab91eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab91e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab921: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab923: je 0x7ab939 */
  if (zf) goto L_7ab939;
L_7ab925: /* 7ab925: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab928: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab92e: xor ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab934: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab939: /* 7ab939: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab93c: push 0xace7b0 */
  { uint32_t v = 0xace7b0u; esp -= 4; W32(esp, v); }
/* 7ab941: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab942: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab944u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab944: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab947: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab949: je 0x7ab95f */
  if (zf) goto L_7ab95f;
L_7ab94b: /* 7ab94b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab94e: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab954: xor ecx, 0x80000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab95a: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab95f: /* 7ab95f: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab962: push 0xace7b8 */
  { uint32_t v = 0xace7b8u; esp -= 4; W32(esp, v); }
/* 7ab967: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab968: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab96au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab96a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab96d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab96f: je 0x7ab982 */
  if (zf) goto L_7ab982;
L_7ab971: /* 7ab971: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab974: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab97a: xor ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab97d: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab982: /* 7ab982: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab985: push 0xace7c0 */
  { uint32_t v = 0xace7c0u; esp -= 4; W32(esp, v); }
/* 7ab98a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab98b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab98du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab98d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab990: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab992: je 0x7ab9a8 */
  if (zf) goto L_7ab9a8;
L_7ab994: /* 7ab994: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab997: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab99d: xor ecx, 0x400000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9a3: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9a8: /* 7ab9a8: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab9ab: push 0xace7d0 */
  { uint32_t v = 0xace7d0u; esp -= 4; W32(esp, v); }
/* 7ab9b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab9b1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab9b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab9b8: je 0x7ab9ce */
  if (zf) goto L_7ab9ce;
L_7ab9ba: /* 7ab9ba: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab9bd: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab9c3: xor ecx, 0x1000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9c9: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9ce: /* 7ab9ce: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab9d1: push 0xace7e4 */
  { uint32_t v = 0xace7e4u; esp -= 4; W32(esp, v); }
/* 7ab9d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab9d7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab9dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab9de: je 0x7ab9f4 */
  if (zf) goto L_7ab9f4;
L_7ab9e0: /* 7ab9e0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab9e3: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab9e9: xor ecx, 0x2000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9ef: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9f4: /* 7ab9f4: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab9f7: push 0xace7ec */
  { uint32_t v = 0xace7ecu; esp -= 4; W32(esp, v); }
/* 7ab9fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab9fd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba04: je 0x7aba17 */
  if (zf) goto L_7aba17;
L_7aba06: /* 7aba06: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba09: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba0f: xor ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba12: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba17: /* 7aba17: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba1a: push 0xace7f8 */
  { uint32_t v = 0xace7f8u; esp -= 4; W32(esp, v); }
/* 7aba1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba20: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba27: je 0x7aba3d */
  if (zf) goto L_7aba3d;
L_7aba29: /* 7aba29: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba2c: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba32: xor ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba38: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba3d: /* 7aba3d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7aba40: push 0xace804 */
  { uint32_t v = 0xace804u; esp -= 4; W32(esp, v); }
/* 7aba45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aba46: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba4b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba4d: je 0x7aba60 */
  if (zf) goto L_7aba60;
L_7aba4f: /* 7aba4f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba52: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba58: xor ecx, 0x20000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba5e: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba60: /* 7aba60: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7aba63: push 0xace81c */
  { uint32_t v = 0xace81cu; esp -= 4; W32(esp, v); }
/* 7aba68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aba69: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba6b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba70: je 0x7aba83 */
  if (zf) goto L_7aba83;
L_7aba72: /* 7aba72: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba75: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba7b: xor ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba81: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba83: /* 7aba83: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba86: push 0xace840 */
  { uint32_t v = 0xace840u; esp -= 4; W32(esp, v); }
/* 7aba8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba8c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba93: je 0x7abaa6 */
  if (zf) goto L_7abaa6;
L_7aba95: /* 7aba95: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba98: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba9e: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7abaa4: jmp 0x7abac7 */
  goto L_7abac7;
L_7abaa6: /* 7abaa6: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abaa9: push 0xace854 */
  { uint32_t v = 0xace854u; esp -= 4; W32(esp, v); }
/* 7abaae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abaaf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abab1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abab1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abab4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abab6: je 0x7abacd */
  if (zf) goto L_7abacd;
L_7abab8: /* 7abab8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ababb: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7abac1: xor ecx, 0x800000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
L_7abac7: /* 7abac7: mov dword ptr [eax + 0x534], ecx */
  W32((uint32_t)(eax + 0x534u), ecx);
L_7abacd: /* 7abacd: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7abad2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7abad5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abadb: /* 7abadb: xor ecx, ecx */
  ecx = 0;
/* 7abadd: mov dl, 0x40 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
/* 7abadf: nop  */
L_7abae0: /* 7abae0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abae3: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 7abae9: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7abaec: jge 0x7ab683 */
  if ((sf == of)) goto L_7ab683;
L_7abaf2: /* 7abaf2: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7abaf5: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7abaf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abafa: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abafc: /* 7abafc: test byte ptr [eax + 0x80], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb02: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abb04: /* 7abb04: mov byte ptr [eax + 0x6c], 0 */
  W8((uint32_t)(eax + 0x6cu), 0x0u);
L_7abb08: /* 7abb08: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7abb09: jmp 0x7abae0 */
  goto L_7abae0;
L_7abb0b: /* 7abb0b: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7abb0e: push 0xace864 */
  { uint32_t v = 0xace864u; esp -= 4; W32(esp, v); }
/* 7abb13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abb14: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abb16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abb16: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb1b: je 0x7abb5e */
  if (zf) goto L_7abb5e;
L_7abb1d: /* 7abb1d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7abb20: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abb21: call dword ptr [0xcfa3c4] */
  esp -= 4; W32(esp, 0x7abb27u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 7abb27: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb2a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb2c: je 0x7abb46 */
  if (zf) goto L_7abb46;
L_7abb2e: /* 7abb2e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7abb31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abb32: call dword ptr [0xcfa7b4] */
  esp -= 4; W32(esp, 0x7abb38u); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 7abb38: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb3b: mov dword ptr [esi + 0xf0], eax */
  W32((uint32_t)(esi + 0xf0u), eax);
/* 7abb41: jmp 0x7ab683 */
  goto L_7ab683;
L_7abb46: /* 7abb46: mov eax, dword ptr [esi + 0xf0] */
  eax = R32((uint32_t)(esi + 0xf0u));
/* 7abb4c: xor ecx, ecx */
  ecx = 0;
/* 7abb4e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb50: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7abb53: mov dword ptr [esi + 0xf0], ecx */
  W32((uint32_t)(esi + 0xf0u), ecx);
/* 7abb59: jmp 0x7ab683 */
  goto L_7ab683;
L_7abb5e: /* 7abb5e: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abb61: push 0xace87c */
  { uint32_t v = 0xace87cu; esp -= 4; W32(esp, v); }
/* 7abb66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abb67: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abb69u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abb69: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb6e: je 0x7abb8e */
  if (zf) goto L_7abb8e;
L_7abb70: /* 7abb70: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7abb73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abb74: call dword ptr [0xcfa778] */
  esp -= 4; W32(esp, 0x7abb7au); SPILL(); f_4e3d69(); if (g_unwind) return; /* Core!?appAtof@@YAMPBG@Z */ RELOAD();
/* 7abb7a: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7abb7d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7abb80: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb83: mov dword ptr [esi + 0xf4], ecx */
  W32((uint32_t)(esi + 0xf4u), ecx);
/* 7abb89: jmp 0x7ab683 */
  goto L_7ab683;
L_7abb8e: /* 7abb8e: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abb91: push 0xace89c */
  { uint32_t v = 0xace89cu; esp -= 4; W32(esp, v); }
/* 7abb96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abb97: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abb99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abb99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb9e: je 0x7abc43 */
  if (zf) goto L_7abc43;
L_7abba4: /* 7abba4: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7abba7: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 7abbad: mov dl, byte ptr [eax + 0x4c8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x4c8u))) & 0xffu);
/* 7abbb3: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7abbb5: jne 0x7ab65f */
  if (!zf) goto L_7ab65f;
L_7abbbb: /* 7abbbb: mov eax, dword ptr [ecx + 0x4c4] */
  eax = R32((uint32_t)(ecx + 0x4c4u));
/* 7abbc1: mov edx, eax */
  edx = eax;
/* 7abbc3: not edx */
  edx = ~edx;
/* 7abbc5: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7abbc7: and edx, 0x800000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7abbcd: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7abbcf: mov dword ptr [ecx + 0x4c4], edx */
  W32((uint32_t)(ecx + 0x4c4u), edx);
/* 7abbd5: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abbd8: test dword ptr [eax + 0x4c4], 0x800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4c4u))); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abbe2: je 0x7ab683 */
  if (zf) goto L_7ab683;
L_7abbe8: /* 7abbe8: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 7abbee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abbf0: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7abbf3: add eax, 0x588 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x588u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7abbf8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7abbfa: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7abbfd: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7abc00: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7abc03: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7abc06: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abc09: lea edx, [eax + 0x17c] */
  edx = (uint32_t)(eax + 0x17cu);
/* 7abc0f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7abc11: add eax, 0x594 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x594u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7abc16: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7abc18: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7abc1b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7abc1e: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7abc21: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7abc24: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7abc27: lea eax, [ecx + 0x594] */
  eax = (uint32_t)(ecx + 0x594u);
/* 7abc2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc2e: lea edx, [ecx + 0x588] */
  edx = (uint32_t)(ecx + 0x588u);
/* 7abc34: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abc35: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 7abc38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc39: call 0x6c204a */
  esp -= 4; W32(esp, 0x7abc3eu); SPILL(); f_6c204a(); if (g_unwind) return; RELOAD();
/* 7abc3e: jmp 0x7ab683 */
  goto L_7ab683;
L_7abc43: /* 7abc43: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7abc46: push 0xace8bc */
  { uint32_t v = 0xace8bcu; esp -= 4; W32(esp, v); }
/* 7abc4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abc4c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abc4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc4e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abc51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc53: je 0x7abc8e */
  if (zf) goto L_7abc8e;
L_7abc55: /* 7abc55: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* 7abc5b: xor edx, edx */
  edx = 0;
/* 7abc5d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc5f: mov eax, dword ptr [esi - 0x2c] */
  eax = R32((uint32_t)(esi + 0xffffffd4u));
/* 7abc62: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7abc65: lea edi, [esi - 0x2c] */
  edi = (uint32_t)(esi + 0xffffffd4u);
/* 7abc68: mov ecx, edi */
  ecx = edi;
/* 7abc6a: mov dword ptr [esi + 0xa0], edx */
  W32((uint32_t)(esi + 0xa0u), edx);
/* 7abc70: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x7abc73u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc73: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 7abc76: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abc78: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7abc7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7abc7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc7d: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 7abc80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc81: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 7abc84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7abc86: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7abc89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc89: jmp 0x7ab683 */
  goto L_7ab683;
L_7abc8e: /* 7abc8e: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7abc91: push 0xace8d8 */
  { uint32_t v = 0xace8d8u; esp -= 4; W32(esp, v); }
/* 7abc96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abc97: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abc99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abc9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc9e: je 0x7abcd8 */
  if (zf) goto L_7abcd8;
L_7abca0: /* 7abca0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7abca2: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7abca7: lea edx, [ebp - 0x834] */
  edx = (uint32_t)(ebp + 0xfffff7ccu);
/* 7abcad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abcae: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7abcb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abcb2: call dword ptr [0xcfa7a8] */
  esp -= 4; W32(esp, 0x7abcb8u); SPILL(); f_4e3256(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGPAGHH@Z */ RELOAD();
/* 7abcb8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abcbb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcbd: je 0x7ab683 */
  if (zf) goto L_7ab683;
L_7abcc3: /* 7abcc3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcc4: lea ecx, [ebp - 0x834] */
  ecx = (uint32_t)(ebp + 0xfffff7ccu);
/* 7abcca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abccb: lea ecx, [esi - 0x2c] */
  ecx = (uint32_t)(esi + 0xffffffd4u);
/* 7abcce: call 0x6c268f */
  esp -= 4; W32(esp, 0x7abcd3u); SPILL(); f_6c268f(); if (g_unwind) return; RELOAD();
/* 7abcd3: jmp 0x7ab683 */
  goto L_7ab683;
L_7abcd8: /* 7abcd8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7abcdb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcdd: je 0x7abcfb */
  if (zf) goto L_7abcfb;
L_7abcdf: /* 7abcdf: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abce2: mov eax, dword ptr [eax + 0x33c] */
  eax = R32((uint32_t)(eax + 0x33cu));
/* 7abce8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abcea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abceb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7abcee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abcf0: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x7abcf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abcf3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcf5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abcfb: /* 7abcfb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7abcfe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abd00: mov ecx, esi */
  ecx = esi;
/* 7abd02: call 0x6cc0f9 */
  esp -= 4; W32(esp, 0x7abd07u); SPILL(); f_6cc0f9(); if (g_unwind) return; RELOAD();
/* 7abd07: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7abd0a: xor edx, edx */
  edx = 0;
/* 7abd0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abd0e: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7abd11: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7abd12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7abd13: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7abd1a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7abd1b: mov eax, edx */
  eax = edx;
/* 7abd1d: mov esp, ebp */
  esp = ebp;
/* 7abd1f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7abd20: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ab408(void) {
  LOAD_REGS();
L_7ab408: /* 7ab408: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 7ab40f: nop  */
L_7ab410: /* 7ab410: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab413: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 7ab419: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ab41c: jge 0x7ab683 */
  if ((sf == of)) goto L_7ab683;
L_7ab422: /* 7ab422: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7ab425: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7ab428: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab42a: je 0x7ab432 */
  if (zf) goto L_7ab432;
L_7ab42c: /* 7ab42c: and dword ptr [eax + 0x80], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x80u), r);
  }
L_7ab432: /* 7ab432: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7ab433: jmp 0x7ab410 */
  goto L_7ab410;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ab69b(void) {
  LOAD_REGS();
  goto L_7ab69b;
L_7ab65f: /* 7ab65f: xor eax, eax */
  eax = 0;
/* 7ab661: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab664: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab66b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab66c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab66d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab66e: mov esp, ebp */
  esp = ebp;
/* 7ab670: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab671: ret 8 */
  esp += 12; SPILL(); return;
L_7ab67d: /* 7ab67d: mov dword ptr [esi + 0x534], eax */
  W32((uint32_t)(esi + 0x534u), eax);
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7ab69b: /* 7ab69b: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab69e: push 0xace6b4 */
  { uint32_t v = 0xace6b4u; esp -= 4; W32(esp, v); }
/* 7ab6a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab6a4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab6a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab6a6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab6a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab6ab: je 0x7ab6cb */
  if (zf) goto L_7ab6cb;
L_7ab6ad: /* 7ab6ad: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 7ab6b0: mov edx, dword ptr [esi + 0xb0] */
  edx = R32((uint32_t)(esi + 0xb0u));
/* 7ab6b6: mov al, byte ptr [edx + 0x4c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x4c8u))) & 0xffu);
/* 7ab6bc: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab6be: jne 0x7ab65f */
  if (!zf) goto L_7ab65f;
L_7ab6c0: /* 7ab6c0: mov eax, dword ptr [esi + 0x534] */
  eax = R32((uint32_t)(esi + 0x534u));
/* 7ab6c6: and eax, 0xfffffff7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7ab6c9: jmp 0x7ab67d */
  goto L_7ab67d;
L_7ab6cb: /* 7ab6cb: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab6ce: push 0xace6cc */
  { uint32_t v = 0xace6ccu; esp -= 4; W32(esp, v); }
/* 7ab6d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab6d4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab6d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab6d6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab6d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab6db: je 0x7ab717 */
  if (zf) goto L_7ab717;
L_7ab6dd: /* 7ab6dd: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7ab6e0: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 7ab6e6: mov al, byte ptr [edx + 0x4c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x4c8u))) & 0xffu);
/* 7ab6ec: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab6ee: jne 0x7ab65f */
  if (!zf) goto L_7ab65f;
L_7ab6f4: /* 7ab6f4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ab6f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab6f8: call dword ptr [0xcfa7b4] */
  esp -= 4; W32(esp, 0x7ab6feu); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 7ab6fe: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab701: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ab703: jle 0x7ab683 */
  if ((zf || sf != of)) goto L_7ab683;
L_7ab709: /* 7ab709: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7ab70c: mov dword ptr [ecx + 0x540], eax */
  W32((uint32_t)(ecx + 0x540u), eax);
/* 7ab712: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab717: /* 7ab717: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab71a: push 0xace6d8 */
  { uint32_t v = 0xace6d8u; esp -= 4; W32(esp, v); }
/* 7ab71f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab720: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab722u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab722: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab725: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab727: je 0x7ab877 */
  if (zf) goto L_7ab877;
L_7ab72d: /* 7ab72d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab730: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 7ab736: mov al, byte ptr [ecx + 0x4c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x4c8u))) & 0xffu);
/* 7ab73c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab73e: jne 0x7ab65f */
  if (!zf) goto L_7ab65f;
L_7ab744: /* 7ab744: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab747: push 0xace6e4 */
  { uint32_t v = 0xace6e4u; esp -= 4; W32(esp, v); }
/* 7ab74c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab74d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab74fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab74f: xor ebx, ebx */
  ebx = 0;
/* 7ab751: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab754: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab756: jne 0x7ab85f */
  if (!zf) goto L_7ab85f;
L_7ab75c: /* 7ab75c: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab75f: push 0xace6f0 */
  { uint32_t v = 0xace6f0u; esp -= 4; W32(esp, v); }
/* 7ab764: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab765: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab767u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab767: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab76a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab76c: jne 0x7ab85f */
  if (!zf) goto L_7ab85f;
L_7ab772: /* 7ab772: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab775: push 0xace700 */
  { uint32_t v = 0xace700u; esp -= 4; W32(esp, v); }
/* 7ab77a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab77b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab77du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab77d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab780: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab782: je 0x7ab79c */
  if (zf) goto L_7ab79c;
L_7ab784: /* 7ab784: mov eax, dword ptr [esi + 0xdc] */
  eax = R32((uint32_t)(esi + 0xdcu));
/* 7ab78a: xor edx, edx */
  edx = 0;
/* 7ab78c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab78e: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ab791: mov dword ptr [esi + 0xdc], edx */
  W32((uint32_t)(esi + 0xdcu), edx);
/* 7ab797: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab79c: /* 7ab79c: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab79f: push 0xace70c */
  { uint32_t v = 0xace70cu; esp -= 4; W32(esp, v); }
/* 7ab7a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab7a5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab7a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab7a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab7aa: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab7ac: je 0x7ab7c6 */
  if (zf) goto L_7ab7c6;
L_7ab7ae: /* 7ab7ae: mov eax, dword ptr [esi + 0xe0] */
  eax = R32((uint32_t)(esi + 0xe0u));
/* 7ab7b4: xor ecx, ecx */
  ecx = 0;
/* 7ab7b6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab7b8: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ab7bb: mov dword ptr [esi + 0xe0], ecx */
  W32((uint32_t)(esi + 0xe0u), ecx);
/* 7ab7c1: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab7c6: /* 7ab7c6: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab7c9: push 0xace718 */
  { uint32_t v = 0xace718u; esp -= 4; W32(esp, v); }
/* 7ab7ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab7cf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab7d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab7d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab7d4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab7d6: je 0x7ab7f0 */
  if (zf) goto L_7ab7f0;
L_7ab7d8: /* 7ab7d8: mov ecx, dword ptr [esi + 0xd8] */
  ecx = R32((uint32_t)(esi + 0xd8u));
/* 7ab7de: xor eax, eax */
  eax = 0;
/* 7ab7e0: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab7e2: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ab7e5: mov dword ptr [esi + 0xd8], eax */
  W32((uint32_t)(esi + 0xd8u), eax);
/* 7ab7eb: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab7f0: /* 7ab7f0: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab7f3: push 0xace724 */
  { uint32_t v = 0xace724u; esp -= 4; W32(esp, v); }
/* 7ab7f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab7f9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab7fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab7fb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab7fe: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab800: je 0x7ab81a */
  if (zf) goto L_7ab81a;
L_7ab802: /* 7ab802: mov eax, dword ptr [esi + 0xec] */
  eax = R32((uint32_t)(esi + 0xecu));
/* 7ab808: xor edx, edx */
  edx = 0;
/* 7ab80a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab80c: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ab80f: mov dword ptr [esi + 0xec], edx */
  W32((uint32_t)(esi + 0xecu), edx);
/* 7ab815: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab81a: /* 7ab81a: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab81d: push 0xace738 */
  { uint32_t v = 0xace738u; esp -= 4; W32(esp, v); }
/* 7ab822: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab823: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab825u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab825: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab828: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab82a: jne 0x7ab842 */
  if (!zf) goto L_7ab842;
L_7ab82c: /* 7ab82c: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab82f: push 0xace748 */
  { uint32_t v = 0xace748u; esp -= 4; W32(esp, v); }
/* 7ab834: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab835: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab837u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab837: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab83a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab83c: je 0x7ab65f */
  if (zf) goto L_7ab65f;
L_7ab842: /* 7ab842: mov dword ptr [esi + 0xd8], ebx */
  W32((uint32_t)(esi + 0xd8u), ebx);
/* 7ab848: mov dword ptr [esi + 0xe4], ebx */
  W32((uint32_t)(esi + 0xe4u), ebx);
/* 7ab84e: mov dword ptr [esi + 0xdc], ebx */
  W32((uint32_t)(esi + 0xdcu), ebx);
/* 7ab854: mov dword ptr [esi + 0xec], ebx */
  W32((uint32_t)(esi + 0xecu), ebx);
/* 7ab85a: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab85f: /* 7ab85f: mov eax, dword ptr [esi + 0xe4] */
  eax = R32((uint32_t)(esi + 0xe4u));
/* 7ab865: xor edx, edx */
  edx = 0;
/* 7ab867: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab869: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ab86c: mov dword ptr [esi + 0xe4], edx */
  W32((uint32_t)(esi + 0xe4u), edx);
/* 7ab872: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab877: /* 7ab877: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab87a: push 0xace754 */
  { uint32_t v = 0xace754u; esp -= 4; W32(esp, v); }
/* 7ab87f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab880: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab882u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab882: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab885: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab887: je 0x7abb0b */
  if (zf) goto L_7abb0b;
L_7ab88d: /* 7ab88d: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7ab890: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 7ab896: mov al, byte ptr [edx + 0x4c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x4c8u))) & 0xffu);
/* 7ab89c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab89e: jne 0x7ab65f */
  if (!zf) goto L_7ab65f;
L_7ab8a4: /* 7ab8a4: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab8a7: push 0xace760 */
  { uint32_t v = 0xace760u; esp -= 4; W32(esp, v); }
/* 7ab8ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab8ad: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab8afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab8af: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab8b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab8b4: je 0x7ab8c7 */
  if (zf) goto L_7ab8c7;
L_7ab8b6: /* 7ab8b6: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab8b9: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab8bf: xor ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab8c2: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab8c7: /* 7ab8c7: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab8ca: push 0xace770 */
  { uint32_t v = 0xace770u; esp -= 4; W32(esp, v); }
/* 7ab8cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab8d0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab8d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab8d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab8d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab8d7: je 0x7ab8ed */
  if (zf) goto L_7ab8ed;
L_7ab8d9: /* 7ab8d9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab8dc: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab8e2: xor ecx, 0x4000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab8e8: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab8ed: /* 7ab8ed: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab8f0: push 0xace784 */
  { uint32_t v = 0xace784u; esp -= 4; W32(esp, v); }
/* 7ab8f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab8f6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab8f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab8f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab8fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab8fd: je 0x7ab913 */
  if (zf) goto L_7ab913;
L_7ab8ff: /* 7ab8ff: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab902: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab908: xor ecx, 0x8000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab90e: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab913: /* 7ab913: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab916: push 0xace7a0 */
  { uint32_t v = 0xace7a0u; esp -= 4; W32(esp, v); }
/* 7ab91b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab91c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab91eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab91e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab921: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab923: je 0x7ab939 */
  if (zf) goto L_7ab939;
L_7ab925: /* 7ab925: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab928: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab92e: xor ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab934: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab939: /* 7ab939: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab93c: push 0xace7b0 */
  { uint32_t v = 0xace7b0u; esp -= 4; W32(esp, v); }
/* 7ab941: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab942: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab944u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab944: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab947: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab949: je 0x7ab95f */
  if (zf) goto L_7ab95f;
L_7ab94b: /* 7ab94b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab94e: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab954: xor ecx, 0x80000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab95a: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab95f: /* 7ab95f: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab962: push 0xace7b8 */
  { uint32_t v = 0xace7b8u; esp -= 4; W32(esp, v); }
/* 7ab967: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab968: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab96au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab96a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab96d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab96f: je 0x7ab982 */
  if (zf) goto L_7ab982;
L_7ab971: /* 7ab971: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab974: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab97a: xor ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab97d: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab982: /* 7ab982: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab985: push 0xace7c0 */
  { uint32_t v = 0xace7c0u; esp -= 4; W32(esp, v); }
/* 7ab98a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab98b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab98du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab98d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab990: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab992: je 0x7ab9a8 */
  if (zf) goto L_7ab9a8;
L_7ab994: /* 7ab994: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab997: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab99d: xor ecx, 0x400000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9a3: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9a8: /* 7ab9a8: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab9ab: push 0xace7d0 */
  { uint32_t v = 0xace7d0u; esp -= 4; W32(esp, v); }
/* 7ab9b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab9b1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab9b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab9b8: je 0x7ab9ce */
  if (zf) goto L_7ab9ce;
L_7ab9ba: /* 7ab9ba: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab9bd: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab9c3: xor ecx, 0x1000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9c9: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9ce: /* 7ab9ce: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab9d1: push 0xace7e4 */
  { uint32_t v = 0xace7e4u; esp -= 4; W32(esp, v); }
/* 7ab9d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab9d7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab9dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab9de: je 0x7ab9f4 */
  if (zf) goto L_7ab9f4;
L_7ab9e0: /* 7ab9e0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab9e3: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab9e9: xor ecx, 0x2000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9ef: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9f4: /* 7ab9f4: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab9f7: push 0xace7ec */
  { uint32_t v = 0xace7ecu; esp -= 4; W32(esp, v); }
/* 7ab9fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab9fd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba04: je 0x7aba17 */
  if (zf) goto L_7aba17;
L_7aba06: /* 7aba06: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba09: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba0f: xor ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba12: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba17: /* 7aba17: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba1a: push 0xace7f8 */
  { uint32_t v = 0xace7f8u; esp -= 4; W32(esp, v); }
/* 7aba1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba20: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba27: je 0x7aba3d */
  if (zf) goto L_7aba3d;
L_7aba29: /* 7aba29: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba2c: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba32: xor ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba38: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba3d: /* 7aba3d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7aba40: push 0xace804 */
  { uint32_t v = 0xace804u; esp -= 4; W32(esp, v); }
/* 7aba45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aba46: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba4b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba4d: je 0x7aba60 */
  if (zf) goto L_7aba60;
L_7aba4f: /* 7aba4f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba52: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba58: xor ecx, 0x20000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba5e: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba60: /* 7aba60: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7aba63: push 0xace81c */
  { uint32_t v = 0xace81cu; esp -= 4; W32(esp, v); }
/* 7aba68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aba69: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba6b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba70: je 0x7aba83 */
  if (zf) goto L_7aba83;
L_7aba72: /* 7aba72: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba75: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba7b: xor ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba81: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba83: /* 7aba83: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba86: push 0xace840 */
  { uint32_t v = 0xace840u; esp -= 4; W32(esp, v); }
/* 7aba8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba8c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba93: je 0x7abaa6 */
  if (zf) goto L_7abaa6;
L_7aba95: /* 7aba95: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba98: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba9e: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7abaa4: jmp 0x7abac7 */
  goto L_7abac7;
L_7abaa6: /* 7abaa6: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abaa9: push 0xace854 */
  { uint32_t v = 0xace854u; esp -= 4; W32(esp, v); }
/* 7abaae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abaaf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abab1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abab1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abab4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abab6: je 0x7abacd */
  if (zf) goto L_7abacd;
L_7abab8: /* 7abab8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ababb: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7abac1: xor ecx, 0x800000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
L_7abac7: /* 7abac7: mov dword ptr [eax + 0x534], ecx */
  W32((uint32_t)(eax + 0x534u), ecx);
L_7abacd: /* 7abacd: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7abad2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7abad5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abadb: /* 7abadb: xor ecx, ecx */
  ecx = 0;
/* 7abadd: mov dl, 0x40 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
/* 7abadf: nop  */
L_7abae0: /* 7abae0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abae3: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 7abae9: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7abaec: jge 0x7ab683 */
  if ((sf == of)) goto L_7ab683;
L_7abaf2: /* 7abaf2: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7abaf5: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7abaf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abafa: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abafc: /* 7abafc: test byte ptr [eax + 0x80], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb02: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abb04: /* 7abb04: mov byte ptr [eax + 0x6c], 0 */
  W8((uint32_t)(eax + 0x6cu), 0x0u);
L_7abb08: /* 7abb08: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7abb09: jmp 0x7abae0 */
  goto L_7abae0;
L_7abb0b: /* 7abb0b: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7abb0e: push 0xace864 */
  { uint32_t v = 0xace864u; esp -= 4; W32(esp, v); }
/* 7abb13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abb14: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abb16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abb16: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb1b: je 0x7abb5e */
  if (zf) goto L_7abb5e;
L_7abb1d: /* 7abb1d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7abb20: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abb21: call dword ptr [0xcfa3c4] */
  esp -= 4; W32(esp, 0x7abb27u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 7abb27: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb2a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb2c: je 0x7abb46 */
  if (zf) goto L_7abb46;
L_7abb2e: /* 7abb2e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7abb31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abb32: call dword ptr [0xcfa7b4] */
  esp -= 4; W32(esp, 0x7abb38u); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 7abb38: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb3b: mov dword ptr [esi + 0xf0], eax */
  W32((uint32_t)(esi + 0xf0u), eax);
/* 7abb41: jmp 0x7ab683 */
  goto L_7ab683;
L_7abb46: /* 7abb46: mov eax, dword ptr [esi + 0xf0] */
  eax = R32((uint32_t)(esi + 0xf0u));
/* 7abb4c: xor ecx, ecx */
  ecx = 0;
/* 7abb4e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb50: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7abb53: mov dword ptr [esi + 0xf0], ecx */
  W32((uint32_t)(esi + 0xf0u), ecx);
/* 7abb59: jmp 0x7ab683 */
  goto L_7ab683;
L_7abb5e: /* 7abb5e: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abb61: push 0xace87c */
  { uint32_t v = 0xace87cu; esp -= 4; W32(esp, v); }
/* 7abb66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abb67: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abb69u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abb69: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb6e: je 0x7abb8e */
  if (zf) goto L_7abb8e;
L_7abb70: /* 7abb70: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7abb73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abb74: call dword ptr [0xcfa778] */
  esp -= 4; W32(esp, 0x7abb7au); SPILL(); f_4e3d69(); if (g_unwind) return; /* Core!?appAtof@@YAMPBG@Z */ RELOAD();
/* 7abb7a: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7abb7d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7abb80: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb83: mov dword ptr [esi + 0xf4], ecx */
  W32((uint32_t)(esi + 0xf4u), ecx);
/* 7abb89: jmp 0x7ab683 */
  goto L_7ab683;
L_7abb8e: /* 7abb8e: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abb91: push 0xace89c */
  { uint32_t v = 0xace89cu; esp -= 4; W32(esp, v); }
/* 7abb96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abb97: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abb99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abb99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb9e: je 0x7abc43 */
  if (zf) goto L_7abc43;
L_7abba4: /* 7abba4: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7abba7: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 7abbad: mov dl, byte ptr [eax + 0x4c8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x4c8u))) & 0xffu);
/* 7abbb3: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7abbb5: jne 0x7ab65f */
  if (!zf) goto L_7ab65f;
L_7abbbb: /* 7abbbb: mov eax, dword ptr [ecx + 0x4c4] */
  eax = R32((uint32_t)(ecx + 0x4c4u));
/* 7abbc1: mov edx, eax */
  edx = eax;
/* 7abbc3: not edx */
  edx = ~edx;
/* 7abbc5: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7abbc7: and edx, 0x800000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7abbcd: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7abbcf: mov dword ptr [ecx + 0x4c4], edx */
  W32((uint32_t)(ecx + 0x4c4u), edx);
/* 7abbd5: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abbd8: test dword ptr [eax + 0x4c4], 0x800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4c4u))); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abbe2: je 0x7ab683 */
  if (zf) goto L_7ab683;
L_7abbe8: /* 7abbe8: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 7abbee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abbf0: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7abbf3: add eax, 0x588 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x588u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7abbf8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7abbfa: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7abbfd: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7abc00: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7abc03: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7abc06: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abc09: lea edx, [eax + 0x17c] */
  edx = (uint32_t)(eax + 0x17cu);
/* 7abc0f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7abc11: add eax, 0x594 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x594u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7abc16: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7abc18: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7abc1b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7abc1e: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7abc21: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7abc24: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7abc27: lea eax, [ecx + 0x594] */
  eax = (uint32_t)(ecx + 0x594u);
/* 7abc2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc2e: lea edx, [ecx + 0x588] */
  edx = (uint32_t)(ecx + 0x588u);
/* 7abc34: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abc35: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 7abc38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc39: call 0x6c204a */
  esp -= 4; W32(esp, 0x7abc3eu); SPILL(); f_6c204a(); if (g_unwind) return; RELOAD();
/* 7abc3e: jmp 0x7ab683 */
  goto L_7ab683;
L_7abc43: /* 7abc43: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7abc46: push 0xace8bc */
  { uint32_t v = 0xace8bcu; esp -= 4; W32(esp, v); }
/* 7abc4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abc4c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abc4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc4e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abc51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc53: je 0x7abc8e */
  if (zf) goto L_7abc8e;
L_7abc55: /* 7abc55: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* 7abc5b: xor edx, edx */
  edx = 0;
/* 7abc5d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc5f: mov eax, dword ptr [esi - 0x2c] */
  eax = R32((uint32_t)(esi + 0xffffffd4u));
/* 7abc62: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7abc65: lea edi, [esi - 0x2c] */
  edi = (uint32_t)(esi + 0xffffffd4u);
/* 7abc68: mov ecx, edi */
  ecx = edi;
/* 7abc6a: mov dword ptr [esi + 0xa0], edx */
  W32((uint32_t)(esi + 0xa0u), edx);
/* 7abc70: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x7abc73u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc73: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 7abc76: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abc78: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7abc7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7abc7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc7d: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 7abc80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc81: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 7abc84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7abc86: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7abc89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc89: jmp 0x7ab683 */
  goto L_7ab683;
L_7abc8e: /* 7abc8e: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7abc91: push 0xace8d8 */
  { uint32_t v = 0xace8d8u; esp -= 4; W32(esp, v); }
/* 7abc96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abc97: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abc99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abc9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc9e: je 0x7abcd8 */
  if (zf) goto L_7abcd8;
L_7abca0: /* 7abca0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7abca2: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7abca7: lea edx, [ebp - 0x834] */
  edx = (uint32_t)(ebp + 0xfffff7ccu);
/* 7abcad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abcae: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7abcb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abcb2: call dword ptr [0xcfa7a8] */
  esp -= 4; W32(esp, 0x7abcb8u); SPILL(); f_4e3256(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGPAGHH@Z */ RELOAD();
/* 7abcb8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abcbb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcbd: je 0x7ab683 */
  if (zf) goto L_7ab683;
L_7abcc3: /* 7abcc3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcc4: lea ecx, [ebp - 0x834] */
  ecx = (uint32_t)(ebp + 0xfffff7ccu);
/* 7abcca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abccb: lea ecx, [esi - 0x2c] */
  ecx = (uint32_t)(esi + 0xffffffd4u);
/* 7abcce: call 0x6c268f */
  esp -= 4; W32(esp, 0x7abcd3u); SPILL(); f_6c268f(); if (g_unwind) return; RELOAD();
/* 7abcd3: jmp 0x7ab683 */
  goto L_7ab683;
L_7abcd8: /* 7abcd8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7abcdb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcdd: je 0x7abcfb */
  if (zf) goto L_7abcfb;
L_7abcdf: /* 7abcdf: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abce2: mov eax, dword ptr [eax + 0x33c] */
  eax = R32((uint32_t)(eax + 0x33cu));
/* 7abce8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abcea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abceb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7abcee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abcf0: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x7abcf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abcf3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcf5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abcfb: /* 7abcfb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7abcfe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abd00: mov ecx, esi */
  ecx = esi;
/* 7abd02: call 0x6cc0f9 */
  esp -= 4; W32(esp, 0x7abd07u); SPILL(); f_6cc0f9(); if (g_unwind) return; RELOAD();
/* 7abd07: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7abd0a: xor edx, edx */
  edx = 0;
/* 7abd0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abd0e: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7abd11: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7abd12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7abd13: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7abd1a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7abd1b: mov eax, edx */
  eax = edx;
/* 7abd1d: mov esp, ebp */
  esp = ebp;
/* 7abd1f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7abd20: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ab6cb(void) {
  LOAD_REGS();
  goto L_7ab6cb;
L_7ab65f: /* 7ab65f: xor eax, eax */
  eax = 0;
/* 7ab661: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab664: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab66b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab66c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab66d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab66e: mov esp, ebp */
  esp = ebp;
/* 7ab670: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab671: ret 8 */
  esp += 12; SPILL(); return;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7ab6cb: /* 7ab6cb: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab6ce: push 0xace6cc */
  { uint32_t v = 0xace6ccu; esp -= 4; W32(esp, v); }
/* 7ab6d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab6d4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab6d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab6d6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab6d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab6db: je 0x7ab717 */
  if (zf) goto L_7ab717;
L_7ab6dd: /* 7ab6dd: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7ab6e0: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 7ab6e6: mov al, byte ptr [edx + 0x4c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x4c8u))) & 0xffu);
/* 7ab6ec: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab6ee: jne 0x7ab65f */
  if (!zf) goto L_7ab65f;
L_7ab6f4: /* 7ab6f4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ab6f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab6f8: call dword ptr [0xcfa7b4] */
  esp -= 4; W32(esp, 0x7ab6feu); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 7ab6fe: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab701: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ab703: jle 0x7ab683 */
  if ((zf || sf != of)) goto L_7ab683;
L_7ab709: /* 7ab709: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7ab70c: mov dword ptr [ecx + 0x540], eax */
  W32((uint32_t)(ecx + 0x540u), eax);
/* 7ab712: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab717: /* 7ab717: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab71a: push 0xace6d8 */
  { uint32_t v = 0xace6d8u; esp -= 4; W32(esp, v); }
/* 7ab71f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab720: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab722u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab722: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab725: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab727: je 0x7ab877 */
  if (zf) goto L_7ab877;
L_7ab72d: /* 7ab72d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab730: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 7ab736: mov al, byte ptr [ecx + 0x4c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x4c8u))) & 0xffu);
/* 7ab73c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab73e: jne 0x7ab65f */
  if (!zf) goto L_7ab65f;
L_7ab744: /* 7ab744: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab747: push 0xace6e4 */
  { uint32_t v = 0xace6e4u; esp -= 4; W32(esp, v); }
/* 7ab74c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab74d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab74fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab74f: xor ebx, ebx */
  ebx = 0;
/* 7ab751: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab754: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab756: jne 0x7ab85f */
  if (!zf) goto L_7ab85f;
L_7ab75c: /* 7ab75c: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab75f: push 0xace6f0 */
  { uint32_t v = 0xace6f0u; esp -= 4; W32(esp, v); }
/* 7ab764: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab765: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab767u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab767: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab76a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab76c: jne 0x7ab85f */
  if (!zf) goto L_7ab85f;
L_7ab772: /* 7ab772: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab775: push 0xace700 */
  { uint32_t v = 0xace700u; esp -= 4; W32(esp, v); }
/* 7ab77a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab77b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab77du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab77d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab780: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab782: je 0x7ab79c */
  if (zf) goto L_7ab79c;
L_7ab784: /* 7ab784: mov eax, dword ptr [esi + 0xdc] */
  eax = R32((uint32_t)(esi + 0xdcu));
/* 7ab78a: xor edx, edx */
  edx = 0;
/* 7ab78c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab78e: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ab791: mov dword ptr [esi + 0xdc], edx */
  W32((uint32_t)(esi + 0xdcu), edx);
/* 7ab797: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab79c: /* 7ab79c: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab79f: push 0xace70c */
  { uint32_t v = 0xace70cu; esp -= 4; W32(esp, v); }
/* 7ab7a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab7a5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab7a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab7a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab7aa: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab7ac: je 0x7ab7c6 */
  if (zf) goto L_7ab7c6;
L_7ab7ae: /* 7ab7ae: mov eax, dword ptr [esi + 0xe0] */
  eax = R32((uint32_t)(esi + 0xe0u));
/* 7ab7b4: xor ecx, ecx */
  ecx = 0;
/* 7ab7b6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab7b8: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ab7bb: mov dword ptr [esi + 0xe0], ecx */
  W32((uint32_t)(esi + 0xe0u), ecx);
/* 7ab7c1: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab7c6: /* 7ab7c6: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab7c9: push 0xace718 */
  { uint32_t v = 0xace718u; esp -= 4; W32(esp, v); }
/* 7ab7ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab7cf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab7d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab7d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab7d4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab7d6: je 0x7ab7f0 */
  if (zf) goto L_7ab7f0;
L_7ab7d8: /* 7ab7d8: mov ecx, dword ptr [esi + 0xd8] */
  ecx = R32((uint32_t)(esi + 0xd8u));
/* 7ab7de: xor eax, eax */
  eax = 0;
/* 7ab7e0: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab7e2: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ab7e5: mov dword ptr [esi + 0xd8], eax */
  W32((uint32_t)(esi + 0xd8u), eax);
/* 7ab7eb: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab7f0: /* 7ab7f0: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab7f3: push 0xace724 */
  { uint32_t v = 0xace724u; esp -= 4; W32(esp, v); }
/* 7ab7f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab7f9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab7fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab7fb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab7fe: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab800: je 0x7ab81a */
  if (zf) goto L_7ab81a;
L_7ab802: /* 7ab802: mov eax, dword ptr [esi + 0xec] */
  eax = R32((uint32_t)(esi + 0xecu));
/* 7ab808: xor edx, edx */
  edx = 0;
/* 7ab80a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab80c: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ab80f: mov dword ptr [esi + 0xec], edx */
  W32((uint32_t)(esi + 0xecu), edx);
/* 7ab815: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab81a: /* 7ab81a: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab81d: push 0xace738 */
  { uint32_t v = 0xace738u; esp -= 4; W32(esp, v); }
/* 7ab822: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab823: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab825u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab825: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab828: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab82a: jne 0x7ab842 */
  if (!zf) goto L_7ab842;
L_7ab82c: /* 7ab82c: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab82f: push 0xace748 */
  { uint32_t v = 0xace748u; esp -= 4; W32(esp, v); }
/* 7ab834: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab835: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab837u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab837: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab83a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab83c: je 0x7ab65f */
  if (zf) goto L_7ab65f;
L_7ab842: /* 7ab842: mov dword ptr [esi + 0xd8], ebx */
  W32((uint32_t)(esi + 0xd8u), ebx);
/* 7ab848: mov dword ptr [esi + 0xe4], ebx */
  W32((uint32_t)(esi + 0xe4u), ebx);
/* 7ab84e: mov dword ptr [esi + 0xdc], ebx */
  W32((uint32_t)(esi + 0xdcu), ebx);
/* 7ab854: mov dword ptr [esi + 0xec], ebx */
  W32((uint32_t)(esi + 0xecu), ebx);
/* 7ab85a: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab85f: /* 7ab85f: mov eax, dword ptr [esi + 0xe4] */
  eax = R32((uint32_t)(esi + 0xe4u));
/* 7ab865: xor edx, edx */
  edx = 0;
/* 7ab867: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab869: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ab86c: mov dword ptr [esi + 0xe4], edx */
  W32((uint32_t)(esi + 0xe4u), edx);
/* 7ab872: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab877: /* 7ab877: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab87a: push 0xace754 */
  { uint32_t v = 0xace754u; esp -= 4; W32(esp, v); }
/* 7ab87f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab880: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab882u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab882: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab885: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab887: je 0x7abb0b */
  if (zf) goto L_7abb0b;
L_7ab88d: /* 7ab88d: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7ab890: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 7ab896: mov al, byte ptr [edx + 0x4c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x4c8u))) & 0xffu);
/* 7ab89c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab89e: jne 0x7ab65f */
  if (!zf) goto L_7ab65f;
L_7ab8a4: /* 7ab8a4: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab8a7: push 0xace760 */
  { uint32_t v = 0xace760u; esp -= 4; W32(esp, v); }
/* 7ab8ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab8ad: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab8afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab8af: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab8b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab8b4: je 0x7ab8c7 */
  if (zf) goto L_7ab8c7;
L_7ab8b6: /* 7ab8b6: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab8b9: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab8bf: xor ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab8c2: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab8c7: /* 7ab8c7: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab8ca: push 0xace770 */
  { uint32_t v = 0xace770u; esp -= 4; W32(esp, v); }
/* 7ab8cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab8d0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab8d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab8d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab8d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab8d7: je 0x7ab8ed */
  if (zf) goto L_7ab8ed;
L_7ab8d9: /* 7ab8d9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab8dc: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab8e2: xor ecx, 0x4000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab8e8: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab8ed: /* 7ab8ed: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab8f0: push 0xace784 */
  { uint32_t v = 0xace784u; esp -= 4; W32(esp, v); }
/* 7ab8f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab8f6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab8f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab8f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab8fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab8fd: je 0x7ab913 */
  if (zf) goto L_7ab913;
L_7ab8ff: /* 7ab8ff: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab902: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab908: xor ecx, 0x8000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab90e: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab913: /* 7ab913: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab916: push 0xace7a0 */
  { uint32_t v = 0xace7a0u; esp -= 4; W32(esp, v); }
/* 7ab91b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab91c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab91eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab91e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab921: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab923: je 0x7ab939 */
  if (zf) goto L_7ab939;
L_7ab925: /* 7ab925: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab928: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab92e: xor ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab934: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab939: /* 7ab939: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab93c: push 0xace7b0 */
  { uint32_t v = 0xace7b0u; esp -= 4; W32(esp, v); }
/* 7ab941: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab942: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab944u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab944: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab947: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab949: je 0x7ab95f */
  if (zf) goto L_7ab95f;
L_7ab94b: /* 7ab94b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab94e: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab954: xor ecx, 0x80000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab95a: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab95f: /* 7ab95f: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab962: push 0xace7b8 */
  { uint32_t v = 0xace7b8u; esp -= 4; W32(esp, v); }
/* 7ab967: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab968: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab96au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab96a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab96d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab96f: je 0x7ab982 */
  if (zf) goto L_7ab982;
L_7ab971: /* 7ab971: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab974: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab97a: xor ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab97d: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab982: /* 7ab982: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab985: push 0xace7c0 */
  { uint32_t v = 0xace7c0u; esp -= 4; W32(esp, v); }
/* 7ab98a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab98b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab98du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab98d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab990: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab992: je 0x7ab9a8 */
  if (zf) goto L_7ab9a8;
L_7ab994: /* 7ab994: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab997: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab99d: xor ecx, 0x400000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9a3: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9a8: /* 7ab9a8: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab9ab: push 0xace7d0 */
  { uint32_t v = 0xace7d0u; esp -= 4; W32(esp, v); }
/* 7ab9b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab9b1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab9b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab9b8: je 0x7ab9ce */
  if (zf) goto L_7ab9ce;
L_7ab9ba: /* 7ab9ba: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab9bd: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab9c3: xor ecx, 0x1000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9c9: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9ce: /* 7ab9ce: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab9d1: push 0xace7e4 */
  { uint32_t v = 0xace7e4u; esp -= 4; W32(esp, v); }
/* 7ab9d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab9d7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab9dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab9de: je 0x7ab9f4 */
  if (zf) goto L_7ab9f4;
L_7ab9e0: /* 7ab9e0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab9e3: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab9e9: xor ecx, 0x2000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9ef: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9f4: /* 7ab9f4: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab9f7: push 0xace7ec */
  { uint32_t v = 0xace7ecu; esp -= 4; W32(esp, v); }
/* 7ab9fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab9fd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba04: je 0x7aba17 */
  if (zf) goto L_7aba17;
L_7aba06: /* 7aba06: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba09: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba0f: xor ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba12: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba17: /* 7aba17: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba1a: push 0xace7f8 */
  { uint32_t v = 0xace7f8u; esp -= 4; W32(esp, v); }
/* 7aba1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba20: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba27: je 0x7aba3d */
  if (zf) goto L_7aba3d;
L_7aba29: /* 7aba29: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba2c: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba32: xor ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba38: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba3d: /* 7aba3d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7aba40: push 0xace804 */
  { uint32_t v = 0xace804u; esp -= 4; W32(esp, v); }
/* 7aba45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aba46: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba4b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba4d: je 0x7aba60 */
  if (zf) goto L_7aba60;
L_7aba4f: /* 7aba4f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba52: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba58: xor ecx, 0x20000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba5e: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba60: /* 7aba60: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7aba63: push 0xace81c */
  { uint32_t v = 0xace81cu; esp -= 4; W32(esp, v); }
/* 7aba68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aba69: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba6b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba70: je 0x7aba83 */
  if (zf) goto L_7aba83;
L_7aba72: /* 7aba72: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba75: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba7b: xor ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba81: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba83: /* 7aba83: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba86: push 0xace840 */
  { uint32_t v = 0xace840u; esp -= 4; W32(esp, v); }
/* 7aba8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba8c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba93: je 0x7abaa6 */
  if (zf) goto L_7abaa6;
L_7aba95: /* 7aba95: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba98: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba9e: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7abaa4: jmp 0x7abac7 */
  goto L_7abac7;
L_7abaa6: /* 7abaa6: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abaa9: push 0xace854 */
  { uint32_t v = 0xace854u; esp -= 4; W32(esp, v); }
/* 7abaae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abaaf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abab1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abab1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abab4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abab6: je 0x7abacd */
  if (zf) goto L_7abacd;
L_7abab8: /* 7abab8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ababb: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7abac1: xor ecx, 0x800000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
L_7abac7: /* 7abac7: mov dword ptr [eax + 0x534], ecx */
  W32((uint32_t)(eax + 0x534u), ecx);
L_7abacd: /* 7abacd: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7abad2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7abad5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abadb: /* 7abadb: xor ecx, ecx */
  ecx = 0;
/* 7abadd: mov dl, 0x40 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
/* 7abadf: nop  */
L_7abae0: /* 7abae0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abae3: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 7abae9: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7abaec: jge 0x7ab683 */
  if ((sf == of)) goto L_7ab683;
L_7abaf2: /* 7abaf2: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7abaf5: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7abaf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abafa: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abafc: /* 7abafc: test byte ptr [eax + 0x80], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb02: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abb04: /* 7abb04: mov byte ptr [eax + 0x6c], 0 */
  W8((uint32_t)(eax + 0x6cu), 0x0u);
L_7abb08: /* 7abb08: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7abb09: jmp 0x7abae0 */
  goto L_7abae0;
L_7abb0b: /* 7abb0b: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7abb0e: push 0xace864 */
  { uint32_t v = 0xace864u; esp -= 4; W32(esp, v); }
/* 7abb13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abb14: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abb16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abb16: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb1b: je 0x7abb5e */
  if (zf) goto L_7abb5e;
L_7abb1d: /* 7abb1d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7abb20: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abb21: call dword ptr [0xcfa3c4] */
  esp -= 4; W32(esp, 0x7abb27u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 7abb27: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb2a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb2c: je 0x7abb46 */
  if (zf) goto L_7abb46;
L_7abb2e: /* 7abb2e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7abb31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abb32: call dword ptr [0xcfa7b4] */
  esp -= 4; W32(esp, 0x7abb38u); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 7abb38: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb3b: mov dword ptr [esi + 0xf0], eax */
  W32((uint32_t)(esi + 0xf0u), eax);
/* 7abb41: jmp 0x7ab683 */
  goto L_7ab683;
L_7abb46: /* 7abb46: mov eax, dword ptr [esi + 0xf0] */
  eax = R32((uint32_t)(esi + 0xf0u));
/* 7abb4c: xor ecx, ecx */
  ecx = 0;
/* 7abb4e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb50: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7abb53: mov dword ptr [esi + 0xf0], ecx */
  W32((uint32_t)(esi + 0xf0u), ecx);
/* 7abb59: jmp 0x7ab683 */
  goto L_7ab683;
L_7abb5e: /* 7abb5e: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abb61: push 0xace87c */
  { uint32_t v = 0xace87cu; esp -= 4; W32(esp, v); }
/* 7abb66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abb67: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abb69u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abb69: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb6e: je 0x7abb8e */
  if (zf) goto L_7abb8e;
L_7abb70: /* 7abb70: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7abb73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abb74: call dword ptr [0xcfa778] */
  esp -= 4; W32(esp, 0x7abb7au); SPILL(); f_4e3d69(); if (g_unwind) return; /* Core!?appAtof@@YAMPBG@Z */ RELOAD();
/* 7abb7a: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7abb7d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7abb80: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb83: mov dword ptr [esi + 0xf4], ecx */
  W32((uint32_t)(esi + 0xf4u), ecx);
/* 7abb89: jmp 0x7ab683 */
  goto L_7ab683;
L_7abb8e: /* 7abb8e: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abb91: push 0xace89c */
  { uint32_t v = 0xace89cu; esp -= 4; W32(esp, v); }
/* 7abb96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abb97: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abb99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abb99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb9e: je 0x7abc43 */
  if (zf) goto L_7abc43;
L_7abba4: /* 7abba4: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7abba7: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 7abbad: mov dl, byte ptr [eax + 0x4c8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x4c8u))) & 0xffu);
/* 7abbb3: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7abbb5: jne 0x7ab65f */
  if (!zf) goto L_7ab65f;
L_7abbbb: /* 7abbbb: mov eax, dword ptr [ecx + 0x4c4] */
  eax = R32((uint32_t)(ecx + 0x4c4u));
/* 7abbc1: mov edx, eax */
  edx = eax;
/* 7abbc3: not edx */
  edx = ~edx;
/* 7abbc5: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7abbc7: and edx, 0x800000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7abbcd: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7abbcf: mov dword ptr [ecx + 0x4c4], edx */
  W32((uint32_t)(ecx + 0x4c4u), edx);
/* 7abbd5: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abbd8: test dword ptr [eax + 0x4c4], 0x800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4c4u))); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abbe2: je 0x7ab683 */
  if (zf) goto L_7ab683;
L_7abbe8: /* 7abbe8: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 7abbee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abbf0: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7abbf3: add eax, 0x588 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x588u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7abbf8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7abbfa: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7abbfd: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7abc00: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7abc03: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7abc06: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abc09: lea edx, [eax + 0x17c] */
  edx = (uint32_t)(eax + 0x17cu);
/* 7abc0f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7abc11: add eax, 0x594 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x594u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7abc16: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7abc18: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7abc1b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7abc1e: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7abc21: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7abc24: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7abc27: lea eax, [ecx + 0x594] */
  eax = (uint32_t)(ecx + 0x594u);
/* 7abc2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc2e: lea edx, [ecx + 0x588] */
  edx = (uint32_t)(ecx + 0x588u);
/* 7abc34: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abc35: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 7abc38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc39: call 0x6c204a */
  esp -= 4; W32(esp, 0x7abc3eu); SPILL(); f_6c204a(); if (g_unwind) return; RELOAD();
/* 7abc3e: jmp 0x7ab683 */
  goto L_7ab683;
L_7abc43: /* 7abc43: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7abc46: push 0xace8bc */
  { uint32_t v = 0xace8bcu; esp -= 4; W32(esp, v); }
/* 7abc4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abc4c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abc4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc4e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abc51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc53: je 0x7abc8e */
  if (zf) goto L_7abc8e;
L_7abc55: /* 7abc55: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* 7abc5b: xor edx, edx */
  edx = 0;
/* 7abc5d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc5f: mov eax, dword ptr [esi - 0x2c] */
  eax = R32((uint32_t)(esi + 0xffffffd4u));
/* 7abc62: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7abc65: lea edi, [esi - 0x2c] */
  edi = (uint32_t)(esi + 0xffffffd4u);
/* 7abc68: mov ecx, edi */
  ecx = edi;
/* 7abc6a: mov dword ptr [esi + 0xa0], edx */
  W32((uint32_t)(esi + 0xa0u), edx);
/* 7abc70: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x7abc73u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc73: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 7abc76: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abc78: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7abc7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7abc7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc7d: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 7abc80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc81: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 7abc84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7abc86: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7abc89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc89: jmp 0x7ab683 */
  goto L_7ab683;
L_7abc8e: /* 7abc8e: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7abc91: push 0xace8d8 */
  { uint32_t v = 0xace8d8u; esp -= 4; W32(esp, v); }
/* 7abc96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abc97: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abc99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abc9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc9e: je 0x7abcd8 */
  if (zf) goto L_7abcd8;
L_7abca0: /* 7abca0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7abca2: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7abca7: lea edx, [ebp - 0x834] */
  edx = (uint32_t)(ebp + 0xfffff7ccu);
/* 7abcad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abcae: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7abcb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abcb2: call dword ptr [0xcfa7a8] */
  esp -= 4; W32(esp, 0x7abcb8u); SPILL(); f_4e3256(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGPAGHH@Z */ RELOAD();
/* 7abcb8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abcbb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcbd: je 0x7ab683 */
  if (zf) goto L_7ab683;
L_7abcc3: /* 7abcc3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcc4: lea ecx, [ebp - 0x834] */
  ecx = (uint32_t)(ebp + 0xfffff7ccu);
/* 7abcca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abccb: lea ecx, [esi - 0x2c] */
  ecx = (uint32_t)(esi + 0xffffffd4u);
/* 7abcce: call 0x6c268f */
  esp -= 4; W32(esp, 0x7abcd3u); SPILL(); f_6c268f(); if (g_unwind) return; RELOAD();
/* 7abcd3: jmp 0x7ab683 */
  goto L_7ab683;
L_7abcd8: /* 7abcd8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7abcdb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcdd: je 0x7abcfb */
  if (zf) goto L_7abcfb;
L_7abcdf: /* 7abcdf: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abce2: mov eax, dword ptr [eax + 0x33c] */
  eax = R32((uint32_t)(eax + 0x33cu));
/* 7abce8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abcea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abceb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7abcee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abcf0: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x7abcf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abcf3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcf5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abcfb: /* 7abcfb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7abcfe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abd00: mov ecx, esi */
  ecx = esi;
/* 7abd02: call 0x6cc0f9 */
  esp -= 4; W32(esp, 0x7abd07u); SPILL(); f_6cc0f9(); if (g_unwind) return; RELOAD();
/* 7abd07: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7abd0a: xor edx, edx */
  edx = 0;
/* 7abd0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abd0e: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7abd11: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7abd12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7abd13: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7abd1a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7abd1b: mov eax, edx */
  eax = edx;
/* 7abd1d: mov esp, ebp */
  esp = ebp;
/* 7abd1f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7abd20: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ab717(void) {
  LOAD_REGS();
  goto L_7ab717;
L_7ab65f: /* 7ab65f: xor eax, eax */
  eax = 0;
/* 7ab661: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab664: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab66b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab66c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab66d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab66e: mov esp, ebp */
  esp = ebp;
/* 7ab670: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab671: ret 8 */
  esp += 12; SPILL(); return;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7ab717: /* 7ab717: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab71a: push 0xace6d8 */
  { uint32_t v = 0xace6d8u; esp -= 4; W32(esp, v); }
/* 7ab71f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab720: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab722u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab722: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab725: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab727: je 0x7ab877 */
  if (zf) goto L_7ab877;
L_7ab72d: /* 7ab72d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab730: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 7ab736: mov al, byte ptr [ecx + 0x4c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x4c8u))) & 0xffu);
/* 7ab73c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab73e: jne 0x7ab65f */
  if (!zf) goto L_7ab65f;
L_7ab744: /* 7ab744: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab747: push 0xace6e4 */
  { uint32_t v = 0xace6e4u; esp -= 4; W32(esp, v); }
/* 7ab74c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab74d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab74fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab74f: xor ebx, ebx */
  ebx = 0;
/* 7ab751: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab754: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab756: jne 0x7ab85f */
  if (!zf) goto L_7ab85f;
L_7ab75c: /* 7ab75c: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab75f: push 0xace6f0 */
  { uint32_t v = 0xace6f0u; esp -= 4; W32(esp, v); }
/* 7ab764: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab765: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab767u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab767: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab76a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab76c: jne 0x7ab85f */
  if (!zf) goto L_7ab85f;
L_7ab772: /* 7ab772: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab775: push 0xace700 */
  { uint32_t v = 0xace700u; esp -= 4; W32(esp, v); }
/* 7ab77a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab77b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab77du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab77d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab780: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab782: je 0x7ab79c */
  if (zf) goto L_7ab79c;
L_7ab784: /* 7ab784: mov eax, dword ptr [esi + 0xdc] */
  eax = R32((uint32_t)(esi + 0xdcu));
/* 7ab78a: xor edx, edx */
  edx = 0;
/* 7ab78c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab78e: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ab791: mov dword ptr [esi + 0xdc], edx */
  W32((uint32_t)(esi + 0xdcu), edx);
/* 7ab797: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab79c: /* 7ab79c: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab79f: push 0xace70c */
  { uint32_t v = 0xace70cu; esp -= 4; W32(esp, v); }
/* 7ab7a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab7a5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab7a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab7a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab7aa: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab7ac: je 0x7ab7c6 */
  if (zf) goto L_7ab7c6;
L_7ab7ae: /* 7ab7ae: mov eax, dword ptr [esi + 0xe0] */
  eax = R32((uint32_t)(esi + 0xe0u));
/* 7ab7b4: xor ecx, ecx */
  ecx = 0;
/* 7ab7b6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab7b8: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ab7bb: mov dword ptr [esi + 0xe0], ecx */
  W32((uint32_t)(esi + 0xe0u), ecx);
/* 7ab7c1: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab7c6: /* 7ab7c6: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab7c9: push 0xace718 */
  { uint32_t v = 0xace718u; esp -= 4; W32(esp, v); }
/* 7ab7ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab7cf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab7d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab7d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab7d4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab7d6: je 0x7ab7f0 */
  if (zf) goto L_7ab7f0;
L_7ab7d8: /* 7ab7d8: mov ecx, dword ptr [esi + 0xd8] */
  ecx = R32((uint32_t)(esi + 0xd8u));
/* 7ab7de: xor eax, eax */
  eax = 0;
/* 7ab7e0: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab7e2: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ab7e5: mov dword ptr [esi + 0xd8], eax */
  W32((uint32_t)(esi + 0xd8u), eax);
/* 7ab7eb: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab7f0: /* 7ab7f0: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab7f3: push 0xace724 */
  { uint32_t v = 0xace724u; esp -= 4; W32(esp, v); }
/* 7ab7f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab7f9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab7fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab7fb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab7fe: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab800: je 0x7ab81a */
  if (zf) goto L_7ab81a;
L_7ab802: /* 7ab802: mov eax, dword ptr [esi + 0xec] */
  eax = R32((uint32_t)(esi + 0xecu));
/* 7ab808: xor edx, edx */
  edx = 0;
/* 7ab80a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab80c: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ab80f: mov dword ptr [esi + 0xec], edx */
  W32((uint32_t)(esi + 0xecu), edx);
/* 7ab815: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab81a: /* 7ab81a: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab81d: push 0xace738 */
  { uint32_t v = 0xace738u; esp -= 4; W32(esp, v); }
/* 7ab822: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab823: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab825u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab825: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab828: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab82a: jne 0x7ab842 */
  if (!zf) goto L_7ab842;
L_7ab82c: /* 7ab82c: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab82f: push 0xace748 */
  { uint32_t v = 0xace748u; esp -= 4; W32(esp, v); }
/* 7ab834: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab835: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab837u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab837: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab83a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab83c: je 0x7ab65f */
  if (zf) goto L_7ab65f;
L_7ab842: /* 7ab842: mov dword ptr [esi + 0xd8], ebx */
  W32((uint32_t)(esi + 0xd8u), ebx);
/* 7ab848: mov dword ptr [esi + 0xe4], ebx */
  W32((uint32_t)(esi + 0xe4u), ebx);
/* 7ab84e: mov dword ptr [esi + 0xdc], ebx */
  W32((uint32_t)(esi + 0xdcu), ebx);
/* 7ab854: mov dword ptr [esi + 0xec], ebx */
  W32((uint32_t)(esi + 0xecu), ebx);
/* 7ab85a: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab85f: /* 7ab85f: mov eax, dword ptr [esi + 0xe4] */
  eax = R32((uint32_t)(esi + 0xe4u));
/* 7ab865: xor edx, edx */
  edx = 0;
/* 7ab867: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab869: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ab86c: mov dword ptr [esi + 0xe4], edx */
  W32((uint32_t)(esi + 0xe4u), edx);
/* 7ab872: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab877: /* 7ab877: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab87a: push 0xace754 */
  { uint32_t v = 0xace754u; esp -= 4; W32(esp, v); }
/* 7ab87f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab880: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab882u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab882: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab885: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab887: je 0x7abb0b */
  if (zf) goto L_7abb0b;
L_7ab88d: /* 7ab88d: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7ab890: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 7ab896: mov al, byte ptr [edx + 0x4c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x4c8u))) & 0xffu);
/* 7ab89c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab89e: jne 0x7ab65f */
  if (!zf) goto L_7ab65f;
L_7ab8a4: /* 7ab8a4: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab8a7: push 0xace760 */
  { uint32_t v = 0xace760u; esp -= 4; W32(esp, v); }
/* 7ab8ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab8ad: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab8afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab8af: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab8b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab8b4: je 0x7ab8c7 */
  if (zf) goto L_7ab8c7;
L_7ab8b6: /* 7ab8b6: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab8b9: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab8bf: xor ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab8c2: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab8c7: /* 7ab8c7: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab8ca: push 0xace770 */
  { uint32_t v = 0xace770u; esp -= 4; W32(esp, v); }
/* 7ab8cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab8d0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab8d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab8d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab8d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab8d7: je 0x7ab8ed */
  if (zf) goto L_7ab8ed;
L_7ab8d9: /* 7ab8d9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab8dc: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab8e2: xor ecx, 0x4000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab8e8: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab8ed: /* 7ab8ed: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab8f0: push 0xace784 */
  { uint32_t v = 0xace784u; esp -= 4; W32(esp, v); }
/* 7ab8f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab8f6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab8f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab8f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab8fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab8fd: je 0x7ab913 */
  if (zf) goto L_7ab913;
L_7ab8ff: /* 7ab8ff: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab902: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab908: xor ecx, 0x8000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab90e: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab913: /* 7ab913: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab916: push 0xace7a0 */
  { uint32_t v = 0xace7a0u; esp -= 4; W32(esp, v); }
/* 7ab91b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab91c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab91eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab91e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab921: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab923: je 0x7ab939 */
  if (zf) goto L_7ab939;
L_7ab925: /* 7ab925: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab928: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab92e: xor ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab934: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab939: /* 7ab939: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab93c: push 0xace7b0 */
  { uint32_t v = 0xace7b0u; esp -= 4; W32(esp, v); }
/* 7ab941: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab942: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab944u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab944: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab947: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab949: je 0x7ab95f */
  if (zf) goto L_7ab95f;
L_7ab94b: /* 7ab94b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab94e: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab954: xor ecx, 0x80000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab95a: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab95f: /* 7ab95f: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab962: push 0xace7b8 */
  { uint32_t v = 0xace7b8u; esp -= 4; W32(esp, v); }
/* 7ab967: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab968: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab96au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab96a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab96d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab96f: je 0x7ab982 */
  if (zf) goto L_7ab982;
L_7ab971: /* 7ab971: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab974: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab97a: xor ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab97d: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab982: /* 7ab982: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab985: push 0xace7c0 */
  { uint32_t v = 0xace7c0u; esp -= 4; W32(esp, v); }
/* 7ab98a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab98b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab98du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab98d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab990: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab992: je 0x7ab9a8 */
  if (zf) goto L_7ab9a8;
L_7ab994: /* 7ab994: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab997: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab99d: xor ecx, 0x400000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9a3: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9a8: /* 7ab9a8: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab9ab: push 0xace7d0 */
  { uint32_t v = 0xace7d0u; esp -= 4; W32(esp, v); }
/* 7ab9b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab9b1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab9b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab9b8: je 0x7ab9ce */
  if (zf) goto L_7ab9ce;
L_7ab9ba: /* 7ab9ba: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab9bd: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab9c3: xor ecx, 0x1000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9c9: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9ce: /* 7ab9ce: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab9d1: push 0xace7e4 */
  { uint32_t v = 0xace7e4u; esp -= 4; W32(esp, v); }
/* 7ab9d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab9d7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab9dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab9de: je 0x7ab9f4 */
  if (zf) goto L_7ab9f4;
L_7ab9e0: /* 7ab9e0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab9e3: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab9e9: xor ecx, 0x2000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9ef: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9f4: /* 7ab9f4: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab9f7: push 0xace7ec */
  { uint32_t v = 0xace7ecu; esp -= 4; W32(esp, v); }
/* 7ab9fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab9fd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba04: je 0x7aba17 */
  if (zf) goto L_7aba17;
L_7aba06: /* 7aba06: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba09: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba0f: xor ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba12: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba17: /* 7aba17: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba1a: push 0xace7f8 */
  { uint32_t v = 0xace7f8u; esp -= 4; W32(esp, v); }
/* 7aba1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba20: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba27: je 0x7aba3d */
  if (zf) goto L_7aba3d;
L_7aba29: /* 7aba29: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba2c: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba32: xor ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba38: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba3d: /* 7aba3d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7aba40: push 0xace804 */
  { uint32_t v = 0xace804u; esp -= 4; W32(esp, v); }
/* 7aba45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aba46: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba4b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba4d: je 0x7aba60 */
  if (zf) goto L_7aba60;
L_7aba4f: /* 7aba4f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba52: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba58: xor ecx, 0x20000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba5e: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba60: /* 7aba60: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7aba63: push 0xace81c */
  { uint32_t v = 0xace81cu; esp -= 4; W32(esp, v); }
/* 7aba68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aba69: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba6b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba70: je 0x7aba83 */
  if (zf) goto L_7aba83;
L_7aba72: /* 7aba72: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba75: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba7b: xor ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba81: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba83: /* 7aba83: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba86: push 0xace840 */
  { uint32_t v = 0xace840u; esp -= 4; W32(esp, v); }
/* 7aba8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba8c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba93: je 0x7abaa6 */
  if (zf) goto L_7abaa6;
L_7aba95: /* 7aba95: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba98: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba9e: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7abaa4: jmp 0x7abac7 */
  goto L_7abac7;
L_7abaa6: /* 7abaa6: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abaa9: push 0xace854 */
  { uint32_t v = 0xace854u; esp -= 4; W32(esp, v); }
/* 7abaae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abaaf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abab1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abab1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abab4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abab6: je 0x7abacd */
  if (zf) goto L_7abacd;
L_7abab8: /* 7abab8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ababb: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7abac1: xor ecx, 0x800000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
L_7abac7: /* 7abac7: mov dword ptr [eax + 0x534], ecx */
  W32((uint32_t)(eax + 0x534u), ecx);
L_7abacd: /* 7abacd: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7abad2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7abad5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abadb: /* 7abadb: xor ecx, ecx */
  ecx = 0;
/* 7abadd: mov dl, 0x40 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
/* 7abadf: nop  */
L_7abae0: /* 7abae0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abae3: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 7abae9: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7abaec: jge 0x7ab683 */
  if ((sf == of)) goto L_7ab683;
L_7abaf2: /* 7abaf2: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7abaf5: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7abaf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abafa: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abafc: /* 7abafc: test byte ptr [eax + 0x80], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb02: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abb04: /* 7abb04: mov byte ptr [eax + 0x6c], 0 */
  W8((uint32_t)(eax + 0x6cu), 0x0u);
L_7abb08: /* 7abb08: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7abb09: jmp 0x7abae0 */
  goto L_7abae0;
L_7abb0b: /* 7abb0b: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7abb0e: push 0xace864 */
  { uint32_t v = 0xace864u; esp -= 4; W32(esp, v); }
/* 7abb13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abb14: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abb16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abb16: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb1b: je 0x7abb5e */
  if (zf) goto L_7abb5e;
L_7abb1d: /* 7abb1d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7abb20: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abb21: call dword ptr [0xcfa3c4] */
  esp -= 4; W32(esp, 0x7abb27u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 7abb27: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb2a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb2c: je 0x7abb46 */
  if (zf) goto L_7abb46;
L_7abb2e: /* 7abb2e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7abb31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abb32: call dword ptr [0xcfa7b4] */
  esp -= 4; W32(esp, 0x7abb38u); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 7abb38: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb3b: mov dword ptr [esi + 0xf0], eax */
  W32((uint32_t)(esi + 0xf0u), eax);
/* 7abb41: jmp 0x7ab683 */
  goto L_7ab683;
L_7abb46: /* 7abb46: mov eax, dword ptr [esi + 0xf0] */
  eax = R32((uint32_t)(esi + 0xf0u));
/* 7abb4c: xor ecx, ecx */
  ecx = 0;
/* 7abb4e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb50: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7abb53: mov dword ptr [esi + 0xf0], ecx */
  W32((uint32_t)(esi + 0xf0u), ecx);
/* 7abb59: jmp 0x7ab683 */
  goto L_7ab683;
L_7abb5e: /* 7abb5e: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abb61: push 0xace87c */
  { uint32_t v = 0xace87cu; esp -= 4; W32(esp, v); }
/* 7abb66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abb67: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abb69u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abb69: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb6e: je 0x7abb8e */
  if (zf) goto L_7abb8e;
L_7abb70: /* 7abb70: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7abb73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abb74: call dword ptr [0xcfa778] */
  esp -= 4; W32(esp, 0x7abb7au); SPILL(); f_4e3d69(); if (g_unwind) return; /* Core!?appAtof@@YAMPBG@Z */ RELOAD();
/* 7abb7a: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7abb7d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7abb80: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb83: mov dword ptr [esi + 0xf4], ecx */
  W32((uint32_t)(esi + 0xf4u), ecx);
/* 7abb89: jmp 0x7ab683 */
  goto L_7ab683;
L_7abb8e: /* 7abb8e: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abb91: push 0xace89c */
  { uint32_t v = 0xace89cu; esp -= 4; W32(esp, v); }
/* 7abb96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abb97: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abb99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abb99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb9e: je 0x7abc43 */
  if (zf) goto L_7abc43;
L_7abba4: /* 7abba4: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7abba7: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 7abbad: mov dl, byte ptr [eax + 0x4c8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x4c8u))) & 0xffu);
/* 7abbb3: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7abbb5: jne 0x7ab65f */
  if (!zf) goto L_7ab65f;
L_7abbbb: /* 7abbbb: mov eax, dword ptr [ecx + 0x4c4] */
  eax = R32((uint32_t)(ecx + 0x4c4u));
/* 7abbc1: mov edx, eax */
  edx = eax;
/* 7abbc3: not edx */
  edx = ~edx;
/* 7abbc5: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7abbc7: and edx, 0x800000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7abbcd: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7abbcf: mov dword ptr [ecx + 0x4c4], edx */
  W32((uint32_t)(ecx + 0x4c4u), edx);
/* 7abbd5: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abbd8: test dword ptr [eax + 0x4c4], 0x800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4c4u))); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abbe2: je 0x7ab683 */
  if (zf) goto L_7ab683;
L_7abbe8: /* 7abbe8: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 7abbee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abbf0: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7abbf3: add eax, 0x588 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x588u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7abbf8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7abbfa: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7abbfd: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7abc00: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7abc03: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7abc06: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abc09: lea edx, [eax + 0x17c] */
  edx = (uint32_t)(eax + 0x17cu);
/* 7abc0f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7abc11: add eax, 0x594 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x594u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7abc16: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7abc18: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7abc1b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7abc1e: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7abc21: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7abc24: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7abc27: lea eax, [ecx + 0x594] */
  eax = (uint32_t)(ecx + 0x594u);
/* 7abc2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc2e: lea edx, [ecx + 0x588] */
  edx = (uint32_t)(ecx + 0x588u);
/* 7abc34: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abc35: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 7abc38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc39: call 0x6c204a */
  esp -= 4; W32(esp, 0x7abc3eu); SPILL(); f_6c204a(); if (g_unwind) return; RELOAD();
/* 7abc3e: jmp 0x7ab683 */
  goto L_7ab683;
L_7abc43: /* 7abc43: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7abc46: push 0xace8bc */
  { uint32_t v = 0xace8bcu; esp -= 4; W32(esp, v); }
/* 7abc4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abc4c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abc4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc4e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abc51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc53: je 0x7abc8e */
  if (zf) goto L_7abc8e;
L_7abc55: /* 7abc55: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* 7abc5b: xor edx, edx */
  edx = 0;
/* 7abc5d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc5f: mov eax, dword ptr [esi - 0x2c] */
  eax = R32((uint32_t)(esi + 0xffffffd4u));
/* 7abc62: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7abc65: lea edi, [esi - 0x2c] */
  edi = (uint32_t)(esi + 0xffffffd4u);
/* 7abc68: mov ecx, edi */
  ecx = edi;
/* 7abc6a: mov dword ptr [esi + 0xa0], edx */
  W32((uint32_t)(esi + 0xa0u), edx);
/* 7abc70: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x7abc73u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc73: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 7abc76: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abc78: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7abc7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7abc7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc7d: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 7abc80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc81: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 7abc84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7abc86: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7abc89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc89: jmp 0x7ab683 */
  goto L_7ab683;
L_7abc8e: /* 7abc8e: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7abc91: push 0xace8d8 */
  { uint32_t v = 0xace8d8u; esp -= 4; W32(esp, v); }
/* 7abc96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abc97: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abc99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abc9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc9e: je 0x7abcd8 */
  if (zf) goto L_7abcd8;
L_7abca0: /* 7abca0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7abca2: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7abca7: lea edx, [ebp - 0x834] */
  edx = (uint32_t)(ebp + 0xfffff7ccu);
/* 7abcad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abcae: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7abcb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abcb2: call dword ptr [0xcfa7a8] */
  esp -= 4; W32(esp, 0x7abcb8u); SPILL(); f_4e3256(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGPAGHH@Z */ RELOAD();
/* 7abcb8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abcbb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcbd: je 0x7ab683 */
  if (zf) goto L_7ab683;
L_7abcc3: /* 7abcc3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcc4: lea ecx, [ebp - 0x834] */
  ecx = (uint32_t)(ebp + 0xfffff7ccu);
/* 7abcca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abccb: lea ecx, [esi - 0x2c] */
  ecx = (uint32_t)(esi + 0xffffffd4u);
/* 7abcce: call 0x6c268f */
  esp -= 4; W32(esp, 0x7abcd3u); SPILL(); f_6c268f(); if (g_unwind) return; RELOAD();
/* 7abcd3: jmp 0x7ab683 */
  goto L_7ab683;
L_7abcd8: /* 7abcd8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7abcdb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcdd: je 0x7abcfb */
  if (zf) goto L_7abcfb;
L_7abcdf: /* 7abcdf: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abce2: mov eax, dword ptr [eax + 0x33c] */
  eax = R32((uint32_t)(eax + 0x33cu));
/* 7abce8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abcea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abceb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7abcee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abcf0: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x7abcf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abcf3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcf5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abcfb: /* 7abcfb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7abcfe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abd00: mov ecx, esi */
  ecx = esi;
/* 7abd02: call 0x6cc0f9 */
  esp -= 4; W32(esp, 0x7abd07u); SPILL(); f_6cc0f9(); if (g_unwind) return; RELOAD();
/* 7abd07: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7abd0a: xor edx, edx */
  edx = 0;
/* 7abd0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abd0e: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7abd11: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7abd12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7abd13: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7abd1a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7abd1b: mov eax, edx */
  eax = edx;
/* 7abd1d: mov esp, ebp */
  esp = ebp;
/* 7abd1f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7abd20: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ab79c(void) {
  LOAD_REGS();
  goto L_7ab79c;
L_7ab65f: /* 7ab65f: xor eax, eax */
  eax = 0;
/* 7ab661: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab664: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab66b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab66c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab66d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab66e: mov esp, ebp */
  esp = ebp;
/* 7ab670: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab671: ret 8 */
  esp += 12; SPILL(); return;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7ab79c: /* 7ab79c: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab79f: push 0xace70c */
  { uint32_t v = 0xace70cu; esp -= 4; W32(esp, v); }
/* 7ab7a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab7a5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab7a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab7a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab7aa: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab7ac: je 0x7ab7c6 */
  if (zf) goto L_7ab7c6;
L_7ab7ae: /* 7ab7ae: mov eax, dword ptr [esi + 0xe0] */
  eax = R32((uint32_t)(esi + 0xe0u));
/* 7ab7b4: xor ecx, ecx */
  ecx = 0;
/* 7ab7b6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab7b8: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ab7bb: mov dword ptr [esi + 0xe0], ecx */
  W32((uint32_t)(esi + 0xe0u), ecx);
/* 7ab7c1: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab7c6: /* 7ab7c6: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab7c9: push 0xace718 */
  { uint32_t v = 0xace718u; esp -= 4; W32(esp, v); }
/* 7ab7ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab7cf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab7d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab7d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab7d4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab7d6: je 0x7ab7f0 */
  if (zf) goto L_7ab7f0;
L_7ab7d8: /* 7ab7d8: mov ecx, dword ptr [esi + 0xd8] */
  ecx = R32((uint32_t)(esi + 0xd8u));
/* 7ab7de: xor eax, eax */
  eax = 0;
/* 7ab7e0: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab7e2: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ab7e5: mov dword ptr [esi + 0xd8], eax */
  W32((uint32_t)(esi + 0xd8u), eax);
/* 7ab7eb: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab7f0: /* 7ab7f0: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab7f3: push 0xace724 */
  { uint32_t v = 0xace724u; esp -= 4; W32(esp, v); }
/* 7ab7f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab7f9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab7fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab7fb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab7fe: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab800: je 0x7ab81a */
  if (zf) goto L_7ab81a;
L_7ab802: /* 7ab802: mov eax, dword ptr [esi + 0xec] */
  eax = R32((uint32_t)(esi + 0xecu));
/* 7ab808: xor edx, edx */
  edx = 0;
/* 7ab80a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab80c: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ab80f: mov dword ptr [esi + 0xec], edx */
  W32((uint32_t)(esi + 0xecu), edx);
/* 7ab815: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab81a: /* 7ab81a: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab81d: push 0xace738 */
  { uint32_t v = 0xace738u; esp -= 4; W32(esp, v); }
/* 7ab822: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab823: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab825u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab825: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab828: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab82a: jne 0x7ab842 */
  if (!zf) goto L_7ab842;
L_7ab82c: /* 7ab82c: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab82f: push 0xace748 */
  { uint32_t v = 0xace748u; esp -= 4; W32(esp, v); }
/* 7ab834: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab835: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab837u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab837: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab83a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab83c: je 0x7ab65f */
  if (zf) goto L_7ab65f;
L_7ab842: /* 7ab842: mov dword ptr [esi + 0xd8], ebx */
  W32((uint32_t)(esi + 0xd8u), ebx);
/* 7ab848: mov dword ptr [esi + 0xe4], ebx */
  W32((uint32_t)(esi + 0xe4u), ebx);
/* 7ab84e: mov dword ptr [esi + 0xdc], ebx */
  W32((uint32_t)(esi + 0xdcu), ebx);
/* 7ab854: mov dword ptr [esi + 0xec], ebx */
  W32((uint32_t)(esi + 0xecu), ebx);
/* 7ab85a: jmp 0x7ab683 */
  goto L_7ab683;
}

void f_7ab7c6(void) {
  LOAD_REGS();
  goto L_7ab7c6;
L_7ab65f: /* 7ab65f: xor eax, eax */
  eax = 0;
/* 7ab661: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab664: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab66b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab66c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab66d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab66e: mov esp, ebp */
  esp = ebp;
/* 7ab670: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab671: ret 8 */
  esp += 12; SPILL(); return;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7ab7c6: /* 7ab7c6: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab7c9: push 0xace718 */
  { uint32_t v = 0xace718u; esp -= 4; W32(esp, v); }
/* 7ab7ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab7cf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab7d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab7d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab7d4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab7d6: je 0x7ab7f0 */
  if (zf) goto L_7ab7f0;
L_7ab7d8: /* 7ab7d8: mov ecx, dword ptr [esi + 0xd8] */
  ecx = R32((uint32_t)(esi + 0xd8u));
/* 7ab7de: xor eax, eax */
  eax = 0;
/* 7ab7e0: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab7e2: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ab7e5: mov dword ptr [esi + 0xd8], eax */
  W32((uint32_t)(esi + 0xd8u), eax);
/* 7ab7eb: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab7f0: /* 7ab7f0: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab7f3: push 0xace724 */
  { uint32_t v = 0xace724u; esp -= 4; W32(esp, v); }
/* 7ab7f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab7f9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab7fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab7fb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab7fe: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab800: je 0x7ab81a */
  if (zf) goto L_7ab81a;
L_7ab802: /* 7ab802: mov eax, dword ptr [esi + 0xec] */
  eax = R32((uint32_t)(esi + 0xecu));
/* 7ab808: xor edx, edx */
  edx = 0;
/* 7ab80a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab80c: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ab80f: mov dword ptr [esi + 0xec], edx */
  W32((uint32_t)(esi + 0xecu), edx);
/* 7ab815: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab81a: /* 7ab81a: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab81d: push 0xace738 */
  { uint32_t v = 0xace738u; esp -= 4; W32(esp, v); }
/* 7ab822: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab823: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab825u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab825: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab828: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab82a: jne 0x7ab842 */
  if (!zf) goto L_7ab842;
L_7ab82c: /* 7ab82c: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab82f: push 0xace748 */
  { uint32_t v = 0xace748u; esp -= 4; W32(esp, v); }
/* 7ab834: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab835: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab837u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab837: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab83a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab83c: je 0x7ab65f */
  if (zf) goto L_7ab65f;
L_7ab842: /* 7ab842: mov dword ptr [esi + 0xd8], ebx */
  W32((uint32_t)(esi + 0xd8u), ebx);
/* 7ab848: mov dword ptr [esi + 0xe4], ebx */
  W32((uint32_t)(esi + 0xe4u), ebx);
/* 7ab84e: mov dword ptr [esi + 0xdc], ebx */
  W32((uint32_t)(esi + 0xdcu), ebx);
/* 7ab854: mov dword ptr [esi + 0xec], ebx */
  W32((uint32_t)(esi + 0xecu), ebx);
/* 7ab85a: jmp 0x7ab683 */
  goto L_7ab683;
}

void f_7ab7f0(void) {
  LOAD_REGS();
  goto L_7ab7f0;
L_7ab65f: /* 7ab65f: xor eax, eax */
  eax = 0;
/* 7ab661: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab664: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab66b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab66c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab66d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab66e: mov esp, ebp */
  esp = ebp;
/* 7ab670: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab671: ret 8 */
  esp += 12; SPILL(); return;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7ab7f0: /* 7ab7f0: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab7f3: push 0xace724 */
  { uint32_t v = 0xace724u; esp -= 4; W32(esp, v); }
/* 7ab7f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab7f9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab7fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab7fb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab7fe: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab800: je 0x7ab81a */
  if (zf) goto L_7ab81a;
L_7ab802: /* 7ab802: mov eax, dword ptr [esi + 0xec] */
  eax = R32((uint32_t)(esi + 0xecu));
/* 7ab808: xor edx, edx */
  edx = 0;
/* 7ab80a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab80c: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ab80f: mov dword ptr [esi + 0xec], edx */
  W32((uint32_t)(esi + 0xecu), edx);
/* 7ab815: jmp 0x7ab683 */
  goto L_7ab683;
L_7ab81a: /* 7ab81a: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab81d: push 0xace738 */
  { uint32_t v = 0xace738u; esp -= 4; W32(esp, v); }
/* 7ab822: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab823: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab825u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab825: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab828: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab82a: jne 0x7ab842 */
  if (!zf) goto L_7ab842;
L_7ab82c: /* 7ab82c: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab82f: push 0xace748 */
  { uint32_t v = 0xace748u; esp -= 4; W32(esp, v); }
/* 7ab834: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab835: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab837u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab837: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab83a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab83c: je 0x7ab65f */
  if (zf) goto L_7ab65f;
L_7ab842: /* 7ab842: mov dword ptr [esi + 0xd8], ebx */
  W32((uint32_t)(esi + 0xd8u), ebx);
/* 7ab848: mov dword ptr [esi + 0xe4], ebx */
  W32((uint32_t)(esi + 0xe4u), ebx);
/* 7ab84e: mov dword ptr [esi + 0xdc], ebx */
  W32((uint32_t)(esi + 0xdcu), ebx);
/* 7ab854: mov dword ptr [esi + 0xec], ebx */
  W32((uint32_t)(esi + 0xecu), ebx);
/* 7ab85a: jmp 0x7ab683 */
  goto L_7ab683;
}

void f_7ab81a(void) {
  LOAD_REGS();
  goto L_7ab81a;
L_7ab65f: /* 7ab65f: xor eax, eax */
  eax = 0;
/* 7ab661: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab664: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab66b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab66c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab66d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab66e: mov esp, ebp */
  esp = ebp;
/* 7ab670: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab671: ret 8 */
  esp += 12; SPILL(); return;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7ab81a: /* 7ab81a: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab81d: push 0xace738 */
  { uint32_t v = 0xace738u; esp -= 4; W32(esp, v); }
/* 7ab822: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab823: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab825u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab825: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab828: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab82a: jne 0x7ab842 */
  if (!zf) goto L_7ab842;
L_7ab82c: /* 7ab82c: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab82f: push 0xace748 */
  { uint32_t v = 0xace748u; esp -= 4; W32(esp, v); }
/* 7ab834: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab835: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab837u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab837: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab83a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab83c: je 0x7ab65f */
  if (zf) goto L_7ab65f;
L_7ab842: /* 7ab842: mov dword ptr [esi + 0xd8], ebx */
  W32((uint32_t)(esi + 0xd8u), ebx);
/* 7ab848: mov dword ptr [esi + 0xe4], ebx */
  W32((uint32_t)(esi + 0xe4u), ebx);
/* 7ab84e: mov dword ptr [esi + 0xdc], ebx */
  W32((uint32_t)(esi + 0xdcu), ebx);
/* 7ab854: mov dword ptr [esi + 0xec], ebx */
  W32((uint32_t)(esi + 0xecu), ebx);
/* 7ab85a: jmp 0x7ab683 */
  goto L_7ab683;
}

void f_7ab85f(void) {
  LOAD_REGS();
  goto L_7ab85f;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7ab85f: /* 7ab85f: mov eax, dword ptr [esi + 0xe4] */
  eax = R32((uint32_t)(esi + 0xe4u));
/* 7ab865: xor edx, edx */
  edx = 0;
/* 7ab867: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ab869: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ab86c: mov dword ptr [esi + 0xe4], edx */
  W32((uint32_t)(esi + 0xe4u), edx);
/* 7ab872: jmp 0x7ab683 */
  goto L_7ab683;
}

void f_7ab877(void) {
  LOAD_REGS();
  goto L_7ab877;
L_7ab65f: /* 7ab65f: xor eax, eax */
  eax = 0;
/* 7ab661: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab664: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab66b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab66c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab66d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab66e: mov esp, ebp */
  esp = ebp;
/* 7ab670: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab671: ret 8 */
  esp += 12; SPILL(); return;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7ab877: /* 7ab877: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab87a: push 0xace754 */
  { uint32_t v = 0xace754u; esp -= 4; W32(esp, v); }
/* 7ab87f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab880: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab882u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab882: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab885: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab887: je 0x7abb0b */
  if (zf) goto L_7abb0b;
L_7ab88d: /* 7ab88d: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7ab890: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 7ab896: mov al, byte ptr [edx + 0x4c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x4c8u))) & 0xffu);
/* 7ab89c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab89e: jne 0x7ab65f */
  if (!zf) goto L_7ab65f;
L_7ab8a4: /* 7ab8a4: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab8a7: push 0xace760 */
  { uint32_t v = 0xace760u; esp -= 4; W32(esp, v); }
/* 7ab8ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab8ad: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab8afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab8af: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab8b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab8b4: je 0x7ab8c7 */
  if (zf) goto L_7ab8c7;
L_7ab8b6: /* 7ab8b6: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab8b9: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab8bf: xor ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab8c2: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab8c7: /* 7ab8c7: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab8ca: push 0xace770 */
  { uint32_t v = 0xace770u; esp -= 4; W32(esp, v); }
/* 7ab8cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab8d0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab8d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab8d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab8d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab8d7: je 0x7ab8ed */
  if (zf) goto L_7ab8ed;
L_7ab8d9: /* 7ab8d9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab8dc: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab8e2: xor ecx, 0x4000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab8e8: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab8ed: /* 7ab8ed: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab8f0: push 0xace784 */
  { uint32_t v = 0xace784u; esp -= 4; W32(esp, v); }
/* 7ab8f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab8f6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab8f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab8f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab8fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab8fd: je 0x7ab913 */
  if (zf) goto L_7ab913;
L_7ab8ff: /* 7ab8ff: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab902: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab908: xor ecx, 0x8000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab90e: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab913: /* 7ab913: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab916: push 0xace7a0 */
  { uint32_t v = 0xace7a0u; esp -= 4; W32(esp, v); }
/* 7ab91b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab91c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab91eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab91e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab921: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab923: je 0x7ab939 */
  if (zf) goto L_7ab939;
L_7ab925: /* 7ab925: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab928: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab92e: xor ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab934: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab939: /* 7ab939: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab93c: push 0xace7b0 */
  { uint32_t v = 0xace7b0u; esp -= 4; W32(esp, v); }
/* 7ab941: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab942: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab944u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab944: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab947: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab949: je 0x7ab95f */
  if (zf) goto L_7ab95f;
L_7ab94b: /* 7ab94b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab94e: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab954: xor ecx, 0x80000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab95a: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab95f: /* 7ab95f: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab962: push 0xace7b8 */
  { uint32_t v = 0xace7b8u; esp -= 4; W32(esp, v); }
/* 7ab967: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab968: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab96au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab96a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab96d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab96f: je 0x7ab982 */
  if (zf) goto L_7ab982;
L_7ab971: /* 7ab971: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab974: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab97a: xor ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab97d: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab982: /* 7ab982: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab985: push 0xace7c0 */
  { uint32_t v = 0xace7c0u; esp -= 4; W32(esp, v); }
/* 7ab98a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab98b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab98du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab98d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab990: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab992: je 0x7ab9a8 */
  if (zf) goto L_7ab9a8;
L_7ab994: /* 7ab994: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab997: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab99d: xor ecx, 0x400000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9a3: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9a8: /* 7ab9a8: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab9ab: push 0xace7d0 */
  { uint32_t v = 0xace7d0u; esp -= 4; W32(esp, v); }
/* 7ab9b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab9b1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab9b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab9b8: je 0x7ab9ce */
  if (zf) goto L_7ab9ce;
L_7ab9ba: /* 7ab9ba: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab9bd: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab9c3: xor ecx, 0x1000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9c9: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9ce: /* 7ab9ce: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab9d1: push 0xace7e4 */
  { uint32_t v = 0xace7e4u; esp -= 4; W32(esp, v); }
/* 7ab9d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab9d7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab9dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab9de: je 0x7ab9f4 */
  if (zf) goto L_7ab9f4;
L_7ab9e0: /* 7ab9e0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab9e3: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab9e9: xor ecx, 0x2000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9ef: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9f4: /* 7ab9f4: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab9f7: push 0xace7ec */
  { uint32_t v = 0xace7ecu; esp -= 4; W32(esp, v); }
/* 7ab9fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab9fd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba04: je 0x7aba17 */
  if (zf) goto L_7aba17;
L_7aba06: /* 7aba06: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba09: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba0f: xor ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba12: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba17: /* 7aba17: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba1a: push 0xace7f8 */
  { uint32_t v = 0xace7f8u; esp -= 4; W32(esp, v); }
/* 7aba1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba20: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba27: je 0x7aba3d */
  if (zf) goto L_7aba3d;
L_7aba29: /* 7aba29: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba2c: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba32: xor ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba38: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba3d: /* 7aba3d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7aba40: push 0xace804 */
  { uint32_t v = 0xace804u; esp -= 4; W32(esp, v); }
/* 7aba45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aba46: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba4b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba4d: je 0x7aba60 */
  if (zf) goto L_7aba60;
L_7aba4f: /* 7aba4f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba52: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba58: xor ecx, 0x20000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba5e: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba60: /* 7aba60: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7aba63: push 0xace81c */
  { uint32_t v = 0xace81cu; esp -= 4; W32(esp, v); }
/* 7aba68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aba69: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba6b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba70: je 0x7aba83 */
  if (zf) goto L_7aba83;
L_7aba72: /* 7aba72: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba75: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba7b: xor ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba81: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba83: /* 7aba83: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba86: push 0xace840 */
  { uint32_t v = 0xace840u; esp -= 4; W32(esp, v); }
/* 7aba8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba8c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba93: je 0x7abaa6 */
  if (zf) goto L_7abaa6;
L_7aba95: /* 7aba95: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba98: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba9e: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7abaa4: jmp 0x7abac7 */
  goto L_7abac7;
L_7abaa6: /* 7abaa6: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abaa9: push 0xace854 */
  { uint32_t v = 0xace854u; esp -= 4; W32(esp, v); }
/* 7abaae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abaaf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abab1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abab1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abab4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abab6: je 0x7abacd */
  if (zf) goto L_7abacd;
L_7abab8: /* 7abab8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ababb: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7abac1: xor ecx, 0x800000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
L_7abac7: /* 7abac7: mov dword ptr [eax + 0x534], ecx */
  W32((uint32_t)(eax + 0x534u), ecx);
L_7abacd: /* 7abacd: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7abad2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7abad5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abadb: /* 7abadb: xor ecx, ecx */
  ecx = 0;
/* 7abadd: mov dl, 0x40 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
/* 7abadf: nop  */
L_7abae0: /* 7abae0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abae3: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 7abae9: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7abaec: jge 0x7ab683 */
  if ((sf == of)) goto L_7ab683;
L_7abaf2: /* 7abaf2: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7abaf5: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7abaf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abafa: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abafc: /* 7abafc: test byte ptr [eax + 0x80], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb02: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abb04: /* 7abb04: mov byte ptr [eax + 0x6c], 0 */
  W8((uint32_t)(eax + 0x6cu), 0x0u);
L_7abb08: /* 7abb08: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7abb09: jmp 0x7abae0 */
  goto L_7abae0;
L_7abb0b: /* 7abb0b: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7abb0e: push 0xace864 */
  { uint32_t v = 0xace864u; esp -= 4; W32(esp, v); }
/* 7abb13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abb14: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abb16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abb16: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb1b: je 0x7abb5e */
  if (zf) goto L_7abb5e;
L_7abb1d: /* 7abb1d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7abb20: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abb21: call dword ptr [0xcfa3c4] */
  esp -= 4; W32(esp, 0x7abb27u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 7abb27: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb2a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb2c: je 0x7abb46 */
  if (zf) goto L_7abb46;
L_7abb2e: /* 7abb2e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7abb31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abb32: call dword ptr [0xcfa7b4] */
  esp -= 4; W32(esp, 0x7abb38u); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 7abb38: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb3b: mov dword ptr [esi + 0xf0], eax */
  W32((uint32_t)(esi + 0xf0u), eax);
/* 7abb41: jmp 0x7ab683 */
  goto L_7ab683;
L_7abb46: /* 7abb46: mov eax, dword ptr [esi + 0xf0] */
  eax = R32((uint32_t)(esi + 0xf0u));
/* 7abb4c: xor ecx, ecx */
  ecx = 0;
/* 7abb4e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb50: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7abb53: mov dword ptr [esi + 0xf0], ecx */
  W32((uint32_t)(esi + 0xf0u), ecx);
/* 7abb59: jmp 0x7ab683 */
  goto L_7ab683;
L_7abb5e: /* 7abb5e: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abb61: push 0xace87c */
  { uint32_t v = 0xace87cu; esp -= 4; W32(esp, v); }
/* 7abb66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abb67: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abb69u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abb69: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb6e: je 0x7abb8e */
  if (zf) goto L_7abb8e;
L_7abb70: /* 7abb70: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7abb73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abb74: call dword ptr [0xcfa778] */
  esp -= 4; W32(esp, 0x7abb7au); SPILL(); f_4e3d69(); if (g_unwind) return; /* Core!?appAtof@@YAMPBG@Z */ RELOAD();
/* 7abb7a: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7abb7d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7abb80: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb83: mov dword ptr [esi + 0xf4], ecx */
  W32((uint32_t)(esi + 0xf4u), ecx);
/* 7abb89: jmp 0x7ab683 */
  goto L_7ab683;
L_7abb8e: /* 7abb8e: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abb91: push 0xace89c */
  { uint32_t v = 0xace89cu; esp -= 4; W32(esp, v); }
/* 7abb96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abb97: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abb99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abb99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb9e: je 0x7abc43 */
  if (zf) goto L_7abc43;
L_7abba4: /* 7abba4: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7abba7: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 7abbad: mov dl, byte ptr [eax + 0x4c8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x4c8u))) & 0xffu);
/* 7abbb3: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7abbb5: jne 0x7ab65f */
  if (!zf) goto L_7ab65f;
L_7abbbb: /* 7abbbb: mov eax, dword ptr [ecx + 0x4c4] */
  eax = R32((uint32_t)(ecx + 0x4c4u));
/* 7abbc1: mov edx, eax */
  edx = eax;
/* 7abbc3: not edx */
  edx = ~edx;
/* 7abbc5: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7abbc7: and edx, 0x800000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7abbcd: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7abbcf: mov dword ptr [ecx + 0x4c4], edx */
  W32((uint32_t)(ecx + 0x4c4u), edx);
/* 7abbd5: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abbd8: test dword ptr [eax + 0x4c4], 0x800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4c4u))); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abbe2: je 0x7ab683 */
  if (zf) goto L_7ab683;
L_7abbe8: /* 7abbe8: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 7abbee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abbf0: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7abbf3: add eax, 0x588 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x588u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7abbf8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7abbfa: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7abbfd: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7abc00: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7abc03: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7abc06: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abc09: lea edx, [eax + 0x17c] */
  edx = (uint32_t)(eax + 0x17cu);
/* 7abc0f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7abc11: add eax, 0x594 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x594u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7abc16: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7abc18: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7abc1b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7abc1e: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7abc21: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7abc24: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7abc27: lea eax, [ecx + 0x594] */
  eax = (uint32_t)(ecx + 0x594u);
/* 7abc2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc2e: lea edx, [ecx + 0x588] */
  edx = (uint32_t)(ecx + 0x588u);
/* 7abc34: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abc35: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 7abc38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc39: call 0x6c204a */
  esp -= 4; W32(esp, 0x7abc3eu); SPILL(); f_6c204a(); if (g_unwind) return; RELOAD();
/* 7abc3e: jmp 0x7ab683 */
  goto L_7ab683;
L_7abc43: /* 7abc43: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7abc46: push 0xace8bc */
  { uint32_t v = 0xace8bcu; esp -= 4; W32(esp, v); }
/* 7abc4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abc4c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abc4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc4e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abc51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc53: je 0x7abc8e */
  if (zf) goto L_7abc8e;
L_7abc55: /* 7abc55: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* 7abc5b: xor edx, edx */
  edx = 0;
/* 7abc5d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc5f: mov eax, dword ptr [esi - 0x2c] */
  eax = R32((uint32_t)(esi + 0xffffffd4u));
/* 7abc62: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7abc65: lea edi, [esi - 0x2c] */
  edi = (uint32_t)(esi + 0xffffffd4u);
/* 7abc68: mov ecx, edi */
  ecx = edi;
/* 7abc6a: mov dword ptr [esi + 0xa0], edx */
  W32((uint32_t)(esi + 0xa0u), edx);
/* 7abc70: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x7abc73u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc73: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 7abc76: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abc78: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7abc7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7abc7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc7d: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 7abc80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc81: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 7abc84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7abc86: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7abc89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc89: jmp 0x7ab683 */
  goto L_7ab683;
L_7abc8e: /* 7abc8e: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7abc91: push 0xace8d8 */
  { uint32_t v = 0xace8d8u; esp -= 4; W32(esp, v); }
/* 7abc96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abc97: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abc99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abc9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc9e: je 0x7abcd8 */
  if (zf) goto L_7abcd8;
L_7abca0: /* 7abca0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7abca2: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7abca7: lea edx, [ebp - 0x834] */
  edx = (uint32_t)(ebp + 0xfffff7ccu);
/* 7abcad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abcae: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7abcb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abcb2: call dword ptr [0xcfa7a8] */
  esp -= 4; W32(esp, 0x7abcb8u); SPILL(); f_4e3256(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGPAGHH@Z */ RELOAD();
/* 7abcb8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abcbb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcbd: je 0x7ab683 */
  if (zf) goto L_7ab683;
L_7abcc3: /* 7abcc3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcc4: lea ecx, [ebp - 0x834] */
  ecx = (uint32_t)(ebp + 0xfffff7ccu);
/* 7abcca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abccb: lea ecx, [esi - 0x2c] */
  ecx = (uint32_t)(esi + 0xffffffd4u);
/* 7abcce: call 0x6c268f */
  esp -= 4; W32(esp, 0x7abcd3u); SPILL(); f_6c268f(); if (g_unwind) return; RELOAD();
/* 7abcd3: jmp 0x7ab683 */
  goto L_7ab683;
L_7abcd8: /* 7abcd8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7abcdb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcdd: je 0x7abcfb */
  if (zf) goto L_7abcfb;
L_7abcdf: /* 7abcdf: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abce2: mov eax, dword ptr [eax + 0x33c] */
  eax = R32((uint32_t)(eax + 0x33cu));
/* 7abce8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abcea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abceb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7abcee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abcf0: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x7abcf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abcf3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcf5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abcfb: /* 7abcfb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7abcfe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abd00: mov ecx, esi */
  ecx = esi;
/* 7abd02: call 0x6cc0f9 */
  esp -= 4; W32(esp, 0x7abd07u); SPILL(); f_6cc0f9(); if (g_unwind) return; RELOAD();
/* 7abd07: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7abd0a: xor edx, edx */
  edx = 0;
/* 7abd0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abd0e: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7abd11: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7abd12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7abd13: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7abd1a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7abd1b: mov eax, edx */
  eax = edx;
/* 7abd1d: mov esp, ebp */
  esp = ebp;
/* 7abd1f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7abd20: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ab8c7(void) {
  LOAD_REGS();
  goto L_7ab8c7;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7ab8c7: /* 7ab8c7: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab8ca: push 0xace770 */
  { uint32_t v = 0xace770u; esp -= 4; W32(esp, v); }
/* 7ab8cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab8d0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab8d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab8d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab8d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab8d7: je 0x7ab8ed */
  if (zf) goto L_7ab8ed;
L_7ab8d9: /* 7ab8d9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab8dc: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab8e2: xor ecx, 0x4000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab8e8: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab8ed: /* 7ab8ed: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab8f0: push 0xace784 */
  { uint32_t v = 0xace784u; esp -= 4; W32(esp, v); }
/* 7ab8f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab8f6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab8f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab8f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab8fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab8fd: je 0x7ab913 */
  if (zf) goto L_7ab913;
L_7ab8ff: /* 7ab8ff: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab902: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab908: xor ecx, 0x8000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab90e: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab913: /* 7ab913: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab916: push 0xace7a0 */
  { uint32_t v = 0xace7a0u; esp -= 4; W32(esp, v); }
/* 7ab91b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab91c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab91eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab91e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab921: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab923: je 0x7ab939 */
  if (zf) goto L_7ab939;
L_7ab925: /* 7ab925: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab928: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab92e: xor ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab934: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab939: /* 7ab939: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab93c: push 0xace7b0 */
  { uint32_t v = 0xace7b0u; esp -= 4; W32(esp, v); }
/* 7ab941: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab942: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab944u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab944: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab947: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab949: je 0x7ab95f */
  if (zf) goto L_7ab95f;
L_7ab94b: /* 7ab94b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab94e: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab954: xor ecx, 0x80000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab95a: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab95f: /* 7ab95f: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab962: push 0xace7b8 */
  { uint32_t v = 0xace7b8u; esp -= 4; W32(esp, v); }
/* 7ab967: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab968: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab96au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab96a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab96d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab96f: je 0x7ab982 */
  if (zf) goto L_7ab982;
L_7ab971: /* 7ab971: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab974: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab97a: xor ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab97d: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab982: /* 7ab982: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab985: push 0xace7c0 */
  { uint32_t v = 0xace7c0u; esp -= 4; W32(esp, v); }
/* 7ab98a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab98b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab98du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab98d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab990: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab992: je 0x7ab9a8 */
  if (zf) goto L_7ab9a8;
L_7ab994: /* 7ab994: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab997: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab99d: xor ecx, 0x400000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9a3: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9a8: /* 7ab9a8: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab9ab: push 0xace7d0 */
  { uint32_t v = 0xace7d0u; esp -= 4; W32(esp, v); }
/* 7ab9b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab9b1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab9b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab9b8: je 0x7ab9ce */
  if (zf) goto L_7ab9ce;
L_7ab9ba: /* 7ab9ba: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab9bd: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab9c3: xor ecx, 0x1000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9c9: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9ce: /* 7ab9ce: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab9d1: push 0xace7e4 */
  { uint32_t v = 0xace7e4u; esp -= 4; W32(esp, v); }
/* 7ab9d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab9d7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab9dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab9de: je 0x7ab9f4 */
  if (zf) goto L_7ab9f4;
L_7ab9e0: /* 7ab9e0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab9e3: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab9e9: xor ecx, 0x2000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9ef: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9f4: /* 7ab9f4: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab9f7: push 0xace7ec */
  { uint32_t v = 0xace7ecu; esp -= 4; W32(esp, v); }
/* 7ab9fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab9fd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba04: je 0x7aba17 */
  if (zf) goto L_7aba17;
L_7aba06: /* 7aba06: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba09: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba0f: xor ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba12: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba17: /* 7aba17: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba1a: push 0xace7f8 */
  { uint32_t v = 0xace7f8u; esp -= 4; W32(esp, v); }
/* 7aba1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba20: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba27: je 0x7aba3d */
  if (zf) goto L_7aba3d;
L_7aba29: /* 7aba29: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba2c: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba32: xor ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba38: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba3d: /* 7aba3d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7aba40: push 0xace804 */
  { uint32_t v = 0xace804u; esp -= 4; W32(esp, v); }
/* 7aba45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aba46: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba4b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba4d: je 0x7aba60 */
  if (zf) goto L_7aba60;
L_7aba4f: /* 7aba4f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba52: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba58: xor ecx, 0x20000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba5e: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba60: /* 7aba60: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7aba63: push 0xace81c */
  { uint32_t v = 0xace81cu; esp -= 4; W32(esp, v); }
/* 7aba68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aba69: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba6b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba70: je 0x7aba83 */
  if (zf) goto L_7aba83;
L_7aba72: /* 7aba72: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba75: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba7b: xor ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba81: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba83: /* 7aba83: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba86: push 0xace840 */
  { uint32_t v = 0xace840u; esp -= 4; W32(esp, v); }
/* 7aba8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba8c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba93: je 0x7abaa6 */
  if (zf) goto L_7abaa6;
L_7aba95: /* 7aba95: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba98: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba9e: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7abaa4: jmp 0x7abac7 */
  goto L_7abac7;
L_7abaa6: /* 7abaa6: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abaa9: push 0xace854 */
  { uint32_t v = 0xace854u; esp -= 4; W32(esp, v); }
/* 7abaae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abaaf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abab1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abab1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abab4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abab6: je 0x7abacd */
  if (zf) goto L_7abacd;
L_7abab8: /* 7abab8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ababb: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7abac1: xor ecx, 0x800000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
L_7abac7: /* 7abac7: mov dword ptr [eax + 0x534], ecx */
  W32((uint32_t)(eax + 0x534u), ecx);
L_7abacd: /* 7abacd: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7abad2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7abad5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abadb: /* 7abadb: xor ecx, ecx */
  ecx = 0;
/* 7abadd: mov dl, 0x40 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
/* 7abadf: nop  */
L_7abae0: /* 7abae0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abae3: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 7abae9: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7abaec: jge 0x7ab683 */
  if ((sf == of)) goto L_7ab683;
L_7abaf2: /* 7abaf2: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7abaf5: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7abaf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abafa: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abafc: /* 7abafc: test byte ptr [eax + 0x80], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb02: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abb04: /* 7abb04: mov byte ptr [eax + 0x6c], 0 */
  W8((uint32_t)(eax + 0x6cu), 0x0u);
L_7abb08: /* 7abb08: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7abb09: jmp 0x7abae0 */
  goto L_7abae0;
}

void f_7ab8ed(void) {
  LOAD_REGS();
  goto L_7ab8ed;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7ab8ed: /* 7ab8ed: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab8f0: push 0xace784 */
  { uint32_t v = 0xace784u; esp -= 4; W32(esp, v); }
/* 7ab8f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab8f6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab8f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab8f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab8fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab8fd: je 0x7ab913 */
  if (zf) goto L_7ab913;
L_7ab8ff: /* 7ab8ff: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab902: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab908: xor ecx, 0x8000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab90e: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab913: /* 7ab913: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab916: push 0xace7a0 */
  { uint32_t v = 0xace7a0u; esp -= 4; W32(esp, v); }
/* 7ab91b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab91c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab91eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab91e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab921: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab923: je 0x7ab939 */
  if (zf) goto L_7ab939;
L_7ab925: /* 7ab925: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab928: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab92e: xor ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab934: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab939: /* 7ab939: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab93c: push 0xace7b0 */
  { uint32_t v = 0xace7b0u; esp -= 4; W32(esp, v); }
/* 7ab941: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab942: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab944u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab944: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab947: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab949: je 0x7ab95f */
  if (zf) goto L_7ab95f;
L_7ab94b: /* 7ab94b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab94e: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab954: xor ecx, 0x80000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab95a: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab95f: /* 7ab95f: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab962: push 0xace7b8 */
  { uint32_t v = 0xace7b8u; esp -= 4; W32(esp, v); }
/* 7ab967: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab968: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab96au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab96a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab96d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab96f: je 0x7ab982 */
  if (zf) goto L_7ab982;
L_7ab971: /* 7ab971: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab974: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab97a: xor ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab97d: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab982: /* 7ab982: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab985: push 0xace7c0 */
  { uint32_t v = 0xace7c0u; esp -= 4; W32(esp, v); }
/* 7ab98a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab98b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab98du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab98d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab990: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab992: je 0x7ab9a8 */
  if (zf) goto L_7ab9a8;
L_7ab994: /* 7ab994: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab997: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab99d: xor ecx, 0x400000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9a3: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9a8: /* 7ab9a8: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab9ab: push 0xace7d0 */
  { uint32_t v = 0xace7d0u; esp -= 4; W32(esp, v); }
/* 7ab9b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab9b1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab9b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab9b8: je 0x7ab9ce */
  if (zf) goto L_7ab9ce;
L_7ab9ba: /* 7ab9ba: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab9bd: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab9c3: xor ecx, 0x1000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9c9: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9ce: /* 7ab9ce: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab9d1: push 0xace7e4 */
  { uint32_t v = 0xace7e4u; esp -= 4; W32(esp, v); }
/* 7ab9d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab9d7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab9dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab9de: je 0x7ab9f4 */
  if (zf) goto L_7ab9f4;
L_7ab9e0: /* 7ab9e0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab9e3: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab9e9: xor ecx, 0x2000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9ef: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9f4: /* 7ab9f4: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab9f7: push 0xace7ec */
  { uint32_t v = 0xace7ecu; esp -= 4; W32(esp, v); }
/* 7ab9fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab9fd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba04: je 0x7aba17 */
  if (zf) goto L_7aba17;
L_7aba06: /* 7aba06: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba09: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba0f: xor ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba12: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba17: /* 7aba17: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba1a: push 0xace7f8 */
  { uint32_t v = 0xace7f8u; esp -= 4; W32(esp, v); }
/* 7aba1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba20: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba27: je 0x7aba3d */
  if (zf) goto L_7aba3d;
L_7aba29: /* 7aba29: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba2c: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba32: xor ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba38: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba3d: /* 7aba3d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7aba40: push 0xace804 */
  { uint32_t v = 0xace804u; esp -= 4; W32(esp, v); }
/* 7aba45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aba46: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba4b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba4d: je 0x7aba60 */
  if (zf) goto L_7aba60;
L_7aba4f: /* 7aba4f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba52: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba58: xor ecx, 0x20000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba5e: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba60: /* 7aba60: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7aba63: push 0xace81c */
  { uint32_t v = 0xace81cu; esp -= 4; W32(esp, v); }
/* 7aba68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aba69: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba6b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba70: je 0x7aba83 */
  if (zf) goto L_7aba83;
L_7aba72: /* 7aba72: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba75: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba7b: xor ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba81: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba83: /* 7aba83: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba86: push 0xace840 */
  { uint32_t v = 0xace840u; esp -= 4; W32(esp, v); }
/* 7aba8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba8c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba93: je 0x7abaa6 */
  if (zf) goto L_7abaa6;
L_7aba95: /* 7aba95: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba98: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba9e: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7abaa4: jmp 0x7abac7 */
  goto L_7abac7;
L_7abaa6: /* 7abaa6: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abaa9: push 0xace854 */
  { uint32_t v = 0xace854u; esp -= 4; W32(esp, v); }
/* 7abaae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abaaf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abab1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abab1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abab4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abab6: je 0x7abacd */
  if (zf) goto L_7abacd;
L_7abab8: /* 7abab8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ababb: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7abac1: xor ecx, 0x800000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
L_7abac7: /* 7abac7: mov dword ptr [eax + 0x534], ecx */
  W32((uint32_t)(eax + 0x534u), ecx);
L_7abacd: /* 7abacd: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7abad2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7abad5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abadb: /* 7abadb: xor ecx, ecx */
  ecx = 0;
/* 7abadd: mov dl, 0x40 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
/* 7abadf: nop  */
L_7abae0: /* 7abae0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abae3: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 7abae9: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7abaec: jge 0x7ab683 */
  if ((sf == of)) goto L_7ab683;
L_7abaf2: /* 7abaf2: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7abaf5: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7abaf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abafa: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abafc: /* 7abafc: test byte ptr [eax + 0x80], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb02: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abb04: /* 7abb04: mov byte ptr [eax + 0x6c], 0 */
  W8((uint32_t)(eax + 0x6cu), 0x0u);
L_7abb08: /* 7abb08: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7abb09: jmp 0x7abae0 */
  goto L_7abae0;
}

void f_7ab913(void) {
  LOAD_REGS();
  goto L_7ab913;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7ab913: /* 7ab913: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab916: push 0xace7a0 */
  { uint32_t v = 0xace7a0u; esp -= 4; W32(esp, v); }
/* 7ab91b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab91c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab91eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab91e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab921: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab923: je 0x7ab939 */
  if (zf) goto L_7ab939;
L_7ab925: /* 7ab925: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab928: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab92e: xor ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab934: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab939: /* 7ab939: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab93c: push 0xace7b0 */
  { uint32_t v = 0xace7b0u; esp -= 4; W32(esp, v); }
/* 7ab941: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab942: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab944u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab944: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab947: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab949: je 0x7ab95f */
  if (zf) goto L_7ab95f;
L_7ab94b: /* 7ab94b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab94e: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab954: xor ecx, 0x80000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab95a: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab95f: /* 7ab95f: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab962: push 0xace7b8 */
  { uint32_t v = 0xace7b8u; esp -= 4; W32(esp, v); }
/* 7ab967: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab968: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab96au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab96a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab96d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab96f: je 0x7ab982 */
  if (zf) goto L_7ab982;
L_7ab971: /* 7ab971: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab974: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab97a: xor ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab97d: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab982: /* 7ab982: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab985: push 0xace7c0 */
  { uint32_t v = 0xace7c0u; esp -= 4; W32(esp, v); }
/* 7ab98a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab98b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab98du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab98d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab990: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab992: je 0x7ab9a8 */
  if (zf) goto L_7ab9a8;
L_7ab994: /* 7ab994: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab997: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab99d: xor ecx, 0x400000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9a3: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9a8: /* 7ab9a8: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab9ab: push 0xace7d0 */
  { uint32_t v = 0xace7d0u; esp -= 4; W32(esp, v); }
/* 7ab9b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab9b1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab9b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab9b8: je 0x7ab9ce */
  if (zf) goto L_7ab9ce;
L_7ab9ba: /* 7ab9ba: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab9bd: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab9c3: xor ecx, 0x1000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9c9: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9ce: /* 7ab9ce: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab9d1: push 0xace7e4 */
  { uint32_t v = 0xace7e4u; esp -= 4; W32(esp, v); }
/* 7ab9d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab9d7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab9dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab9de: je 0x7ab9f4 */
  if (zf) goto L_7ab9f4;
L_7ab9e0: /* 7ab9e0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab9e3: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab9e9: xor ecx, 0x2000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9ef: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9f4: /* 7ab9f4: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab9f7: push 0xace7ec */
  { uint32_t v = 0xace7ecu; esp -= 4; W32(esp, v); }
/* 7ab9fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab9fd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba04: je 0x7aba17 */
  if (zf) goto L_7aba17;
L_7aba06: /* 7aba06: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba09: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba0f: xor ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba12: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba17: /* 7aba17: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba1a: push 0xace7f8 */
  { uint32_t v = 0xace7f8u; esp -= 4; W32(esp, v); }
/* 7aba1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba20: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba27: je 0x7aba3d */
  if (zf) goto L_7aba3d;
L_7aba29: /* 7aba29: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba2c: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba32: xor ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba38: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba3d: /* 7aba3d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7aba40: push 0xace804 */
  { uint32_t v = 0xace804u; esp -= 4; W32(esp, v); }
/* 7aba45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aba46: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba4b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba4d: je 0x7aba60 */
  if (zf) goto L_7aba60;
L_7aba4f: /* 7aba4f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba52: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba58: xor ecx, 0x20000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba5e: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba60: /* 7aba60: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7aba63: push 0xace81c */
  { uint32_t v = 0xace81cu; esp -= 4; W32(esp, v); }
/* 7aba68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aba69: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba6b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba70: je 0x7aba83 */
  if (zf) goto L_7aba83;
L_7aba72: /* 7aba72: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba75: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba7b: xor ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba81: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba83: /* 7aba83: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba86: push 0xace840 */
  { uint32_t v = 0xace840u; esp -= 4; W32(esp, v); }
/* 7aba8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba8c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba93: je 0x7abaa6 */
  if (zf) goto L_7abaa6;
L_7aba95: /* 7aba95: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba98: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba9e: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7abaa4: jmp 0x7abac7 */
  goto L_7abac7;
L_7abaa6: /* 7abaa6: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abaa9: push 0xace854 */
  { uint32_t v = 0xace854u; esp -= 4; W32(esp, v); }
/* 7abaae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abaaf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abab1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abab1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abab4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abab6: je 0x7abacd */
  if (zf) goto L_7abacd;
L_7abab8: /* 7abab8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ababb: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7abac1: xor ecx, 0x800000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
L_7abac7: /* 7abac7: mov dword ptr [eax + 0x534], ecx */
  W32((uint32_t)(eax + 0x534u), ecx);
L_7abacd: /* 7abacd: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7abad2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7abad5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abadb: /* 7abadb: xor ecx, ecx */
  ecx = 0;
/* 7abadd: mov dl, 0x40 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
/* 7abadf: nop  */
L_7abae0: /* 7abae0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abae3: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 7abae9: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7abaec: jge 0x7ab683 */
  if ((sf == of)) goto L_7ab683;
L_7abaf2: /* 7abaf2: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7abaf5: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7abaf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abafa: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abafc: /* 7abafc: test byte ptr [eax + 0x80], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb02: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abb04: /* 7abb04: mov byte ptr [eax + 0x6c], 0 */
  W8((uint32_t)(eax + 0x6cu), 0x0u);
L_7abb08: /* 7abb08: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7abb09: jmp 0x7abae0 */
  goto L_7abae0;
}

void f_7ab939(void) {
  LOAD_REGS();
  goto L_7ab939;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7ab939: /* 7ab939: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab93c: push 0xace7b0 */
  { uint32_t v = 0xace7b0u; esp -= 4; W32(esp, v); }
/* 7ab941: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab942: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab944u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab944: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab947: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab949: je 0x7ab95f */
  if (zf) goto L_7ab95f;
L_7ab94b: /* 7ab94b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab94e: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab954: xor ecx, 0x80000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab95a: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab95f: /* 7ab95f: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab962: push 0xace7b8 */
  { uint32_t v = 0xace7b8u; esp -= 4; W32(esp, v); }
/* 7ab967: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab968: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab96au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab96a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab96d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab96f: je 0x7ab982 */
  if (zf) goto L_7ab982;
L_7ab971: /* 7ab971: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab974: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab97a: xor ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab97d: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab982: /* 7ab982: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab985: push 0xace7c0 */
  { uint32_t v = 0xace7c0u; esp -= 4; W32(esp, v); }
/* 7ab98a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab98b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab98du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab98d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab990: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab992: je 0x7ab9a8 */
  if (zf) goto L_7ab9a8;
L_7ab994: /* 7ab994: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab997: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab99d: xor ecx, 0x400000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9a3: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9a8: /* 7ab9a8: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab9ab: push 0xace7d0 */
  { uint32_t v = 0xace7d0u; esp -= 4; W32(esp, v); }
/* 7ab9b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab9b1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab9b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab9b8: je 0x7ab9ce */
  if (zf) goto L_7ab9ce;
L_7ab9ba: /* 7ab9ba: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab9bd: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab9c3: xor ecx, 0x1000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9c9: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9ce: /* 7ab9ce: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab9d1: push 0xace7e4 */
  { uint32_t v = 0xace7e4u; esp -= 4; W32(esp, v); }
/* 7ab9d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab9d7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab9dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab9de: je 0x7ab9f4 */
  if (zf) goto L_7ab9f4;
L_7ab9e0: /* 7ab9e0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab9e3: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab9e9: xor ecx, 0x2000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9ef: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9f4: /* 7ab9f4: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab9f7: push 0xace7ec */
  { uint32_t v = 0xace7ecu; esp -= 4; W32(esp, v); }
/* 7ab9fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab9fd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba04: je 0x7aba17 */
  if (zf) goto L_7aba17;
L_7aba06: /* 7aba06: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba09: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba0f: xor ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba12: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba17: /* 7aba17: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba1a: push 0xace7f8 */
  { uint32_t v = 0xace7f8u; esp -= 4; W32(esp, v); }
/* 7aba1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba20: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba27: je 0x7aba3d */
  if (zf) goto L_7aba3d;
L_7aba29: /* 7aba29: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba2c: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba32: xor ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba38: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba3d: /* 7aba3d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7aba40: push 0xace804 */
  { uint32_t v = 0xace804u; esp -= 4; W32(esp, v); }
/* 7aba45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aba46: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba4b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba4d: je 0x7aba60 */
  if (zf) goto L_7aba60;
L_7aba4f: /* 7aba4f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba52: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba58: xor ecx, 0x20000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba5e: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba60: /* 7aba60: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7aba63: push 0xace81c */
  { uint32_t v = 0xace81cu; esp -= 4; W32(esp, v); }
/* 7aba68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aba69: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba6b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba70: je 0x7aba83 */
  if (zf) goto L_7aba83;
L_7aba72: /* 7aba72: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba75: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba7b: xor ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba81: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba83: /* 7aba83: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba86: push 0xace840 */
  { uint32_t v = 0xace840u; esp -= 4; W32(esp, v); }
/* 7aba8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba8c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba93: je 0x7abaa6 */
  if (zf) goto L_7abaa6;
L_7aba95: /* 7aba95: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba98: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba9e: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7abaa4: jmp 0x7abac7 */
  goto L_7abac7;
L_7abaa6: /* 7abaa6: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abaa9: push 0xace854 */
  { uint32_t v = 0xace854u; esp -= 4; W32(esp, v); }
/* 7abaae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abaaf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abab1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abab1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abab4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abab6: je 0x7abacd */
  if (zf) goto L_7abacd;
L_7abab8: /* 7abab8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ababb: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7abac1: xor ecx, 0x800000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
L_7abac7: /* 7abac7: mov dword ptr [eax + 0x534], ecx */
  W32((uint32_t)(eax + 0x534u), ecx);
L_7abacd: /* 7abacd: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7abad2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7abad5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abadb: /* 7abadb: xor ecx, ecx */
  ecx = 0;
/* 7abadd: mov dl, 0x40 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
/* 7abadf: nop  */
L_7abae0: /* 7abae0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abae3: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 7abae9: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7abaec: jge 0x7ab683 */
  if ((sf == of)) goto L_7ab683;
L_7abaf2: /* 7abaf2: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7abaf5: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7abaf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abafa: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abafc: /* 7abafc: test byte ptr [eax + 0x80], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb02: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abb04: /* 7abb04: mov byte ptr [eax + 0x6c], 0 */
  W8((uint32_t)(eax + 0x6cu), 0x0u);
L_7abb08: /* 7abb08: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7abb09: jmp 0x7abae0 */
  goto L_7abae0;
}

void f_7ab95f(void) {
  LOAD_REGS();
  goto L_7ab95f;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7ab95f: /* 7ab95f: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab962: push 0xace7b8 */
  { uint32_t v = 0xace7b8u; esp -= 4; W32(esp, v); }
/* 7ab967: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab968: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab96au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab96a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab96d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab96f: je 0x7ab982 */
  if (zf) goto L_7ab982;
L_7ab971: /* 7ab971: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab974: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab97a: xor ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab97d: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab982: /* 7ab982: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab985: push 0xace7c0 */
  { uint32_t v = 0xace7c0u; esp -= 4; W32(esp, v); }
/* 7ab98a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab98b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab98du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab98d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab990: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab992: je 0x7ab9a8 */
  if (zf) goto L_7ab9a8;
L_7ab994: /* 7ab994: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab997: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab99d: xor ecx, 0x400000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9a3: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9a8: /* 7ab9a8: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab9ab: push 0xace7d0 */
  { uint32_t v = 0xace7d0u; esp -= 4; W32(esp, v); }
/* 7ab9b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab9b1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab9b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab9b8: je 0x7ab9ce */
  if (zf) goto L_7ab9ce;
L_7ab9ba: /* 7ab9ba: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab9bd: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab9c3: xor ecx, 0x1000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9c9: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9ce: /* 7ab9ce: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab9d1: push 0xace7e4 */
  { uint32_t v = 0xace7e4u; esp -= 4; W32(esp, v); }
/* 7ab9d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab9d7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab9dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab9de: je 0x7ab9f4 */
  if (zf) goto L_7ab9f4;
L_7ab9e0: /* 7ab9e0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab9e3: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab9e9: xor ecx, 0x2000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9ef: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9f4: /* 7ab9f4: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab9f7: push 0xace7ec */
  { uint32_t v = 0xace7ecu; esp -= 4; W32(esp, v); }
/* 7ab9fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab9fd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba04: je 0x7aba17 */
  if (zf) goto L_7aba17;
L_7aba06: /* 7aba06: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba09: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba0f: xor ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba12: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba17: /* 7aba17: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba1a: push 0xace7f8 */
  { uint32_t v = 0xace7f8u; esp -= 4; W32(esp, v); }
/* 7aba1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba20: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba27: je 0x7aba3d */
  if (zf) goto L_7aba3d;
L_7aba29: /* 7aba29: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba2c: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba32: xor ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba38: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba3d: /* 7aba3d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7aba40: push 0xace804 */
  { uint32_t v = 0xace804u; esp -= 4; W32(esp, v); }
/* 7aba45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aba46: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba4b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba4d: je 0x7aba60 */
  if (zf) goto L_7aba60;
L_7aba4f: /* 7aba4f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba52: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba58: xor ecx, 0x20000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba5e: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba60: /* 7aba60: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7aba63: push 0xace81c */
  { uint32_t v = 0xace81cu; esp -= 4; W32(esp, v); }
/* 7aba68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aba69: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba6b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba70: je 0x7aba83 */
  if (zf) goto L_7aba83;
L_7aba72: /* 7aba72: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba75: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba7b: xor ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba81: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba83: /* 7aba83: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba86: push 0xace840 */
  { uint32_t v = 0xace840u; esp -= 4; W32(esp, v); }
/* 7aba8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba8c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba93: je 0x7abaa6 */
  if (zf) goto L_7abaa6;
L_7aba95: /* 7aba95: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba98: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba9e: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7abaa4: jmp 0x7abac7 */
  goto L_7abac7;
L_7abaa6: /* 7abaa6: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abaa9: push 0xace854 */
  { uint32_t v = 0xace854u; esp -= 4; W32(esp, v); }
/* 7abaae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abaaf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abab1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abab1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abab4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abab6: je 0x7abacd */
  if (zf) goto L_7abacd;
L_7abab8: /* 7abab8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ababb: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7abac1: xor ecx, 0x800000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
L_7abac7: /* 7abac7: mov dword ptr [eax + 0x534], ecx */
  W32((uint32_t)(eax + 0x534u), ecx);
L_7abacd: /* 7abacd: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7abad2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7abad5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abadb: /* 7abadb: xor ecx, ecx */
  ecx = 0;
/* 7abadd: mov dl, 0x40 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
/* 7abadf: nop  */
L_7abae0: /* 7abae0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abae3: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 7abae9: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7abaec: jge 0x7ab683 */
  if ((sf == of)) goto L_7ab683;
L_7abaf2: /* 7abaf2: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7abaf5: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7abaf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abafa: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abafc: /* 7abafc: test byte ptr [eax + 0x80], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb02: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abb04: /* 7abb04: mov byte ptr [eax + 0x6c], 0 */
  W8((uint32_t)(eax + 0x6cu), 0x0u);
L_7abb08: /* 7abb08: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7abb09: jmp 0x7abae0 */
  goto L_7abae0;
}

void f_7ab982(void) {
  LOAD_REGS();
  goto L_7ab982;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7ab982: /* 7ab982: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab985: push 0xace7c0 */
  { uint32_t v = 0xace7c0u; esp -= 4; W32(esp, v); }
/* 7ab98a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab98b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab98du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab98d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab990: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab992: je 0x7ab9a8 */
  if (zf) goto L_7ab9a8;
L_7ab994: /* 7ab994: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab997: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab99d: xor ecx, 0x400000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9a3: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9a8: /* 7ab9a8: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab9ab: push 0xace7d0 */
  { uint32_t v = 0xace7d0u; esp -= 4; W32(esp, v); }
/* 7ab9b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab9b1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab9b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab9b8: je 0x7ab9ce */
  if (zf) goto L_7ab9ce;
L_7ab9ba: /* 7ab9ba: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab9bd: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab9c3: xor ecx, 0x1000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9c9: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9ce: /* 7ab9ce: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab9d1: push 0xace7e4 */
  { uint32_t v = 0xace7e4u; esp -= 4; W32(esp, v); }
/* 7ab9d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab9d7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab9dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab9de: je 0x7ab9f4 */
  if (zf) goto L_7ab9f4;
L_7ab9e0: /* 7ab9e0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab9e3: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab9e9: xor ecx, 0x2000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9ef: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9f4: /* 7ab9f4: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab9f7: push 0xace7ec */
  { uint32_t v = 0xace7ecu; esp -= 4; W32(esp, v); }
/* 7ab9fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab9fd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba04: je 0x7aba17 */
  if (zf) goto L_7aba17;
L_7aba06: /* 7aba06: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba09: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba0f: xor ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba12: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba17: /* 7aba17: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba1a: push 0xace7f8 */
  { uint32_t v = 0xace7f8u; esp -= 4; W32(esp, v); }
/* 7aba1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba20: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba27: je 0x7aba3d */
  if (zf) goto L_7aba3d;
L_7aba29: /* 7aba29: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba2c: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba32: xor ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba38: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba3d: /* 7aba3d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7aba40: push 0xace804 */
  { uint32_t v = 0xace804u; esp -= 4; W32(esp, v); }
/* 7aba45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aba46: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba4b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba4d: je 0x7aba60 */
  if (zf) goto L_7aba60;
L_7aba4f: /* 7aba4f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba52: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba58: xor ecx, 0x20000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba5e: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba60: /* 7aba60: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7aba63: push 0xace81c */
  { uint32_t v = 0xace81cu; esp -= 4; W32(esp, v); }
/* 7aba68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aba69: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba6b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba70: je 0x7aba83 */
  if (zf) goto L_7aba83;
L_7aba72: /* 7aba72: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba75: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba7b: xor ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba81: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba83: /* 7aba83: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba86: push 0xace840 */
  { uint32_t v = 0xace840u; esp -= 4; W32(esp, v); }
/* 7aba8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba8c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba93: je 0x7abaa6 */
  if (zf) goto L_7abaa6;
L_7aba95: /* 7aba95: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba98: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba9e: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7abaa4: jmp 0x7abac7 */
  goto L_7abac7;
L_7abaa6: /* 7abaa6: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abaa9: push 0xace854 */
  { uint32_t v = 0xace854u; esp -= 4; W32(esp, v); }
/* 7abaae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abaaf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abab1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abab1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abab4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abab6: je 0x7abacd */
  if (zf) goto L_7abacd;
L_7abab8: /* 7abab8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ababb: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7abac1: xor ecx, 0x800000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
L_7abac7: /* 7abac7: mov dword ptr [eax + 0x534], ecx */
  W32((uint32_t)(eax + 0x534u), ecx);
L_7abacd: /* 7abacd: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7abad2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7abad5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abadb: /* 7abadb: xor ecx, ecx */
  ecx = 0;
/* 7abadd: mov dl, 0x40 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
/* 7abadf: nop  */
L_7abae0: /* 7abae0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abae3: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 7abae9: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7abaec: jge 0x7ab683 */
  if ((sf == of)) goto L_7ab683;
L_7abaf2: /* 7abaf2: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7abaf5: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7abaf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abafa: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abafc: /* 7abafc: test byte ptr [eax + 0x80], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb02: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abb04: /* 7abb04: mov byte ptr [eax + 0x6c], 0 */
  W8((uint32_t)(eax + 0x6cu), 0x0u);
L_7abb08: /* 7abb08: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7abb09: jmp 0x7abae0 */
  goto L_7abae0;
}

void f_7ab9a8(void) {
  LOAD_REGS();
  goto L_7ab9a8;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7ab9a8: /* 7ab9a8: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ab9ab: push 0xace7d0 */
  { uint32_t v = 0xace7d0u; esp -= 4; W32(esp, v); }
/* 7ab9b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ab9b1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab9b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab9b8: je 0x7ab9ce */
  if (zf) goto L_7ab9ce;
L_7ab9ba: /* 7ab9ba: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab9bd: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab9c3: xor ecx, 0x1000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9c9: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9ce: /* 7ab9ce: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab9d1: push 0xace7e4 */
  { uint32_t v = 0xace7e4u; esp -= 4; W32(esp, v); }
/* 7ab9d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab9d7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab9dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab9de: je 0x7ab9f4 */
  if (zf) goto L_7ab9f4;
L_7ab9e0: /* 7ab9e0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab9e3: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab9e9: xor ecx, 0x2000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9ef: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9f4: /* 7ab9f4: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab9f7: push 0xace7ec */
  { uint32_t v = 0xace7ecu; esp -= 4; W32(esp, v); }
/* 7ab9fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab9fd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba04: je 0x7aba17 */
  if (zf) goto L_7aba17;
L_7aba06: /* 7aba06: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba09: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba0f: xor ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba12: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba17: /* 7aba17: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba1a: push 0xace7f8 */
  { uint32_t v = 0xace7f8u; esp -= 4; W32(esp, v); }
/* 7aba1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba20: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba27: je 0x7aba3d */
  if (zf) goto L_7aba3d;
L_7aba29: /* 7aba29: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba2c: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba32: xor ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba38: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba3d: /* 7aba3d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7aba40: push 0xace804 */
  { uint32_t v = 0xace804u; esp -= 4; W32(esp, v); }
/* 7aba45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aba46: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba4b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba4d: je 0x7aba60 */
  if (zf) goto L_7aba60;
L_7aba4f: /* 7aba4f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba52: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba58: xor ecx, 0x20000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba5e: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba60: /* 7aba60: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7aba63: push 0xace81c */
  { uint32_t v = 0xace81cu; esp -= 4; W32(esp, v); }
/* 7aba68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aba69: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba6b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba70: je 0x7aba83 */
  if (zf) goto L_7aba83;
L_7aba72: /* 7aba72: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba75: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba7b: xor ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba81: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba83: /* 7aba83: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba86: push 0xace840 */
  { uint32_t v = 0xace840u; esp -= 4; W32(esp, v); }
/* 7aba8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba8c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba93: je 0x7abaa6 */
  if (zf) goto L_7abaa6;
L_7aba95: /* 7aba95: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba98: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba9e: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7abaa4: jmp 0x7abac7 */
  goto L_7abac7;
L_7abaa6: /* 7abaa6: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abaa9: push 0xace854 */
  { uint32_t v = 0xace854u; esp -= 4; W32(esp, v); }
/* 7abaae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abaaf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abab1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abab1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abab4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abab6: je 0x7abacd */
  if (zf) goto L_7abacd;
L_7abab8: /* 7abab8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ababb: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7abac1: xor ecx, 0x800000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
L_7abac7: /* 7abac7: mov dword ptr [eax + 0x534], ecx */
  W32((uint32_t)(eax + 0x534u), ecx);
L_7abacd: /* 7abacd: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7abad2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7abad5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abadb: /* 7abadb: xor ecx, ecx */
  ecx = 0;
/* 7abadd: mov dl, 0x40 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
/* 7abadf: nop  */
L_7abae0: /* 7abae0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abae3: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 7abae9: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7abaec: jge 0x7ab683 */
  if ((sf == of)) goto L_7ab683;
L_7abaf2: /* 7abaf2: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7abaf5: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7abaf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abafa: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abafc: /* 7abafc: test byte ptr [eax + 0x80], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb02: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abb04: /* 7abb04: mov byte ptr [eax + 0x6c], 0 */
  W8((uint32_t)(eax + 0x6cu), 0x0u);
L_7abb08: /* 7abb08: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7abb09: jmp 0x7abae0 */
  goto L_7abae0;
}

void f_7ab9ce(void) {
  LOAD_REGS();
  goto L_7ab9ce;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7ab9ce: /* 7ab9ce: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ab9d1: push 0xace7e4 */
  { uint32_t v = 0xace7e4u; esp -= 4; W32(esp, v); }
/* 7ab9d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ab9d7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ab9dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ab9de: je 0x7ab9f4 */
  if (zf) goto L_7ab9f4;
L_7ab9e0: /* 7ab9e0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ab9e3: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7ab9e9: xor ecx, 0x2000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7ab9ef: jmp 0x7abac7 */
  goto L_7abac7;
L_7ab9f4: /* 7ab9f4: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab9f7: push 0xace7ec */
  { uint32_t v = 0xace7ecu; esp -= 4; W32(esp, v); }
/* 7ab9fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab9fd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba04: je 0x7aba17 */
  if (zf) goto L_7aba17;
L_7aba06: /* 7aba06: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba09: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba0f: xor ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba12: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba17: /* 7aba17: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba1a: push 0xace7f8 */
  { uint32_t v = 0xace7f8u; esp -= 4; W32(esp, v); }
/* 7aba1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba20: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba27: je 0x7aba3d */
  if (zf) goto L_7aba3d;
L_7aba29: /* 7aba29: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba2c: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba32: xor ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba38: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba3d: /* 7aba3d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7aba40: push 0xace804 */
  { uint32_t v = 0xace804u; esp -= 4; W32(esp, v); }
/* 7aba45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aba46: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba4b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba4d: je 0x7aba60 */
  if (zf) goto L_7aba60;
L_7aba4f: /* 7aba4f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba52: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba58: xor ecx, 0x20000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba5e: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba60: /* 7aba60: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7aba63: push 0xace81c */
  { uint32_t v = 0xace81cu; esp -= 4; W32(esp, v); }
/* 7aba68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aba69: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba6b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba70: je 0x7aba83 */
  if (zf) goto L_7aba83;
L_7aba72: /* 7aba72: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba75: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba7b: xor ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba81: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba83: /* 7aba83: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba86: push 0xace840 */
  { uint32_t v = 0xace840u; esp -= 4; W32(esp, v); }
/* 7aba8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba8c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba93: je 0x7abaa6 */
  if (zf) goto L_7abaa6;
L_7aba95: /* 7aba95: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba98: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba9e: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7abaa4: jmp 0x7abac7 */
  goto L_7abac7;
L_7abaa6: /* 7abaa6: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abaa9: push 0xace854 */
  { uint32_t v = 0xace854u; esp -= 4; W32(esp, v); }
/* 7abaae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abaaf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abab1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abab1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abab4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abab6: je 0x7abacd */
  if (zf) goto L_7abacd;
L_7abab8: /* 7abab8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ababb: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7abac1: xor ecx, 0x800000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
L_7abac7: /* 7abac7: mov dword ptr [eax + 0x534], ecx */
  W32((uint32_t)(eax + 0x534u), ecx);
L_7abacd: /* 7abacd: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7abad2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7abad5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abadb: /* 7abadb: xor ecx, ecx */
  ecx = 0;
/* 7abadd: mov dl, 0x40 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
/* 7abadf: nop  */
L_7abae0: /* 7abae0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abae3: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 7abae9: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7abaec: jge 0x7ab683 */
  if ((sf == of)) goto L_7ab683;
L_7abaf2: /* 7abaf2: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7abaf5: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7abaf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abafa: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abafc: /* 7abafc: test byte ptr [eax + 0x80], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb02: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abb04: /* 7abb04: mov byte ptr [eax + 0x6c], 0 */
  W8((uint32_t)(eax + 0x6cu), 0x0u);
L_7abb08: /* 7abb08: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7abb09: jmp 0x7abae0 */
  goto L_7abae0;
}

void f_7ab9f4(void) {
  LOAD_REGS();
  goto L_7ab9f4;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7ab9f4: /* 7ab9f4: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ab9f7: push 0xace7ec */
  { uint32_t v = 0xace7ecu; esp -= 4; W32(esp, v); }
/* 7ab9fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ab9fd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ab9ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ab9ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba04: je 0x7aba17 */
  if (zf) goto L_7aba17;
L_7aba06: /* 7aba06: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba09: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba0f: xor ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba12: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba17: /* 7aba17: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba1a: push 0xace7f8 */
  { uint32_t v = 0xace7f8u; esp -= 4; W32(esp, v); }
/* 7aba1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba20: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba27: je 0x7aba3d */
  if (zf) goto L_7aba3d;
L_7aba29: /* 7aba29: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba2c: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba32: xor ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba38: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba3d: /* 7aba3d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7aba40: push 0xace804 */
  { uint32_t v = 0xace804u; esp -= 4; W32(esp, v); }
/* 7aba45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aba46: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba4b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba4d: je 0x7aba60 */
  if (zf) goto L_7aba60;
L_7aba4f: /* 7aba4f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba52: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba58: xor ecx, 0x20000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba5e: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba60: /* 7aba60: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7aba63: push 0xace81c */
  { uint32_t v = 0xace81cu; esp -= 4; W32(esp, v); }
/* 7aba68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aba69: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba6b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba70: je 0x7aba83 */
  if (zf) goto L_7aba83;
L_7aba72: /* 7aba72: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba75: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba7b: xor ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba81: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba83: /* 7aba83: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba86: push 0xace840 */
  { uint32_t v = 0xace840u; esp -= 4; W32(esp, v); }
/* 7aba8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba8c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba93: je 0x7abaa6 */
  if (zf) goto L_7abaa6;
L_7aba95: /* 7aba95: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba98: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba9e: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7abaa4: jmp 0x7abac7 */
  goto L_7abac7;
L_7abaa6: /* 7abaa6: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abaa9: push 0xace854 */
  { uint32_t v = 0xace854u; esp -= 4; W32(esp, v); }
/* 7abaae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abaaf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abab1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abab1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abab4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abab6: je 0x7abacd */
  if (zf) goto L_7abacd;
L_7abab8: /* 7abab8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ababb: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7abac1: xor ecx, 0x800000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
L_7abac7: /* 7abac7: mov dword ptr [eax + 0x534], ecx */
  W32((uint32_t)(eax + 0x534u), ecx);
L_7abacd: /* 7abacd: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7abad2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7abad5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abadb: /* 7abadb: xor ecx, ecx */
  ecx = 0;
/* 7abadd: mov dl, 0x40 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
/* 7abadf: nop  */
L_7abae0: /* 7abae0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abae3: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 7abae9: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7abaec: jge 0x7ab683 */
  if ((sf == of)) goto L_7ab683;
L_7abaf2: /* 7abaf2: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7abaf5: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7abaf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abafa: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abafc: /* 7abafc: test byte ptr [eax + 0x80], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb02: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abb04: /* 7abb04: mov byte ptr [eax + 0x6c], 0 */
  W8((uint32_t)(eax + 0x6cu), 0x0u);
L_7abb08: /* 7abb08: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7abb09: jmp 0x7abae0 */
  goto L_7abae0;
}

void f_7aba17(void) {
  LOAD_REGS();
  goto L_7aba17;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7aba17: /* 7aba17: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba1a: push 0xace7f8 */
  { uint32_t v = 0xace7f8u; esp -= 4; W32(esp, v); }
/* 7aba1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba20: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba27: je 0x7aba3d */
  if (zf) goto L_7aba3d;
L_7aba29: /* 7aba29: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba2c: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba32: xor ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba38: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba3d: /* 7aba3d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7aba40: push 0xace804 */
  { uint32_t v = 0xace804u; esp -= 4; W32(esp, v); }
/* 7aba45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aba46: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba4b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba4d: je 0x7aba60 */
  if (zf) goto L_7aba60;
L_7aba4f: /* 7aba4f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba52: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba58: xor ecx, 0x20000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba5e: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba60: /* 7aba60: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7aba63: push 0xace81c */
  { uint32_t v = 0xace81cu; esp -= 4; W32(esp, v); }
/* 7aba68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aba69: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba6b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba70: je 0x7aba83 */
  if (zf) goto L_7aba83;
L_7aba72: /* 7aba72: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba75: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba7b: xor ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba81: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba83: /* 7aba83: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba86: push 0xace840 */
  { uint32_t v = 0xace840u; esp -= 4; W32(esp, v); }
/* 7aba8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba8c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba93: je 0x7abaa6 */
  if (zf) goto L_7abaa6;
L_7aba95: /* 7aba95: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba98: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba9e: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7abaa4: jmp 0x7abac7 */
  goto L_7abac7;
L_7abaa6: /* 7abaa6: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abaa9: push 0xace854 */
  { uint32_t v = 0xace854u; esp -= 4; W32(esp, v); }
/* 7abaae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abaaf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abab1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abab1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abab4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abab6: je 0x7abacd */
  if (zf) goto L_7abacd;
L_7abab8: /* 7abab8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ababb: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7abac1: xor ecx, 0x800000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
L_7abac7: /* 7abac7: mov dword ptr [eax + 0x534], ecx */
  W32((uint32_t)(eax + 0x534u), ecx);
L_7abacd: /* 7abacd: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7abad2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7abad5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abadb: /* 7abadb: xor ecx, ecx */
  ecx = 0;
/* 7abadd: mov dl, 0x40 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
/* 7abadf: nop  */
L_7abae0: /* 7abae0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abae3: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 7abae9: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7abaec: jge 0x7ab683 */
  if ((sf == of)) goto L_7ab683;
L_7abaf2: /* 7abaf2: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7abaf5: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7abaf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abafa: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abafc: /* 7abafc: test byte ptr [eax + 0x80], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb02: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abb04: /* 7abb04: mov byte ptr [eax + 0x6c], 0 */
  W8((uint32_t)(eax + 0x6cu), 0x0u);
L_7abb08: /* 7abb08: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7abb09: jmp 0x7abae0 */
  goto L_7abae0;
}

void f_7aba3d(void) {
  LOAD_REGS();
  goto L_7aba3d;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7aba3d: /* 7aba3d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7aba40: push 0xace804 */
  { uint32_t v = 0xace804u; esp -= 4; W32(esp, v); }
/* 7aba45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aba46: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba4b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba4d: je 0x7aba60 */
  if (zf) goto L_7aba60;
L_7aba4f: /* 7aba4f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba52: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba58: xor ecx, 0x20000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba5e: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba60: /* 7aba60: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7aba63: push 0xace81c */
  { uint32_t v = 0xace81cu; esp -= 4; W32(esp, v); }
/* 7aba68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aba69: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba6b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba70: je 0x7aba83 */
  if (zf) goto L_7aba83;
L_7aba72: /* 7aba72: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba75: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba7b: xor ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba81: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba83: /* 7aba83: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba86: push 0xace840 */
  { uint32_t v = 0xace840u; esp -= 4; W32(esp, v); }
/* 7aba8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba8c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba93: je 0x7abaa6 */
  if (zf) goto L_7abaa6;
L_7aba95: /* 7aba95: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba98: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba9e: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7abaa4: jmp 0x7abac7 */
  goto L_7abac7;
L_7abaa6: /* 7abaa6: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abaa9: push 0xace854 */
  { uint32_t v = 0xace854u; esp -= 4; W32(esp, v); }
/* 7abaae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abaaf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abab1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abab1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abab4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abab6: je 0x7abacd */
  if (zf) goto L_7abacd;
L_7abab8: /* 7abab8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ababb: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7abac1: xor ecx, 0x800000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
L_7abac7: /* 7abac7: mov dword ptr [eax + 0x534], ecx */
  W32((uint32_t)(eax + 0x534u), ecx);
L_7abacd: /* 7abacd: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7abad2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7abad5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abadb: /* 7abadb: xor ecx, ecx */
  ecx = 0;
/* 7abadd: mov dl, 0x40 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
/* 7abadf: nop  */
L_7abae0: /* 7abae0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abae3: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 7abae9: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7abaec: jge 0x7ab683 */
  if ((sf == of)) goto L_7ab683;
L_7abaf2: /* 7abaf2: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7abaf5: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7abaf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abafa: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abafc: /* 7abafc: test byte ptr [eax + 0x80], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb02: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abb04: /* 7abb04: mov byte ptr [eax + 0x6c], 0 */
  W8((uint32_t)(eax + 0x6cu), 0x0u);
L_7abb08: /* 7abb08: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7abb09: jmp 0x7abae0 */
  goto L_7abae0;
}
