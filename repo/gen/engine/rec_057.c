#include "recomp.h"
#include "rec_mod.h"

void f_7fc7f0(void) {
  LOAD_REGS();
L_7fc7f0: /* 7fc7f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7fc7f1: mov ebp, esp */
  ebp = esp;
/* 7fc7f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fc7f5: push 0x9d1b90 */
  { uint32_t v = 0x9d1b90u; esp -= 4; W32(esp, v); }
/* 7fc7fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7fc800: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fc801: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7fc808: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fc80b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fc80c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fc80d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fc80e: xor ebx, ebx */
  ebx = 0;
/* 7fc810: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7fc813: mov edi, ecx */
  edi = ecx;
/* 7fc815: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
L_7fc818: /* 7fc818: cmp ebx, dword ptr [edi + 0x20] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7fc81b: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 7fc81e: jge 0x7fc917 */
  if ((sf == of)) goto L_7fc917;
L_7fc824: /* 7fc824: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fc826: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7fc829: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7fc82fu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7fc82f: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 7fc832: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* 7fc835: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7fc838: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7fc83b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fc83c: lea ecx, [ecx + esi + 4] */
  ecx = (uint32_t)(ecx + esi + 0x4u);
/* 7fc840: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x7fc846u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 7fc846: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fc848: je 0x7fc8e1 */
  if (zf) goto L_7fc8e1;
L_7fc84e: /* 7fc84e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fc850: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7fc853: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7fc859u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7fc859: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7fc85c: push 0xce46b8 */
  { uint32_t v = 0xce46b8u; esp -= 4; W32(esp, v); }
/* 7fc861: mov ecx, 0xce46b8 */
  ecx = 0xce46b8u;
/* 7fc866: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7fc86cu); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7fc86c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fc86e: jne 0x7fc888 */
  if (!zf) goto L_7fc888;
L_7fc870: /* 7fc870: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7fc875: push 0xae0ab0 */
  { uint32_t v = 0xae0ab0u; esp -= 4; W32(esp, v); }
/* 7fc87a: push 0xae0af4 */
  { uint32_t v = 0xae0af4u; esp -= 4; W32(esp, v); }
/* 7fc87f: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7fc885u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7fc885: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7fc888: /* 7fc888: cmp dword ptr [ebp + 8], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7fc88c: jne 0x7fc896 */
  if (!zf) goto L_7fc896;
L_7fc88e: /* 7fc88e: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7fc894u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 7fc894: mov ebx, eax */
  ebx = eax;
L_7fc896: /* 7fc896: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 7fc89c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7fc89e: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7fc8a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fc8a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fc8a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fc8a6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7fc8a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fc8a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fc8aa: push 0xce46b8 */
  { uint32_t v = 0xce46b8u; esp -= 4; W32(esp, v); }
/* 7fc8af: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7fc8b5u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7fc8b5: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 7fc8b8: mov ecx, dword ptr [edx + esi + 4] */
  ecx = R32((uint32_t)(edx + esi + 0x4u));
/* 7fc8bc: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 7fc8bf: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 7fc8c2: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fc8c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fc8c7: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7fc8ca: mov dword ptr [edx + esi + 8], eax */
  W32((uint32_t)(edx + esi + 0x8u), eax);
/* 7fc8ce: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7fc8d4u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7fc8d4: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 7fc8d7: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7fc8da: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7fc8dd: mov dword ptr [eax + esi + 4], ecx */
  W32((uint32_t)(eax + esi + 0x4u), ecx);
L_7fc8e1: /* 7fc8e1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7fc8e2: jmp 0x7fc818 */
  goto L_7fc818;
L_7fc917: /* 7fc917: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fc91a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fc91b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fc91c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fc923: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fc924: mov esp, ebp */
  esp = ebp;
/* 7fc926: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fc927: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7fc8e7(void) {
  LOAD_REGS();
L_7fc8e7: /* 7fc8e7: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7fc8ea: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7fc8ef: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 7fc8f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fc8f3: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7fc8f6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fc8fbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7fc8fb(); return;
}

void f_7fc8fb(void) {
  LOAD_REGS();
L_7fc8fb: /* 7fc8fb: push 0xa12580 */
  { uint32_t v = 0xa12580u; esp -= 4; W32(esp, v); }
/* 7fc900: push 0xae0aa4 */
  { uint32_t v = 0xae0aa4u; esp -= 4; W32(esp, v); }
/* 7fc905: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7fc90bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7fc90b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fc90e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fc910: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fc912: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fc917u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7fc917: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fc91a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fc91b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fc91c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fc923: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fc924: mov esp, ebp */
  esp = ebp;
/* 7fc926: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fc927: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7fc980(void) {
  LOAD_REGS();
L_7fc980: /* 7fc980: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7fc981: mov ebp, esp */
  ebp = esp;
/* 7fc983: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fc985: push 0x9d1ba0 */
  { uint32_t v = 0x9d1ba0u; esp -= 4; W32(esp, v); }
/* 7fc98a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7fc990: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fc991: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7fc998: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fc99b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fc99c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fc99d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7fc9a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fc9a1: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7fc9a4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7fc9a7: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7fc9a9: xor ebx, ebx */
  ebx = 0;
/* 7fc9ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fc9ac: mov ecx, edi */
  ecx = edi;
/* 7fc9ae: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7fc9b1: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7fc9b7u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7fc9b7: mov ecx, esi */
  ecx = esi;
/* 7fc9b9: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7fc9bfu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7fc9bf: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7fc9c1: je 0x7fca3c */
  if (zf) goto L_7fca3c;
L_7fc9c3: /* 7fc9c3: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7fc9c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fc9c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fc9c8: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7fc9ceu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7fc9ce: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7fc9d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fc9d4: xor eax, eax */
  eax = 0;
L_7fc9d6: /* 7fc9d6: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7fc9d9: jge 0x7fc9de */
  if ((sf == of)) goto L_7fc9de;
L_7fc9db: /* 7fc9db: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7fc9dc: jmp 0x7fc9d6 */
  goto L_7fc9d6;
L_7fc9de: /* 7fc9de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fc9df: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7fc9e1: mov ecx, edi */
  ecx = edi;
/* 7fc9e3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7fc9e9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7fc9e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7fc9f0: /* 7fc9f0: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7fc9f3: jge 0x7fca6f */
  if ((sf == of)) goto L_7fca6f;
L_7fc9f5: /* 7fc9f5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7fc9f7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7fc9f9: mov ecx, edi */
  ecx = edi;
/* 7fc9fb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7fca01u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7fca01: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7fca03: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7fca06: lea esi, [edx + ecx*4] */
  esi = (uint32_t)(edx + ecx*4);
/* 7fca09: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fca0b: je 0x7fca27 */
  if (zf) goto L_7fca27;
L_7fca0d: /* 7fca0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fca0f: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7fca12: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 7fca18: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7fca1eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7fca1e: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 7fca25: jmp 0x7fca29 */
  goto L_7fca29;
L_7fca27: /* 7fca27: xor esi, esi */
  esi = 0;
L_7fca29: /* 7fca29: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7fca2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fca2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fca2e: call 0x6c9de5 */
  esp -= 4; W32(esp, 0x7fca33u); SPILL(); f_6c9de5(); if (g_unwind) return; RELOAD();
/* 7fca33: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7fca36: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fca39: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7fca3a: jmp 0x7fc9f0 */
  goto L_7fc9f0;
L_7fca3c: /* 7fca3c: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* 7fca3f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fca40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fca41: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7fca47u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7fca47: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fca4a: xor esi, esi */
  esi = 0;
/* 7fca4c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7fca50: /* 7fca50: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7fca52: jge 0x7fca6c */
  if ((sf == of)) goto L_7fca6c;
L_7fca54: /* 7fca54: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7fca56: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 7fca59: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 7fca5c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7fca5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fca60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fca61: call 0x6c9de5 */
  esp -= 4; W32(esp, 0x7fca66u); SPILL(); f_6c9de5(); if (g_unwind) return; RELOAD();
/* 7fca66: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fca69: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7fca6a: jmp 0x7fca50 */
  goto L_7fca50;
L_7fca6c: /* 7fca6c: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_7fca6f: /* 7fca6f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fca72: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fca73: mov eax, esi */
  eax = esi;
/* 7fca75: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fca76: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fca7d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fca7e: mov esp, ebp */
  esp = ebp;
/* 7fca80: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fca81: ret  */
  esp += 4; SPILL(); return;
}

void f_7fca82(void) {
  LOAD_REGS();
L_7fca82: /* 7fca82: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7fca85: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7fca8a: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7fca8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fca8e: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7fca91: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fca96u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7fca96(); return;
}

void f_7fca96(void) {
  LOAD_REGS();
L_7fca96: /* 7fca96: push 0xa125cc */
  { uint32_t v = 0xa125ccu; esp -= 4; W32(esp, v); }
/* 7fca9b: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7fcaa0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7fcaa6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7fcaa6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fcaa9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fcaab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fcaad: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fcab2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7fcab2: guest_badaddr(0x7fcab2); return;
}

void f_7fcb10(void) {
  LOAD_REGS();
L_7fcb10: /* 7fcb10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fcb11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fcb12: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fcb13: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 7fcb17: mov ecx, edi */
  ecx = edi;
/* 7fcb19: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x7fcb1fu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 7fcb1f: cmp eax, 0x73 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x73u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7fcb22: mov ebx, dword ptr [0xcfa1b4] */
  ebx = R32((uint32_t)(0xcfa1b4u));
/* 7fcb28: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 7fcb2c: jl 0x7fcb3a */
  if ((sf != of)) goto L_7fcb3a;
L_7fcb2e: /* 7fcb2e: lea eax, [esi + 0x28] */
  eax = (uint32_t)(esi + 0x28u);
/* 7fcb31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fcb32: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fcb33: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7fcb35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fcb35: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fcb38: jmp 0x7fcb41 */
  goto L_7fcb41;
L_7fcb3a: /* 7fcb3a: mov dword ptr [esi + 0x28], 0 */
  W32((uint32_t)(esi + 0x28u), 0x0u);
L_7fcb41: /* 7fcb41: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 7fcb44: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fcb45: lea edx, [esi + 0x1c] */
  edx = (uint32_t)(esi + 0x1cu);
/* 7fcb48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fcb49: lea eax, [esi + 0x14] */
  eax = (uint32_t)(esi + 0x14u);
/* 7fcb4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fcb4d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7fcb4f: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 7fcb52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fcb53: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 7fcb56: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fcb57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fcb58: mov ecx, edi */
  ecx = edi;
/* 7fcb5a: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x7fcb5du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fcb5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fcb5e: call 0x6c2d8d */
  esp -= 4; W32(esp, 0x7fcb63u); SPILL(); f_6c2d8d(); if (g_unwind) return; RELOAD();
/* 7fcb63: mov esi, dword ptr [0xcfa280] */
  esi = R32((uint32_t)(0xcfa280u));
/* 7fcb69: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fcb6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fcb6d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7fcb6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fcb6f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fcb72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fcb73: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7fcb75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fcb75: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fcb78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fcb79: call 0x6c1a9b */
  esp -= 4; W32(esp, 0x7fcb7eu); SPILL(); f_6c1a9b(); if (g_unwind) return; RELOAD();
/* 7fcb7e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fcb81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fcb82: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7fcb84u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fcb84: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fcb87: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fcb88: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fcb89: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fcb8a: ret  */
  esp += 4; SPILL(); return;
}

void f_7fcbb0(void) {
  LOAD_REGS();
L_7fcbb0: /* 7fcbb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7fcbb1: mov ebp, esp */
  ebp = esp;
/* 7fcbb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fcbb5: push 0x9d1bb0 */
  { uint32_t v = 0x9d1bb0u; esp -= 4; W32(esp, v); }
/* 7fcbba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7fcbc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fcbc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7fcbc8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fcbcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fcbcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fcbcd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fcbce: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7fcbd1: mov esi, ecx */
  esi = ecx;
/* 7fcbd3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7fcbda: call 0x6c51ff */
  esp -= 4; W32(esp, 0x7fcbdfu); SPILL(); f_6c51ff(); if (g_unwind) return; RELOAD();
/* 7fcbdf: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7fcbe1: mov ecx, esi */
  ecx = esi;
/* 7fcbe3: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0x7fcbe6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fcbe6: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* 7fcbec: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7fcbee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fcbef: mov ecx, esi */
  ecx = esi;
/* 7fcbf1: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7fcbf4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fcbf4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fcbf7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fcbf8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fcbf9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fcc00: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fcc01: mov esp, ebp */
  esp = ebp;
/* 7fcc03: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fcc04: ret  */
  esp += 4; SPILL(); return;
}

void f_7fcc05(void) {
  LOAD_REGS();
L_7fcc05: /* 7fcc05: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7fcc08: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7fcc0d: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7fcc10: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fcc11: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7fcc14: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fcc19u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7fcc19(); return;
}

void f_7fcc19(void) {
  LOAD_REGS();
L_7fcc19: /* 7fcc19: push 0xa125e4 */
  { uint32_t v = 0xa125e4u; esp -= 4; W32(esp, v); }
/* 7fcc1e: push 0xae0b5c */
  { uint32_t v = 0xae0b5cu; esp -= 4; W32(esp, v); }
/* 7fcc23: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7fcc29u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7fcc29: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fcc2c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fcc2e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fcc30: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fcc35u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7fcc35: guest_badaddr(0x7fcc35); return;
}

void f_7fcc70(void) {
  LOAD_REGS();
L_7fcc70: /* 7fcc70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7fcc71: mov ebp, esp */
  ebp = esp;
/* 7fcc73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fcc75: push 0x9d1bc0 */
  { uint32_t v = 0x9d1bc0u; esp -= 4; W32(esp, v); }
/* 7fcc7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7fcc80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fcc81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7fcc88: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fcc8b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7fcc8e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fcc8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fcc90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fcc91: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7fcc94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fcc95: mov esi, ecx */
  esi = ecx;
/* 7fcc97: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7fcc9e: call 0x6ca62d */
  esp -= 4; W32(esp, 0x7fcca3u); SPILL(); f_6ca62d(); if (g_unwind) return; RELOAD();
/* 7fcca3: mov edx, dword ptr [esi + 0x494] */
  edx = R32((uint32_t)(esi + 0x494u));
/* 7fcca9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fccab: je 0x7fcd40 */
  if (zf) goto L_7fcd40;
L_7fccb1: /* 7fccb1: fld dword ptr [edx + 0x34] */
  { double v = F32((uint32_t)(edx + 0x34u)); FPUSH(v); }
/* 7fccb4: lea ecx, [edx + 0x28] */
  ecx = (uint32_t)(edx + 0x28u);
/* 7fccb7: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 7fccb9: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 7fccbc: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7fccbe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7fccc0: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fccc3: jne 0x7fccca */
  if (!zf) goto L_7fccca;
L_7fccc5: /* 7fccc5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7fccc7: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
L_7fccca: /* 7fccca: fstp dword ptr [esi + 0x49c] */
  WF32((uint32_t)(esi + 0x49cu), ST0); FPOP();
/* 7fccd0: fld dword ptr [edx + 0x38] */
  { double v = F32((uint32_t)(edx + 0x38u)); FPUSH(v); }
/* 7fccd3: fld dword ptr [edx + 0x2c] */
  { double v = F32((uint32_t)(edx + 0x2cu)); FPUSH(v); }
/* 7fccd6: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 7fccd9: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7fccdb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7fccdd: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fcce0: jne 0x7fcce7 */
  if (!zf) goto L_7fcce7;
L_7fcce2: /* 7fcce2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7fcce4: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
L_7fcce7: /* 7fcce7: fstp dword ptr [esi + 0x4a0] */
  WF32((uint32_t)(esi + 0x4a0u), ST0); FPOP();
/* 7fcced: fld dword ptr [edx + 0x3c] */
  { double v = F32((uint32_t)(edx + 0x3cu)); FPUSH(v); }
/* 7fccf0: fld dword ptr [edx + 0x30] */
  { double v = F32((uint32_t)(edx + 0x30u)); FPUSH(v); }
/* 7fccf3: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 7fccf6: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7fccf8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7fccfa: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fccfd: jne 0x7fcd04 */
  if (!zf) goto L_7fcd04;
L_7fccff: /* 7fccff: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7fcd01: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
L_7fcd04: /* 7fcd04: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 7fcd07: fstp dword ptr [esi + 0x4a4] */
  WF32((uint32_t)(esi + 0x4a4u), ST0); FPOP();
/* 7fcd0d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fcd0e: call dword ptr [0xcfa34c] */
  esp -= 4; W32(esp, 0x7fcd14u); SPILL(); f_4e3139(); if (g_unwind) return; /* Core!?GetCenter@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 7fcd14: fld dword ptr [esi + 0x49c] */
  { double v = F32((uint32_t)(esi + 0x49cu)); FPUSH(v); }
/* 7fcd1a: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7fcd1c: fstp dword ptr [esi + 0x49c] */
  WF32((uint32_t)(esi + 0x49cu), ST0); FPOP();
/* 7fcd22: fld dword ptr [esi + 0x4a0] */
  { double v = F32((uint32_t)(esi + 0x4a0u)); FPUSH(v); }
/* 7fcd28: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7fcd2b: fstp dword ptr [esi + 0x4a0] */
  WF32((uint32_t)(esi + 0x4a0u), ST0); FPOP();
/* 7fcd31: fld dword ptr [esi + 0x4a4] */
  { double v = F32((uint32_t)(esi + 0x4a4u)); FPUSH(v); }
/* 7fcd37: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 7fcd3a: fstp dword ptr [esi + 0x4a4] */
  WF32((uint32_t)(esi + 0x4a4u), ST0); FPOP();
L_7fcd40: /* 7fcd40: fld dword ptr [esi + 0x49c] */
  { double v = F32((uint32_t)(esi + 0x49cu)); FPUSH(v); }
/* 7fcd46: add esi, 0x430 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x430u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7fcd4c: fmul dword ptr [esi - 0x3f8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffc08u)));
/* 7fcd52: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fcd53: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7fcd56: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7fcd59: fld dword ptr [esi + 0x70] */
  { double v = F32((uint32_t)(esi + 0x70u)); FPUSH(v); }
/* 7fcd5c: fmul dword ptr [esi - 0x3f4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffc0cu)));
/* 7fcd62: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7fcd65: fld dword ptr [esi + 0x74] */
  { double v = F32((uint32_t)(esi + 0x74u)); FPUSH(v); }
/* 7fcd68: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7fcd6b: fmul dword ptr [esi - 0x3f0] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfffffc10u)));
/* 7fcd71: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7fcd73: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 7fcd76: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fcd79: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7fcd7c: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7fcd7f: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 7fcd82: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fcd83: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fcd8a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fcd8b: mov esp, ebp */
  esp = ebp;
/* 7fcd8d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fcd8e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7fcd91(void) {
  LOAD_REGS();
L_7fcd91: /* 7fcd91: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7fcd94: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7fcd99: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7fcd9c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fcd9d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7fcda0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fcda5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7fcda5(); return;
}

void f_7fcda5(void) {
  LOAD_REGS();
L_7fcda5: /* 7fcda5: push 0xa1262c */
  { uint32_t v = 0xa1262cu; esp -= 4; W32(esp, v); }
/* 7fcdaa: push 0xae0b64 */
  { uint32_t v = 0xae0b64u; esp -= 4; W32(esp, v); }
/* 7fcdaf: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7fcdb5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7fcdb5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fcdb8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fcdba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fcdbc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fcdc1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7fcdc1: guest_badaddr(0x7fcdc1); return;
}

void f_7fce30(void) {
  LOAD_REGS();
L_7fce30: /* 7fce30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fce31: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7fce35: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fce37: je 0x7fce4e */
  if (zf) goto L_7fce4e;
L_7fce39: /* 7fce39: push 0xb86630 */
  { uint32_t v = 0xb86630u; esp -= 4; W32(esp, v); }
/* 7fce3e: mov ecx, esi */
  ecx = esi;
/* 7fce40: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7fce46u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7fce46: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fce48: je 0x7fce4e */
  if (zf) goto L_7fce4e;
L_7fce4a: /* 7fce4a: mov eax, esi */
  eax = esi;
/* 7fce4c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fce4d: ret  */
  esp += 4; SPILL(); return;
L_7fce4e: /* 7fce4e: xor eax, eax */
  eax = 0;
/* 7fce50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fce51: ret  */
  esp += 4; SPILL(); return;
}

void f_7fce70(void) {
  LOAD_REGS();
L_7fce70: /* 7fce70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fce71: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7fce75: push 0xb87af0 */
  { uint32_t v = 0xb87af0u; esp -= 4; W32(esp, v); }
/* 7fce7a: mov ecx, esi */
  ecx = esi;
/* 7fce7c: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7fce82u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7fce82: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fce84: jne 0x7fce9e */
  if (!zf) goto L_7fce9e;
L_7fce86: /* 7fce86: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7fce8b: push 0xae0b80 */
  { uint32_t v = 0xae0b80u; esp -= 4; W32(esp, v); }
/* 7fce90: push 0xae0bc4 */
  { uint32_t v = 0xae0bc4u; esp -= 4; W32(esp, v); }
/* 7fce95: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7fce9bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7fce9b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7fce9e: /* 7fce9e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7fcea2: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7fcea5: jne 0x7fcead */
  if (!zf) goto L_7fcead;
L_7fcea7: /* 7fcea7: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7fceadu); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_7fcead: /* 7fcead: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7fceb3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fceb5: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7fceb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fcebb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fcebc: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7fcec0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fcec2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fcec3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fcec4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fcec5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fcec6: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7fceccu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7fcecc: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fcecf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fced0: ret  */
  esp += 4; SPILL(); return;
}

void f_7fcf00(void) {
  LOAD_REGS();
L_7fcf00: /* 7fcf00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7fcf01: mov ebp, esp */
  ebp = esp;
/* 7fcf03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fcf05: push 0x9d1bd0 */
  { uint32_t v = 0x9d1bd0u; esp -= 4; W32(esp, v); }
/* 7fcf0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7fcf10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fcf11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7fcf18: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fcf1b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7fcf1e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fcf1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fcf20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fcf21: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7fcf24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fcf25: mov ebx, ecx */
  ebx = ecx;
/* 7fcf27: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7fcf2e: call 0x6ccb12 */
  esp -= 4; W32(esp, 0x7fcf33u); SPILL(); f_6ccb12(); if (g_unwind) return; RELOAD();
/* 7fcf33: mov ecx, dword ptr [ebx + 0x46c] */
  ecx = R32((uint32_t)(ebx + 0x46cu));
/* 7fcf39: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7fcf3c: test byte ptr [ebx + 0x2b4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x2b4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fcf43: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 7fcf46: je 0x7fcf59 */
  if (zf) goto L_7fcf59;
L_7fcf48: /* 7fcf48: lea ecx, [ebx + 0x29c] */
  ecx = (uint32_t)(ebx + 0x29cu);
/* 7fcf4e: call dword ptr [0xcfa63c] */
  esp -= 4; W32(esp, 0x7fcf54u); SPILL(); f_4e3585(); if (g_unwind) return; /* Core!?GetMax@FRange@@QBEMXZ */ RELOAD();
/* 7fcf54: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 7fcf57: jmp 0x7fcfb0 */
  goto L_7fcfb0;
L_7fcf59: /* 7fcf59: lea ecx, [ebx + 0x2ac] */
  ecx = (uint32_t)(ebx + 0x2acu);
/* 7fcf5f: call dword ptr [0xcfa63c] */
  esp -= 4; W32(esp, 0x7fcf65u); SPILL(); f_4e3585(); if (g_unwind) return; /* Core!?GetMax@FRange@@QBEMXZ */ RELOAD();
/* 7fcf65: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7fcf68: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7fcf6b: lea ecx, [ebx + 0x2a4] */
  ecx = (uint32_t)(ebx + 0x2a4u);
/* 7fcf71: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7fcf74: call dword ptr [0xcfa63c] */
  esp -= 4; W32(esp, 0x7fcf7au); SPILL(); f_4e3585(); if (g_unwind) return; /* Core!?GetMax@FRange@@QBEMXZ */ RELOAD();
/* 7fcf7a: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7fcf7d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7fcf80: lea ecx, [ebx + 0x29c] */
  ecx = (uint32_t)(ebx + 0x29cu);
/* 7fcf86: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7fcf89: call dword ptr [0xcfa63c] */
  esp -= 4; W32(esp, 0x7fcf8fu); SPILL(); f_4e3585(); if (g_unwind) return; /* Core!?GetMax@FRange@@QBEMXZ */ RELOAD();
/* 7fcf8f: fcom dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
/* 7fcf92: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 7fcf95: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7fcf97: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fcf9a: je 0x7fcfa1 */
  if (zf) goto L_7fcfa1;
L_7fcf9c: /* 7fcf9c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7fcf9e: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
L_7fcfa1: /* 7fcfa1: fcom dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7fcfa4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7fcfa6: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fcfa9: je 0x7fcfb0 */
  if (zf) goto L_7fcfb0;
L_7fcfab: /* 7fcfab: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7fcfad: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
L_7fcfb0: /* 7fcfb0: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 7fcfb3: mov ecx, dword ptr [ebx + 0x4a4] */
  ecx = R32((uint32_t)(ebx + 0x4a4u));
/* 7fcfb9: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7fcfbc: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 7fcfbf: fld dword ptr [ebx + 0x4a0] */
  { double v = F32((uint32_t)(ebx + 0x4a0u)); FPUSH(v); }
/* 7fcfc5: fld dword ptr [ebx + 0x49c] */
  { double v = F32((uint32_t)(ebx + 0x49cu)); FPUSH(v); }
/* 7fcfcb: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 7fcfce: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7fcfd0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7fcfd2: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fcfd5: jne 0x7fcfdc */
  if (!zf) goto L_7fcfdc;
L_7fcfd7: /* 7fcfd7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7fcfd9: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
L_7fcfdc: /* 7fcfdc: fcom dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7fcfdf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7fcfe1: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fcfe4: je 0x7fcfeb */
  if (zf) goto L_7fcfeb;
L_7fcfe6: /* 7fcfe6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7fcfe8: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
L_7fcfeb: /* 7fcfeb: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 7fcfee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fcfef: lea edi, [ebx + 0x414] */
  edi = (uint32_t)(ebx + 0x414u);
/* 7fcff5: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 7fcff8: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7fcffa: mov ecx, edi */
  ecx = edi;
/* 7fcffc: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 7fcfff: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7fd002: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fd003: call dword ptr [0xcfa60c] */
  esp -= 4; W32(esp, 0x7fd009u); SPILL(); f_4e3332(); if (g_unwind) return; /* Core!?ExpandBy@FBox@@QBE?AV1@M@Z */ RELOAD();
/* 7fd009: mov ebx, dword ptr [ebx + 0x3f0] */
  ebx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd00f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd011: mov ecx, 7 */
  ecx = 0x7u;
/* 7fd016: mov esi, eax */
  esi = eax;
/* 7fd018: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd01a: je 0x7fd04a */
  if (zf) goto L_7fd04a;
L_7fd01c: /* 7fd01c: lea ecx, [ebx + 0x294] */
  ecx = (uint32_t)(ebx + 0x294u);
/* 7fd022: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x7fd028u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 7fd028: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 7fd02b: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 7fd02e: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7fd031: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fd032: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 7fd035: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7fd038: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd039: mov ecx, edi */
  ecx = edi;
/* 7fd03b: call dword ptr [0xcfa60c] */
  esp -= 4; W32(esp, 0x7fd041u); SPILL(); f_4e3332(); if (g_unwind) return; /* Core!?ExpandBy@FBox@@QBE?AV1@M@Z */ RELOAD();
/* 7fd041: mov ecx, 7 */
  ecx = 0x7u;
/* 7fd046: mov esi, eax */
  esi = eax;
/* 7fd048: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_7fd04a: /* 7fd04a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fd04d: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7fd050: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fd051: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fd052: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fd059: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fd05a: mov esp, ebp */
  esp = ebp;
/* 7fd05c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fd05d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7fd060(void) {
  LOAD_REGS();
L_7fd060: /* 7fd060: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7fd063: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7fd068: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 7fd06b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fd06c: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 7fd06f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fd074u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7fd074(); return;
}

void f_7fd074(void) {
  LOAD_REGS();
L_7fd074: /* 7fd074: push 0xa12668 */
  { uint32_t v = 0xa12668u; esp -= 4; W32(esp, v); }
/* 7fd079: push 0xae0b6c */
  { uint32_t v = 0xae0b6cu; esp -= 4; W32(esp, v); }
/* 7fd07e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7fd084u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7fd084: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fd087: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd089: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd08b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fd090u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7fd090: guest_badaddr(0x7fd090); return;
}

void f_7fd110(void) {
  LOAD_REGS();
L_7fd110: /* 7fd110: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7fd111: mov ebp, esp */
  ebp = esp;
/* 7fd113: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fd115: push 0x9d1dd2 */
  { uint32_t v = 0x9d1dd2u; esp -= 4; W32(esp, v); }
/* 7fd11a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7fd120: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd121: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7fd128: sub esp, 0xef8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xef8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fd12e: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7fd131: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fd132: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fd133: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7fd136: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fd137: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7fd13a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7fd13d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fd13e: mov ebx, ecx */
  ebx = ecx;
/* 7fd140: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7fd143: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd144: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fd145: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fd146: mov ecx, ebx */
  ecx = ebx;
/* 7fd148: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 7fd14b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7fd152: call 0x6c20b8 */
  esp -= 4; W32(esp, 0x7fd157u); SPILL(); f_6c20b8(); if (g_unwind) return; RELOAD();
/* 7fd157: mov eax, dword ptr [ebx + 0x494] */
  eax = R32((uint32_t)(ebx + 0x494u));
/* 7fd15d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd15f: jne 0x7fd176 */
  if (!zf) goto L_7fd176;
L_7fd161: /* 7fd161: xor eax, eax */
  eax = 0;
/* 7fd163: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fd166: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fd16d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fd16e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fd16f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fd170: mov esp, ebp */
  esp = ebp;
/* 7fd172: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fd173: ret 0x10 */
  esp += 20; SPILL(); return;
L_7fd176: /* 7fd176: test byte ptr [ebx + 0x498], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x498u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd17d: je 0x7fd19e */
  if (zf) goto L_7fd19e;
L_7fd17f: /* 7fd17f: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 7fd182: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x7fd187u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 7fd187: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd189: jne 0x7fd19e */
  if (!zf) goto L_7fd19e;
L_7fd18b: /* 7fd18b: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 7fd18e: call 0x6cbd7a */
  esp -= 4; W32(esp, 0x7fd193u); SPILL(); f_6cbd7a(); if (g_unwind) return; RELOAD();
/* 7fd193: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd195: je 0x7fd19e */
  if (zf) goto L_7fd19e;
L_7fd197: /* 7fd197: mov edi, 1 */
  edi = 0x1u;
/* 7fd19c: jmp 0x7fd1a0 */
  goto L_7fd1a0;
L_7fd19e: /* 7fd19e: xor edi, edi */
  edi = 0;
L_7fd1a0: /* 7fd1a0: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7fd1a2: lea edx, [ebx + 0x414] */
  edx = (uint32_t)(ebx + 0x414u);
/* 7fd1a8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fd1a9: lea ecx, [ebp - 0x420] */
  ecx = (uint32_t)(ebp + 0xfffffbe0u);
/* 7fd1af: call dword ptr [0xcfa55c] */
  esp -= 4; W32(esp, 0x7fd1b5u); SPILL(); f_4e34c2(); if (g_unwind) return; /* Core!??0FSphere@@QAE@PBVFVector@@H@Z */ RELOAD();
/* 7fd1b5: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fd1b8: lea eax, [ebp - 0x420] */
  eax = (uint32_t)(ebp + 0xfffffbe0u);
/* 7fd1be: mov ecx, esp */
  ecx = esp;
/* 7fd1c0: mov dword ptr [ebp - 0x3c], esp */
  W32((uint32_t)(ebp + 0xffffffc4u), esp);
/* 7fd1c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd1c4: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x7fd1cau); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 7fd1ca: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7fd1cd: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7fd1d0: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 7fd1d3: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7fd1d5: xor ecx, ecx */
  ecx = 0;
/* 7fd1d7: cmp dword ptr [eax + 0x540], 7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x540u))); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7fd1de: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7fd1e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fd1e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd1e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fd1e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd1e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fd1e8: mov ecx, esi */
  ecx = esi;
/* 7fd1ea: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x7fd1edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fd1ed: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd1ef: je 0x7fd243 */
  if (zf) goto L_7fd243;
L_7fd1f1: /* 7fd1f1: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd1f7: and dword ptr [eax + 0x84], 0xffffdfff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x84u))); uint32_t b = (uint32_t)(0xffffdfffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x84u), r);
  }
/* 7fd201: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7fd204: mov ecx, dword ptr [eax + 0xb8] */
  ecx = R32((uint32_t)(eax + 0xb8u));
/* 7fd20a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7fd20c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fd20d: mov ecx, esi */
  ecx = esi;
/* 7fd20f: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x7fd212u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fd212: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 7fd215: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 7fd21c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7fd220: /* 7fd220: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd222: je 0x7fd243 */
  if (zf) goto L_7fd243;
L_7fd224: /* 7fd224: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7fd226: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7fd229: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7fd22b: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7fd230: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd231: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fd232: mov ecx, esi */
  ecx = esi;
/* 7fd234: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x7fd237u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fd237: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7fd23a: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 7fd23d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7fd23e: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7fd241: jmp 0x7fd220 */
  goto L_7fd220;
L_7fd243: /* 7fd243: mov edx, dword ptr [ebx + 0x494] */
  edx = R32((uint32_t)(ebx + 0x494u));
/* 7fd249: lea eax, [edx + 0x60] */
  eax = (uint32_t)(edx + 0x60u);
/* 7fd24c: mov dword ptr [ebp - 0x444], eax */
  W32((uint32_t)(ebp + 0xfffffbbcu), eax);
/* 7fd252: mov ecx, 8 */
  ecx = 0x8u;
/* 7fd257: xor eax, eax */
  eax = 0;
/* 7fd259: lea edi, [ebp - 0x440] */
  edi = (uint32_t)(ebp + 0xfffffbc0u);
/* 7fd25f: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd261: mov ecx, 1 */
  ecx = 0x1u;
L_7fd266: /* 7fd266: cmp eax, dword ptr [edx + 0xb8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0xb8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7fd26c: jge 0x7fd284 */
  if ((sf == of)) goto L_7fd284;
L_7fd26e: /* 7fd26e: mov edi, eax */
  edi = eax;
/* 7fd270: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7fd273: add edi, dword ptr [edx + 0xb4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0xb4u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7fd279: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7fd27a: mov dword ptr [ebp + ecx*4 - 0x448], edi */
  W32((uint32_t)(ebp + ecx*4 + 0xfffffbb8u), edi);
/* 7fd281: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7fd282: jmp 0x7fd266 */
  goto L_7fd266;
L_7fd284: /* 7fd284: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7fd286: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fd287: lea eax, [ebp - 0x444] */
  eax = (uint32_t)(ebp + 0xfffffbbcu);
/* 7fd28d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd28e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd290: mov ecx, esi */
  ecx = esi;
/* 7fd292: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0x7fd295u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fd295: mov eax, dword ptr [ebx + 0x494] */
  eax = R32((uint32_t)(ebx + 0x494u));
/* 7fd29b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7fd29d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd29f: add eax, 0xc0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7fd2a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd2a5: mov ecx, esi */
  ecx = esi;
/* 7fd2a7: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x7fd2aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fd2aa: xor eax, eax */
  eax = 0;
/* 7fd2ac: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7fd2b3: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 7fd2b6: jmp 0x7fd2c0 */
  goto L_7fd2c0;
L_7fd2c0: /* 7fd2c0: mov edi, dword ptr [ebx + 0x494] */
  edi = R32((uint32_t)(ebx + 0x494u));
/* 7fd2c6: cmp eax, dword ptr [edi + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7fd2c9: jge 0x7fe811 */
  if ((sf == of)) goto L_7fe811;
L_7fd2cf: /* 7fd2cf: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* 7fd2d2: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 7fd2d5: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 7fd2d8: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 7fd2db: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd2e1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fd2e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd2e4: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x7fd2eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fd2ea: mov esi, eax */
  esi = eax;
/* 7fd2ec: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd2ee: jne 0x7fd35e */
  if (!zf) goto L_7fd35e;
L_7fd2f0: /* 7fd2f0: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7fd2f3: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 7fd2f9: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7fd2fc: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 7fd2ff: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd301: jne 0x7fd35e */
  if (!zf) goto L_7fd35e;
L_7fd303: /* 7fd303: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 7fd308: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x7fd30eu); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 7fd30e: mov edi, eax */
  edi = eax;
/* 7fd310: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd312: je 0x7fd332 */
  if (zf) goto L_7fd332;
L_7fd314: /* 7fd314: push 0xb86100 */
  { uint32_t v = 0xb86100u; esp -= 4; W32(esp, v); }
/* 7fd319: mov ecx, edi */
  ecx = edi;
/* 7fd31b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7fd321u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7fd321: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd323: jne 0x7fd35b */
  if (!zf) goto L_7fd35b;
L_7fd325: /* 7fd325: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd326: mov ecx, edi */
  ecx = edi;
/* 7fd328: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7fd32eu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7fd32e: mov esi, eax */
  esi = eax;
/* 7fd330: jmp 0x7fd337 */
  goto L_7fd337;
L_7fd332: /* 7fd332: mov esi, 0xae0c50 */
  esi = 0xae0c50u;
L_7fd337: /* 7fd337: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 7fd33c: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7fd342u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7fd342: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 7fd348: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd349: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7fd34b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fd34c: push 0xae0c5c */
  { uint32_t v = 0xae0c5cu; esp -= 4; W32(esp, v); }
/* 7fd351: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd352: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7fd358u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7fd358: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7fd35b: /* 7fd35b: mov esi, dword ptr [edi + 0x2c] */
  esi = R32((uint32_t)(edi + 0x2cu));
L_7fd35e: /* 7fd35e: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7fd361: cmp word ptr [ecx + 0x10], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x10u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7fd366: mov edi, dword ptr [ebx + 0x3fc] */
  edi = R32((uint32_t)(ebx + 0x3fcu));
/* 7fd36c: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 7fd36f: je 0x7fe805 */
  if (zf) goto L_7fe805;
L_7fd375: /* 7fd375: test byte ptr [ebx + 0x498], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x498u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd37c: jne 0x7fd4e3 */
  if (!zf) goto L_7fd4e3;
L_7fd382: /* 7fd382: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd388: movzx edx, byte ptr [ebx + 0x314] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x314u)));
/* 7fd38f: mov ecx, dword ptr [eax + 0x3ac] */
  ecx = R32((uint32_t)(eax + 0x3acu));
/* 7fd395: mov dword ptr [ecx + 0x38], edx */
  W32((uint32_t)(ecx + 0x38u), edx);
/* 7fd398: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7fd39b: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 7fd39e: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7fd3a1: cmp dword ptr [ecx + 0x540], 7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x540u))); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7fd3a8: jne 0x7fd3bf */
  if (!zf) goto L_7fd3bf;
L_7fd3aa: /* 7fd3aa: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd3b0: mov eax, dword ptr [edx + 0x3ac] */
  eax = R32((uint32_t)(edx + 0x3acu));
/* 7fd3b6: mov dword ptr [eax + 0x48], 0 */
  W32((uint32_t)(eax + 0x48u), 0x0u);
/* 7fd3bd: jmp 0x7fd3e5 */
  goto L_7fd3e5;
L_7fd3bf: /* 7fd3bf: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd3c1: je 0x7fd3d4 */
  if (zf) goto L_7fd3d4;
L_7fd3c3: /* 7fd3c3: push 0xb86630 */
  { uint32_t v = 0xb86630u; esp -= 4; W32(esp, v); }
/* 7fd3c8: mov ecx, esi */
  ecx = esi;
/* 7fd3ca: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7fd3d0u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7fd3d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd3d2: jne 0x7fd3d6 */
  if (!zf) goto L_7fd3d6;
L_7fd3d4: /* 7fd3d4: xor esi, esi */
  esi = 0;
L_7fd3d6: /* 7fd3d6: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd3dc: mov edx, dword ptr [ecx + 0x3ac] */
  edx = R32((uint32_t)(ecx + 0x3acu));
/* 7fd3e2: mov dword ptr [edx + 0x48], esi */
  W32((uint32_t)(edx + 0x48u), esi);
L_7fd3e5: /* 7fd3e5: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd3eb: mov ecx, dword ptr [eax + 0x3ac] */
  ecx = R32((uint32_t)(eax + 0x3acu));
/* 7fd3f1: mov dword ptr [ecx + 0x3c], 0 */
  W32((uint32_t)(ecx + 0x3cu), 0x0u);
/* 7fd3f8: mov edx, dword ptr [ebx + 0x498] */
  edx = R32((uint32_t)(ebx + 0x498u));
/* 7fd3fe: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd404: mov ecx, dword ptr [eax + 0x3ac] */
  ecx = R32((uint32_t)(eax + 0x3acu));
/* 7fd40a: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 7fd40c: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7fd40f: mov dword ptr [ecx + 0x40], edx */
  W32((uint32_t)(ecx + 0x40u), edx);
/* 7fd412: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd418: mov eax, dword ptr [edx + 0x3ac] */
  eax = R32((uint32_t)(edx + 0x3acu));
/* 7fd41e: mov dword ptr [eax + 0x44], 1 */
  W32((uint32_t)(eax + 0x44u), 0x1u);
/* 7fd425: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd42b: mov eax, dword ptr [edx + 0x3ac] */
  eax = R32((uint32_t)(edx + 0x3acu));
/* 7fd431: mov ecx, dword ptr [ebx + 0x1c8] */
  ecx = R32((uint32_t)(ebx + 0x1c8u));
/* 7fd437: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7fd43a: mov dword ptr [eax + 0x4c], ecx */
  W32((uint32_t)(eax + 0x4cu), ecx);
/* 7fd43d: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd443: mov edx, dword ptr [ecx + 0x3ac] */
  edx = R32((uint32_t)(ecx + 0x3acu));
/* 7fd449: mov eax, dword ptr [ebx + 0x1c4] */
  eax = R32((uint32_t)(ebx + 0x1c4u));
/* 7fd44f: mov dword ptr [edx + 0x50], eax */
  W32((uint32_t)(edx + 0x50u), eax);
/* 7fd452: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd458: mov eax, dword ptr [ecx + 0x3ac] */
  eax = R32((uint32_t)(ecx + 0x3acu));
/* 7fd45e: mov esi, dword ptr [eax + 0x60] */
  esi = R32((uint32_t)(eax + 0x60u));
/* 7fd461: mov edx, dword ptr [ebx + 0x1c8] */
  edx = R32((uint32_t)(ebx + 0x1c8u));
/* 7fd467: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 7fd469: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7fd46b: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7fd46e: xor esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 7fd470: mov dword ptr [eax + 0x60], esi */
  W32((uint32_t)(eax + 0x60u), esi);
/* 7fd473: mov eax, dword ptr [ebx + 0x1c8] */
  eax = R32((uint32_t)(ebx + 0x1c8u));
/* 7fd479: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd47f: mov edx, dword ptr [ecx + 0x3ac] */
  edx = R32((uint32_t)(ecx + 0x3acu));
/* 7fd485: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7fd488: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7fd48b: mov dword ptr [edx + 0x54], eax */
  W32((uint32_t)(edx + 0x54u), eax);
/* 7fd48e: mov eax, dword ptr [ebx + 0x1c8] */
  eax = R32((uint32_t)(ebx + 0x1c8u));
/* 7fd494: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd49a: mov edx, dword ptr [ecx + 0x3ac] */
  edx = R32((uint32_t)(ecx + 0x3acu));
/* 7fd4a0: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7fd4a3: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7fd4a6: mov dword ptr [edx + 0x58], eax */
  W32((uint32_t)(edx + 0x58u), eax);
/* 7fd4a9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7fd4ac: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7fd4af: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x7fd4b4u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 7fd4b4: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd4ba: mov edx, dword ptr [ecx + 0x3ac] */
  edx = R32((uint32_t)(ecx + 0x3acu));
/* 7fd4c0: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7fd4c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd4c5: mov dword ptr [edx + 0x5c], eax */
  W32((uint32_t)(edx + 0x5cu), eax);
/* 7fd4c8: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd4ce: mov edx, dword ptr [edx + 0x3ac] */
  edx = R32((uint32_t)(edx + 0x3acu));
/* 7fd4d4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7fd4d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd4d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd4da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fd4db: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x7fd4deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fd4de: jmp 0x7fd630 */
  goto L_7fd630;
L_7fd4e3: /* 7fd4e3: mov eax, dword ptr [0xb91598] */
  eax = R32((uint32_t)(0xb91598u));
/* 7fd4e8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd4ea: jne 0x7fd560 */
  if (!zf) goto L_7fd560;
L_7fd4ec: /* 7fd4ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd4ee: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 7fd4f1: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7fd4f7u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7fd4f7: push 0xb87af0 */
  { uint32_t v = 0xb87af0u; esp -= 4; W32(esp, v); }
/* 7fd4fc: mov ecx, 0xb87af0 */
  ecx = 0xb87af0u;
/* 7fd501: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7fd507u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7fd507: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd509: jne 0x7fd523 */
  if (!zf) goto L_7fd523;
L_7fd50b: /* 7fd50b: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7fd510: push 0xae0b80 */
  { uint32_t v = 0xae0b80u; esp -= 4; W32(esp, v); }
/* 7fd515: push 0xae0bc4 */
  { uint32_t v = 0xae0bc4u; esp -= 4; W32(esp, v); }
/* 7fd51a: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7fd520u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7fd520: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7fd523: /* 7fd523: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7fd529u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 7fd529: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7fd52f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fd531: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7fd534: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd536: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fd537: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd539: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd53b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fd53c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd53d: push 0xb87af0 */
  { uint32_t v = 0xb87af0u; esp -= 4; W32(esp, v); }
/* 7fd542: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7fd548u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7fd548: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 7fd54e: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fd551: push 0xb91598 */
  { uint32_t v = 0xb91598u; esp -= 4; W32(esp, v); }
/* 7fd556: mov dword ptr [0xb91598], eax */
  W32((uint32_t)(0xb91598u), eax);
/* 7fd55b: call 0x6c1203 */
  esp -= 4; W32(esp, 0x7fd560u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
L_7fd560: /* 7fd560: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7fd563: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7fd566: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x7fd56bu); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 7fd56b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd56d: je 0x7fd607 */
  if (zf) goto L_7fd607;
L_7fd573: /* 7fd573: mov eax, dword ptr [0xb91594] */
  eax = R32((uint32_t)(0xb91594u));
/* 7fd578: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd57a: jne 0x7fd5f9 */
  if (!zf) goto L_7fd5f9;
L_7fd57c: /* 7fd57c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd57e: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7fd581: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7fd587u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7fd587: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 7fd58c: mov ecx, 0xb88020 */
  ecx = 0xb88020u;
/* 7fd591: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7fd597u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7fd597: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd599: jne 0x7fd5b3 */
  if (!zf) goto L_7fd5b3;
L_7fd59b: /* 7fd59b: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7fd5a0: push 0xae0be8 */
  { uint32_t v = 0xae0be8u; esp -= 4; W32(esp, v); }
/* 7fd5a5: push 0xae0c2c */
  { uint32_t v = 0xae0c2cu; esp -= 4; W32(esp, v); }
/* 7fd5aa: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7fd5b0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7fd5b0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7fd5b3: /* 7fd5b3: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7fd5b9u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 7fd5b9: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7fd5bf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fd5c1: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7fd5c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd5c6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fd5c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd5c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd5cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fd5cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd5cd: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 7fd5d2: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7fd5d8u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7fd5d8: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 7fd5de: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fd5e1: push 0xb91594 */
  { uint32_t v = 0xb91594u; esp -= 4; W32(esp, v); }
/* 7fd5e6: mov dword ptr [0xb91594], eax */
  W32((uint32_t)(0xb91594u), eax);
/* 7fd5eb: call 0x6c1203 */
  esp -= 4; W32(esp, 0x7fd5f0u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 7fd5f0: mov eax, dword ptr [0xb91594] */
  eax = R32((uint32_t)(0xb91594u));
/* 7fd5f5: or dword ptr [eax + 0x5c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x5cu), r);
  }
L_7fd5f9: /* 7fd5f9: mov eax, dword ptr [0xb91594] */
  eax = R32((uint32_t)(0xb91594u));
/* 7fd5fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd600: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd602: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd604: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd605: jmp 0x7fd628 */
  goto L_7fd628;
L_7fd607: /* 7fd607: test byte ptr [ebx + 0x498], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x498u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd60e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd610: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd612: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd614: je 0x7fd627 */
  if (zf) goto L_7fd627;
L_7fd616: /* 7fd616: mov ecx, dword ptr [0xb91598] */
  ecx = R32((uint32_t)(0xb91598u));
/* 7fd61c: mov dword ptr [ecx + 0x38], esi */
  W32((uint32_t)(ecx + 0x38u), esi);
/* 7fd61f: mov eax, dword ptr [0xb91598] */
  eax = R32((uint32_t)(0xb91598u));
/* 7fd624: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd625: jmp 0x7fd628 */
  goto L_7fd628;
L_7fd627: /* 7fd627: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_7fd628: /* 7fd628: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7fd62b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fd62d: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x7fd630u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7fd630: /* 7fd630: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7fd637: jmp 0x7fd640 */
  goto L_7fd640;
L_7fd640: /* 7fd640: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7fd643: cmp eax, dword ptr [ebx + 0x40c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x40cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7fd649: jge 0x7fe805 */
  if ((sf == of)) goto L_7fe805;
L_7fd64f: /* 7fd64f: test byte ptr [edi + 0xbc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0xbcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd656: jne 0x7fd66a */
  if (!zf) goto L_7fd66a;
L_7fd658: /* 7fd658: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7fd65b: add edi, 0xc8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7fd661: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7fd662: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 7fd665: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7fd668: jmp 0x7fd640 */
  goto L_7fd640;
L_7fd66a: /* 7fd66a: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 7fd66d: mov ecx, edi */
  ecx = edi;
/* 7fd66f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fd671: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7fd674: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7fd677: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7fd67a: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7fd67d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7fd681: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7fd684: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7fd687: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x7fd68du); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 7fd68d: mov esi, dword ptr [ebx + 0x214] */
  esi = R32((uint32_t)(ebx + 0x214u));
/* 7fd693: and esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  esi = r;
  }
/* 7fd696: je 0x7fd6d4 */
  if (zf) goto L_7fd6d4;
L_7fd698: /* 7fd698: fld dword ptr [edi + 0x30] */
  { double v = F32((uint32_t)(edi + 0x30u)); FPUSH(v); }
/* 7fd69b: fmul dword ptr [edi + 0xac] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xacu)));
/* 7fd6a1: fadd dword ptr [edi + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x3cu)));
/* 7fd6a4: call 0x99c958 */
  esp -= 4; W32(esp, 0x7fd6a9u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7fd6a9: fld dword ptr [edi + 0x34] */
  { double v = F32((uint32_t)(edi + 0x34u)); FPUSH(v); }
/* 7fd6ac: fmul dword ptr [edi + 0xac] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xacu)));
/* 7fd6b2: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7fd6b5: fadd dword ptr [edi + 0x40] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x40u)));
/* 7fd6b8: call 0x99c958 */
  esp -= 4; W32(esp, 0x7fd6bdu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7fd6bd: fld dword ptr [edi + 0x38] */
  { double v = F32((uint32_t)(edi + 0x38u)); FPUSH(v); }
/* 7fd6c0: fmul dword ptr [edi + 0xac] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xacu)));
/* 7fd6c6: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 7fd6c9: fadd dword ptr [edi + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x44u)));
/* 7fd6cc: call 0x99c958 */
  esp -= 4; W32(esp, 0x7fd6d1u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7fd6d1: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
L_7fd6d4: /* 7fd6d4: cmp byte ptr [ebx + 0xf4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0xf4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7fd6db: jne 0x7fe109 */
  if (!zf) goto L_7fe109;
L_7fd6e1: /* 7fd6e1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd6e3: je 0x7fdc43 */
  if (zf) goto L_7fdc43;
L_7fd6e9: /* 7fd6e9: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7fd6ec: mov ebx, dword ptr [edx + 0x3f0] */
  ebx = R32((uint32_t)(edx + 0x3f0u));
/* 7fd6f2: lea eax, [ebx + 0x170] */
  eax = (uint32_t)(ebx + 0x170u);
/* 7fd6f8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7fd6fa: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7fd6fd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7fd700: mov dword ptr [ebp - 0x70], ecx */
  W32((uint32_t)(ebp + 0xffffff90u), ecx);
/* 7fd703: mov dword ptr [ebp - 0x6c], edx */
  W32((uint32_t)(ebp + 0xffffff94u), edx);
/* 7fd706: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 7fd709: mov dword ptr [ebp - 0x20c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffdf4u), 0x3f800000u);
/* 7fd713: mov dword ptr [ebp - 0x208], 0 */
  W32((uint32_t)(ebp + 0xfffffdf8u), 0x0u);
/* 7fd71d: mov dword ptr [ebp - 0x204], 0 */
  W32((uint32_t)(ebp + 0xfffffdfcu), 0x0u);
/* 7fd727: mov dword ptr [ebp - 0x200], 0 */
  W32((uint32_t)(ebp + 0xfffffe00u), 0x0u);
/* 7fd731: mov dword ptr [ebp - 0x1fc], 0 */
  W32((uint32_t)(ebp + 0xfffffe04u), 0x0u);
/* 7fd73b: mov dword ptr [ebp - 0x1f8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe08u), 0x3f800000u);
/* 7fd745: mov dword ptr [ebp - 0x1f4], 0 */
  W32((uint32_t)(ebp + 0xfffffe0cu), 0x0u);
/* 7fd74f: mov dword ptr [ebp - 0x1f0], 0 */
  W32((uint32_t)(ebp + 0xfffffe10u), 0x0u);
/* 7fd759: mov dword ptr [ebp - 0x1ec], 0 */
  W32((uint32_t)(ebp + 0xfffffe14u), 0x0u);
/* 7fd763: mov dword ptr [ebp - 0x1e8], 0 */
  W32((uint32_t)(ebp + 0xfffffe18u), 0x0u);
/* 7fd76d: mov dword ptr [ebp - 0x1e4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe1cu), 0x3f800000u);
/* 7fd777: mov dword ptr [ebp - 0x1e0], 0 */
  W32((uint32_t)(ebp + 0xfffffe20u), 0x0u);
/* 7fd781: mov dword ptr [ebp - 0x1dc], ecx */
  W32((uint32_t)(ebp + 0xfffffe24u), ecx);
/* 7fd787: mov dword ptr [ebp - 0x1d8], edx */
  W32((uint32_t)(ebp + 0xfffffe28u), edx);
/* 7fd78d: mov dword ptr [ebp - 0x1d4], eax */
  W32((uint32_t)(ebp + 0xfffffe2cu), eax);
/* 7fd793: mov dword ptr [ebp - 0x1d0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe30u), 0x3f800000u);
/* 7fd79d: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fd7a2: lea esi, [ebp - 0x20c] */
  esi = (uint32_t)(ebp + 0xfffffdf4u);
/* 7fd7a8: lea edi, [ebp - 0x8c4] */
  edi = (uint32_t)(ebp + 0xfffff73cu);
/* 7fd7ae: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd7b0: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fd7b5: lea esi, [ebp - 0x20c] */
  esi = (uint32_t)(ebp + 0xfffffdf4u);
/* 7fd7bb: lea edi, [ebp - 0x5c4] */
  edi = (uint32_t)(ebp + 0xfffffa3cu);
/* 7fd7c1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd7c3: lea ecx, [ebx + 0x17c] */
  ecx = (uint32_t)(ebx + 0x17cu);
/* 7fd7c9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7fd7cb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fd7ce: mov edx, esp */
  edx = esp;
/* 7fd7d0: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7fd7d2: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7fd7d5: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7fd7d8: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7fd7db: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7fd7de: lea ecx, [ebp - 0xbc4] */
  ecx = (uint32_t)(ebp + 0xfffff43cu);
/* 7fd7e4: call 0x6c9160 */
  esp -= 4; W32(esp, 0x7fd7e9u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 7fd7e9: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fd7ee: mov esi, eax */
  esi = eax;
/* 7fd7f0: lea edi, [ebp - 0x844] */
  edi = (uint32_t)(ebp + 0xfffff7bcu);
/* 7fd7f6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd7f8: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7fd7fb: mov esi, eax */
  esi = eax;
/* 7fd7fd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7fd800: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fd805: lea edi, [ebp - 0xa44] */
  edi = (uint32_t)(ebp + 0xfffff5bcu);
/* 7fd80b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd80d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7fd810: mov dword ptr [ebp - 0xcc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x3f800000u);
/* 7fd81a: mov dword ptr [ebp - 0xc8], 0 */
  W32((uint32_t)(ebp + 0xffffff38u), 0x0u);
/* 7fd824: mov dword ptr [ebp - 0xc4], 0 */
  W32((uint32_t)(ebp + 0xffffff3cu), 0x0u);
/* 7fd82e: mov dword ptr [ebp - 0xc0], 0 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x0u);
/* 7fd838: mov dword ptr [ebp - 0xbc], 0 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x0u);
/* 7fd842: mov dword ptr [ebp - 0xb8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x3f800000u);
/* 7fd84c: mov dword ptr [ebp - 0xb4], 0 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x0u);
/* 7fd856: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 7fd860: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 7fd86a: mov dword ptr [ebp - 0xa8], 0 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x0u);
/* 7fd874: mov dword ptr [ebp - 0xa4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x3f800000u);
/* 7fd87e: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 7fd888: mov dword ptr [ebp - 0x9c], edx */
  W32((uint32_t)(ebp + 0xffffff64u), edx);
/* 7fd88e: mov dword ptr [ebp - 0x98], eax */
  W32((uint32_t)(ebp + 0xffffff68u), eax);
/* 7fd894: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 7fd89a: mov dword ptr [ebp - 0x90], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x3f800000u);
/* 7fd8a4: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fd8a9: lea esi, [ebp - 0xcc] */
  esi = (uint32_t)(ebp + 0xffffff34u);
/* 7fd8af: lea edi, [ebp - 0xd44] */
  edi = (uint32_t)(ebp + 0xfffff2bcu);
/* 7fd8b5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd8b7: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7fd8ba: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fd8bd: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fd8c2: lea esi, [ebp - 0xcc] */
  esi = (uint32_t)(ebp + 0xffffff34u);
/* 7fd8c8: lea edi, [ebp - 0x544] */
  edi = (uint32_t)(ebp + 0xfffffabcu);
/* 7fd8ce: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd8d0: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7fd8d3: mov edx, esp */
  edx = esp;
/* 7fd8d5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7fd8d7: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7fd8da: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7fd8dd: lea ecx, [ebp - 0x7c4] */
  ecx = (uint32_t)(ebp + 0xfffff83cu);
/* 7fd8e3: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7fd8e6: call 0x6c9160 */
  esp -= 4; W32(esp, 0x7fd8ebu); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 7fd8eb: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fd8f0: mov esi, eax */
  esi = eax;
/* 7fd8f2: lea edi, [ebp - 0xb44] */
  edi = (uint32_t)(ebp + 0xfffff4bcu);
/* 7fd8f8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd8fa: mov esi, eax */
  esi = eax;
/* 7fd8fc: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fd901: lea edi, [ebp - 0xcc4] */
  edi = (uint32_t)(ebp + 0xfffff33cu);
/* 7fd907: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd909: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7fd90c: add ecx, 0x6c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7fd90f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fd911: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7fd914: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7fd917: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 7fd91a: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 7fd91d: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 7fd920: mov dword ptr [ebp - 0x18c], edx */
  W32((uint32_t)(ebp + 0xfffffe74u), edx);
/* 7fd926: mov dword ptr [ebp - 0x188], 0 */
  W32((uint32_t)(ebp + 0xfffffe78u), 0x0u);
/* 7fd930: mov dword ptr [ebp - 0x184], 0 */
  W32((uint32_t)(ebp + 0xfffffe7cu), 0x0u);
/* 7fd93a: mov dword ptr [ebp - 0x180], 0 */
  W32((uint32_t)(ebp + 0xfffffe80u), 0x0u);
/* 7fd944: mov dword ptr [ebp - 0x17c], 0 */
  W32((uint32_t)(ebp + 0xfffffe84u), 0x0u);
/* 7fd94e: mov dword ptr [ebp - 0x178], eax */
  W32((uint32_t)(ebp + 0xfffffe88u), eax);
/* 7fd954: mov dword ptr [ebp - 0x174], 0 */
  W32((uint32_t)(ebp + 0xfffffe8cu), 0x0u);
/* 7fd95e: mov dword ptr [ebp - 0x170], 0 */
  W32((uint32_t)(ebp + 0xfffffe90u), 0x0u);
/* 7fd968: mov dword ptr [ebp - 0x16c], 0 */
  W32((uint32_t)(ebp + 0xfffffe94u), 0x0u);
/* 7fd972: mov dword ptr [ebp - 0x168], 0 */
  W32((uint32_t)(ebp + 0xfffffe98u), 0x0u);
/* 7fd97c: mov dword ptr [ebp - 0x164], ecx */
  W32((uint32_t)(ebp + 0xfffffe9cu), ecx);
/* 7fd982: mov dword ptr [ebp - 0x160], 0 */
  W32((uint32_t)(ebp + 0xfffffea0u), 0x0u);
/* 7fd98c: mov dword ptr [ebp - 0x15c], 0 */
  W32((uint32_t)(ebp + 0xfffffea4u), 0x0u);
/* 7fd996: mov dword ptr [ebp - 0x158], 0 */
  W32((uint32_t)(ebp + 0xfffffea8u), 0x0u);
/* 7fd9a0: mov dword ptr [ebp - 0x154], 0 */
  W32((uint32_t)(ebp + 0xfffffeacu), 0x0u);
/* 7fd9aa: mov dword ptr [ebp - 0x150], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeb0u), 0x3f800000u);
/* 7fd9b4: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fd9b9: lea esi, [ebp - 0x18c] */
  esi = (uint32_t)(ebp + 0xfffffe74u);
/* 7fd9bf: lea edi, [ebp - 0x744] */
  edi = (uint32_t)(ebp + 0xfffff8bcu);
/* 7fd9c5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd9c7: fld dword ptr [ebx + 0x29c] */
  { double v = F32((uint32_t)(ebx + 0x29cu)); FPUSH(v); }
/* 7fd9cd: fchs  */
  ST0 = -ST0;
/* 7fd9cf: fld dword ptr [ebx + 0x298] */
  { double v = F32((uint32_t)(ebx + 0x298u)); FPUSH(v); }
/* 7fd9d5: fchs  */
  ST0 = -ST0;
/* 7fd9d7: fld dword ptr [ebx + 0x294] */
  { double v = F32((uint32_t)(ebx + 0x294u)); FPUSH(v); }
/* 7fd9dd: mov dword ptr [ebp - 0x38c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc74u), 0x3f800000u);
/* 7fd9e7: fchs  */
  ST0 = -ST0;
/* 7fd9e9: mov dword ptr [ebp - 0x388], 0 */
  W32((uint32_t)(ebp + 0xfffffc78u), 0x0u);
/* 7fd9f3: fstp dword ptr [ebp - 0x35c] */
  WF32((uint32_t)(ebp + 0xfffffca4u), ST0); FPOP();
/* 7fd9f9: mov dword ptr [ebp - 0x384], 0 */
  W32((uint32_t)(ebp + 0xfffffc7cu), 0x0u);
/* 7fda03: mov dword ptr [ebp - 0x380], 0 */
  W32((uint32_t)(ebp + 0xfffffc80u), 0x0u);
/* 7fda0d: fstp dword ptr [ebp - 0x358] */
  WF32((uint32_t)(ebp + 0xfffffca8u), ST0); FPOP();
/* 7fda13: mov dword ptr [ebp - 0x37c], 0 */
  W32((uint32_t)(ebp + 0xfffffc84u), 0x0u);
/* 7fda1d: mov dword ptr [ebp - 0x378], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc88u), 0x3f800000u);
/* 7fda27: fstp dword ptr [ebp - 0x354] */
  WF32((uint32_t)(ebp + 0xfffffcacu), ST0); FPOP();
/* 7fda2d: mov dword ptr [ebp - 0x374], 0 */
  W32((uint32_t)(ebp + 0xfffffc8cu), 0x0u);
/* 7fda37: mov dword ptr [ebp - 0x370], 0 */
  W32((uint32_t)(ebp + 0xfffffc90u), 0x0u);
/* 7fda41: mov dword ptr [ebp - 0x36c], 0 */
  W32((uint32_t)(ebp + 0xfffffc94u), 0x0u);
/* 7fda4b: mov dword ptr [ebp - 0x368], 0 */
  W32((uint32_t)(ebp + 0xfffffc98u), 0x0u);
/* 7fda55: mov dword ptr [ebp - 0x364], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc9cu), 0x3f800000u);
/* 7fda5f: mov dword ptr [ebp - 0x360], 0 */
  W32((uint32_t)(ebp + 0xfffffca0u), 0x0u);
/* 7fda69: mov dword ptr [ebp - 0x350], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffcb0u), 0x3f800000u);
/* 7fda73: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7fda77: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fda7a: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fda7f: lea esi, [ebp - 0x18c] */
  esi = (uint32_t)(ebp + 0xfffffe74u);
/* 7fda85: mov edi, esp */
  edi = esp;
/* 7fda87: lea edx, [ebp - 0xec4] */
  edx = (uint32_t)(ebp + 0xfffff13cu);
/* 7fda8d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fda8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fda90: lea ecx, [ebp - 0x38c] */
  ecx = (uint32_t)(ebp + 0xfffffc74u);
/* 7fda96: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fda9cu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fda9c: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fda9f: mov edi, esp */
  edi = esp;
/* 7fdaa1: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdaa6: lea esi, [ebp - 0xcc4] */
  esi = (uint32_t)(ebp + 0xfffff33cu);
/* 7fdaac: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdaae: lea ecx, [ebp - 0x6c4] */
  ecx = (uint32_t)(ebp + 0xfffff93cu);
/* 7fdab4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fdab5: mov ecx, eax */
  ecx = eax;
/* 7fdab7: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7fdabb: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fdac1u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fdac1: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fdac4: mov edi, esp */
  edi = esp;
/* 7fdac6: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdacb: lea esi, [ebp - 0x544] */
  esi = (uint32_t)(ebp + 0xfffffabcu);
/* 7fdad1: lea edx, [ebp - 0xac4] */
  edx = (uint32_t)(ebp + 0xfffff53cu);
/* 7fdad7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdad9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fdada: mov ecx, eax */
  ecx = eax;
/* 7fdadc: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7fdae0: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fdae6u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fdae6: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fdae9: mov edi, esp */
  edi = esp;
/* 7fdaeb: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdaf0: lea esi, [ebp - 0xa44] */
  esi = (uint32_t)(ebp + 0xfffff5bcu);
/* 7fdaf6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdaf8: lea ecx, [ebp - 0x644] */
  ecx = (uint32_t)(ebp + 0xfffff9bcu);
/* 7fdafe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fdaff: mov ecx, eax */
  ecx = eax;
/* 7fdb01: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 7fdb05: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fdb0bu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fdb0b: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fdb0e: mov edi, esp */
  edi = esp;
/* 7fdb10: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdb15: lea esi, [ebp - 0x5c4] */
  esi = (uint32_t)(ebp + 0xfffffa3cu);
/* 7fdb1b: lea edx, [ebp - 0x4c4] */
  edx = (uint32_t)(ebp + 0xfffffb3cu);
/* 7fdb21: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdb23: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fdb24: mov ecx, eax */
  ecx = eax;
/* 7fdb26: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 7fdb2a: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fdb30u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fdb30: mov esi, eax */
  esi = eax;
/* 7fdb32: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdb37: lea edi, [ebp - 0x484] */
  edi = (uint32_t)(ebp + 0xfffffb7cu);
/* 7fdb3d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdb3f: lea ecx, [ebp - 0x4c4] */
  ecx = (uint32_t)(ebp + 0xfffffb3cu);
/* 7fdb45: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdb4bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdb4b: lea ecx, [ebp - 0x644] */
  ecx = (uint32_t)(ebp + 0xfffff9bcu);
/* 7fdb51: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 7fdb55: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdb5bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdb5b: lea ecx, [ebp - 0xac4] */
  ecx = (uint32_t)(ebp + 0xfffff53cu);
/* 7fdb61: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7fdb65: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdb6bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdb6b: lea ecx, [ebp - 0x6c4] */
  ecx = (uint32_t)(ebp + 0xfffff93cu);
/* 7fdb71: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7fdb75: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdb7bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdb7b: lea ecx, [ebp - 0xec4] */
  ecx = (uint32_t)(ebp + 0xfffff13cu);
/* 7fdb81: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7fdb85: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdb8bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdb8b: lea ecx, [ebp - 0x38c] */
  ecx = (uint32_t)(ebp + 0xfffffc74u);
/* 7fdb91: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 7fdb95: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdb9bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdb9b: lea ecx, [ebp - 0x744] */
  ecx = (uint32_t)(ebp + 0xfffff8bcu);
/* 7fdba1: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 7fdba5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdbabu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdbab: lea ecx, [ebp - 0x18c] */
  ecx = (uint32_t)(ebp + 0xfffffe74u);
/* 7fdbb1: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7fdbb5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdbbbu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdbbb: lea ecx, [ebp - 0xb44] */
  ecx = (uint32_t)(ebp + 0xfffff4bcu);
/* 7fdbc1: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 7fdbc5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdbcbu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdbcb: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7fdbcf: lea ecx, [ebp - 0x7c4] */
  ecx = (uint32_t)(ebp + 0xfffff83cu);
/* 7fdbd5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdbdbu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdbdb: lea ecx, [ebp - 0xd44] */
  ecx = (uint32_t)(ebp + 0xfffff2bcu);
/* 7fdbe1: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7fdbe5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdbebu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdbeb: lea ecx, [ebp - 0xcc] */
  ecx = (uint32_t)(ebp + 0xffffff34u);
/* 7fdbf1: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7fdbf5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdbfbu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdbfb: lea ecx, [ebp - 0x844] */
  ecx = (uint32_t)(ebp + 0xfffff7bcu);
/* 7fdc01: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7fdc05: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdc0bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdc0b: lea ecx, [ebp - 0xbc4] */
  ecx = (uint32_t)(ebp + 0xfffff43cu);
/* 7fdc11: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7fdc15: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdc1bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdc1b: lea ecx, [ebp - 0x8c4] */
  ecx = (uint32_t)(ebp + 0xfffff73cu);
/* 7fdc21: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7fdc25: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdc2bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdc2b: lea ecx, [ebp - 0x20c] */
  ecx = (uint32_t)(ebp + 0xfffffdf4u);
/* 7fdc31: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7fdc35: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdc3bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdc3b: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7fdc3e: jmp 0x7fe78e */
  goto L_7fe78e;
L_7fdc43: /* 7fdc43: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7fdc46: mov ebx, dword ptr [eax + 0x3f0] */
  ebx = R32((uint32_t)(eax + 0x3f0u));
/* 7fdc4c: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 7fdc52: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fdc54: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7fdc57: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7fdc5a: mov dword ptr [ebp - 0x64], edx */
  W32((uint32_t)(ebp + 0xffffff9cu), edx);
/* 7fdc5d: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 7fdc60: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 7fdc63: mov dword ptr [ebp - 0x10c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffef4u), 0x3f800000u);
/* 7fdc6d: mov dword ptr [ebp - 0x108], 0 */
  W32((uint32_t)(ebp + 0xfffffef8u), 0x0u);
/* 7fdc77: mov dword ptr [ebp - 0x104], 0 */
  W32((uint32_t)(ebp + 0xfffffefcu), 0x0u);
/* 7fdc81: mov dword ptr [ebp - 0x100], 0 */
  W32((uint32_t)(ebp + 0xffffff00u), 0x0u);
/* 7fdc8b: mov dword ptr [ebp - 0xfc], 0 */
  W32((uint32_t)(ebp + 0xffffff04u), 0x0u);
/* 7fdc95: mov dword ptr [ebp - 0xf8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff08u), 0x3f800000u);
/* 7fdc9f: mov dword ptr [ebp - 0xf4], 0 */
  W32((uint32_t)(ebp + 0xffffff0cu), 0x0u);
/* 7fdca9: mov dword ptr [ebp - 0xf0], 0 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x0u);
/* 7fdcb3: mov dword ptr [ebp - 0xec], 0 */
  W32((uint32_t)(ebp + 0xffffff14u), 0x0u);
/* 7fdcbd: mov dword ptr [ebp - 0xe8], 0 */
  W32((uint32_t)(ebp + 0xffffff18u), 0x0u);
/* 7fdcc7: mov dword ptr [ebp - 0xe4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff1cu), 0x3f800000u);
/* 7fdcd1: mov dword ptr [ebp - 0xe0], 0 */
  W32((uint32_t)(ebp + 0xffffff20u), 0x0u);
/* 7fdcdb: mov dword ptr [ebp - 0xdc], edx */
  W32((uint32_t)(ebp + 0xffffff24u), edx);
/* 7fdce1: mov dword ptr [ebp - 0xd8], eax */
  W32((uint32_t)(ebp + 0xffffff28u), eax);
/* 7fdce7: mov dword ptr [ebp - 0xd4], ecx */
  W32((uint32_t)(ebp + 0xffffff2cu), ecx);
/* 7fdced: mov dword ptr [ebp - 0xd0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x3f800000u);
/* 7fdcf7: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdcfc: lea esi, [ebp - 0x10c] */
  esi = (uint32_t)(ebp + 0xfffffef4u);
/* 7fdd02: lea edi, [ebp - 0x804] */
  edi = (uint32_t)(ebp + 0xfffff7fcu);
/* 7fdd08: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdd0a: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdd0f: lea esi, [ebp - 0x10c] */
  esi = (uint32_t)(ebp + 0xfffffef4u);
/* 7fdd15: lea edi, [ebp - 0xc44] */
  edi = (uint32_t)(ebp + 0xfffff3bcu);
/* 7fdd1b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdd1d: lea edx, [ebx + 0x17c] */
  edx = (uint32_t)(ebx + 0x17cu);
/* 7fdd23: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7fdd25: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fdd28: mov eax, esp */
  eax = esp;
/* 7fdd2a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7fdd2c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7fdd2f: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7fdd32: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7fdd35: lea ecx, [ebp - 0x784] */
  ecx = (uint32_t)(ebp + 0xfffff87cu);
/* 7fdd3b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7fdd3e: call 0x6c9160 */
  esp -= 4; W32(esp, 0x7fdd43u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 7fdd43: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdd48: mov esi, eax */
  esi = eax;
/* 7fdd4a: lea edi, [ebp - 0x704] */
  edi = (uint32_t)(ebp + 0xfffff8fcu);
/* 7fdd50: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdd52: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7fdd55: mov esi, eax */
  esi = eax;
/* 7fdd57: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7fdd5a: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdd5f: lea edi, [ebp - 0x944] */
  edi = (uint32_t)(ebp + 0xfffff6bcu);
/* 7fdd65: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdd67: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7fdd6a: mov dword ptr [ebp - 0x28c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffd74u), 0x3f800000u);
/* 7fdd74: mov dword ptr [ebp - 0x288], 0 */
  W32((uint32_t)(ebp + 0xfffffd78u), 0x0u);
/* 7fdd7e: mov dword ptr [ebp - 0x284], 0 */
  W32((uint32_t)(ebp + 0xfffffd7cu), 0x0u);
/* 7fdd88: mov dword ptr [ebp - 0x280], 0 */
  W32((uint32_t)(ebp + 0xfffffd80u), 0x0u);
/* 7fdd92: mov dword ptr [ebp - 0x27c], 0 */
  W32((uint32_t)(ebp + 0xfffffd84u), 0x0u);
/* 7fdd9c: mov dword ptr [ebp - 0x278], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffd88u), 0x3f800000u);
/* 7fdda6: mov dword ptr [ebp - 0x274], 0 */
  W32((uint32_t)(ebp + 0xfffffd8cu), 0x0u);
/* 7fddb0: mov dword ptr [ebp - 0x270], 0 */
  W32((uint32_t)(ebp + 0xfffffd90u), 0x0u);
/* 7fddba: mov dword ptr [ebp - 0x26c], 0 */
  W32((uint32_t)(ebp + 0xfffffd94u), 0x0u);
/* 7fddc4: mov dword ptr [ebp - 0x268], 0 */
  W32((uint32_t)(ebp + 0xfffffd98u), 0x0u);
/* 7fddce: mov dword ptr [ebp - 0x264], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffd9cu), 0x3f800000u);
/* 7fddd8: mov dword ptr [ebp - 0x260], 0 */
  W32((uint32_t)(ebp + 0xfffffda0u), 0x0u);
/* 7fdde2: mov dword ptr [ebp - 0x25c], eax */
  W32((uint32_t)(ebp + 0xfffffda4u), eax);
/* 7fdde8: mov dword ptr [ebp - 0x258], ecx */
  W32((uint32_t)(ebp + 0xfffffda8u), ecx);
/* 7fddee: mov dword ptr [ebp - 0x254], edx */
  W32((uint32_t)(ebp + 0xfffffdacu), edx);
/* 7fddf4: mov dword ptr [ebp - 0x250], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffdb0u), 0x3f800000u);
/* 7fddfe: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fde03: lea esi, [ebp - 0x28c] */
  esi = (uint32_t)(ebp + 0xfffffd74u);
/* 7fde09: lea edi, [ebp - 0x684] */
  edi = (uint32_t)(ebp + 0xfffff97cu);
/* 7fde0f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fde11: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7fde14: add eax, 0x6c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7fde17: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fde1c: lea esi, [ebp - 0x28c] */
  esi = (uint32_t)(ebp + 0xfffffd74u);
/* 7fde22: lea edi, [ebp - 0xe44] */
  edi = (uint32_t)(ebp + 0xfffff1bcu);
/* 7fde28: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fde2a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7fde2c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7fde2f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7fde32: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 7fde35: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 7fde38: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 7fde3b: mov dword ptr [ebp - 0x30c], ecx */
  W32((uint32_t)(ebp + 0xfffffcf4u), ecx);
/* 7fde41: mov dword ptr [ebp - 0x308], 0 */
  W32((uint32_t)(ebp + 0xfffffcf8u), 0x0u);
/* 7fde4b: mov dword ptr [ebp - 0x304], 0 */
  W32((uint32_t)(ebp + 0xfffffcfcu), 0x0u);
/* 7fde55: mov dword ptr [ebp - 0x300], 0 */
  W32((uint32_t)(ebp + 0xfffffd00u), 0x0u);
/* 7fde5f: mov dword ptr [ebp - 0x2fc], 0 */
  W32((uint32_t)(ebp + 0xfffffd04u), 0x0u);
/* 7fde69: mov dword ptr [ebp - 0x2f8], edx */
  W32((uint32_t)(ebp + 0xfffffd08u), edx);
/* 7fde6f: mov dword ptr [ebp - 0x2f4], 0 */
  W32((uint32_t)(ebp + 0xfffffd0cu), 0x0u);
/* 7fde79: mov dword ptr [ebp - 0x2f0], 0 */
  W32((uint32_t)(ebp + 0xfffffd10u), 0x0u);
/* 7fde83: mov dword ptr [ebp - 0x2ec], 0 */
  W32((uint32_t)(ebp + 0xfffffd14u), 0x0u);
/* 7fde8d: mov dword ptr [ebp - 0x2e8], 0 */
  W32((uint32_t)(ebp + 0xfffffd18u), 0x0u);
/* 7fde97: mov dword ptr [ebp - 0x2e4], eax */
  W32((uint32_t)(ebp + 0xfffffd1cu), eax);
/* 7fde9d: mov dword ptr [ebp - 0x2e0], 0 */
  W32((uint32_t)(ebp + 0xfffffd20u), 0x0u);
/* 7fdea7: mov dword ptr [ebp - 0x2dc], 0 */
  W32((uint32_t)(ebp + 0xfffffd24u), 0x0u);
/* 7fdeb1: mov dword ptr [ebp - 0x2d8], 0 */
  W32((uint32_t)(ebp + 0xfffffd28u), 0x0u);
/* 7fdebb: mov dword ptr [ebp - 0x2d4], 0 */
  W32((uint32_t)(ebp + 0xfffffd2cu), 0x0u);
/* 7fdec5: mov dword ptr [ebp - 0x2d0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffd30u), 0x3f800000u);
/* 7fdecf: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fded4: lea esi, [ebp - 0x30c] */
  esi = (uint32_t)(ebp + 0xfffffcf4u);
/* 7fdeda: lea edi, [ebp - 0x604] */
  edi = (uint32_t)(ebp + 0xfffff9fcu);
/* 7fdee0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdee2: fld dword ptr [ebx + 0x29c] */
  { double v = F32((uint32_t)(ebx + 0x29cu)); FPUSH(v); }
/* 7fdee8: fchs  */
  ST0 = -ST0;
/* 7fdeea: fld dword ptr [ebx + 0x298] */
  { double v = F32((uint32_t)(ebx + 0x298u)); FPUSH(v); }
/* 7fdef0: fchs  */
  ST0 = -ST0;
/* 7fdef2: fld dword ptr [ebx + 0x294] */
  { double v = F32((uint32_t)(ebx + 0x294u)); FPUSH(v); }
/* 7fdef8: mov dword ptr [ebp - 0x3cc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc34u), 0x3f800000u);
/* 7fdf02: fchs  */
  ST0 = -ST0;
/* 7fdf04: mov dword ptr [ebp - 0x3c8], 0 */
  W32((uint32_t)(ebp + 0xfffffc38u), 0x0u);
/* 7fdf0e: fstp dword ptr [ebp - 0x39c] */
  WF32((uint32_t)(ebp + 0xfffffc64u), ST0); FPOP();
/* 7fdf14: mov dword ptr [ebp - 0x3c4], 0 */
  W32((uint32_t)(ebp + 0xfffffc3cu), 0x0u);
/* 7fdf1e: mov dword ptr [ebp - 0x3c0], 0 */
  W32((uint32_t)(ebp + 0xfffffc40u), 0x0u);
/* 7fdf28: fstp dword ptr [ebp - 0x398] */
  WF32((uint32_t)(ebp + 0xfffffc68u), ST0); FPOP();
/* 7fdf2e: mov dword ptr [ebp - 0x3bc], 0 */
  W32((uint32_t)(ebp + 0xfffffc44u), 0x0u);
/* 7fdf38: mov dword ptr [ebp - 0x3b8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc48u), 0x3f800000u);
/* 7fdf42: fstp dword ptr [ebp - 0x394] */
  WF32((uint32_t)(ebp + 0xfffffc6cu), ST0); FPOP();
/* 7fdf48: mov dword ptr [ebp - 0x3b4], 0 */
  W32((uint32_t)(ebp + 0xfffffc4cu), 0x0u);
/* 7fdf52: mov dword ptr [ebp - 0x3b0], 0 */
  W32((uint32_t)(ebp + 0xfffffc50u), 0x0u);
/* 7fdf5c: mov dword ptr [ebp - 0x3ac], 0 */
  W32((uint32_t)(ebp + 0xfffffc54u), 0x0u);
/* 7fdf66: mov dword ptr [ebp - 0x3a8], 0 */
  W32((uint32_t)(ebp + 0xfffffc58u), 0x0u);
/* 7fdf70: mov dword ptr [ebp - 0x3a4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc5cu), 0x3f800000u);
/* 7fdf7a: mov dword ptr [ebp - 0x3a0], 0 */
  W32((uint32_t)(ebp + 0xfffffc60u), 0x0u);
/* 7fdf84: mov dword ptr [ebp - 0x390], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc70u), 0x3f800000u);
/* 7fdf8e: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fdf91: mov edi, esp */
  edi = esp;
/* 7fdf93: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdf98: lea esi, [ebp - 0x30c] */
  esi = (uint32_t)(ebp + 0xfffffcf4u);
/* 7fdf9e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdfa0: lea ecx, [ebp - 0x584] */
  ecx = (uint32_t)(ebp + 0xfffffa7cu);
/* 7fdfa6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fdfa7: lea ecx, [ebp - 0x3cc] */
  ecx = (uint32_t)(ebp + 0xfffffc34u);
/* 7fdfad: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 7fdfb1: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fdfb7u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fdfb7: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fdfba: mov edi, esp */
  edi = esp;
/* 7fdfbc: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdfc1: lea esi, [ebp - 0xe44] */
  esi = (uint32_t)(ebp + 0xfffff1bcu);
/* 7fdfc7: lea edx, [ebp - 0x504] */
  edx = (uint32_t)(ebp + 0xfffffafcu);
/* 7fdfcd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdfcf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fdfd0: mov ecx, eax */
  ecx = eax;
/* 7fdfd2: mov byte ptr [ebp - 4], 0x1a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1au);
/* 7fdfd6: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fdfdcu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fdfdc: mov byte ptr [ebp - 4], 0x1b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1bu);
/* 7fdfe0: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fdfe3: mov edi, esp */
  edi = esp;
/* 7fdfe5: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdfea: lea esi, [ebp - 0x944] */
  esi = (uint32_t)(ebp + 0xfffff6bcu);
/* 7fdff0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdff2: lea ecx, [ebp - 0xdc4] */
  ecx = (uint32_t)(ebp + 0xfffff23cu);
/* 7fdff8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fdff9: mov ecx, eax */
  ecx = eax;
/* 7fdffb: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fe001u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fe001: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fe004: mov edi, esp */
  edi = esp;
/* 7fe006: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe00b: lea esi, [ebp - 0xc44] */
  esi = (uint32_t)(ebp + 0xfffff3bcu);
/* 7fe011: lea edx, [ebp - 0x9c4] */
  edx = (uint32_t)(ebp + 0xfffff63cu);
/* 7fe017: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe019: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fe01a: mov ecx, eax */
  ecx = eax;
/* 7fe01c: mov byte ptr [ebp - 4], 0x1c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1cu);
/* 7fe020: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fe026u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fe026: mov esi, eax */
  esi = eax;
/* 7fe028: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe02d: lea edi, [ebp - 0x484] */
  edi = (uint32_t)(ebp + 0xfffffb7cu);
/* 7fe033: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe035: lea ecx, [ebp - 0x9c4] */
  ecx = (uint32_t)(ebp + 0xfffff63cu);
/* 7fe03b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe041u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe041: lea ecx, [ebp - 0xdc4] */
  ecx = (uint32_t)(ebp + 0xfffff23cu);
/* 7fe047: mov byte ptr [ebp - 4], 0x1b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1bu);
/* 7fe04b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe051u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe051: lea ecx, [ebp - 0x504] */
  ecx = (uint32_t)(ebp + 0xfffffafcu);
/* 7fe057: mov byte ptr [ebp - 4], 0x1a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1au);
/* 7fe05b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe061u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe061: lea ecx, [ebp - 0x584] */
  ecx = (uint32_t)(ebp + 0xfffffa7cu);
/* 7fe067: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 7fe06b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe071u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe071: lea ecx, [ebp - 0x3cc] */
  ecx = (uint32_t)(ebp + 0xfffffc34u);
/* 7fe077: mov byte ptr [ebp - 4], 0x18 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x18u);
/* 7fe07b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe081u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe081: lea ecx, [ebp - 0x604] */
  ecx = (uint32_t)(ebp + 0xfffff9fcu);
/* 7fe087: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* 7fe08b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe091u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe091: lea ecx, [ebp - 0x30c] */
  ecx = (uint32_t)(ebp + 0xfffffcf4u);
/* 7fe097: mov byte ptr [ebp - 4], 0x16 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x16u);
/* 7fe09b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe0a1u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe0a1: lea ecx, [ebp - 0x684] */
  ecx = (uint32_t)(ebp + 0xfffff97cu);
/* 7fe0a7: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* 7fe0ab: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe0b1u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe0b1: lea ecx, [ebp - 0x28c] */
  ecx = (uint32_t)(ebp + 0xfffffd74u);
/* 7fe0b7: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 7fe0bb: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe0c1u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe0c1: lea ecx, [ebp - 0x704] */
  ecx = (uint32_t)(ebp + 0xfffff8fcu);
/* 7fe0c7: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7fe0cb: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe0d1u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe0d1: lea ecx, [ebp - 0x784] */
  ecx = (uint32_t)(ebp + 0xfffff87cu);
/* 7fe0d7: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 7fe0db: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe0e1u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe0e1: lea ecx, [ebp - 0x804] */
  ecx = (uint32_t)(ebp + 0xfffff7fcu);
/* 7fe0e7: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 7fe0eb: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe0f1u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe0f1: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 7fe0f7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7fe0fb: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe101u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe101: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7fe104: jmp 0x7fe78e */
  goto L_7fe78e;
L_7fe109: /* 7fe109: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fe10b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7fe10e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7fe111: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7fe114: je 0x7fe497 */
  if (zf) goto L_7fe497;
L_7fe11a: /* 7fe11a: mov dword ptr [ebp - 0x1cc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe34u), 0x3f800000u);
/* 7fe124: mov dword ptr [ebp - 0x1c8], 0 */
  W32((uint32_t)(ebp + 0xfffffe38u), 0x0u);
/* 7fe12e: mov dword ptr [ebp - 0x1c4], 0 */
  W32((uint32_t)(ebp + 0xfffffe3cu), 0x0u);
/* 7fe138: mov dword ptr [ebp - 0x1c0], 0 */
  W32((uint32_t)(ebp + 0xfffffe40u), 0x0u);
/* 7fe142: mov dword ptr [ebp - 0x1bc], 0 */
  W32((uint32_t)(ebp + 0xfffffe44u), 0x0u);
/* 7fe14c: mov dword ptr [ebp - 0x1b8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe48u), 0x3f800000u);
/* 7fe156: mov dword ptr [ebp - 0x1b4], 0 */
  W32((uint32_t)(ebp + 0xfffffe4cu), 0x0u);
/* 7fe160: mov dword ptr [ebp - 0x1b0], 0 */
  W32((uint32_t)(ebp + 0xfffffe50u), 0x0u);
/* 7fe16a: mov dword ptr [ebp - 0x1ac], 0 */
  W32((uint32_t)(ebp + 0xfffffe54u), 0x0u);
/* 7fe174: mov dword ptr [ebp - 0x1a8], 0 */
  W32((uint32_t)(ebp + 0xfffffe58u), 0x0u);
/* 7fe17e: mov dword ptr [ebp - 0x1a4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe5cu), 0x3f800000u);
/* 7fe188: mov dword ptr [ebp - 0x1a0], 0 */
  W32((uint32_t)(ebp + 0xfffffe60u), 0x0u);
/* 7fe192: mov dword ptr [ebp - 0x19c], eax */
  W32((uint32_t)(ebp + 0xfffffe64u), eax);
/* 7fe198: mov dword ptr [ebp - 0x198], ecx */
  W32((uint32_t)(ebp + 0xfffffe68u), ecx);
/* 7fe19e: mov dword ptr [ebp - 0x194], edx */
  W32((uint32_t)(ebp + 0xfffffe6cu), edx);
/* 7fe1a4: mov dword ptr [ebp - 0x190], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe70u), 0x3f800000u);
/* 7fe1ae: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe1b3: lea esi, [ebp - 0x1cc] */
  esi = (uint32_t)(ebp + 0xfffffe34u);
/* 7fe1b9: lea edi, [ebp - 0xc84] */
  edi = (uint32_t)(ebp + 0xfffff37cu);
/* 7fe1bf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe1c1: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7fe1c4: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe1c9: lea esi, [ebp - 0x1cc] */
  esi = (uint32_t)(ebp + 0xfffffe34u);
/* 7fe1cf: lea edi, [ebp - 0x904] */
  edi = (uint32_t)(ebp + 0xfffff6fcu);
/* 7fe1d5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe1d7: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7fe1da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fe1dd: mov eax, esp */
  eax = esp;
/* 7fe1df: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7fe1e1: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7fe1e4: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7fe1e7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7fe1ea: lea ecx, [ebp - 0xc04] */
  ecx = (uint32_t)(ebp + 0xfffff3fcu);
/* 7fe1f0: call 0x6c9160 */
  esp -= 4; W32(esp, 0x7fe1f5u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 7fe1f5: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe1fa: mov esi, eax */
  esi = eax;
/* 7fe1fc: lea edi, [ebp - 0xb84] */
  edi = (uint32_t)(ebp + 0xfffff47cu);
/* 7fe202: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe204: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7fe207: add edx, 0x6c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7fe20a: mov esi, eax */
  esi = eax;
/* 7fe20c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7fe20e: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe213: lea edi, [ebp - 0x884] */
  edi = (uint32_t)(ebp + 0xfffff77cu);
/* 7fe219: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe21b: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7fe21e: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7fe221: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 7fe224: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 7fe227: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 7fe22a: mov dword ptr [ebp - 0x14c], eax */
  W32((uint32_t)(ebp + 0xfffffeb4u), eax);
/* 7fe230: mov dword ptr [ebp - 0x148], 0 */
  W32((uint32_t)(ebp + 0xfffffeb8u), 0x0u);
/* 7fe23a: mov dword ptr [ebp - 0x144], 0 */
  W32((uint32_t)(ebp + 0xfffffebcu), 0x0u);
/* 7fe244: mov dword ptr [ebp - 0x140], 0 */
  W32((uint32_t)(ebp + 0xfffffec0u), 0x0u);
/* 7fe24e: mov dword ptr [ebp - 0x13c], 0 */
  W32((uint32_t)(ebp + 0xfffffec4u), 0x0u);
/* 7fe258: mov dword ptr [ebp - 0x138], ecx */
  W32((uint32_t)(ebp + 0xfffffec8u), ecx);
/* 7fe25e: mov dword ptr [ebp - 0x134], 0 */
  W32((uint32_t)(ebp + 0xfffffeccu), 0x0u);
/* 7fe268: mov dword ptr [ebp - 0x130], 0 */
  W32((uint32_t)(ebp + 0xfffffed0u), 0x0u);
/* 7fe272: mov dword ptr [ebp - 0x12c], 0 */
  W32((uint32_t)(ebp + 0xfffffed4u), 0x0u);
/* 7fe27c: mov dword ptr [ebp - 0x128], 0 */
  W32((uint32_t)(ebp + 0xfffffed8u), 0x0u);
/* 7fe286: mov dword ptr [ebp - 0x124], edx */
  W32((uint32_t)(ebp + 0xfffffedcu), edx);
/* 7fe28c: mov dword ptr [ebp - 0x120], 0 */
  W32((uint32_t)(ebp + 0xfffffee0u), 0x0u);
/* 7fe296: mov dword ptr [ebp - 0x11c], 0 */
  W32((uint32_t)(ebp + 0xfffffee4u), 0x0u);
/* 7fe2a0: mov dword ptr [ebp - 0x118], 0 */
  W32((uint32_t)(ebp + 0xfffffee8u), 0x0u);
/* 7fe2aa: mov dword ptr [ebp - 0x114], 0 */
  W32((uint32_t)(ebp + 0xfffffeecu), 0x0u);
/* 7fe2b4: mov dword ptr [ebp - 0x110], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffef0u), 0x3f800000u);
/* 7fe2be: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe2c3: lea esi, [ebp - 0x14c] */
  esi = (uint32_t)(ebp + 0xfffffeb4u);
/* 7fe2c9: lea edi, [ebp - 0xb04] */
  edi = (uint32_t)(ebp + 0xfffff4fcu);
/* 7fe2cf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe2d1: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 7fe2d7: add eax, 0x294 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x294u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7fe2dc: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7fe2df: fchs  */
  ST0 = -ST0;
/* 7fe2e1: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7fe2e4: fchs  */
  ST0 = -ST0;
/* 7fe2e6: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 7fe2e8: mov dword ptr [ebp - 0x40c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffbf4u), 0x3f800000u);
/* 7fe2f2: fchs  */
  ST0 = -ST0;
/* 7fe2f4: mov dword ptr [ebp - 0x408], 0 */
  W32((uint32_t)(ebp + 0xfffffbf8u), 0x0u);
/* 7fe2fe: fstp dword ptr [ebp - 0x3dc] */
  WF32((uint32_t)(ebp + 0xfffffc24u), ST0); FPOP();
/* 7fe304: mov dword ptr [ebp - 0x404], 0 */
  W32((uint32_t)(ebp + 0xfffffbfcu), 0x0u);
/* 7fe30e: mov dword ptr [ebp - 0x400], 0 */
  W32((uint32_t)(ebp + 0xfffffc00u), 0x0u);
/* 7fe318: fstp dword ptr [ebp - 0x3d8] */
  WF32((uint32_t)(ebp + 0xfffffc28u), ST0); FPOP();
/* 7fe31e: mov dword ptr [ebp - 0x3fc], 0 */
  W32((uint32_t)(ebp + 0xfffffc04u), 0x0u);
/* 7fe328: mov dword ptr [ebp - 0x3f8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc08u), 0x3f800000u);
/* 7fe332: fstp dword ptr [ebp - 0x3d4] */
  WF32((uint32_t)(ebp + 0xfffffc2cu), ST0); FPOP();
/* 7fe338: mov dword ptr [ebp - 0x3f4], 0 */
  W32((uint32_t)(ebp + 0xfffffc0cu), 0x0u);
/* 7fe342: mov dword ptr [ebp - 0x3f0], 0 */
  W32((uint32_t)(ebp + 0xfffffc10u), 0x0u);
/* 7fe34c: mov dword ptr [ebp - 0x3ec], 0 */
  W32((uint32_t)(ebp + 0xfffffc14u), 0x0u);
/* 7fe356: mov dword ptr [ebp - 0x3e8], 0 */
  W32((uint32_t)(ebp + 0xfffffc18u), 0x0u);
/* 7fe360: mov dword ptr [ebp - 0x3e4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc1cu), 0x3f800000u);
/* 7fe36a: mov dword ptr [ebp - 0x3e0], 0 */
  W32((uint32_t)(ebp + 0xfffffc20u), 0x0u);
/* 7fe374: mov dword ptr [ebp - 0x3d0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc30u), 0x3f800000u);
/* 7fe37e: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fe381: mov edi, esp */
  edi = esp;
/* 7fe383: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe388: lea esi, [ebp - 0x14c] */
  esi = (uint32_t)(ebp + 0xfffffeb4u);
/* 7fe38e: lea eax, [ebp - 0xa84] */
  eax = (uint32_t)(ebp + 0xfffff57cu);
/* 7fe394: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe396: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fe397: lea ecx, [ebp - 0x40c] */
  ecx = (uint32_t)(ebp + 0xfffffbf4u);
/* 7fe39d: mov byte ptr [ebp - 4], 0x23 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x23u);
/* 7fe3a1: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fe3a7u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fe3a7: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fe3aa: mov edi, esp */
  edi = esp;
/* 7fe3ac: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe3b1: lea esi, [ebp - 0x884] */
  esi = (uint32_t)(ebp + 0xfffff77cu);
/* 7fe3b7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe3b9: lea ecx, [ebp - 0xa04] */
  ecx = (uint32_t)(ebp + 0xfffff5fcu);
/* 7fe3bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fe3c0: mov ecx, eax */
  ecx = eax;
/* 7fe3c2: mov byte ptr [ebp - 4], 0x24 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 7fe3c6: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fe3ccu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fe3cc: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fe3cf: mov edi, esp */
  edi = esp;
/* 7fe3d1: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe3d6: lea esi, [ebp - 0x904] */
  esi = (uint32_t)(ebp + 0xfffff6fcu);
/* 7fe3dc: lea edx, [ebp - 0x984] */
  edx = (uint32_t)(ebp + 0xfffff67cu);
/* 7fe3e2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe3e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fe3e5: mov ecx, eax */
  ecx = eax;
/* 7fe3e7: mov byte ptr [ebp - 4], 0x25 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x25u);
/* 7fe3eb: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fe3f1u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fe3f1: mov esi, eax */
  esi = eax;
/* 7fe3f3: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe3f8: lea edi, [ebp - 0x484] */
  edi = (uint32_t)(ebp + 0xfffffb7cu);
/* 7fe3fe: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe400: lea ecx, [ebp - 0x984] */
  ecx = (uint32_t)(ebp + 0xfffff67cu);
/* 7fe406: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe40cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe40c: lea ecx, [ebp - 0xa04] */
  ecx = (uint32_t)(ebp + 0xfffff5fcu);
/* 7fe412: mov byte ptr [ebp - 4], 0x24 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 7fe416: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe41cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe41c: lea ecx, [ebp - 0xa84] */
  ecx = (uint32_t)(ebp + 0xfffff57cu);
/* 7fe422: mov byte ptr [ebp - 4], 0x23 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x23u);
/* 7fe426: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe42cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe42c: lea ecx, [ebp - 0x40c] */
  ecx = (uint32_t)(ebp + 0xfffffbf4u);
/* 7fe432: mov byte ptr [ebp - 4], 0x22 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x22u);
/* 7fe436: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe43cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe43c: lea ecx, [ebp - 0xb04] */
  ecx = (uint32_t)(ebp + 0xfffff4fcu);
/* 7fe442: mov byte ptr [ebp - 4], 0x21 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 7fe446: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe44cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe44c: lea ecx, [ebp - 0x14c] */
  ecx = (uint32_t)(ebp + 0xfffffeb4u);
/* 7fe452: mov byte ptr [ebp - 4], 0x20 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x20u);
/* 7fe456: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe45cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe45c: lea ecx, [ebp - 0xb84] */
  ecx = (uint32_t)(ebp + 0xfffff47cu);
/* 7fe462: mov byte ptr [ebp - 4], 0x1f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1fu);
/* 7fe466: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe46cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe46c: lea ecx, [ebp - 0xc04] */
  ecx = (uint32_t)(ebp + 0xfffff3fcu);
/* 7fe472: mov byte ptr [ebp - 4], 0x1e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1eu);
/* 7fe476: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe47cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe47c: mov byte ptr [ebp - 4], 0x1d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1du);
/* 7fe480: lea ecx, [ebp - 0xc84] */
  ecx = (uint32_t)(ebp + 0xfffff37cu);
/* 7fe486: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe48cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe48c: lea ecx, [ebp - 0x1cc] */
  ecx = (uint32_t)(ebp + 0xfffffe34u);
/* 7fe492: jmp 0x7fe784 */
  goto L_7fe784;
L_7fe497: /* 7fe497: mov dword ptr [ebp - 0x2cc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffd34u), 0x3f800000u);
/* 7fe4a1: mov dword ptr [ebp - 0x2c8], 0 */
  W32((uint32_t)(ebp + 0xfffffd38u), 0x0u);
/* 7fe4ab: mov dword ptr [ebp - 0x2c4], 0 */
  W32((uint32_t)(ebp + 0xfffffd3cu), 0x0u);
/* 7fe4b5: mov dword ptr [ebp - 0x2c0], 0 */
  W32((uint32_t)(ebp + 0xfffffd40u), 0x0u);
/* 7fe4bf: mov dword ptr [ebp - 0x2bc], 0 */
  W32((uint32_t)(ebp + 0xfffffd44u), 0x0u);
/* 7fe4c9: mov dword ptr [ebp - 0x2b8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffd48u), 0x3f800000u);
/* 7fe4d3: mov dword ptr [ebp - 0x2b4], 0 */
  W32((uint32_t)(ebp + 0xfffffd4cu), 0x0u);
/* 7fe4dd: mov dword ptr [ebp - 0x2b0], 0 */
  W32((uint32_t)(ebp + 0xfffffd50u), 0x0u);
/* 7fe4e7: mov dword ptr [ebp - 0x2ac], 0 */
  W32((uint32_t)(ebp + 0xfffffd54u), 0x0u);
/* 7fe4f1: mov dword ptr [ebp - 0x2a8], 0 */
  W32((uint32_t)(ebp + 0xfffffd58u), 0x0u);
/* 7fe4fb: mov dword ptr [ebp - 0x2a4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffd5cu), 0x3f800000u);
/* 7fe505: mov dword ptr [ebp - 0x2a0], 0 */
  W32((uint32_t)(ebp + 0xfffffd60u), 0x0u);
/* 7fe50f: mov dword ptr [ebp - 0x29c], eax */
  W32((uint32_t)(ebp + 0xfffffd64u), eax);
/* 7fe515: mov dword ptr [ebp - 0x298], ecx */
  W32((uint32_t)(ebp + 0xfffffd68u), ecx);
/* 7fe51b: mov dword ptr [ebp - 0x294], edx */
  W32((uint32_t)(ebp + 0xfffffd6cu), edx);
/* 7fe521: mov dword ptr [ebp - 0x290], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffd70u), 0x3f800000u);
/* 7fe52b: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe530: lea esi, [ebp - 0x2cc] */
  esi = (uint32_t)(ebp + 0xfffffd34u);
/* 7fe536: lea edi, [ebp - 0xf04] */
  edi = (uint32_t)(ebp + 0xfffff0fcu);
/* 7fe53c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe53e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7fe541: add eax, 0x6c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7fe544: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe549: lea esi, [ebp - 0x2cc] */
  esi = (uint32_t)(ebp + 0xfffffd34u);
/* 7fe54f: lea edi, [ebp - 0xd04] */
  edi = (uint32_t)(ebp + 0xfffff2fcu);
/* 7fe555: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe557: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7fe559: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7fe55c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7fe55f: mov dword ptr [ebp - 0x8c], ecx */
  W32((uint32_t)(ebp + 0xffffff74u), ecx);
/* 7fe565: mov dword ptr [ebp - 0x88], edx */
  W32((uint32_t)(ebp + 0xffffff78u), edx);
/* 7fe56b: mov dword ptr [ebp - 0x84], eax */
  W32((uint32_t)(ebp + 0xffffff7cu), eax);
/* 7fe571: mov dword ptr [ebp - 0x24c], ecx */
  W32((uint32_t)(ebp + 0xfffffdb4u), ecx);
/* 7fe577: mov dword ptr [ebp - 0x248], 0 */
  W32((uint32_t)(ebp + 0xfffffdb8u), 0x0u);
/* 7fe581: mov dword ptr [ebp - 0x244], 0 */
  W32((uint32_t)(ebp + 0xfffffdbcu), 0x0u);
/* 7fe58b: mov dword ptr [ebp - 0x240], 0 */
  W32((uint32_t)(ebp + 0xfffffdc0u), 0x0u);
/* 7fe595: mov dword ptr [ebp - 0x23c], 0 */
  W32((uint32_t)(ebp + 0xfffffdc4u), 0x0u);
/* 7fe59f: mov dword ptr [ebp - 0x238], edx */
  W32((uint32_t)(ebp + 0xfffffdc8u), edx);
/* 7fe5a5: mov dword ptr [ebp - 0x234], 0 */
  W32((uint32_t)(ebp + 0xfffffdccu), 0x0u);
/* 7fe5af: mov dword ptr [ebp - 0x230], 0 */
  W32((uint32_t)(ebp + 0xfffffdd0u), 0x0u);
/* 7fe5b9: mov dword ptr [ebp - 0x22c], 0 */
  W32((uint32_t)(ebp + 0xfffffdd4u), 0x0u);
/* 7fe5c3: mov dword ptr [ebp - 0x228], 0 */
  W32((uint32_t)(ebp + 0xfffffdd8u), 0x0u);
/* 7fe5cd: mov dword ptr [ebp - 0x224], eax */
  W32((uint32_t)(ebp + 0xfffffddcu), eax);
/* 7fe5d3: mov dword ptr [ebp - 0x220], 0 */
  W32((uint32_t)(ebp + 0xfffffde0u), 0x0u);
/* 7fe5dd: mov dword ptr [ebp - 0x21c], 0 */
  W32((uint32_t)(ebp + 0xfffffde4u), 0x0u);
/* 7fe5e7: mov dword ptr [ebp - 0x218], 0 */
  W32((uint32_t)(ebp + 0xfffffde8u), 0x0u);
/* 7fe5f1: mov dword ptr [ebp - 0x214], 0 */
  W32((uint32_t)(ebp + 0xfffffdecu), 0x0u);
/* 7fe5fb: mov dword ptr [ebp - 0x210], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffdf0u), 0x3f800000u);
/* 7fe605: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe60a: lea esi, [ebp - 0x24c] */
  esi = (uint32_t)(ebp + 0xfffffdb4u);
/* 7fe610: lea edi, [ebp - 0xe84] */
  edi = (uint32_t)(ebp + 0xfffff17cu);
/* 7fe616: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe618: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 7fe61e: add eax, 0x294 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x294u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7fe623: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7fe626: fchs  */
  ST0 = -ST0;
/* 7fe628: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7fe62b: fchs  */
  ST0 = -ST0;
/* 7fe62d: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 7fe62f: mov dword ptr [ebp - 0x34c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffcb4u), 0x3f800000u);
/* 7fe639: fchs  */
  ST0 = -ST0;
/* 7fe63b: mov dword ptr [ebp - 0x348], 0 */
  W32((uint32_t)(ebp + 0xfffffcb8u), 0x0u);
/* 7fe645: fstp dword ptr [ebp - 0x31c] */
  WF32((uint32_t)(ebp + 0xfffffce4u), ST0); FPOP();
/* 7fe64b: mov dword ptr [ebp - 0x344], 0 */
  W32((uint32_t)(ebp + 0xfffffcbcu), 0x0u);
/* 7fe655: mov dword ptr [ebp - 0x340], 0 */
  W32((uint32_t)(ebp + 0xfffffcc0u), 0x0u);
/* 7fe65f: fstp dword ptr [ebp - 0x318] */
  WF32((uint32_t)(ebp + 0xfffffce8u), ST0); FPOP();
/* 7fe665: mov dword ptr [ebp - 0x33c], 0 */
  W32((uint32_t)(ebp + 0xfffffcc4u), 0x0u);
/* 7fe66f: mov dword ptr [ebp - 0x338], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffcc8u), 0x3f800000u);
/* 7fe679: fstp dword ptr [ebp - 0x314] */
  WF32((uint32_t)(ebp + 0xfffffcecu), ST0); FPOP();
/* 7fe67f: mov dword ptr [ebp - 0x334], 0 */
  W32((uint32_t)(ebp + 0xfffffcccu), 0x0u);
/* 7fe689: mov dword ptr [ebp - 0x330], 0 */
  W32((uint32_t)(ebp + 0xfffffcd0u), 0x0u);
/* 7fe693: mov dword ptr [ebp - 0x32c], 0 */
  W32((uint32_t)(ebp + 0xfffffcd4u), 0x0u);
/* 7fe69d: mov dword ptr [ebp - 0x328], 0 */
  W32((uint32_t)(ebp + 0xfffffcd8u), 0x0u);
/* 7fe6a7: mov dword ptr [ebp - 0x324], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffcdcu), 0x3f800000u);
/* 7fe6b1: mov dword ptr [ebp - 0x320], 0 */
  W32((uint32_t)(ebp + 0xfffffce0u), 0x0u);
/* 7fe6bb: mov dword ptr [ebp - 0x310], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffcf0u), 0x3f800000u);
/* 7fe6c5: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fe6c8: mov edi, esp */
  edi = esp;
/* 7fe6ca: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe6cf: lea esi, [ebp - 0x24c] */
  esi = (uint32_t)(ebp + 0xfffffdb4u);
/* 7fe6d5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe6d7: lea ecx, [ebp - 0xe04] */
  ecx = (uint32_t)(ebp + 0xfffff1fcu);
/* 7fe6dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fe6de: lea ecx, [ebp - 0x34c] */
  ecx = (uint32_t)(ebp + 0xfffffcb4u);
/* 7fe6e4: mov byte ptr [ebp - 4], 0x2a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2au);
/* 7fe6e8: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fe6eeu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fe6ee: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fe6f1: mov edi, esp */
  edi = esp;
/* 7fe6f3: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe6f8: lea esi, [ebp - 0xd04] */
  esi = (uint32_t)(ebp + 0xfffff2fcu);
/* 7fe6fe: lea edx, [ebp - 0xd84] */
  edx = (uint32_t)(ebp + 0xfffff27cu);
/* 7fe704: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe706: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fe707: mov ecx, eax */
  ecx = eax;
/* 7fe709: mov byte ptr [ebp - 4], 0x2b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2bu);
/* 7fe70d: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fe713u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fe713: mov esi, eax */
  esi = eax;
/* 7fe715: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe71a: lea edi, [ebp - 0x484] */
  edi = (uint32_t)(ebp + 0xfffffb7cu);
/* 7fe720: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe722: lea ecx, [ebp - 0xd84] */
  ecx = (uint32_t)(ebp + 0xfffff27cu);
/* 7fe728: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe72eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe72e: lea ecx, [ebp - 0xe04] */
  ecx = (uint32_t)(ebp + 0xfffff1fcu);
/* 7fe734: mov byte ptr [ebp - 4], 0x2a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2au);
/* 7fe738: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe73eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe73e: lea ecx, [ebp - 0x34c] */
  ecx = (uint32_t)(ebp + 0xfffffcb4u);
/* 7fe744: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 7fe748: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe74eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe74e: lea ecx, [ebp - 0xe84] */
  ecx = (uint32_t)(ebp + 0xfffff17cu);
/* 7fe754: mov byte ptr [ebp - 4], 0x28 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x28u);
/* 7fe758: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe75eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe75e: lea ecx, [ebp - 0x24c] */
  ecx = (uint32_t)(ebp + 0xfffffdb4u);
/* 7fe764: mov byte ptr [ebp - 4], 0x27 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x27u);
/* 7fe768: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe76eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe76e: lea ecx, [ebp - 0xf04] */
  ecx = (uint32_t)(ebp + 0xfffff0fcu);
/* 7fe774: mov byte ptr [ebp - 4], 0x26 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x26u);
/* 7fe778: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe77eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe77e: lea ecx, [ebp - 0x2cc] */
  ecx = (uint32_t)(ebp + 0xfffffd34u);
L_7fe784: /* 7fe784: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7fe788: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe78eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_7fe78e: /* 7fe78e: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7fe791: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7fe793: lea ecx, [ebp - 0x484] */
  ecx = (uint32_t)(ebp + 0xfffffb7cu);
/* 7fe799: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fe79a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fe79c: mov ecx, esi */
  ecx = esi;
/* 7fe79e: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x7fe7a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fe7a1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7fe7a4: mov ecx, dword ptr [eax + 0xa8] */
  ecx = R32((uint32_t)(eax + 0xa8u));
/* 7fe7aa: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7fe7ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fe7ad: mov ecx, esi */
  ecx = esi;
/* 7fe7af: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0x7fe7b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fe7b2: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7fe7b5: movzx ecx, word ptr [eax + 0xc] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0xcu)));
/* 7fe7b9: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 7fe7bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fe7bd: movzx ecx, word ptr [eax + 0xa] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0xau)));
/* 7fe7c1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7fe7c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fe7c4: movzx ecx, word ptr [eax + 0x10] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x10u)));
/* 7fe7c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fe7c9: movzx ecx, word ptr [eax + 8] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x8u)));
/* 7fe7cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fe7ce: xor ecx, ecx */
  ecx = 0;
/* 7fe7d0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fe7d2: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7fe7d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fe7d6: mov ecx, esi */
  ecx = esi;
/* 7fe7d8: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0x7fe7dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fe7db: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7fe7de: add eax, 0xc8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7fe7e3: lea ecx, [ebp - 0x484] */
  ecx = (uint32_t)(ebp + 0xfffffb7cu);
/* 7fe7e9: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7fe7ec: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7fe7f0: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe7f6u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe7f6: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7fe7f9: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7fe7fc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7fe7fd: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7fe800: jmp 0x7fd640 */
  goto L_7fd640;
L_7fe805: /* 7fe805: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7fe808: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7fe809: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 7fe80c: jmp 0x7fd2c0 */
  goto L_7fd2c0;
L_7fe811: /* 7fe811: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fe814: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7fe817: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fe818: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fe819: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fe820: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fe821: mov esp, ebp */
  esp = ebp;
/* 7fe823: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fe824: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7fd2b8(void) {
  LOAD_REGS();
L_7fd2b8: /* 7fd2b8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 7fd2bf: nop  */
L_7fd2c0: /* 7fd2c0: mov edi, dword ptr [ebx + 0x494] */
  edi = R32((uint32_t)(ebx + 0x494u));
/* 7fd2c6: cmp eax, dword ptr [edi + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7fd2c9: jge 0x7fe811 */
  if ((sf == of)) goto L_7fe811;
L_7fd2cf: /* 7fd2cf: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* 7fd2d2: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 7fd2d5: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 7fd2d8: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 7fd2db: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd2e1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fd2e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd2e4: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x7fd2eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fd2ea: mov esi, eax */
  esi = eax;
/* 7fd2ec: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd2ee: jne 0x7fd35e */
  if (!zf) goto L_7fd35e;
L_7fd2f0: /* 7fd2f0: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7fd2f3: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 7fd2f9: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7fd2fc: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 7fd2ff: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd301: jne 0x7fd35e */
  if (!zf) goto L_7fd35e;
L_7fd303: /* 7fd303: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 7fd308: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x7fd30eu); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 7fd30e: mov edi, eax */
  edi = eax;
/* 7fd310: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd312: je 0x7fd332 */
  if (zf) goto L_7fd332;
L_7fd314: /* 7fd314: push 0xb86100 */
  { uint32_t v = 0xb86100u; esp -= 4; W32(esp, v); }
/* 7fd319: mov ecx, edi */
  ecx = edi;
/* 7fd31b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7fd321u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7fd321: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd323: jne 0x7fd35b */
  if (!zf) goto L_7fd35b;
L_7fd325: /* 7fd325: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd326: mov ecx, edi */
  ecx = edi;
/* 7fd328: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7fd32eu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7fd32e: mov esi, eax */
  esi = eax;
/* 7fd330: jmp 0x7fd337 */
  goto L_7fd337;
L_7fd332: /* 7fd332: mov esi, 0xae0c50 */
  esi = 0xae0c50u;
L_7fd337: /* 7fd337: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 7fd33c: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7fd342u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7fd342: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 7fd348: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd349: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7fd34b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fd34c: push 0xae0c5c */
  { uint32_t v = 0xae0c5cu; esp -= 4; W32(esp, v); }
/* 7fd351: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd352: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7fd358u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7fd358: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7fd35b: /* 7fd35b: mov esi, dword ptr [edi + 0x2c] */
  esi = R32((uint32_t)(edi + 0x2cu));
L_7fd35e: /* 7fd35e: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7fd361: cmp word ptr [ecx + 0x10], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x10u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7fd366: mov edi, dword ptr [ebx + 0x3fc] */
  edi = R32((uint32_t)(ebx + 0x3fcu));
/* 7fd36c: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 7fd36f: je 0x7fe805 */
  if (zf) goto L_7fe805;
L_7fd375: /* 7fd375: test byte ptr [ebx + 0x498], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x498u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd37c: jne 0x7fd4e3 */
  if (!zf) goto L_7fd4e3;
L_7fd382: /* 7fd382: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd388: movzx edx, byte ptr [ebx + 0x314] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x314u)));
/* 7fd38f: mov ecx, dword ptr [eax + 0x3ac] */
  ecx = R32((uint32_t)(eax + 0x3acu));
/* 7fd395: mov dword ptr [ecx + 0x38], edx */
  W32((uint32_t)(ecx + 0x38u), edx);
/* 7fd398: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7fd39b: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 7fd39e: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7fd3a1: cmp dword ptr [ecx + 0x540], 7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x540u))); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7fd3a8: jne 0x7fd3bf */
  if (!zf) goto L_7fd3bf;
L_7fd3aa: /* 7fd3aa: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd3b0: mov eax, dword ptr [edx + 0x3ac] */
  eax = R32((uint32_t)(edx + 0x3acu));
/* 7fd3b6: mov dword ptr [eax + 0x48], 0 */
  W32((uint32_t)(eax + 0x48u), 0x0u);
/* 7fd3bd: jmp 0x7fd3e5 */
  goto L_7fd3e5;
L_7fd3bf: /* 7fd3bf: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd3c1: je 0x7fd3d4 */
  if (zf) goto L_7fd3d4;
L_7fd3c3: /* 7fd3c3: push 0xb86630 */
  { uint32_t v = 0xb86630u; esp -= 4; W32(esp, v); }
/* 7fd3c8: mov ecx, esi */
  ecx = esi;
/* 7fd3ca: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7fd3d0u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7fd3d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd3d2: jne 0x7fd3d6 */
  if (!zf) goto L_7fd3d6;
L_7fd3d4: /* 7fd3d4: xor esi, esi */
  esi = 0;
L_7fd3d6: /* 7fd3d6: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd3dc: mov edx, dword ptr [ecx + 0x3ac] */
  edx = R32((uint32_t)(ecx + 0x3acu));
/* 7fd3e2: mov dword ptr [edx + 0x48], esi */
  W32((uint32_t)(edx + 0x48u), esi);
L_7fd3e5: /* 7fd3e5: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd3eb: mov ecx, dword ptr [eax + 0x3ac] */
  ecx = R32((uint32_t)(eax + 0x3acu));
/* 7fd3f1: mov dword ptr [ecx + 0x3c], 0 */
  W32((uint32_t)(ecx + 0x3cu), 0x0u);
/* 7fd3f8: mov edx, dword ptr [ebx + 0x498] */
  edx = R32((uint32_t)(ebx + 0x498u));
/* 7fd3fe: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd404: mov ecx, dword ptr [eax + 0x3ac] */
  ecx = R32((uint32_t)(eax + 0x3acu));
/* 7fd40a: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 7fd40c: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7fd40f: mov dword ptr [ecx + 0x40], edx */
  W32((uint32_t)(ecx + 0x40u), edx);
/* 7fd412: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd418: mov eax, dword ptr [edx + 0x3ac] */
  eax = R32((uint32_t)(edx + 0x3acu));
/* 7fd41e: mov dword ptr [eax + 0x44], 1 */
  W32((uint32_t)(eax + 0x44u), 0x1u);
/* 7fd425: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd42b: mov eax, dword ptr [edx + 0x3ac] */
  eax = R32((uint32_t)(edx + 0x3acu));
/* 7fd431: mov ecx, dword ptr [ebx + 0x1c8] */
  ecx = R32((uint32_t)(ebx + 0x1c8u));
/* 7fd437: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7fd43a: mov dword ptr [eax + 0x4c], ecx */
  W32((uint32_t)(eax + 0x4cu), ecx);
/* 7fd43d: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd443: mov edx, dword ptr [ecx + 0x3ac] */
  edx = R32((uint32_t)(ecx + 0x3acu));
/* 7fd449: mov eax, dword ptr [ebx + 0x1c4] */
  eax = R32((uint32_t)(ebx + 0x1c4u));
/* 7fd44f: mov dword ptr [edx + 0x50], eax */
  W32((uint32_t)(edx + 0x50u), eax);
/* 7fd452: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd458: mov eax, dword ptr [ecx + 0x3ac] */
  eax = R32((uint32_t)(ecx + 0x3acu));
/* 7fd45e: mov esi, dword ptr [eax + 0x60] */
  esi = R32((uint32_t)(eax + 0x60u));
/* 7fd461: mov edx, dword ptr [ebx + 0x1c8] */
  edx = R32((uint32_t)(ebx + 0x1c8u));
/* 7fd467: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 7fd469: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7fd46b: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7fd46e: xor esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 7fd470: mov dword ptr [eax + 0x60], esi */
  W32((uint32_t)(eax + 0x60u), esi);
/* 7fd473: mov eax, dword ptr [ebx + 0x1c8] */
  eax = R32((uint32_t)(ebx + 0x1c8u));
/* 7fd479: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd47f: mov edx, dword ptr [ecx + 0x3ac] */
  edx = R32((uint32_t)(ecx + 0x3acu));
/* 7fd485: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7fd488: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7fd48b: mov dword ptr [edx + 0x54], eax */
  W32((uint32_t)(edx + 0x54u), eax);
/* 7fd48e: mov eax, dword ptr [ebx + 0x1c8] */
  eax = R32((uint32_t)(ebx + 0x1c8u));
/* 7fd494: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd49a: mov edx, dword ptr [ecx + 0x3ac] */
  edx = R32((uint32_t)(ecx + 0x3acu));
/* 7fd4a0: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7fd4a3: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7fd4a6: mov dword ptr [edx + 0x58], eax */
  W32((uint32_t)(edx + 0x58u), eax);
/* 7fd4a9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7fd4ac: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7fd4af: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x7fd4b4u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 7fd4b4: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd4ba: mov edx, dword ptr [ecx + 0x3ac] */
  edx = R32((uint32_t)(ecx + 0x3acu));
/* 7fd4c0: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7fd4c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd4c5: mov dword ptr [edx + 0x5c], eax */
  W32((uint32_t)(edx + 0x5cu), eax);
/* 7fd4c8: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd4ce: mov edx, dword ptr [edx + 0x3ac] */
  edx = R32((uint32_t)(edx + 0x3acu));
/* 7fd4d4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7fd4d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd4d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd4da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fd4db: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x7fd4deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fd4de: jmp 0x7fd630 */
  goto L_7fd630;
L_7fd4e3: /* 7fd4e3: mov eax, dword ptr [0xb91598] */
  eax = R32((uint32_t)(0xb91598u));
/* 7fd4e8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd4ea: jne 0x7fd560 */
  if (!zf) goto L_7fd560;
L_7fd4ec: /* 7fd4ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd4ee: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 7fd4f1: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7fd4f7u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7fd4f7: push 0xb87af0 */
  { uint32_t v = 0xb87af0u; esp -= 4; W32(esp, v); }
/* 7fd4fc: mov ecx, 0xb87af0 */
  ecx = 0xb87af0u;
/* 7fd501: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7fd507u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7fd507: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd509: jne 0x7fd523 */
  if (!zf) goto L_7fd523;
L_7fd50b: /* 7fd50b: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7fd510: push 0xae0b80 */
  { uint32_t v = 0xae0b80u; esp -= 4; W32(esp, v); }
/* 7fd515: push 0xae0bc4 */
  { uint32_t v = 0xae0bc4u; esp -= 4; W32(esp, v); }
/* 7fd51a: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7fd520u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7fd520: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7fd523: /* 7fd523: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7fd529u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 7fd529: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7fd52f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fd531: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7fd534: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd536: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fd537: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd539: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd53b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fd53c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd53d: push 0xb87af0 */
  { uint32_t v = 0xb87af0u; esp -= 4; W32(esp, v); }
/* 7fd542: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7fd548u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7fd548: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 7fd54e: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fd551: push 0xb91598 */
  { uint32_t v = 0xb91598u; esp -= 4; W32(esp, v); }
/* 7fd556: mov dword ptr [0xb91598], eax */
  W32((uint32_t)(0xb91598u), eax);
/* 7fd55b: call 0x6c1203 */
  esp -= 4; W32(esp, 0x7fd560u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
L_7fd560: /* 7fd560: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7fd563: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7fd566: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x7fd56bu); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 7fd56b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd56d: je 0x7fd607 */
  if (zf) goto L_7fd607;
L_7fd573: /* 7fd573: mov eax, dword ptr [0xb91594] */
  eax = R32((uint32_t)(0xb91594u));
/* 7fd578: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd57a: jne 0x7fd5f9 */
  if (!zf) goto L_7fd5f9;
L_7fd57c: /* 7fd57c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd57e: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7fd581: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7fd587u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7fd587: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 7fd58c: mov ecx, 0xb88020 */
  ecx = 0xb88020u;
/* 7fd591: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7fd597u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7fd597: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd599: jne 0x7fd5b3 */
  if (!zf) goto L_7fd5b3;
L_7fd59b: /* 7fd59b: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7fd5a0: push 0xae0be8 */
  { uint32_t v = 0xae0be8u; esp -= 4; W32(esp, v); }
/* 7fd5a5: push 0xae0c2c */
  { uint32_t v = 0xae0c2cu; esp -= 4; W32(esp, v); }
/* 7fd5aa: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7fd5b0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7fd5b0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7fd5b3: /* 7fd5b3: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7fd5b9u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 7fd5b9: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7fd5bf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fd5c1: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7fd5c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd5c6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fd5c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd5c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd5cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fd5cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd5cd: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 7fd5d2: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7fd5d8u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7fd5d8: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 7fd5de: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fd5e1: push 0xb91594 */
  { uint32_t v = 0xb91594u; esp -= 4; W32(esp, v); }
/* 7fd5e6: mov dword ptr [0xb91594], eax */
  W32((uint32_t)(0xb91594u), eax);
/* 7fd5eb: call 0x6c1203 */
  esp -= 4; W32(esp, 0x7fd5f0u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 7fd5f0: mov eax, dword ptr [0xb91594] */
  eax = R32((uint32_t)(0xb91594u));
/* 7fd5f5: or dword ptr [eax + 0x5c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x5cu), r);
  }
L_7fd5f9: /* 7fd5f9: mov eax, dword ptr [0xb91594] */
  eax = R32((uint32_t)(0xb91594u));
/* 7fd5fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd600: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd602: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd604: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd605: jmp 0x7fd628 */
  goto L_7fd628;
L_7fd607: /* 7fd607: test byte ptr [ebx + 0x498], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x498u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd60e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd610: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd612: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd614: je 0x7fd627 */
  if (zf) goto L_7fd627;
L_7fd616: /* 7fd616: mov ecx, dword ptr [0xb91598] */
  ecx = R32((uint32_t)(0xb91598u));
/* 7fd61c: mov dword ptr [ecx + 0x38], esi */
  W32((uint32_t)(ecx + 0x38u), esi);
/* 7fd61f: mov eax, dword ptr [0xb91598] */
  eax = R32((uint32_t)(0xb91598u));
/* 7fd624: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd625: jmp 0x7fd628 */
  goto L_7fd628;
L_7fd627: /* 7fd627: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_7fd628: /* 7fd628: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7fd62b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fd62d: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x7fd630u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7fd630: /* 7fd630: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7fd637: jmp 0x7fd640 */
  goto L_7fd640;
L_7fd640: /* 7fd640: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7fd643: cmp eax, dword ptr [ebx + 0x40c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x40cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7fd649: jge 0x7fe805 */
  if ((sf == of)) goto L_7fe805;
L_7fd64f: /* 7fd64f: test byte ptr [edi + 0xbc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0xbcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd656: jne 0x7fd66a */
  if (!zf) goto L_7fd66a;
L_7fd658: /* 7fd658: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7fd65b: add edi, 0xc8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7fd661: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7fd662: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 7fd665: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7fd668: jmp 0x7fd640 */
  goto L_7fd640;
L_7fd66a: /* 7fd66a: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 7fd66d: mov ecx, edi */
  ecx = edi;
/* 7fd66f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fd671: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7fd674: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7fd677: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7fd67a: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7fd67d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7fd681: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7fd684: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7fd687: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x7fd68du); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 7fd68d: mov esi, dword ptr [ebx + 0x214] */
  esi = R32((uint32_t)(ebx + 0x214u));
/* 7fd693: and esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  esi = r;
  }
/* 7fd696: je 0x7fd6d4 */
  if (zf) goto L_7fd6d4;
L_7fd698: /* 7fd698: fld dword ptr [edi + 0x30] */
  { double v = F32((uint32_t)(edi + 0x30u)); FPUSH(v); }
/* 7fd69b: fmul dword ptr [edi + 0xac] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xacu)));
/* 7fd6a1: fadd dword ptr [edi + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x3cu)));
/* 7fd6a4: call 0x99c958 */
  esp -= 4; W32(esp, 0x7fd6a9u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7fd6a9: fld dword ptr [edi + 0x34] */
  { double v = F32((uint32_t)(edi + 0x34u)); FPUSH(v); }
/* 7fd6ac: fmul dword ptr [edi + 0xac] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xacu)));
/* 7fd6b2: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7fd6b5: fadd dword ptr [edi + 0x40] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x40u)));
/* 7fd6b8: call 0x99c958 */
  esp -= 4; W32(esp, 0x7fd6bdu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7fd6bd: fld dword ptr [edi + 0x38] */
  { double v = F32((uint32_t)(edi + 0x38u)); FPUSH(v); }
/* 7fd6c0: fmul dword ptr [edi + 0xac] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xacu)));
/* 7fd6c6: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 7fd6c9: fadd dword ptr [edi + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x44u)));
/* 7fd6cc: call 0x99c958 */
  esp -= 4; W32(esp, 0x7fd6d1u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7fd6d1: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
L_7fd6d4: /* 7fd6d4: cmp byte ptr [ebx + 0xf4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0xf4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7fd6db: jne 0x7fe109 */
  if (!zf) goto L_7fe109;
L_7fd6e1: /* 7fd6e1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd6e3: je 0x7fdc43 */
  if (zf) goto L_7fdc43;
L_7fd6e9: /* 7fd6e9: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7fd6ec: mov ebx, dword ptr [edx + 0x3f0] */
  ebx = R32((uint32_t)(edx + 0x3f0u));
/* 7fd6f2: lea eax, [ebx + 0x170] */
  eax = (uint32_t)(ebx + 0x170u);
/* 7fd6f8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7fd6fa: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7fd6fd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7fd700: mov dword ptr [ebp - 0x70], ecx */
  W32((uint32_t)(ebp + 0xffffff90u), ecx);
/* 7fd703: mov dword ptr [ebp - 0x6c], edx */
  W32((uint32_t)(ebp + 0xffffff94u), edx);
/* 7fd706: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 7fd709: mov dword ptr [ebp - 0x20c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffdf4u), 0x3f800000u);
/* 7fd713: mov dword ptr [ebp - 0x208], 0 */
  W32((uint32_t)(ebp + 0xfffffdf8u), 0x0u);
/* 7fd71d: mov dword ptr [ebp - 0x204], 0 */
  W32((uint32_t)(ebp + 0xfffffdfcu), 0x0u);
/* 7fd727: mov dword ptr [ebp - 0x200], 0 */
  W32((uint32_t)(ebp + 0xfffffe00u), 0x0u);
/* 7fd731: mov dword ptr [ebp - 0x1fc], 0 */
  W32((uint32_t)(ebp + 0xfffffe04u), 0x0u);
/* 7fd73b: mov dword ptr [ebp - 0x1f8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe08u), 0x3f800000u);
/* 7fd745: mov dword ptr [ebp - 0x1f4], 0 */
  W32((uint32_t)(ebp + 0xfffffe0cu), 0x0u);
/* 7fd74f: mov dword ptr [ebp - 0x1f0], 0 */
  W32((uint32_t)(ebp + 0xfffffe10u), 0x0u);
/* 7fd759: mov dword ptr [ebp - 0x1ec], 0 */
  W32((uint32_t)(ebp + 0xfffffe14u), 0x0u);
/* 7fd763: mov dword ptr [ebp - 0x1e8], 0 */
  W32((uint32_t)(ebp + 0xfffffe18u), 0x0u);
/* 7fd76d: mov dword ptr [ebp - 0x1e4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe1cu), 0x3f800000u);
/* 7fd777: mov dword ptr [ebp - 0x1e0], 0 */
  W32((uint32_t)(ebp + 0xfffffe20u), 0x0u);
/* 7fd781: mov dword ptr [ebp - 0x1dc], ecx */
  W32((uint32_t)(ebp + 0xfffffe24u), ecx);
/* 7fd787: mov dword ptr [ebp - 0x1d8], edx */
  W32((uint32_t)(ebp + 0xfffffe28u), edx);
/* 7fd78d: mov dword ptr [ebp - 0x1d4], eax */
  W32((uint32_t)(ebp + 0xfffffe2cu), eax);
/* 7fd793: mov dword ptr [ebp - 0x1d0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe30u), 0x3f800000u);
/* 7fd79d: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fd7a2: lea esi, [ebp - 0x20c] */
  esi = (uint32_t)(ebp + 0xfffffdf4u);
/* 7fd7a8: lea edi, [ebp - 0x8c4] */
  edi = (uint32_t)(ebp + 0xfffff73cu);
/* 7fd7ae: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd7b0: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fd7b5: lea esi, [ebp - 0x20c] */
  esi = (uint32_t)(ebp + 0xfffffdf4u);
/* 7fd7bb: lea edi, [ebp - 0x5c4] */
  edi = (uint32_t)(ebp + 0xfffffa3cu);
/* 7fd7c1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd7c3: lea ecx, [ebx + 0x17c] */
  ecx = (uint32_t)(ebx + 0x17cu);
/* 7fd7c9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7fd7cb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fd7ce: mov edx, esp */
  edx = esp;
/* 7fd7d0: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7fd7d2: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7fd7d5: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7fd7d8: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7fd7db: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7fd7de: lea ecx, [ebp - 0xbc4] */
  ecx = (uint32_t)(ebp + 0xfffff43cu);
/* 7fd7e4: call 0x6c9160 */
  esp -= 4; W32(esp, 0x7fd7e9u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 7fd7e9: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fd7ee: mov esi, eax */
  esi = eax;
/* 7fd7f0: lea edi, [ebp - 0x844] */
  edi = (uint32_t)(ebp + 0xfffff7bcu);
/* 7fd7f6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd7f8: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7fd7fb: mov esi, eax */
  esi = eax;
/* 7fd7fd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7fd800: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fd805: lea edi, [ebp - 0xa44] */
  edi = (uint32_t)(ebp + 0xfffff5bcu);
/* 7fd80b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd80d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7fd810: mov dword ptr [ebp - 0xcc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x3f800000u);
/* 7fd81a: mov dword ptr [ebp - 0xc8], 0 */
  W32((uint32_t)(ebp + 0xffffff38u), 0x0u);
/* 7fd824: mov dword ptr [ebp - 0xc4], 0 */
  W32((uint32_t)(ebp + 0xffffff3cu), 0x0u);
/* 7fd82e: mov dword ptr [ebp - 0xc0], 0 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x0u);
/* 7fd838: mov dword ptr [ebp - 0xbc], 0 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x0u);
/* 7fd842: mov dword ptr [ebp - 0xb8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x3f800000u);
/* 7fd84c: mov dword ptr [ebp - 0xb4], 0 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x0u);
/* 7fd856: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 7fd860: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 7fd86a: mov dword ptr [ebp - 0xa8], 0 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x0u);
/* 7fd874: mov dword ptr [ebp - 0xa4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x3f800000u);
/* 7fd87e: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 7fd888: mov dword ptr [ebp - 0x9c], edx */
  W32((uint32_t)(ebp + 0xffffff64u), edx);
/* 7fd88e: mov dword ptr [ebp - 0x98], eax */
  W32((uint32_t)(ebp + 0xffffff68u), eax);
/* 7fd894: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 7fd89a: mov dword ptr [ebp - 0x90], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x3f800000u);
/* 7fd8a4: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fd8a9: lea esi, [ebp - 0xcc] */
  esi = (uint32_t)(ebp + 0xffffff34u);
/* 7fd8af: lea edi, [ebp - 0xd44] */
  edi = (uint32_t)(ebp + 0xfffff2bcu);
/* 7fd8b5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd8b7: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7fd8ba: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fd8bd: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fd8c2: lea esi, [ebp - 0xcc] */
  esi = (uint32_t)(ebp + 0xffffff34u);
/* 7fd8c8: lea edi, [ebp - 0x544] */
  edi = (uint32_t)(ebp + 0xfffffabcu);
/* 7fd8ce: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd8d0: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7fd8d3: mov edx, esp */
  edx = esp;
/* 7fd8d5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7fd8d7: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7fd8da: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7fd8dd: lea ecx, [ebp - 0x7c4] */
  ecx = (uint32_t)(ebp + 0xfffff83cu);
/* 7fd8e3: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7fd8e6: call 0x6c9160 */
  esp -= 4; W32(esp, 0x7fd8ebu); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 7fd8eb: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fd8f0: mov esi, eax */
  esi = eax;
/* 7fd8f2: lea edi, [ebp - 0xb44] */
  edi = (uint32_t)(ebp + 0xfffff4bcu);
/* 7fd8f8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd8fa: mov esi, eax */
  esi = eax;
/* 7fd8fc: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fd901: lea edi, [ebp - 0xcc4] */
  edi = (uint32_t)(ebp + 0xfffff33cu);
/* 7fd907: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd909: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7fd90c: add ecx, 0x6c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7fd90f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fd911: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7fd914: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7fd917: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 7fd91a: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 7fd91d: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 7fd920: mov dword ptr [ebp - 0x18c], edx */
  W32((uint32_t)(ebp + 0xfffffe74u), edx);
/* 7fd926: mov dword ptr [ebp - 0x188], 0 */
  W32((uint32_t)(ebp + 0xfffffe78u), 0x0u);
/* 7fd930: mov dword ptr [ebp - 0x184], 0 */
  W32((uint32_t)(ebp + 0xfffffe7cu), 0x0u);
/* 7fd93a: mov dword ptr [ebp - 0x180], 0 */
  W32((uint32_t)(ebp + 0xfffffe80u), 0x0u);
/* 7fd944: mov dword ptr [ebp - 0x17c], 0 */
  W32((uint32_t)(ebp + 0xfffffe84u), 0x0u);
/* 7fd94e: mov dword ptr [ebp - 0x178], eax */
  W32((uint32_t)(ebp + 0xfffffe88u), eax);
/* 7fd954: mov dword ptr [ebp - 0x174], 0 */
  W32((uint32_t)(ebp + 0xfffffe8cu), 0x0u);
/* 7fd95e: mov dword ptr [ebp - 0x170], 0 */
  W32((uint32_t)(ebp + 0xfffffe90u), 0x0u);
/* 7fd968: mov dword ptr [ebp - 0x16c], 0 */
  W32((uint32_t)(ebp + 0xfffffe94u), 0x0u);
/* 7fd972: mov dword ptr [ebp - 0x168], 0 */
  W32((uint32_t)(ebp + 0xfffffe98u), 0x0u);
/* 7fd97c: mov dword ptr [ebp - 0x164], ecx */
  W32((uint32_t)(ebp + 0xfffffe9cu), ecx);
/* 7fd982: mov dword ptr [ebp - 0x160], 0 */
  W32((uint32_t)(ebp + 0xfffffea0u), 0x0u);
/* 7fd98c: mov dword ptr [ebp - 0x15c], 0 */
  W32((uint32_t)(ebp + 0xfffffea4u), 0x0u);
/* 7fd996: mov dword ptr [ebp - 0x158], 0 */
  W32((uint32_t)(ebp + 0xfffffea8u), 0x0u);
/* 7fd9a0: mov dword ptr [ebp - 0x154], 0 */
  W32((uint32_t)(ebp + 0xfffffeacu), 0x0u);
/* 7fd9aa: mov dword ptr [ebp - 0x150], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeb0u), 0x3f800000u);
/* 7fd9b4: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fd9b9: lea esi, [ebp - 0x18c] */
  esi = (uint32_t)(ebp + 0xfffffe74u);
/* 7fd9bf: lea edi, [ebp - 0x744] */
  edi = (uint32_t)(ebp + 0xfffff8bcu);
/* 7fd9c5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd9c7: fld dword ptr [ebx + 0x29c] */
  { double v = F32((uint32_t)(ebx + 0x29cu)); FPUSH(v); }
/* 7fd9cd: fchs  */
  ST0 = -ST0;
/* 7fd9cf: fld dword ptr [ebx + 0x298] */
  { double v = F32((uint32_t)(ebx + 0x298u)); FPUSH(v); }
/* 7fd9d5: fchs  */
  ST0 = -ST0;
/* 7fd9d7: fld dword ptr [ebx + 0x294] */
  { double v = F32((uint32_t)(ebx + 0x294u)); FPUSH(v); }
/* 7fd9dd: mov dword ptr [ebp - 0x38c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc74u), 0x3f800000u);
/* 7fd9e7: fchs  */
  ST0 = -ST0;
/* 7fd9e9: mov dword ptr [ebp - 0x388], 0 */
  W32((uint32_t)(ebp + 0xfffffc78u), 0x0u);
/* 7fd9f3: fstp dword ptr [ebp - 0x35c] */
  WF32((uint32_t)(ebp + 0xfffffca4u), ST0); FPOP();
/* 7fd9f9: mov dword ptr [ebp - 0x384], 0 */
  W32((uint32_t)(ebp + 0xfffffc7cu), 0x0u);
/* 7fda03: mov dword ptr [ebp - 0x380], 0 */
  W32((uint32_t)(ebp + 0xfffffc80u), 0x0u);
/* 7fda0d: fstp dword ptr [ebp - 0x358] */
  WF32((uint32_t)(ebp + 0xfffffca8u), ST0); FPOP();
/* 7fda13: mov dword ptr [ebp - 0x37c], 0 */
  W32((uint32_t)(ebp + 0xfffffc84u), 0x0u);
/* 7fda1d: mov dword ptr [ebp - 0x378], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc88u), 0x3f800000u);
/* 7fda27: fstp dword ptr [ebp - 0x354] */
  WF32((uint32_t)(ebp + 0xfffffcacu), ST0); FPOP();
/* 7fda2d: mov dword ptr [ebp - 0x374], 0 */
  W32((uint32_t)(ebp + 0xfffffc8cu), 0x0u);
/* 7fda37: mov dword ptr [ebp - 0x370], 0 */
  W32((uint32_t)(ebp + 0xfffffc90u), 0x0u);
/* 7fda41: mov dword ptr [ebp - 0x36c], 0 */
  W32((uint32_t)(ebp + 0xfffffc94u), 0x0u);
/* 7fda4b: mov dword ptr [ebp - 0x368], 0 */
  W32((uint32_t)(ebp + 0xfffffc98u), 0x0u);
/* 7fda55: mov dword ptr [ebp - 0x364], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc9cu), 0x3f800000u);
/* 7fda5f: mov dword ptr [ebp - 0x360], 0 */
  W32((uint32_t)(ebp + 0xfffffca0u), 0x0u);
/* 7fda69: mov dword ptr [ebp - 0x350], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffcb0u), 0x3f800000u);
/* 7fda73: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7fda77: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fda7a: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fda7f: lea esi, [ebp - 0x18c] */
  esi = (uint32_t)(ebp + 0xfffffe74u);
/* 7fda85: mov edi, esp */
  edi = esp;
/* 7fda87: lea edx, [ebp - 0xec4] */
  edx = (uint32_t)(ebp + 0xfffff13cu);
/* 7fda8d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fda8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fda90: lea ecx, [ebp - 0x38c] */
  ecx = (uint32_t)(ebp + 0xfffffc74u);
/* 7fda96: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fda9cu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fda9c: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fda9f: mov edi, esp */
  edi = esp;
/* 7fdaa1: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdaa6: lea esi, [ebp - 0xcc4] */
  esi = (uint32_t)(ebp + 0xfffff33cu);
/* 7fdaac: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdaae: lea ecx, [ebp - 0x6c4] */
  ecx = (uint32_t)(ebp + 0xfffff93cu);
/* 7fdab4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fdab5: mov ecx, eax */
  ecx = eax;
/* 7fdab7: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7fdabb: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fdac1u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fdac1: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fdac4: mov edi, esp */
  edi = esp;
/* 7fdac6: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdacb: lea esi, [ebp - 0x544] */
  esi = (uint32_t)(ebp + 0xfffffabcu);
/* 7fdad1: lea edx, [ebp - 0xac4] */
  edx = (uint32_t)(ebp + 0xfffff53cu);
/* 7fdad7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdad9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fdada: mov ecx, eax */
  ecx = eax;
/* 7fdadc: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7fdae0: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fdae6u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fdae6: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fdae9: mov edi, esp */
  edi = esp;
/* 7fdaeb: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdaf0: lea esi, [ebp - 0xa44] */
  esi = (uint32_t)(ebp + 0xfffff5bcu);
/* 7fdaf6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdaf8: lea ecx, [ebp - 0x644] */
  ecx = (uint32_t)(ebp + 0xfffff9bcu);
/* 7fdafe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fdaff: mov ecx, eax */
  ecx = eax;
/* 7fdb01: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 7fdb05: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fdb0bu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fdb0b: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fdb0e: mov edi, esp */
  edi = esp;
/* 7fdb10: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdb15: lea esi, [ebp - 0x5c4] */
  esi = (uint32_t)(ebp + 0xfffffa3cu);
/* 7fdb1b: lea edx, [ebp - 0x4c4] */
  edx = (uint32_t)(ebp + 0xfffffb3cu);
/* 7fdb21: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdb23: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fdb24: mov ecx, eax */
  ecx = eax;
/* 7fdb26: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 7fdb2a: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fdb30u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fdb30: mov esi, eax */
  esi = eax;
/* 7fdb32: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdb37: lea edi, [ebp - 0x484] */
  edi = (uint32_t)(ebp + 0xfffffb7cu);
/* 7fdb3d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdb3f: lea ecx, [ebp - 0x4c4] */
  ecx = (uint32_t)(ebp + 0xfffffb3cu);
/* 7fdb45: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdb4bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdb4b: lea ecx, [ebp - 0x644] */
  ecx = (uint32_t)(ebp + 0xfffff9bcu);
/* 7fdb51: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 7fdb55: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdb5bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdb5b: lea ecx, [ebp - 0xac4] */
  ecx = (uint32_t)(ebp + 0xfffff53cu);
/* 7fdb61: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7fdb65: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdb6bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdb6b: lea ecx, [ebp - 0x6c4] */
  ecx = (uint32_t)(ebp + 0xfffff93cu);
/* 7fdb71: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7fdb75: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdb7bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdb7b: lea ecx, [ebp - 0xec4] */
  ecx = (uint32_t)(ebp + 0xfffff13cu);
/* 7fdb81: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7fdb85: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdb8bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdb8b: lea ecx, [ebp - 0x38c] */
  ecx = (uint32_t)(ebp + 0xfffffc74u);
/* 7fdb91: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 7fdb95: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdb9bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdb9b: lea ecx, [ebp - 0x744] */
  ecx = (uint32_t)(ebp + 0xfffff8bcu);
/* 7fdba1: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 7fdba5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdbabu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdbab: lea ecx, [ebp - 0x18c] */
  ecx = (uint32_t)(ebp + 0xfffffe74u);
/* 7fdbb1: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7fdbb5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdbbbu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdbbb: lea ecx, [ebp - 0xb44] */
  ecx = (uint32_t)(ebp + 0xfffff4bcu);
/* 7fdbc1: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 7fdbc5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdbcbu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdbcb: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7fdbcf: lea ecx, [ebp - 0x7c4] */
  ecx = (uint32_t)(ebp + 0xfffff83cu);
/* 7fdbd5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdbdbu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdbdb: lea ecx, [ebp - 0xd44] */
  ecx = (uint32_t)(ebp + 0xfffff2bcu);
/* 7fdbe1: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7fdbe5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdbebu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdbeb: lea ecx, [ebp - 0xcc] */
  ecx = (uint32_t)(ebp + 0xffffff34u);
/* 7fdbf1: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7fdbf5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdbfbu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdbfb: lea ecx, [ebp - 0x844] */
  ecx = (uint32_t)(ebp + 0xfffff7bcu);
/* 7fdc01: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7fdc05: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdc0bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdc0b: lea ecx, [ebp - 0xbc4] */
  ecx = (uint32_t)(ebp + 0xfffff43cu);
/* 7fdc11: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7fdc15: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdc1bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdc1b: lea ecx, [ebp - 0x8c4] */
  ecx = (uint32_t)(ebp + 0xfffff73cu);
/* 7fdc21: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7fdc25: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdc2bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdc2b: lea ecx, [ebp - 0x20c] */
  ecx = (uint32_t)(ebp + 0xfffffdf4u);
/* 7fdc31: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7fdc35: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdc3bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdc3b: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7fdc3e: jmp 0x7fe78e */
  goto L_7fe78e;
L_7fdc43: /* 7fdc43: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7fdc46: mov ebx, dword ptr [eax + 0x3f0] */
  ebx = R32((uint32_t)(eax + 0x3f0u));
/* 7fdc4c: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 7fdc52: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fdc54: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7fdc57: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7fdc5a: mov dword ptr [ebp - 0x64], edx */
  W32((uint32_t)(ebp + 0xffffff9cu), edx);
/* 7fdc5d: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 7fdc60: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 7fdc63: mov dword ptr [ebp - 0x10c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffef4u), 0x3f800000u);
/* 7fdc6d: mov dword ptr [ebp - 0x108], 0 */
  W32((uint32_t)(ebp + 0xfffffef8u), 0x0u);
/* 7fdc77: mov dword ptr [ebp - 0x104], 0 */
  W32((uint32_t)(ebp + 0xfffffefcu), 0x0u);
/* 7fdc81: mov dword ptr [ebp - 0x100], 0 */
  W32((uint32_t)(ebp + 0xffffff00u), 0x0u);
/* 7fdc8b: mov dword ptr [ebp - 0xfc], 0 */
  W32((uint32_t)(ebp + 0xffffff04u), 0x0u);
/* 7fdc95: mov dword ptr [ebp - 0xf8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff08u), 0x3f800000u);
/* 7fdc9f: mov dword ptr [ebp - 0xf4], 0 */
  W32((uint32_t)(ebp + 0xffffff0cu), 0x0u);
/* 7fdca9: mov dword ptr [ebp - 0xf0], 0 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x0u);
/* 7fdcb3: mov dword ptr [ebp - 0xec], 0 */
  W32((uint32_t)(ebp + 0xffffff14u), 0x0u);
/* 7fdcbd: mov dword ptr [ebp - 0xe8], 0 */
  W32((uint32_t)(ebp + 0xffffff18u), 0x0u);
/* 7fdcc7: mov dword ptr [ebp - 0xe4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff1cu), 0x3f800000u);
/* 7fdcd1: mov dword ptr [ebp - 0xe0], 0 */
  W32((uint32_t)(ebp + 0xffffff20u), 0x0u);
/* 7fdcdb: mov dword ptr [ebp - 0xdc], edx */
  W32((uint32_t)(ebp + 0xffffff24u), edx);
/* 7fdce1: mov dword ptr [ebp - 0xd8], eax */
  W32((uint32_t)(ebp + 0xffffff28u), eax);
/* 7fdce7: mov dword ptr [ebp - 0xd4], ecx */
  W32((uint32_t)(ebp + 0xffffff2cu), ecx);
/* 7fdced: mov dword ptr [ebp - 0xd0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x3f800000u);
/* 7fdcf7: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdcfc: lea esi, [ebp - 0x10c] */
  esi = (uint32_t)(ebp + 0xfffffef4u);
/* 7fdd02: lea edi, [ebp - 0x804] */
  edi = (uint32_t)(ebp + 0xfffff7fcu);
/* 7fdd08: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdd0a: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdd0f: lea esi, [ebp - 0x10c] */
  esi = (uint32_t)(ebp + 0xfffffef4u);
/* 7fdd15: lea edi, [ebp - 0xc44] */
  edi = (uint32_t)(ebp + 0xfffff3bcu);
/* 7fdd1b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdd1d: lea edx, [ebx + 0x17c] */
  edx = (uint32_t)(ebx + 0x17cu);
/* 7fdd23: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7fdd25: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fdd28: mov eax, esp */
  eax = esp;
/* 7fdd2a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7fdd2c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7fdd2f: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7fdd32: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7fdd35: lea ecx, [ebp - 0x784] */
  ecx = (uint32_t)(ebp + 0xfffff87cu);
/* 7fdd3b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7fdd3e: call 0x6c9160 */
  esp -= 4; W32(esp, 0x7fdd43u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 7fdd43: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdd48: mov esi, eax */
  esi = eax;
/* 7fdd4a: lea edi, [ebp - 0x704] */
  edi = (uint32_t)(ebp + 0xfffff8fcu);
/* 7fdd50: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdd52: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7fdd55: mov esi, eax */
  esi = eax;
/* 7fdd57: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7fdd5a: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdd5f: lea edi, [ebp - 0x944] */
  edi = (uint32_t)(ebp + 0xfffff6bcu);
/* 7fdd65: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdd67: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7fdd6a: mov dword ptr [ebp - 0x28c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffd74u), 0x3f800000u);
/* 7fdd74: mov dword ptr [ebp - 0x288], 0 */
  W32((uint32_t)(ebp + 0xfffffd78u), 0x0u);
/* 7fdd7e: mov dword ptr [ebp - 0x284], 0 */
  W32((uint32_t)(ebp + 0xfffffd7cu), 0x0u);
/* 7fdd88: mov dword ptr [ebp - 0x280], 0 */
  W32((uint32_t)(ebp + 0xfffffd80u), 0x0u);
/* 7fdd92: mov dword ptr [ebp - 0x27c], 0 */
  W32((uint32_t)(ebp + 0xfffffd84u), 0x0u);
/* 7fdd9c: mov dword ptr [ebp - 0x278], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffd88u), 0x3f800000u);
/* 7fdda6: mov dword ptr [ebp - 0x274], 0 */
  W32((uint32_t)(ebp + 0xfffffd8cu), 0x0u);
/* 7fddb0: mov dword ptr [ebp - 0x270], 0 */
  W32((uint32_t)(ebp + 0xfffffd90u), 0x0u);
/* 7fddba: mov dword ptr [ebp - 0x26c], 0 */
  W32((uint32_t)(ebp + 0xfffffd94u), 0x0u);
/* 7fddc4: mov dword ptr [ebp - 0x268], 0 */
  W32((uint32_t)(ebp + 0xfffffd98u), 0x0u);
/* 7fddce: mov dword ptr [ebp - 0x264], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffd9cu), 0x3f800000u);
/* 7fddd8: mov dword ptr [ebp - 0x260], 0 */
  W32((uint32_t)(ebp + 0xfffffda0u), 0x0u);
/* 7fdde2: mov dword ptr [ebp - 0x25c], eax */
  W32((uint32_t)(ebp + 0xfffffda4u), eax);
/* 7fdde8: mov dword ptr [ebp - 0x258], ecx */
  W32((uint32_t)(ebp + 0xfffffda8u), ecx);
/* 7fddee: mov dword ptr [ebp - 0x254], edx */
  W32((uint32_t)(ebp + 0xfffffdacu), edx);
/* 7fddf4: mov dword ptr [ebp - 0x250], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffdb0u), 0x3f800000u);
/* 7fddfe: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fde03: lea esi, [ebp - 0x28c] */
  esi = (uint32_t)(ebp + 0xfffffd74u);
/* 7fde09: lea edi, [ebp - 0x684] */
  edi = (uint32_t)(ebp + 0xfffff97cu);
/* 7fde0f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fde11: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7fde14: add eax, 0x6c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7fde17: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fde1c: lea esi, [ebp - 0x28c] */
  esi = (uint32_t)(ebp + 0xfffffd74u);
/* 7fde22: lea edi, [ebp - 0xe44] */
  edi = (uint32_t)(ebp + 0xfffff1bcu);
/* 7fde28: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fde2a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7fde2c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7fde2f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7fde32: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 7fde35: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 7fde38: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 7fde3b: mov dword ptr [ebp - 0x30c], ecx */
  W32((uint32_t)(ebp + 0xfffffcf4u), ecx);
/* 7fde41: mov dword ptr [ebp - 0x308], 0 */
  W32((uint32_t)(ebp + 0xfffffcf8u), 0x0u);
/* 7fde4b: mov dword ptr [ebp - 0x304], 0 */
  W32((uint32_t)(ebp + 0xfffffcfcu), 0x0u);
/* 7fde55: mov dword ptr [ebp - 0x300], 0 */
  W32((uint32_t)(ebp + 0xfffffd00u), 0x0u);
/* 7fde5f: mov dword ptr [ebp - 0x2fc], 0 */
  W32((uint32_t)(ebp + 0xfffffd04u), 0x0u);
/* 7fde69: mov dword ptr [ebp - 0x2f8], edx */
  W32((uint32_t)(ebp + 0xfffffd08u), edx);
/* 7fde6f: mov dword ptr [ebp - 0x2f4], 0 */
  W32((uint32_t)(ebp + 0xfffffd0cu), 0x0u);
/* 7fde79: mov dword ptr [ebp - 0x2f0], 0 */
  W32((uint32_t)(ebp + 0xfffffd10u), 0x0u);
/* 7fde83: mov dword ptr [ebp - 0x2ec], 0 */
  W32((uint32_t)(ebp + 0xfffffd14u), 0x0u);
/* 7fde8d: mov dword ptr [ebp - 0x2e8], 0 */
  W32((uint32_t)(ebp + 0xfffffd18u), 0x0u);
/* 7fde97: mov dword ptr [ebp - 0x2e4], eax */
  W32((uint32_t)(ebp + 0xfffffd1cu), eax);
/* 7fde9d: mov dword ptr [ebp - 0x2e0], 0 */
  W32((uint32_t)(ebp + 0xfffffd20u), 0x0u);
/* 7fdea7: mov dword ptr [ebp - 0x2dc], 0 */
  W32((uint32_t)(ebp + 0xfffffd24u), 0x0u);
/* 7fdeb1: mov dword ptr [ebp - 0x2d8], 0 */
  W32((uint32_t)(ebp + 0xfffffd28u), 0x0u);
/* 7fdebb: mov dword ptr [ebp - 0x2d4], 0 */
  W32((uint32_t)(ebp + 0xfffffd2cu), 0x0u);
/* 7fdec5: mov dword ptr [ebp - 0x2d0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffd30u), 0x3f800000u);
/* 7fdecf: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fded4: lea esi, [ebp - 0x30c] */
  esi = (uint32_t)(ebp + 0xfffffcf4u);
/* 7fdeda: lea edi, [ebp - 0x604] */
  edi = (uint32_t)(ebp + 0xfffff9fcu);
/* 7fdee0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdee2: fld dword ptr [ebx + 0x29c] */
  { double v = F32((uint32_t)(ebx + 0x29cu)); FPUSH(v); }
/* 7fdee8: fchs  */
  ST0 = -ST0;
/* 7fdeea: fld dword ptr [ebx + 0x298] */
  { double v = F32((uint32_t)(ebx + 0x298u)); FPUSH(v); }
/* 7fdef0: fchs  */
  ST0 = -ST0;
/* 7fdef2: fld dword ptr [ebx + 0x294] */
  { double v = F32((uint32_t)(ebx + 0x294u)); FPUSH(v); }
/* 7fdef8: mov dword ptr [ebp - 0x3cc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc34u), 0x3f800000u);
/* 7fdf02: fchs  */
  ST0 = -ST0;
/* 7fdf04: mov dword ptr [ebp - 0x3c8], 0 */
  W32((uint32_t)(ebp + 0xfffffc38u), 0x0u);
/* 7fdf0e: fstp dword ptr [ebp - 0x39c] */
  WF32((uint32_t)(ebp + 0xfffffc64u), ST0); FPOP();
/* 7fdf14: mov dword ptr [ebp - 0x3c4], 0 */
  W32((uint32_t)(ebp + 0xfffffc3cu), 0x0u);
/* 7fdf1e: mov dword ptr [ebp - 0x3c0], 0 */
  W32((uint32_t)(ebp + 0xfffffc40u), 0x0u);
/* 7fdf28: fstp dword ptr [ebp - 0x398] */
  WF32((uint32_t)(ebp + 0xfffffc68u), ST0); FPOP();
/* 7fdf2e: mov dword ptr [ebp - 0x3bc], 0 */
  W32((uint32_t)(ebp + 0xfffffc44u), 0x0u);
/* 7fdf38: mov dword ptr [ebp - 0x3b8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc48u), 0x3f800000u);
/* 7fdf42: fstp dword ptr [ebp - 0x394] */
  WF32((uint32_t)(ebp + 0xfffffc6cu), ST0); FPOP();
/* 7fdf48: mov dword ptr [ebp - 0x3b4], 0 */
  W32((uint32_t)(ebp + 0xfffffc4cu), 0x0u);
/* 7fdf52: mov dword ptr [ebp - 0x3b0], 0 */
  W32((uint32_t)(ebp + 0xfffffc50u), 0x0u);
/* 7fdf5c: mov dword ptr [ebp - 0x3ac], 0 */
  W32((uint32_t)(ebp + 0xfffffc54u), 0x0u);
/* 7fdf66: mov dword ptr [ebp - 0x3a8], 0 */
  W32((uint32_t)(ebp + 0xfffffc58u), 0x0u);
/* 7fdf70: mov dword ptr [ebp - 0x3a4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc5cu), 0x3f800000u);
/* 7fdf7a: mov dword ptr [ebp - 0x3a0], 0 */
  W32((uint32_t)(ebp + 0xfffffc60u), 0x0u);
/* 7fdf84: mov dword ptr [ebp - 0x390], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc70u), 0x3f800000u);
/* 7fdf8e: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fdf91: mov edi, esp */
  edi = esp;
/* 7fdf93: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdf98: lea esi, [ebp - 0x30c] */
  esi = (uint32_t)(ebp + 0xfffffcf4u);
/* 7fdf9e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdfa0: lea ecx, [ebp - 0x584] */
  ecx = (uint32_t)(ebp + 0xfffffa7cu);
/* 7fdfa6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fdfa7: lea ecx, [ebp - 0x3cc] */
  ecx = (uint32_t)(ebp + 0xfffffc34u);
/* 7fdfad: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 7fdfb1: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fdfb7u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fdfb7: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fdfba: mov edi, esp */
  edi = esp;
/* 7fdfbc: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdfc1: lea esi, [ebp - 0xe44] */
  esi = (uint32_t)(ebp + 0xfffff1bcu);
/* 7fdfc7: lea edx, [ebp - 0x504] */
  edx = (uint32_t)(ebp + 0xfffffafcu);
/* 7fdfcd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdfcf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fdfd0: mov ecx, eax */
  ecx = eax;
/* 7fdfd2: mov byte ptr [ebp - 4], 0x1a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1au);
/* 7fdfd6: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fdfdcu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fdfdc: mov byte ptr [ebp - 4], 0x1b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1bu);
/* 7fdfe0: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fdfe3: mov edi, esp */
  edi = esp;
/* 7fdfe5: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdfea: lea esi, [ebp - 0x944] */
  esi = (uint32_t)(ebp + 0xfffff6bcu);
/* 7fdff0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdff2: lea ecx, [ebp - 0xdc4] */
  ecx = (uint32_t)(ebp + 0xfffff23cu);
/* 7fdff8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fdff9: mov ecx, eax */
  ecx = eax;
/* 7fdffb: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fe001u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fe001: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fe004: mov edi, esp */
  edi = esp;
/* 7fe006: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe00b: lea esi, [ebp - 0xc44] */
  esi = (uint32_t)(ebp + 0xfffff3bcu);
/* 7fe011: lea edx, [ebp - 0x9c4] */
  edx = (uint32_t)(ebp + 0xfffff63cu);
/* 7fe017: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe019: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fe01a: mov ecx, eax */
  ecx = eax;
/* 7fe01c: mov byte ptr [ebp - 4], 0x1c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1cu);
/* 7fe020: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fe026u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fe026: mov esi, eax */
  esi = eax;
/* 7fe028: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe02d: lea edi, [ebp - 0x484] */
  edi = (uint32_t)(ebp + 0xfffffb7cu);
/* 7fe033: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe035: lea ecx, [ebp - 0x9c4] */
  ecx = (uint32_t)(ebp + 0xfffff63cu);
/* 7fe03b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe041u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe041: lea ecx, [ebp - 0xdc4] */
  ecx = (uint32_t)(ebp + 0xfffff23cu);
/* 7fe047: mov byte ptr [ebp - 4], 0x1b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1bu);
/* 7fe04b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe051u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe051: lea ecx, [ebp - 0x504] */
  ecx = (uint32_t)(ebp + 0xfffffafcu);
/* 7fe057: mov byte ptr [ebp - 4], 0x1a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1au);
/* 7fe05b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe061u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe061: lea ecx, [ebp - 0x584] */
  ecx = (uint32_t)(ebp + 0xfffffa7cu);
/* 7fe067: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 7fe06b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe071u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe071: lea ecx, [ebp - 0x3cc] */
  ecx = (uint32_t)(ebp + 0xfffffc34u);
/* 7fe077: mov byte ptr [ebp - 4], 0x18 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x18u);
/* 7fe07b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe081u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe081: lea ecx, [ebp - 0x604] */
  ecx = (uint32_t)(ebp + 0xfffff9fcu);
/* 7fe087: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* 7fe08b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe091u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe091: lea ecx, [ebp - 0x30c] */
  ecx = (uint32_t)(ebp + 0xfffffcf4u);
/* 7fe097: mov byte ptr [ebp - 4], 0x16 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x16u);
/* 7fe09b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe0a1u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe0a1: lea ecx, [ebp - 0x684] */
  ecx = (uint32_t)(ebp + 0xfffff97cu);
/* 7fe0a7: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* 7fe0ab: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe0b1u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe0b1: lea ecx, [ebp - 0x28c] */
  ecx = (uint32_t)(ebp + 0xfffffd74u);
/* 7fe0b7: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 7fe0bb: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe0c1u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe0c1: lea ecx, [ebp - 0x704] */
  ecx = (uint32_t)(ebp + 0xfffff8fcu);
/* 7fe0c7: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7fe0cb: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe0d1u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe0d1: lea ecx, [ebp - 0x784] */
  ecx = (uint32_t)(ebp + 0xfffff87cu);
/* 7fe0d7: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 7fe0db: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe0e1u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe0e1: lea ecx, [ebp - 0x804] */
  ecx = (uint32_t)(ebp + 0xfffff7fcu);
/* 7fe0e7: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 7fe0eb: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe0f1u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe0f1: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 7fe0f7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7fe0fb: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe101u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe101: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7fe104: jmp 0x7fe78e */
  goto L_7fe78e;
L_7fe109: /* 7fe109: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fe10b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7fe10e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7fe111: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7fe114: je 0x7fe497 */
  if (zf) goto L_7fe497;
L_7fe11a: /* 7fe11a: mov dword ptr [ebp - 0x1cc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe34u), 0x3f800000u);
/* 7fe124: mov dword ptr [ebp - 0x1c8], 0 */
  W32((uint32_t)(ebp + 0xfffffe38u), 0x0u);
/* 7fe12e: mov dword ptr [ebp - 0x1c4], 0 */
  W32((uint32_t)(ebp + 0xfffffe3cu), 0x0u);
/* 7fe138: mov dword ptr [ebp - 0x1c0], 0 */
  W32((uint32_t)(ebp + 0xfffffe40u), 0x0u);
/* 7fe142: mov dword ptr [ebp - 0x1bc], 0 */
  W32((uint32_t)(ebp + 0xfffffe44u), 0x0u);
/* 7fe14c: mov dword ptr [ebp - 0x1b8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe48u), 0x3f800000u);
/* 7fe156: mov dword ptr [ebp - 0x1b4], 0 */
  W32((uint32_t)(ebp + 0xfffffe4cu), 0x0u);
/* 7fe160: mov dword ptr [ebp - 0x1b0], 0 */
  W32((uint32_t)(ebp + 0xfffffe50u), 0x0u);
/* 7fe16a: mov dword ptr [ebp - 0x1ac], 0 */
  W32((uint32_t)(ebp + 0xfffffe54u), 0x0u);
/* 7fe174: mov dword ptr [ebp - 0x1a8], 0 */
  W32((uint32_t)(ebp + 0xfffffe58u), 0x0u);
/* 7fe17e: mov dword ptr [ebp - 0x1a4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe5cu), 0x3f800000u);
/* 7fe188: mov dword ptr [ebp - 0x1a0], 0 */
  W32((uint32_t)(ebp + 0xfffffe60u), 0x0u);
/* 7fe192: mov dword ptr [ebp - 0x19c], eax */
  W32((uint32_t)(ebp + 0xfffffe64u), eax);
/* 7fe198: mov dword ptr [ebp - 0x198], ecx */
  W32((uint32_t)(ebp + 0xfffffe68u), ecx);
/* 7fe19e: mov dword ptr [ebp - 0x194], edx */
  W32((uint32_t)(ebp + 0xfffffe6cu), edx);
/* 7fe1a4: mov dword ptr [ebp - 0x190], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe70u), 0x3f800000u);
/* 7fe1ae: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe1b3: lea esi, [ebp - 0x1cc] */
  esi = (uint32_t)(ebp + 0xfffffe34u);
/* 7fe1b9: lea edi, [ebp - 0xc84] */
  edi = (uint32_t)(ebp + 0xfffff37cu);
/* 7fe1bf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe1c1: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7fe1c4: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe1c9: lea esi, [ebp - 0x1cc] */
  esi = (uint32_t)(ebp + 0xfffffe34u);
/* 7fe1cf: lea edi, [ebp - 0x904] */
  edi = (uint32_t)(ebp + 0xfffff6fcu);
/* 7fe1d5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe1d7: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7fe1da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fe1dd: mov eax, esp */
  eax = esp;
/* 7fe1df: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7fe1e1: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7fe1e4: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7fe1e7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7fe1ea: lea ecx, [ebp - 0xc04] */
  ecx = (uint32_t)(ebp + 0xfffff3fcu);
/* 7fe1f0: call 0x6c9160 */
  esp -= 4; W32(esp, 0x7fe1f5u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 7fe1f5: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe1fa: mov esi, eax */
  esi = eax;
/* 7fe1fc: lea edi, [ebp - 0xb84] */
  edi = (uint32_t)(ebp + 0xfffff47cu);
/* 7fe202: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe204: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7fe207: add edx, 0x6c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7fe20a: mov esi, eax */
  esi = eax;
/* 7fe20c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7fe20e: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe213: lea edi, [ebp - 0x884] */
  edi = (uint32_t)(ebp + 0xfffff77cu);
/* 7fe219: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe21b: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7fe21e: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7fe221: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 7fe224: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 7fe227: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 7fe22a: mov dword ptr [ebp - 0x14c], eax */
  W32((uint32_t)(ebp + 0xfffffeb4u), eax);
/* 7fe230: mov dword ptr [ebp - 0x148], 0 */
  W32((uint32_t)(ebp + 0xfffffeb8u), 0x0u);
/* 7fe23a: mov dword ptr [ebp - 0x144], 0 */
  W32((uint32_t)(ebp + 0xfffffebcu), 0x0u);
/* 7fe244: mov dword ptr [ebp - 0x140], 0 */
  W32((uint32_t)(ebp + 0xfffffec0u), 0x0u);
/* 7fe24e: mov dword ptr [ebp - 0x13c], 0 */
  W32((uint32_t)(ebp + 0xfffffec4u), 0x0u);
/* 7fe258: mov dword ptr [ebp - 0x138], ecx */
  W32((uint32_t)(ebp + 0xfffffec8u), ecx);
/* 7fe25e: mov dword ptr [ebp - 0x134], 0 */
  W32((uint32_t)(ebp + 0xfffffeccu), 0x0u);
/* 7fe268: mov dword ptr [ebp - 0x130], 0 */
  W32((uint32_t)(ebp + 0xfffffed0u), 0x0u);
/* 7fe272: mov dword ptr [ebp - 0x12c], 0 */
  W32((uint32_t)(ebp + 0xfffffed4u), 0x0u);
/* 7fe27c: mov dword ptr [ebp - 0x128], 0 */
  W32((uint32_t)(ebp + 0xfffffed8u), 0x0u);
/* 7fe286: mov dword ptr [ebp - 0x124], edx */
  W32((uint32_t)(ebp + 0xfffffedcu), edx);
/* 7fe28c: mov dword ptr [ebp - 0x120], 0 */
  W32((uint32_t)(ebp + 0xfffffee0u), 0x0u);
/* 7fe296: mov dword ptr [ebp - 0x11c], 0 */
  W32((uint32_t)(ebp + 0xfffffee4u), 0x0u);
/* 7fe2a0: mov dword ptr [ebp - 0x118], 0 */
  W32((uint32_t)(ebp + 0xfffffee8u), 0x0u);
/* 7fe2aa: mov dword ptr [ebp - 0x114], 0 */
  W32((uint32_t)(ebp + 0xfffffeecu), 0x0u);
/* 7fe2b4: mov dword ptr [ebp - 0x110], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffef0u), 0x3f800000u);
/* 7fe2be: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe2c3: lea esi, [ebp - 0x14c] */
  esi = (uint32_t)(ebp + 0xfffffeb4u);
/* 7fe2c9: lea edi, [ebp - 0xb04] */
  edi = (uint32_t)(ebp + 0xfffff4fcu);
/* 7fe2cf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe2d1: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 7fe2d7: add eax, 0x294 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x294u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7fe2dc: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7fe2df: fchs  */
  ST0 = -ST0;
/* 7fe2e1: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7fe2e4: fchs  */
  ST0 = -ST0;
/* 7fe2e6: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 7fe2e8: mov dword ptr [ebp - 0x40c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffbf4u), 0x3f800000u);
/* 7fe2f2: fchs  */
  ST0 = -ST0;
/* 7fe2f4: mov dword ptr [ebp - 0x408], 0 */
  W32((uint32_t)(ebp + 0xfffffbf8u), 0x0u);
/* 7fe2fe: fstp dword ptr [ebp - 0x3dc] */
  WF32((uint32_t)(ebp + 0xfffffc24u), ST0); FPOP();
/* 7fe304: mov dword ptr [ebp - 0x404], 0 */
  W32((uint32_t)(ebp + 0xfffffbfcu), 0x0u);
/* 7fe30e: mov dword ptr [ebp - 0x400], 0 */
  W32((uint32_t)(ebp + 0xfffffc00u), 0x0u);
/* 7fe318: fstp dword ptr [ebp - 0x3d8] */
  WF32((uint32_t)(ebp + 0xfffffc28u), ST0); FPOP();
/* 7fe31e: mov dword ptr [ebp - 0x3fc], 0 */
  W32((uint32_t)(ebp + 0xfffffc04u), 0x0u);
/* 7fe328: mov dword ptr [ebp - 0x3f8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc08u), 0x3f800000u);
/* 7fe332: fstp dword ptr [ebp - 0x3d4] */
  WF32((uint32_t)(ebp + 0xfffffc2cu), ST0); FPOP();
/* 7fe338: mov dword ptr [ebp - 0x3f4], 0 */
  W32((uint32_t)(ebp + 0xfffffc0cu), 0x0u);
/* 7fe342: mov dword ptr [ebp - 0x3f0], 0 */
  W32((uint32_t)(ebp + 0xfffffc10u), 0x0u);
/* 7fe34c: mov dword ptr [ebp - 0x3ec], 0 */
  W32((uint32_t)(ebp + 0xfffffc14u), 0x0u);
/* 7fe356: mov dword ptr [ebp - 0x3e8], 0 */
  W32((uint32_t)(ebp + 0xfffffc18u), 0x0u);
/* 7fe360: mov dword ptr [ebp - 0x3e4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc1cu), 0x3f800000u);
/* 7fe36a: mov dword ptr [ebp - 0x3e0], 0 */
  W32((uint32_t)(ebp + 0xfffffc20u), 0x0u);
/* 7fe374: mov dword ptr [ebp - 0x3d0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc30u), 0x3f800000u);
/* 7fe37e: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fe381: mov edi, esp */
  edi = esp;
/* 7fe383: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe388: lea esi, [ebp - 0x14c] */
  esi = (uint32_t)(ebp + 0xfffffeb4u);
/* 7fe38e: lea eax, [ebp - 0xa84] */
  eax = (uint32_t)(ebp + 0xfffff57cu);
/* 7fe394: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe396: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fe397: lea ecx, [ebp - 0x40c] */
  ecx = (uint32_t)(ebp + 0xfffffbf4u);
/* 7fe39d: mov byte ptr [ebp - 4], 0x23 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x23u);
/* 7fe3a1: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fe3a7u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fe3a7: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fe3aa: mov edi, esp */
  edi = esp;
/* 7fe3ac: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe3b1: lea esi, [ebp - 0x884] */
  esi = (uint32_t)(ebp + 0xfffff77cu);
/* 7fe3b7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe3b9: lea ecx, [ebp - 0xa04] */
  ecx = (uint32_t)(ebp + 0xfffff5fcu);
/* 7fe3bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fe3c0: mov ecx, eax */
  ecx = eax;
/* 7fe3c2: mov byte ptr [ebp - 4], 0x24 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 7fe3c6: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fe3ccu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fe3cc: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fe3cf: mov edi, esp */
  edi = esp;
/* 7fe3d1: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe3d6: lea esi, [ebp - 0x904] */
  esi = (uint32_t)(ebp + 0xfffff6fcu);
/* 7fe3dc: lea edx, [ebp - 0x984] */
  edx = (uint32_t)(ebp + 0xfffff67cu);
/* 7fe3e2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe3e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fe3e5: mov ecx, eax */
  ecx = eax;
/* 7fe3e7: mov byte ptr [ebp - 4], 0x25 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x25u);
/* 7fe3eb: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fe3f1u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fe3f1: mov esi, eax */
  esi = eax;
/* 7fe3f3: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe3f8: lea edi, [ebp - 0x484] */
  edi = (uint32_t)(ebp + 0xfffffb7cu);
/* 7fe3fe: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe400: lea ecx, [ebp - 0x984] */
  ecx = (uint32_t)(ebp + 0xfffff67cu);
/* 7fe406: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe40cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe40c: lea ecx, [ebp - 0xa04] */
  ecx = (uint32_t)(ebp + 0xfffff5fcu);
/* 7fe412: mov byte ptr [ebp - 4], 0x24 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 7fe416: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe41cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe41c: lea ecx, [ebp - 0xa84] */
  ecx = (uint32_t)(ebp + 0xfffff57cu);
/* 7fe422: mov byte ptr [ebp - 4], 0x23 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x23u);
/* 7fe426: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe42cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe42c: lea ecx, [ebp - 0x40c] */
  ecx = (uint32_t)(ebp + 0xfffffbf4u);
/* 7fe432: mov byte ptr [ebp - 4], 0x22 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x22u);
/* 7fe436: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe43cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe43c: lea ecx, [ebp - 0xb04] */
  ecx = (uint32_t)(ebp + 0xfffff4fcu);
/* 7fe442: mov byte ptr [ebp - 4], 0x21 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 7fe446: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe44cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe44c: lea ecx, [ebp - 0x14c] */
  ecx = (uint32_t)(ebp + 0xfffffeb4u);
/* 7fe452: mov byte ptr [ebp - 4], 0x20 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x20u);
/* 7fe456: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe45cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe45c: lea ecx, [ebp - 0xb84] */
  ecx = (uint32_t)(ebp + 0xfffff47cu);
/* 7fe462: mov byte ptr [ebp - 4], 0x1f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1fu);
/* 7fe466: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe46cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe46c: lea ecx, [ebp - 0xc04] */
  ecx = (uint32_t)(ebp + 0xfffff3fcu);
/* 7fe472: mov byte ptr [ebp - 4], 0x1e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1eu);
/* 7fe476: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe47cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe47c: mov byte ptr [ebp - 4], 0x1d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1du);
/* 7fe480: lea ecx, [ebp - 0xc84] */
  ecx = (uint32_t)(ebp + 0xfffff37cu);
/* 7fe486: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe48cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe48c: lea ecx, [ebp - 0x1cc] */
  ecx = (uint32_t)(ebp + 0xfffffe34u);
/* 7fe492: jmp 0x7fe784 */
  goto L_7fe784;
L_7fe497: /* 7fe497: mov dword ptr [ebp - 0x2cc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffd34u), 0x3f800000u);
/* 7fe4a1: mov dword ptr [ebp - 0x2c8], 0 */
  W32((uint32_t)(ebp + 0xfffffd38u), 0x0u);
/* 7fe4ab: mov dword ptr [ebp - 0x2c4], 0 */
  W32((uint32_t)(ebp + 0xfffffd3cu), 0x0u);
/* 7fe4b5: mov dword ptr [ebp - 0x2c0], 0 */
  W32((uint32_t)(ebp + 0xfffffd40u), 0x0u);
/* 7fe4bf: mov dword ptr [ebp - 0x2bc], 0 */
  W32((uint32_t)(ebp + 0xfffffd44u), 0x0u);
/* 7fe4c9: mov dword ptr [ebp - 0x2b8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffd48u), 0x3f800000u);
/* 7fe4d3: mov dword ptr [ebp - 0x2b4], 0 */
  W32((uint32_t)(ebp + 0xfffffd4cu), 0x0u);
/* 7fe4dd: mov dword ptr [ebp - 0x2b0], 0 */
  W32((uint32_t)(ebp + 0xfffffd50u), 0x0u);
/* 7fe4e7: mov dword ptr [ebp - 0x2ac], 0 */
  W32((uint32_t)(ebp + 0xfffffd54u), 0x0u);
/* 7fe4f1: mov dword ptr [ebp - 0x2a8], 0 */
  W32((uint32_t)(ebp + 0xfffffd58u), 0x0u);
/* 7fe4fb: mov dword ptr [ebp - 0x2a4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffd5cu), 0x3f800000u);
/* 7fe505: mov dword ptr [ebp - 0x2a0], 0 */
  W32((uint32_t)(ebp + 0xfffffd60u), 0x0u);
/* 7fe50f: mov dword ptr [ebp - 0x29c], eax */
  W32((uint32_t)(ebp + 0xfffffd64u), eax);
/* 7fe515: mov dword ptr [ebp - 0x298], ecx */
  W32((uint32_t)(ebp + 0xfffffd68u), ecx);
/* 7fe51b: mov dword ptr [ebp - 0x294], edx */
  W32((uint32_t)(ebp + 0xfffffd6cu), edx);
/* 7fe521: mov dword ptr [ebp - 0x290], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffd70u), 0x3f800000u);
/* 7fe52b: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe530: lea esi, [ebp - 0x2cc] */
  esi = (uint32_t)(ebp + 0xfffffd34u);
/* 7fe536: lea edi, [ebp - 0xf04] */
  edi = (uint32_t)(ebp + 0xfffff0fcu);
/* 7fe53c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe53e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7fe541: add eax, 0x6c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7fe544: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe549: lea esi, [ebp - 0x2cc] */
  esi = (uint32_t)(ebp + 0xfffffd34u);
/* 7fe54f: lea edi, [ebp - 0xd04] */
  edi = (uint32_t)(ebp + 0xfffff2fcu);
/* 7fe555: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe557: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7fe559: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7fe55c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7fe55f: mov dword ptr [ebp - 0x8c], ecx */
  W32((uint32_t)(ebp + 0xffffff74u), ecx);
/* 7fe565: mov dword ptr [ebp - 0x88], edx */
  W32((uint32_t)(ebp + 0xffffff78u), edx);
/* 7fe56b: mov dword ptr [ebp - 0x84], eax */
  W32((uint32_t)(ebp + 0xffffff7cu), eax);
/* 7fe571: mov dword ptr [ebp - 0x24c], ecx */
  W32((uint32_t)(ebp + 0xfffffdb4u), ecx);
/* 7fe577: mov dword ptr [ebp - 0x248], 0 */
  W32((uint32_t)(ebp + 0xfffffdb8u), 0x0u);
/* 7fe581: mov dword ptr [ebp - 0x244], 0 */
  W32((uint32_t)(ebp + 0xfffffdbcu), 0x0u);
/* 7fe58b: mov dword ptr [ebp - 0x240], 0 */
  W32((uint32_t)(ebp + 0xfffffdc0u), 0x0u);
/* 7fe595: mov dword ptr [ebp - 0x23c], 0 */
  W32((uint32_t)(ebp + 0xfffffdc4u), 0x0u);
/* 7fe59f: mov dword ptr [ebp - 0x238], edx */
  W32((uint32_t)(ebp + 0xfffffdc8u), edx);
/* 7fe5a5: mov dword ptr [ebp - 0x234], 0 */
  W32((uint32_t)(ebp + 0xfffffdccu), 0x0u);
/* 7fe5af: mov dword ptr [ebp - 0x230], 0 */
  W32((uint32_t)(ebp + 0xfffffdd0u), 0x0u);
/* 7fe5b9: mov dword ptr [ebp - 0x22c], 0 */
  W32((uint32_t)(ebp + 0xfffffdd4u), 0x0u);
/* 7fe5c3: mov dword ptr [ebp - 0x228], 0 */
  W32((uint32_t)(ebp + 0xfffffdd8u), 0x0u);
/* 7fe5cd: mov dword ptr [ebp - 0x224], eax */
  W32((uint32_t)(ebp + 0xfffffddcu), eax);
/* 7fe5d3: mov dword ptr [ebp - 0x220], 0 */
  W32((uint32_t)(ebp + 0xfffffde0u), 0x0u);
/* 7fe5dd: mov dword ptr [ebp - 0x21c], 0 */
  W32((uint32_t)(ebp + 0xfffffde4u), 0x0u);
/* 7fe5e7: mov dword ptr [ebp - 0x218], 0 */
  W32((uint32_t)(ebp + 0xfffffde8u), 0x0u);
/* 7fe5f1: mov dword ptr [ebp - 0x214], 0 */
  W32((uint32_t)(ebp + 0xfffffdecu), 0x0u);
/* 7fe5fb: mov dword ptr [ebp - 0x210], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffdf0u), 0x3f800000u);
/* 7fe605: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe60a: lea esi, [ebp - 0x24c] */
  esi = (uint32_t)(ebp + 0xfffffdb4u);
/* 7fe610: lea edi, [ebp - 0xe84] */
  edi = (uint32_t)(ebp + 0xfffff17cu);
/* 7fe616: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe618: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 7fe61e: add eax, 0x294 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x294u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7fe623: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7fe626: fchs  */
  ST0 = -ST0;
/* 7fe628: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7fe62b: fchs  */
  ST0 = -ST0;
/* 7fe62d: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 7fe62f: mov dword ptr [ebp - 0x34c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffcb4u), 0x3f800000u);
/* 7fe639: fchs  */
  ST0 = -ST0;
/* 7fe63b: mov dword ptr [ebp - 0x348], 0 */
  W32((uint32_t)(ebp + 0xfffffcb8u), 0x0u);
/* 7fe645: fstp dword ptr [ebp - 0x31c] */
  WF32((uint32_t)(ebp + 0xfffffce4u), ST0); FPOP();
/* 7fe64b: mov dword ptr [ebp - 0x344], 0 */
  W32((uint32_t)(ebp + 0xfffffcbcu), 0x0u);
/* 7fe655: mov dword ptr [ebp - 0x340], 0 */
  W32((uint32_t)(ebp + 0xfffffcc0u), 0x0u);
/* 7fe65f: fstp dword ptr [ebp - 0x318] */
  WF32((uint32_t)(ebp + 0xfffffce8u), ST0); FPOP();
/* 7fe665: mov dword ptr [ebp - 0x33c], 0 */
  W32((uint32_t)(ebp + 0xfffffcc4u), 0x0u);
/* 7fe66f: mov dword ptr [ebp - 0x338], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffcc8u), 0x3f800000u);
/* 7fe679: fstp dword ptr [ebp - 0x314] */
  WF32((uint32_t)(ebp + 0xfffffcecu), ST0); FPOP();
/* 7fe67f: mov dword ptr [ebp - 0x334], 0 */
  W32((uint32_t)(ebp + 0xfffffcccu), 0x0u);
/* 7fe689: mov dword ptr [ebp - 0x330], 0 */
  W32((uint32_t)(ebp + 0xfffffcd0u), 0x0u);
/* 7fe693: mov dword ptr [ebp - 0x32c], 0 */
  W32((uint32_t)(ebp + 0xfffffcd4u), 0x0u);
/* 7fe69d: mov dword ptr [ebp - 0x328], 0 */
  W32((uint32_t)(ebp + 0xfffffcd8u), 0x0u);
/* 7fe6a7: mov dword ptr [ebp - 0x324], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffcdcu), 0x3f800000u);
/* 7fe6b1: mov dword ptr [ebp - 0x320], 0 */
  W32((uint32_t)(ebp + 0xfffffce0u), 0x0u);
/* 7fe6bb: mov dword ptr [ebp - 0x310], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffcf0u), 0x3f800000u);
/* 7fe6c5: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fe6c8: mov edi, esp */
  edi = esp;
/* 7fe6ca: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe6cf: lea esi, [ebp - 0x24c] */
  esi = (uint32_t)(ebp + 0xfffffdb4u);
/* 7fe6d5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe6d7: lea ecx, [ebp - 0xe04] */
  ecx = (uint32_t)(ebp + 0xfffff1fcu);
/* 7fe6dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fe6de: lea ecx, [ebp - 0x34c] */
  ecx = (uint32_t)(ebp + 0xfffffcb4u);
/* 7fe6e4: mov byte ptr [ebp - 4], 0x2a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2au);
/* 7fe6e8: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fe6eeu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fe6ee: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fe6f1: mov edi, esp */
  edi = esp;
/* 7fe6f3: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe6f8: lea esi, [ebp - 0xd04] */
  esi = (uint32_t)(ebp + 0xfffff2fcu);
/* 7fe6fe: lea edx, [ebp - 0xd84] */
  edx = (uint32_t)(ebp + 0xfffff27cu);
/* 7fe704: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe706: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fe707: mov ecx, eax */
  ecx = eax;
/* 7fe709: mov byte ptr [ebp - 4], 0x2b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2bu);
/* 7fe70d: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fe713u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fe713: mov esi, eax */
  esi = eax;
/* 7fe715: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe71a: lea edi, [ebp - 0x484] */
  edi = (uint32_t)(ebp + 0xfffffb7cu);
/* 7fe720: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe722: lea ecx, [ebp - 0xd84] */
  ecx = (uint32_t)(ebp + 0xfffff27cu);
/* 7fe728: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe72eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe72e: lea ecx, [ebp - 0xe04] */
  ecx = (uint32_t)(ebp + 0xfffff1fcu);
/* 7fe734: mov byte ptr [ebp - 4], 0x2a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2au);
/* 7fe738: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe73eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe73e: lea ecx, [ebp - 0x34c] */
  ecx = (uint32_t)(ebp + 0xfffffcb4u);
/* 7fe744: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 7fe748: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe74eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe74e: lea ecx, [ebp - 0xe84] */
  ecx = (uint32_t)(ebp + 0xfffff17cu);
/* 7fe754: mov byte ptr [ebp - 4], 0x28 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x28u);
/* 7fe758: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe75eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe75e: lea ecx, [ebp - 0x24c] */
  ecx = (uint32_t)(ebp + 0xfffffdb4u);
/* 7fe764: mov byte ptr [ebp - 4], 0x27 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x27u);
/* 7fe768: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe76eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe76e: lea ecx, [ebp - 0xf04] */
  ecx = (uint32_t)(ebp + 0xfffff0fcu);
/* 7fe774: mov byte ptr [ebp - 4], 0x26 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x26u);
/* 7fe778: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe77eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe77e: lea ecx, [ebp - 0x2cc] */
  ecx = (uint32_t)(ebp + 0xfffffd34u);
L_7fe784: /* 7fe784: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7fe788: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe78eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_7fe78e: /* 7fe78e: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7fe791: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7fe793: lea ecx, [ebp - 0x484] */
  ecx = (uint32_t)(ebp + 0xfffffb7cu);
/* 7fe799: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fe79a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fe79c: mov ecx, esi */
  ecx = esi;
/* 7fe79e: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x7fe7a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fe7a1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7fe7a4: mov ecx, dword ptr [eax + 0xa8] */
  ecx = R32((uint32_t)(eax + 0xa8u));
/* 7fe7aa: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7fe7ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fe7ad: mov ecx, esi */
  ecx = esi;
/* 7fe7af: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0x7fe7b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fe7b2: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7fe7b5: movzx ecx, word ptr [eax + 0xc] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0xcu)));
/* 7fe7b9: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 7fe7bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fe7bd: movzx ecx, word ptr [eax + 0xa] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0xau)));
/* 7fe7c1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7fe7c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fe7c4: movzx ecx, word ptr [eax + 0x10] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x10u)));
/* 7fe7c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fe7c9: movzx ecx, word ptr [eax + 8] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x8u)));
/* 7fe7cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fe7ce: xor ecx, ecx */
  ecx = 0;
/* 7fe7d0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fe7d2: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7fe7d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fe7d6: mov ecx, esi */
  ecx = esi;
/* 7fe7d8: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0x7fe7dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fe7db: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7fe7de: add eax, 0xc8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7fe7e3: lea ecx, [ebp - 0x484] */
  ecx = (uint32_t)(ebp + 0xfffffb7cu);
/* 7fe7e9: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7fe7ec: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7fe7f0: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe7f6u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe7f6: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7fe7f9: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7fe7fc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7fe7fd: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7fe800: jmp 0x7fd640 */
  goto L_7fd640;
L_7fe805: /* 7fe805: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7fe808: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7fe809: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 7fe80c: jmp 0x7fd2c0 */
  goto L_7fd2c0;
L_7fe811: /* 7fe811: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fe814: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7fe817: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fe818: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fe819: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fe820: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fe821: mov esp, ebp */
  esp = ebp;
/* 7fe823: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fe824: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7fd639(void) {
  LOAD_REGS();
  goto L_7fd639;
L_7fd2c0: /* 7fd2c0: mov edi, dword ptr [ebx + 0x494] */
  edi = R32((uint32_t)(ebx + 0x494u));
/* 7fd2c6: cmp eax, dword ptr [edi + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7fd2c9: jge 0x7fe811 */
  if ((sf == of)) goto L_7fe811;
L_7fd2cf: /* 7fd2cf: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* 7fd2d2: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 7fd2d5: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 7fd2d8: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 7fd2db: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd2e1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fd2e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd2e4: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x7fd2eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fd2ea: mov esi, eax */
  esi = eax;
/* 7fd2ec: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd2ee: jne 0x7fd35e */
  if (!zf) goto L_7fd35e;
L_7fd2f0: /* 7fd2f0: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7fd2f3: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 7fd2f9: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7fd2fc: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 7fd2ff: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd301: jne 0x7fd35e */
  if (!zf) goto L_7fd35e;
L_7fd303: /* 7fd303: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 7fd308: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x7fd30eu); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 7fd30e: mov edi, eax */
  edi = eax;
/* 7fd310: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd312: je 0x7fd332 */
  if (zf) goto L_7fd332;
L_7fd314: /* 7fd314: push 0xb86100 */
  { uint32_t v = 0xb86100u; esp -= 4; W32(esp, v); }
/* 7fd319: mov ecx, edi */
  ecx = edi;
/* 7fd31b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7fd321u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7fd321: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd323: jne 0x7fd35b */
  if (!zf) goto L_7fd35b;
L_7fd325: /* 7fd325: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd326: mov ecx, edi */
  ecx = edi;
/* 7fd328: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7fd32eu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7fd32e: mov esi, eax */
  esi = eax;
/* 7fd330: jmp 0x7fd337 */
  goto L_7fd337;
L_7fd332: /* 7fd332: mov esi, 0xae0c50 */
  esi = 0xae0c50u;
L_7fd337: /* 7fd337: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 7fd33c: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7fd342u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7fd342: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 7fd348: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd349: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7fd34b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fd34c: push 0xae0c5c */
  { uint32_t v = 0xae0c5cu; esp -= 4; W32(esp, v); }
/* 7fd351: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd352: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7fd358u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7fd358: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7fd35b: /* 7fd35b: mov esi, dword ptr [edi + 0x2c] */
  esi = R32((uint32_t)(edi + 0x2cu));
L_7fd35e: /* 7fd35e: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7fd361: cmp word ptr [ecx + 0x10], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x10u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7fd366: mov edi, dword ptr [ebx + 0x3fc] */
  edi = R32((uint32_t)(ebx + 0x3fcu));
/* 7fd36c: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 7fd36f: je 0x7fe805 */
  if (zf) goto L_7fe805;
L_7fd375: /* 7fd375: test byte ptr [ebx + 0x498], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x498u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd37c: jne 0x7fd4e3 */
  if (!zf) goto L_7fd4e3;
L_7fd382: /* 7fd382: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd388: movzx edx, byte ptr [ebx + 0x314] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x314u)));
/* 7fd38f: mov ecx, dword ptr [eax + 0x3ac] */
  ecx = R32((uint32_t)(eax + 0x3acu));
/* 7fd395: mov dword ptr [ecx + 0x38], edx */
  W32((uint32_t)(ecx + 0x38u), edx);
/* 7fd398: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7fd39b: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 7fd39e: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7fd3a1: cmp dword ptr [ecx + 0x540], 7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x540u))); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7fd3a8: jne 0x7fd3bf */
  if (!zf) goto L_7fd3bf;
L_7fd3aa: /* 7fd3aa: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd3b0: mov eax, dword ptr [edx + 0x3ac] */
  eax = R32((uint32_t)(edx + 0x3acu));
/* 7fd3b6: mov dword ptr [eax + 0x48], 0 */
  W32((uint32_t)(eax + 0x48u), 0x0u);
/* 7fd3bd: jmp 0x7fd3e5 */
  goto L_7fd3e5;
L_7fd3bf: /* 7fd3bf: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd3c1: je 0x7fd3d4 */
  if (zf) goto L_7fd3d4;
L_7fd3c3: /* 7fd3c3: push 0xb86630 */
  { uint32_t v = 0xb86630u; esp -= 4; W32(esp, v); }
/* 7fd3c8: mov ecx, esi */
  ecx = esi;
/* 7fd3ca: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7fd3d0u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7fd3d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd3d2: jne 0x7fd3d6 */
  if (!zf) goto L_7fd3d6;
L_7fd3d4: /* 7fd3d4: xor esi, esi */
  esi = 0;
L_7fd3d6: /* 7fd3d6: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd3dc: mov edx, dword ptr [ecx + 0x3ac] */
  edx = R32((uint32_t)(ecx + 0x3acu));
/* 7fd3e2: mov dword ptr [edx + 0x48], esi */
  W32((uint32_t)(edx + 0x48u), esi);
L_7fd3e5: /* 7fd3e5: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd3eb: mov ecx, dword ptr [eax + 0x3ac] */
  ecx = R32((uint32_t)(eax + 0x3acu));
/* 7fd3f1: mov dword ptr [ecx + 0x3c], 0 */
  W32((uint32_t)(ecx + 0x3cu), 0x0u);
/* 7fd3f8: mov edx, dword ptr [ebx + 0x498] */
  edx = R32((uint32_t)(ebx + 0x498u));
/* 7fd3fe: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd404: mov ecx, dword ptr [eax + 0x3ac] */
  ecx = R32((uint32_t)(eax + 0x3acu));
/* 7fd40a: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 7fd40c: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7fd40f: mov dword ptr [ecx + 0x40], edx */
  W32((uint32_t)(ecx + 0x40u), edx);
/* 7fd412: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd418: mov eax, dword ptr [edx + 0x3ac] */
  eax = R32((uint32_t)(edx + 0x3acu));
/* 7fd41e: mov dword ptr [eax + 0x44], 1 */
  W32((uint32_t)(eax + 0x44u), 0x1u);
/* 7fd425: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd42b: mov eax, dword ptr [edx + 0x3ac] */
  eax = R32((uint32_t)(edx + 0x3acu));
/* 7fd431: mov ecx, dword ptr [ebx + 0x1c8] */
  ecx = R32((uint32_t)(ebx + 0x1c8u));
/* 7fd437: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7fd43a: mov dword ptr [eax + 0x4c], ecx */
  W32((uint32_t)(eax + 0x4cu), ecx);
/* 7fd43d: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd443: mov edx, dword ptr [ecx + 0x3ac] */
  edx = R32((uint32_t)(ecx + 0x3acu));
/* 7fd449: mov eax, dword ptr [ebx + 0x1c4] */
  eax = R32((uint32_t)(ebx + 0x1c4u));
/* 7fd44f: mov dword ptr [edx + 0x50], eax */
  W32((uint32_t)(edx + 0x50u), eax);
/* 7fd452: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd458: mov eax, dword ptr [ecx + 0x3ac] */
  eax = R32((uint32_t)(ecx + 0x3acu));
/* 7fd45e: mov esi, dword ptr [eax + 0x60] */
  esi = R32((uint32_t)(eax + 0x60u));
/* 7fd461: mov edx, dword ptr [ebx + 0x1c8] */
  edx = R32((uint32_t)(ebx + 0x1c8u));
/* 7fd467: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 7fd469: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7fd46b: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7fd46e: xor esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 7fd470: mov dword ptr [eax + 0x60], esi */
  W32((uint32_t)(eax + 0x60u), esi);
/* 7fd473: mov eax, dword ptr [ebx + 0x1c8] */
  eax = R32((uint32_t)(ebx + 0x1c8u));
/* 7fd479: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd47f: mov edx, dword ptr [ecx + 0x3ac] */
  edx = R32((uint32_t)(ecx + 0x3acu));
/* 7fd485: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7fd488: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7fd48b: mov dword ptr [edx + 0x54], eax */
  W32((uint32_t)(edx + 0x54u), eax);
/* 7fd48e: mov eax, dword ptr [ebx + 0x1c8] */
  eax = R32((uint32_t)(ebx + 0x1c8u));
/* 7fd494: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd49a: mov edx, dword ptr [ecx + 0x3ac] */
  edx = R32((uint32_t)(ecx + 0x3acu));
/* 7fd4a0: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7fd4a3: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7fd4a6: mov dword ptr [edx + 0x58], eax */
  W32((uint32_t)(edx + 0x58u), eax);
/* 7fd4a9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7fd4ac: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7fd4af: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x7fd4b4u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 7fd4b4: mov ecx, dword ptr [ebx + 0x3f0] */
  ecx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd4ba: mov edx, dword ptr [ecx + 0x3ac] */
  edx = R32((uint32_t)(ecx + 0x3acu));
/* 7fd4c0: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7fd4c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd4c5: mov dword ptr [edx + 0x5c], eax */
  W32((uint32_t)(edx + 0x5cu), eax);
/* 7fd4c8: mov edx, dword ptr [ebx + 0x3f0] */
  edx = R32((uint32_t)(ebx + 0x3f0u));
/* 7fd4ce: mov edx, dword ptr [edx + 0x3ac] */
  edx = R32((uint32_t)(edx + 0x3acu));
/* 7fd4d4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7fd4d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd4d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd4da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fd4db: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x7fd4deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fd4de: jmp 0x7fd630 */
  goto L_7fd630;
L_7fd4e3: /* 7fd4e3: mov eax, dword ptr [0xb91598] */
  eax = R32((uint32_t)(0xb91598u));
/* 7fd4e8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd4ea: jne 0x7fd560 */
  if (!zf) goto L_7fd560;
L_7fd4ec: /* 7fd4ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd4ee: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 7fd4f1: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7fd4f7u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7fd4f7: push 0xb87af0 */
  { uint32_t v = 0xb87af0u; esp -= 4; W32(esp, v); }
/* 7fd4fc: mov ecx, 0xb87af0 */
  ecx = 0xb87af0u;
/* 7fd501: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7fd507u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7fd507: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd509: jne 0x7fd523 */
  if (!zf) goto L_7fd523;
L_7fd50b: /* 7fd50b: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7fd510: push 0xae0b80 */
  { uint32_t v = 0xae0b80u; esp -= 4; W32(esp, v); }
/* 7fd515: push 0xae0bc4 */
  { uint32_t v = 0xae0bc4u; esp -= 4; W32(esp, v); }
/* 7fd51a: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7fd520u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7fd520: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7fd523: /* 7fd523: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7fd529u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 7fd529: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7fd52f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fd531: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7fd534: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd536: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fd537: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd539: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd53b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fd53c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd53d: push 0xb87af0 */
  { uint32_t v = 0xb87af0u; esp -= 4; W32(esp, v); }
/* 7fd542: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7fd548u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7fd548: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 7fd54e: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fd551: push 0xb91598 */
  { uint32_t v = 0xb91598u; esp -= 4; W32(esp, v); }
/* 7fd556: mov dword ptr [0xb91598], eax */
  W32((uint32_t)(0xb91598u), eax);
/* 7fd55b: call 0x6c1203 */
  esp -= 4; W32(esp, 0x7fd560u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
L_7fd560: /* 7fd560: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7fd563: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7fd566: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x7fd56bu); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 7fd56b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd56d: je 0x7fd607 */
  if (zf) goto L_7fd607;
L_7fd573: /* 7fd573: mov eax, dword ptr [0xb91594] */
  eax = R32((uint32_t)(0xb91594u));
/* 7fd578: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd57a: jne 0x7fd5f9 */
  if (!zf) goto L_7fd5f9;
L_7fd57c: /* 7fd57c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd57e: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7fd581: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7fd587u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7fd587: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 7fd58c: mov ecx, 0xb88020 */
  ecx = 0xb88020u;
/* 7fd591: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7fd597u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7fd597: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd599: jne 0x7fd5b3 */
  if (!zf) goto L_7fd5b3;
L_7fd59b: /* 7fd59b: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7fd5a0: push 0xae0be8 */
  { uint32_t v = 0xae0be8u; esp -= 4; W32(esp, v); }
/* 7fd5a5: push 0xae0c2c */
  { uint32_t v = 0xae0c2cu; esp -= 4; W32(esp, v); }
/* 7fd5aa: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7fd5b0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7fd5b0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7fd5b3: /* 7fd5b3: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7fd5b9u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 7fd5b9: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7fd5bf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fd5c1: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7fd5c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd5c6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fd5c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd5c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd5cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fd5cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd5cd: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 7fd5d2: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7fd5d8u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7fd5d8: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 7fd5de: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fd5e1: push 0xb91594 */
  { uint32_t v = 0xb91594u; esp -= 4; W32(esp, v); }
/* 7fd5e6: mov dword ptr [0xb91594], eax */
  W32((uint32_t)(0xb91594u), eax);
/* 7fd5eb: call 0x6c1203 */
  esp -= 4; W32(esp, 0x7fd5f0u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 7fd5f0: mov eax, dword ptr [0xb91594] */
  eax = R32((uint32_t)(0xb91594u));
/* 7fd5f5: or dword ptr [eax + 0x5c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x5cu), r);
  }
L_7fd5f9: /* 7fd5f9: mov eax, dword ptr [0xb91594] */
  eax = R32((uint32_t)(0xb91594u));
/* 7fd5fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd600: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd602: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd604: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd605: jmp 0x7fd628 */
  goto L_7fd628;
L_7fd607: /* 7fd607: test byte ptr [ebx + 0x498], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x498u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd60e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd610: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd612: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fd614: je 0x7fd627 */
  if (zf) goto L_7fd627;
L_7fd616: /* 7fd616: mov ecx, dword ptr [0xb91598] */
  ecx = R32((uint32_t)(0xb91598u));
/* 7fd61c: mov dword ptr [ecx + 0x38], esi */
  W32((uint32_t)(ecx + 0x38u), esi);
/* 7fd61f: mov eax, dword ptr [0xb91598] */
  eax = R32((uint32_t)(0xb91598u));
/* 7fd624: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fd625: jmp 0x7fd628 */
  goto L_7fd628;
L_7fd627: /* 7fd627: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_7fd628: /* 7fd628: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7fd62b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fd62d: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x7fd630u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7fd630: /* 7fd630: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7fd637: jmp 0x7fd640 */
  goto L_7fd640;
L_7fd639: /* 7fd639: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7fd640: /* 7fd640: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7fd643: cmp eax, dword ptr [ebx + 0x40c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x40cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7fd649: jge 0x7fe805 */
  if ((sf == of)) goto L_7fe805;
L_7fd64f: /* 7fd64f: test byte ptr [edi + 0xbc], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0xbcu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd656: jne 0x7fd66a */
  if (!zf) goto L_7fd66a;
L_7fd658: /* 7fd658: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7fd65b: add edi, 0xc8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7fd661: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7fd662: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 7fd665: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7fd668: jmp 0x7fd640 */
  goto L_7fd640;
L_7fd66a: /* 7fd66a: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 7fd66d: mov ecx, edi */
  ecx = edi;
/* 7fd66f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fd671: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7fd674: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7fd677: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7fd67a: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7fd67d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7fd681: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7fd684: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7fd687: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x7fd68du); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 7fd68d: mov esi, dword ptr [ebx + 0x214] */
  esi = R32((uint32_t)(ebx + 0x214u));
/* 7fd693: and esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  esi = r;
  }
/* 7fd696: je 0x7fd6d4 */
  if (zf) goto L_7fd6d4;
L_7fd698: /* 7fd698: fld dword ptr [edi + 0x30] */
  { double v = F32((uint32_t)(edi + 0x30u)); FPUSH(v); }
/* 7fd69b: fmul dword ptr [edi + 0xac] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xacu)));
/* 7fd6a1: fadd dword ptr [edi + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x3cu)));
/* 7fd6a4: call 0x99c958 */
  esp -= 4; W32(esp, 0x7fd6a9u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7fd6a9: fld dword ptr [edi + 0x34] */
  { double v = F32((uint32_t)(edi + 0x34u)); FPUSH(v); }
/* 7fd6ac: fmul dword ptr [edi + 0xac] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xacu)));
/* 7fd6b2: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7fd6b5: fadd dword ptr [edi + 0x40] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x40u)));
/* 7fd6b8: call 0x99c958 */
  esp -= 4; W32(esp, 0x7fd6bdu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7fd6bd: fld dword ptr [edi + 0x38] */
  { double v = F32((uint32_t)(edi + 0x38u)); FPUSH(v); }
/* 7fd6c0: fmul dword ptr [edi + 0xac] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xacu)));
/* 7fd6c6: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 7fd6c9: fadd dword ptr [edi + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x44u)));
/* 7fd6cc: call 0x99c958 */
  esp -= 4; W32(esp, 0x7fd6d1u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7fd6d1: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
L_7fd6d4: /* 7fd6d4: cmp byte ptr [ebx + 0xf4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0xf4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7fd6db: jne 0x7fe109 */
  if (!zf) goto L_7fe109;
L_7fd6e1: /* 7fd6e1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fd6e3: je 0x7fdc43 */
  if (zf) goto L_7fdc43;
L_7fd6e9: /* 7fd6e9: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7fd6ec: mov ebx, dword ptr [edx + 0x3f0] */
  ebx = R32((uint32_t)(edx + 0x3f0u));
/* 7fd6f2: lea eax, [ebx + 0x170] */
  eax = (uint32_t)(ebx + 0x170u);
/* 7fd6f8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7fd6fa: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7fd6fd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7fd700: mov dword ptr [ebp - 0x70], ecx */
  W32((uint32_t)(ebp + 0xffffff90u), ecx);
/* 7fd703: mov dword ptr [ebp - 0x6c], edx */
  W32((uint32_t)(ebp + 0xffffff94u), edx);
/* 7fd706: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 7fd709: mov dword ptr [ebp - 0x20c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffdf4u), 0x3f800000u);
/* 7fd713: mov dword ptr [ebp - 0x208], 0 */
  W32((uint32_t)(ebp + 0xfffffdf8u), 0x0u);
/* 7fd71d: mov dword ptr [ebp - 0x204], 0 */
  W32((uint32_t)(ebp + 0xfffffdfcu), 0x0u);
/* 7fd727: mov dword ptr [ebp - 0x200], 0 */
  W32((uint32_t)(ebp + 0xfffffe00u), 0x0u);
/* 7fd731: mov dword ptr [ebp - 0x1fc], 0 */
  W32((uint32_t)(ebp + 0xfffffe04u), 0x0u);
/* 7fd73b: mov dword ptr [ebp - 0x1f8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe08u), 0x3f800000u);
/* 7fd745: mov dword ptr [ebp - 0x1f4], 0 */
  W32((uint32_t)(ebp + 0xfffffe0cu), 0x0u);
/* 7fd74f: mov dword ptr [ebp - 0x1f0], 0 */
  W32((uint32_t)(ebp + 0xfffffe10u), 0x0u);
/* 7fd759: mov dword ptr [ebp - 0x1ec], 0 */
  W32((uint32_t)(ebp + 0xfffffe14u), 0x0u);
/* 7fd763: mov dword ptr [ebp - 0x1e8], 0 */
  W32((uint32_t)(ebp + 0xfffffe18u), 0x0u);
/* 7fd76d: mov dword ptr [ebp - 0x1e4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe1cu), 0x3f800000u);
/* 7fd777: mov dword ptr [ebp - 0x1e0], 0 */
  W32((uint32_t)(ebp + 0xfffffe20u), 0x0u);
/* 7fd781: mov dword ptr [ebp - 0x1dc], ecx */
  W32((uint32_t)(ebp + 0xfffffe24u), ecx);
/* 7fd787: mov dword ptr [ebp - 0x1d8], edx */
  W32((uint32_t)(ebp + 0xfffffe28u), edx);
/* 7fd78d: mov dword ptr [ebp - 0x1d4], eax */
  W32((uint32_t)(ebp + 0xfffffe2cu), eax);
/* 7fd793: mov dword ptr [ebp - 0x1d0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe30u), 0x3f800000u);
/* 7fd79d: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fd7a2: lea esi, [ebp - 0x20c] */
  esi = (uint32_t)(ebp + 0xfffffdf4u);
/* 7fd7a8: lea edi, [ebp - 0x8c4] */
  edi = (uint32_t)(ebp + 0xfffff73cu);
/* 7fd7ae: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd7b0: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fd7b5: lea esi, [ebp - 0x20c] */
  esi = (uint32_t)(ebp + 0xfffffdf4u);
/* 7fd7bb: lea edi, [ebp - 0x5c4] */
  edi = (uint32_t)(ebp + 0xfffffa3cu);
/* 7fd7c1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd7c3: lea ecx, [ebx + 0x17c] */
  ecx = (uint32_t)(ebx + 0x17cu);
/* 7fd7c9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7fd7cb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fd7ce: mov edx, esp */
  edx = esp;
/* 7fd7d0: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7fd7d2: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7fd7d5: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7fd7d8: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7fd7db: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7fd7de: lea ecx, [ebp - 0xbc4] */
  ecx = (uint32_t)(ebp + 0xfffff43cu);
/* 7fd7e4: call 0x6c9160 */
  esp -= 4; W32(esp, 0x7fd7e9u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 7fd7e9: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fd7ee: mov esi, eax */
  esi = eax;
/* 7fd7f0: lea edi, [ebp - 0x844] */
  edi = (uint32_t)(ebp + 0xfffff7bcu);
/* 7fd7f6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd7f8: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7fd7fb: mov esi, eax */
  esi = eax;
/* 7fd7fd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7fd800: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fd805: lea edi, [ebp - 0xa44] */
  edi = (uint32_t)(ebp + 0xfffff5bcu);
/* 7fd80b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd80d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7fd810: mov dword ptr [ebp - 0xcc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x3f800000u);
/* 7fd81a: mov dword ptr [ebp - 0xc8], 0 */
  W32((uint32_t)(ebp + 0xffffff38u), 0x0u);
/* 7fd824: mov dword ptr [ebp - 0xc4], 0 */
  W32((uint32_t)(ebp + 0xffffff3cu), 0x0u);
/* 7fd82e: mov dword ptr [ebp - 0xc0], 0 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x0u);
/* 7fd838: mov dword ptr [ebp - 0xbc], 0 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x0u);
/* 7fd842: mov dword ptr [ebp - 0xb8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x3f800000u);
/* 7fd84c: mov dword ptr [ebp - 0xb4], 0 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x0u);
/* 7fd856: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 7fd860: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 7fd86a: mov dword ptr [ebp - 0xa8], 0 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x0u);
/* 7fd874: mov dword ptr [ebp - 0xa4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x3f800000u);
/* 7fd87e: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 7fd888: mov dword ptr [ebp - 0x9c], edx */
  W32((uint32_t)(ebp + 0xffffff64u), edx);
/* 7fd88e: mov dword ptr [ebp - 0x98], eax */
  W32((uint32_t)(ebp + 0xffffff68u), eax);
/* 7fd894: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 7fd89a: mov dword ptr [ebp - 0x90], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x3f800000u);
/* 7fd8a4: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fd8a9: lea esi, [ebp - 0xcc] */
  esi = (uint32_t)(ebp + 0xffffff34u);
/* 7fd8af: lea edi, [ebp - 0xd44] */
  edi = (uint32_t)(ebp + 0xfffff2bcu);
/* 7fd8b5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd8b7: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7fd8ba: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fd8bd: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fd8c2: lea esi, [ebp - 0xcc] */
  esi = (uint32_t)(ebp + 0xffffff34u);
/* 7fd8c8: lea edi, [ebp - 0x544] */
  edi = (uint32_t)(ebp + 0xfffffabcu);
/* 7fd8ce: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd8d0: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7fd8d3: mov edx, esp */
  edx = esp;
/* 7fd8d5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7fd8d7: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7fd8da: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7fd8dd: lea ecx, [ebp - 0x7c4] */
  ecx = (uint32_t)(ebp + 0xfffff83cu);
/* 7fd8e3: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7fd8e6: call 0x6c9160 */
  esp -= 4; W32(esp, 0x7fd8ebu); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 7fd8eb: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fd8f0: mov esi, eax */
  esi = eax;
/* 7fd8f2: lea edi, [ebp - 0xb44] */
  edi = (uint32_t)(ebp + 0xfffff4bcu);
/* 7fd8f8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd8fa: mov esi, eax */
  esi = eax;
/* 7fd8fc: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fd901: lea edi, [ebp - 0xcc4] */
  edi = (uint32_t)(ebp + 0xfffff33cu);
/* 7fd907: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd909: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7fd90c: add ecx, 0x6c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7fd90f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fd911: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7fd914: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7fd917: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 7fd91a: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 7fd91d: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 7fd920: mov dword ptr [ebp - 0x18c], edx */
  W32((uint32_t)(ebp + 0xfffffe74u), edx);
/* 7fd926: mov dword ptr [ebp - 0x188], 0 */
  W32((uint32_t)(ebp + 0xfffffe78u), 0x0u);
/* 7fd930: mov dword ptr [ebp - 0x184], 0 */
  W32((uint32_t)(ebp + 0xfffffe7cu), 0x0u);
/* 7fd93a: mov dword ptr [ebp - 0x180], 0 */
  W32((uint32_t)(ebp + 0xfffffe80u), 0x0u);
/* 7fd944: mov dword ptr [ebp - 0x17c], 0 */
  W32((uint32_t)(ebp + 0xfffffe84u), 0x0u);
/* 7fd94e: mov dword ptr [ebp - 0x178], eax */
  W32((uint32_t)(ebp + 0xfffffe88u), eax);
/* 7fd954: mov dword ptr [ebp - 0x174], 0 */
  W32((uint32_t)(ebp + 0xfffffe8cu), 0x0u);
/* 7fd95e: mov dword ptr [ebp - 0x170], 0 */
  W32((uint32_t)(ebp + 0xfffffe90u), 0x0u);
/* 7fd968: mov dword ptr [ebp - 0x16c], 0 */
  W32((uint32_t)(ebp + 0xfffffe94u), 0x0u);
/* 7fd972: mov dword ptr [ebp - 0x168], 0 */
  W32((uint32_t)(ebp + 0xfffffe98u), 0x0u);
/* 7fd97c: mov dword ptr [ebp - 0x164], ecx */
  W32((uint32_t)(ebp + 0xfffffe9cu), ecx);
/* 7fd982: mov dword ptr [ebp - 0x160], 0 */
  W32((uint32_t)(ebp + 0xfffffea0u), 0x0u);
/* 7fd98c: mov dword ptr [ebp - 0x15c], 0 */
  W32((uint32_t)(ebp + 0xfffffea4u), 0x0u);
/* 7fd996: mov dword ptr [ebp - 0x158], 0 */
  W32((uint32_t)(ebp + 0xfffffea8u), 0x0u);
/* 7fd9a0: mov dword ptr [ebp - 0x154], 0 */
  W32((uint32_t)(ebp + 0xfffffeacu), 0x0u);
/* 7fd9aa: mov dword ptr [ebp - 0x150], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeb0u), 0x3f800000u);
/* 7fd9b4: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fd9b9: lea esi, [ebp - 0x18c] */
  esi = (uint32_t)(ebp + 0xfffffe74u);
/* 7fd9bf: lea edi, [ebp - 0x744] */
  edi = (uint32_t)(ebp + 0xfffff8bcu);
/* 7fd9c5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fd9c7: fld dword ptr [ebx + 0x29c] */
  { double v = F32((uint32_t)(ebx + 0x29cu)); FPUSH(v); }
/* 7fd9cd: fchs  */
  ST0 = -ST0;
/* 7fd9cf: fld dword ptr [ebx + 0x298] */
  { double v = F32((uint32_t)(ebx + 0x298u)); FPUSH(v); }
/* 7fd9d5: fchs  */
  ST0 = -ST0;
/* 7fd9d7: fld dword ptr [ebx + 0x294] */
  { double v = F32((uint32_t)(ebx + 0x294u)); FPUSH(v); }
/* 7fd9dd: mov dword ptr [ebp - 0x38c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc74u), 0x3f800000u);
/* 7fd9e7: fchs  */
  ST0 = -ST0;
/* 7fd9e9: mov dword ptr [ebp - 0x388], 0 */
  W32((uint32_t)(ebp + 0xfffffc78u), 0x0u);
/* 7fd9f3: fstp dword ptr [ebp - 0x35c] */
  WF32((uint32_t)(ebp + 0xfffffca4u), ST0); FPOP();
/* 7fd9f9: mov dword ptr [ebp - 0x384], 0 */
  W32((uint32_t)(ebp + 0xfffffc7cu), 0x0u);
/* 7fda03: mov dword ptr [ebp - 0x380], 0 */
  W32((uint32_t)(ebp + 0xfffffc80u), 0x0u);
/* 7fda0d: fstp dword ptr [ebp - 0x358] */
  WF32((uint32_t)(ebp + 0xfffffca8u), ST0); FPOP();
/* 7fda13: mov dword ptr [ebp - 0x37c], 0 */
  W32((uint32_t)(ebp + 0xfffffc84u), 0x0u);
/* 7fda1d: mov dword ptr [ebp - 0x378], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc88u), 0x3f800000u);
/* 7fda27: fstp dword ptr [ebp - 0x354] */
  WF32((uint32_t)(ebp + 0xfffffcacu), ST0); FPOP();
/* 7fda2d: mov dword ptr [ebp - 0x374], 0 */
  W32((uint32_t)(ebp + 0xfffffc8cu), 0x0u);
/* 7fda37: mov dword ptr [ebp - 0x370], 0 */
  W32((uint32_t)(ebp + 0xfffffc90u), 0x0u);
/* 7fda41: mov dword ptr [ebp - 0x36c], 0 */
  W32((uint32_t)(ebp + 0xfffffc94u), 0x0u);
/* 7fda4b: mov dword ptr [ebp - 0x368], 0 */
  W32((uint32_t)(ebp + 0xfffffc98u), 0x0u);
/* 7fda55: mov dword ptr [ebp - 0x364], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc9cu), 0x3f800000u);
/* 7fda5f: mov dword ptr [ebp - 0x360], 0 */
  W32((uint32_t)(ebp + 0xfffffca0u), 0x0u);
/* 7fda69: mov dword ptr [ebp - 0x350], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffcb0u), 0x3f800000u);
/* 7fda73: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7fda77: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fda7a: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fda7f: lea esi, [ebp - 0x18c] */
  esi = (uint32_t)(ebp + 0xfffffe74u);
/* 7fda85: mov edi, esp */
  edi = esp;
/* 7fda87: lea edx, [ebp - 0xec4] */
  edx = (uint32_t)(ebp + 0xfffff13cu);
/* 7fda8d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fda8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fda90: lea ecx, [ebp - 0x38c] */
  ecx = (uint32_t)(ebp + 0xfffffc74u);
/* 7fda96: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fda9cu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fda9c: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fda9f: mov edi, esp */
  edi = esp;
/* 7fdaa1: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdaa6: lea esi, [ebp - 0xcc4] */
  esi = (uint32_t)(ebp + 0xfffff33cu);
/* 7fdaac: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdaae: lea ecx, [ebp - 0x6c4] */
  ecx = (uint32_t)(ebp + 0xfffff93cu);
/* 7fdab4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fdab5: mov ecx, eax */
  ecx = eax;
/* 7fdab7: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7fdabb: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fdac1u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fdac1: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fdac4: mov edi, esp */
  edi = esp;
/* 7fdac6: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdacb: lea esi, [ebp - 0x544] */
  esi = (uint32_t)(ebp + 0xfffffabcu);
/* 7fdad1: lea edx, [ebp - 0xac4] */
  edx = (uint32_t)(ebp + 0xfffff53cu);
/* 7fdad7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdad9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fdada: mov ecx, eax */
  ecx = eax;
/* 7fdadc: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7fdae0: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fdae6u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fdae6: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fdae9: mov edi, esp */
  edi = esp;
/* 7fdaeb: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdaf0: lea esi, [ebp - 0xa44] */
  esi = (uint32_t)(ebp + 0xfffff5bcu);
/* 7fdaf6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdaf8: lea ecx, [ebp - 0x644] */
  ecx = (uint32_t)(ebp + 0xfffff9bcu);
/* 7fdafe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fdaff: mov ecx, eax */
  ecx = eax;
/* 7fdb01: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 7fdb05: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fdb0bu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fdb0b: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fdb0e: mov edi, esp */
  edi = esp;
/* 7fdb10: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdb15: lea esi, [ebp - 0x5c4] */
  esi = (uint32_t)(ebp + 0xfffffa3cu);
/* 7fdb1b: lea edx, [ebp - 0x4c4] */
  edx = (uint32_t)(ebp + 0xfffffb3cu);
/* 7fdb21: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdb23: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fdb24: mov ecx, eax */
  ecx = eax;
/* 7fdb26: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 7fdb2a: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fdb30u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fdb30: mov esi, eax */
  esi = eax;
/* 7fdb32: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdb37: lea edi, [ebp - 0x484] */
  edi = (uint32_t)(ebp + 0xfffffb7cu);
/* 7fdb3d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdb3f: lea ecx, [ebp - 0x4c4] */
  ecx = (uint32_t)(ebp + 0xfffffb3cu);
/* 7fdb45: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdb4bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdb4b: lea ecx, [ebp - 0x644] */
  ecx = (uint32_t)(ebp + 0xfffff9bcu);
/* 7fdb51: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 7fdb55: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdb5bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdb5b: lea ecx, [ebp - 0xac4] */
  ecx = (uint32_t)(ebp + 0xfffff53cu);
/* 7fdb61: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7fdb65: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdb6bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdb6b: lea ecx, [ebp - 0x6c4] */
  ecx = (uint32_t)(ebp + 0xfffff93cu);
/* 7fdb71: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7fdb75: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdb7bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdb7b: lea ecx, [ebp - 0xec4] */
  ecx = (uint32_t)(ebp + 0xfffff13cu);
/* 7fdb81: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7fdb85: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdb8bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdb8b: lea ecx, [ebp - 0x38c] */
  ecx = (uint32_t)(ebp + 0xfffffc74u);
/* 7fdb91: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 7fdb95: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdb9bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdb9b: lea ecx, [ebp - 0x744] */
  ecx = (uint32_t)(ebp + 0xfffff8bcu);
/* 7fdba1: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 7fdba5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdbabu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdbab: lea ecx, [ebp - 0x18c] */
  ecx = (uint32_t)(ebp + 0xfffffe74u);
/* 7fdbb1: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7fdbb5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdbbbu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdbbb: lea ecx, [ebp - 0xb44] */
  ecx = (uint32_t)(ebp + 0xfffff4bcu);
/* 7fdbc1: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 7fdbc5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdbcbu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdbcb: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7fdbcf: lea ecx, [ebp - 0x7c4] */
  ecx = (uint32_t)(ebp + 0xfffff83cu);
/* 7fdbd5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdbdbu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdbdb: lea ecx, [ebp - 0xd44] */
  ecx = (uint32_t)(ebp + 0xfffff2bcu);
/* 7fdbe1: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7fdbe5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdbebu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdbeb: lea ecx, [ebp - 0xcc] */
  ecx = (uint32_t)(ebp + 0xffffff34u);
/* 7fdbf1: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7fdbf5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdbfbu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdbfb: lea ecx, [ebp - 0x844] */
  ecx = (uint32_t)(ebp + 0xfffff7bcu);
/* 7fdc01: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7fdc05: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdc0bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdc0b: lea ecx, [ebp - 0xbc4] */
  ecx = (uint32_t)(ebp + 0xfffff43cu);
/* 7fdc11: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7fdc15: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdc1bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdc1b: lea ecx, [ebp - 0x8c4] */
  ecx = (uint32_t)(ebp + 0xfffff73cu);
/* 7fdc21: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7fdc25: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdc2bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdc2b: lea ecx, [ebp - 0x20c] */
  ecx = (uint32_t)(ebp + 0xfffffdf4u);
/* 7fdc31: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7fdc35: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fdc3bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fdc3b: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7fdc3e: jmp 0x7fe78e */
  goto L_7fe78e;
L_7fdc43: /* 7fdc43: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7fdc46: mov ebx, dword ptr [eax + 0x3f0] */
  ebx = R32((uint32_t)(eax + 0x3f0u));
/* 7fdc4c: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 7fdc52: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fdc54: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7fdc57: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7fdc5a: mov dword ptr [ebp - 0x64], edx */
  W32((uint32_t)(ebp + 0xffffff9cu), edx);
/* 7fdc5d: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 7fdc60: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 7fdc63: mov dword ptr [ebp - 0x10c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffef4u), 0x3f800000u);
/* 7fdc6d: mov dword ptr [ebp - 0x108], 0 */
  W32((uint32_t)(ebp + 0xfffffef8u), 0x0u);
/* 7fdc77: mov dword ptr [ebp - 0x104], 0 */
  W32((uint32_t)(ebp + 0xfffffefcu), 0x0u);
/* 7fdc81: mov dword ptr [ebp - 0x100], 0 */
  W32((uint32_t)(ebp + 0xffffff00u), 0x0u);
/* 7fdc8b: mov dword ptr [ebp - 0xfc], 0 */
  W32((uint32_t)(ebp + 0xffffff04u), 0x0u);
/* 7fdc95: mov dword ptr [ebp - 0xf8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff08u), 0x3f800000u);
/* 7fdc9f: mov dword ptr [ebp - 0xf4], 0 */
  W32((uint32_t)(ebp + 0xffffff0cu), 0x0u);
/* 7fdca9: mov dword ptr [ebp - 0xf0], 0 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x0u);
/* 7fdcb3: mov dword ptr [ebp - 0xec], 0 */
  W32((uint32_t)(ebp + 0xffffff14u), 0x0u);
/* 7fdcbd: mov dword ptr [ebp - 0xe8], 0 */
  W32((uint32_t)(ebp + 0xffffff18u), 0x0u);
/* 7fdcc7: mov dword ptr [ebp - 0xe4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff1cu), 0x3f800000u);
/* 7fdcd1: mov dword ptr [ebp - 0xe0], 0 */
  W32((uint32_t)(ebp + 0xffffff20u), 0x0u);
/* 7fdcdb: mov dword ptr [ebp - 0xdc], edx */
  W32((uint32_t)(ebp + 0xffffff24u), edx);
/* 7fdce1: mov dword ptr [ebp - 0xd8], eax */
  W32((uint32_t)(ebp + 0xffffff28u), eax);
/* 7fdce7: mov dword ptr [ebp - 0xd4], ecx */
  W32((uint32_t)(ebp + 0xffffff2cu), ecx);
/* 7fdced: mov dword ptr [ebp - 0xd0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x3f800000u);
/* 7fdcf7: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdcfc: lea esi, [ebp - 0x10c] */
  esi = (uint32_t)(ebp + 0xfffffef4u);
/* 7fdd02: lea edi, [ebp - 0x804] */
  edi = (uint32_t)(ebp + 0xfffff7fcu);
/* 7fdd08: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdd0a: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdd0f: lea esi, [ebp - 0x10c] */
  esi = (uint32_t)(ebp + 0xfffffef4u);
/* 7fdd15: lea edi, [ebp - 0xc44] */
  edi = (uint32_t)(ebp + 0xfffff3bcu);
/* 7fdd1b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdd1d: lea edx, [ebx + 0x17c] */
  edx = (uint32_t)(ebx + 0x17cu);
/* 7fdd23: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7fdd25: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fdd28: mov eax, esp */
  eax = esp;
/* 7fdd2a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7fdd2c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7fdd2f: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7fdd32: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7fdd35: lea ecx, [ebp - 0x784] */
  ecx = (uint32_t)(ebp + 0xfffff87cu);
/* 7fdd3b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7fdd3e: call 0x6c9160 */
  esp -= 4; W32(esp, 0x7fdd43u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 7fdd43: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdd48: mov esi, eax */
  esi = eax;
/* 7fdd4a: lea edi, [ebp - 0x704] */
  edi = (uint32_t)(ebp + 0xfffff8fcu);
/* 7fdd50: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdd52: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7fdd55: mov esi, eax */
  esi = eax;
/* 7fdd57: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7fdd5a: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdd5f: lea edi, [ebp - 0x944] */
  edi = (uint32_t)(ebp + 0xfffff6bcu);
/* 7fdd65: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdd67: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7fdd6a: mov dword ptr [ebp - 0x28c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffd74u), 0x3f800000u);
/* 7fdd74: mov dword ptr [ebp - 0x288], 0 */
  W32((uint32_t)(ebp + 0xfffffd78u), 0x0u);
/* 7fdd7e: mov dword ptr [ebp - 0x284], 0 */
  W32((uint32_t)(ebp + 0xfffffd7cu), 0x0u);
/* 7fdd88: mov dword ptr [ebp - 0x280], 0 */
  W32((uint32_t)(ebp + 0xfffffd80u), 0x0u);
/* 7fdd92: mov dword ptr [ebp - 0x27c], 0 */
  W32((uint32_t)(ebp + 0xfffffd84u), 0x0u);
/* 7fdd9c: mov dword ptr [ebp - 0x278], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffd88u), 0x3f800000u);
/* 7fdda6: mov dword ptr [ebp - 0x274], 0 */
  W32((uint32_t)(ebp + 0xfffffd8cu), 0x0u);
/* 7fddb0: mov dword ptr [ebp - 0x270], 0 */
  W32((uint32_t)(ebp + 0xfffffd90u), 0x0u);
/* 7fddba: mov dword ptr [ebp - 0x26c], 0 */
  W32((uint32_t)(ebp + 0xfffffd94u), 0x0u);
/* 7fddc4: mov dword ptr [ebp - 0x268], 0 */
  W32((uint32_t)(ebp + 0xfffffd98u), 0x0u);
/* 7fddce: mov dword ptr [ebp - 0x264], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffd9cu), 0x3f800000u);
/* 7fddd8: mov dword ptr [ebp - 0x260], 0 */
  W32((uint32_t)(ebp + 0xfffffda0u), 0x0u);
/* 7fdde2: mov dword ptr [ebp - 0x25c], eax */
  W32((uint32_t)(ebp + 0xfffffda4u), eax);
/* 7fdde8: mov dword ptr [ebp - 0x258], ecx */
  W32((uint32_t)(ebp + 0xfffffda8u), ecx);
/* 7fddee: mov dword ptr [ebp - 0x254], edx */
  W32((uint32_t)(ebp + 0xfffffdacu), edx);
/* 7fddf4: mov dword ptr [ebp - 0x250], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffdb0u), 0x3f800000u);
/* 7fddfe: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fde03: lea esi, [ebp - 0x28c] */
  esi = (uint32_t)(ebp + 0xfffffd74u);
/* 7fde09: lea edi, [ebp - 0x684] */
  edi = (uint32_t)(ebp + 0xfffff97cu);
/* 7fde0f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fde11: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7fde14: add eax, 0x6c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7fde17: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fde1c: lea esi, [ebp - 0x28c] */
  esi = (uint32_t)(ebp + 0xfffffd74u);
/* 7fde22: lea edi, [ebp - 0xe44] */
  edi = (uint32_t)(ebp + 0xfffff1bcu);
/* 7fde28: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fde2a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7fde2c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7fde2f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7fde32: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 7fde35: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 7fde38: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 7fde3b: mov dword ptr [ebp - 0x30c], ecx */
  W32((uint32_t)(ebp + 0xfffffcf4u), ecx);
/* 7fde41: mov dword ptr [ebp - 0x308], 0 */
  W32((uint32_t)(ebp + 0xfffffcf8u), 0x0u);
/* 7fde4b: mov dword ptr [ebp - 0x304], 0 */
  W32((uint32_t)(ebp + 0xfffffcfcu), 0x0u);
/* 7fde55: mov dword ptr [ebp - 0x300], 0 */
  W32((uint32_t)(ebp + 0xfffffd00u), 0x0u);
/* 7fde5f: mov dword ptr [ebp - 0x2fc], 0 */
  W32((uint32_t)(ebp + 0xfffffd04u), 0x0u);
/* 7fde69: mov dword ptr [ebp - 0x2f8], edx */
  W32((uint32_t)(ebp + 0xfffffd08u), edx);
/* 7fde6f: mov dword ptr [ebp - 0x2f4], 0 */
  W32((uint32_t)(ebp + 0xfffffd0cu), 0x0u);
/* 7fde79: mov dword ptr [ebp - 0x2f0], 0 */
  W32((uint32_t)(ebp + 0xfffffd10u), 0x0u);
/* 7fde83: mov dword ptr [ebp - 0x2ec], 0 */
  W32((uint32_t)(ebp + 0xfffffd14u), 0x0u);
/* 7fde8d: mov dword ptr [ebp - 0x2e8], 0 */
  W32((uint32_t)(ebp + 0xfffffd18u), 0x0u);
/* 7fde97: mov dword ptr [ebp - 0x2e4], eax */
  W32((uint32_t)(ebp + 0xfffffd1cu), eax);
/* 7fde9d: mov dword ptr [ebp - 0x2e0], 0 */
  W32((uint32_t)(ebp + 0xfffffd20u), 0x0u);
/* 7fdea7: mov dword ptr [ebp - 0x2dc], 0 */
  W32((uint32_t)(ebp + 0xfffffd24u), 0x0u);
/* 7fdeb1: mov dword ptr [ebp - 0x2d8], 0 */
  W32((uint32_t)(ebp + 0xfffffd28u), 0x0u);
/* 7fdebb: mov dword ptr [ebp - 0x2d4], 0 */
  W32((uint32_t)(ebp + 0xfffffd2cu), 0x0u);
/* 7fdec5: mov dword ptr [ebp - 0x2d0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffd30u), 0x3f800000u);
/* 7fdecf: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fded4: lea esi, [ebp - 0x30c] */
  esi = (uint32_t)(ebp + 0xfffffcf4u);
/* 7fdeda: lea edi, [ebp - 0x604] */
  edi = (uint32_t)(ebp + 0xfffff9fcu);
/* 7fdee0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdee2: fld dword ptr [ebx + 0x29c] */
  { double v = F32((uint32_t)(ebx + 0x29cu)); FPUSH(v); }
/* 7fdee8: fchs  */
  ST0 = -ST0;
/* 7fdeea: fld dword ptr [ebx + 0x298] */
  { double v = F32((uint32_t)(ebx + 0x298u)); FPUSH(v); }
/* 7fdef0: fchs  */
  ST0 = -ST0;
/* 7fdef2: fld dword ptr [ebx + 0x294] */
  { double v = F32((uint32_t)(ebx + 0x294u)); FPUSH(v); }
/* 7fdef8: mov dword ptr [ebp - 0x3cc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc34u), 0x3f800000u);
/* 7fdf02: fchs  */
  ST0 = -ST0;
/* 7fdf04: mov dword ptr [ebp - 0x3c8], 0 */
  W32((uint32_t)(ebp + 0xfffffc38u), 0x0u);
/* 7fdf0e: fstp dword ptr [ebp - 0x39c] */
  WF32((uint32_t)(ebp + 0xfffffc64u), ST0); FPOP();
/* 7fdf14: mov dword ptr [ebp - 0x3c4], 0 */
  W32((uint32_t)(ebp + 0xfffffc3cu), 0x0u);
/* 7fdf1e: mov dword ptr [ebp - 0x3c0], 0 */
  W32((uint32_t)(ebp + 0xfffffc40u), 0x0u);
/* 7fdf28: fstp dword ptr [ebp - 0x398] */
  WF32((uint32_t)(ebp + 0xfffffc68u), ST0); FPOP();
/* 7fdf2e: mov dword ptr [ebp - 0x3bc], 0 */
  W32((uint32_t)(ebp + 0xfffffc44u), 0x0u);
/* 7fdf38: mov dword ptr [ebp - 0x3b8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc48u), 0x3f800000u);
/* 7fdf42: fstp dword ptr [ebp - 0x394] */
  WF32((uint32_t)(ebp + 0xfffffc6cu), ST0); FPOP();
/* 7fdf48: mov dword ptr [ebp - 0x3b4], 0 */
  W32((uint32_t)(ebp + 0xfffffc4cu), 0x0u);
/* 7fdf52: mov dword ptr [ebp - 0x3b0], 0 */
  W32((uint32_t)(ebp + 0xfffffc50u), 0x0u);
/* 7fdf5c: mov dword ptr [ebp - 0x3ac], 0 */
  W32((uint32_t)(ebp + 0xfffffc54u), 0x0u);
/* 7fdf66: mov dword ptr [ebp - 0x3a8], 0 */
  W32((uint32_t)(ebp + 0xfffffc58u), 0x0u);
/* 7fdf70: mov dword ptr [ebp - 0x3a4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc5cu), 0x3f800000u);
/* 7fdf7a: mov dword ptr [ebp - 0x3a0], 0 */
  W32((uint32_t)(ebp + 0xfffffc60u), 0x0u);
/* 7fdf84: mov dword ptr [ebp - 0x390], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc70u), 0x3f800000u);
/* 7fdf8e: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fdf91: mov edi, esp */
  edi = esp;
/* 7fdf93: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdf98: lea esi, [ebp - 0x30c] */
  esi = (uint32_t)(ebp + 0xfffffcf4u);
/* 7fdf9e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdfa0: lea ecx, [ebp - 0x584] */
  ecx = (uint32_t)(ebp + 0xfffffa7cu);
/* 7fdfa6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fdfa7: lea ecx, [ebp - 0x3cc] */
  ecx = (uint32_t)(ebp + 0xfffffc34u);
/* 7fdfad: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 7fdfb1: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fdfb7u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fdfb7: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fdfba: mov edi, esp */
  edi = esp;
/* 7fdfbc: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdfc1: lea esi, [ebp - 0xe44] */
  esi = (uint32_t)(ebp + 0xfffff1bcu);
/* 7fdfc7: lea edx, [ebp - 0x504] */
  edx = (uint32_t)(ebp + 0xfffffafcu);
/* 7fdfcd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdfcf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fdfd0: mov ecx, eax */
  ecx = eax;
/* 7fdfd2: mov byte ptr [ebp - 4], 0x1a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1au);
/* 7fdfd6: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fdfdcu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fdfdc: mov byte ptr [ebp - 4], 0x1b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1bu);
/* 7fdfe0: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fdfe3: mov edi, esp */
  edi = esp;
/* 7fdfe5: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fdfea: lea esi, [ebp - 0x944] */
  esi = (uint32_t)(ebp + 0xfffff6bcu);
/* 7fdff0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fdff2: lea ecx, [ebp - 0xdc4] */
  ecx = (uint32_t)(ebp + 0xfffff23cu);
/* 7fdff8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fdff9: mov ecx, eax */
  ecx = eax;
/* 7fdffb: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fe001u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fe001: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fe004: mov edi, esp */
  edi = esp;
/* 7fe006: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe00b: lea esi, [ebp - 0xc44] */
  esi = (uint32_t)(ebp + 0xfffff3bcu);
/* 7fe011: lea edx, [ebp - 0x9c4] */
  edx = (uint32_t)(ebp + 0xfffff63cu);
/* 7fe017: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe019: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fe01a: mov ecx, eax */
  ecx = eax;
/* 7fe01c: mov byte ptr [ebp - 4], 0x1c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1cu);
/* 7fe020: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fe026u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fe026: mov esi, eax */
  esi = eax;
/* 7fe028: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe02d: lea edi, [ebp - 0x484] */
  edi = (uint32_t)(ebp + 0xfffffb7cu);
/* 7fe033: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe035: lea ecx, [ebp - 0x9c4] */
  ecx = (uint32_t)(ebp + 0xfffff63cu);
/* 7fe03b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe041u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe041: lea ecx, [ebp - 0xdc4] */
  ecx = (uint32_t)(ebp + 0xfffff23cu);
/* 7fe047: mov byte ptr [ebp - 4], 0x1b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1bu);
/* 7fe04b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe051u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe051: lea ecx, [ebp - 0x504] */
  ecx = (uint32_t)(ebp + 0xfffffafcu);
/* 7fe057: mov byte ptr [ebp - 4], 0x1a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1au);
/* 7fe05b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe061u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe061: lea ecx, [ebp - 0x584] */
  ecx = (uint32_t)(ebp + 0xfffffa7cu);
/* 7fe067: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 7fe06b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe071u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe071: lea ecx, [ebp - 0x3cc] */
  ecx = (uint32_t)(ebp + 0xfffffc34u);
/* 7fe077: mov byte ptr [ebp - 4], 0x18 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x18u);
/* 7fe07b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe081u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe081: lea ecx, [ebp - 0x604] */
  ecx = (uint32_t)(ebp + 0xfffff9fcu);
/* 7fe087: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* 7fe08b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe091u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe091: lea ecx, [ebp - 0x30c] */
  ecx = (uint32_t)(ebp + 0xfffffcf4u);
/* 7fe097: mov byte ptr [ebp - 4], 0x16 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x16u);
/* 7fe09b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe0a1u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe0a1: lea ecx, [ebp - 0x684] */
  ecx = (uint32_t)(ebp + 0xfffff97cu);
/* 7fe0a7: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* 7fe0ab: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe0b1u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe0b1: lea ecx, [ebp - 0x28c] */
  ecx = (uint32_t)(ebp + 0xfffffd74u);
/* 7fe0b7: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 7fe0bb: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe0c1u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe0c1: lea ecx, [ebp - 0x704] */
  ecx = (uint32_t)(ebp + 0xfffff8fcu);
/* 7fe0c7: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7fe0cb: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe0d1u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe0d1: lea ecx, [ebp - 0x784] */
  ecx = (uint32_t)(ebp + 0xfffff87cu);
/* 7fe0d7: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 7fe0db: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe0e1u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe0e1: lea ecx, [ebp - 0x804] */
  ecx = (uint32_t)(ebp + 0xfffff7fcu);
/* 7fe0e7: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 7fe0eb: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe0f1u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe0f1: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 7fe0f7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7fe0fb: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe101u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe101: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7fe104: jmp 0x7fe78e */
  goto L_7fe78e;
L_7fe109: /* 7fe109: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fe10b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7fe10e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7fe111: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7fe114: je 0x7fe497 */
  if (zf) goto L_7fe497;
L_7fe11a: /* 7fe11a: mov dword ptr [ebp - 0x1cc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe34u), 0x3f800000u);
/* 7fe124: mov dword ptr [ebp - 0x1c8], 0 */
  W32((uint32_t)(ebp + 0xfffffe38u), 0x0u);
/* 7fe12e: mov dword ptr [ebp - 0x1c4], 0 */
  W32((uint32_t)(ebp + 0xfffffe3cu), 0x0u);
/* 7fe138: mov dword ptr [ebp - 0x1c0], 0 */
  W32((uint32_t)(ebp + 0xfffffe40u), 0x0u);
/* 7fe142: mov dword ptr [ebp - 0x1bc], 0 */
  W32((uint32_t)(ebp + 0xfffffe44u), 0x0u);
/* 7fe14c: mov dword ptr [ebp - 0x1b8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe48u), 0x3f800000u);
/* 7fe156: mov dword ptr [ebp - 0x1b4], 0 */
  W32((uint32_t)(ebp + 0xfffffe4cu), 0x0u);
/* 7fe160: mov dword ptr [ebp - 0x1b0], 0 */
  W32((uint32_t)(ebp + 0xfffffe50u), 0x0u);
/* 7fe16a: mov dword ptr [ebp - 0x1ac], 0 */
  W32((uint32_t)(ebp + 0xfffffe54u), 0x0u);
/* 7fe174: mov dword ptr [ebp - 0x1a8], 0 */
  W32((uint32_t)(ebp + 0xfffffe58u), 0x0u);
/* 7fe17e: mov dword ptr [ebp - 0x1a4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe5cu), 0x3f800000u);
/* 7fe188: mov dword ptr [ebp - 0x1a0], 0 */
  W32((uint32_t)(ebp + 0xfffffe60u), 0x0u);
/* 7fe192: mov dword ptr [ebp - 0x19c], eax */
  W32((uint32_t)(ebp + 0xfffffe64u), eax);
/* 7fe198: mov dword ptr [ebp - 0x198], ecx */
  W32((uint32_t)(ebp + 0xfffffe68u), ecx);
/* 7fe19e: mov dword ptr [ebp - 0x194], edx */
  W32((uint32_t)(ebp + 0xfffffe6cu), edx);
/* 7fe1a4: mov dword ptr [ebp - 0x190], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe70u), 0x3f800000u);
/* 7fe1ae: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe1b3: lea esi, [ebp - 0x1cc] */
  esi = (uint32_t)(ebp + 0xfffffe34u);
/* 7fe1b9: lea edi, [ebp - 0xc84] */
  edi = (uint32_t)(ebp + 0xfffff37cu);
/* 7fe1bf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe1c1: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7fe1c4: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe1c9: lea esi, [ebp - 0x1cc] */
  esi = (uint32_t)(ebp + 0xfffffe34u);
/* 7fe1cf: lea edi, [ebp - 0x904] */
  edi = (uint32_t)(ebp + 0xfffff6fcu);
/* 7fe1d5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe1d7: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7fe1da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fe1dd: mov eax, esp */
  eax = esp;
/* 7fe1df: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7fe1e1: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7fe1e4: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7fe1e7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7fe1ea: lea ecx, [ebp - 0xc04] */
  ecx = (uint32_t)(ebp + 0xfffff3fcu);
/* 7fe1f0: call 0x6c9160 */
  esp -= 4; W32(esp, 0x7fe1f5u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 7fe1f5: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe1fa: mov esi, eax */
  esi = eax;
/* 7fe1fc: lea edi, [ebp - 0xb84] */
  edi = (uint32_t)(ebp + 0xfffff47cu);
/* 7fe202: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe204: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7fe207: add edx, 0x6c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7fe20a: mov esi, eax */
  esi = eax;
/* 7fe20c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7fe20e: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe213: lea edi, [ebp - 0x884] */
  edi = (uint32_t)(ebp + 0xfffff77cu);
/* 7fe219: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe21b: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7fe21e: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7fe221: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 7fe224: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 7fe227: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 7fe22a: mov dword ptr [ebp - 0x14c], eax */
  W32((uint32_t)(ebp + 0xfffffeb4u), eax);
/* 7fe230: mov dword ptr [ebp - 0x148], 0 */
  W32((uint32_t)(ebp + 0xfffffeb8u), 0x0u);
/* 7fe23a: mov dword ptr [ebp - 0x144], 0 */
  W32((uint32_t)(ebp + 0xfffffebcu), 0x0u);
/* 7fe244: mov dword ptr [ebp - 0x140], 0 */
  W32((uint32_t)(ebp + 0xfffffec0u), 0x0u);
/* 7fe24e: mov dword ptr [ebp - 0x13c], 0 */
  W32((uint32_t)(ebp + 0xfffffec4u), 0x0u);
/* 7fe258: mov dword ptr [ebp - 0x138], ecx */
  W32((uint32_t)(ebp + 0xfffffec8u), ecx);
/* 7fe25e: mov dword ptr [ebp - 0x134], 0 */
  W32((uint32_t)(ebp + 0xfffffeccu), 0x0u);
/* 7fe268: mov dword ptr [ebp - 0x130], 0 */
  W32((uint32_t)(ebp + 0xfffffed0u), 0x0u);
/* 7fe272: mov dword ptr [ebp - 0x12c], 0 */
  W32((uint32_t)(ebp + 0xfffffed4u), 0x0u);
/* 7fe27c: mov dword ptr [ebp - 0x128], 0 */
  W32((uint32_t)(ebp + 0xfffffed8u), 0x0u);
/* 7fe286: mov dword ptr [ebp - 0x124], edx */
  W32((uint32_t)(ebp + 0xfffffedcu), edx);
/* 7fe28c: mov dword ptr [ebp - 0x120], 0 */
  W32((uint32_t)(ebp + 0xfffffee0u), 0x0u);
/* 7fe296: mov dword ptr [ebp - 0x11c], 0 */
  W32((uint32_t)(ebp + 0xfffffee4u), 0x0u);
/* 7fe2a0: mov dword ptr [ebp - 0x118], 0 */
  W32((uint32_t)(ebp + 0xfffffee8u), 0x0u);
/* 7fe2aa: mov dword ptr [ebp - 0x114], 0 */
  W32((uint32_t)(ebp + 0xfffffeecu), 0x0u);
/* 7fe2b4: mov dword ptr [ebp - 0x110], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffef0u), 0x3f800000u);
/* 7fe2be: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe2c3: lea esi, [ebp - 0x14c] */
  esi = (uint32_t)(ebp + 0xfffffeb4u);
/* 7fe2c9: lea edi, [ebp - 0xb04] */
  edi = (uint32_t)(ebp + 0xfffff4fcu);
/* 7fe2cf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe2d1: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 7fe2d7: add eax, 0x294 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x294u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7fe2dc: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7fe2df: fchs  */
  ST0 = -ST0;
/* 7fe2e1: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7fe2e4: fchs  */
  ST0 = -ST0;
/* 7fe2e6: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 7fe2e8: mov dword ptr [ebp - 0x40c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffbf4u), 0x3f800000u);
/* 7fe2f2: fchs  */
  ST0 = -ST0;
/* 7fe2f4: mov dword ptr [ebp - 0x408], 0 */
  W32((uint32_t)(ebp + 0xfffffbf8u), 0x0u);
/* 7fe2fe: fstp dword ptr [ebp - 0x3dc] */
  WF32((uint32_t)(ebp + 0xfffffc24u), ST0); FPOP();
/* 7fe304: mov dword ptr [ebp - 0x404], 0 */
  W32((uint32_t)(ebp + 0xfffffbfcu), 0x0u);
/* 7fe30e: mov dword ptr [ebp - 0x400], 0 */
  W32((uint32_t)(ebp + 0xfffffc00u), 0x0u);
/* 7fe318: fstp dword ptr [ebp - 0x3d8] */
  WF32((uint32_t)(ebp + 0xfffffc28u), ST0); FPOP();
/* 7fe31e: mov dword ptr [ebp - 0x3fc], 0 */
  W32((uint32_t)(ebp + 0xfffffc04u), 0x0u);
/* 7fe328: mov dword ptr [ebp - 0x3f8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc08u), 0x3f800000u);
/* 7fe332: fstp dword ptr [ebp - 0x3d4] */
  WF32((uint32_t)(ebp + 0xfffffc2cu), ST0); FPOP();
/* 7fe338: mov dword ptr [ebp - 0x3f4], 0 */
  W32((uint32_t)(ebp + 0xfffffc0cu), 0x0u);
/* 7fe342: mov dword ptr [ebp - 0x3f0], 0 */
  W32((uint32_t)(ebp + 0xfffffc10u), 0x0u);
/* 7fe34c: mov dword ptr [ebp - 0x3ec], 0 */
  W32((uint32_t)(ebp + 0xfffffc14u), 0x0u);
/* 7fe356: mov dword ptr [ebp - 0x3e8], 0 */
  W32((uint32_t)(ebp + 0xfffffc18u), 0x0u);
/* 7fe360: mov dword ptr [ebp - 0x3e4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc1cu), 0x3f800000u);
/* 7fe36a: mov dword ptr [ebp - 0x3e0], 0 */
  W32((uint32_t)(ebp + 0xfffffc20u), 0x0u);
/* 7fe374: mov dword ptr [ebp - 0x3d0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffc30u), 0x3f800000u);
/* 7fe37e: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fe381: mov edi, esp */
  edi = esp;
/* 7fe383: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe388: lea esi, [ebp - 0x14c] */
  esi = (uint32_t)(ebp + 0xfffffeb4u);
/* 7fe38e: lea eax, [ebp - 0xa84] */
  eax = (uint32_t)(ebp + 0xfffff57cu);
/* 7fe394: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe396: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fe397: lea ecx, [ebp - 0x40c] */
  ecx = (uint32_t)(ebp + 0xfffffbf4u);
/* 7fe39d: mov byte ptr [ebp - 4], 0x23 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x23u);
/* 7fe3a1: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fe3a7u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fe3a7: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fe3aa: mov edi, esp */
  edi = esp;
/* 7fe3ac: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe3b1: lea esi, [ebp - 0x884] */
  esi = (uint32_t)(ebp + 0xfffff77cu);
/* 7fe3b7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe3b9: lea ecx, [ebp - 0xa04] */
  ecx = (uint32_t)(ebp + 0xfffff5fcu);
/* 7fe3bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fe3c0: mov ecx, eax */
  ecx = eax;
/* 7fe3c2: mov byte ptr [ebp - 4], 0x24 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 7fe3c6: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fe3ccu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fe3cc: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fe3cf: mov edi, esp */
  edi = esp;
/* 7fe3d1: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe3d6: lea esi, [ebp - 0x904] */
  esi = (uint32_t)(ebp + 0xfffff6fcu);
/* 7fe3dc: lea edx, [ebp - 0x984] */
  edx = (uint32_t)(ebp + 0xfffff67cu);
/* 7fe3e2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe3e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fe3e5: mov ecx, eax */
  ecx = eax;
/* 7fe3e7: mov byte ptr [ebp - 4], 0x25 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x25u);
/* 7fe3eb: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fe3f1u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fe3f1: mov esi, eax */
  esi = eax;
/* 7fe3f3: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe3f8: lea edi, [ebp - 0x484] */
  edi = (uint32_t)(ebp + 0xfffffb7cu);
/* 7fe3fe: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe400: lea ecx, [ebp - 0x984] */
  ecx = (uint32_t)(ebp + 0xfffff67cu);
/* 7fe406: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe40cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe40c: lea ecx, [ebp - 0xa04] */
  ecx = (uint32_t)(ebp + 0xfffff5fcu);
/* 7fe412: mov byte ptr [ebp - 4], 0x24 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 7fe416: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe41cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe41c: lea ecx, [ebp - 0xa84] */
  ecx = (uint32_t)(ebp + 0xfffff57cu);
/* 7fe422: mov byte ptr [ebp - 4], 0x23 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x23u);
/* 7fe426: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe42cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe42c: lea ecx, [ebp - 0x40c] */
  ecx = (uint32_t)(ebp + 0xfffffbf4u);
/* 7fe432: mov byte ptr [ebp - 4], 0x22 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x22u);
/* 7fe436: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe43cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe43c: lea ecx, [ebp - 0xb04] */
  ecx = (uint32_t)(ebp + 0xfffff4fcu);
/* 7fe442: mov byte ptr [ebp - 4], 0x21 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 7fe446: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe44cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe44c: lea ecx, [ebp - 0x14c] */
  ecx = (uint32_t)(ebp + 0xfffffeb4u);
/* 7fe452: mov byte ptr [ebp - 4], 0x20 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x20u);
/* 7fe456: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe45cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe45c: lea ecx, [ebp - 0xb84] */
  ecx = (uint32_t)(ebp + 0xfffff47cu);
/* 7fe462: mov byte ptr [ebp - 4], 0x1f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1fu);
/* 7fe466: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe46cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe46c: lea ecx, [ebp - 0xc04] */
  ecx = (uint32_t)(ebp + 0xfffff3fcu);
/* 7fe472: mov byte ptr [ebp - 4], 0x1e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1eu);
/* 7fe476: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe47cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe47c: mov byte ptr [ebp - 4], 0x1d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1du);
/* 7fe480: lea ecx, [ebp - 0xc84] */
  ecx = (uint32_t)(ebp + 0xfffff37cu);
/* 7fe486: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe48cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe48c: lea ecx, [ebp - 0x1cc] */
  ecx = (uint32_t)(ebp + 0xfffffe34u);
/* 7fe492: jmp 0x7fe784 */
  goto L_7fe784;
L_7fe497: /* 7fe497: mov dword ptr [ebp - 0x2cc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffd34u), 0x3f800000u);
/* 7fe4a1: mov dword ptr [ebp - 0x2c8], 0 */
  W32((uint32_t)(ebp + 0xfffffd38u), 0x0u);
/* 7fe4ab: mov dword ptr [ebp - 0x2c4], 0 */
  W32((uint32_t)(ebp + 0xfffffd3cu), 0x0u);
/* 7fe4b5: mov dword ptr [ebp - 0x2c0], 0 */
  W32((uint32_t)(ebp + 0xfffffd40u), 0x0u);
/* 7fe4bf: mov dword ptr [ebp - 0x2bc], 0 */
  W32((uint32_t)(ebp + 0xfffffd44u), 0x0u);
/* 7fe4c9: mov dword ptr [ebp - 0x2b8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffd48u), 0x3f800000u);
/* 7fe4d3: mov dword ptr [ebp - 0x2b4], 0 */
  W32((uint32_t)(ebp + 0xfffffd4cu), 0x0u);
/* 7fe4dd: mov dword ptr [ebp - 0x2b0], 0 */
  W32((uint32_t)(ebp + 0xfffffd50u), 0x0u);
/* 7fe4e7: mov dword ptr [ebp - 0x2ac], 0 */
  W32((uint32_t)(ebp + 0xfffffd54u), 0x0u);
/* 7fe4f1: mov dword ptr [ebp - 0x2a8], 0 */
  W32((uint32_t)(ebp + 0xfffffd58u), 0x0u);
/* 7fe4fb: mov dword ptr [ebp - 0x2a4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffd5cu), 0x3f800000u);
/* 7fe505: mov dword ptr [ebp - 0x2a0], 0 */
  W32((uint32_t)(ebp + 0xfffffd60u), 0x0u);
/* 7fe50f: mov dword ptr [ebp - 0x29c], eax */
  W32((uint32_t)(ebp + 0xfffffd64u), eax);
/* 7fe515: mov dword ptr [ebp - 0x298], ecx */
  W32((uint32_t)(ebp + 0xfffffd68u), ecx);
/* 7fe51b: mov dword ptr [ebp - 0x294], edx */
  W32((uint32_t)(ebp + 0xfffffd6cu), edx);
/* 7fe521: mov dword ptr [ebp - 0x290], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffd70u), 0x3f800000u);
/* 7fe52b: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe530: lea esi, [ebp - 0x2cc] */
  esi = (uint32_t)(ebp + 0xfffffd34u);
/* 7fe536: lea edi, [ebp - 0xf04] */
  edi = (uint32_t)(ebp + 0xfffff0fcu);
/* 7fe53c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe53e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7fe541: add eax, 0x6c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7fe544: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe549: lea esi, [ebp - 0x2cc] */
  esi = (uint32_t)(ebp + 0xfffffd34u);
/* 7fe54f: lea edi, [ebp - 0xd04] */
  edi = (uint32_t)(ebp + 0xfffff2fcu);
/* 7fe555: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe557: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7fe559: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7fe55c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7fe55f: mov dword ptr [ebp - 0x8c], ecx */
  W32((uint32_t)(ebp + 0xffffff74u), ecx);
/* 7fe565: mov dword ptr [ebp - 0x88], edx */
  W32((uint32_t)(ebp + 0xffffff78u), edx);
/* 7fe56b: mov dword ptr [ebp - 0x84], eax */
  W32((uint32_t)(ebp + 0xffffff7cu), eax);
/* 7fe571: mov dword ptr [ebp - 0x24c], ecx */
  W32((uint32_t)(ebp + 0xfffffdb4u), ecx);
/* 7fe577: mov dword ptr [ebp - 0x248], 0 */
  W32((uint32_t)(ebp + 0xfffffdb8u), 0x0u);
/* 7fe581: mov dword ptr [ebp - 0x244], 0 */
  W32((uint32_t)(ebp + 0xfffffdbcu), 0x0u);
/* 7fe58b: mov dword ptr [ebp - 0x240], 0 */
  W32((uint32_t)(ebp + 0xfffffdc0u), 0x0u);
/* 7fe595: mov dword ptr [ebp - 0x23c], 0 */
  W32((uint32_t)(ebp + 0xfffffdc4u), 0x0u);
/* 7fe59f: mov dword ptr [ebp - 0x238], edx */
  W32((uint32_t)(ebp + 0xfffffdc8u), edx);
/* 7fe5a5: mov dword ptr [ebp - 0x234], 0 */
  W32((uint32_t)(ebp + 0xfffffdccu), 0x0u);
/* 7fe5af: mov dword ptr [ebp - 0x230], 0 */
  W32((uint32_t)(ebp + 0xfffffdd0u), 0x0u);
/* 7fe5b9: mov dword ptr [ebp - 0x22c], 0 */
  W32((uint32_t)(ebp + 0xfffffdd4u), 0x0u);
/* 7fe5c3: mov dword ptr [ebp - 0x228], 0 */
  W32((uint32_t)(ebp + 0xfffffdd8u), 0x0u);
/* 7fe5cd: mov dword ptr [ebp - 0x224], eax */
  W32((uint32_t)(ebp + 0xfffffddcu), eax);
/* 7fe5d3: mov dword ptr [ebp - 0x220], 0 */
  W32((uint32_t)(ebp + 0xfffffde0u), 0x0u);
/* 7fe5dd: mov dword ptr [ebp - 0x21c], 0 */
  W32((uint32_t)(ebp + 0xfffffde4u), 0x0u);
/* 7fe5e7: mov dword ptr [ebp - 0x218], 0 */
  W32((uint32_t)(ebp + 0xfffffde8u), 0x0u);
/* 7fe5f1: mov dword ptr [ebp - 0x214], 0 */
  W32((uint32_t)(ebp + 0xfffffdecu), 0x0u);
/* 7fe5fb: mov dword ptr [ebp - 0x210], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffdf0u), 0x3f800000u);
/* 7fe605: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe60a: lea esi, [ebp - 0x24c] */
  esi = (uint32_t)(ebp + 0xfffffdb4u);
/* 7fe610: lea edi, [ebp - 0xe84] */
  edi = (uint32_t)(ebp + 0xfffff17cu);
/* 7fe616: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe618: mov eax, dword ptr [ebx + 0x3f0] */
  eax = R32((uint32_t)(ebx + 0x3f0u));
/* 7fe61e: add eax, 0x294 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x294u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7fe623: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7fe626: fchs  */
  ST0 = -ST0;
/* 7fe628: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7fe62b: fchs  */
  ST0 = -ST0;
/* 7fe62d: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 7fe62f: mov dword ptr [ebp - 0x34c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffcb4u), 0x3f800000u);
/* 7fe639: fchs  */
  ST0 = -ST0;
/* 7fe63b: mov dword ptr [ebp - 0x348], 0 */
  W32((uint32_t)(ebp + 0xfffffcb8u), 0x0u);
/* 7fe645: fstp dword ptr [ebp - 0x31c] */
  WF32((uint32_t)(ebp + 0xfffffce4u), ST0); FPOP();
/* 7fe64b: mov dword ptr [ebp - 0x344], 0 */
  W32((uint32_t)(ebp + 0xfffffcbcu), 0x0u);
/* 7fe655: mov dword ptr [ebp - 0x340], 0 */
  W32((uint32_t)(ebp + 0xfffffcc0u), 0x0u);
/* 7fe65f: fstp dword ptr [ebp - 0x318] */
  WF32((uint32_t)(ebp + 0xfffffce8u), ST0); FPOP();
/* 7fe665: mov dword ptr [ebp - 0x33c], 0 */
  W32((uint32_t)(ebp + 0xfffffcc4u), 0x0u);
/* 7fe66f: mov dword ptr [ebp - 0x338], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffcc8u), 0x3f800000u);
/* 7fe679: fstp dword ptr [ebp - 0x314] */
  WF32((uint32_t)(ebp + 0xfffffcecu), ST0); FPOP();
/* 7fe67f: mov dword ptr [ebp - 0x334], 0 */
  W32((uint32_t)(ebp + 0xfffffcccu), 0x0u);
/* 7fe689: mov dword ptr [ebp - 0x330], 0 */
  W32((uint32_t)(ebp + 0xfffffcd0u), 0x0u);
/* 7fe693: mov dword ptr [ebp - 0x32c], 0 */
  W32((uint32_t)(ebp + 0xfffffcd4u), 0x0u);
/* 7fe69d: mov dword ptr [ebp - 0x328], 0 */
  W32((uint32_t)(ebp + 0xfffffcd8u), 0x0u);
/* 7fe6a7: mov dword ptr [ebp - 0x324], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffcdcu), 0x3f800000u);
/* 7fe6b1: mov dword ptr [ebp - 0x320], 0 */
  W32((uint32_t)(ebp + 0xfffffce0u), 0x0u);
/* 7fe6bb: mov dword ptr [ebp - 0x310], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffcf0u), 0x3f800000u);
/* 7fe6c5: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fe6c8: mov edi, esp */
  edi = esp;
/* 7fe6ca: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe6cf: lea esi, [ebp - 0x24c] */
  esi = (uint32_t)(ebp + 0xfffffdb4u);
/* 7fe6d5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe6d7: lea ecx, [ebp - 0xe04] */
  ecx = (uint32_t)(ebp + 0xfffff1fcu);
/* 7fe6dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fe6de: lea ecx, [ebp - 0x34c] */
  ecx = (uint32_t)(ebp + 0xfffffcb4u);
/* 7fe6e4: mov byte ptr [ebp - 4], 0x2a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2au);
/* 7fe6e8: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fe6eeu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fe6ee: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fe6f1: mov edi, esp */
  edi = esp;
/* 7fe6f3: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe6f8: lea esi, [ebp - 0xd04] */
  esi = (uint32_t)(ebp + 0xfffff2fcu);
/* 7fe6fe: lea edx, [ebp - 0xd84] */
  edx = (uint32_t)(ebp + 0xfffff27cu);
/* 7fe704: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe706: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fe707: mov ecx, eax */
  ecx = eax;
/* 7fe709: mov byte ptr [ebp - 4], 0x2b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2bu);
/* 7fe70d: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7fe713u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7fe713: mov esi, eax */
  esi = eax;
/* 7fe715: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7fe71a: lea edi, [ebp - 0x484] */
  edi = (uint32_t)(ebp + 0xfffffb7cu);
/* 7fe720: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7fe722: lea ecx, [ebp - 0xd84] */
  ecx = (uint32_t)(ebp + 0xfffff27cu);
/* 7fe728: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe72eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe72e: lea ecx, [ebp - 0xe04] */
  ecx = (uint32_t)(ebp + 0xfffff1fcu);
/* 7fe734: mov byte ptr [ebp - 4], 0x2a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2au);
/* 7fe738: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe73eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe73e: lea ecx, [ebp - 0x34c] */
  ecx = (uint32_t)(ebp + 0xfffffcb4u);
/* 7fe744: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 7fe748: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe74eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe74e: lea ecx, [ebp - 0xe84] */
  ecx = (uint32_t)(ebp + 0xfffff17cu);
/* 7fe754: mov byte ptr [ebp - 4], 0x28 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x28u);
/* 7fe758: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe75eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe75e: lea ecx, [ebp - 0x24c] */
  ecx = (uint32_t)(ebp + 0xfffffdb4u);
/* 7fe764: mov byte ptr [ebp - 4], 0x27 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x27u);
/* 7fe768: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe76eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe76e: lea ecx, [ebp - 0xf04] */
  ecx = (uint32_t)(ebp + 0xfffff0fcu);
/* 7fe774: mov byte ptr [ebp - 4], 0x26 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x26u);
/* 7fe778: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe77eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe77e: lea ecx, [ebp - 0x2cc] */
  ecx = (uint32_t)(ebp + 0xfffffd34u);
L_7fe784: /* 7fe784: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7fe788: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe78eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_7fe78e: /* 7fe78e: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 7fe791: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7fe793: lea ecx, [ebp - 0x484] */
  ecx = (uint32_t)(ebp + 0xfffffb7cu);
/* 7fe799: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fe79a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fe79c: mov ecx, esi */
  ecx = esi;
/* 7fe79e: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x7fe7a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fe7a1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7fe7a4: mov ecx, dword ptr [eax + 0xa8] */
  ecx = R32((uint32_t)(eax + 0xa8u));
/* 7fe7aa: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7fe7ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fe7ad: mov ecx, esi */
  ecx = esi;
/* 7fe7af: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0x7fe7b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fe7b2: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7fe7b5: movzx ecx, word ptr [eax + 0xc] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0xcu)));
/* 7fe7b9: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 7fe7bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fe7bd: movzx ecx, word ptr [eax + 0xa] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0xau)));
/* 7fe7c1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7fe7c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fe7c4: movzx ecx, word ptr [eax + 0x10] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x10u)));
/* 7fe7c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fe7c9: movzx ecx, word ptr [eax + 8] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x8u)));
/* 7fe7cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fe7ce: xor ecx, ecx */
  ecx = 0;
/* 7fe7d0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fe7d2: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7fe7d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7fe7d6: mov ecx, esi */
  ecx = esi;
/* 7fe7d8: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0x7fe7dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7fe7db: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7fe7de: add eax, 0xc8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7fe7e3: lea ecx, [ebp - 0x484] */
  ecx = (uint32_t)(ebp + 0xfffffb7cu);
/* 7fe7e9: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7fe7ec: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7fe7f0: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7fe7f6u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7fe7f6: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7fe7f9: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7fe7fc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7fe7fd: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7fe800: jmp 0x7fd640 */
  goto L_7fd640;
L_7fe805: /* 7fe805: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7fe808: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7fe809: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 7fe80c: jmp 0x7fd2c0 */
  goto L_7fd2c0;
L_7fe811: /* 7fe811: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fe814: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7fe817: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fe818: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fe819: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fe820: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fe821: mov esp, ebp */
  esp = ebp;
/* 7fe823: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fe824: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7fe827(void) {
  LOAD_REGS();
L_7fe827: /* 7fe827: mov edx, dword ptr [ebp - 0x410] */
  edx = R32((uint32_t)(ebp + 0xfffffbf0u));
/* 7fe82d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7fe832: lea eax, [ebp - 0x80] */
  eax = (uint32_t)(ebp + 0xffffff80u);
/* 7fe835: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fe836: mov dword ptr [ebp - 0x80], edx */
  W32((uint32_t)(ebp + 0xffffff80u), edx);
/* 7fe839: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fe83eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7fe83e(); return;
}

void f_7fe83e(void) {
  LOAD_REGS();
L_7fe83e: /* 7fe83e: push 0xa126b0 */
  { uint32_t v = 0xa126b0u; esp -= 4; W32(esp, v); }
/* 7fe843: push 0xae0b74 */
  { uint32_t v = 0xae0b74u; esp -= 4; W32(esp, v); }
/* 7fe848: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7fe84eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7fe84e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fe851: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fe853: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fe855: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fe85au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7fe85a: guest_badaddr(0x7fe85a); return;
}

void f_7fee40(void) {
  LOAD_REGS();
L_7fee40: /* 7fee40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7fee41: mov ebp, esp */
  ebp = esp;
/* 7fee43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fee45: push 0x9d1e60 */
  { uint32_t v = 0x9d1e60u; esp -= 4; W32(esp, v); }
/* 7fee4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7fee50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fee51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7fee58: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fee5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fee5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fee5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fee5e: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7fee61: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fee63: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7fee66: mov esi, ecx */
  esi = ecx;
/* 7fee68: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7fee6f: je 0x7fee9f */
  if (zf) goto L_7fee9f;
L_7fee71: /* 7fee71: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 7fee74: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fee76: je 0x7fee9f */
  if (zf) goto L_7fee9f;
L_7fee78: /* 7fee78: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7fee7eu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7fee7e: mov ecx, esi */
  ecx = esi;
/* 7fee80: mov ebx, eax */
  ebx = eax;
/* 7fee82: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7fee88u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7fee88: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7fee8a: jne 0x7fee9f */
  if (!zf) goto L_7fee9f;
L_7fee8c: /* 7fee8c: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 7fee8f: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7fee95u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7fee95: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 7fee98: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7fee9a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fee9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fee9c: call dword ptr [edx + 0x60] */
  { uint32_t t = R32((uint32_t)(edx + 0x60u)); esp -= 4; W32(esp, 0x7fee9fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7fee9f: /* 7fee9f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7feea2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7feea3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7feea4: mov ecx, esi */
  ecx = esi;
/* 7feea6: call dword ptr [0xcfa1f8] */
  esp -= 4; W32(esp, 0x7feeacu); SPILL(); f_4e2d42(); if (g_unwind) return; /* Core!?Rename@UObject@@UAEXPBGPAV1@@Z */ RELOAD();
/* 7feeac: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7feeaf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7feeb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7feeb1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7feeb8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7feeb9: mov esp, ebp */
  esp = ebp;
/* 7feebb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7feebc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7feebf(void) {
  LOAD_REGS();
L_7feebf: /* 7feebf: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7feec2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7feec7: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7feeca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7feecb: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7feece: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7feed3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7feed3(); return;
}

void f_7feed3(void) {
  LOAD_REGS();
L_7feed3: /* 7feed3: push 0xa126f8 */
  { uint32_t v = 0xa126f8u; esp -= 4; W32(esp, v); }
/* 7feed8: push 0xae0d18 */
  { uint32_t v = 0xae0d18u; esp -= 4; W32(esp, v); }
/* 7feedd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7feee3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7feee3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7feee6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7feee8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7feeea: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7feeefu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7feeef: guest_badaddr(0x7feeef); return;
}

void f_7fef20(void) {
  LOAD_REGS();
L_7fef20: /* 7fef20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7fef21: mov ebp, esp */
  ebp = esp;
/* 7fef23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fef25: push 0x9d1e70 */
  { uint32_t v = 0x9d1e70u; esp -= 4; W32(esp, v); }
/* 7fef2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7fef30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fef31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7fef38: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7fef3b: mov ecx, dword ptr [ecx + 0x54] */
  ecx = R32((uint32_t)(ecx + 0x54u));
/* 7fef3e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fef40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7fef41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7fef42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7fef43: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7fef46: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7fef4d: je 0x7fef54 */
  if (zf) goto L_7fef54;
L_7fef4f: /* 7fef4f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7fef51: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x7fef54u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7fef54: /* 7fef54: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fef57: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fef58: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fef59: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fef60: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fef61: mov esp, ebp */
  esp = ebp;
/* 7fef63: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fef64: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7fef67(void) {
  LOAD_REGS();
L_7fef67: /* 7fef67: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7fef6a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7fef6f: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7fef72: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7fef73: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7fef76: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fef7bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7fef7b(); return;
}

void f_7fef7b(void) {
  LOAD_REGS();
L_7fef7b: /* 7fef7b: push 0xa1271c */
  { uint32_t v = 0xa1271cu; esp -= 4; W32(esp, v); }
/* 7fef80: push 0xae0d30 */
  { uint32_t v = 0xae0d30u; esp -= 4; W32(esp, v); }
/* 7fef85: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7fef8bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7fef8b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fef8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fef90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fef92: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fef97u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7fef97: guest_badaddr(0x7fef97); return;
}

void f_7fefc0(void) {
  LOAD_REGS();
L_7fefc0: /* 7fefc0: mov eax, 1 */
  eax = 0x1u;
/* 7fefc5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7fefe0(void) {
  LOAD_REGS();
L_7fefe0: /* 7fefe0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7fefe2: call dword ptr [0xcfa380] */
  esp -= 4; W32(esp, 0x7fefe8u); SPILL(); f_4e3fda(); if (g_unwind) return; /* Core!?Shrink@FArray@@QAEXH@Z */ RELOAD();
/* 7fefe8: ret  */
  esp += 4; SPILL(); return;
}

void f_7ff000(void) {
  LOAD_REGS();
L_7ff000: /* 7ff000: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7ff002: call dword ptr [0xcfa380] */
  esp -= 4; W32(esp, 0x7ff008u); SPILL(); f_4e3fda(); if (g_unwind) return; /* Core!?Shrink@FArray@@QAEXH@Z */ RELOAD();
/* 7ff008: ret  */
  esp += 4; SPILL(); return;
}

void f_7ff020(void) {
  LOAD_REGS();
L_7ff020: /* 7ff020: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ff024: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ff025: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ff027: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff028: mov esi, ecx */
  esi = ecx;
/* 7ff02a: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x7ff030u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 7ff030: mov eax, esi */
  eax = esi;
/* 7ff032: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ff033: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ff050(void) {
  LOAD_REGS();
L_7ff050: /* 7ff050: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7ff054: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 7ff058: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ff05a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff05b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ff05c: call dword ptr [0xcfa388] */
  esp -= 4; W32(esp, 0x7ff062u); SPILL(); f_4e1a2d(); if (g_unwind) return; /* Core!?Insert@FArray@@QAEXHHH@Z */ RELOAD();
/* 7ff062: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ff080(void) {
  LOAD_REGS();
L_7ff080: /* 7ff080: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 7ff085: call dword ptr [0xcfa380] */
  esp -= 4; W32(esp, 0x7ff08bu); SPILL(); f_4e3fda(); if (g_unwind) return; /* Core!?Shrink@FArray@@QAEXH@Z */ RELOAD();
/* 7ff08b: ret  */
  esp += 4; SPILL(); return;
}

void f_7ff0a0(void) {
  LOAD_REGS();
L_7ff0a0: /* 7ff0a0: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7ff0a2: call dword ptr [0xcfa380] */
  esp -= 4; W32(esp, 0x7ff0a8u); SPILL(); f_4e3fda(); if (g_unwind) return; /* Core!?Shrink@FArray@@QAEXH@Z */ RELOAD();
/* 7ff0a8: ret  */
  esp += 4; SPILL(); return;
}

void f_7ff0c0(void) {
  LOAD_REGS();
L_7ff0c0: /* 7ff0c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ff0c4: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 7ff0c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff0c7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ff0cdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ff0cd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ff0e0(void) {
  LOAD_REGS();
L_7ff0e0: /* 7ff0e0: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 7ff0e2: call dword ptr [0xcfa380] */
  esp -= 4; W32(esp, 0x7ff0e8u); SPILL(); f_4e3fda(); if (g_unwind) return; /* Core!?Shrink@FArray@@QAEXH@Z */ RELOAD();
/* 7ff0e8: ret  */
  esp += 4; SPILL(); return;
}

void f_7ff100(void) {
  LOAD_REGS();
L_7ff100: /* 7ff100: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ff102: call dword ptr [0xcfa380] */
  esp -= 4; W32(esp, 0x7ff108u); SPILL(); f_4e3fda(); if (g_unwind) return; /* Core!?Shrink@FArray@@QAEXH@Z */ RELOAD();
/* 7ff108: ret  */
  esp += 4; SPILL(); return;
}

void f_7ff120(void) {
  LOAD_REGS();
L_7ff120: /* 7ff120: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 7ff122: call dword ptr [0xcfa380] */
  esp -= 4; W32(esp, 0x7ff128u); SPILL(); f_4e3fda(); if (g_unwind) return; /* Core!?Shrink@FArray@@QAEXH@Z */ RELOAD();
/* 7ff128: ret  */
  esp += 4; SPILL(); return;
}

void f_7ff140(void) {
  LOAD_REGS();
L_7ff140: /* 7ff140: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7ff144: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 7ff148: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 7ff14a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff14b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ff14c: call dword ptr [0xcfa388] */
  esp -= 4; W32(esp, 0x7ff152u); SPILL(); f_4e1a2d(); if (g_unwind) return; /* Core!?Insert@FArray@@QAEXHHH@Z */ RELOAD();
/* 7ff152: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ff170(void) {
  LOAD_REGS();
L_7ff170: /* 7ff170: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ff174: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ff176: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff177: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ff17du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ff17d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ff190(void) {
  LOAD_REGS();
L_7ff190: /* 7ff190: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7ff194: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 7ff198: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ff19a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff19b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ff19c: call dword ptr [0xcfa388] */
  esp -= 4; W32(esp, 0x7ff1a2u); SPILL(); f_4e1a2d(); if (g_unwind) return; /* Core!?Insert@FArray@@QAEXHHH@Z */ RELOAD();
/* 7ff1a2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ff1c0(void) {
  LOAD_REGS();
L_7ff1c0: /* 7ff1c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ff1c1: mov esi, ecx */
  esi = ecx;
/* 7ff1c3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7ff1c9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7ff1c9: mov eax, esi */
  eax = esi;
/* 7ff1cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ff1cc: ret  */
  esp += 4; SPILL(); return;
}

void f_7ff1e0(void) {
  LOAD_REGS();
L_7ff1e0: /* 7ff1e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ff1e1: mov esi, ecx */
  esi = ecx;
/* 7ff1e3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7ff1e9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7ff1e9: mov eax, esi */
  eax = esi;
/* 7ff1eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ff1ec: ret  */
  esp += 4; SPILL(); return;
}

void f_7ff200(void) {
  LOAD_REGS();
L_7ff200: /* 7ff200: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ff204: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ff206: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff207: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ff20du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ff20d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ff220(void) {
  LOAD_REGS();
L_7ff220: /* 7ff220: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ff224: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7ff226: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff227: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7ff22du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7ff22d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ff240(void) {
  LOAD_REGS();
L_7ff240: /* 7ff240: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ff244: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 7ff246: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff247: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7ff24du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7ff24d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ff260(void) {
  LOAD_REGS();
L_7ff260: /* 7ff260: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ff264: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 7ff266: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff267: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7ff26du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7ff26d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ff280(void) {
  LOAD_REGS();
L_7ff280: /* 7ff280: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ff284: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 7ff286: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff287: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7ff28du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7ff28d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ff2a0(void) {
  LOAD_REGS();
L_7ff2a0: /* 7ff2a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ff2a4: push 0xa4 */
  { uint32_t v = 0xa4u; esp -= 4; W32(esp, v); }
/* 7ff2a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff2aa: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7ff2b0u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7ff2b0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ff2d0(void) {
  LOAD_REGS();
L_7ff2d0: /* 7ff2d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ff2d4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ff2d6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7ff2d9: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7ff2dc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ff2de: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ff300(void) {
  LOAD_REGS();
L_7ff300: /* 7ff300: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ff304: push 0xc0 */
  { uint32_t v = 0xc0u; esp -= 4; W32(esp, v); }
/* 7ff309: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff30a: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7ff310u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7ff310: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ff330(void) {
  LOAD_REGS();
L_7ff330: /* 7ff330: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ff334: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ff336: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 7ff339: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ff33b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ff350(void) {
  LOAD_REGS();
L_7ff350: /* 7ff350: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ff354: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7ff356: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff357: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7ff35du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7ff35d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ff370(void) {
  LOAD_REGS();
L_7ff370: /* 7ff370: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ff374: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 7ff376: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff377: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7ff37du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7ff37d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ff390(void) {
  LOAD_REGS();
L_7ff390: /* 7ff390: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ff394: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 7ff396: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff397: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7ff39du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7ff39d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ff3b0(void) {
  LOAD_REGS();
L_7ff3b0: /* 7ff3b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ff3b4: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 7ff3b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff3b7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x7ff3bdu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 7ff3bd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ff3d0(void) {
  LOAD_REGS();
L_7ff3d0: /* 7ff3d0: mov eax, 1 */
  eax = 0x1u;
/* 7ff3d5: ret  */
  esp += 4; SPILL(); return;
}

void f_7ff3f0(void) {
  LOAD_REGS();
L_7ff3f0: /* 7ff3f0: mov eax, 1 */
  eax = 0x1u;
/* 7ff3f5: ret  */
  esp += 4; SPILL(); return;
}

void f_7ff410(void) {
  LOAD_REGS();
L_7ff410: /* 7ff410: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ff411: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7ff415: push 0xc0 */
  { uint32_t v = 0xc0u; esp -= 4; W32(esp, v); }
/* 7ff41a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ff41c: mov ecx, esi */
  ecx = esi;
/* 7ff41e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ff424u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ff424: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7ff426: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7ff429: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7ff42c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ff42e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ff42f: ret  */
  esp += 4; SPILL(); return;
}

void f_7ff440(void) {
  LOAD_REGS();
L_7ff440: /* 7ff440: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ff441: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7ff445: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7ff447: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ff449: mov ecx, esi */
  ecx = esi;
/* 7ff44b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ff451u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ff451: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 7ff454: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ff456: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ff457: ret  */
  esp += 4; SPILL(); return;
}

void f_7ff470(void) {
  LOAD_REGS();
L_7ff470: /* 7ff470: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ff471: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7ff475: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ff476: mov ecx, esi */
  ecx = esi;
/* 7ff478: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x7ff47eu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 7ff47e: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
/* 7ff484: cmp eax, 0x3d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ff487: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7ff48b: jg 0x7ff499 */
  if ((!zf && sf == of)) goto L_7ff499;
L_7ff48d: /* 7ff48d: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 7ff490: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ff491: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 7ff494: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ff495: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff496: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ff497: jmp 0x7ff4ad */
  goto L_7ff4ad;
L_7ff499: /* 7ff499: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 7ff49c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ff49d: lea edx, [eax + 8] */
  edx = (uint32_t)(eax + 0x8u);
/* 7ff4a0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ff4a1: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 7ff4a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ff4a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff4a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ff4a7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ff4a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ff4a9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff4ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_7ff4ad: /* 7ff4ad: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ff4afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ff4af: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff4b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff4b3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ff4b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ff4b5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff4b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff4b9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ff4bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ff4bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff4be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ff4bf: mov eax, esi */
  eax = esi;
/* 7ff4c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ff4c2: ret  */
  esp += 4; SPILL(); return;
}

void f_7ff4f0(void) {
  LOAD_REGS();
L_7ff4f0: /* 7ff4f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ff4f1: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7ff4f5: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 7ff4f9: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 7ff4fb: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 7ff4fd: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7ff501: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7ff504: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 7ff507: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 7ff50b: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7ff50e: mov eax, 0x7fffffff */
  eax = 0x7fffffffu;
/* 7ff513: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 7ff516: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 7ff51a: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7ff51c: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 7ff520: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 7ff524: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 7ff528: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7ff52a: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 7ff52e: and dword ptr [esp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esp + 0x8u), r);
  }
/* 7ff532: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 7ff536: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 7ff53a: fadd dword ptr [esp] */
  ST0 = ST0 + (F32((uint32_t)(esp)));
/* 7ff53e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7ff53f: ret  */
  esp += 4; SPILL(); return;
}

void f_7ff560(void) {
  LOAD_REGS();
L_7ff560: /* 7ff560: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ff561: mov ebp, esp */
  ebp = esp;
/* 7ff563: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ff565: push 0x9d1e80 */
  { uint32_t v = 0x9d1e80u; esp -= 4; W32(esp, v); }
/* 7ff56a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ff570: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff571: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ff578: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ff57b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ff57e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7ff580: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ff581: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ff582: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7ff585: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ff586: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ff589: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ff58a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ff591: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7ff594u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ff594: mov edi, dword ptr [0xcfa414] */
  edi = R32((uint32_t)(0xcfa414u));
/* 7ff59a: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 7ff59d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ff59e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff59f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ff5a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ff5a1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff5a4: lea edx, [esi + 0x10] */
  edx = (uint32_t)(esi + 0x10u);
/* 7ff5a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ff5a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff5a9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ff5abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ff5ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff5ae: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ff5b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ff5b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff5b3: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x7ff5b9u); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 7ff5b9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ff5bc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff5bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ff5c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ff5c1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ff5c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ff5c9: mov esp, ebp */
  esp = ebp;
/* 7ff5cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ff5cc: ret  */
  esp += 4; SPILL(); return;
}

void f_7ff5cd(void) {
  LOAD_REGS();
L_7ff5cd: /* 7ff5cd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ff5d0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ff5d5: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7ff5d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ff5d9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7ff5dc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ff5e1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ff5e1(); return;
}

void f_7ff5e1(void) {
  LOAD_REGS();
L_7ff5e1: /* 7ff5e1: push 0xa12740 */
  { uint32_t v = 0xa12740u; esp -= 4; W32(esp, v); }
/* 7ff5e6: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7ff5eb: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ff5f1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ff5f1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff5f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ff5f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ff5f8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ff5fdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ff5fd: guest_badaddr(0x7ff5fd); return;
}

void f_7ff630(void) {
  LOAD_REGS();
L_7ff630: /* 7ff630: mov eax, ecx */
  eax = ecx;
/* 7ff632: ret  */
  esp += 4; SPILL(); return;
}

void f_7ff650(void) {
  LOAD_REGS();
L_7ff650: /* 7ff650: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ff651: mov ebp, esp */
  ebp = esp;
/* 7ff653: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ff655: push 0x9d1e90 */
  { uint32_t v = 0x9d1e90u; esp -= 4; W32(esp, v); }
/* 7ff65a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ff660: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff661: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ff668: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ff66b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ff66e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ff66f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ff670: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7ff673: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ff674: mov edi, dword ptr [0xcfa1f0] */
  edi = R32((uint32_t)(0xcfa1f0u));
/* 7ff67a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ff67d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ff67e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff67f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ff686: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ff688u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ff688: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff68b: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7ff68e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ff68f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff690: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ff692u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ff692: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff695: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 7ff698: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ff699: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff69a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ff69cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ff69c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff69f: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ff6a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ff6a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff6a4: call dword ptr [0xcfa414] */
  esp -= 4; W32(esp, 0x7ff6aau); SPILL(); f_4e2eaf(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AA_K@Z */ RELOAD();
/* 7ff6aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ff6ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff6b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ff6b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ff6b2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ff6b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ff6ba: mov esp, ebp */
  esp = ebp;
/* 7ff6bc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ff6bd: ret  */
  esp += 4; SPILL(); return;
}

void f_7ff6be(void) {
  LOAD_REGS();
L_7ff6be: /* 7ff6be: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ff6c1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ff6c6: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7ff6c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ff6ca: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7ff6cd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ff6d2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ff6d2(); return;
}

void f_7ff6d2(void) {
  LOAD_REGS();
L_7ff6d2: /* 7ff6d2: push 0xa1276c */
  { uint32_t v = 0xa1276cu; esp -= 4; W32(esp, v); }
/* 7ff6d7: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7ff6dc: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ff6e2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ff6e2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff6e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ff6e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ff6e9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ff6eeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ff6ee: guest_badaddr(0x7ff6ee); return;
}

void f_7ff720(void) {
  LOAD_REGS();
L_7ff720: /* 7ff720: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ff721: mov ebp, esp */
  ebp = esp;
/* 7ff723: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ff725: push 0x9d1ea0 */
  { uint32_t v = 0x9d1ea0u; esp -= 4; W32(esp, v); }
/* 7ff72a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ff730: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff731: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ff738: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ff73b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ff73c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ff73d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ff73e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7ff741: mov ecx, edi */
  ecx = edi;
/* 7ff743: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ff746: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ff74d: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x7ff753u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 7ff753: cmp eax, 0x5c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ff756: jge 0x7ff78c */
  if ((sf == of)) goto L_7ff78c;
L_7ff758: /* 7ff758: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7ff75b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff75c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ff75d: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x7ff763u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 7ff763: mov ebx, dword ptr [0xcfa1b4] */
  ebx = R32((uint32_t)(0xcfa1b4u));
/* 7ff769: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff76c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7ff76f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ff770: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ff771: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ff773u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ff773: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff776: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 7ff779: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ff77a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff77b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ff77du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ff77d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff780: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7ff783: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ff784: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff785: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ff787u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ff787: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7ff78a: jmp 0x7ff7e3 */
  goto L_7ff7e3;
L_7ff78c: /* 7ff78c: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7ff78f: mov ebx, dword ptr [0xcfa280] */
  ebx = R32((uint32_t)(0xcfa280u));
/* 7ff795: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ff796: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ff797: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ff799u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ff799: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff79c: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 7ff79f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ff7a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff7a1: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ff7a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ff7a3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff7a6: lea eax, [esi + 8] */
  eax = (uint32_t)(esi + 0x8u);
/* 7ff7a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff7aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ff7ab: call 0x6c67da */
  esp -= 4; W32(esp, 0x7ff7b0u); SPILL(); f_6c67da(); if (g_unwind) return; RELOAD();
/* 7ff7b0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff7b3: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 7ff7b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ff7b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff7b8: call 0x6c67da */
  esp -= 4; W32(esp, 0x7ff7bdu); SPILL(); f_6c67da(); if (g_unwind) return; RELOAD();
/* 7ff7bd: mov ebx, dword ptr [0xcfa1b8] */
  ebx = R32((uint32_t)(0xcfa1b8u));
/* 7ff7c3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff7c6: lea edx, [esi + 0xac] */
  edx = (uint32_t)(esi + 0xacu);
/* 7ff7cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ff7cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ff7ce: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ff7d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ff7d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff7d3: lea ecx, [esi + 0xad] */
  ecx = (uint32_t)(esi + 0xadu);
/* 7ff7d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ff7da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff7db: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ff7ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ff7dd: mov ebx, dword ptr [0xcfa1b4] */
  ebx = R32((uint32_t)(0xcfa1b4u));
L_7ff7e3: /* 7ff7e3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff7e6: mov ecx, edi */
  ecx = edi;
/* 7ff7e8: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x7ff7eeu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 7ff7ee: cmp eax, 0x60 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ff7f1: jl 0x7ff85e */
  if ((sf != of)) goto L_7ff85e;
L_7ff7f3: /* 7ff7f3: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7ff7f6: lea edi, [esi + 0x88] */
  edi = (uint32_t)(esi + 0x88u);
/* 7ff7fc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ff7fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ff7fe: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ff800u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ff800: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff803: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 7ff806: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ff807: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff808: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ff80au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ff80a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff80d: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7ff810: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ff811: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff812: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ff814u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ff814: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff817: lea edi, [esi + 0x94] */
  edi = (uint32_t)(esi + 0x94u);
/* 7ff81d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ff81e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff81f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ff821u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ff821: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff824: lea edx, [edi + 4] */
  edx = (uint32_t)(edi + 0x4u);
/* 7ff827: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ff828: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff829: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ff82bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ff82b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff82e: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7ff831: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ff832: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff833: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ff835u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ff835: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff838: lea edi, [esi + 0xa0] */
  edi = (uint32_t)(esi + 0xa0u);
/* 7ff83e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ff83f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff840: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ff842u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ff842: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff845: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 7ff848: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ff849: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff84a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ff84cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ff84c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff84f: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7ff852: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ff853: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ff854: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ff856u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ff856: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ff859: jmp 0x7ffadd */
  goto L_7ffadd;
L_7ff85e: /* 7ff85e: mov ecx, edi */
  ecx = edi;
/* 7ff860: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7ff866u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7ff866: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ff868: je 0x7ffae0 */
  if (zf) goto L_7ffae0;
L_7ff86e: /* 7ff86e: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 7ff871: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 7ff874: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7ff877: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 7ff87e: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 7ff885: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 7ff88c: mov dword ptr [ebp - 0x28], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x3f800000u);
/* 7ff893: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7ff896: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ff899: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ff89c: lea edi, [ebp - 0x44] */
  edi = (uint32_t)(ebp + 0xffffffbcu);
/* 7ff89f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7ff8a1: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 7ff8a3: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7ff8a5: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 7ff8a8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7ff8aa: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 7ff8ad: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7ff8af: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 7ff8b2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7ff8b5: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 7ff8b8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7ff8bb: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7ff8be: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7ff8c1: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7ff8c4: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7ff8c7: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7ff8ca: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7ff8cc: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7ff8ce: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7ff8d0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7ff8d2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7ff8d4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7ff8d7: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7ff8da: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7ff8dd: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7ff8e0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7ff8e3: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7ff8e6: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7ff8e9: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7ff8ec: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7ff8ee: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7ff8f0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7ff8f2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7ff8f4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7ff8f6: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7ff8f9: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7ff8fc: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7ff8ff: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7ff902: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7ff905: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7ff908: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7ff90b: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7ff90e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7ff910: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7ff912: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7ff914: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7ff916: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7ff918: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7ff91a: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7ff91c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7ff91e: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7ff921: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7ff924: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7ff927: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7ff92a: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7ff92d: lea edx, [eax + 0x88] */
  edx = (uint32_t)(eax + 0x88u);
/* 7ff933: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 7ff935: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7ff938: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 7ff93b: mov esi, dword ptr [ebp - 0x3c] */
  esi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7ff93e: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 7ff941: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 7ff944: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7ff947: mov dword ptr [ebp - 0x34], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x3f800000u);
/* 7ff94e: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 7ff955: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 7ff95c: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7ff963: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7ff966: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ff969: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ff96c: lea edi, [ebp - 0x44] */
  edi = (uint32_t)(ebp + 0xffffffbcu);
/* 7ff96f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7ff971: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 7ff973: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7ff975: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 7ff978: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7ff97a: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 7ff97d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7ff97f: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 7ff982: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7ff985: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 7ff988: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7ff98b: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7ff98e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7ff991: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7ff994: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7ff997: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7ff99a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7ff99c: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7ff99e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7ff9a0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7ff9a2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7ff9a4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7ff9a7: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7ff9aa: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7ff9ad: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7ff9b0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7ff9b3: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7ff9b6: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7ff9b9: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7ff9bc: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7ff9be: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7ff9c0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7ff9c2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7ff9c4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7ff9c6: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7ff9c9: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7ff9cc: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7ff9cf: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7ff9d2: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7ff9d5: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7ff9d8: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7ff9db: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7ff9de: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7ff9e0: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7ff9e2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7ff9e4: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7ff9e6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7ff9e8: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7ff9ea: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7ff9ec: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7ff9ee: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7ff9f1: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7ff9f4: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7ff9f7: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7ff9fa: lea edx, [eax + 0x94] */
  edx = (uint32_t)(eax + 0x94u);
/* 7ffa00: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 7ffa02: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7ffa05: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 7ffa08: mov esi, dword ptr [ebp - 0x3c] */
  esi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7ffa0b: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7ffa0e: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7ffa11: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 7ffa14: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 7ffa1b: mov dword ptr [ebp - 0x30], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x3f800000u);
/* 7ffa22: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 7ffa29: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7ffa30: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7ffa33: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ffa36: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ffa39: lea edi, [ebp - 0x44] */
  edi = (uint32_t)(ebp + 0xffffffbcu);
/* 7ffa3c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7ffa3e: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 7ffa40: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7ffa42: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 7ffa45: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7ffa47: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 7ffa4a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7ffa4c: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 7ffa4f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7ffa52: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 7ffa55: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7ffa58: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7ffa5b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7ffa5e: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7ffa61: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7ffa64: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7ffa67: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7ffa69: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7ffa6b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7ffa6d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7ffa6f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7ffa71: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7ffa74: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7ffa77: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7ffa7a: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7ffa7d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7ffa80: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7ffa83: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7ffa86: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7ffa89: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7ffa8b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7ffa8d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7ffa8f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7ffa91: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7ffa93: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7ffa96: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7ffa99: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7ffa9c: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7ffa9f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7ffaa2: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7ffaa5: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7ffaa8: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7ffaab: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7ffaad: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7ffaaf: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7ffab1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7ffab3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7ffab5: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7ffab7: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7ffab9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7ffabb: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7ffabe: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7ffac1: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7ffac4: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7ffac7: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7ffaca: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7ffacd: add eax, 0xa0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ffad2: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7ffad4: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7ffad7: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7ffada: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_7ffadd: /* 7ffadd: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_7ffae0: /* 7ffae0: lea eax, [esi + 0xb0] */
  eax = (uint32_t)(esi + 0xb0u);
/* 7ffae6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ffae7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ffae8: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7ffaeeu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7ffaee: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ffaf1: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 7ffaf7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ffaf8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ffaf9: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7ffaffu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7ffaff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ffb02: mov ecx, edi */
  ecx = edi;
/* 7ffb04: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x7ffb0au); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 7ffb0a: cmp eax, 0x5c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ffb0d: jge 0x7ffb37 */
  if ((sf == of)) goto L_7ffb37;
L_7ffb0f: /* 7ffb0f: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7ffb12: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ffb13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ffb14: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7ffb1b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ffb1du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ffb1d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ffb20: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7ffb23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ffb24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ffb25: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ffb27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ffb27: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ffb2a: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7ffb2d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ffb2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ffb2f: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x7ffb35u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 7ffb35: jmp 0x7ffb54 */
  goto L_7ffb54;
L_7ffb37: /* 7ffb37: mov ebx, dword ptr [0xcfa1f0] */
  ebx = R32((uint32_t)(0xcfa1f0u));
/* 7ffb3d: lea eax, [esi + 0xb8] */
  eax = (uint32_t)(esi + 0xb8u);
/* 7ffb43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ffb44: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ffb45: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ffb47u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ffb47: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ffb4a: add esi, 0xbc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ffb50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ffb51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ffb52: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ffb54u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ffb54: /* 7ffb54: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ffb57: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ffb5a: mov eax, edi */
  eax = edi;
/* 7ffb5c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ffb5d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ffb5e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ffb65: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ffb66: mov esp, ebp */
  esp = ebp;
/* 7ffb68: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ffb69: ret  */
  esp += 4; SPILL(); return;
}

void f_7ffb6a(void) {
  LOAD_REGS();
L_7ffb6a: /* 7ffb6a: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7ffb6d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ffb72: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7ffb75: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ffb76: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7ffb79: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ffb7eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ffb7e(); return;
}

void f_7ffb7e(void) {
  LOAD_REGS();
L_7ffb7e: /* 7ffb7e: push 0xa12780 */
  { uint32_t v = 0xa12780u; esp -= 4; W32(esp, v); }
/* 7ffb83: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7ffb88: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ffb8eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ffb8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ffb91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ffb93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ffb95: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ffb9au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ffb9a: guest_badaddr(0x7ffb9a); return;
}

void f_7ffcc0(void) {
  LOAD_REGS();
L_7ffcc0: /* 7ffcc0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7ffcc4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7ffcc8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7ffcca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ffccb: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7ffcceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ffcce: ret  */
  esp += 4; SPILL(); return;
}

void f_7ffce0(void) {
  LOAD_REGS();
L_7ffce0: /* 7ffce0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7ffce4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7ffce8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7ffcea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ffceb: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7ffceeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ffcee: ret  */
  esp += 4; SPILL(); return;
}

void f_7ffd00(void) {
  LOAD_REGS();
L_7ffd00: /* 7ffd00: mov eax, ecx */
  eax = ecx;
/* 7ffd02: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7ffd06: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 7ffd09: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7ffd0d: lea edx, [eax + 0x10] */
  edx = (uint32_t)(eax + 0x10u);
/* 7ffd10: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7ffd12: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 7ffd16: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7ffd19: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7ffd1d: mov dword ptr [eax], 0xa127a8 */
  W32((uint32_t)(eax), 0xa127a8u);
/* 7ffd23: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7ffd26: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7ffd40(void) {
  LOAD_REGS();
L_7ffd40: /* 7ffd40: mov eax, 0xae0fe0 */
  eax = 0xae0fe0u;
/* 7ffd45: ret  */
  esp += 4; SPILL(); return;
}

void f_7ffd60(void) {
  LOAD_REGS();
L_7ffd60: /* 7ffd60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ffd61: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7ffd65: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ffd66: mov edi, dword ptr [0xcfa340] */
  edi = R32((uint32_t)(0xcfa340u));
/* 7ffd6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ffd6d: push 0xae0fe0 */
  { uint32_t v = 0xae0fe0u; esp -= 4; W32(esp, v); }
/* 7ffd72: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ffd74u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ffd74: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ffd77: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ffd79: je 0x7ffd91 */
  if (zf) goto L_7ffd91;
L_7ffd7b: /* 7ffd7b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ffd7c: push 0xac3a48 */
  { uint32_t v = 0xac3a48u; esp -= 4; W32(esp, v); }
/* 7ffd81: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ffd83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ffd83: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ffd86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ffd88: je 0x7ffd91 */
  if (zf) goto L_7ffd91;
L_7ffd8a: /* 7ffd8a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ffd8b: xor eax, eax */
  eax = 0;
/* 7ffd8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ffd8e: ret 4 */
  esp += 8; SPILL(); return;
L_7ffd91: /* 7ffd91: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ffd92: mov eax, 1 */
  eax = 0x1u;
/* 7ffd97: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ffd98: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ffdb0(void) {
  LOAD_REGS();
L_7ffdb0: /* 7ffdb0: mov eax, ecx */
  eax = ecx;
/* 7ffdb2: inc dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 7ffdb5: ret  */
  esp += 4; SPILL(); return;
}

void f_7ffdd0(void) {
  LOAD_REGS();
L_7ffdd0: /* 7ffdd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ffdd1: mov ebp, esp */
  ebp = esp;
/* 7ffdd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ffdd5: push 0x9d1eb0 */
  { uint32_t v = 0x9d1eb0u; esp -= 4; W32(esp, v); }
/* 7ffdda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ffde0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ffde1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ffde8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ffdeb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ffdec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ffded: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7ffdf0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7ffdf2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ffdf3: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7ffdf6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ffdf9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ffdfa: mov ecx, esi */
  ecx = esi;
/* 7ffdfc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ffe03: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7ffe06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ffe06: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 7ffe09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ffe0a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ffe0b: call dword ptr [0xcfa27c] */
  esp -= 4; W32(esp, 0x7ffe11u); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* 7ffe11: mov ebx, dword ptr [0xcfa1f0] */
  ebx = R32((uint32_t)(0xcfa1f0u));
/* 7ffe17: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ffe1a: lea edx, [edi + 8] */
  edx = (uint32_t)(edi + 0x8u);
/* 7ffe1d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ffe1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ffe1f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ffe21u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ffe21: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ffe24: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* 7ffe27: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ffe28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ffe29: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ffe2bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ffe2b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ffe2e: lea edx, [edi + 0x10] */
  edx = (uint32_t)(edi + 0x10u);
/* 7ffe31: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ffe32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ffe33: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ffe35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ffe35: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ffe38: lea ecx, [edi + 0x14] */
  ecx = (uint32_t)(edi + 0x14u);
/* 7ffe3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ffe3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ffe3d: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ffe3fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ffe3f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ffe42: mov ecx, esi */
  ecx = esi;
/* 7ffe44: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x7ffe4au); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 7ffe4a: cmp eax, 0x65 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x65u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ffe4d: jge 0x7ffe60 */
  if ((sf == of)) goto L_7ffe60;
L_7ffe4f: /* 7ffe4f: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7ffe52: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ffe53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ffe54: mov dword ptr [ebp + 8], 0xffffffff */
  W32((uint32_t)(ebp + 0x8u), 0xffffffffu);
/* 7ffe5b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ffe5du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ffe5d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ffe60: /* 7ffe60: lea eax, [edi + 0x18] */
  eax = (uint32_t)(edi + 0x18u);
/* 7ffe63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ffe64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ffe65: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ffe67u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ffe67: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ffe6a: mov ecx, esi */
  ecx = esi;
/* 7ffe6c: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x7ffe72u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 7ffe72: cmp eax, 0x4e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4eu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ffe75: jge 0x7ffe99 */
  if ((sf == of)) goto L_7ffe99;
L_7ffe77: /* 7ffe77: mov ebx, dword ptr [0xcfaabc] */
  ebx = R32((uint32_t)(0xcfaabcu));
/* 7ffe7d: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7ffe80: xor eax, eax */
  eax = 0;
/* 7ffe82: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ffe83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ffe84: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7ffe87: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7ffe8a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ffe8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ffe8c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ffe8f: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7ffe92: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ffe93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ffe94: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ffe96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ffe96: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ffe99: /* 7ffe99: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7ffe9b: lea ecx, [edi + 0x1c] */
  ecx = (uint32_t)(edi + 0x1cu);
/* 7ffe9e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ffe9f: mov ecx, esi */
  ecx = esi;
/* 7ffea1: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x7ffea4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ffea4: mov ecx, esi */
  ecx = esi;
/* 7ffea6: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x7ffeacu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 7ffeac: cmp eax, 0x56 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x56u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ffeaf: mov ebx, dword ptr [0xcfa1b4] */
  ebx = R32((uint32_t)(0xcfa1b4u));
/* 7ffeb5: jle 0x7ffee2 */
  if ((zf || sf != of)) goto L_7ffee2;
L_7ffeb7: /* 7ffeb7: add edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7ffeba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ffebb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ffebc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ffebeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ffebe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ffec1: lea edx, [edi + 4] */
  edx = (uint32_t)(edi + 0x4u);
/* 7ffec4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ffec5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ffec6: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ffec8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ffec8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ffecb: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 7ffece: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ffecf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ffed0: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ffed2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ffed2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ffed5: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7ffed8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ffed9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ffeda: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ffedcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ffedc: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7ffedf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ffee2: /* 7ffee2: mov ecx, esi */
  ecx = esi;
/* 7ffee4: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x7ffeeau); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 7ffeea: cmp eax, 0x6a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6au);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ffeed: jl 0x7fff0c */
  if ((sf != of)) goto L_7fff0c;
L_7ffeef: /* 7ffeef: add edi, 0x3c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7ffef2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ffef3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ffef4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7ffef6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ffef6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ffef9: mov eax, esi */
  eax = esi;
/* 7ffefb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ffefe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fff05: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fff06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fff07: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fff08: mov esp, ebp */
  esp = ebp;
/* 7fff0a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fff0b: ret  */
  esp += 4; SPILL(); return;
L_7fff0c: /* 7fff0c: mov ecx, esi */
  ecx = esi;
/* 7fff0e: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7fff14u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7fff14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7fff16: je 0x7fff1f */
  if (zf) goto L_7fff1f;
L_7fff18: /* 7fff18: mov dword ptr [edi + 0x3c], 0x42000000 */
  W32((uint32_t)(edi + 0x3cu), 0x42000000u);
L_7fff1f: /* 7fff1f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7fff22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7fff23: mov eax, esi */
  eax = esi;
/* 7fff25: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7fff26: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7fff2d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7fff2e: mov esp, ebp */
  esp = ebp;
/* 7fff30: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7fff31: ret  */
  esp += 4; SPILL(); return;
}

void f_7fff32(void) {
  LOAD_REGS();
L_7fff32: /* 7fff32: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7fff35: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7fff3a: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7fff3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7fff3e: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7fff41: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fff46u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7fff46(); return;
}

void f_7fff46(void) {
  LOAD_REGS();
L_7fff46: /* 7fff46: push 0xa127bc */
  { uint32_t v = 0xa127bcu; esp -= 4; W32(esp, v); }
/* 7fff4b: push 0xae0cd0 */
  { uint32_t v = 0xae0cd0u; esp -= 4; W32(esp, v); }
/* 7fff50: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7fff56u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7fff56: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7fff59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fff5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7fff5d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7fff62u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7fff62: guest_badaddr(0x7fff62); return;
}

void f_7fffe0(void) {
  LOAD_REGS();
L_7fffe0: /* 7fffe0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7fffe1: mov ebp, esp */
  ebp = esp;
/* 7fffe3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7fffe5: push 0x9d1ec0 */
  { uint32_t v = 0x9d1ec0u; esp -= 4; W32(esp, v); }
/* 7fffea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ffff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ffff1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ffff8: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ffffb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ffffc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ffffd: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 800000: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 800001: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 800004: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 800007: lea eax, [esi + 0x100] */
  eax = (uint32_t)(esi + 0x100u);
/* 80000d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80000e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80000f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 800016: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x80001cu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 80001c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80001f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 800020: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 800021: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
/* 800027: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x800029u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 800029: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80002c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 80002f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 800030: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800031: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x800033u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 800033: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800036: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 800039: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80003a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80003b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x80003du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80003d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800040: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 800043: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 800044: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800045: lea ebx, [esi + 0x18] */
  ebx = (uint32_t)(esi + 0x18u);
/* 800048: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x80004au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80004a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80004d: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 800050: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 800051: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800052: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x800054u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 800054: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800057: lea edx, [esi + 0x14] */
  edx = (uint32_t)(esi + 0x14u);
/* 80005a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80005b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80005c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x80005eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80005e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800061: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 800062: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800063: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x800065u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 800065: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800068: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 80006b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80006c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80006d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x80006fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80006f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800072: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 800075: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 800076: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800077: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x800079u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 800079: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80007c: lea ebx, [esi + 0x24] */
  ebx = (uint32_t)(esi + 0x24u);
/* 80007f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 800080: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800081: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x800083u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 800083: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800086: lea edx, [ebx + 4] */
  edx = (uint32_t)(ebx + 0x4u);
/* 800089: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80008a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80008b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x80008du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80008d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800090: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 800093: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 800094: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800095: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x800097u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 800097: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80009a: xor eax, eax */
  eax = 0;
/* 80009c: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 80009f: nop  */
L_8000a0: /* 8000a0: cmp eax, dword ptr [esi + 0x100] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x100u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8000a6: jge 0x8000d6 */
  if ((sf == of)) goto L_8000d6;
L_8000a8: /* 8000a8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8000ab: lea eax, [eax + eax*2 + 0xc] */
  eax = (uint32_t)(eax + eax*2 + 0xcu);
/* 8000af: lea ebx, [esi + eax*4] */
  ebx = (uint32_t)(esi + eax*4);
/* 8000b2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8000b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8000b4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8000b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8000b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8000b9: lea edx, [ebx + 4] */
  edx = (uint32_t)(ebx + 0x4u);
/* 8000bc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8000bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8000be: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8000c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8000c0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8000c3: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8000c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8000c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8000c8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8000cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8000ca: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8000cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8000d0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8000d1: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8000d4: jmp 0x8000a0 */
  goto L_8000a0;
L_8000d6: /* 8000d6: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8000d9: lea eax, [esi + 0xf0] */
  eax = (uint32_t)(esi + 0xf0u);
/* 8000df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8000e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8000e1: call dword ptr [0xcfa27c] */
  esp -= 4; W32(esp, 0x8000e7u); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* 8000e7: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8000e9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8000ec: lea eax, [esi + 0xf4] */
  eax = (uint32_t)(esi + 0xf4u);
/* 8000f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8000f3: mov ecx, ebx */
  ecx = ebx;
/* 8000f5: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8000f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8000f8: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8000fa: lea ecx, [esi + 0xf8] */
  ecx = (uint32_t)(esi + 0xf8u);
/* 800100: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 800101: mov ecx, eax */
  ecx = eax;
/* 800103: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x800106u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 800106: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 800108: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* 80010e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80010f: mov ecx, eax */
  ecx = eax;
/* 800111: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x800114u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 800114: lea edx, [esi + 0x104] */
  edx = (uint32_t)(esi + 0x104u);
/* 80011a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80011b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80011c: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x800122u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 800122: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800125: lea ecx, [esi + 0x108] */
  ecx = (uint32_t)(esi + 0x108u);
/* 80012b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80012c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80012d: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x800133u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 800133: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800136: mov ecx, ebx */
  ecx = ebx;
/* 800138: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x80013eu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 80013e: cmp eax, 0x4e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4eu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 800141: jge 0x800229 */
  if ((sf == of)) goto L_800229;
L_800147: /* 800147: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 80014a: xor eax, eax */
  eax = 0;
/* 80014c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80014d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80014e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 800151: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 800154: call dword ptr [0xcfaabc] */
  esp -= 4; W32(esp, 0x80015au); SPILL(); f_4e40ed(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAF@Z */ RELOAD();
/* 80015a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80015d: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 800160: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 800161: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800162: call dword ptr [0xcfaabc] */
  esp -= 4; W32(esp, 0x800168u); SPILL(); f_4e40ed(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAF@Z */ RELOAD();
/* 800168: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80016b: mov ecx, ebx */
  ecx = ebx;
/* 80016d: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x800173u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 800173: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 800175: je 0x800229 */
  if (zf) goto L_800229;
L_80017b: /* 80017b: movsx edx, word ptr [ebp - 0x14] */
  edx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0xffffffecu)));
/* 80017f: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 800182: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 800185: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 800188: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 80018b: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x800191u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 800191: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 800194: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 800197: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80019a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80019b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80019c: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 80019f: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8001a5u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8001a5: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8001a8: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8001ab: movsx edx, word ptr [ebp - 0x18] */
  edx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0xffffffe8u)));
/* 8001af: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8001b2: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 8001b5: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8001b8: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8001bb: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 8001be: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8001c0: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8001c2: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8001c4: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 8001c6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8001c8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8001cb: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8001cd: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 8001d0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8001d2: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8001d5: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8001d7: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 8001da: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8001dc: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8001df: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 8001e2: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8001e8u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8001e8: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8001eb: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8001ee: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8001f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8001f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8001f3: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 8001f6: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8001fcu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8001fc: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8001ff: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 800202: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 800205: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 800208: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 80020b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 80020d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80020f: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 800211: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 800213: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 800215: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 800218: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 80021a: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 80021d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 80021f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 800222: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 800224: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 800227: fstp st(0) */
  STI(0) = ST0; FPOP();
L_800229: /* 800229: mov ecx, ebx */
  ecx = ebx;
/* 80022b: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x800231u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 800231: cmp eax, 0x6a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6au);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 800234: jl 0x800256 */
  if ((sf != of)) goto L_800256;
L_800236: /* 800236: add esi, 0x144 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x144u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 80023c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80023d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80023e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x800240u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 800240: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800243: mov eax, ebx */
  eax = ebx;
/* 800245: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 800248: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80024f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 800250: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 800251: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 800252: mov esp, ebp */
  esp = ebp;
/* 800254: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 800255: ret  */
  esp += 4; SPILL(); return;
L_800256: /* 800256: mov ecx, ebx */
  ecx = ebx;
/* 800258: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x80025eu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 80025e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 800260: je 0x80026c */
  if (zf) goto L_80026c;
L_800262: /* 800262: mov dword ptr [esi + 0x144], 0x42000000 */
  W32((uint32_t)(esi + 0x144u), 0x42000000u);
L_80026c: /* 80026c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80026f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 800270: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 800271: mov eax, ebx */
  eax = ebx;
/* 800273: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80027a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80027b: mov esp, ebp */
  esp = ebp;
/* 80027d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80027e: ret  */
  esp += 4; SPILL(); return;
}

void f_800000(void) {
  LOAD_REGS();
L_800000: /* 800000: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 800001: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 800004: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 800007: lea eax, [esi + 0x100] */
  eax = (uint32_t)(esi + 0x100u);
/* 80000d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80000e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80000f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 800016: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x80001cu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 80001c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80001f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 800020: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 800021: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
/* 800027: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x800029u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 800029: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80002c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 80002f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 800030: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800031: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x800033u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 800033: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800036: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 800039: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80003a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80003b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x80003du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80003d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800040: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 800043: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 800044: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800045: lea ebx, [esi + 0x18] */
  ebx = (uint32_t)(esi + 0x18u);
/* 800048: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x80004au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80004a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80004d: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 800050: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 800051: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800052: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x800054u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 800054: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800057: lea edx, [esi + 0x14] */
  edx = (uint32_t)(esi + 0x14u);
/* 80005a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80005b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80005c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x80005eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80005e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800061: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 800062: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800063: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x800065u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 800065: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800068: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 80006b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80006c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80006d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x80006fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80006f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800072: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 800075: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 800076: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800077: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x800079u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 800079: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80007c: lea ebx, [esi + 0x24] */
  ebx = (uint32_t)(esi + 0x24u);
/* 80007f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 800080: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800081: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x800083u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 800083: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800086: lea edx, [ebx + 4] */
  edx = (uint32_t)(ebx + 0x4u);
/* 800089: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80008a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80008b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x80008du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80008d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800090: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 800093: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 800094: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800095: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x800097u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 800097: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80009a: xor eax, eax */
  eax = 0;
/* 80009c: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 80009f: nop  */
L_8000a0: /* 8000a0: cmp eax, dword ptr [esi + 0x100] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x100u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8000a6: jge 0x8000d6 */
  if ((sf == of)) goto L_8000d6;
L_8000a8: /* 8000a8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8000ab: lea eax, [eax + eax*2 + 0xc] */
  eax = (uint32_t)(eax + eax*2 + 0xcu);
/* 8000af: lea ebx, [esi + eax*4] */
  ebx = (uint32_t)(esi + eax*4);
/* 8000b2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8000b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8000b4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8000b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8000b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8000b9: lea edx, [ebx + 4] */
  edx = (uint32_t)(ebx + 0x4u);
/* 8000bc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8000bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8000be: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8000c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8000c0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8000c3: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8000c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8000c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8000c8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8000cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8000ca: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8000cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8000d0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8000d1: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8000d4: jmp 0x8000a0 */
  goto L_8000a0;
L_8000d6: /* 8000d6: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8000d9: lea eax, [esi + 0xf0] */
  eax = (uint32_t)(esi + 0xf0u);
/* 8000df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8000e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8000e1: call dword ptr [0xcfa27c] */
  esp -= 4; W32(esp, 0x8000e7u); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* 8000e7: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8000e9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8000ec: lea eax, [esi + 0xf4] */
  eax = (uint32_t)(esi + 0xf4u);
/* 8000f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8000f3: mov ecx, ebx */
  ecx = ebx;
/* 8000f5: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8000f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8000f8: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8000fa: lea ecx, [esi + 0xf8] */
  ecx = (uint32_t)(esi + 0xf8u);
/* 800100: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 800101: mov ecx, eax */
  ecx = eax;
/* 800103: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x800106u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 800106: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 800108: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* 80010e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80010f: mov ecx, eax */
  ecx = eax;
/* 800111: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x800114u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 800114: lea edx, [esi + 0x104] */
  edx = (uint32_t)(esi + 0x104u);
/* 80011a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80011b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80011c: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x800122u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 800122: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800125: lea ecx, [esi + 0x108] */
  ecx = (uint32_t)(esi + 0x108u);
/* 80012b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80012c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80012d: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x800133u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 800133: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800136: mov ecx, ebx */
  ecx = ebx;
/* 800138: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x80013eu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 80013e: cmp eax, 0x4e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4eu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 800141: jge 0x800229 */
  if ((sf == of)) goto L_800229;
L_800147: /* 800147: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 80014a: xor eax, eax */
  eax = 0;
/* 80014c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80014d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80014e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 800151: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 800154: call dword ptr [0xcfaabc] */
  esp -= 4; W32(esp, 0x80015au); SPILL(); f_4e40ed(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAF@Z */ RELOAD();
/* 80015a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80015d: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 800160: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 800161: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800162: call dword ptr [0xcfaabc] */
  esp -= 4; W32(esp, 0x800168u); SPILL(); f_4e40ed(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAF@Z */ RELOAD();
/* 800168: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80016b: mov ecx, ebx */
  ecx = ebx;
/* 80016d: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x800173u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 800173: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 800175: je 0x800229 */
  if (zf) goto L_800229;
L_80017b: /* 80017b: movsx edx, word ptr [ebp - 0x14] */
  edx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0xffffffecu)));
/* 80017f: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 800182: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 800185: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 800188: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 80018b: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x800191u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 800191: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 800194: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 800197: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80019a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80019b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80019c: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 80019f: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8001a5u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8001a5: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8001a8: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8001ab: movsx edx, word ptr [ebp - 0x18] */
  edx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0xffffffe8u)));
/* 8001af: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8001b2: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 8001b5: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8001b8: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8001bb: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 8001be: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8001c0: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8001c2: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8001c4: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 8001c6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8001c8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8001cb: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8001cd: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 8001d0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8001d2: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8001d5: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8001d7: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 8001da: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8001dc: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8001df: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 8001e2: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8001e8u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8001e8: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8001eb: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8001ee: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8001f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8001f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8001f3: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 8001f6: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8001fcu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8001fc: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8001ff: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 800202: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 800205: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 800208: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 80020b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 80020d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80020f: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 800211: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 800213: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 800215: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 800218: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 80021a: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 80021d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 80021f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 800222: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 800224: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 800227: fstp st(0) */
  STI(0) = ST0; FPOP();
L_800229: /* 800229: mov ecx, ebx */
  ecx = ebx;
/* 80022b: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x800231u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 800231: cmp eax, 0x6a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6au);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 800234: jl 0x800256 */
  if ((sf != of)) goto L_800256;
L_800236: /* 800236: add esi, 0x144 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x144u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 80023c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80023d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80023e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x800240u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 800240: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800243: mov eax, ebx */
  eax = ebx;
/* 800245: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 800248: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80024f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 800250: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 800251: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 800252: mov esp, ebp */
  esp = ebp;
/* 800254: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 800255: ret  */
  esp += 4; SPILL(); return;
L_800256: /* 800256: mov ecx, ebx */
  ecx = ebx;
/* 800258: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x80025eu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 80025e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 800260: je 0x80026c */
  if (zf) goto L_80026c;
L_800262: /* 800262: mov dword ptr [esi + 0x144], 0x42000000 */
  W32((uint32_t)(esi + 0x144u), 0x42000000u);
L_80026c: /* 80026c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80026f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 800270: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 800271: mov eax, ebx */
  eax = ebx;
/* 800273: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80027a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80027b: mov esp, ebp */
  esp = ebp;
/* 80027d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80027e: ret  */
  esp += 4; SPILL(); return;
}

void f_80027f(void) {
  LOAD_REGS();
L_80027f: /* 80027f: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 800282: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 800287: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 80028a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80028b: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 80028e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x800293u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_800293(); return;
}

void f_800293(void) {
  LOAD_REGS();
L_800293: /* 800293: push 0xa127d8 */
  { uint32_t v = 0xa127d8u; esp -= 4; W32(esp, v); }
/* 800298: push 0xae0cd8 */
  { uint32_t v = 0xae0cd8u; esp -= 4; W32(esp, v); }
/* 80029d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8002a3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8002a3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8002a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8002a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8002aa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8002afu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8002af: guest_badaddr(0x8002af); return;
}

void f_800370(void) {
  LOAD_REGS();
L_800370: /* 800370: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 800371: mov ebp, esp */
  ebp = esp;
/* 800373: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 800375: push 0x9d1ed0 */
  { uint32_t v = 0x9d1ed0u; esp -= 4; W32(esp, v); }
/* 80037a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 800380: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800381: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 800388: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80038b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80038c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80038d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80038e: mov esi, ecx */
  esi = ecx;
/* 800390: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 800393: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 800395: lea ecx, [esi + 0x78] */
  ecx = (uint32_t)(esi + 0x78u);
/* 800398: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80039f: call dword ptr [0xcfa380] */
  esp -= 4; W32(esp, 0x8003a5u); SPILL(); f_4e3fda(); if (g_unwind) return; /* Core!?Shrink@FArray@@QAEXH@Z */ RELOAD();
/* 8003a5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8003a7: lea ecx, [esi + 0x88] */
  ecx = (uint32_t)(esi + 0x88u);
/* 8003ad: call dword ptr [0xcfa380] */
  esp -= 4; W32(esp, 0x8003b3u); SPILL(); f_4e3fda(); if (g_unwind) return; /* Core!?Shrink@FArray@@QAEXH@Z */ RELOAD();
/* 8003b3: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8003b5: lea ecx, [esi + 0x68] */
  ecx = (uint32_t)(esi + 0x68u);
/* 8003b8: call dword ptr [0xcfa380] */
  esp -= 4; W32(esp, 0x8003beu); SPILL(); f_4e3fda(); if (g_unwind) return; /* Core!?Shrink@FArray@@QAEXH@Z */ RELOAD();
/* 8003be: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 8003c0: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 8003c3: call dword ptr [0xcfa380] */
  esp -= 4; W32(esp, 0x8003c9u); SPILL(); f_4e3fda(); if (g_unwind) return; /* Core!?Shrink@FArray@@QAEXH@Z */ RELOAD();
/* 8003c9: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 8003cb: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* 8003d1: call dword ptr [0xcfa380] */
  esp -= 4; W32(esp, 0x8003d7u); SPILL(); f_4e3fda(); if (g_unwind) return; /* Core!?Shrink@FArray@@QAEXH@Z */ RELOAD();
/* 8003d7: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 8003da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8003dc: je 0x8003ec */
  if (zf) goto L_8003ec;
L_8003de: /* 8003de: lea ecx, [eax + 0x28] */
  ecx = (uint32_t)(eax + 0x28u);
/* 8003e1: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 8003e6: call dword ptr [0xcfa380] */
  esp -= 4; W32(esp, 0x8003ecu); SPILL(); f_4e3fda(); if (g_unwind) return; /* Core!?Shrink@FArray@@QAEXH@Z */ RELOAD();
L_8003ec: /* 8003ec: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8003ee: lea ecx, [esi + 0xa8] */
  ecx = (uint32_t)(esi + 0xa8u);
/* 8003f4: call dword ptr [0xcfa380] */
  esp -= 4; W32(esp, 0x8003fau); SPILL(); f_4e3fda(); if (g_unwind) return; /* Core!?Shrink@FArray@@QAEXH@Z */ RELOAD();
/* 8003fa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8003fc: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 800402: call dword ptr [0xcfa380] */
  esp -= 4; W32(esp, 0x800408u); SPILL(); f_4e3fda(); if (g_unwind) return; /* Core!?Shrink@FArray@@QAEXH@Z */ RELOAD();
/* 800408: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80040b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80040c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80040d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 800414: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 800415: mov esp, ebp */
  esp = ebp;
/* 800417: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 800418: ret  */
  esp += 4; SPILL(); return;
}

void f_800419(void) {
  LOAD_REGS();
L_800419: /* 800419: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80041c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 800421: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 800424: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 800425: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 800428: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80042du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80042d(); return;
}

void f_80042d(void) {
  LOAD_REGS();
L_80042d: /* 80042d: push 0xa127ec */
  { uint32_t v = 0xa127ecu; esp -= 4; W32(esp, v); }
/* 800432: push 0xae0d6c */
  { uint32_t v = 0xae0d6cu; esp -= 4; W32(esp, v); }
/* 800437: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80043du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80043d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800440: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 800442: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 800444: call 0x99caf8 */
  esp -= 4; W32(esp, 0x800449u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_800449: guest_badaddr(0x800449); return;
}

void f_800490(void) {
  LOAD_REGS();
L_800490: /* 800490: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 800491: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 800493: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 800495: mov esi, ecx */
  esi = ecx;
/* 800497: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x80049du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 80049d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8004a1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8004a3: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 8004a5: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8004a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8004a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8004c0(void) {
  LOAD_REGS();
L_8004c0: /* 8004c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8004c1: mov ebp, esp */
  ebp = esp;
/* 8004c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8004c5: push 0x9d1ee0 */
  { uint32_t v = 0x9d1ee0u; esp -= 4; W32(esp, v); }
/* 8004ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8004d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8004d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8004d8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8004db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8004dc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8004df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8004e0: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8004e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8004e4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8004e7: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8004e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8004ea: mov ecx, esi */
  ecx = esi;
/* 8004ec: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8004f3: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8004f9u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8004f9: mov ecx, ebx */
  ecx = ebx;
/* 8004fb: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x800501u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 800501: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 800503: je 0x800553 */
  if (zf) goto L_800553;
L_800505: /* 800505: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 800508: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800509: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80050a: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x800510u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 800510: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 800513: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800516: xor eax, eax */
  eax = 0;
L_800518: /* 800518: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80051b: jge 0x800520 */
  if ((sf == of)) goto L_800520;
L_80051d: /* 80051d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 80051e: jmp 0x800518 */
  goto L_800518;
L_800520: /* 800520: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 800521: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 800523: mov ecx, esi */
  ecx = esi;
/* 800525: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x80052bu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 80052b: xor edi, edi */
  edi = 0;
/* 80052d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_800530: /* 800530: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 800533: jge 0x80057a */
  if ((sf == of)) goto L_80057a;
L_800535: /* 800535: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 800537: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 800539: mov ecx, esi */
  ecx = esi;
/* 80053b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x800541u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 800541: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 800543: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 800546: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800547: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 800548: call 0x6cb537 */
  esp -= 4; W32(esp, 0x80054du); SPILL(); f_6cb537(); if (g_unwind) return; RELOAD();
/* 80054d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800550: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 800551: jmp 0x800530 */
  goto L_800530;
L_800553: /* 800553: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 800556: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800557: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 800558: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x80055eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 80055e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800561: xor edi, edi */
  edi = 0;
L_800563: /* 800563: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 800566: jge 0x80057a */
  if ((sf == of)) goto L_80057a;
L_800568: /* 800568: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 80056a: lea eax, [edx + edi*8] */
  eax = (uint32_t)(edx + edi*8);
/* 80056d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80056e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80056f: call 0x6cb537 */
  esp -= 4; W32(esp, 0x800574u); SPILL(); f_6cb537(); if (g_unwind) return; RELOAD();
/* 800574: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800577: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 800578: jmp 0x800563 */
  goto L_800563;
L_80057a: /* 80057a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80057d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80057e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80057f: mov eax, ebx */
  eax = ebx;
/* 800581: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 800588: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 800589: mov esp, ebp */
  esp = ebp;
/* 80058b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80058c: ret  */
  esp += 4; SPILL(); return;
}

void f_80058d(void) {
  LOAD_REGS();
L_80058d: /* 80058d: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 800590: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 800595: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 800598: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 800599: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 80059c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8005a1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8005a1(); return;
}

void f_8005a1(void) {
  LOAD_REGS();
L_8005a1: /* 8005a1: push 0xa1281c */
  { uint32_t v = 0xa1281cu; esp -= 4; W32(esp, v); }
/* 8005a6: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8005ab: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8005b1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8005b1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8005b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8005b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8005b8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8005bdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8005bd: guest_badaddr(0x8005bd); return;
}

void f_800600(void) {
  LOAD_REGS();
L_800600: /* 800600: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 800601: mov esi, ecx */
  esi = ecx;
/* 800603: call 0x6c6681 */
  esp -= 4; W32(esp, 0x800608u); SPILL(); f_6c6681(); if (g_unwind) return; RELOAD();
/* 800608: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80060d: je 0x80061c */
  if (zf) goto L_80061c;
L_80060f: /* 80060f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 800614: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 800616: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 800618: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 800619: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x80061cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80061c: /* 80061c: mov eax, esi */
  eax = esi;
/* 80061e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80061f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_800640(void) {
  LOAD_REGS();
L_800640: /* 800640: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 800641: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 800645: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 800647: je 0x80065e */
  if (zf) goto L_80065e;
L_800649: /* 800649: push 0xb6cd28 */
  { uint32_t v = 0xb6cd28u; esp -= 4; W32(esp, v); }
/* 80064e: mov ecx, esi */
  ecx = esi;
/* 800650: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x800656u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 800656: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 800658: je 0x80065e */
  if (zf) goto L_80065e;
L_80065a: /* 80065a: mov eax, esi */
  eax = esi;
/* 80065c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80065d: ret  */
  esp += 4; SPILL(); return;
L_80065e: /* 80065e: xor eax, eax */
  eax = 0;
/* 800660: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 800661: ret  */
  esp += 4; SPILL(); return;
}

void f_800680(void) {
  LOAD_REGS();
L_800680: /* 800680: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 800681: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 800685: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 800687: je 0x80069e */
  if (zf) goto L_80069e;
L_800689: /* 800689: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 80068e: mov ecx, esi */
  ecx = esi;
/* 800690: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x800696u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 800696: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 800698: je 0x80069e */
  if (zf) goto L_80069e;
L_80069a: /* 80069a: mov eax, esi */
  eax = esi;
/* 80069c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80069d: ret  */
  esp += 4; SPILL(); return;
L_80069e: /* 80069e: xor eax, eax */
  eax = 0;
/* 8006a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8006a1: ret  */
  esp += 4; SPILL(); return;
}

void f_8006c0(void) {
  LOAD_REGS();
L_8006c0: /* 8006c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8006c1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8006c5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8006c7: je 0x8006de */
  if (zf) goto L_8006de;
L_8006c9: /* 8006c9: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 8006ce: mov ecx, esi */
  ecx = esi;
/* 8006d0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8006d6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8006d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8006d8: je 0x8006de */
  if (zf) goto L_8006de;
L_8006da: /* 8006da: mov eax, esi */
  eax = esi;
/* 8006dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8006dd: ret  */
  esp += 4; SPILL(); return;
L_8006de: /* 8006de: xor eax, eax */
  eax = 0;
/* 8006e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8006e1: ret  */
  esp += 4; SPILL(); return;
}

void f_800700(void) {
  LOAD_REGS();
L_800700: /* 800700: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 800701: mov esi, ecx */
  esi = ecx;
/* 800703: fld qword ptr [esi + 0x10] */
  { double v = F64((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 800706: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 80070c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80070e: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 800711: jnp 0x800753 */
  if (!pf) goto L_800753;
L_800713: /* 800713: mov eax, dword ptr [0xce9ec0] */
  eax = R32((uint32_t)(0xce9ec0u));
/* 800718: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* 80071b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80071d: je 0x800733 */
  if (zf) goto L_800733;
L_80071f: /* 80071f: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* 800722: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 800724: je 0x800733 */
  if (zf) goto L_800733;
L_800726: /* 800726: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 800729: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 80072c: mov eax, dword ptr [ecx + 0x4c] */
  eax = R32((uint32_t)(ecx + 0x4cu));
/* 80072f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 800731: jne 0x800753 */
  if (!zf) goto L_800753;
L_800733: /* 800733: dec dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 800736: jne 0x80074d */
  if (!zf) goto L_80074d;
L_800738: /* 800738: mov ecx, esi */
  ecx = esi;
/* 80073a: call 0x6c75d1 */
  esp -= 4; W32(esp, 0x80073fu); SPILL(); f_6c75d1(); if (g_unwind) return; RELOAD();
/* 80073f: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 800745: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 800747: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 800749: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80074a: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x80074du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80074d: /* 80074d: xor eax, eax */
  eax = 0;
/* 80074f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 800750: ret 8 */
  esp += 12; SPILL(); return;
L_800753: /* 800753: fld qword ptr [esi + 0x10] */
  { double v = F64((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 800756: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 80075c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80075e: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 800761: jnp 0x8007b5 */
  if (!pf) goto L_8007b5;
L_800763: /* 800763: fld qword ptr [esi + 0x10] */
  { double v = F64((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 800766: fcomp qword ptr [esp + 8] */
  fpu_com(ST0, F64((uint32_t)(esp + 0x8u)));
  FPOP();
/* 80076a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80076c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 80076f: jnp 0x800795 */
  if (!pf) goto L_800795;
L_800771: /* 800771: fld qword ptr [esi + 8] */
  { double v = F64((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 800774: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 80077a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80077c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 80077f: jnp 0x8007b5 */
  if (!pf) goto L_8007b5;
L_800781: /* 800781: fld qword ptr [esp + 8] */
  { double v = F64((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 800785: fsub qword ptr [esi + 8] */
  ST0 = ST0 - (F64((uint32_t)(esi + 0x8u)));
/* 800788: fcomp qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
  FPOP();
/* 80078e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 800790: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 800793: jne 0x8007b5 */
  if (!zf) goto L_8007b5;
L_800795: /* 800795: dec dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 800798: jne 0x8007af */
  if (!zf) goto L_8007af;
L_80079a: /* 80079a: mov ecx, esi */
  ecx = esi;
/* 80079c: call 0x6c75d1 */
  esp -= 4; W32(esp, 0x8007a1u); SPILL(); f_6c75d1(); if (g_unwind) return; RELOAD();
/* 8007a1: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 8007a7: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8007a9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8007ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8007ac: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8007afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8007af: /* 8007af: xor eax, eax */
  eax = 0;
/* 8007b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8007b2: ret 8 */
  esp += 12; SPILL(); return;
L_8007b5: /* 8007b5: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8007b9: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8007bd: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 8007c0: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 8007c3: mov eax, 1 */
  eax = 0x1u;
/* 8007c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8007c9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_800810(void) {
  LOAD_REGS();
L_800810: /* 800810: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 800811: mov ebp, esp */
  ebp = esp;
/* 800813: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 800815: push 0x9d1ef0 */
  { uint32_t v = 0x9d1ef0u; esp -= 4; W32(esp, v); }
/* 80081a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 800820: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800821: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 800828: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80082b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80082c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80082d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80082e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 800831: mov edi, ecx */
  edi = ecx;
/* 800833: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80083a: xor esi, esi */
  esi = 0;
/* 80083c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_800840: /* 800840: cmp esi, dword ptr [edi + 0x5c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 800843: jge 0x800872 */
  if ((sf == of)) goto L_800872;
L_800845: /* 800845: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 800848: mov eax, esi */
  eax = esi;
/* 80084a: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 80084d: mov edx, dword ptr [eax + ecx + 0x1c] */
  edx = R32((uint32_t)(eax + ecx + 0x1cu));
/* 800851: mov eax, dword ptr [edi + 0x98] */
  eax = R32((uint32_t)(edi + 0x98u));
/* 800857: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 80085a: lea ebx, [edx + eax + 0x20] */
  ebx = (uint32_t)(edx + eax + 0x20u);
/* 80085e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 800860: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 800862: mov ecx, ebx */
  ecx = ebx;
/* 800864: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x80086au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 80086a: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 80086c: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 80086f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 800870: jmp 0x800840 */
  goto L_800840;
L_800872: /* 800872: mov ecx, edi */
  ecx = edi;
/* 800874: call dword ptr [0xcfa230] */
  esp -= 4; W32(esp, 0x80087au); SPILL(); f_4e4110(); if (g_unwind) return; /* Core!?PostLoad@UObject@@UAEXXZ */ RELOAD();
/* 80087a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80087d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80087e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80087f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 800886: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 800887: mov esp, ebp */
  esp = ebp;
/* 800889: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80088a: ret  */
  esp += 4; SPILL(); return;
}

void f_80088b(void) {
  LOAD_REGS();
L_80088b: /* 80088b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80088e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 800893: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 800896: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800897: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 80089a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80089fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80089f(); return;
}

void f_80089f(void) {
  LOAD_REGS();
L_80089f: /* 80089f: push 0xa12834 */
  { uint32_t v = 0xa12834u; esp -= 4; W32(esp, v); }
/* 8008a4: push 0xae0cf0 */
  { uint32_t v = 0xae0cf0u; esp -= 4; W32(esp, v); }
/* 8008a9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8008afu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8008af: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8008b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8008b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8008b6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8008bbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8008bb: guest_badaddr(0x8008bb); return;
}

void f_8008f0(void) {
  LOAD_REGS();
L_8008f0: /* 8008f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8008f4: mov eax, dword ptr [eax + 0x5c] */
  eax = R32((uint32_t)(eax + 0x5cu));
/* 8008f7: mov ecx, dword ptr [0xb9211c] */
  ecx = R32((uint32_t)(0xb9211cu));
/* 8008fd: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 800900: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 800902: jge 0x800914 */
  if ((sf == of)) goto L_800914;
L_800904: /* 800904: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 800906: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 800908: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 800909: mov ecx, 0xb92118 */
  ecx = 0xb92118u;
/* 80090e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x800914u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
L_800914: /* 800914: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 800918: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 800919: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80091a: mov ebp, dword ptr [0xb92118] */
  ebp = R32((uint32_t)(0xb92118u));
/* 800920: mov dword ptr [ebp], ecx */
  W32((uint32_t)(ebp), ecx);
/* 800923: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 800927: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 80092b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80092c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80092d: xor edi, edi */
  edi = 0;
/* 80092f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 800931: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 800934: jp 0x80093c */
  if (pf) goto L_80093c;
L_800936: /* 800936: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 80093a: jmp 0x800940 */
  goto L_800940;
L_80093c: /* 80093c: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
L_800940: /* 800940: fcom dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
/* 800944: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 800946: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 800949: jnp 0x800951 */
  if (!pf) goto L_800951;
L_80094b: /* 80094b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 80094d: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
L_800951: /* 800951: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 800955: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 800959: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80095b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80095e: jne 0x800966 */
  if (!zf) goto L_800966;
L_800960: /* 800960: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 800964: jmp 0x80096a */
  goto L_80096a;
L_800966: /* 800966: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
L_80096a: /* 80096a: fcom dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
/* 80096e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 800970: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 800973: je 0x80097b */
  if (zf) goto L_80097b;
L_800975: /* 800975: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 800977: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
L_80097b: /* 80097b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 80097d: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 80097f: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 800981: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 800983: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 800985: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 800988: jne 0x800a4c */
  if (!zf) goto L_800a4c;
L_80098e: /* 80098e: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 800992: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x800998u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 800998: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 80099c: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
L_8009a0: /* 8009a0: mov esi, dword ptr [ebp + edi*4] */
  esi = R32((uint32_t)(ebp + edi*4));
/* 8009a4: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8009a8: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 8009ac: imul esi, esi, 0x78 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x78u);
  esi = (uint32_t)r;
  }
/* 8009af: add esi, dword ptr [edx + 0x58] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x58u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8009b2: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 8009b3: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 8009b6: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8009ba: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 8009bd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8009bf: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8009c3: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8009c5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8009c7: fsub dword ptr [esi + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xcu)));
/* 8009ca: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 8009ce: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 8009d2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8009d4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8009d7: jp 0x800a02 */
  if (pf) goto L_800a02;
L_8009d9: /* 8009d9: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 8009dc: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8009df: je 0x8009e8 */
  if (zf) goto L_8009e8;
L_8009e1: /* 8009e1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8009e2: mov dword ptr [ebp + edi*4], eax */
  W32((uint32_t)(ebp + edi*4), eax);
/* 8009e6: jmp 0x800a02 */
  goto L_800a02;
L_8009e8: /* 8009e8: cmp dword ptr [esi + 0x58], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x58u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8009ec: je 0x800a02 */
  if (zf) goto L_800a02;
L_8009ee: /* 8009ee: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8009f0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8009f2: mov ecx, ebx */
  ecx = ebx;
/* 8009f4: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8009fau); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8009fa: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8009fc: mov edx, dword ptr [esi + 0x58] */
  edx = R32((uint32_t)(esi + 0x58u));
/* 8009ff: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_800a02: /* 800a02: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 800a06: fchs  */
  ST0 = -ST0;
/* 800a08: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 800a0c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 800a0e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 800a11: jp 0x800a3c */
  if (pf) goto L_800a3c;
L_800a13: /* 800a13: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 800a16: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 800a19: je 0x800a22 */
  if (zf) goto L_800a22;
L_800a1b: /* 800a1b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 800a1c: mov dword ptr [ebp + edi*4], eax */
  W32((uint32_t)(ebp + edi*4), eax);
/* 800a20: jmp 0x800a3c */
  goto L_800a3c;
L_800a22: /* 800a22: cmp dword ptr [esi + 0x5c], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x5cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 800a26: je 0x800a3c */
  if (zf) goto L_800a3c;
L_800a28: /* 800a28: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 800a2a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 800a2c: mov ecx, ebx */
  ecx = ebx;
/* 800a2e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x800a34u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 800a34: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 800a36: mov edx, dword ptr [esi + 0x5c] */
  edx = R32((uint32_t)(esi + 0x5cu));
/* 800a39: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_800a3c: /* 800a3c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 800a3e: jge 0x8009a0 */
  if ((sf == of)) goto L_8009a0;
L_800a44: /* 800a44: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 800a45: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 800a46: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 800a47: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 800a48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800a4b: ret  */
  esp += 4; SPILL(); return;
L_800a4c: /* 800a4c: mov ebx, dword ptr [esp + 0x3c] */
  ebx = R32((uint32_t)(esp + 0x3cu));
L_800a50: /* 800a50: mov esi, dword ptr [ebp + edi*4] */
  esi = R32((uint32_t)(ebp + edi*4));
/* 800a54: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 800a58: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 800a5c: imul esi, esi, 0x78 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x78u);
  esi = (uint32_t)r;
  }
/* 800a5f: add esi, dword ptr [eax + 0x58] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x58u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 800a62: mov eax, 0x7fffffff */
  eax = 0x7fffffffu;
/* 800a67: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 800a68: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 800a6a: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 800a6e: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 800a72: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 800a76: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 800a79: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 800a7b: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 800a7f: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 800a83: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 800a87: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 800a8b: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 800a8e: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 800a90: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 800a94: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 800a98: and dword ptr [esp + 0x20], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esp + 0x20u), r);
  }
/* 800a9c: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 800aa0: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 800aa4: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 800aa8: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 800aac: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 800ab0: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 800ab2: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 800ab6: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 800ab9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 800abb: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 800abf: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 800ac2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 800ac4: fsub dword ptr [esi + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xcu)));
/* 800ac7: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 800acb: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 800acf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 800ad1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 800ad4: jp 0x800aff */
  if (pf) goto L_800aff;
L_800ad6: /* 800ad6: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 800ad9: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 800adc: je 0x800ae5 */
  if (zf) goto L_800ae5;
L_800ade: /* 800ade: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 800adf: mov dword ptr [ebp + edi*4], eax */
  W32((uint32_t)(ebp + edi*4), eax);
/* 800ae3: jmp 0x800aff */
  goto L_800aff;
L_800ae5: /* 800ae5: cmp dword ptr [esi + 0x58], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x58u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 800ae9: je 0x800aff */
  if (zf) goto L_800aff;
L_800aeb: /* 800aeb: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 800aed: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 800aef: mov ecx, ebx */
  ecx = ebx;
/* 800af1: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x800af7u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 800af7: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 800af9: mov edx, dword ptr [esi + 0x58] */
  edx = R32((uint32_t)(esi + 0x58u));
/* 800afc: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_800aff: /* 800aff: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 800b03: fchs  */
  ST0 = -ST0;
/* 800b05: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 800b09: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 800b0b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 800b0e: jp 0x800b39 */
  if (pf) goto L_800b39;
L_800b10: /* 800b10: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 800b13: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 800b16: je 0x800b1f */
  if (zf) goto L_800b1f;
L_800b18: /* 800b18: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 800b19: mov dword ptr [ebp + edi*4], eax */
  W32((uint32_t)(ebp + edi*4), eax);
/* 800b1d: jmp 0x800b39 */
  goto L_800b39;
L_800b1f: /* 800b1f: cmp dword ptr [esi + 0x5c], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x5cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 800b23: je 0x800b39 */
  if (zf) goto L_800b39;
L_800b25: /* 800b25: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 800b27: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 800b29: mov ecx, ebx */
  ecx = ebx;
/* 800b2b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x800b31u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 800b31: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 800b33: mov edx, dword ptr [esi + 0x5c] */
  edx = R32((uint32_t)(esi + 0x5cu));
/* 800b36: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_800b39: /* 800b39: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 800b3b: jge 0x800a50 */
  if ((sf == of)) goto L_800a50;
L_800b41: /* 800b41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 800b42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 800b43: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 800b44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 800b45: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 800b48: ret  */
  esp += 4; SPILL(); return;
}
