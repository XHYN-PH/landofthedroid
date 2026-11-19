#include "recomp.h"
#include "rec_mod.h"

void f_81f7a4(void) {
  LOAD_REGS();
L_81f7a4: /* 81f7a4: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 81f7a7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81f7ac: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 81f7af: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81f7b0: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 81f7b3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81f7b8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81f7b8(); return;
}

void f_81f7b8(void) {
  LOAD_REGS();
L_81f7b8: /* 81f7b8: push 0xa14c28 */
  { uint32_t v = 0xa14c28u; esp -= 4; W32(esp, v); }
/* 81f7bd: push 0xae2fd0 */
  { uint32_t v = 0xae2fd0u; esp -= 4; W32(esp, v); }
/* 81f7c2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81f7c8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81f7c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81f7cb: xor ebx, ebx */
  ebx = 0;
/* 81f7cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81f7ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81f7cf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81f7d4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 81f7d4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81f7d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81f7d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81f7d9: xor eax, eax */
  eax = 0;
/* 81f7db: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81f7e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81f7e3: mov esp, ebp */
  esp = ebp;
/* 81f7e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81f7e6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_81f910(void) {
  LOAD_REGS();
L_81f910: /* 81f910: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 81f911: mov ebp, esp */
  ebp = esp;
/* 81f913: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81f915: push 0x9d2f10 */
  { uint32_t v = 0x9d2f10u; esp -= 4; W32(esp, v); }
/* 81f91a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 81f920: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81f921: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 81f928: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81f92b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81f92c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81f92d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81f92e: mov esi, ecx */
  esi = ecx;
/* 81f930: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 81f933: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 81f93a: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 81f941: xor ebx, ebx */
  ebx = 0;
L_81f943: /* 81f943: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 81f945: cmp ebx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81f948: jge 0x81f971 */
  if ((sf == of)) goto L_81f971;
L_81f94a: /* 81f94a: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 81f94d: mov edi, dword ptr [eax + ebx*4] */
  edi = R32((uint32_t)(eax + ebx*4));
/* 81f950: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81f952: je 0x81f965 */
  if (zf) goto L_81f965;
L_81f954: /* 81f954: push 0xb60d38 */
  { uint32_t v = 0xb60d38u; esp -= 4; W32(esp, v); }
/* 81f959: mov ecx, edi */
  ecx = edi;
/* 81f95b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81f961u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81f961: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81f963: jne 0x81f967 */
  if (!zf) goto L_81f967;
L_81f965: /* 81f965: xor edi, edi */
  edi = 0;
L_81f967: /* 81f967: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81f969: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 81f96c: jne 0x81f971 */
  if (!zf) goto L_81f971;
L_81f96e: /* 81f96e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 81f96f: jmp 0x81f943 */
  goto L_81f943;
L_81f971: /* 81f971: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 81f974: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81f976: jne 0x81fab9 */
  if (!zf) goto L_81fab9;
L_81f97c: /* 81f97c: call dword ptr [0xcfa800] */
  esp -= 4; W32(esp, 0x81f982u); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 81f982: mov ebx, dword ptr [0xcfa5f8] */
  ebx = R32((uint32_t)(0xcfa5f8u));
/* 81f988: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81f98a: push 0xae3334 */
  { uint32_t v = 0xae3334u; esp -= 4; W32(esp, v); }
/* 81f98f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81f991: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81f992: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x81f994u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81f994: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81f997: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81f999: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81f99b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81f99d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81f99f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81f9a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81f9a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81f9a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81f9a7: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 81f9aa: mov edi, eax */
  edi = eax;
/* 81f9ac: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 81f9b3: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 81f9ba: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 81f9c1: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x81f9c7u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 81f9c7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81f9c9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81f9cc: mov ecx, esp */
  ecx = esp;
/* 81f9ce: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81f9d0: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81f9d3: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81f9d6: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 81f9d9: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 81f9dc: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 81f9df: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 81f9e2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81f9e5: mov ecx, esp */
  ecx = esp;
/* 81f9e7: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81f9e9: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81f9ec: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 81f9ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81f9f0: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 81f9f3: mov ecx, esp */
  ecx = esp;
/* 81f9f5: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 81f9f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81f9fa: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x81fa00u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 81fa00: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 81fa02: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 81fa04: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81fa05: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x81fa0bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81fa0b: mov edi, eax */
  edi = eax;
/* 81fa0d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81fa0f: je 0x81fa22 */
  if (zf) goto L_81fa22;
L_81fa11: /* 81fa11: push 0xb60d38 */
  { uint32_t v = 0xb60d38u; esp -= 4; W32(esp, v); }
/* 81fa16: mov ecx, edi */
  ecx = edi;
/* 81fa18: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81fa1eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81fa1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81fa20: jne 0x81fa24 */
  if (!zf) goto L_81fa24;
L_81fa22: /* 81fa22: xor edi, edi */
  edi = 0;
L_81fa24: /* 81fa24: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 81fa27: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 81fa2e: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 81fa35: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 81fa3c: call dword ptr [0xcfa800] */
  esp -= 4; W32(esp, 0x81fa42u); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 81fa42: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81fa44: push 0xae3340 */
  { uint32_t v = 0xae3340u; esp -= 4; W32(esp, v); }
/* 81fa49: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81fa4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81fa4c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x81fa4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81fa4e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81fa51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81fa53: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81fa55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81fa57: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81fa59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81fa5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81fa5d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81fa5f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81fa61: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 81fa64: mov edi, eax */
  edi = eax;
/* 81fa66: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x81fa6cu); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 81fa6c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 81fa6e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81fa71: mov ecx, esp */
  ecx = esp;
/* 81fa73: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81fa75: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 81fa78: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81fa7b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 81fa7e: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 81fa81: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 81fa84: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 81fa87: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81fa8a: mov ecx, esp */
  ecx = esp;
/* 81fa8c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81fa8e: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81fa91: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 81fa94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81fa95: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 81fa98: mov ecx, esp */
  ecx = esp;
/* 81fa9a: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 81fa9d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81fa9f: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x81faa5u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 81faa5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 81faa7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 81faa9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81faaa: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x81fab0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81fab0: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 81fab3: mov dword ptr [ecx + 0x33c], eax */
  W32((uint32_t)(ecx + 0x33cu), eax);
L_81fab9: /* 81fab9: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 81fabc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81fabe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81fac0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81fac2: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x81fac7u); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
/* 81fac7: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 81faca: or dword ptr [eax + 0x88], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 81fad1: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 81fad4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81fad6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81fad8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81fada: call dword ptr [edx + 0x10c] */
  { uint32_t t = R32((uint32_t)(edx + 0x10cu)); esp -= 4; W32(esp, 0x81fae0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81fae0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 81fae3: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 81fae9: call 0x6c34d1 */
  esp -= 4; W32(esp, 0x81faeeu); SPILL(); f_6c34d1(); if (g_unwind) return; RELOAD();
/* 81faee: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 81faf1: mov dword ptr [ecx + 0x16c], eax */
  W32((uint32_t)(ecx + 0x16cu), eax);
/* 81faf7: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 81fafa: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81fafc: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x81faffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81faff: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81fb02: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81fb03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81fb04: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81fb0b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81fb0c: mov esp, ebp */
  esp = ebp;
/* 81fb0e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81fb0f: ret  */
  esp += 4; SPILL(); return;
}

void f_81fb10(void) {
  LOAD_REGS();
L_81fb10: /* 81fb10: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 81fb13: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81fb18: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 81fb1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81fb1c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 81fb1f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81fb24u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_81fb24(); return;
}

void f_81fb24(void) {
  LOAD_REGS();
L_81fb24: /* 81fb24: push 0xa14c68 */
  { uint32_t v = 0xa14c68u; esp -= 4; W32(esp, v); }
/* 81fb29: push 0xae335c */
  { uint32_t v = 0xae335cu; esp -= 4; W32(esp, v); }
/* 81fb2e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x81fb34u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 81fb34: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81fb37: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81fb39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81fb3b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x81fb40u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_81fb40: guest_badaddr(0x81fb40); return;
}

void f_81fbe0(void) {
  LOAD_REGS();
L_81fbe0: /* 81fbe0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 81fbe1: mov ebp, esp */
  ebp = esp;
/* 81fbe3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 81fbe5: push 0x9d2f20 */
  { uint32_t v = 0x9d2f20u; esp -= 4; W32(esp, v); }
/* 81fbea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 81fbf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81fbf1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 81fbf8: sub esp, 0x1b8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1b8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81fbfe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81fbff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81fc00: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81fc01: mov ebx, ecx */
  ebx = ecx;
/* 81fc03: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 81fc06: fld dword ptr [eax + 0x2d8] */
  { double v = F32((uint32_t)(eax + 0x2d8u)); FPUSH(v); }
/* 81fc0c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 81fc0f: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81fc12: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 81fc16: xor edi, edi */
  edi = 0;
/* 81fc18: fld dword ptr [eax + 0x2d4] */
  { double v = F32((uint32_t)(eax + 0x2d4u)); FPUSH(v); }
/* 81fc1e: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 81fc23: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 81fc25: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 81fc28: push 0xae33a8 */
  { uint32_t v = 0xae33a8u; esp -= 4; W32(esp, v); }
/* 81fc2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81fc2e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 81fc31: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x81fc37u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 81fc37: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81fc3a: xor esi, esi */
  esi = 0;
/* 81fc3c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_81fc40: /* 81fc40: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 81fc42: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81fc45: jge 0x81fc8b */
  if ((sf == of)) goto L_81fc8b;
L_81fc47: /* 81fc47: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 81fc4a: mov edi, dword ptr [edx + esi*4] */
  edi = R32((uint32_t)(edx + esi*4));
/* 81fc4d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81fc4f: je 0x81fc86 */
  if (zf) goto L_81fc86;
L_81fc51: /* 81fc51: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 81fc56: mov ecx, edi */
  ecx = edi;
/* 81fc58: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81fc5eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81fc5e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81fc60: je 0x81fc86 */
  if (zf) goto L_81fc86;
L_81fc62: /* 81fc62: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 81fc68: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81fc6b: jne 0x81fc86 */
  if (!zf) goto L_81fc86;
L_81fc6d: /* 81fc6d: mov eax, dword ptr [edi + 0x390] */
  eax = R32((uint32_t)(edi + 0x390u));
/* 81fc73: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 81fc76: mov dword ptr [edi + 0x368], 1 */
  W32((uint32_t)(edi + 0x368u), 0x1u);
/* 81fc80: mov dword ptr [edi + 0x390], eax */
  W32((uint32_t)(edi + 0x390u), eax);
L_81fc86: /* 81fc86: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 81fc87: xor edi, edi */
  edi = 0;
/* 81fc89: jmp 0x81fc40 */
  goto L_81fc40;
L_81fc8b: /* 81fc8b: mov eax, 1 */
  eax = 0x1u;
/* 81fc90: mov dword ptr [ebp - 0x118], edi */
  W32((uint32_t)(ebp + 0xfffffee8u), edi);
/* 81fc96: mov dword ptr [ebp - 0x114], edi */
  W32((uint32_t)(ebp + 0xfffffeecu), edi);
/* 81fc9c: mov dword ptr [ebp - 0x110], 0 */
  W32((uint32_t)(ebp + 0xfffffef0u), 0x0u);
/* 81fca6: mov dword ptr [ebp - 0x10c], 0 */
  W32((uint32_t)(ebp + 0xfffffef4u), 0x0u);
/* 81fcb0: mov dword ptr [ebp - 0x108], 0 */
  W32((uint32_t)(ebp + 0xfffffef8u), 0x0u);
/* 81fcba: mov dword ptr [ebp - 0x104], 0 */
  W32((uint32_t)(ebp + 0xfffffefcu), 0x0u);
/* 81fcc4: mov dword ptr [ebp - 0x100], 0 */
  W32((uint32_t)(ebp + 0xffffff00u), 0x0u);
/* 81fcce: mov dword ptr [ebp - 0xfc], 0 */
  W32((uint32_t)(ebp + 0xffffff04u), 0x0u);
/* 81fcd8: mov dword ptr [ebp - 0xf8], edi */
  W32((uint32_t)(ebp + 0xffffff08u), edi);
/* 81fcde: mov dword ptr [ebp - 0xf4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff0cu), 0x3f800000u);
/* 81fce8: mov dword ptr [ebp - 0xf0], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff10u), 0xffffffffu);
/* 81fcf2: mov dword ptr [ebp - 0xec], edi */
  W32((uint32_t)(ebp + 0xffffff14u), edi);
L_81fcf8: /* 81fcf8: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81fcfb: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 81fcfe: jne 0x81fd57 */
  if (!zf) goto L_81fd57;
L_81fd00: /* 81fd00: fmul dword ptr [0xa14ac4] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac4u)));
/* 81fd06: push 0x40833333 */
  { uint32_t v = 0x40833333u; esp -= 4; W32(esp, v); }
/* 81fd0b: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 81fd0e: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81fd11: fmul dword ptr [0xa14ac4] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac4u)));
/* 81fd17: mov edi, esp */
  edi = esp;
/* 81fd19: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 81fd1c: mov ecx, 0xc */
  ecx = 0xcu;
/* 81fd21: fmul dword ptr [0xa14ac4] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac4u)));
/* 81fd27: lea esi, [ebp - 0x118] */
  esi = (uint32_t)(ebp + 0xfffffee8u);
/* 81fd2d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 81fd2f: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 81fd32: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 81fd35: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 81fd38: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 81fd3b: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 81fd3e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81fd41: mov eax, esp */
  eax = esp;
/* 81fd43: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 81fd45: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81fd48: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 81fd4b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 81fd4e: mov ecx, ebx */
  ecx = ebx;
/* 81fd50: call 0x6c9458 */
  esp -= 4; W32(esp, 0x81fd55u); SPILL(); f_6c9458(); if (g_unwind) return; RELOAD();
/* 81fd55: jmp 0x81fcf8 */
  goto L_81fcf8;
L_81fd57: /* 81fd57: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 81fd5d: lea edx, [ebp - 0x7c] */
  edx = (uint32_t)(ebp + 0xffffff84u);
/* 81fd60: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 81fd63: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81fd64: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 81fd6a: mov ecx, ebx */
  ecx = ebx;
/* 81fd6c: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 81fd6f: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 81fd75: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 81fd78: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 81fd7b: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 81fd7e: call 0x6cb3a2 */
  esp -= 4; W32(esp, 0x81fd83u); SPILL(); f_6cb3a2(); if (g_unwind) return; RELOAD();
/* 81fd83: fld dword ptr [ebp - 0x7c] */
  { double v = F32((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* 81fd86: mov eax, dword ptr [ebp - 0x78] */
  eax = R32((uint32_t)(ebp + 0xffffff88u));
/* 81fd89: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 81fd8f: mov ecx, eax */
  ecx = eax;
/* 81fd91: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 81fd94: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 81fd9b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81fd9e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 81fda1: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 81fda4: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 81fda7: xor ecx, ecx */
  ecx = 0;
/* 81fda9: mov dword ptr [ebp + 0x18], edx */
  W32((uint32_t)(ebp + 0x18u), edx);
/* 81fdac: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 81fdaf: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 81fdb2: mov dword ptr [ebp - 0x58], 0x49afc800 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x49afc800u);
/* 81fdb9: xor esi, esi */
  esi = 0;
L_81fdbb: /* 81fdbb: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 81fdbd: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81fdc0: mov dword ptr [ebp - 0x4c], esi */
  W32((uint32_t)(ebp + 0xffffffb4u), esi);
/* 81fdc3: jge 0x81ff64 */
  if ((sf == of)) goto L_81ff64;
L_81fdc9: /* 81fdc9: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 81fdcc: mov edi, dword ptr [edx + esi*4] */
  edi = R32((uint32_t)(edx + esi*4));
/* 81fdcf: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81fdd1: je 0x81ff5c */
  if (zf) goto L_81ff5c;
L_81fdd7: /* 81fdd7: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 81fddc: mov ecx, edi */
  ecx = edi;
/* 81fdde: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81fde4u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81fde4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81fde6: je 0x81ff5c */
  if (zf) goto L_81ff5c;
L_81fdec: /* 81fdec: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 81fdf2: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81fdf5: jne 0x81ff5c */
  if (!zf) goto L_81ff5c;
L_81fdfb: /* 81fdfb: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 81fdfe: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 81fe04: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 81fe0a: lea esi, [edi + 0x170] */
  esi = (uint32_t)(edi + 0x170u);
/* 81fe10: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 81fe13: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 81fe18: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 81fe1b: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 81fe21: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 81fe23: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 81fe25: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 81fe2b: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 81fe31: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 81fe37: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x81fe3du); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 81fe3d: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 81fe40: fcomp dword ptr [ebp - 0x58] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa8u)));
  FPOP();
/* 81fe43: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81fe45: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81fe48: jp 0x81ff59 */
  if (pf) goto L_81ff59;
L_81fe4e: /* 81fe4e: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 81fe51: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 81fe56: mov ecx, eax */
  ecx = eax;
/* 81fe58: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81fe5a: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 81fe5d: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 81fe60: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 81fe63: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 81fe66: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 81fe68: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 81fe6b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81fe6e: mov edx, esp */
  edx = esp;
/* 81fe70: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 81fe72: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 81fe75: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 81fe78: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 81fe7b: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 81fe7e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81fe81: mov ecx, esi */
  ecx = esi;
/* 81fe83: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 81fe85: mov edx, esp */
  edx = esp;
/* 81fe87: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 81fe89: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 81fe8c: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 81fe8f: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 81fe92: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 81fe95: mov ecx, ebx */
  ecx = ebx;
/* 81fe97: call 0x6c715d */
  esp -= 4; W32(esp, 0x81fe9cu); SPILL(); f_6c715d(); if (g_unwind) return; RELOAD();
/* 81fe9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81fe9e: je 0x81ff2f */
  if (zf) goto L_81ff2f;
L_81fea4: /* 81fea4: mov ecx, edi */
  ecx = edi;
/* 81fea6: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x81feacu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 81feac: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 81feb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81feb3: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 81feb5: push 0xae33e8 */
  { uint32_t v = 0xae33e8u; esp -= 4; W32(esp, v); }
/* 81feba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81febb: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x81fec1u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 81fec1: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 81fec4: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 81fec7: lea ecx, [edi + 0x188] */
  ecx = (uint32_t)(edi + 0x188u);
/* 81fecd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 81fecf: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 81fed2: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 81fed5: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 81fed8: mov edx, dword ptr [edi + 0x390] */
  edx = R32((uint32_t)(edi + 0x390u));
/* 81fede: or edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 81fee1: mov dword ptr [edi + 0x390], edx */
  W32((uint32_t)(edi + 0x390u), edx);
/* 81fee7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 81feea: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 81feed: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 81fef3: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 81fef8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 81fefb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81fefe: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 81ff01: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 81ff07: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 81ff09: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 81ff0c: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 81ff0e: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 81ff14: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 81ff1a: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 81ff20: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x81ff26u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 81ff26: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 81ff29: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 81ff2c: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
L_81ff2f: /* 81ff2f: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 81ff32: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 81ff34: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 81ff36: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81ff38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81ff3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81ff3c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81ff3f: mov eax, esp */
  eax = esp;
/* 81ff41: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 81ff43: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 81ff46: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 81ff49: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 81ff4c: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 81ff4f: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 81ff52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81ff53: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x81ff59u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_81ff59: /* 81ff59: mov esi, dword ptr [ebp - 0x4c] */
  esi = R32((uint32_t)(ebp + 0xffffffb4u));
L_81ff5c: /* 81ff5c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 81ff5d: xor ecx, ecx */
  ecx = 0;
/* 81ff5f: jmp 0x81fdbb */
  goto L_81fdbb;
L_81ff64: /* 81ff64: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 81ff67: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 81ff6d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 81ff6f: mov dword ptr [ebp - 0xa4], eax */
  W32((uint32_t)(ebp + 0xffffff5cu), eax);
/* 81ff75: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 81ff78: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 81ff7b: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* 81ff7e: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 81ff81: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 81ff84: mov dword ptr [ebp - 0xa0], eax */
  W32((uint32_t)(ebp + 0xffffff60u), eax);
/* 81ff8a: mov dword ptr [ebp - 0x9c], edx */
  W32((uint32_t)(ebp + 0xffffff64u), edx);
/* 81ff90: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
L_81ff93: /* 81ff93: cmp dword ptr [ebp - 0x6c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff94u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81ff97: jge 0x820ccf */
  if ((sf == of)) goto L_820ccf;
L_81ff9d: /* 81ff9d: cmp dword ptr [ebp - 0x34], 0x3e8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu))); uint32_t b = (uint32_t)(0x3e8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81ffa4: jge 0x820ccf */
  if ((sf == of)) goto L_820ccf;
L_81ffaa: /* 81ffaa: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 81ffad: fld dword ptr [ebp - 0x9c] */
  { double v = F32((uint32_t)(ebp + 0xffffff64u)); FPUSH(v); }
/* 81ffb3: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 81ffb9: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 81ffbe: fld dword ptr [ebp - 0xa0] */
  { double v = F32((uint32_t)(ebp + 0xffffff60u)); FPUSH(v); }
/* 81ffc4: lea ecx, [ebp - 0x124] */
  ecx = (uint32_t)(ebp + 0xfffffedcu);
/* 81ffca: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 81ffcd: fld dword ptr [ebp - 0xa4] */
  { double v = F32((uint32_t)(ebp + 0xffffff5cu)); FPUSH(v); }
/* 81ffd3: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 81ffd5: fstp dword ptr [ebp - 0x124] */
  WF32((uint32_t)(ebp + 0xfffffedcu), ST0); FPOP();
/* 81ffdb: fstp dword ptr [ebp - 0x120] */
  WF32((uint32_t)(ebp + 0xfffffee0u), ST0); FPOP();
/* 81ffe1: fstp dword ptr [ebp - 0x11c] */
  WF32((uint32_t)(ebp + 0xfffffee4u), ST0); FPOP();
/* 81ffe7: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x81ffedu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 81ffed: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 81fff0: fcomp dword ptr [0xa14cdc] */
  fpu_com(ST0, F32((uint32_t)(0xa14cdcu)));
  FPOP();
/* 81fff6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81fff8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81fffb: jne 0x820028 */
  if (!zf) goto L_820028;
L_81fffd: /* 81fffd: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 820000: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 820005: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 820007: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 82000a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82000d: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 820014: mov dword ptr [ebp - 0xa4], ecx */
  W32((uint32_t)(ebp + 0xffffff5cu), ecx);
/* 82001a: mov dword ptr [ebp - 0xa0], edx */
  W32((uint32_t)(ebp + 0xffffff60u), edx);
/* 820020: mov dword ptr [ebp - 0x9c], eax */
  W32((uint32_t)(ebp + 0xffffff64u), eax);
/* 820026: jmp 0x82002b */
  goto L_82002b;
L_820028: /* 820028: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
L_82002b: /* 82002b: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 82002e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 82002f: cmp eax, 0xc8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 820034: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 820037: jle 0x820057 */
  if ((zf || sf != of)) goto L_820057;
L_820039: /* 820039: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 82003f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 820041: push 0xae3428 */
  { uint32_t v = 0xae3428u; esp -= 4; W32(esp, v); }
/* 820046: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 820047: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x82004du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 82004d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 820050: mov dword ptr [ebp - 0x34], 0x7d0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x7d0u);
L_820057: /* 820057: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 82005a: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 82005d: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 820060: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 820065: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 820068: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 82006a: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 82006d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 820070: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 820073: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 820076: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 82007c: push 0x41400000 */
  { uint32_t v = 0x41400000u; esp -= 4; W32(esp, v); }
/* 820081: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820084: mov edi, esp */
  edi = esp;
/* 820086: fstp dword ptr [ebp - 0x1b8] */
  WF32((uint32_t)(ebp + 0xfffffe48u), ST0); FPOP();
/* 82008c: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 82008f: mov ecx, 0xc */
  ecx = 0xcu;
/* 820094: fmul dword ptr [0xa14ac4] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac4u)));
/* 82009a: lea esi, [ebp - 0x118] */
  esi = (uint32_t)(ebp + 0xfffffee8u);
/* 8200a0: fld dword ptr [ebp - 0x1b8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe48u)); FPUSH(v); }
/* 8200a6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8200a8: fmul dword ptr [0xa14ac4] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac4u)));
/* 8200ae: fstp dword ptr [ebp - 0xcc] */
  WF32((uint32_t)(ebp + 0xffffff34u), ST0); FPOP();
/* 8200b4: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 8200ba: mov edx, dword ptr [ebp - 0xcc] */
  edx = R32((uint32_t)(ebp + 0xffffff34u));
/* 8200c0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8200c3: mov ecx, esp */
  ecx = esp;
/* 8200c5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8200c7: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 8200ca: mov eax, dword ptr [ebp - 0xc8] */
  eax = R32((uint32_t)(ebp + 0xffffff38u));
/* 8200d0: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8200d3: mov dword ptr [ebp - 0xc4], 0 */
  W32((uint32_t)(ebp + 0xffffff3cu), 0x0u);
/* 8200dd: mov edx, dword ptr [ebp - 0xc4] */
  edx = R32((uint32_t)(ebp + 0xffffff3cu));
/* 8200e3: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8200e6: mov ecx, ebx */
  ecx = ebx;
/* 8200e8: call 0x6c9458 */
  esp -= 4; W32(esp, 0x8200edu); SPILL(); f_6c9458(); if (g_unwind) return; RELOAD();
/* 8200ed: mov dword ptr [ebp - 0xa8], eax */
  W32((uint32_t)(ebp + 0xffffff58u), eax);
/* 8200f3: mov ecx, eax */
  ecx = eax;
/* 8200f5: mov eax, 1 */
  eax = 0x1u;
/* 8200fa: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8200fc: je 0x820168 */
  if (zf) goto L_820168;
L_8200fe: /* 8200fe: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 820101: push 0x40833333 */
  { uint32_t v = 0x40833333u; esp -= 4; W32(esp, v); }
/* 820106: fmul dword ptr [0xa14ac4] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac4u)));
/* 82010c: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82010f: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 820112: mov edi, esp */
  edi = esp;
/* 820114: fmul dword ptr [0xa14ac4] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac4u)));
/* 82011a: mov ecx, 0xc */
  ecx = 0xcu;
/* 82011f: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 820122: lea esi, [ebp - 0x118] */
  esi = (uint32_t)(ebp + 0xfffffee8u);
/* 820128: fmul dword ptr [0xa14ac4] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac4u)));
/* 82012e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 820130: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 820136: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 82013c: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 820142: mov ecx, dword ptr [ebp - 0xe4] */
  ecx = R32((uint32_t)(ebp + 0xffffff1cu));
/* 820148: mov edx, dword ptr [ebp - 0xe0] */
  edx = R32((uint32_t)(ebp + 0xffffff20u));
/* 82014e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820151: mov eax, esp */
  eax = esp;
/* 820153: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 820155: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 82015b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 82015e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 820161: mov ecx, ebx */
  ecx = ebx;
/* 820163: call 0x6c9458 */
  esp -= 4; W32(esp, 0x820168u); SPILL(); f_6c9458(); if (g_unwind) return; RELOAD();
L_820168: /* 820168: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 82016b: fld dword ptr [edx + 0x2d8] */
  { double v = F32((uint32_t)(edx + 0x2d8u)); FPUSH(v); }
/* 820171: mov ecx, dword ptr [edx + 0x170] */
  ecx = R32((uint32_t)(edx + 0x170u));
/* 820177: fadd qword ptr [0xa14938] */
  ST0 = ST0 + (F64((uint32_t)(0xa14938u)));
/* 82017d: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 820180: fsubr dword ptr [edx + 0x178] */
  ST0 = (F32((uint32_t)(edx + 0x178u))) - ST0;
/* 820186: lea eax, [edx + 0x170] */
  eax = (uint32_t)(edx + 0x170u);
/* 82018c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 82018f: mov dword ptr [ebp - 0x13c], ecx */
  W32((uint32_t)(ebp + 0xfffffec4u), ecx);
/* 820195: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 820197: fstp dword ptr [ebp - 0x138] */
  WF32((uint32_t)(ebp + 0xfffffec8u), ST0); FPOP();
/* 82019d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8201a0: fstp dword ptr [ebp - 0x134] */
  WF32((uint32_t)(ebp + 0xfffffeccu), ST0); FPOP();
/* 8201a6: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 8201a8: mov ecx, esp */
  ecx = esp;
/* 8201aa: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 8201af: mov dword ptr [ebp - 0xb4], 0x41800000 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x41800000u);
/* 8201b9: mov edi, dword ptr [ebp - 0xb4] */
  edi = R32((uint32_t)(ebp + 0xffffff4cu));
/* 8201bf: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 8201c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8201c2: mov dword ptr [ebp - 0xb0], 0x41800000 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x41800000u);
/* 8201cc: mov edi, dword ptr [ebp - 0xb0] */
  edi = R32((uint32_t)(ebp + 0xffffff50u));
/* 8201d2: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 8201d5: lea eax, [ebp - 0x13c] */
  eax = (uint32_t)(ebp + 0xfffffec4u);
/* 8201db: mov dword ptr [ebp - 0xac], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x3f800000u);
/* 8201e5: mov edi, dword ptr [ebp - 0xac] */
  edi = R32((uint32_t)(ebp + 0xffffff54u));
/* 8201eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8201ec: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 8201ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8201f0: lea ecx, [ebp - 0x118] */
  ecx = (uint32_t)(ebp + 0xfffffee8u);
/* 8201f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8201f7: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8201f9: call dword ptr [esi + 0xd0] */
  { uint32_t t = R32((uint32_t)(esi + 0xd0u)); esp -= 4; W32(esp, 0x8201ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8201ff: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 820202: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 820204: je 0x820b79 */
  if (zf) goto L_820b79;
L_82020a: /* 82020a: fld dword ptr [ebp - 0xf4] */
  { double v = F32((uint32_t)(ebp + 0xffffff0cu)); FPUSH(v); }
/* 820210: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 820216: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 820218: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82021b: jp 0x820b79 */
  if (pf) goto L_820b79;
L_820221: /* 820221: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 820224: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 820229: mov edx, eax */
  edx = eax;
/* 82022b: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 82022d: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 820230: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 820233: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 820236: mov dword ptr [ebp - 0x64], ecx */
  W32((uint32_t)(ebp + 0xffffff9cu), ecx);
/* 820239: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 82023c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82023e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820241: mov ecx, esp */
  ecx = esp;
/* 820243: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 820245: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 820248: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82024b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 82024e: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 820251: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 820257: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 820259: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82025c: mov edx, esp */
  edx = esp;
/* 82025e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 820260: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 820263: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 820266: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 820269: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 82026c: mov ecx, ebx */
  ecx = ebx;
/* 82026e: call 0x6c715d */
  esp -= 4; W32(esp, 0x820273u); SPILL(); f_6c715d(); if (g_unwind) return; RELOAD();
/* 820273: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 820275: jne 0x820b4c */
  if (!zf) goto L_820b4c;
L_82027b: /* 82027b: xor ecx, ecx */
  ecx = 0;
/* 82027d: mov dword ptr [ebp - 0x50], esi */
  W32((uint32_t)(ebp + 0xffffffb0u), esi);
/* 820280: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 820283: mov dword ptr [ebp - 0x70], 0x47800000 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x47800000u);
/* 82028a: mov dword ptr [ebp - 0x58], 0x47800000 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x47800000u);
/* 820291: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
L_820294: /* 820294: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 820296: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 820299: jge 0x82052b */
  if ((sf == of)) goto L_82052b;
L_82029f: /* 82029f: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 8202a2: mov esi, dword ptr [edx + ecx*4] */
  esi = R32((uint32_t)(edx + ecx*4));
/* 8202a5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8202a7: je 0x82051a */
  if (zf) goto L_82051a;
L_8202ad: /* 8202ad: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 8202b3: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8202b6: jne 0x82051a */
  if (!zf) goto L_82051a;
L_8202bc: /* 8202bc: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 8202c1: mov ecx, esi */
  ecx = esi;
/* 8202c3: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8202c9u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8202c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8202cb: je 0x82051a */
  if (zf) goto L_82051a;
L_8202d1: /* 8202d1: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 8202d4: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 8202da: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 8202e0: lea edi, [esi + 0x170] */
  edi = (uint32_t)(esi + 0x170u);
/* 8202e6: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8202e9: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8202ee: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8202f1: lea ecx, [ebp - 0x178] */
  ecx = (uint32_t)(ebp + 0xfffffe88u);
/* 8202f7: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8202f9: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8202fb: fstp dword ptr [ebp - 0x178] */
  WF32((uint32_t)(ebp + 0xfffffe88u), ST0); FPOP();
/* 820301: fstp dword ptr [ebp - 0x174] */
  WF32((uint32_t)(ebp + 0xfffffe8cu), ST0); FPOP();
/* 820307: fstp dword ptr [ebp - 0x170] */
  WF32((uint32_t)(ebp + 0xfffffe90u), ST0); FPOP();
/* 82030d: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x820313u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 820313: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 820316: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 820319: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 82031c: fld dword ptr [ebp - 0x80] */
  { double v = F32((uint32_t)(ebp + 0xffffff80u)); FPUSH(v); }
/* 82031f: fcomp dword ptr [ebp - 0x58] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa8u)));
  FPOP();
/* 820322: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 820324: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 820327: jp 0x82051a */
  if (pf) goto L_82051a;
L_82032d: /* 82032d: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 820330: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 820333: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820336: mov ecx, esp */
  ecx = esp;
/* 820338: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 82033a: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 82033d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 820340: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 820343: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820346: mov eax, edi */
  eax = edi;
/* 820348: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82034a: mov ecx, esp */
  ecx = esp;
/* 82034c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 82034e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 820351: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 820354: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 820357: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 82035a: mov ecx, ebx */
  ecx = ebx;
/* 82035c: call 0x6c715d */
  esp -= 4; W32(esp, 0x820361u); SPILL(); f_6c715d(); if (g_unwind) return; RELOAD();
/* 820361: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 820363: je 0x8204f0 */
  if (zf) goto L_8204f0;
L_820369: /* 820369: fld dword ptr [ebp - 0x80] */
  { double v = F32((uint32_t)(ebp + 0xffffff80u)); FPUSH(v); }
/* 82036c: fcomp dword ptr [ebp - 0x70] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffff90u)));
  FPOP();
/* 82036f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 820371: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 820374: jp 0x82037f */
  if (pf) goto L_82037f;
L_820376: /* 820376: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 820379: mov dword ptr [ebp - 0x70], ecx */
  W32((uint32_t)(ebp + 0xffffff90u), ecx);
/* 82037c: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
L_82037f: /* 82037f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820382: mov edx, edi */
  edx = edi;
/* 820384: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 820386: mov eax, esp */
  eax = esp;
/* 820388: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 82038a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 82038d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 820390: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 820393: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 820396: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 820399: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 82039e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8203a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8203a3: mov ecx, esp */
  ecx = esp;
/* 8203a5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8203a7: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8203aa: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8203ad: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8203b0: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8203b3: mov ecx, ebx */
  ecx = ebx;
/* 8203b5: call 0x6c715d */
  esp -= 4; W32(esp, 0x8203bau); SPILL(); f_6c715d(); if (g_unwind) return; RELOAD();
/* 8203ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8203bc: je 0x8204f0 */
  if (zf) goto L_8204f0;
L_8203c2: /* 8203c2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8203c5: mov ecx, edi */
  ecx = edi;
/* 8203c7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8203c9: mov edx, esp */
  edx = esp;
/* 8203cb: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8203cd: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8203d0: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8203d3: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8203d6: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8203d9: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8203dc: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8203df: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8203e2: mov edx, esp */
  edx = esp;
/* 8203e4: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8203e6: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8203e9: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8203ec: mov ecx, ebx */
  ecx = ebx;
/* 8203ee: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8203f1: call 0x6c715d */
  esp -= 4; W32(esp, 0x8203f6u); SPILL(); f_6c715d(); if (g_unwind) return; RELOAD();
/* 8203f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8203f8: je 0x8204f0 */
  if (zf) goto L_8204f0;
L_8203fe: /* 8203fe: mov ecx, esi */
  ecx = esi;
/* 820400: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x820406u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 820406: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 82040c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82040e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82040f: push 0xae3460 */
  { uint32_t v = 0xae3460u; esp -= 4; W32(esp, v); }
/* 820414: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 820415: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x82041bu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 82041b: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 820421: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 820424: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 820427: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 82042a: je 0x82045d */
  if (zf) goto L_82045d;
L_82042c: /* 82042c: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 82042f: fmul dword ptr [esi + 0x18c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18cu)));
/* 820435: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 820438: fmul dword ptr [esi + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x190u)));
/* 82043e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 820440: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 820443: fmul dword ptr [esi + 0x188] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x188u)));
/* 820449: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82044b: fcomp qword ptr [0xa0d178] */
  fpu_com(ST0, F64((uint32_t)(0xa0d178u)));
  FPOP();
/* 820451: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 820453: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 820456: jne 0x82045d */
  if (!zf) goto L_82045d;
L_820458: /* 820458: inc dword ptr [ebp - 0x6c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff94u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffff94u), r);
  }
/* 82045b: jmp 0x820464 */
  goto L_820464;
L_82045d: /* 82045d: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
L_820464: /* 820464: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 820467: lea eax, [esi + 0x188] */
  eax = (uint32_t)(esi + 0x188u);
/* 82046d: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 82046f: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 820472: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 820475: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 820478: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82047a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82047c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 82047f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 820481: or ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 820484: mov dword ptr [esi + 0x390], ecx */
  W32((uint32_t)(esi + 0x390u), ecx);
/* 82048a: mov esi, dword ptr [ebp - 0x68] */
  esi = R32((uint32_t)(ebp + 0xffffff98u));
/* 82048d: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 82048f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 820491: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820494: mov edx, esp */
  edx = esp;
/* 820496: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 820498: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 82049b: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 82049e: mov esi, dword ptr [ebp - 0x60] */
  esi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8204a1: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 8204a4: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 8204a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8204a8: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x8204aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8204ae: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 8204b1: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 8204b4: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 8204ba: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8204bf: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8204c2: lea ecx, [ebp - 0x154] */
  ecx = (uint32_t)(ebp + 0xfffffeacu);
/* 8204c8: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8204cb: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8204cd: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8204cf: fstp dword ptr [ebp - 0x154] */
  WF32((uint32_t)(ebp + 0xfffffeacu), ST0); FPOP();
/* 8204d5: fstp dword ptr [ebp - 0x150] */
  WF32((uint32_t)(ebp + 0xfffffeb0u), ST0); FPOP();
/* 8204db: fstp dword ptr [ebp - 0x14c] */
  WF32((uint32_t)(ebp + 0xfffffeb4u), ST0); FPOP();
/* 8204e1: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8204e7u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8204e7: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8204ea: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8204ed: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
L_8204f0: /* 8204f0: mov esi, dword ptr [ebp - 0x68] */
  esi = R32((uint32_t)(ebp + 0xffffff98u));
/* 8204f3: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8204f5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8204f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8204f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8204fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8204fd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820500: mov eax, esp */
  eax = esp;
/* 820502: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 820504: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 820507: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 82050a: mov esi, dword ptr [ebp - 0x60] */
  esi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 82050d: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 820510: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 820513: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 820514: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x82051au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_82051a: /* 82051a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 82051d: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 820520: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 820521: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 820524: mov ecx, eax */
  ecx = eax;
/* 820526: jmp 0x820294 */
  goto L_820294;
L_82052b: /* 82052b: cmp esi, dword ptr [ebp - 0x50] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82052e: jne 0x820b4c */
  if (!zf) goto L_820b4c;
L_820534: /* 820534: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 82053a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82053c: push 0xae34ac */
  { uint32_t v = 0xae34acu; esp -= 4; W32(esp, v); }
/* 820541: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 820542: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 820549: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x82054fu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 82054f: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 820552: fcomp dword ptr [0xa08704] */
  fpu_com(ST0, F32((uint32_t)(0xa08704u)));
  FPOP();
/* 820558: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82055b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82055d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 820560: jp 0x820826 */
  if (pf) goto L_820826;
L_820566: /* 820566: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 820569: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 82056c: fadd dword ptr [edi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x178u)));
/* 820572: mov eax, 1 */
  eax = 0x1u;
/* 820577: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 82057a: mov ecx, edi */
  ecx = edi;
/* 82057c: fadd dword ptr [edi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x174u)));
/* 820582: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 820585: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 820588: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 82058b: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 82058e: fadd dword ptr [edi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x170u)));
/* 820594: fstp dword ptr [ebp - 0x1c4] */
  WF32((uint32_t)(ebp + 0xfffffe3cu), ST0); FPOP();
/* 82059a: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8205a0: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8205a3: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8205a9: fld dword ptr [ebp - 0x1c4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe3cu)); FPUSH(v); }
/* 8205af: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8205b5: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8205b8: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8205bb: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8205be: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8205c4u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8205c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8205c5: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8205ca: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8205cc: push 0xae34dc */
  { uint32_t v = 0xae34dcu; esp -= 4; W32(esp, v); }
/* 8205d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8205d2: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8205d8u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8205d8: mov esi, dword ptr [edi + 0x170] */
  esi = R32((uint32_t)(edi + 0x170u));
/* 8205de: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8205e0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8205e2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8205e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8205e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8205e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8205eb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8205ee: mov eax, esp */
  eax = esp;
/* 8205f0: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 8205f2: mov esi, dword ptr [edi + 0x174] */
  esi = R32((uint32_t)(edi + 0x174u));
/* 8205f8: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 8205fb: mov esi, dword ptr [edi + 0x178] */
  esi = R32((uint32_t)(edi + 0x178u));
/* 820601: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 820604: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 820607: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 820608: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x82060eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82060e: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
L_820615: /* 820615: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 820617: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 82061a: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82061d: jge 0x8207c7 */
  if ((sf == of)) goto L_8207c7;
L_820623: /* 820623: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 820626: mov eax, ecx */
  eax = ecx;
/* 820628: mov esi, dword ptr [edx + eax*4] */
  esi = R32((uint32_t)(edx + eax*4));
/* 82062b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82062c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82062d: mov ecx, ebx */
  ecx = ebx;
/* 82062f: call 0x6c9318 */
  esp -= 4; W32(esp, 0x820634u); SPILL(); f_6c9318(); if (g_unwind) return; RELOAD();
/* 820634: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 820636: je 0x8207b8 */
  if (zf) goto L_8207b8;
L_82063c: /* 82063c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 82063f: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 820645: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 82064a: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 820650: add esi, 0x170 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 820656: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 820659: lea ecx, [ebp - 0x160] */
  ecx = (uint32_t)(ebp + 0xfffffea0u);
/* 82065f: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 820662: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 820664: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 820666: fstp dword ptr [ebp - 0x160] */
  WF32((uint32_t)(ebp + 0xfffffea0u), ST0); FPOP();
/* 82066c: fstp dword ptr [ebp - 0x15c] */
  WF32((uint32_t)(ebp + 0xfffffea4u), ST0); FPOP();
/* 820672: fstp dword ptr [ebp - 0x158] */
  WF32((uint32_t)(ebp + 0xfffffea8u), ST0); FPOP();
/* 820678: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x82067eu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 82067e: fst dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0);
/* 820681: fcomp dword ptr [0xa1327c] */
  fpu_com(ST0, F32((uint32_t)(0xa1327cu)));
  FPOP();
/* 820687: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 820689: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82068c: jp 0x8207b8 */
  if (pf) goto L_8207b8;
L_820692: /* 820692: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 820695: mov byte ptr [ecx + 0x50], 1 */
  W8((uint32_t)(ecx + 0x50u), 0x1u);
/* 820699: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 82069c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82069e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8206a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8206a3: mov eax, esi */
  eax = esi;
/* 8206a5: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 8206a7: mov ecx, esp */
  ecx = esp;
/* 8206a9: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 8206ab: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 8206ae: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8206b1: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 8206b4: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8206b7: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 8206ba: call dword ptr [edx + 0x198] */
  { uint32_t t = R32((uint32_t)(edx + 0x198u)); esp -= 4; W32(esp, 0x8206c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8206c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8206c2: je 0x8207b8 */
  if (zf) goto L_8207b8;
L_8206c8: /* 8206c8: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8206cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8206cd: je 0x820739 */
  if (zf) goto L_820739;
L_8206cf: /* 8206cf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8206d2: mov ecx, esi */
  ecx = esi;
/* 8206d4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8206d6: mov edx, esp */
  edx = esp;
/* 8206d8: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8206da: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8206dd: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8206e0: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8206e3: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8206e6: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8206e9: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8206ec: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8206ef: mov edx, esp */
  edx = esp;
/* 8206f1: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8206f3: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8206f6: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8206f9: mov ecx, ebx */
  ecx = ebx;
/* 8206fb: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8206fe: call 0x6c715d */
  esp -= 4; W32(esp, 0x820703u); SPILL(); f_6c715d(); if (g_unwind) return; RELOAD();
/* 820703: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 820706: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 820708: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82070a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 82070d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82070f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 820711: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 820713: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 820718: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 82071a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82071d: mov ecx, esp */
  ecx = esp;
/* 82071f: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 820721: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 820724: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 820727: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 82072a: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 82072d: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 820730: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 820731: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 820733: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x820739u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_820739: /* 820739: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 82073c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82073e: je 0x8207aa */
  if (zf) goto L_8207aa;
L_820740: /* 820740: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 820742: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 820745: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820748: mov edx, esp */
  edx = esp;
/* 82074a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 82074c: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 82074f: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 820752: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 820755: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 820758: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 82075b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82075e: mov ecx, esp */
  ecx = esp;
/* 820760: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 820762: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 820765: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 820768: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 82076b: mov ecx, ebx */
  ecx = ebx;
/* 82076d: call 0x6c715d */
  esp -= 4; W32(esp, 0x820772u); SPILL(); f_6c715d(); if (g_unwind) return; RELOAD();
/* 820772: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 820774: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 820776: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 820778: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 82077b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 82077e: mov edi, dword ptr [eax + 0x170] */
  edi = R32((uint32_t)(eax + 0x170u));
/* 820784: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 820786: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 820788: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 82078d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820790: mov esi, esp */
  esi = esp;
/* 820792: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 820794: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 820797: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82079a: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 82079d: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 8207a0: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 8207a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8207a4: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x8207aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8207aa: /* 8207aa: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8207ad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8207af: jne 0x8207b8 */
  if (!zf) goto L_8207b8;
L_8207b1: /* 8207b1: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8207b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8207b6: je 0x82080f */
  if (zf) goto L_82080f;
L_8207b8: /* 8207b8: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8207bb: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8207be: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8207bf: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 8207c2: jmp 0x820615 */
  goto L_820615;
L_8207c7: /* 8207c7: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8207ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8207cc: je 0x8207ea */
  if (zf) goto L_8207ea;
L_8207ce: /* 8207ce: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8207d1: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8207d4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8207d7: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 8207da: add edi, 0x170 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8207e0: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 8207e2: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 8207e5: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 8207e8: jmp 0x82081f */
  goto L_82081f;
L_8207ea: /* 8207ea: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8207ed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8207ef: je 0x82080f */
  if (zf) goto L_82080f;
L_8207f1: /* 8207f1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8207f4: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8207f7: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8207fa: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8207fd: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 820802: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 820804: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 820807: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 82080a: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 82080d: jmp 0x82081f */
  goto L_82081f;
L_82080f: /* 82080f: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 820812: fcomp dword ptr [0xa0cecc] */
  fpu_com(ST0, F32((uint32_t)(0xa0ceccu)));
  FPOP();
/* 820818: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82081a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82081d: jp 0x820826 */
  if (pf) goto L_820826;
L_82081f: /* 82081f: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
L_820826: /* 820826: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 820829: xor edi, edi */
  edi = 0;
/* 82082b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82082d: mov dword ptr [ebp - 0x1a8], edi */
  W32((uint32_t)(ebp + 0xfffffe58u), edi);
/* 820833: mov dword ptr [ebp - 0x1a4], edi */
  W32((uint32_t)(ebp + 0xfffffe5cu), edi);
/* 820839: mov dword ptr [ebp - 0x1a0], edi */
  W32((uint32_t)(ebp + 0xfffffe60u), edi);
/* 82083f: mov dword ptr [ebp - 0x19c], edi */
  W32((uint32_t)(ebp + 0xfffffe64u), edi);
/* 820845: mov dword ptr [ebp - 0x198], edi */
  W32((uint32_t)(ebp + 0xfffffe68u), edi);
/* 82084b: mov dword ptr [ebp - 0x194], edi */
  W32((uint32_t)(ebp + 0xfffffe6cu), edi);
/* 820851: mov dword ptr [ebp - 0x190], edi */
  W32((uint32_t)(ebp + 0xfffffe70u), edi);
/* 820857: mov dword ptr [ebp - 0x18c], edi */
  W32((uint32_t)(ebp + 0xfffffe74u), edi);
/* 82085d: mov dword ptr [ebp - 0x188], edi */
  W32((uint32_t)(ebp + 0xfffffe78u), edi);
/* 820863: mov dword ptr [ebp - 0x184], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe7cu), 0x3f800000u);
/* 82086d: mov dword ptr [ebp - 0x180], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffe80u), 0xffffffffu);
/* 820877: mov dword ptr [ebp - 0x17c], edi */
  W32((uint32_t)(ebp + 0xfffffe84u), edi);
/* 82087d: jne 0x820b3d */
  if (!zf) goto L_820b3d;
L_820883: /* 820883: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 820886: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 820889: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82088c: mov edx, esp */
  edx = esp;
/* 82088e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 820890: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 820893: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 820896: mov ecx, ebx */
  ecx = ebx;
/* 820898: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 82089b: call 0x6c28dd */
  esp -= 4; W32(esp, 0x8208a0u); SPILL(); f_6c28dd(); if (g_unwind) return; RELOAD();
/* 8208a0: mov esi, eax */
  esi = eax;
/* 8208a2: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8208a4: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 8208a7: je 0x820cea */
  if (zf) goto L_820cea;
L_8208ad: /* 8208ad: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8208b0: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 8208b6: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 8208bc: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 8208c2: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 8208c8: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 8208ce: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 8208d4: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 8208da: fstp dword ptr [ebp - 0x16c] */
  WF32((uint32_t)(ebp + 0xfffffe94u), ST0); FPOP();
/* 8208e0: fstp dword ptr [ebp - 0x168] */
  WF32((uint32_t)(ebp + 0xfffffe98u), ST0); FPOP();
/* 8208e6: fstp dword ptr [ebp - 0x164] */
  WF32((uint32_t)(ebp + 0xfffffe9cu), ST0); FPOP();
/* 8208ec: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8208f2u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8208f2: fst dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0);
/* 8208f5: fcomp dword ptr [0xa0cecc] */
  fpu_com(ST0, F32((uint32_t)(0xa0ceccu)));
  FPOP();
/* 8208fb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8208fd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 820900: jp 0x820994 */
  if (pf) goto L_820994;
L_820906: /* 820906: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 820908: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82090a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82090b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82090c: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x820912u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 820912: mov esi, dword ptr [ebp - 0x50] */
  esi = R32((uint32_t)(ebp + 0xffffffb0u));
L_820915: /* 820915: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
L_820918: /* 820918: mov ecx, dword ptr [esi + 0x368] */
  ecx = R32((uint32_t)(esi + 0x368u));
/* 82091e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 82091f: mov eax, ecx */
  eax = ecx;
/* 820921: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 820924: mov dword ptr [esi + 0x368], ecx */
  W32((uint32_t)(esi + 0x368u), ecx);
/* 82092a: jle 0x820933 */
  if ((zf || sf != of)) goto L_820933;
L_82092c: /* 82092c: mov dword ptr [ebp - 0x34], 0x1388 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x1388u);
L_820933: /* 820933: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 820936: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 820939: lea eax, [esi + 0x188] */
  eax = (uint32_t)(esi + 0x188u);
/* 82093f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 820941: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 820944: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 820947: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 82094a: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 820950: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 820953: mov ecx, esi */
  ecx = esi;
/* 820955: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 82095b: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x820961u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 820961: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 820967: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 82096d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820970: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 820974: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 82097a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 82097d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82097e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 820980: push 0xae3508 */
  { uint32_t v = 0xae3508u; esp -= 4; W32(esp, v); }
/* 820985: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 820986: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x82098cu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 82098c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82098f: jmp 0x820b40 */
  goto L_820b40;
L_820994: /* 820994: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 820997: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 820999: je 0x820a01 */
  if (zf) goto L_820a01;
L_82099b: /* 82099b: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 8209a1: lea ecx, [ebp - 0x130] */
  ecx = (uint32_t)(ebp + 0xfffffed0u);
/* 8209a7: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 8209ad: fld dword ptr [edi + 0x174] */
  { double v = F32((uint32_t)(edi + 0x174u)); FPUSH(v); }
/* 8209b3: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 8209b9: fld dword ptr [edi + 0x170] */
  { double v = F32((uint32_t)(edi + 0x170u)); FPUSH(v); }
/* 8209bf: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 8209c5: fstp dword ptr [ebp - 0x130] */
  WF32((uint32_t)(ebp + 0xfffffed0u), ST0); FPOP();
/* 8209cb: fstp dword ptr [ebp - 0x12c] */
  WF32((uint32_t)(ebp + 0xfffffed4u), ST0); FPOP();
/* 8209d1: fstp dword ptr [ebp - 0x128] */
  WF32((uint32_t)(ebp + 0xfffffed8u), ST0); FPOP();
/* 8209d7: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8209ddu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8209dd: fst dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0);
/* 8209e0: fcomp dword ptr [0xa0cecc] */
  fpu_com(ST0, F32((uint32_t)(0xa0ceccu)));
  FPOP();
/* 8209e6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8209e8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8209eb: jp 0x820a01 */
  if (pf) goto L_820a01;
L_8209ed: /* 8209ed: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8209ef: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8209f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8209f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8209f4: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0x8209fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8209fa: mov esi, edi */
  esi = edi;
/* 8209fc: jmp 0x820915 */
  goto L_820915;
L_820a01: /* 820a01: xor ecx, ecx */
  ecx = 0;
/* 820a03: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 820a06: jmp 0x820a10 */
  goto L_820a10;
L_820a10: /* 820a10: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 820a12: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 820a15: jge 0x820918 */
  if ((sf == of)) goto L_820918;
L_820a1b: /* 820a1b: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 820a1e: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 820a21: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 820a23: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 820a26: je 0x820b2f */
  if (zf) goto L_820b2f;
L_820a2c: /* 820a2c: mov eax, ecx */
  eax = ecx;
/* 820a2e: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 820a30: je 0x820b2f */
  if (zf) goto L_820b2f;
L_820a36: /* 820a36: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 820a3c: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 820a3f: jne 0x820b2f */
  if (!zf) goto L_820b2f;
L_820a45: /* 820a45: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 820a4a: mov ecx, eax */
  ecx = eax;
/* 820a4c: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x820a52u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 820a52: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 820a54: je 0x820b2f */
  if (zf) goto L_820b2f;
L_820a5a: /* 820a5a: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 820a5d: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 820a63: fsub dword ptr [edi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x178u)));
/* 820a69: add edi, 0x170 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 820a6f: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 820a75: lea ecx, [ebp - 0x148] */
  ecx = (uint32_t)(ebp + 0xfffffeb8u);
/* 820a7b: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 820a7e: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 820a84: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 820a86: fstp dword ptr [ebp - 0x148] */
  WF32((uint32_t)(ebp + 0xfffffeb8u), ST0); FPOP();
/* 820a8c: fstp dword ptr [ebp - 0x144] */
  WF32((uint32_t)(ebp + 0xfffffebcu), ST0); FPOP();
/* 820a92: fstp dword ptr [ebp - 0x140] */
  WF32((uint32_t)(ebp + 0xfffffec0u), ST0); FPOP();
/* 820a98: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x820a9eu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 820a9e: fst dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0);
/* 820aa1: fcomp dword ptr [0xa0cecc] */
  fpu_com(ST0, F32((uint32_t)(0xa0ceccu)));
  FPOP();
/* 820aa7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 820aa9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 820aac: jp 0x820b2f */
  if (pf) goto L_820b2f;
L_820ab2: /* 820ab2: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 820ab4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 820ab6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820ab9: mov eax, esp */
  eax = esp;
/* 820abb: mov dword ptr [ebp - 0xd8], 0 */
  W32((uint32_t)(ebp + 0xffffff28u), 0x0u);
/* 820ac5: mov ecx, dword ptr [ebp - 0xd8] */
  ecx = R32((uint32_t)(ebp + 0xffffff28u));
/* 820acb: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 820acd: mov dword ptr [ebp - 0xd4], 0 */
  W32((uint32_t)(ebp + 0xffffff2cu), 0x0u);
/* 820ad7: mov ecx, dword ptr [ebp - 0xd4] */
  ecx = R32((uint32_t)(ebp + 0xffffff2cu));
/* 820add: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 820ae0: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 820ae5: mov dword ptr [ebp - 0xd0], 0 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x0u);
/* 820aef: mov ecx, dword ptr [ebp - 0xd0] */
  ecx = R32((uint32_t)(ebp + 0xffffff30u));
/* 820af5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 820af8: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 820afa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 820afb: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 820b01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 820b02: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 820b03: lea eax, [ebp - 0x1a8] */
  eax = (uint32_t)(ebp + 0xfffffe58u);
/* 820b09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 820b0a: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x820b10u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 820b10: mov eax, dword ptr [ebp - 0x1a4] */
  eax = R32((uint32_t)(ebp + 0xfffffe5cu));
/* 820b16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 820b18: jne 0x820b2f */
  if (!zf) goto L_820b2f;
L_820b1a: /* 820b1a: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 820b1c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 820b1e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 820b20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 820b21: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x820b27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 820b27: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 820b2a: jmp 0x820915 */
  goto L_820915;
L_820b2f: /* 820b2f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 820b32: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 820b33: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 820b36: mov ecx, eax */
  ecx = eax;
/* 820b38: jmp 0x820a10 */
  goto L_820a10;
L_820b3d: /* 820b3d: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
L_820b40: /* 820b40: cmp esi, dword ptr [ebp - 0x50] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 820b43: je 0x820b4c */
  if (zf) goto L_820b4c;
L_820b45: /* 820b45: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
L_820b4c: /* 820b4c: mov esi, dword ptr [ebp - 0x68] */
  esi = R32((uint32_t)(ebp + 0xffffff98u));
/* 820b4f: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 820b51: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 820b53: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 820b55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 820b57: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 820b59: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820b5c: mov eax, esp */
  eax = esp;
/* 820b5e: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 820b60: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 820b63: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 820b66: mov esi, dword ptr [ebp - 0x60] */
  esi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 820b69: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 820b6c: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 820b6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 820b70: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x820b76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 820b76: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
L_820b79: /* 820b79: mov ecx, dword ptr [ebp - 0xa8] */
  ecx = R32((uint32_t)(ebp + 0xffffff58u));
/* 820b7f: mov eax, 1 */
  eax = 0x1u;
/* 820b84: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 820b86: jne 0x820c18 */
  if (!zf) goto L_820c18;
L_820b8c: /* 820b8c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 820b8e: mov esi, dword ptr [ebp - 0x54] */
  esi = R32((uint32_t)(ebp + 0xffffffacu));
/* 820b91: jne 0x820bb7 */
  if (!zf) goto L_820bb7;
L_820b93: /* 820b93: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 820b95: jne 0x820bb7 */
  if (!zf) goto L_820bb7;
L_820b97: /* 820b97: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 820b9a: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 820b9d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820ba0: mov ecx, esp */
  ecx = esp;
/* 820ba2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 820ba4: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 820ba7: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 820baa: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 820bad: mov ecx, ebx */
  ecx = ebx;
/* 820baf: call 0x6c28dd */
  esp -= 4; W32(esp, 0x820bb4u); SPILL(); f_6c28dd(); if (g_unwind) return; RELOAD();
/* 820bb4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_820bb7: /* 820bb7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 820bb8: cmp esi, 0x64 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 820bbb: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 820bbe: jle 0x820bc7 */
  if ((zf || sf != of)) goto L_820bc7;
L_820bc0: /* 820bc0: mov dword ptr [ebp - 0x34], 0xbb8 */
  W32((uint32_t)(ebp + 0xffffffccu), 0xbb8u);
L_820bc7: /* 820bc7: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 820bca: jge 0x81ff93 */
  if ((sf == of)) goto L_81ff93;
L_820bd0: /* 820bd0: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 820bd3: mov dword ptr [ebp - 0xb8], 0 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x0u);
/* 820bdd: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 820be0: mov edx, dword ptr [ebp - 0xb8] */
  edx = R32((uint32_t)(ebp + 0xffffff48u));
/* 820be6: mov dword ptr [ebp + 0x1c], edx */
  W32((uint32_t)(ebp + 0x1cu), edx);
/* 820be9: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 820bef: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 820bf5: mov eax, dword ptr [ebp - 0xc0] */
  eax = R32((uint32_t)(ebp + 0xffffff40u));
/* 820bfb: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 820bfe: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 820c01: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 820c04: fstp dword ptr [ebp - 0xbc] */
  WF32((uint32_t)(ebp + 0xffffff44u), ST0); FPOP();
/* 820c0a: mov ecx, dword ptr [ebp - 0xbc] */
  ecx = R32((uint32_t)(ebp + 0xffffff44u));
/* 820c10: mov dword ptr [ebp + 0x18], ecx */
  W32((uint32_t)(ebp + 0x18u), ecx);
/* 820c13: jmp 0x81ff93 */
  goto L_81ff93;
L_820c18: /* 820c18: cmp dword ptr [ebp - 0x30], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 820c1b: je 0x820cc3 */
  if (zf) goto L_820cc3;
L_820c21: /* 820c21: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 820c24: mov dword ptr [ebp - 0x54], 4 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x4u);
/* 820c2b: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 820c31: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 820c34: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 820c3a: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 820c3d: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 820c43: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 820c49: mov eax, dword ptr [ebp - 0x98] */
  eax = R32((uint32_t)(ebp + 0xffffff68u));
/* 820c4f: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 820c52: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 820c58: mov ecx, dword ptr [ebp - 0x94] */
  ecx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 820c5e: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 820c61: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 820c67: mov edx, dword ptr [ebp - 0x90] */
  edx = R32((uint32_t)(ebp + 0xffffff70u));
/* 820c6d: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 820c70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 820c71: mov ecx, ebx */
  ecx = ebx;
/* 820c73: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 820c76: call 0x6cb3a2 */
  esp -= 4; W32(esp, 0x820c7bu); SPILL(); f_6cb3a2(); if (g_unwind) return; RELOAD();
/* 820c7b: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 820c7e: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 820c81: mov dword ptr [ebp - 0x84], 0 */
  W32((uint32_t)(ebp + 0xffffff7cu), 0x0u);
/* 820c8b: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 820c91: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 820c94: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 820c9a: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 820ca0: mov ecx, dword ptr [ebp - 0x8c] */
  ecx = R32((uint32_t)(ebp + 0xffffff74u));
/* 820ca6: fld dword ptr [ebp - 0x7c] */
  { double v = F32((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* 820ca9: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 820cac: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 820caf: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 820cb5: mov edx, dword ptr [ebp - 0x88] */
  edx = R32((uint32_t)(ebp + 0xffffff78u));
/* 820cbb: mov dword ptr [ebp + 0x18], edx */
  W32((uint32_t)(ebp + 0x18u), edx);
/* 820cbe: jmp 0x81ff93 */
  goto L_81ff93;
L_820cc3: /* 820cc3: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 820cca: jmp 0x81ff93 */
  goto L_81ff93;
L_820ccf: /* 820ccf: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 820cd2: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 820cd8: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 820cda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 820cdb: push 0xae3564 */
  { uint32_t v = 0xae3564u; esp -= 4; W32(esp, v); }
/* 820ce0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 820ce1: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x820ce7u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 820ce7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_820cea: /* 820cea: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 820ced: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 820cee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 820cef: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 820cf6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 820cf7: mov esp, ebp */
  esp = ebp;
/* 820cf9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 820cfa: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_820a08(void) {
  LOAD_REGS();
  goto L_820a08;
L_81ff93: /* 81ff93: cmp dword ptr [ebp - 0x6c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff94u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81ff97: jge 0x820ccf */
  if ((sf == of)) goto L_820ccf;
L_81ff9d: /* 81ff9d: cmp dword ptr [ebp - 0x34], 0x3e8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu))); uint32_t b = (uint32_t)(0x3e8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81ffa4: jge 0x820ccf */
  if ((sf == of)) goto L_820ccf;
L_81ffaa: /* 81ffaa: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 81ffad: fld dword ptr [ebp - 0x9c] */
  { double v = F32((uint32_t)(ebp + 0xffffff64u)); FPUSH(v); }
/* 81ffb3: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 81ffb9: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 81ffbe: fld dword ptr [ebp - 0xa0] */
  { double v = F32((uint32_t)(ebp + 0xffffff60u)); FPUSH(v); }
/* 81ffc4: lea ecx, [ebp - 0x124] */
  ecx = (uint32_t)(ebp + 0xfffffedcu);
/* 81ffca: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 81ffcd: fld dword ptr [ebp - 0xa4] */
  { double v = F32((uint32_t)(ebp + 0xffffff5cu)); FPUSH(v); }
/* 81ffd3: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 81ffd5: fstp dword ptr [ebp - 0x124] */
  WF32((uint32_t)(ebp + 0xfffffedcu), ST0); FPOP();
/* 81ffdb: fstp dword ptr [ebp - 0x120] */
  WF32((uint32_t)(ebp + 0xfffffee0u), ST0); FPOP();
/* 81ffe1: fstp dword ptr [ebp - 0x11c] */
  WF32((uint32_t)(ebp + 0xfffffee4u), ST0); FPOP();
/* 81ffe7: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x81ffedu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 81ffed: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 81fff0: fcomp dword ptr [0xa14cdc] */
  fpu_com(ST0, F32((uint32_t)(0xa14cdcu)));
  FPOP();
/* 81fff6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81fff8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81fffb: jne 0x820028 */
  if (!zf) goto L_820028;
L_81fffd: /* 81fffd: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 820000: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 820005: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 820007: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 82000a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82000d: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 820014: mov dword ptr [ebp - 0xa4], ecx */
  W32((uint32_t)(ebp + 0xffffff5cu), ecx);
/* 82001a: mov dword ptr [ebp - 0xa0], edx */
  W32((uint32_t)(ebp + 0xffffff60u), edx);
/* 820020: mov dword ptr [ebp - 0x9c], eax */
  W32((uint32_t)(ebp + 0xffffff64u), eax);
/* 820026: jmp 0x82002b */
  goto L_82002b;
L_820028: /* 820028: inc dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
L_82002b: /* 82002b: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 82002e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 82002f: cmp eax, 0xc8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 820034: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 820037: jle 0x820057 */
  if ((zf || sf != of)) goto L_820057;
L_820039: /* 820039: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 82003f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 820041: push 0xae3428 */
  { uint32_t v = 0xae3428u; esp -= 4; W32(esp, v); }
/* 820046: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 820047: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x82004du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 82004d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 820050: mov dword ptr [ebp - 0x34], 0x7d0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x7d0u);
L_820057: /* 820057: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 82005a: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 82005d: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 820060: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 820065: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 820068: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 82006a: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 82006d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 820070: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 820073: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 820076: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 82007c: push 0x41400000 */
  { uint32_t v = 0x41400000u; esp -= 4; W32(esp, v); }
/* 820081: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820084: mov edi, esp */
  edi = esp;
/* 820086: fstp dword ptr [ebp - 0x1b8] */
  WF32((uint32_t)(ebp + 0xfffffe48u), ST0); FPOP();
/* 82008c: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 82008f: mov ecx, 0xc */
  ecx = 0xcu;
/* 820094: fmul dword ptr [0xa14ac4] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac4u)));
/* 82009a: lea esi, [ebp - 0x118] */
  esi = (uint32_t)(ebp + 0xfffffee8u);
/* 8200a0: fld dword ptr [ebp - 0x1b8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe48u)); FPUSH(v); }
/* 8200a6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8200a8: fmul dword ptr [0xa14ac4] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac4u)));
/* 8200ae: fstp dword ptr [ebp - 0xcc] */
  WF32((uint32_t)(ebp + 0xffffff34u), ST0); FPOP();
/* 8200b4: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 8200ba: mov edx, dword ptr [ebp - 0xcc] */
  edx = R32((uint32_t)(ebp + 0xffffff34u));
/* 8200c0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8200c3: mov ecx, esp */
  ecx = esp;
/* 8200c5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8200c7: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 8200ca: mov eax, dword ptr [ebp - 0xc8] */
  eax = R32((uint32_t)(ebp + 0xffffff38u));
/* 8200d0: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8200d3: mov dword ptr [ebp - 0xc4], 0 */
  W32((uint32_t)(ebp + 0xffffff3cu), 0x0u);
/* 8200dd: mov edx, dword ptr [ebp - 0xc4] */
  edx = R32((uint32_t)(ebp + 0xffffff3cu));
/* 8200e3: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8200e6: mov ecx, ebx */
  ecx = ebx;
/* 8200e8: call 0x6c9458 */
  esp -= 4; W32(esp, 0x8200edu); SPILL(); f_6c9458(); if (g_unwind) return; RELOAD();
/* 8200ed: mov dword ptr [ebp - 0xa8], eax */
  W32((uint32_t)(ebp + 0xffffff58u), eax);
/* 8200f3: mov ecx, eax */
  ecx = eax;
/* 8200f5: mov eax, 1 */
  eax = 0x1u;
/* 8200fa: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8200fc: je 0x820168 */
  if (zf) goto L_820168;
L_8200fe: /* 8200fe: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 820101: push 0x40833333 */
  { uint32_t v = 0x40833333u; esp -= 4; W32(esp, v); }
/* 820106: fmul dword ptr [0xa14ac4] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac4u)));
/* 82010c: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82010f: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 820112: mov edi, esp */
  edi = esp;
/* 820114: fmul dword ptr [0xa14ac4] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac4u)));
/* 82011a: mov ecx, 0xc */
  ecx = 0xcu;
/* 82011f: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 820122: lea esi, [ebp - 0x118] */
  esi = (uint32_t)(ebp + 0xfffffee8u);
/* 820128: fmul dword ptr [0xa14ac4] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac4u)));
/* 82012e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 820130: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 820136: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 82013c: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 820142: mov ecx, dword ptr [ebp - 0xe4] */
  ecx = R32((uint32_t)(ebp + 0xffffff1cu));
/* 820148: mov edx, dword ptr [ebp - 0xe0] */
  edx = R32((uint32_t)(ebp + 0xffffff20u));
/* 82014e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820151: mov eax, esp */
  eax = esp;
/* 820153: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 820155: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 82015b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 82015e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 820161: mov ecx, ebx */
  ecx = ebx;
/* 820163: call 0x6c9458 */
  esp -= 4; W32(esp, 0x820168u); SPILL(); f_6c9458(); if (g_unwind) return; RELOAD();
L_820168: /* 820168: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 82016b: fld dword ptr [edx + 0x2d8] */
  { double v = F32((uint32_t)(edx + 0x2d8u)); FPUSH(v); }
/* 820171: mov ecx, dword ptr [edx + 0x170] */
  ecx = R32((uint32_t)(edx + 0x170u));
/* 820177: fadd qword ptr [0xa14938] */
  ST0 = ST0 + (F64((uint32_t)(0xa14938u)));
/* 82017d: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 820180: fsubr dword ptr [edx + 0x178] */
  ST0 = (F32((uint32_t)(edx + 0x178u))) - ST0;
/* 820186: lea eax, [edx + 0x170] */
  eax = (uint32_t)(edx + 0x170u);
/* 82018c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 82018f: mov dword ptr [ebp - 0x13c], ecx */
  W32((uint32_t)(ebp + 0xfffffec4u), ecx);
/* 820195: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 820197: fstp dword ptr [ebp - 0x138] */
  WF32((uint32_t)(ebp + 0xfffffec8u), ST0); FPOP();
/* 82019d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8201a0: fstp dword ptr [ebp - 0x134] */
  WF32((uint32_t)(ebp + 0xfffffeccu), ST0); FPOP();
/* 8201a6: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 8201a8: mov ecx, esp */
  ecx = esp;
/* 8201aa: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 8201af: mov dword ptr [ebp - 0xb4], 0x41800000 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x41800000u);
/* 8201b9: mov edi, dword ptr [ebp - 0xb4] */
  edi = R32((uint32_t)(ebp + 0xffffff4cu));
/* 8201bf: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 8201c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8201c2: mov dword ptr [ebp - 0xb0], 0x41800000 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x41800000u);
/* 8201cc: mov edi, dword ptr [ebp - 0xb0] */
  edi = R32((uint32_t)(ebp + 0xffffff50u));
/* 8201d2: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 8201d5: lea eax, [ebp - 0x13c] */
  eax = (uint32_t)(ebp + 0xfffffec4u);
/* 8201db: mov dword ptr [ebp - 0xac], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x3f800000u);
/* 8201e5: mov edi, dword ptr [ebp - 0xac] */
  edi = R32((uint32_t)(ebp + 0xffffff54u));
/* 8201eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8201ec: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 8201ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8201f0: lea ecx, [ebp - 0x118] */
  ecx = (uint32_t)(ebp + 0xfffffee8u);
/* 8201f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8201f7: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8201f9: call dword ptr [esi + 0xd0] */
  { uint32_t t = R32((uint32_t)(esi + 0xd0u)); esp -= 4; W32(esp, 0x8201ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8201ff: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 820202: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 820204: je 0x820b79 */
  if (zf) goto L_820b79;
L_82020a: /* 82020a: fld dword ptr [ebp - 0xf4] */
  { double v = F32((uint32_t)(ebp + 0xffffff0cu)); FPUSH(v); }
/* 820210: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 820216: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 820218: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82021b: jp 0x820b79 */
  if (pf) goto L_820b79;
L_820221: /* 820221: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 820224: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 820229: mov edx, eax */
  edx = eax;
/* 82022b: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 82022d: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 820230: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 820233: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 820236: mov dword ptr [ebp - 0x64], ecx */
  W32((uint32_t)(ebp + 0xffffff9cu), ecx);
/* 820239: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 82023c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82023e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820241: mov ecx, esp */
  ecx = esp;
/* 820243: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 820245: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 820248: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82024b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 82024e: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 820251: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 820257: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 820259: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82025c: mov edx, esp */
  edx = esp;
/* 82025e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 820260: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 820263: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 820266: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 820269: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 82026c: mov ecx, ebx */
  ecx = ebx;
/* 82026e: call 0x6c715d */
  esp -= 4; W32(esp, 0x820273u); SPILL(); f_6c715d(); if (g_unwind) return; RELOAD();
/* 820273: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 820275: jne 0x820b4c */
  if (!zf) goto L_820b4c;
L_82027b: /* 82027b: xor ecx, ecx */
  ecx = 0;
/* 82027d: mov dword ptr [ebp - 0x50], esi */
  W32((uint32_t)(ebp + 0xffffffb0u), esi);
/* 820280: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 820283: mov dword ptr [ebp - 0x70], 0x47800000 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x47800000u);
/* 82028a: mov dword ptr [ebp - 0x58], 0x47800000 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x47800000u);
/* 820291: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
L_820294: /* 820294: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 820296: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 820299: jge 0x82052b */
  if ((sf == of)) goto L_82052b;
L_82029f: /* 82029f: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 8202a2: mov esi, dword ptr [edx + ecx*4] */
  esi = R32((uint32_t)(edx + ecx*4));
/* 8202a5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8202a7: je 0x82051a */
  if (zf) goto L_82051a;
L_8202ad: /* 8202ad: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 8202b3: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8202b6: jne 0x82051a */
  if (!zf) goto L_82051a;
L_8202bc: /* 8202bc: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 8202c1: mov ecx, esi */
  ecx = esi;
/* 8202c3: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8202c9u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8202c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8202cb: je 0x82051a */
  if (zf) goto L_82051a;
L_8202d1: /* 8202d1: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 8202d4: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 8202da: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 8202e0: lea edi, [esi + 0x170] */
  edi = (uint32_t)(esi + 0x170u);
/* 8202e6: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8202e9: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8202ee: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8202f1: lea ecx, [ebp - 0x178] */
  ecx = (uint32_t)(ebp + 0xfffffe88u);
/* 8202f7: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8202f9: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8202fb: fstp dword ptr [ebp - 0x178] */
  WF32((uint32_t)(ebp + 0xfffffe88u), ST0); FPOP();
/* 820301: fstp dword ptr [ebp - 0x174] */
  WF32((uint32_t)(ebp + 0xfffffe8cu), ST0); FPOP();
/* 820307: fstp dword ptr [ebp - 0x170] */
  WF32((uint32_t)(ebp + 0xfffffe90u), ST0); FPOP();
/* 82030d: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x820313u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 820313: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 820316: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 820319: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 82031c: fld dword ptr [ebp - 0x80] */
  { double v = F32((uint32_t)(ebp + 0xffffff80u)); FPUSH(v); }
/* 82031f: fcomp dword ptr [ebp - 0x58] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa8u)));
  FPOP();
/* 820322: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 820324: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 820327: jp 0x82051a */
  if (pf) goto L_82051a;
L_82032d: /* 82032d: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 820330: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 820333: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820336: mov ecx, esp */
  ecx = esp;
/* 820338: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 82033a: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 82033d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 820340: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 820343: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820346: mov eax, edi */
  eax = edi;
/* 820348: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82034a: mov ecx, esp */
  ecx = esp;
/* 82034c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 82034e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 820351: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 820354: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 820357: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 82035a: mov ecx, ebx */
  ecx = ebx;
/* 82035c: call 0x6c715d */
  esp -= 4; W32(esp, 0x820361u); SPILL(); f_6c715d(); if (g_unwind) return; RELOAD();
/* 820361: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 820363: je 0x8204f0 */
  if (zf) goto L_8204f0;
L_820369: /* 820369: fld dword ptr [ebp - 0x80] */
  { double v = F32((uint32_t)(ebp + 0xffffff80u)); FPUSH(v); }
/* 82036c: fcomp dword ptr [ebp - 0x70] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffff90u)));
  FPOP();
/* 82036f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 820371: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 820374: jp 0x82037f */
  if (pf) goto L_82037f;
L_820376: /* 820376: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 820379: mov dword ptr [ebp - 0x70], ecx */
  W32((uint32_t)(ebp + 0xffffff90u), ecx);
/* 82037c: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
L_82037f: /* 82037f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820382: mov edx, edi */
  edx = edi;
/* 820384: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 820386: mov eax, esp */
  eax = esp;
/* 820388: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 82038a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 82038d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 820390: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 820393: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 820396: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 820399: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 82039e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8203a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8203a3: mov ecx, esp */
  ecx = esp;
/* 8203a5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8203a7: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8203aa: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8203ad: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8203b0: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8203b3: mov ecx, ebx */
  ecx = ebx;
/* 8203b5: call 0x6c715d */
  esp -= 4; W32(esp, 0x8203bau); SPILL(); f_6c715d(); if (g_unwind) return; RELOAD();
/* 8203ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8203bc: je 0x8204f0 */
  if (zf) goto L_8204f0;
L_8203c2: /* 8203c2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8203c5: mov ecx, edi */
  ecx = edi;
/* 8203c7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8203c9: mov edx, esp */
  edx = esp;
/* 8203cb: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8203cd: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8203d0: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8203d3: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8203d6: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8203d9: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8203dc: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8203df: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8203e2: mov edx, esp */
  edx = esp;
/* 8203e4: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8203e6: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8203e9: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8203ec: mov ecx, ebx */
  ecx = ebx;
/* 8203ee: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8203f1: call 0x6c715d */
  esp -= 4; W32(esp, 0x8203f6u); SPILL(); f_6c715d(); if (g_unwind) return; RELOAD();
/* 8203f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8203f8: je 0x8204f0 */
  if (zf) goto L_8204f0;
L_8203fe: /* 8203fe: mov ecx, esi */
  ecx = esi;
/* 820400: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x820406u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 820406: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 82040c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82040e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82040f: push 0xae3460 */
  { uint32_t v = 0xae3460u; esp -= 4; W32(esp, v); }
/* 820414: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 820415: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x82041bu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 82041b: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 820421: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 820424: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 820427: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 82042a: je 0x82045d */
  if (zf) goto L_82045d;
L_82042c: /* 82042c: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 82042f: fmul dword ptr [esi + 0x18c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18cu)));
/* 820435: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 820438: fmul dword ptr [esi + 0x190] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x190u)));
/* 82043e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 820440: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 820443: fmul dword ptr [esi + 0x188] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x188u)));
/* 820449: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82044b: fcomp qword ptr [0xa0d178] */
  fpu_com(ST0, F64((uint32_t)(0xa0d178u)));
  FPOP();
/* 820451: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 820453: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 820456: jne 0x82045d */
  if (!zf) goto L_82045d;
L_820458: /* 820458: inc dword ptr [ebp - 0x6c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff94u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffff94u), r);
  }
/* 82045b: jmp 0x820464 */
  goto L_820464;
L_82045d: /* 82045d: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
L_820464: /* 820464: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 820467: lea eax, [esi + 0x188] */
  eax = (uint32_t)(esi + 0x188u);
/* 82046d: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 82046f: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 820472: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 820475: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 820478: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82047a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82047c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 82047f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 820481: or ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 820484: mov dword ptr [esi + 0x390], ecx */
  W32((uint32_t)(esi + 0x390u), ecx);
/* 82048a: mov esi, dword ptr [ebp - 0x68] */
  esi = R32((uint32_t)(ebp + 0xffffff98u));
/* 82048d: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 82048f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 820491: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820494: mov edx, esp */
  edx = esp;
/* 820496: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 820498: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 82049b: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 82049e: mov esi, dword ptr [ebp - 0x60] */
  esi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8204a1: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 8204a4: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 8204a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8204a8: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x8204aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8204ae: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 8204b1: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 8204b4: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 8204ba: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8204bf: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8204c2: lea ecx, [ebp - 0x154] */
  ecx = (uint32_t)(ebp + 0xfffffeacu);
/* 8204c8: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8204cb: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8204cd: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8204cf: fstp dword ptr [ebp - 0x154] */
  WF32((uint32_t)(ebp + 0xfffffeacu), ST0); FPOP();
/* 8204d5: fstp dword ptr [ebp - 0x150] */
  WF32((uint32_t)(ebp + 0xfffffeb0u), ST0); FPOP();
/* 8204db: fstp dword ptr [ebp - 0x14c] */
  WF32((uint32_t)(ebp + 0xfffffeb4u), ST0); FPOP();
/* 8204e1: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8204e7u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8204e7: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8204ea: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8204ed: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
L_8204f0: /* 8204f0: mov esi, dword ptr [ebp - 0x68] */
  esi = R32((uint32_t)(ebp + 0xffffff98u));
/* 8204f3: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8204f5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8204f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8204f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8204fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8204fd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820500: mov eax, esp */
  eax = esp;
/* 820502: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 820504: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 820507: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 82050a: mov esi, dword ptr [ebp - 0x60] */
  esi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 82050d: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 820510: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 820513: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 820514: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x82051au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_82051a: /* 82051a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 82051d: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 820520: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 820521: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 820524: mov ecx, eax */
  ecx = eax;
/* 820526: jmp 0x820294 */
  goto L_820294;
L_82052b: /* 82052b: cmp esi, dword ptr [ebp - 0x50] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82052e: jne 0x820b4c */
  if (!zf) goto L_820b4c;
L_820534: /* 820534: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 82053a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82053c: push 0xae34ac */
  { uint32_t v = 0xae34acu; esp -= 4; W32(esp, v); }
/* 820541: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 820542: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 820549: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x82054fu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 82054f: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 820552: fcomp dword ptr [0xa08704] */
  fpu_com(ST0, F32((uint32_t)(0xa08704u)));
  FPOP();
/* 820558: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82055b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82055d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 820560: jp 0x820826 */
  if (pf) goto L_820826;
L_820566: /* 820566: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 820569: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 82056c: fadd dword ptr [edi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x178u)));
/* 820572: mov eax, 1 */
  eax = 0x1u;
/* 820577: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 82057a: mov ecx, edi */
  ecx = edi;
/* 82057c: fadd dword ptr [edi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x174u)));
/* 820582: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 820585: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 820588: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 82058b: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 82058e: fadd dword ptr [edi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x170u)));
/* 820594: fstp dword ptr [ebp - 0x1c4] */
  WF32((uint32_t)(ebp + 0xfffffe3cu), ST0); FPOP();
/* 82059a: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8205a0: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8205a3: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8205a9: fld dword ptr [ebp - 0x1c4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe3cu)); FPUSH(v); }
/* 8205af: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8205b5: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8205b8: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8205bb: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8205be: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8205c4u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8205c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8205c5: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8205ca: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8205cc: push 0xae34dc */
  { uint32_t v = 0xae34dcu; esp -= 4; W32(esp, v); }
/* 8205d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8205d2: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8205d8u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8205d8: mov esi, dword ptr [edi + 0x170] */
  esi = R32((uint32_t)(edi + 0x170u));
/* 8205de: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8205e0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8205e2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8205e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8205e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8205e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8205eb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8205ee: mov eax, esp */
  eax = esp;
/* 8205f0: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 8205f2: mov esi, dword ptr [edi + 0x174] */
  esi = R32((uint32_t)(edi + 0x174u));
/* 8205f8: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 8205fb: mov esi, dword ptr [edi + 0x178] */
  esi = R32((uint32_t)(edi + 0x178u));
/* 820601: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 820604: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 820607: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 820608: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x82060eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82060e: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
L_820615: /* 820615: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 820617: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 82061a: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82061d: jge 0x8207c7 */
  if ((sf == of)) goto L_8207c7;
L_820623: /* 820623: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 820626: mov eax, ecx */
  eax = ecx;
/* 820628: mov esi, dword ptr [edx + eax*4] */
  esi = R32((uint32_t)(edx + eax*4));
/* 82062b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82062c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82062d: mov ecx, ebx */
  ecx = ebx;
/* 82062f: call 0x6c9318 */
  esp -= 4; W32(esp, 0x820634u); SPILL(); f_6c9318(); if (g_unwind) return; RELOAD();
/* 820634: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 820636: je 0x8207b8 */
  if (zf) goto L_8207b8;
L_82063c: /* 82063c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 82063f: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 820645: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 82064a: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 820650: add esi, 0x170 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 820656: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 820659: lea ecx, [ebp - 0x160] */
  ecx = (uint32_t)(ebp + 0xfffffea0u);
/* 82065f: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 820662: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 820664: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 820666: fstp dword ptr [ebp - 0x160] */
  WF32((uint32_t)(ebp + 0xfffffea0u), ST0); FPOP();
/* 82066c: fstp dword ptr [ebp - 0x15c] */
  WF32((uint32_t)(ebp + 0xfffffea4u), ST0); FPOP();
/* 820672: fstp dword ptr [ebp - 0x158] */
  WF32((uint32_t)(ebp + 0xfffffea8u), ST0); FPOP();
/* 820678: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x82067eu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 82067e: fst dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0);
/* 820681: fcomp dword ptr [0xa1327c] */
  fpu_com(ST0, F32((uint32_t)(0xa1327cu)));
  FPOP();
/* 820687: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 820689: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82068c: jp 0x8207b8 */
  if (pf) goto L_8207b8;
L_820692: /* 820692: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 820695: mov byte ptr [ecx + 0x50], 1 */
  W8((uint32_t)(ecx + 0x50u), 0x1u);
/* 820699: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 82069c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82069e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8206a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8206a3: mov eax, esi */
  eax = esi;
/* 8206a5: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 8206a7: mov ecx, esp */
  ecx = esp;
/* 8206a9: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 8206ab: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 8206ae: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8206b1: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 8206b4: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8206b7: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 8206ba: call dword ptr [edx + 0x198] */
  { uint32_t t = R32((uint32_t)(edx + 0x198u)); esp -= 4; W32(esp, 0x8206c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8206c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8206c2: je 0x8207b8 */
  if (zf) goto L_8207b8;
L_8206c8: /* 8206c8: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8206cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8206cd: je 0x820739 */
  if (zf) goto L_820739;
L_8206cf: /* 8206cf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8206d2: mov ecx, esi */
  ecx = esi;
/* 8206d4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8206d6: mov edx, esp */
  edx = esp;
/* 8206d8: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8206da: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8206dd: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8206e0: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8206e3: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8206e6: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8206e9: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8206ec: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8206ef: mov edx, esp */
  edx = esp;
/* 8206f1: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8206f3: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8206f6: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8206f9: mov ecx, ebx */
  ecx = ebx;
/* 8206fb: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8206fe: call 0x6c715d */
  esp -= 4; W32(esp, 0x820703u); SPILL(); f_6c715d(); if (g_unwind) return; RELOAD();
/* 820703: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 820706: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 820708: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82070a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 82070d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82070f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 820711: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 820713: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 820718: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 82071a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82071d: mov ecx, esp */
  ecx = esp;
/* 82071f: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 820721: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 820724: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 820727: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 82072a: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 82072d: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 820730: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 820731: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 820733: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x820739u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_820739: /* 820739: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 82073c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82073e: je 0x8207aa */
  if (zf) goto L_8207aa;
L_820740: /* 820740: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 820742: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 820745: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820748: mov edx, esp */
  edx = esp;
/* 82074a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 82074c: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 82074f: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 820752: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 820755: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 820758: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 82075b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82075e: mov ecx, esp */
  ecx = esp;
/* 820760: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 820762: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 820765: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 820768: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 82076b: mov ecx, ebx */
  ecx = ebx;
/* 82076d: call 0x6c715d */
  esp -= 4; W32(esp, 0x820772u); SPILL(); f_6c715d(); if (g_unwind) return; RELOAD();
/* 820772: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 820774: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 820776: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 820778: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 82077b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 82077e: mov edi, dword ptr [eax + 0x170] */
  edi = R32((uint32_t)(eax + 0x170u));
/* 820784: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 820786: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 820788: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 82078d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820790: mov esi, esp */
  esi = esp;
/* 820792: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 820794: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 820797: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82079a: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 82079d: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 8207a0: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 8207a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8207a4: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x8207aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8207aa: /* 8207aa: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8207ad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8207af: jne 0x8207b8 */
  if (!zf) goto L_8207b8;
L_8207b1: /* 8207b1: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8207b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8207b6: je 0x82080f */
  if (zf) goto L_82080f;
L_8207b8: /* 8207b8: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8207bb: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8207be: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8207bf: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 8207c2: jmp 0x820615 */
  goto L_820615;
L_8207c7: /* 8207c7: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8207ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8207cc: je 0x8207ea */
  if (zf) goto L_8207ea;
L_8207ce: /* 8207ce: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8207d1: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8207d4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8207d7: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 8207da: add edi, 0x170 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8207e0: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 8207e2: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 8207e5: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 8207e8: jmp 0x82081f */
  goto L_82081f;
L_8207ea: /* 8207ea: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8207ed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8207ef: je 0x82080f */
  if (zf) goto L_82080f;
L_8207f1: /* 8207f1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8207f4: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8207f7: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8207fa: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8207fd: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 820802: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 820804: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 820807: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 82080a: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 82080d: jmp 0x82081f */
  goto L_82081f;
L_82080f: /* 82080f: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 820812: fcomp dword ptr [0xa0cecc] */
  fpu_com(ST0, F32((uint32_t)(0xa0ceccu)));
  FPOP();
/* 820818: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82081a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82081d: jp 0x820826 */
  if (pf) goto L_820826;
L_82081f: /* 82081f: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
L_820826: /* 820826: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 820829: xor edi, edi */
  edi = 0;
/* 82082b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82082d: mov dword ptr [ebp - 0x1a8], edi */
  W32((uint32_t)(ebp + 0xfffffe58u), edi);
/* 820833: mov dword ptr [ebp - 0x1a4], edi */
  W32((uint32_t)(ebp + 0xfffffe5cu), edi);
/* 820839: mov dword ptr [ebp - 0x1a0], edi */
  W32((uint32_t)(ebp + 0xfffffe60u), edi);
/* 82083f: mov dword ptr [ebp - 0x19c], edi */
  W32((uint32_t)(ebp + 0xfffffe64u), edi);
/* 820845: mov dword ptr [ebp - 0x198], edi */
  W32((uint32_t)(ebp + 0xfffffe68u), edi);
/* 82084b: mov dword ptr [ebp - 0x194], edi */
  W32((uint32_t)(ebp + 0xfffffe6cu), edi);
/* 820851: mov dword ptr [ebp - 0x190], edi */
  W32((uint32_t)(ebp + 0xfffffe70u), edi);
/* 820857: mov dword ptr [ebp - 0x18c], edi */
  W32((uint32_t)(ebp + 0xfffffe74u), edi);
/* 82085d: mov dword ptr [ebp - 0x188], edi */
  W32((uint32_t)(ebp + 0xfffffe78u), edi);
/* 820863: mov dword ptr [ebp - 0x184], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe7cu), 0x3f800000u);
/* 82086d: mov dword ptr [ebp - 0x180], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffe80u), 0xffffffffu);
/* 820877: mov dword ptr [ebp - 0x17c], edi */
  W32((uint32_t)(ebp + 0xfffffe84u), edi);
/* 82087d: jne 0x820b3d */
  if (!zf) goto L_820b3d;
L_820883: /* 820883: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 820886: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 820889: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82088c: mov edx, esp */
  edx = esp;
/* 82088e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 820890: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 820893: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 820896: mov ecx, ebx */
  ecx = ebx;
/* 820898: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 82089b: call 0x6c28dd */
  esp -= 4; W32(esp, 0x8208a0u); SPILL(); f_6c28dd(); if (g_unwind) return; RELOAD();
/* 8208a0: mov esi, eax */
  esi = eax;
/* 8208a2: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8208a4: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 8208a7: je 0x820cea */
  if (zf) goto L_820cea;
L_8208ad: /* 8208ad: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8208b0: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 8208b6: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 8208bc: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 8208c2: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 8208c8: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 8208ce: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 8208d4: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 8208da: fstp dword ptr [ebp - 0x16c] */
  WF32((uint32_t)(ebp + 0xfffffe94u), ST0); FPOP();
/* 8208e0: fstp dword ptr [ebp - 0x168] */
  WF32((uint32_t)(ebp + 0xfffffe98u), ST0); FPOP();
/* 8208e6: fstp dword ptr [ebp - 0x164] */
  WF32((uint32_t)(ebp + 0xfffffe9cu), ST0); FPOP();
/* 8208ec: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8208f2u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8208f2: fst dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0);
/* 8208f5: fcomp dword ptr [0xa0cecc] */
  fpu_com(ST0, F32((uint32_t)(0xa0ceccu)));
  FPOP();
/* 8208fb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8208fd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 820900: jp 0x820994 */
  if (pf) goto L_820994;
L_820906: /* 820906: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 820908: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82090a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82090b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82090c: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x820912u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 820912: mov esi, dword ptr [ebp - 0x50] */
  esi = R32((uint32_t)(ebp + 0xffffffb0u));
L_820915: /* 820915: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
L_820918: /* 820918: mov ecx, dword ptr [esi + 0x368] */
  ecx = R32((uint32_t)(esi + 0x368u));
/* 82091e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 82091f: mov eax, ecx */
  eax = ecx;
/* 820921: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 820924: mov dword ptr [esi + 0x368], ecx */
  W32((uint32_t)(esi + 0x368u), ecx);
/* 82092a: jle 0x820933 */
  if ((zf || sf != of)) goto L_820933;
L_82092c: /* 82092c: mov dword ptr [ebp - 0x34], 0x1388 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x1388u);
L_820933: /* 820933: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 820936: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 820939: lea eax, [esi + 0x188] */
  eax = (uint32_t)(esi + 0x188u);
/* 82093f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 820941: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 820944: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 820947: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 82094a: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 820950: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 820953: mov ecx, esi */
  ecx = esi;
/* 820955: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 82095b: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x820961u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 820961: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 820967: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 82096d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820970: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 820974: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 82097a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 82097d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82097e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 820980: push 0xae3508 */
  { uint32_t v = 0xae3508u; esp -= 4; W32(esp, v); }
/* 820985: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 820986: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x82098cu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 82098c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82098f: jmp 0x820b40 */
  goto L_820b40;
L_820994: /* 820994: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 820997: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 820999: je 0x820a01 */
  if (zf) goto L_820a01;
L_82099b: /* 82099b: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 8209a1: lea ecx, [ebp - 0x130] */
  ecx = (uint32_t)(ebp + 0xfffffed0u);
/* 8209a7: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 8209ad: fld dword ptr [edi + 0x174] */
  { double v = F32((uint32_t)(edi + 0x174u)); FPUSH(v); }
/* 8209b3: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 8209b9: fld dword ptr [edi + 0x170] */
  { double v = F32((uint32_t)(edi + 0x170u)); FPUSH(v); }
/* 8209bf: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 8209c5: fstp dword ptr [ebp - 0x130] */
  WF32((uint32_t)(ebp + 0xfffffed0u), ST0); FPOP();
/* 8209cb: fstp dword ptr [ebp - 0x12c] */
  WF32((uint32_t)(ebp + 0xfffffed4u), ST0); FPOP();
/* 8209d1: fstp dword ptr [ebp - 0x128] */
  WF32((uint32_t)(ebp + 0xfffffed8u), ST0); FPOP();
/* 8209d7: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8209ddu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8209dd: fst dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0);
/* 8209e0: fcomp dword ptr [0xa0cecc] */
  fpu_com(ST0, F32((uint32_t)(0xa0ceccu)));
  FPOP();
/* 8209e6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8209e8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8209eb: jp 0x820a01 */
  if (pf) goto L_820a01;
L_8209ed: /* 8209ed: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8209ef: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8209f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8209f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8209f4: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0x8209fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8209fa: mov esi, edi */
  esi = edi;
/* 8209fc: jmp 0x820915 */
  goto L_820915;
L_820a01: /* 820a01: xor ecx, ecx */
  ecx = 0;
/* 820a03: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 820a06: jmp 0x820a10 */
  goto L_820a10;
L_820a08: /* 820a08: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 820a0f: nop  */
L_820a10: /* 820a10: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 820a12: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 820a15: jge 0x820918 */
  if ((sf == of)) goto L_820918;
L_820a1b: /* 820a1b: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 820a1e: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 820a21: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 820a23: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 820a26: je 0x820b2f */
  if (zf) goto L_820b2f;
L_820a2c: /* 820a2c: mov eax, ecx */
  eax = ecx;
/* 820a2e: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 820a30: je 0x820b2f */
  if (zf) goto L_820b2f;
L_820a36: /* 820a36: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 820a3c: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 820a3f: jne 0x820b2f */
  if (!zf) goto L_820b2f;
L_820a45: /* 820a45: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 820a4a: mov ecx, eax */
  ecx = eax;
/* 820a4c: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x820a52u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 820a52: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 820a54: je 0x820b2f */
  if (zf) goto L_820b2f;
L_820a5a: /* 820a5a: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 820a5d: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 820a63: fsub dword ptr [edi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x178u)));
/* 820a69: add edi, 0x170 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 820a6f: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 820a75: lea ecx, [ebp - 0x148] */
  ecx = (uint32_t)(ebp + 0xfffffeb8u);
/* 820a7b: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 820a7e: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 820a84: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 820a86: fstp dword ptr [ebp - 0x148] */
  WF32((uint32_t)(ebp + 0xfffffeb8u), ST0); FPOP();
/* 820a8c: fstp dword ptr [ebp - 0x144] */
  WF32((uint32_t)(ebp + 0xfffffebcu), ST0); FPOP();
/* 820a92: fstp dword ptr [ebp - 0x140] */
  WF32((uint32_t)(ebp + 0xfffffec0u), ST0); FPOP();
/* 820a98: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x820a9eu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 820a9e: fst dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0);
/* 820aa1: fcomp dword ptr [0xa0cecc] */
  fpu_com(ST0, F32((uint32_t)(0xa0ceccu)));
  FPOP();
/* 820aa7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 820aa9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 820aac: jp 0x820b2f */
  if (pf) goto L_820b2f;
L_820ab2: /* 820ab2: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 820ab4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 820ab6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820ab9: mov eax, esp */
  eax = esp;
/* 820abb: mov dword ptr [ebp - 0xd8], 0 */
  W32((uint32_t)(ebp + 0xffffff28u), 0x0u);
/* 820ac5: mov ecx, dword ptr [ebp - 0xd8] */
  ecx = R32((uint32_t)(ebp + 0xffffff28u));
/* 820acb: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 820acd: mov dword ptr [ebp - 0xd4], 0 */
  W32((uint32_t)(ebp + 0xffffff2cu), 0x0u);
/* 820ad7: mov ecx, dword ptr [ebp - 0xd4] */
  ecx = R32((uint32_t)(ebp + 0xffffff2cu));
/* 820add: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 820ae0: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 820ae5: mov dword ptr [ebp - 0xd0], 0 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x0u);
/* 820aef: mov ecx, dword ptr [ebp - 0xd0] */
  ecx = R32((uint32_t)(ebp + 0xffffff30u));
/* 820af5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 820af8: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 820afa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 820afb: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 820b01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 820b02: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 820b03: lea eax, [ebp - 0x1a8] */
  eax = (uint32_t)(ebp + 0xfffffe58u);
/* 820b09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 820b0a: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x820b10u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 820b10: mov eax, dword ptr [ebp - 0x1a4] */
  eax = R32((uint32_t)(ebp + 0xfffffe5cu));
/* 820b16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 820b18: jne 0x820b2f */
  if (!zf) goto L_820b2f;
L_820b1a: /* 820b1a: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 820b1c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 820b1e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 820b20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 820b21: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x820b27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 820b27: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 820b2a: jmp 0x820915 */
  goto L_820915;
L_820b2f: /* 820b2f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 820b32: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 820b33: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 820b36: mov ecx, eax */
  ecx = eax;
/* 820b38: jmp 0x820a10 */
  goto L_820a10;
L_820b3d: /* 820b3d: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
L_820b40: /* 820b40: cmp esi, dword ptr [ebp - 0x50] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 820b43: je 0x820b4c */
  if (zf) goto L_820b4c;
L_820b45: /* 820b45: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
L_820b4c: /* 820b4c: mov esi, dword ptr [ebp - 0x68] */
  esi = R32((uint32_t)(ebp + 0xffffff98u));
/* 820b4f: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 820b51: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 820b53: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 820b55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 820b57: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 820b59: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820b5c: mov eax, esp */
  eax = esp;
/* 820b5e: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 820b60: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 820b63: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 820b66: mov esi, dword ptr [ebp - 0x60] */
  esi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 820b69: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 820b6c: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 820b6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 820b70: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x820b76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 820b76: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
L_820b79: /* 820b79: mov ecx, dword ptr [ebp - 0xa8] */
  ecx = R32((uint32_t)(ebp + 0xffffff58u));
/* 820b7f: mov eax, 1 */
  eax = 0x1u;
/* 820b84: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 820b86: jne 0x820c18 */
  if (!zf) goto L_820c18;
L_820b8c: /* 820b8c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 820b8e: mov esi, dword ptr [ebp - 0x54] */
  esi = R32((uint32_t)(ebp + 0xffffffacu));
/* 820b91: jne 0x820bb7 */
  if (!zf) goto L_820bb7;
L_820b93: /* 820b93: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 820b95: jne 0x820bb7 */
  if (!zf) goto L_820bb7;
L_820b97: /* 820b97: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 820b9a: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 820b9d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 820ba0: mov ecx, esp */
  ecx = esp;
/* 820ba2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 820ba4: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 820ba7: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 820baa: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 820bad: mov ecx, ebx */
  ecx = ebx;
/* 820baf: call 0x6c28dd */
  esp -= 4; W32(esp, 0x820bb4u); SPILL(); f_6c28dd(); if (g_unwind) return; RELOAD();
/* 820bb4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_820bb7: /* 820bb7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 820bb8: cmp esi, 0x64 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 820bbb: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 820bbe: jle 0x820bc7 */
  if ((zf || sf != of)) goto L_820bc7;
L_820bc0: /* 820bc0: mov dword ptr [ebp - 0x34], 0xbb8 */
  W32((uint32_t)(ebp + 0xffffffccu), 0xbb8u);
L_820bc7: /* 820bc7: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 820bca: jge 0x81ff93 */
  if ((sf == of)) goto L_81ff93;
L_820bd0: /* 820bd0: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 820bd3: mov dword ptr [ebp - 0xb8], 0 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x0u);
/* 820bdd: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 820be0: mov edx, dword ptr [ebp - 0xb8] */
  edx = R32((uint32_t)(ebp + 0xffffff48u));
/* 820be6: mov dword ptr [ebp + 0x1c], edx */
  W32((uint32_t)(ebp + 0x1cu), edx);
/* 820be9: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 820bef: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 820bf5: mov eax, dword ptr [ebp - 0xc0] */
  eax = R32((uint32_t)(ebp + 0xffffff40u));
/* 820bfb: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 820bfe: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 820c01: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 820c04: fstp dword ptr [ebp - 0xbc] */
  WF32((uint32_t)(ebp + 0xffffff44u), ST0); FPOP();
/* 820c0a: mov ecx, dword ptr [ebp - 0xbc] */
  ecx = R32((uint32_t)(ebp + 0xffffff44u));
/* 820c10: mov dword ptr [ebp + 0x18], ecx */
  W32((uint32_t)(ebp + 0x18u), ecx);
/* 820c13: jmp 0x81ff93 */
  goto L_81ff93;
L_820c18: /* 820c18: cmp dword ptr [ebp - 0x30], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 820c1b: je 0x820cc3 */
  if (zf) goto L_820cc3;
L_820c21: /* 820c21: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 820c24: mov dword ptr [ebp - 0x54], 4 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x4u);
/* 820c2b: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 820c31: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 820c34: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 820c3a: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 820c3d: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 820c43: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 820c49: mov eax, dword ptr [ebp - 0x98] */
  eax = R32((uint32_t)(ebp + 0xffffff68u));
/* 820c4f: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 820c52: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 820c58: mov ecx, dword ptr [ebp - 0x94] */
  ecx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 820c5e: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 820c61: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 820c67: mov edx, dword ptr [ebp - 0x90] */
  edx = R32((uint32_t)(ebp + 0xffffff70u));
/* 820c6d: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 820c70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 820c71: mov ecx, ebx */
  ecx = ebx;
/* 820c73: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 820c76: call 0x6cb3a2 */
  esp -= 4; W32(esp, 0x820c7bu); SPILL(); f_6cb3a2(); if (g_unwind) return; RELOAD();
/* 820c7b: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 820c7e: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 820c81: mov dword ptr [ebp - 0x84], 0 */
  W32((uint32_t)(ebp + 0xffffff7cu), 0x0u);
/* 820c8b: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 820c91: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 820c94: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 820c9a: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 820ca0: mov ecx, dword ptr [ebp - 0x8c] */
  ecx = R32((uint32_t)(ebp + 0xffffff74u));
/* 820ca6: fld dword ptr [ebp - 0x7c] */
  { double v = F32((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* 820ca9: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 820cac: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 820caf: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 820cb5: mov edx, dword ptr [ebp - 0x88] */
  edx = R32((uint32_t)(ebp + 0xffffff78u));
/* 820cbb: mov dword ptr [ebp + 0x18], edx */
  W32((uint32_t)(ebp + 0x18u), edx);
/* 820cbe: jmp 0x81ff93 */
  goto L_81ff93;
L_820cc3: /* 820cc3: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 820cca: jmp 0x81ff93 */
  goto L_81ff93;
L_820ccf: /* 820ccf: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 820cd2: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 820cd8: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 820cda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 820cdb: push 0xae3564 */
  { uint32_t v = 0xae3564u; esp -= 4; W32(esp, v); }
/* 820ce0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 820ce1: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x820ce7u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 820ce7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_820cea: /* 820cea: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 820ced: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 820cee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 820cef: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 820cf6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 820cf7: mov esp, ebp */
  esp = ebp;
/* 820cf9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 820cfa: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_820cfd(void) {
  LOAD_REGS();
L_820cfd: /* 820cfd: mov ecx, dword ptr [ebp - 0x1ac] */
  ecx = R32((uint32_t)(ebp + 0xfffffe54u));
/* 820d03: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 820d08: lea edx, [ebp - 0xe8] */
  edx = (uint32_t)(ebp + 0xffffff18u);
/* 820d0e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 820d0f: mov dword ptr [ebp - 0xe8], ecx */
  W32((uint32_t)(ebp + 0xffffff18u), ecx);
/* 820d15: call 0x99caf8 */
  esp -= 4; W32(esp, 0x820d1au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_820d1a(); return;
}

void f_820d1a(void) {
  LOAD_REGS();
L_820d1a: /* 820d1a: push 0xa14ca0 */
  { uint32_t v = 0xa14ca0u; esp -= 4; W32(esp, v); }
/* 820d1f: push 0xae3580 */
  { uint32_t v = 0xae3580u; esp -= 4; W32(esp, v); }
/* 820d24: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x820d2au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 820d2a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 820d2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 820d2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 820d31: call 0x99caf8 */
  esp -= 4; W32(esp, 0x820d36u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_820d36: guest_badaddr(0x820d36); return;
}

void f_8211a0(void) {
  LOAD_REGS();
L_8211a0: /* 8211a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8211a1: mov ebp, esp */
  ebp = esp;
/* 8211a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8211a5: push 0x9d2f39 */
  { uint32_t v = 0x9d2f39u; esp -= 4; W32(esp, v); }
/* 8211aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8211b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8211b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8211b8: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8211bb: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8211c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8211c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8211c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8211c3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8211c6: mov ebx, ecx */
  ebx = ecx;
/* 8211c8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8211ca: push 0xae2904 */
  { uint32_t v = 0xae2904u; esp -= 4; W32(esp, v); }
/* 8211cf: xor edi, edi */
  edi = 0;
/* 8211d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8211d2: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8211d5: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8211d8: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8211deu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8211de: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 8211e4: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8211e6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8211e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8211eb: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x8211eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8211ee: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 8211f4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8211f6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8211f8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8211fa: push 0xae2940 */
  { uint32_t v = 0xae2940u; esp -= 4; W32(esp, v); }
/* 8211ff: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x821202u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821202: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 821205: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 821207: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 821209: je 0x82144c */
  if (zf) goto L_82144c;
L_82120f: /* 82120f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 821212: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 821214: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 821216: je 0x82144c */
  if (zf) goto L_82144c;
L_82121c: /* 82121c: mov ecx, dword ptr [eax + 0x510] */
  ecx = R32((uint32_t)(eax + 0x510u));
/* 821222: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 821224: je 0x82144c */
  if (zf) goto L_82144c;
L_82122a: /* 82122a: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 82122d: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 821230: mov esi, ecx */
  esi = ecx;
L_821232: /* 821232: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 821234: je 0x821257 */
  if (zf) goto L_821257;
L_821236: /* 821236: push 0xb62c58 */
  { uint32_t v = 0xb62c58u; esp -= 4; W32(esp, v); }
/* 82123b: mov ecx, esi */
  ecx = esi;
/* 82123d: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x821243u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 821243: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 821245: je 0x821248 */
  if (zf) goto L_821248;
L_821247: /* 821247: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_821248: /* 821248: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 82124b: mov esi, dword ptr [esi + 0x370] */
  esi = R32((uint32_t)(esi + 0x370u));
/* 821251: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 821252: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 821255: jmp 0x821232 */
  goto L_821232;
L_821257: /* 821257: cmp edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82125a: jge 0x8212a6 */
  if ((sf == of)) goto L_8212a6;
L_82125c: /* 82125c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82125d: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 821260: push 0xae29c8 */
  { uint32_t v = 0xae29c8u; esp -= 4; W32(esp, v); }
/* 821265: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 821266: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x82126cu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 82126c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82126f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 821271: mov ecx, dword ptr [edx + 0x2c] */
  ecx = R32((uint32_t)(edx + 0x2cu));
/* 821274: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 821276: mov ecx, eax */
  ecx = eax;
/* 821278: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 82127c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x821282u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 821282: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 821288: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 82128a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82128c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82128d: mov eax, dword ptr [esi + 0x510] */
  eax = R32((uint32_t)(esi + 0x510u));
/* 821293: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 821294: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 821296: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x821299u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821299: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 82129c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8212a0: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8212a6u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_8212a6: /* 8212a6: mov ecx, ebx */
  ecx = ebx;
/* 8212a8: call 0x6c4322 */
  esp -= 4; W32(esp, 0x8212adu); SPILL(); f_6c4322(); if (g_unwind) return; RELOAD();
/* 8212ad: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8212af: mov ecx, ebx */
  ecx = ebx;
/* 8212b1: call 0x6c938b */
  esp -= 4; W32(esp, 0x8212b6u); SPILL(); f_6c938b(); if (g_unwind) return; RELOAD();
/* 8212b6: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8212b8: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 8212bb: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8212bd: mov esi, dword ptr [eax + 0x510] */
  esi = R32((uint32_t)(eax + 0x510u));
L_8212c3: /* 8212c3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8212c5: je 0x821301 */
  if (zf) goto L_821301;
L_8212c7: /* 8212c7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8212ca: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 8212cf: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8212d1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8212d3: push 0xae2a10 */
  { uint32_t v = 0xae2a10u; esp -= 4; W32(esp, v); }
/* 8212d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8212d9: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8212dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8212dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8212de: call dword ptr [ecx + 0x14] */
  { uint32_t t = R32((uint32_t)(ecx + 0x14u)); esp -= 4; W32(esp, 0x8212e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8212e1: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 8212e4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8212e6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8212e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8212ea: mov ecx, esi */
  ecx = esi;
/* 8212ec: call dword ptr [eax + 0x1b0] */
  { uint32_t t = R32((uint32_t)(eax + 0x1b0u)); esp -= 4; W32(esp, 0x8212f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8212f2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8212f5: mov esi, dword ptr [esi + 0x370] */
  esi = R32((uint32_t)(esi + 0x370u));
/* 8212fb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8212fc: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8212ff: jmp 0x8212c3 */
  goto L_8212c3;
L_821301: /* 821301: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 821303: mov ecx, ebx */
  ecx = ebx;
/* 821305: call 0x6c938b */
  esp -= 4; W32(esp, 0x82130au); SPILL(); f_6c938b(); if (g_unwind) return; RELOAD();
/* 82130a: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 82130d: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 82130f: mov eax, dword ptr [eax + 0x33c] */
  eax = R32((uint32_t)(eax + 0x33cu));
/* 821315: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 821317: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 821319: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82131a: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x821320u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821320: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 821322: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 821325: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 821327: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 821329: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82132a: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x821330u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821330: xor ebx, ebx */
  ebx = 0;
L_821332: /* 821332: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 821335: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 821337: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 82133a: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82133c: jge 0x82145f */
  if ((sf == of)) goto L_82145f;
L_821342: /* 821342: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 821348: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 82134a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82134c: push 0xae2a30 */
  { uint32_t v = 0xae2a30u; esp -= 4; W32(esp, v); }
/* 821351: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 821352: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 821353: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 821354: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x821357u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821357: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 821359: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 82135c: mov edi, dword ptr [ecx + ebx*4] */
  edi = R32((uint32_t)(ecx + ebx*4));
/* 82135f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 821362: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 821364: je 0x8213ff */
  if (zf) goto L_8213ff;
L_82136a: /* 82136a: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 82136f: mov ecx, edi */
  ecx = edi;
/* 821371: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x821377u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 821377: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 821379: je 0x8213ff */
  if (zf) goto L_8213ff;
L_82137f: /* 82137f: test byte ptr [edi + 0x654], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x654u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 821386: jne 0x8213ff */
  if (!zf) goto L_8213ff;
L_821388: /* 821388: mov esi, dword ptr [edi + 0x650] */
  esi = R32((uint32_t)(edi + 0x650u));
/* 82138e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 821390: jne 0x8213a8 */
  if (!zf) goto L_8213a8;
L_821392: /* 821392: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 821398: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 82139a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 82139c: push 0xae2a58 */
  { uint32_t v = 0xae2a58u; esp -= 4; W32(esp, v); }
/* 8213a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8213a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8213a3: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x8213a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8213a6: jmp 0x8213ff */
  goto L_8213ff;
L_8213a8: /* 8213a8: push 0xb66038 */
  { uint32_t v = 0xb66038u; esp -= 4; W32(esp, v); }
/* 8213ad: mov ecx, esi */
  ecx = esi;
/* 8213af: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8213b5u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8213b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8213b7: je 0x8213ff */
  if (zf) goto L_8213ff;
L_8213b9: /* 8213b9: lea ecx, [edi + 0x100] */
  ecx = (uint32_t)(edi + 0x100u);
/* 8213bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8213c0: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 8213c6: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x8213ccu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 8213cc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8213ce: je 0x8213e5 */
  if (zf) goto L_8213e5;
L_8213d0: /* 8213d0: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 8213d6: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8213d8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8213da: push 0xae2ab8 */
  { uint32_t v = 0xae2ab8u; esp -= 4; W32(esp, v); }
/* 8213df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8213e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8213e2: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x8213e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8213e5: /* 8213e5: cmp dword ptr [esi + 0x5c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x5cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8213e8: je 0x8213ff */
  if (zf) goto L_8213ff;
L_8213ea: /* 8213ea: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 8213f0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8213f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8213f4: push 0xae2b30 */
  { uint32_t v = 0xae2b30u; esp -= 4; W32(esp, v); }
/* 8213f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8213fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8213fc: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x8213ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8213ff: /* 8213ff: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 821402: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 821404: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 821407: mov esi, dword ptr [edx + ebx*4] */
  esi = R32((uint32_t)(edx + ebx*4));
/* 82140a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82140c: je 0x821446 */
  if (zf) goto L_821446;
L_82140e: /* 82140e: push 0xb68ee8 */
  { uint32_t v = 0xb68ee8u; esp -= 4; W32(esp, v); }
/* 821413: mov ecx, esi */
  ecx = esi;
/* 821415: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x82141bu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 82141b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82141d: je 0x821446 */
  if (zf) goto L_821446;
L_82141f: /* 82141f: mov ecx, esi */
  ecx = esi;
/* 821421: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x821427u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 821427: mov ecx, dword ptr [eax + 0x498] */
  ecx = R32((uint32_t)(eax + 0x498u));
/* 82142d: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 821430: jne 0x821446 */
  if (!zf) goto L_821446;
L_821432: /* 821432: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 821437: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 821439: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82143b: push 0xae2b78 */
  { uint32_t v = 0xae2b78u; esp -= 4; W32(esp, v); }
/* 821440: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 821441: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 821443: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x821446u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_821446: /* 821446: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 821447: jmp 0x821332 */
  goto L_821332;
L_82144c: /* 82144c: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 821451: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 821453: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 821455: push 0xae2968 */
  { uint32_t v = 0xae2968u; esp -= 4; W32(esp, v); }
/* 82145a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82145b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82145c: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x82145fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_82145f: /* 82145f: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 821464: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 821466: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 821468: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x82146bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82146b: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 821470: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 821472: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 821474: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x821477u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821477: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82147a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82147b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82147c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 821483: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 821484: mov esp, ebp */
  esp = ebp;
/* 821486: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 821487: ret 4 */
  esp += 8; SPILL(); return;
}

void f_82148a(void) {
  LOAD_REGS();
L_82148a: /* 82148a: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 82148d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 821492: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 821495: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 821496: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 821499: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82149eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_82149e(); return;
}

void f_82149e(void) {
  LOAD_REGS();
L_82149e: /* 82149e: push 0xa14ce0 */
  { uint32_t v = 0xa14ce0u; esp -= 4; W32(esp, v); }
/* 8214a3: push 0xae2bc4 */
  { uint32_t v = 0xae2bc4u; esp -= 4; W32(esp, v); }
/* 8214a8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8214aeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8214ae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8214b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8214b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8214b5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8214bau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8214ba: guest_badaddr(0x8214ba); return;
}

void f_821590(void) {
  LOAD_REGS();
L_821590: /* 821590: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 821591: mov ebp, esp */
  ebp = esp;
/* 821593: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 821595: push 0x9d2f50 */
  { uint32_t v = 0x9d2f50u; esp -= 4; W32(esp, v); }
/* 82159a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8215a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8215a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8215a8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8215ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8215ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8215ad: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8215b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8215b1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8215b4: mov edi, ecx */
  edi = ecx;
/* 8215b6: xor ebx, ebx */
  ebx = 0;
/* 8215b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8215b9: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 8215bc: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8215bf: call 0x6c2ea0 */
  esp -= 4; W32(esp, 0x8215c4u); SPILL(); f_6c2ea0(); if (g_unwind) return; RELOAD();
/* 8215c4: mov ecx, edi */
  ecx = edi;
/* 8215c6: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* 8215c8: call 0x6c4322 */
  esp -= 4; W32(esp, 0x8215cdu); SPILL(); f_6c4322(); if (g_unwind) return; RELOAD();
/* 8215cd: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8215cf: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 8215d2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8215d4: mov dword ptr [eax + 0x510], ebx */
  W32((uint32_t)(eax + 0x510u), ebx);
/* 8215da: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8215dc: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 8215df: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8215e1: and dword ptr [eax + 0x44c], 0xffffffdf */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x44cu))); uint32_t b = (uint32_t)(0xffffffdfu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x44cu), r);
  }
/* 8215e8: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 8215ee: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8215f0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8215f2: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x8215f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8215f5: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 8215fa: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8215fc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8215fe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 821600: push 0xae2bd4 */
  { uint32_t v = 0xae2bd4u; esp -= 4; W32(esp, v); }
/* 821605: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x821608u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821608: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82160a: mov ecx, edi */
  ecx = edi;
/* 82160c: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 82160f: call 0x6c938b */
  esp -= 4; W32(esp, 0x821614u); SPILL(); f_6c938b(); if (g_unwind) return; RELOAD();
/* 821614: xor esi, esi */
  esi = 0;
L_821616: /* 821616: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 821618: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 82161b: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82161d: jge 0x821655 */
  if ((sf == of)) goto L_821655;
L_82161f: /* 82161f: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 821625: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 821627: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 821629: push 0xae2bf4 */
  { uint32_t v = 0xae2bf4u; esp -= 4; W32(esp, v); }
/* 82162e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82162f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 821630: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 821631: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x821634u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821634: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 821636: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 821639: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 82163c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82163f: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 821641: je 0x821652 */
  if (zf) goto L_821652;
L_821643: /* 821643: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 821646: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 821648: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 821649: call dword ptr [edx + 0x150] */
  { uint32_t t = R32((uint32_t)(edx + 0x150u)); esp -= 4; W32(esp, 0x82164fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82164f: add dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
L_821652: /* 821652: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 821653: jmp 0x821616 */
  goto L_821616;
L_821655: /* 821655: xor ebx, ebx */
  ebx = 0;
/* 821657: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 82165a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_821660: /* 821660: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 821662: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 821665: cmp edx, dword ptr [ecx + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 821668: jge 0x8216df */
  if ((sf == of)) goto L_8216df;
L_82166a: /* 82166a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 82166d: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 821672: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 821674: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 821676: push 0xae2c08 */
  { uint32_t v = 0xae2c08u; esp -= 4; W32(esp, v); }
/* 82167b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82167c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82167d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82167e: call dword ptr [ecx + 0x14] */
  { uint32_t t = R32((uint32_t)(ecx + 0x14u)); esp -= 4; W32(esp, 0x821681u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821681: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 821683: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 821686: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 821689: mov esi, dword ptr [ecx + edx*4] */
  esi = R32((uint32_t)(ecx + edx*4));
/* 82168c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82168f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 821691: je 0x8216da */
  if (zf) goto L_8216da;
L_821693: /* 821693: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 821698: mov ecx, esi */
  ecx = esi;
/* 82169a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8216a0u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8216a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8216a2: je 0x8216da */
  if (zf) goto L_8216da;
L_8216a4: /* 8216a4: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 8216aa: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8216ad: jne 0x8216da */
  if (!zf) goto L_8216da;
L_8216af: /* 8216af: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8216b1: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 8216b4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8216b6: mov edx, dword ptr [eax + 0x510] */
  edx = R32((uint32_t)(eax + 0x510u));
/* 8216bc: mov dword ptr [esi + 0x370], edx */
  W32((uint32_t)(esi + 0x370u), edx);
/* 8216c2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8216c4: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 8216c7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8216c9: mov dword ptr [eax + 0x510], esi */
  W32((uint32_t)(eax + 0x510u), esi);
/* 8216cf: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8216d1: mov ecx, esi */
  ecx = esi;
/* 8216d3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8216d4: call dword ptr [edx + 0x1a8] */
  { uint32_t t = R32((uint32_t)(edx + 0x1a8u)); esp -= 4; W32(esp, 0x8216dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8216da: /* 8216da: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 8216dd: jmp 0x821660 */
  goto L_821660;
L_8216df: /* 8216df: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8216e1: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 8216e4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8216e6: mov esi, dword ptr [eax + 0x510] */
  esi = R32((uint32_t)(eax + 0x510u));
/* 8216ec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8216f0: /* 8216f0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8216f2: je 0x821706 */
  if (zf) goto L_821706;
L_8216f4: /* 8216f4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8216f6: mov ecx, esi */
  ecx = esi;
/* 8216f8: call dword ptr [edx + 0x19c] */
  { uint32_t t = R32((uint32_t)(edx + 0x19cu)); esp -= 4; W32(esp, 0x8216feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8216fe: mov esi, dword ptr [esi + 0x370] */
  esi = R32((uint32_t)(esi + 0x370u));
/* 821704: jmp 0x8216f0 */
  goto L_8216f0;
L_821706: /* 821706: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 82170b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 82170d: push 0xae2c40 */
  { uint32_t v = 0xae2c40u; esp -= 4; W32(esp, v); }
/* 821712: push 0x305 */
  { uint32_t v = 0x305u; esp -= 4; W32(esp, v); }
/* 821717: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 821718: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x82171eu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 82171e: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 821720: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 821723: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 821725: mov esi, dword ptr [eax + 0x510] */
  esi = R32((uint32_t)(eax + 0x510u));
/* 82172b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82172e: xor ebx, ebx */
  ebx = 0;
L_821730: /* 821730: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 821732: je 0x82178d */
  if (zf) goto L_82178d;
L_821734: /* 821734: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 82173a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 82173c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 82173f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 821741: push 0xae2c60 */
  { uint32_t v = 0xae2c60u; esp -= 4; W32(esp, v); }
/* 821746: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 821747: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 821748: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 821749: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x82174cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82174c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 82174f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 821751: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 821754: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 821756: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 821757: mov ecx, esi */
  ecx = esi;
/* 821759: call dword ptr [edx + 0x194] */
  { uint32_t t = R32((uint32_t)(edx + 0x194u)); esp -= 4; W32(esp, 0x82175fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82175f: mov ecx, esi */
  ecx = esi;
/* 821761: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 821762: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x821768u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 821768: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 82176e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 821770: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 821771: push 0xae2c84 */
  { uint32_t v = 0xae2c84u; esp -= 4; W32(esp, v); }
/* 821776: push 0x305 */
  { uint32_t v = 0x305u; esp -= 4; W32(esp, v); }
/* 82177b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82177c: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x821782u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 821782: mov esi, dword ptr [esi + 0x370] */
  esi = R32((uint32_t)(esi + 0x370u));
/* 821788: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82178b: jmp 0x821730 */
  goto L_821730;
L_82178d: /* 82178d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 82178f: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 821792: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 821794: mov esi, dword ptr [eax + 0x510] */
  esi = R32((uint32_t)(eax + 0x510u));
/* 82179a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8217a0: /* 8217a0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8217a2: je 0x8217ba */
  if (zf) goto L_8217ba;
L_8217a4: /* 8217a4: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8217a7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8217a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8217aa: mov ecx, esi */
  ecx = esi;
/* 8217ac: call dword ptr [edx + 0x198] */
  { uint32_t t = R32((uint32_t)(edx + 0x198u)); esp -= 4; W32(esp, 0x8217b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8217b2: mov esi, dword ptr [esi + 0x370] */
  esi = R32((uint32_t)(esi + 0x370u));
/* 8217b8: jmp 0x8217a0 */
  goto L_8217a0;
L_8217ba: /* 8217ba: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8217c0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8217c2: push 0xae2cb4 */
  { uint32_t v = 0xae2cb4u; esp -= 4; W32(esp, v); }
/* 8217c7: push 0x305 */
  { uint32_t v = 0x305u; esp -= 4; W32(esp, v); }
/* 8217cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8217cd: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8217d3u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8217d3: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8217d5: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 8217d8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8217da: mov esi, dword ptr [eax + 0x510] */
  esi = R32((uint32_t)(eax + 0x510u));
/* 8217e0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8217e3: xor ebx, ebx */
  ebx = 0;
/* 8217e5: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_8217e8: /* 8217e8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8217ea: je 0x82181e */
  if (zf) goto L_82181e;
L_8217ec: /* 8217ec: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 8217f2: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8217f4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8217f7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8217f9: push 0xae2cd8 */
  { uint32_t v = 0xae2cd8u; esp -= 4; W32(esp, v); }
/* 8217fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8217ff: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 821802: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 821803: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 821804: call dword ptr [ecx + 0x14] */
  { uint32_t t = R32((uint32_t)(ecx + 0x14u)); esp -= 4; W32(esp, 0x821807u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821807: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82180a: mov ecx, esi */
  ecx = esi;
/* 82180c: call 0x6caace */
  esp -= 4; W32(esp, 0x821811u); SPILL(); f_6caace(); if (g_unwind) return; RELOAD();
/* 821811: mov esi, dword ptr [esi + 0x370] */
  esi = R32((uint32_t)(esi + 0x370u));
/* 821817: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 821819: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 82181c: jmp 0x8217e8 */
  goto L_8217e8;
L_82181e: /* 82181e: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 821823: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 821825: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 821826: push 0xae2d00 */
  { uint32_t v = 0xae2d00u; esp -= 4; W32(esp, v); }
/* 82182b: push 0x305 */
  { uint32_t v = 0x305u; esp -= 4; W32(esp, v); }
/* 821830: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 821831: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x821837u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 821837: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 821839: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 82183c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 82183e: mov eax, dword ptr [eax + 0x510] */
  eax = R32((uint32_t)(eax + 0x510u));
/* 821844: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 82184a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_82184d: /* 82184d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82184f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 821852: je 0x821927 */
  if (zf) goto L_821927;
L_821858: /* 821858: xor esi, esi */
  esi = 0;
/* 82185a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_821860: /* 821860: cmp esi, dword ptr [eax + 0x340] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 821866: jge 0x82191c */
  if ((sf == of)) goto L_82191c;
L_82186c: /* 82186c: mov ecx, dword ptr [eax + 0x33c] */
  ecx = R32((uint32_t)(eax + 0x33cu));
/* 821872: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 821875: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 821877: lea edi, [eax + 0x33c] */
  edi = (uint32_t)(eax + 0x33cu);
/* 82187d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 821880: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 821883: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 821884: mov ecx, eax */
  ecx = eax;
/* 821886: call dword ptr [edx + 0x1c0] */
  { uint32_t t = R32((uint32_t)(edx + 0x1c0u)); esp -= 4; W32(esp, 0x82188cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82188c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82188e: je 0x82190a */
  if (zf) goto L_82190a;
L_821890: /* 821890: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 821892: jge 0x8218a8 */
  if ((sf == of)) goto L_8218a8;
L_821894: /* 821894: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 821899: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 82189e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8218a3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8218a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8218a5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8218a8: /* 8218a8: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8218ab: jle 0x8218c1 */
  if ((zf || sf != of)) goto L_8218c1;
L_8218ad: /* 8218ad: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8218b2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8218b7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8218bc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8218beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8218be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8218c1: /* 8218c1: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8218c4: lea ebx, [esi + 1] */
  ebx = (uint32_t)(esi + 0x1u);
/* 8218c7: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8218c9: jle 0x8218e3 */
  if ((zf || sf != of)) goto L_8218e3;
L_8218cb: /* 8218cb: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8218d0: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8218d5: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8218da: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8218e0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8218e0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8218e3: /* 8218e3: mov eax, esi */
  eax = esi;
L_8218e5: /* 8218e5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8218e7: jge 0x8218ec */
  if ((sf == of)) goto L_8218ec;
L_8218e9: /* 8218e9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8218ea: jmp 0x8218e5 */
  goto L_8218e5;
L_8218ec: /* 8218ec: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8218ee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8218f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8218f1: mov ecx, edi */
  ecx = edi;
/* 8218f3: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8218f9u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8218f9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8218fc: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 8218fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8218ff: je 0x82190a */
  if (zf) goto L_82190a;
L_821901: /* 821901: mov ecx, eax */
  ecx = eax;
/* 821903: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 821905: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 821907: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x82190au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_82190a: /* 82190a: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 821910: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 821913: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 821916: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 821917: jmp 0x821860 */
  goto L_821860;
L_82191c: /* 82191c: mov eax, dword ptr [eax + 0x370] */
  eax = R32((uint32_t)(eax + 0x370u));
/* 821922: jmp 0x82184d */
  goto L_82184d;
L_821927: /* 821927: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 82192a: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 82192f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 821931: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 821933: push 0xae2d2c */
  { uint32_t v = 0xae2d2cu; esp -= 4; W32(esp, v); }
/* 821938: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 821939: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 82193c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82193d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82193e: call dword ptr [ecx + 0x14] */
  { uint32_t t = R32((uint32_t)(ecx + 0x14u)); esp -= 4; W32(esp, 0x821941u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821941: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 821944: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 821946: mov ecx, edi */
  ecx = edi;
/* 821948: call 0x6c938b */
  esp -= 4; W32(esp, 0x82194du); SPILL(); f_6c938b(); if (g_unwind) return; RELOAD();
/* 82194d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 82194f: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 821952: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 821954: mov eax, dword ptr [eax + 0x510] */
  eax = R32((uint32_t)(eax + 0x510u));
/* 82195a: mov ecx, 0xffffdfff */
  ecx = 0xffffdfffu;
/* 82195f: nop  */
L_821960: /* 821960: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 821962: je 0x821972 */
  if (zf) goto L_821972;
L_821964: /* 821964: and dword ptr [eax + 0x390], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x390u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x390u), r);
  }
/* 82196a: mov eax, dword ptr [eax + 0x370] */
  eax = R32((uint32_t)(eax + 0x370u));
/* 821970: jmp 0x821960 */
  goto L_821960;
L_821972: /* 821972: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 821975: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 821977: mov eax, dword ptr [eax + 0x33c] */
  eax = R32((uint32_t)(eax + 0x33cu));
/* 82197d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82197f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 821981: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 821982: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x821988u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821988: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 82198a: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 82198d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82198f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 821991: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 821992: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x821998u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821998: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 82199a: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 82199d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 82199f: or dword ptr [eax + 0x44c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x44cu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x44cu), r);
  }
/* 8219a6: xor esi, esi */
  esi = 0;
L_8219a8: /* 8219a8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8219aa: cmp esi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8219ad: jge 0x8219c4 */
  if ((sf == of)) goto L_8219c4;
L_8219af: /* 8219af: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 8219b2: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 8219b5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8219b7: je 0x8219c1 */
  if (zf) goto L_8219c1;
L_8219b9: /* 8219b9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8219bb: call dword ptr [edx + 0x164] */
  { uint32_t t = R32((uint32_t)(edx + 0x164u)); esp -= 4; W32(esp, 0x8219c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8219c1: /* 8219c1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8219c2: jmp 0x8219a8 */
  goto L_8219a8;
L_8219c4: /* 8219c4: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8219c9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8219cb: push 0xae2d54 */
  { uint32_t v = 0xae2d54u; esp -= 4; W32(esp, v); }
/* 8219d0: push 0x305 */
  { uint32_t v = 0x305u; esp -= 4; W32(esp, v); }
/* 8219d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8219d6: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8219dcu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8219dc: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 8219e2: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8219e4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8219e6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8219e9: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x8219ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8219ec: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 8219f2: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8219f4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8219f6: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 8219fd: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x821a00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821a00: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 821a03: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 821a04: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 821a05: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 821a0c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 821a0d: mov esp, ebp */
  esp = ebp;
/* 821a0f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 821a10: ret 4 */
  esp += 8; SPILL(); return;
}

void f_821a13(void) {
  LOAD_REGS();
L_821a13: /* 821a13: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 821a16: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 821a1b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 821a1e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 821a1f: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 821a22: call 0x99caf8 */
  esp -= 4; W32(esp, 0x821a27u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_821a27(); return;
}

void f_821a27(void) {
  LOAD_REGS();
L_821a27: /* 821a27: push 0xa14d20 */
  { uint32_t v = 0xa14d20u; esp -= 4; W32(esp, v); }
/* 821a2c: push 0xae2d68 */
  { uint32_t v = 0xae2d68u; esp -= 4; W32(esp, v); }
/* 821a31: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x821a37u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 821a37: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 821a3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 821a3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 821a3e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x821a43u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_821a43: guest_badaddr(0x821a43); return;
}

void f_821b80(void) {
  LOAD_REGS();
L_821b80: /* 821b80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 821b81: mov ebp, esp */
  ebp = esp;
/* 821b83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 821b85: push 0x9d2f60 */
  { uint32_t v = 0x9d2f60u; esp -= 4; W32(esp, v); }
/* 821b8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 821b90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 821b91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 821b98: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 821b9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 821b9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 821b9d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 821ba0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 821ba1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 821ba4: xor ebx, ebx */
  ebx = 0;
/* 821ba6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 821ba7: mov edi, ecx */
  edi = ecx;
/* 821ba9: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 821bac: call 0x6c2ea0 */
  esp -= 4; W32(esp, 0x821bb1u); SPILL(); f_6c2ea0(); if (g_unwind) return; RELOAD();
/* 821bb1: mov ecx, edi */
  ecx = edi;
/* 821bb3: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* 821bb5: call 0x6c4322 */
  esp -= 4; W32(esp, 0x821bbau); SPILL(); f_6c4322(); if (g_unwind) return; RELOAD();
/* 821bba: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 821bbc: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 821bbf: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 821bc1: mov dword ptr [eax + 0x510], ebx */
  W32((uint32_t)(eax + 0x510u), ebx);
/* 821bc7: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 821bcd: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 821bcf: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 821bd1: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x821bd4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821bd4: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 821bda: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 821bdc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 821bde: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 821be0: push 0xae2d70 */
  { uint32_t v = 0xae2d70u; esp -= 4; W32(esp, v); }
/* 821be5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x821be8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821be8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 821bea: mov ecx, edi */
  ecx = edi;
/* 821bec: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 821bef: call 0x6c938b */
  esp -= 4; W32(esp, 0x821bf4u); SPILL(); f_6c938b(); if (g_unwind) return; RELOAD();
/* 821bf4: xor esi, esi */
  esi = 0;
L_821bf6: /* 821bf6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 821bf8: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 821bfb: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 821bfd: jge 0x821c38 */
  if ((sf == of)) goto L_821c38;
L_821bff: /* 821bff: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 821c05: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 821c07: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 821c09: push 0xae2d90 */
  { uint32_t v = 0xae2d90u; esp -= 4; W32(esp, v); }
/* 821c0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 821c0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 821c10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 821c11: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x821c14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821c14: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 821c16: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 821c19: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 821c1c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 821c1f: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 821c21: je 0x821c35 */
  if (zf) goto L_821c35;
L_821c23: /* 821c23: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 821c28: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x821c2eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 821c2e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 821c30: je 0x821c35 */
  if (zf) goto L_821c35;
L_821c32: /* 821c32: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
L_821c35: /* 821c35: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 821c36: jmp 0x821bf6 */
  goto L_821bf6;
L_821c38: /* 821c38: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 821c3a: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 821c3d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 821c3f: xor esi, esi */
  esi = 0;
/* 821c41: mov dword ptr [eax + 0x510], esi */
  W32((uint32_t)(eax + 0x510u), esi);
/* 821c47: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 821c4a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_821c50: /* 821c50: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 821c52: cmp esi, dword ptr [ecx + 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 821c55: jge 0x821cd0 */
  if ((sf == of)) goto L_821cd0;
L_821c57: /* 821c57: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 821c5d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 821c5f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 821c62: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 821c64: push 0xae2da4 */
  { uint32_t v = 0xae2da4u; esp -= 4; W32(esp, v); }
/* 821c69: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 821c6a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 821c6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 821c6c: call dword ptr [ecx + 0x14] */
  { uint32_t t = R32((uint32_t)(ecx + 0x14u)); esp -= 4; W32(esp, 0x821c6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821c6f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 821c71: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 821c74: mov esi, dword ptr [ecx + esi*4] */
  esi = R32((uint32_t)(ecx + esi*4));
/* 821c77: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 821c7a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 821c7c: je 0x821cc5 */
  if (zf) goto L_821cc5;
L_821c7e: /* 821c7e: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 821c83: mov ecx, esi */
  ecx = esi;
/* 821c85: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x821c8bu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 821c8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 821c8d: je 0x821cc5 */
  if (zf) goto L_821cc5;
L_821c8f: /* 821c8f: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 821c95: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 821c98: jne 0x821cc5 */
  if (!zf) goto L_821cc5;
L_821c9a: /* 821c9a: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 821c9c: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 821c9f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 821ca1: mov ecx, dword ptr [eax + 0x510] */
  ecx = R32((uint32_t)(eax + 0x510u));
/* 821ca7: mov dword ptr [esi + 0x370], ecx */
  W32((uint32_t)(esi + 0x370u), ecx);
/* 821cad: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 821caf: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 821cb2: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 821cb4: mov dword ptr [eax + 0x510], esi */
  W32((uint32_t)(eax + 0x510u), esi);
/* 821cba: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 821cbc: mov ecx, esi */
  ecx = esi;
/* 821cbe: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 821cbf: call dword ptr [edx + 0x1a8] */
  { uint32_t t = R32((uint32_t)(edx + 0x1a8u)); esp -= 4; W32(esp, 0x821cc5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_821cc5: /* 821cc5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 821cc8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 821cc9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 821ccc: mov esi, eax */
  esi = eax;
/* 821cce: jmp 0x821c50 */
  goto L_821c50;
L_821cd0: /* 821cd0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 821cd2: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 821cd5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 821cd7: mov esi, dword ptr [eax + 0x510] */
  esi = R32((uint32_t)(eax + 0x510u));
/* 821cdd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_821ce0: /* 821ce0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 821ce2: je 0x821cf6 */
  if (zf) goto L_821cf6;
L_821ce4: /* 821ce4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 821ce6: mov ecx, esi */
  ecx = esi;
/* 821ce8: call dword ptr [edx + 0x19c] */
  { uint32_t t = R32((uint32_t)(edx + 0x19cu)); esp -= 4; W32(esp, 0x821ceeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821cee: mov esi, dword ptr [esi + 0x370] */
  esi = R32((uint32_t)(esi + 0x370u));
/* 821cf4: jmp 0x821ce0 */
  goto L_821ce0;
L_821cf6: /* 821cf6: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 821cfb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 821cfd: push 0xae2ddc */
  { uint32_t v = 0xae2ddcu; esp -= 4; W32(esp, v); }
/* 821d02: push 0x305 */
  { uint32_t v = 0x305u; esp -= 4; W32(esp, v); }
/* 821d07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 821d08: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x821d0eu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 821d0e: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 821d10: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 821d13: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 821d15: mov esi, dword ptr [eax + 0x510] */
  esi = R32((uint32_t)(eax + 0x510u));
/* 821d1b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 821d1e: xor ebx, ebx */
  ebx = 0;
L_821d20: /* 821d20: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 821d22: je 0x821d7d */
  if (zf) goto L_821d7d;
L_821d24: /* 821d24: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 821d2a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 821d2c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 821d2f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 821d31: push 0xae2dfc */
  { uint32_t v = 0xae2dfcu; esp -= 4; W32(esp, v); }
/* 821d36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 821d37: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 821d38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 821d39: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x821d3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821d3c: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 821d3f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 821d41: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 821d44: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 821d46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 821d47: mov ecx, esi */
  ecx = esi;
/* 821d49: call dword ptr [edx + 0x194] */
  { uint32_t t = R32((uint32_t)(edx + 0x194u)); esp -= 4; W32(esp, 0x821d4fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821d4f: mov ecx, esi */
  ecx = esi;
/* 821d51: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x821d57u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 821d57: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 821d5d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 821d5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 821d60: push 0xae2e20 */
  { uint32_t v = 0xae2e20u; esp -= 4; W32(esp, v); }
/* 821d65: push 0x305 */
  { uint32_t v = 0x305u; esp -= 4; W32(esp, v); }
/* 821d6a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 821d6b: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x821d71u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 821d71: mov esi, dword ptr [esi + 0x370] */
  esi = R32((uint32_t)(esi + 0x370u));
/* 821d77: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 821d7a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 821d7b: jmp 0x821d20 */
  goto L_821d20;
L_821d7d: /* 821d7d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 821d7f: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 821d82: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 821d84: mov esi, dword ptr [eax + 0x510] */
  esi = R32((uint32_t)(eax + 0x510u));
/* 821d8a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_821d90: /* 821d90: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 821d92: je 0x821daa */
  if (zf) goto L_821daa;
L_821d94: /* 821d94: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 821d97: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 821d99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 821d9a: mov ecx, esi */
  ecx = esi;
/* 821d9c: call dword ptr [edx + 0x198] */
  { uint32_t t = R32((uint32_t)(edx + 0x198u)); esp -= 4; W32(esp, 0x821da2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821da2: mov esi, dword ptr [esi + 0x370] */
  esi = R32((uint32_t)(esi + 0x370u));
/* 821da8: jmp 0x821d90 */
  goto L_821d90;
L_821daa: /* 821daa: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 821db0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 821db2: push 0xae2e50 */
  { uint32_t v = 0xae2e50u; esp -= 4; W32(esp, v); }
/* 821db7: push 0x305 */
  { uint32_t v = 0x305u; esp -= 4; W32(esp, v); }
/* 821dbc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 821dbd: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x821dc3u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 821dc3: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 821dc5: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 821dc8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 821dca: mov esi, dword ptr [eax + 0x510] */
  esi = R32((uint32_t)(eax + 0x510u));
/* 821dd0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 821dd3: xor ebx, ebx */
  ebx = 0;
/* 821dd5: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_821dd8: /* 821dd8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 821dda: je 0x821e0f */
  if (zf) goto L_821e0f;
L_821ddc: /* 821ddc: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 821de2: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 821de4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 821de7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 821de9: push 0xae2e74 */
  { uint32_t v = 0xae2e74u; esp -= 4; W32(esp, v); }
/* 821dee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 821def: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 821df0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 821df1: call dword ptr [ecx + 0x14] */
  { uint32_t t = R32((uint32_t)(ecx + 0x14u)); esp -= 4; W32(esp, 0x821df4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821df4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 821df7: mov ecx, esi */
  ecx = esi;
/* 821df9: call 0x6caace */
  esp -= 4; W32(esp, 0x821dfeu); SPILL(); f_6caace(); if (g_unwind) return; RELOAD();
/* 821dfe: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 821e01: mov esi, dword ptr [esi + 0x370] */
  esi = R32((uint32_t)(esi + 0x370u));
/* 821e07: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 821e09: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 821e0c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 821e0d: jmp 0x821dd8 */
  goto L_821dd8;
L_821e0f: /* 821e0f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 821e12: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 821e18: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 821e1a: mov esi, dword ptr [0xcfa794] */
  esi = R32((uint32_t)(0xcfa794u));
/* 821e20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 821e21: push 0xae2e9c */
  { uint32_t v = 0xae2e9cu; esp -= 4; W32(esp, v); }
/* 821e26: push 0x305 */
  { uint32_t v = 0x305u; esp -= 4; W32(esp, v); }
/* 821e2b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 821e2c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x821e2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821e2e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 821e31: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 821e36: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 821e38: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 821e3a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 821e3d: push 0xae2ec8 */
  { uint32_t v = 0xae2ec8u; esp -= 4; W32(esp, v); }
/* 821e42: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 821e43: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 821e44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 821e45: call dword ptr [ecx + 0x14] */
  { uint32_t t = R32((uint32_t)(ecx + 0x14u)); esp -= 4; W32(esp, 0x821e48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821e48: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 821e4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 821e4d: mov ecx, edi */
  ecx = edi;
/* 821e4f: call 0x6c938b */
  esp -= 4; W32(esp, 0x821e54u); SPILL(); f_6c938b(); if (g_unwind) return; RELOAD();
/* 821e54: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 821e56: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 821e59: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 821e5b: mov eax, dword ptr [eax + 0x510] */
  eax = R32((uint32_t)(eax + 0x510u));
/* 821e61: mov ecx, 0xffffdfff */
  ecx = 0xffffdfffu;
L_821e66: /* 821e66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 821e68: je 0x821e78 */
  if (zf) goto L_821e78;
L_821e6a: /* 821e6a: and dword ptr [eax + 0x390], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x390u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x390u), r);
  }
/* 821e70: mov eax, dword ptr [eax + 0x370] */
  eax = R32((uint32_t)(eax + 0x370u));
/* 821e76: jmp 0x821e66 */
  goto L_821e66;
L_821e78: /* 821e78: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 821e7b: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 821e7d: mov eax, dword ptr [eax + 0x33c] */
  eax = R32((uint32_t)(eax + 0x33cu));
/* 821e83: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 821e85: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 821e87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 821e88: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x821e8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821e8e: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 821e90: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 821e93: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 821e95: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 821e97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 821e98: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x821e9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821e9e: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 821ea4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 821ea6: push 0xae2ef0 */
  { uint32_t v = 0xae2ef0u; esp -= 4; W32(esp, v); }
/* 821eab: push 0x305 */
  { uint32_t v = 0x305u; esp -= 4; W32(esp, v); }
/* 821eb0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 821eb1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x821eb3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821eb3: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 821eb8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 821eba: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 821ebc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 821ebf: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x821ec2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821ec2: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 821ec7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 821ec9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 821ecb: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 821ed2: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x821ed5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 821ed5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 821ed8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 821ed9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 821eda: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 821ee1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 821ee2: mov esp, ebp */
  esp = ebp;
/* 821ee4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 821ee5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_821ee8(void) {
  LOAD_REGS();
L_821ee8: /* 821ee8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 821eeb: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 821ef0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 821ef3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 821ef4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 821ef7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x821efcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_821efc(); return;
}

void f_821efc(void) {
  LOAD_REGS();
L_821efc: /* 821efc: push 0xa14d60 */
  { uint32_t v = 0xa14d60u; esp -= 4; W32(esp, v); }
/* 821f01: push 0xae2f04 */
  { uint32_t v = 0xae2f04u; esp -= 4; W32(esp, v); }
/* 821f06: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x821f0cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 821f0c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 821f0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 821f11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 821f13: call 0x99caf8 */
  esp -= 4; W32(esp, 0x821f18u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_821f18: guest_badaddr(0x821f18); return;
}

void f_822010(void) {
  LOAD_REGS();
L_822010: /* 822010: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 822011: mov ebp, esp */
  ebp = esp;
/* 822013: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 822015: push 0x9d2f70 */
  { uint32_t v = 0x9d2f70u; esp -= 4; W32(esp, v); }
/* 82201a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 822020: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 822021: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 822028: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82202b: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 82202e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82202f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 822030: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 822031: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 822034: mov esi, ecx */
  esi = ecx;
/* 822036: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 822039: push 0x42a00000 */
  { uint32_t v = 0x42a00000u; esp -= 4; W32(esp, v); }
/* 82203e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82203f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 822046: call 0x6c389b */
  esp -= 4; W32(esp, 0x82204bu); SPILL(); f_6c389b(); if (g_unwind) return; RELOAD();
/* 82204b: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 82204e: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 822051: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 822056: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 822059: mov ecx, esp */
  ecx = esp;
/* 82205b: mov dword ptr [ebp - 0x24], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3f800000u);
/* 822062: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 822065: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 822067: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 82206e: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 822071: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 822074: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 822077: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 82207e: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 822081: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 822084: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 822087: mov eax, esp */
  eax = esp;
/* 822089: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 82208b: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 82208e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 822091: mov ecx, esi */
  ecx = esi;
/* 822093: call 0x6cbdd4 */
  esp -= 4; W32(esp, 0x822098u); SPILL(); f_6cbdd4(); if (g_unwind) return; RELOAD();
/* 822098: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 82209b: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 82209e: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 8220a3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8220a6: mov edx, esp */
  edx = esp;
/* 8220a8: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8220aa: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8220ad: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8220b0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8220b3: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8220b6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8220b9: mov ecx, esp */
  ecx = esp;
/* 8220bb: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 8220bd: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8220c0: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8220c3: mov ecx, esi */
  ecx = esi;
/* 8220c5: call 0x6cbdd4 */
  esp -= 4; W32(esp, 0x8220cau); SPILL(); f_6cbdd4(); if (g_unwind) return; RELOAD();
/* 8220ca: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 8220cf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8220d2: mov eax, esp */
  eax = esp;
/* 8220d4: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 8220db: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8220de: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8220e0: mov dword ptr [ebp - 0x20], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x3f800000u);
/* 8220e7: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8220ea: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8220ed: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8220f0: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8220f7: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8220fa: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8220fd: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 822100: mov edx, esp */
  edx = esp;
/* 822102: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 822104: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 822107: mov ecx, esi */
  ecx = esi;
/* 822109: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 82210c: call 0x6cbdd4 */
  esp -= 4; W32(esp, 0x822111u); SPILL(); f_6cbdd4(); if (g_unwind) return; RELOAD();
/* 822111: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 822114: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 822117: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 82211c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82211f: mov ecx, esp */
  ecx = esp;
/* 822121: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 822123: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 822126: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 822129: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82212c: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 82212f: mov eax, esp */
  eax = esp;
/* 822131: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 822134: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 822136: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 822139: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 82213c: mov ecx, esi */
  ecx = esi;
/* 82213e: call 0x6cbdd4 */
  esp -= 4; W32(esp, 0x822143u); SPILL(); f_6cbdd4(); if (g_unwind) return; RELOAD();
/* 822143: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 822148: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82214b: mov edx, esp */
  edx = esp;
/* 82214d: mov dword ptr [ebp - 0x24], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0xbf800000u);
/* 822154: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 822157: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 822159: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 822160: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 822163: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 822166: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 822169: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 822170: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 822173: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 822176: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 822179: mov ecx, esp */
  ecx = esp;
/* 82217b: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 82217d: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 822180: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 822183: mov ecx, esi */
  ecx = esi;
/* 822185: call 0x6cbdd4 */
  esp -= 4; W32(esp, 0x82218au); SPILL(); f_6cbdd4(); if (g_unwind) return; RELOAD();
/* 82218a: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 82218d: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 822190: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 822195: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 822198: mov eax, esp */
  eax = esp;
/* 82219a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 82219c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 82219f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8221a2: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8221a5: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8221a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8221ab: mov edx, esp */
  edx = esp;
/* 8221ad: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 8221af: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 8221b2: mov ecx, esi */
  ecx = esi;
/* 8221b4: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8221b7: call 0x6cbdd4 */
  esp -= 4; W32(esp, 0x8221bcu); SPILL(); f_6cbdd4(); if (g_unwind) return; RELOAD();
/* 8221bc: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 8221c1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8221c4: mov ecx, esp */
  ecx = esp;
/* 8221c6: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 8221cd: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8221d0: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8221d2: mov dword ptr [ebp - 0x20], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xbf800000u);
/* 8221d9: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8221dc: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8221df: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8221e2: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8221e9: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8221ec: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8221ef: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8221f2: mov eax, esp */
  eax = esp;
/* 8221f4: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 8221f6: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 8221f9: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8221fc: mov ecx, esi */
  ecx = esi;
/* 8221fe: call 0x6cbdd4 */
  esp -= 4; W32(esp, 0x822203u); SPILL(); f_6cbdd4(); if (g_unwind) return; RELOAD();
/* 822203: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 822206: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 822209: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 82220e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 822211: mov edx, esp */
  edx = esp;
/* 822213: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 822215: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 822218: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 82221b: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 82221e: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 822221: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 822224: mov ecx, esp */
  ecx = esp;
/* 822226: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 822228: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 82222b: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 82222e: mov ecx, esi */
  ecx = esi;
/* 822230: call 0x6cbdd4 */
  esp -= 4; W32(esp, 0x822235u); SPILL(); f_6cbdd4(); if (g_unwind) return; RELOAD();
/* 822235: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 822238: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 822239: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82223a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 822241: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 822242: mov esp, ebp */
  esp = ebp;
/* 822244: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 822245: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_822248(void) {
  LOAD_REGS();
L_822248: /* 822248: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 82224b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 822250: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 822253: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 822254: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 822257: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82225cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_82225c(); return;
}

void f_82225c(void) {
  LOAD_REGS();
L_82225c: /* 82225c: push 0xa14db0 */
  { uint32_t v = 0xa14db0u; esp -= 4; W32(esp, v); }
/* 822261: push 0xae33a0 */
  { uint32_t v = 0xae33a0u; esp -= 4; W32(esp, v); }
/* 822266: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x82226cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 82226c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82226f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 822271: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 822273: call 0x99caf8 */
  esp -= 4; W32(esp, 0x822278u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_822278: guest_badaddr(0x822278); return;
}

void f_822320(void) {
  LOAD_REGS();
L_822320: /* 822320: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 822321: mov ebp, esp */
  ebp = esp;
/* 822323: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 822325: push 0x9d2f80 */
  { uint32_t v = 0x9d2f80u; esp -= 4; W32(esp, v); }
/* 82232a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 822330: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 822331: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 822338: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82233b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82233c: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 82233f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 822340: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 822341: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 822344: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 822347: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82234a: mov eax, esp */
  eax = esp;
/* 82234c: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 82234e: mov esi, ecx */
  esi = ecx;
/* 822350: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 822353: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 822356: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 822359: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 82235c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 822363: call 0x6c233d */
  esp -= 4; W32(esp, 0x822368u); SPILL(); f_6c233d(); if (g_unwind) return; RELOAD();
/* 822368: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82236a: je 0x822394 */
  if (zf) goto L_822394;
L_82236c: /* 82236c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 82236f: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 822375: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 822378: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 82237e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 822380: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 822383: je 0x822387 */
  if (zf) goto L_822387;
L_822385: /* 822385: fchs  */
  ST0 = -ST0;
L_822387: /* 822387: fcomp dword ptr [ecx + 0x2d8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x2d8u)));
  FPOP();
/* 82238d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82238f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 822392: jne 0x8223cd */
  if (!zf) goto L_8223cd;
L_822394: /* 822394: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 822397: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 82239a: fadd dword ptr [0xa105c0] */
  ST0 = ST0 + (F32((uint32_t)(0xa105c0u)));
/* 8223a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8223a3: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8223a6: mov ecx, edx */
  ecx = edx;
/* 8223a8: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8223ab: mov eax, esp */
  eax = esp;
/* 8223ad: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8223af: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8223b2: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8223b5: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8223b8: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8223bb: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8223be: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8223c1: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8223c4: call 0x6c233d */
  esp -= 4; W32(esp, 0x8223c9u); SPILL(); f_6c233d(); if (g_unwind) return; RELOAD();
/* 8223c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8223cb: je 0x822421 */
  if (zf) goto L_822421;
L_8223cd: /* 8223cd: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8223d0: push 0x42f00000 */
  { uint32_t v = 0x42f00000u; esp -= 4; W32(esp, v); }
/* 8223d5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8223d8: mov edx, esp */
  edx = esp;
/* 8223da: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 8223dc: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 8223df: mov ecx, esi */
  ecx = esi;
/* 8223e1: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8223e4: call 0x6c1dbb */
  esp -= 4; W32(esp, 0x8223e9u); SPILL(); f_6c1dbb(); if (g_unwind) return; RELOAD();
/* 8223e9: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8223ec: push 0x42900000 */
  { uint32_t v = 0x42900000u; esp -= 4; W32(esp, v); }
/* 8223f1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8223f4: mov ecx, esp */
  ecx = esp;
/* 8223f6: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 8223f8: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8223fb: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8223fe: mov ecx, esi */
  ecx = esi;
/* 822400: call 0x6c1dbb */
  esp -= 4; W32(esp, 0x822405u); SPILL(); f_6c1dbb(); if (g_unwind) return; RELOAD();
/* 822405: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 822408: push 0x42400000 */
  { uint32_t v = 0x42400000u; esp -= 4; W32(esp, v); }
/* 82240d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 822410: mov eax, esp */
  eax = esp;
/* 822412: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 822414: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 822417: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 82241a: mov ecx, esi */
  ecx = esi;
/* 82241c: call 0x6c1dbb */
  esp -= 4; W32(esp, 0x822421u); SPILL(); f_6c1dbb(); if (g_unwind) return; RELOAD();
L_822421: /* 822421: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 822424: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 822425: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 822426: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82242d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82242e: mov esp, ebp */
  esp = ebp;
/* 822430: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 822431: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_822434(void) {
  LOAD_REGS();
L_822434: /* 822434: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 822437: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 82243c: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 82243f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 822440: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 822443: call 0x99caf8 */
  esp -= 4; W32(esp, 0x822448u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_822448(); return;
}

void f_822448(void) {
  LOAD_REGS();
L_822448: /* 822448: push 0xa14e00 */
  { uint32_t v = 0xa14e00u; esp -= 4; W32(esp, v); }
/* 82244d: push 0xae3398 */
  { uint32_t v = 0xae3398u; esp -= 4; W32(esp, v); }
/* 822452: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x822458u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 822458: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82245b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82245d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82245f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x822464u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_822464: guest_badaddr(0x822464); return;
}

void f_8224d0(void) {
  LOAD_REGS();
L_8224d0: /* 8224d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8224d1: mov ebp, esp */
  ebp = esp;
/* 8224d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8224d5: push 0x9d2f90 */
  { uint32_t v = 0x9d2f90u; esp -= 4; W32(esp, v); }
/* 8224da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8224e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8224e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8224e8: sub esp, 0xe4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8224ee: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 8224f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8224f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8224f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8224f6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8224f9: mov esi, ecx */
  esi = ecx;
/* 8224fb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8224fd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8224ff: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 822501: xor ebx, ebx */
  ebx = 0;
/* 822503: push 0xae2fe0 */
  { uint32_t v = 0xae2fe0u; esp -= 4; W32(esp, v); }
/* 822508: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 82250b: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x82250eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82250e: mov edi, edi */
  edi = edi;
L_822510: /* 822510: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 822512: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 822515: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 822517: jge 0x822575 */
  if ((sf == of)) goto L_822575;
L_822519: /* 822519: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 82251f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 822521: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 822523: push 0xae2ff4 */
  { uint32_t v = 0xae2ff4u; esp -= 4; W32(esp, v); }
/* 822528: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 822529: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82252a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82252b: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x82252eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82252e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 822530: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 822533: mov edi, dword ptr [ecx + ebx*4] */
  edi = R32((uint32_t)(ecx + ebx*4));
/* 822536: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 822539: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82253b: je 0x822572 */
  if (zf) goto L_822572;
L_82253d: /* 82253d: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 822543: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 822546: jne 0x822572 */
  if (!zf) goto L_822572;
L_822548: /* 822548: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 82254d: mov ecx, edi */
  ecx = edi;
/* 82254f: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x822555u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 822555: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 822557: je 0x822572 */
  if (zf) goto L_822572;
L_822559: /* 822559: mov eax, dword ptr [edi + 0x390] */
  eax = R32((uint32_t)(edi + 0x390u));
/* 82255f: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 822562: mov dword ptr [edi + 0x368], 1 */
  W32((uint32_t)(edi + 0x368u), 0x1u);
/* 82256c: mov dword ptr [edi + 0x390], eax */
  W32((uint32_t)(edi + 0x390u), eax);
L_822572: /* 822572: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 822573: jmp 0x822510 */
  goto L_822510;
L_822575: /* 822575: xor ebx, ebx */
  ebx = 0;
L_822577: /* 822577: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 822579: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 82257c: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82257e: jge 0x822644 */
  if ((sf == of)) goto L_822644;
L_822584: /* 822584: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 822589: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 82258b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82258d: push 0xae3024 */
  { uint32_t v = 0xae3024u; esp -= 4; W32(esp, v); }
/* 822592: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 822593: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 822594: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 822595: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x822598u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 822598: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 82259a: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 82259d: mov edi, dword ptr [ecx + ebx*4] */
  edi = R32((uint32_t)(ecx + ebx*4));
/* 8225a0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8225a3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8225a5: je 0x82263e */
  if (zf) goto L_82263e;
L_8225ab: /* 8225ab: push 0xb63be8 */
  { uint32_t v = 0xb63be8u; esp -= 4; W32(esp, v); }
/* 8225b0: mov ecx, edi */
  ecx = edi;
/* 8225b2: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8225b8u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8225b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8225ba: jne 0x8225cd */
  if (!zf) goto L_8225cd;
L_8225bc: /* 8225bc: push 0xb62c58 */
  { uint32_t v = 0xb62c58u; esp -= 4; W32(esp, v); }
/* 8225c1: mov ecx, edi */
  ecx = edi;
/* 8225c3: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8225c9u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8225c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8225cb: je 0x82263e */
  if (zf) goto L_82263e;
L_8225cd: /* 8225cd: mov ecx, edi */
  ecx = edi;
/* 8225cf: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8225d5u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8225d5: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8225db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8225dc: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8225de: push 0xae3048 */
  { uint32_t v = 0xae3048u; esp -= 4; W32(esp, v); }
/* 8225e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8225e4: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8225eau); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8225ea: mov al, byte ptr [edi + 0x390] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x390u))) & 0xffu);
/* 8225f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8225f3: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8225f5: jne 0x82261f */
  if (!zf) goto L_82261f;
L_8225f7: /* 8225f7: add edi, 0x170 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8225fd: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8225ff: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 822602: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 822605: mov ecx, esp */
  ecx = esp;
/* 822607: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 822609: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 82260c: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 82260f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 822612: mov ecx, esi */
  ecx = esi;
/* 822614: call 0x6c3c5b */
  esp -= 4; W32(esp, 0x822619u); SPILL(); f_6c3c5b(); if (g_unwind) return; RELOAD();
/* 822619: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 82261a: jmp 0x822577 */
  goto L_822577;
L_82261f: /* 82261f: mov ecx, edi */
  ecx = edi;
/* 822621: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x822627u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 822627: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 822628: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 82262d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 82262f: push 0xae3098 */
  { uint32_t v = 0xae3098u; esp -= 4; W32(esp, v); }
/* 822634: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 822635: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x82263bu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 82263b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_82263e: /* 82263e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 82263f: jmp 0x822577 */
  goto L_822577;
L_822644: /* 822644: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 822647: push 0x42a00000 */
  { uint32_t v = 0x42a00000u; esp -= 4; W32(esp, v); }
/* 82264c: push 0x42900000 */
  { uint32_t v = 0x42900000u; esp -= 4; W32(esp, v); }
/* 822651: call 0x6c389b */
  esp -= 4; W32(esp, 0x822656u); SPILL(); f_6c389b(); if (g_unwind) return; RELOAD();
/* 822656: xor ebx, ebx */
  ebx = 0;
/* 822658: xor edi, edi */
  edi = 0;
/* 82265a: mov dword ptr [ebp - 0xd0], ebx */
  W32((uint32_t)(ebp + 0xffffff30u), ebx);
/* 822660: mov dword ptr [ebp - 0xcc], ebx */
  W32((uint32_t)(ebp + 0xffffff34u), ebx);
/* 822666: mov dword ptr [ebp - 0xc8], ebx */
  W32((uint32_t)(ebp + 0xffffff38u), ebx);
/* 82266c: mov dword ptr [ebp - 0xc4], ebx */
  W32((uint32_t)(ebp + 0xffffff3cu), ebx);
/* 822672: mov dword ptr [ebp - 0xc0], ebx */
  W32((uint32_t)(ebp + 0xffffff40u), ebx);
/* 822678: mov dword ptr [ebp - 0xbc], ebx */
  W32((uint32_t)(ebp + 0xffffff44u), ebx);
/* 82267e: mov dword ptr [ebp - 0xb8], ebx */
  W32((uint32_t)(ebp + 0xffffff48u), ebx);
/* 822684: mov dword ptr [ebp - 0xb4], ebx */
  W32((uint32_t)(ebp + 0xffffff4cu), ebx);
/* 82268a: mov dword ptr [ebp - 0xb0], ebx */
  W32((uint32_t)(ebp + 0xffffff50u), ebx);
/* 822690: mov dword ptr [ebp - 0xac], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x3f800000u);
/* 82269a: mov dword ptr [ebp - 0xa8], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff58u), 0xffffffffu);
/* 8226a4: mov dword ptr [ebp - 0xa4], ebx */
  W32((uint32_t)(ebp + 0xffffff5cu), ebx);
/* 8226aa: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* 8226ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8226b0: /* 8226b0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8226b2: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 8226b5: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8226b7: jge 0x822cf0 */
  if ((sf == of)) goto L_822cf0;
L_8226bd: /* 8226bd: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 8226c2: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8226c4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8226c6: push 0xae30c0 */
  { uint32_t v = 0xae30c0u; esp -= 4; W32(esp, v); }
/* 8226cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8226cc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8226cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8226ce: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x8226d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8226d1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8226d3: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 8226d6: mov edi, dword ptr [ecx + edi*4] */
  edi = R32((uint32_t)(ecx + edi*4));
/* 8226d9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8226dc: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8226de: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 8226e1: je 0x822ce0 */
  if (zf) goto L_822ce0;
L_8226e7: /* 8226e7: mov edx, edi */
  edx = edi;
/* 8226e9: mov eax, dword ptr [edx + 0x80] */
  eax = R32((uint32_t)(edx + 0x80u));
/* 8226ef: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8226f2: jne 0x822ce0 */
  if (!zf) goto L_822ce0;
L_8226f8: /* 8226f8: mov eax, edi */
  eax = edi;
/* 8226fa: mov ecx, dword ptr [eax + 0x390] */
  ecx = R32((uint32_t)(eax + 0x390u));
/* 822700: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 822703: je 0x822ce0 */
  if (zf) goto L_822ce0;
L_822709: /* 822709: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 82270e: mov ecx, edi */
  ecx = edi;
/* 822710: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x822716u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 822716: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 822718: je 0x822ce0 */
  if (zf) goto L_822ce0;
L_82271e: /* 82271e: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
L_822725: /* 822725: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 822727: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 82272a: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82272d: jge 0x822ce0 */
  if ((sf == of)) goto L_822ce0;
L_822733: /* 822733: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 822736: mov eax, ecx */
  eax = ecx;
/* 822738: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 82273b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 82273e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82273f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 822740: mov ecx, esi */
  ecx = esi;
/* 822742: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 822745: call 0x6c9318 */
  esp -= 4; W32(esp, 0x82274au); SPILL(); f_6c9318(); if (g_unwind) return; RELOAD();
/* 82274a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82274c: je 0x822cd8 */
  if (zf) goto L_822cd8;
L_822752: /* 822752: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 822755: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 822758: fld dword ptr [ebx + 0x178] */
  { double v = F32((uint32_t)(ebx + 0x178u)); FPUSH(v); }
/* 82275e: fsub dword ptr [edi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x178u)));
/* 822764: add ebx, 0x170 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 82276a: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 82276d: add edi, 0x170 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 822773: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 822776: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 82277c: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 82277e: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 822780: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 822786: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 82278c: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 82278f: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x822795u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 822795: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 822798: fcomp dword ptr [0xa14e94] */
  fpu_com(ST0, F32((uint32_t)(0xa14e94u)));
  FPOP();
/* 82279e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8227a0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8227a3: jp 0x822cd8 */
  if (pf) goto L_822cd8;
L_8227a9: /* 8227a9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8227ac: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8227af: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8227b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8227b2: call dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); esp -= 4; W32(esp, 0x8227b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8227b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8227ba: jne 0x822cd8 */
  if (!zf) goto L_822cd8;
L_8227c0: /* 8227c0: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 8227c3: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 8227c6: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 8227c9: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 8227cc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8227ce: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8227d0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8227d3: mov eax, esp */
  eax = esp;
/* 8227d5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8227d7: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 8227da: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8227dd: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 8227e0: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 8227e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8227e6: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8227e9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8227ec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8227ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8227ee: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 8227f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8227f5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8227f7: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x8227fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8227fd: mov eax, dword ptr [ebp - 0xcc] */
  eax = R32((uint32_t)(ebp + 0xffffff34u));
/* 822803: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 822805: jne 0x822cd8 */
  if (!zf) goto L_822cd8;
L_82280b: /* 82280b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 82280e: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x822814u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 822814: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 822817: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 82281a: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x822820u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 822820: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 822823: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 822824: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 822825: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 82282a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 82282c: push 0xae30e0 */
  { uint32_t v = 0xae30e0u; esp -= 4; W32(esp, v); }
/* 822831: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 822832: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x822838u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 822838: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82283b: mov edx, edi */
  edx = edi;
/* 82283d: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 82283f: mov eax, esp */
  eax = esp;
/* 822841: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 822843: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 822846: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 822849: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 82284c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 82284f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 822852: mov eax, ebx */
  eax = ebx;
/* 822854: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 822856: mov ecx, esp */
  ecx = esp;
/* 822858: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 82285a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 82285d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 822860: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 822863: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 822866: mov ecx, esi */
  ecx = esi;
/* 822868: call 0x6c715d */
  esp -= 4; W32(esp, 0x82286du); SPILL(); f_6c715d(); if (g_unwind) return; RELOAD();
/* 82286d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82286f: je 0x822cd8 */
  if (zf) goto L_822cd8;
L_822875: /* 822875: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 822878: xor ecx, ecx */
  ecx = 0;
/* 82287a: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 82287d: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 822880: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 822883: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 822886: fadd dword ptr [ebx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x4u)));
/* 822889: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 82288c: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 82288e: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 822890: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 822896: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 82289c: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 82289f: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8228a5: fld dword ptr [ebp - 0xe0] */
  { double v = F32((uint32_t)(ebp + 0xffffff20u)); FPUSH(v); }
/* 8228ab: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8228b1: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8228b4: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8228b7: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8228ba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8228c0: /* 8228c0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8228c2: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8228c5: jge 0x822beb */
  if ((sf == of)) goto L_822beb;
L_8228cb: /* 8228cb: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 8228ce: mov edi, dword ptr [edx + ecx*4] */
  edi = R32((uint32_t)(edx + ecx*4));
/* 8228d1: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8228d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8228d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8228d6: mov ecx, esi */
  ecx = esi;
/* 8228d8: call 0x6c9318 */
  esp -= 4; W32(esp, 0x8228ddu); SPILL(); f_6c9318(); if (g_unwind) return; RELOAD();
/* 8228dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8228df: je 0x822bdd */
  if (zf) goto L_822bdd;
L_8228e5: /* 8228e5: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8228e8: je 0x822bdd */
  if (zf) goto L_822bdd;
L_8228ee: /* 8228ee: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8228f1: fld dword ptr [ebx + 0x178] */
  { double v = F32((uint32_t)(ebx + 0x178u)); FPUSH(v); }
/* 8228f7: add ebx, 0x170 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8228fd: fsub dword ptr [edi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x178u)));
/* 822903: add edi, 0x170 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 822909: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 82290c: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 822912: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 822915: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 822917: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 822919: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 82291f: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 822925: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 82292b: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x822931u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 822931: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 822934: fcomp dword ptr [0xa1327c] */
  fpu_com(ST0, F32((uint32_t)(0xa1327cu)));
  FPOP();
/* 82293a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82293c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82293f: jp 0x822bdd */
  if (pf) goto L_822bdd;
L_822945: /* 822945: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 822948: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 82294e: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 822953: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 822956: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 82295c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 82295f: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 822962: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 822964: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 822966: fstp dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0); FPOP();
/* 82296c: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 822972: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 822978: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x82297eu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 82297e: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 822981: fcomp dword ptr [0xa1327c] */
  fpu_com(ST0, F32((uint32_t)(0xa1327cu)));
  FPOP();
/* 822987: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 822989: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82298c: jp 0x822bdd */
  if (pf) goto L_822bdd;
L_822992: /* 822992: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 822995: push 0x42a00000 */
  { uint32_t v = 0x42a00000u; esp -= 4; W32(esp, v); }
/* 82299a: push 0x42900000 */
  { uint32_t v = 0x42900000u; esp -= 4; W32(esp, v); }
/* 82299f: call 0x6c389b */
  esp -= 4; W32(esp, 0x8229a4u); SPILL(); f_6c389b(); if (g_unwind) return; RELOAD();
/* 8229a4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8229a6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8229a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8229ab: mov eax, esp */
  eax = esp;
/* 8229ad: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 8229b4: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8229b7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8229b9: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 8229be: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 8229c5: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8229c8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8229cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8229cc: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 8229d3: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8229d6: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8229d9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8229dc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8229dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8229de: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 8229e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8229e5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8229e7: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x8229edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8229ed: mov eax, dword ptr [ebp - 0xcc] */
  eax = R32((uint32_t)(ebp + 0xffffff34u));
/* 8229f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8229f5: jne 0x822a7d */
  if (!zf) goto L_822a7d;
L_8229fb: /* 8229fb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8229fe: mov edx, edi */
  edx = edi;
/* 822a00: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 822a02: mov eax, esp */
  eax = esp;
/* 822a04: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 822a06: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 822a09: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 822a0c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 822a0f: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 822a12: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 822a15: mov eax, ebx */
  eax = ebx;
/* 822a17: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 822a19: mov ecx, esp */
  ecx = esp;
/* 822a1b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 822a1d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 822a20: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 822a23: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 822a26: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 822a29: mov ecx, esi */
  ecx = esi;
/* 822a2b: call 0x6c715d */
  esp -= 4; W32(esp, 0x822a30u); SPILL(); f_6c715d(); if (g_unwind) return; RELOAD();
/* 822a30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 822a32: jne 0x822a87 */
  if (!zf) goto L_822a87;
L_822a34: /* 822a34: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 822a37: push 0x42a00000 */
  { uint32_t v = 0x42a00000u; esp -= 4; W32(esp, v); }
/* 822a3c: push 0x42400000 */
  { uint32_t v = 0x42400000u; esp -= 4; W32(esp, v); }
/* 822a41: call 0x6c389b */
  esp -= 4; W32(esp, 0x822a46u); SPILL(); f_6c389b(); if (g_unwind) return; RELOAD();
/* 822a46: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 822a49: mov ecx, edi */
  ecx = edi;
/* 822a4b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 822a4d: mov edx, esp */
  edx = esp;
/* 822a4f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 822a51: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 822a54: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 822a57: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 822a5a: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 822a5c: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 822a5f: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 822a62: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 822a65: mov edx, esp */
  edx = esp;
/* 822a67: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 822a69: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 822a6c: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 822a6f: mov ecx, esi */
  ecx = esi;
/* 822a71: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 822a74: call 0x6c715d */
  esp -= 4; W32(esp, 0x822a79u); SPILL(); f_6c715d(); if (g_unwind) return; RELOAD();
/* 822a79: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 822a7b: jne 0x822a87 */
  if (!zf) goto L_822a87;
L_822a7d: /* 822a7d: xor eax, eax */
  eax = 0;
/* 822a7f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 822a81: je 0x822bdd */
  if (zf) goto L_822bdd;
L_822a87: /* 822a87: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 822a8a: mov eax, dword ptr [ecx + 0x390] */
  eax = R32((uint32_t)(ecx + 0x390u));
/* 822a90: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 822a93: je 0x822b3b */
  if (zf) goto L_822b3b;
L_822a99: /* 822a99: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 822a9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 822a9e: jne 0x822b3b */
  if (!zf) goto L_822b3b;
L_822aa4: /* 822aa4: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 822aa6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 822aa8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 822aab: mov eax, esp */
  eax = esp;
/* 822aad: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 822ab4: mov ebx, dword ptr [ebp - 0x5c] */
  ebx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 822ab7: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 822ab9: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 822ac0: mov ebx, dword ptr [ebp - 0x58] */
  ebx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 822ac3: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 822ac6: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 822acb: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 822ad2: mov ebx, dword ptr [ebp - 0x54] */
  ebx = R32((uint32_t)(ebp + 0xffffffacu));
/* 822ad5: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 822ad8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 822ad9: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 822adc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 822add: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 822ae0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 822ae1: lea eax, [ebp - 0xd0] */
  eax = (uint32_t)(ebp + 0xffffff30u);
/* 822ae7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 822ae8: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x822aeeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 822aee: mov eax, dword ptr [ebp - 0xcc] */
  eax = R32((uint32_t)(ebp + 0xffffff34u));
/* 822af4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 822af6: jne 0x822b34 */
  if (!zf) goto L_822b34;
L_822af8: /* 822af8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 822afb: mov ecx, edi */
  ecx = edi;
/* 822afd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 822aff: mov edx, esp */
  edx = esp;
/* 822b01: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 822b03: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 822b06: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 822b09: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 822b0c: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 822b0f: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 822b12: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 822b15: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 822b18: mov edx, esp */
  edx = esp;
/* 822b1a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 822b1c: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 822b1f: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 822b22: mov ecx, esi */
  ecx = esi;
/* 822b24: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 822b27: call 0x6c715d */
  esp -= 4; W32(esp, 0x822b2cu); SPILL(); f_6c715d(); if (g_unwind) return; RELOAD();
/* 822b2c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 822b2e: jne 0x822bdd */
  if (!zf) goto L_822bdd;
L_822b34: /* 822b34: mov dword ptr [ebp - 0x2c], 1 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x1u);
L_822b3b: /* 822b3b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 822b3d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 822b3f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 822b42: mov eax, esp */
  eax = esp;
/* 822b44: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 822b4b: mov ebx, dword ptr [ebp - 0x68] */
  ebx = R32((uint32_t)(ebp + 0xffffff98u));
/* 822b4e: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 822b50: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 822b57: mov ebx, dword ptr [ebp - 0x64] */
  ebx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 822b5a: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 822b5d: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 822b64: mov ebx, dword ptr [ebp - 0x60] */
  ebx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 822b67: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 822b6a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 822b6d: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 822b72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 822b73: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 822b78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 822b79: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 822b7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 822b7d: lea eax, [ebp - 0xd0] */
  eax = (uint32_t)(ebp + 0xffffff30u);
/* 822b83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 822b84: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x822b8au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 822b8a: mov eax, dword ptr [ebp - 0xcc] */
  eax = R32((uint32_t)(ebp + 0xffffff34u));
/* 822b90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 822b92: jne 0x822cc6 */
  if (!zf) goto L_822cc6;
L_822b98: /* 822b98: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 822b9a: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 822b9d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 822ba0: mov ecx, esp */
  ecx = esp;
/* 822ba2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 822ba4: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 822ba7: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 822baa: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 822bad: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 822bb0: mov edx, dword ptr [eax + 0x170] */
  edx = R32((uint32_t)(eax + 0x170u));
/* 822bb6: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 822bbb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 822bbe: mov ecx, esp */
  ecx = esp;
/* 822bc0: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 822bc2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 822bc5: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 822bc8: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 822bcb: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 822bce: mov ecx, esi */
  ecx = esi;
/* 822bd0: call 0x6c715d */
  esp -= 4; W32(esp, 0x822bd5u); SPILL(); f_6c715d(); if (g_unwind) return; RELOAD();
/* 822bd5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 822bd7: je 0x822cc6 */
  if (zf) goto L_822cc6;
L_822bdd: /* 822bdd: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 822be0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 822be1: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 822be4: mov ecx, eax */
  ecx = eax;
/* 822be6: jmp 0x8228c0 */
  goto L_8228c0;
L_822beb: /* 822beb: xor eax, eax */
  eax = 0;
/* 822bed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 822bef: jne 0x822cc6 */
  if (!zf) goto L_822cc6;
L_822bf5: /* 822bf5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 822bf8: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 822bfb: mov eax, dword ptr [ecx + 0x390] */
  eax = R32((uint32_t)(ecx + 0x390u));
/* 822c01: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 822c04: je 0x822c38 */
  if (zf) goto L_822c38;
L_822c06: /* 822c06: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 822c09: mov edi, ecx */
  edi = ecx;
/* 822c0b: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x822c11u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 822c11: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 822c17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 822c18: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 822c1a: push 0xae312c */
  { uint32_t v = 0xae312cu; esp -= 4; W32(esp, v); }
/* 822c1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 822c20: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x822c26u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 822c26: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 822c28: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 822c2a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 822c2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 822c2f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 822c30: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x822c36u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 822c36: jmp 0x822c71 */
  goto L_822c71;
L_822c38: /* 822c38: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 822c3b: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 822c3e: mov ecx, edi */
  ecx = edi;
/* 822c40: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x822c46u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 822c46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 822c47: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 822c4c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 822c4e: push 0xae3140 */
  { uint32_t v = 0xae3140u; esp -= 4; W32(esp, v); }
/* 822c53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 822c54: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x822c5au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 822c5a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 822c5c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 822c5e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 822c61: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 822c63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 822c64: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x822c6au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 822c6a: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
L_822c71: /* 822c71: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 822c74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 822c76: jne 0x822cbf */
  if (!zf) goto L_822cbf;
L_822c78: /* 822c78: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 822c7b: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 822c7e: lea eax, [ebx + 0x170] */
  eax = (uint32_t)(ebx + 0x170u);
/* 822c84: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 822c86: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 822c89: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 822c8c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 822c8f: mov ecx, ebx */
  ecx = ebx;
/* 822c91: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x822c97u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 822c97: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 822c9a: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 822ca0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 822ca3: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 822ca7: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 822caa: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 822cad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 822cae: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 822cb0: push 0xae3154 */
  { uint32_t v = 0xae3154u; esp -= 4; W32(esp, v); }
/* 822cb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 822cb6: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x822cbcu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 822cbc: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_822cbf: /* 822cbf: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 822cc2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 822cc4: jne 0x822ce0 */
  if (!zf) goto L_822ce0;
L_822cc6: /* 822cc6: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 822cc9: push 0x42a00000 */
  { uint32_t v = 0x42a00000u; esp -= 4; W32(esp, v); }
/* 822cce: push 0x42900000 */
  { uint32_t v = 0x42900000u; esp -= 4; W32(esp, v); }
/* 822cd3: call 0x6c389b */
  esp -= 4; W32(esp, 0x822cd8u); SPILL(); f_6c389b(); if (g_unwind) return; RELOAD();
L_822cd8: /* 822cd8: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 822cdb: jmp 0x822725 */
  goto L_822725;
L_822ce0: /* 822ce0: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 822ce3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 822ce4: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 822ce7: mov edi, eax */
  edi = eax;
/* 822ce9: xor ebx, ebx */
  ebx = 0;
/* 822ceb: jmp 0x8226b0 */
  goto L_8226b0;
L_822cf0: /* 822cf0: xor edi, edi */
  edi = 0;
L_822cf2: /* 822cf2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 822cf4: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 822cf7: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 822cf9: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 822cfc: jge 0x823345 */
  if ((sf == of)) goto L_823345;
L_822d02: /* 822d02: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 822d08: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 822d0a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 822d0c: push 0xae3178 */
  { uint32_t v = 0xae3178u; esp -= 4; W32(esp, v); }
/* 822d11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 822d12: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 822d13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 822d14: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x822d17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 822d17: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 822d19: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 822d1c: mov ebx, dword ptr [ecx + edi*4] */
  ebx = R32((uint32_t)(ecx + edi*4));
/* 822d1f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 822d22: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 822d24: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 822d27: je 0x82333f */
  if (zf) goto L_82333f;
L_822d2d: /* 822d2d: mov eax, dword ptr [ebx + 0x80] */
  eax = R32((uint32_t)(ebx + 0x80u));
/* 822d33: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 822d36: jne 0x82333f */
  if (!zf) goto L_82333f;
L_822d3c: /* 822d3c: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 822d41: mov ecx, ebx */
  ecx = ebx;
/* 822d43: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x822d49u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 822d49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 822d4b: je 0x82333f */
  if (zf) goto L_82333f;
L_822d51: /* 822d51: mov eax, dword ptr [ebx + 0x390] */
  eax = R32((uint32_t)(ebx + 0x390u));
/* 822d57: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 822d5a: jne 0x82333f */
  if (!zf) goto L_82333f;
L_822d60: /* 822d60: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
L_822d67: /* 822d67: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 822d69: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 822d6c: cmp edx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 822d6f: jge 0x82333f */
  if ((sf == of)) goto L_82333f;
L_822d75: /* 822d75: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 822d78: mov ecx, edx */
  ecx = edx;
/* 822d7a: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 822d7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 822d7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 822d7f: mov ecx, esi */
  ecx = esi;
/* 822d81: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 822d84: call 0x6c9318 */
  esp -= 4; W32(esp, 0x822d89u); SPILL(); f_6c9318(); if (g_unwind) return; RELOAD();
/* 822d89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 822d8b: je 0x823330 */
  if (zf) goto L_823330;
L_822d91: /* 822d91: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 822d93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 822d94: mov ecx, ebx */
  ecx = ebx;
/* 822d96: call dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); esp -= 4; W32(esp, 0x822d9cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 822d9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 822d9e: jne 0x823330 */
  if (!zf) goto L_823330;
L_822da4: /* 822da4: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 822da7: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 822daa: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 822dad: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 822daf: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 822db1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 822db4: mov eax, esp */
  eax = esp;
/* 822db6: lea ecx, [edi + 0x170] */
  ecx = (uint32_t)(edi + 0x170u);
/* 822dbc: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 822dbf: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 822dc2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 822dc4: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 822dc7: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 822dca: mov ecx, dword ptr [ebp - 0x60] */
  ecx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 822dcd: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 822dd0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 822dd3: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 822dd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 822dd9: lea eax, [ebx + 0x170] */
  eax = (uint32_t)(ebx + 0x170u);
/* 822ddf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 822de0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 822de1: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 822de7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 822de8: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 822dea: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x822df0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 822df0: mov eax, dword ptr [ebp - 0xcc] */
  eax = R32((uint32_t)(ebp + 0xffffff34u));
/* 822df6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 822df8: jne 0x823330 */
  if (!zf) goto L_823330;
L_822dfe: /* 822dfe: mov ecx, edi */
  ecx = edi;
/* 822e00: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x822e06u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 822e06: mov ecx, ebx */
  ecx = ebx;
/* 822e08: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 822e0b: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x822e11u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 822e11: fld dword ptr [edi + 0x174] */
  { double v = F32((uint32_t)(edi + 0x174u)); FPUSH(v); }
/* 822e17: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 822e1a: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 822e1d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 822e20: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 822e24: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 822e26: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 822e2c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 822e2f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 822e30: fld dword ptr [ebx + 0x174] */
  { double v = F32((uint32_t)(ebx + 0x174u)); FPUSH(v); }
/* 822e36: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 822e39: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 822e3d: fld dword ptr [ebx + 0x170] */
  { double v = F32((uint32_t)(ebx + 0x170u)); FPUSH(v); }
/* 822e43: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 822e46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 822e47: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 822e49: push 0xae31b0 */
  { uint32_t v = 0xae31b0u; esp -= 4; W32(esp, v); }
/* 822e4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 822e4f: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x822e55u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 822e55: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 822e57: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 822e59: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 822e5c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 822e5e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 822e60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 822e62: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 822e65: lea eax, [ebx + 0x170] */
  eax = (uint32_t)(ebx + 0x170u);
/* 822e6b: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 822e6d: mov ecx, esp */
  ecx = esp;
/* 822e6f: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 822e71: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 822e74: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 822e77: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 822e7a: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 822e7d: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 822e80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 822e81: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 822e83: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x822e89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 822e89: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 822e8c: mov byte ptr [edx + 0x50], 1 */
  W8((uint32_t)(edx + 0x50u), 0x1u);
/* 822e90: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 822e93: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 822e95: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 822e98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 822e9a: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 822e9f: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 822ea1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 822ea4: mov ecx, esp */
  ecx = esp;
/* 822ea6: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 822ea8: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 822eab: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 822eae: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 822eb1: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 822eb4: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 822eb7: call dword ptr [edx + 0x198] */
  { uint32_t t = R32((uint32_t)(edx + 0x198u)); esp -= 4; W32(esp, 0x822ebdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 822ebd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 822ebf: je 0x823330 */
  if (zf) goto L_823330;
L_822ec5: /* 822ec5: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 822ec8: fld dword ptr [ebx + 0x178] */
  { double v = F32((uint32_t)(ebx + 0x178u)); FPUSH(v); }
/* 822ece: fsub dword ptr [edi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x178u)));
/* 822ed4: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 822eda: fld dword ptr [ebx + 0x174] */
  { double v = F32((uint32_t)(ebx + 0x174u)); FPUSH(v); }
/* 822ee0: fsub dword ptr [edi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x174u)));
/* 822ee6: fld dword ptr [ebx + 0x170] */
  { double v = F32((uint32_t)(ebx + 0x170u)); FPUSH(v); }
/* 822eec: fsub dword ptr [edi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x170u)));
/* 822ef2: fstp dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0); FPOP();
/* 822ef8: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 822efe: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 822f04: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x822f0au); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 822f0a: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 822f0d: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 822f10: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 822f13: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 822f16: xor ecx, ecx */
  ecx = 0;
/* 822f18: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 822f1b: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 822f1e: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
L_822f21: /* 822f21: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 822f23: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 822f26: jge 0x823283 */
  if ((sf == of)) goto L_823283;
L_822f2c: /* 822f2c: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 822f2f: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 822f32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 822f33: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 822f36: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 822f37: mov ecx, esi */
  ecx = esi;
/* 822f39: call 0x6c9318 */
  esp -= 4; W32(esp, 0x822f3eu); SPILL(); f_6c9318(); if (g_unwind) return; RELOAD();
/* 822f3e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 822f40: je 0x823272 */
  if (zf) goto L_823272;
L_822f46: /* 822f46: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 822f49: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 822f4c: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 822f4e: je 0x823272 */
  if (zf) goto L_823272;
L_822f54: /* 822f54: fld dword ptr [ebx + 0x178] */
  { double v = F32((uint32_t)(ebx + 0x178u)); FPUSH(v); }
/* 822f5a: lea eax, [ebx + 0x170] */
  eax = (uint32_t)(ebx + 0x170u);
/* 822f60: mov edi, ecx */
  edi = ecx;
/* 822f62: fsub dword ptr [edi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x178u)));
/* 822f68: add edi, 0x170 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 822f6e: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 822f71: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 822f77: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 822f7a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 822f7d: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 822f7f: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 822f81: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 822f87: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 822f8d: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 822f93: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x822f99u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 822f99: fst dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0);
/* 822f9c: fcomp dword ptr [ebp - 0x38] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffc8u)));
  FPOP();
/* 822f9f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 822fa1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 822fa4: jp 0x823272 */
  if (pf) goto L_823272;
L_822faa: /* 822faa: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 822fad: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 822fb3: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 822fb8: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 822fbb: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 822fc1: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 822fc4: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 822fc7: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 822fc9: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 822fcb: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 822fd1: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 822fd7: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 822fda: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x822fe0u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 822fe0: fst dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0);
/* 822fe3: fcomp dword ptr [ebp - 0x38] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffc8u)));
  FPOP();
/* 822fe6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 822fe8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 822feb: jp 0x823272 */
  if (pf) goto L_823272;
L_822ff1: /* 822ff1: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 822ff4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 822ff7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 822ff9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 822ffa: call dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); esp -= 4; W32(esp, 0x823000u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 823000: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 823002: jne 0x823272 */
  if (!zf) goto L_823272;
L_823008: /* 823008: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 82300b: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 82300e: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 823011: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 823014: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 823016: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 823018: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82301b: mov eax, esp */
  eax = esp;
/* 82301d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 82301f: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 823022: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 823025: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 823028: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 82302d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 823030: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 823033: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 823034: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 823035: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 823036: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 82303c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82303d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 82303f: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x823045u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 823045: mov eax, dword ptr [ebp - 0xcc] */
  eax = R32((uint32_t)(ebp + 0xffffff34u));
/* 82304b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82304d: jne 0x823272 */
  if (!zf) goto L_823272;
L_823053: /* 823053: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 823055: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 823057: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82305a: mov eax, esp */
  eax = esp;
/* 82305c: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 823063: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 823066: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 823068: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 82306f: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 823072: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 823075: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 82307c: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 82307f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 823082: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 823085: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 823087: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 82308c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82308d: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 823092: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 823093: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 823094: lea eax, [ebp - 0xd0] */
  eax = (uint32_t)(ebp + 0xffffff30u);
/* 82309a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82309b: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x8230a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8230a1: mov eax, dword ptr [ebp - 0xcc] */
  eax = R32((uint32_t)(ebp + 0xffffff34u));
/* 8230a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8230a9: jne 0x823272 */
  if (!zf) goto L_823272;
L_8230af: /* 8230af: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8230b2: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8230b5: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8230b8: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 8230bb: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8230be: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 8230c1: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8230c3: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 8230c5: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8230c8: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8230cb: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8230ce: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x8230d4u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 8230d4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8230d7: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8230da: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 8230dd: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8230e0: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 8230e6: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8230eb: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8230ee: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 8230f1: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8230f4: lea ecx, [ebp - 0xe0] */
  ecx = (uint32_t)(ebp + 0xffffff20u);
/* 8230fa: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8230fc: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8230fe: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 823104: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 82310a: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 823110: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x823116u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 823116: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 823119: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 82311c: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 82311f: mov dword ptr [ebp - 0x7c], edx */
  W32((uint32_t)(ebp + 0xffffff84u), edx);
/* 823122: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x823128u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 823128: fld dword ptr [ebp - 0x7c] */
  { double v = F32((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* 82312b: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82312e: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 823132: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 823135: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 823139: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 82313c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 82313f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 823140: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 823145: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 823147: push 0xae3224 */
  { uint32_t v = 0xae3224u; esp -= 4; W32(esp, v); }
/* 82314c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82314d: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x823153u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 823153: fld dword ptr [ebp - 0x7c] */
  { double v = F32((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* 823156: fadd dword ptr [ebp - 0x78] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff88u)));
/* 823159: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82315c: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 82315f: fmul qword ptr [0xa14e88] */
  ST0 = ST0 * (F64((uint32_t)(0xa14e88u)));
/* 823165: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 823167: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 823169: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82316c: jne 0x823272 */
  if (!zf) goto L_823272;
L_823172: /* 823172: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 823175: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 823177: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 823179: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82317b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82317d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82317f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 823181: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 823184: mov eax, esp */
  eax = esp;
/* 823186: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 823188: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 82318b: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 82318e: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 823191: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 823194: mov ebx, dword ptr [ebx + 8] */
  ebx = R32((uint32_t)(ebx + 0x8u));
/* 823197: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 82319a: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 82319d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82319e: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x8231a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8231a4: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8231a7: mov byte ptr [ecx + 0x50], 1 */
  W8((uint32_t)(ecx + 0x50u), 0x1u);
/* 8231ab: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8231ae: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8231b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8231b2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8231b5: mov eax, edi */
  eax = edi;
/* 8231b7: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8231b9: mov ecx, esp */
  ecx = esp;
/* 8231bb: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8231bd: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8231c0: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8231c3: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8231c6: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8231c9: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8231cc: call dword ptr [edx + 0x198] */
  { uint32_t t = R32((uint32_t)(edx + 0x198u)); esp -= 4; W32(esp, 0x8231d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8231d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8231d4: je 0x82326f */
  if (zf) goto L_82326f;
L_8231da: /* 8231da: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 8231dc: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8231de: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8231e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8231e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8231e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8231e6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8231e9: mov eax, esp */
  eax = esp;
/* 8231eb: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 8231ed: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 8231f0: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 8231f3: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 8231f6: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 8231f9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8231fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8231fd: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x823203u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 823203: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 823206: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 823209: mov byte ptr [ecx + 0x50], 1 */
  W8((uint32_t)(ecx + 0x50u), 0x1u);
/* 82320d: mov ebx, dword ptr [eax + 0x170] */
  ebx = R32((uint32_t)(eax + 0x170u));
/* 823213: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 823216: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 823218: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82321a: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 82321f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 823222: mov edi, esp */
  edi = esp;
/* 823224: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 823226: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 823229: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82322c: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 82322f: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 823232: call dword ptr [edx + 0x198] */
  { uint32_t t = R32((uint32_t)(edx + 0x198u)); esp -= 4; W32(esp, 0x823238u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 823238: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82323a: je 0x82326f */
  if (zf) goto L_82326f;
L_82323c: /* 82323c: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 82323f: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x823245u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 823245: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 82324b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82324d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82324e: push 0xae3264 */
  { uint32_t v = 0xae3264u; esp -= 4; W32(esp, v); }
/* 823253: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 823254: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x82325au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 82325a: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 82325d: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 823260: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 823263: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 823266: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 823267: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 82326a: jmp 0x822d67 */
  goto L_822d67;
L_82326f: /* 82326f: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
L_823272: /* 823272: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 823275: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 823278: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 823279: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 82327c: mov ecx, eax */
  ecx = eax;
/* 82327e: jmp 0x822f21 */
  goto L_822f21;
L_823283: /* 823283: xor eax, eax */
  eax = 0;
/* 823285: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 823287: jne 0x823330 */
  if (!zf) goto L_823330;
L_82328d: /* 82328d: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 823293: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 823295: fadd dword ptr [ebx + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x178u)));
/* 82329b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 82329d: fld dword ptr [edi + 0x174] */
  { double v = F32((uint32_t)(edi + 0x174u)); FPUSH(v); }
/* 8232a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8232a5: fadd dword ptr [ebx + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x174u)));
/* 8232ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8232ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8232af: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8232b2: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8232b5: mov edx, esp */
  edx = esp;
/* 8232b7: fld dword ptr [edi + 0x170] */
  { double v = F32((uint32_t)(edi + 0x170u)); FPUSH(v); }
/* 8232bd: fadd dword ptr [ebx + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x170u)));
/* 8232c3: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 8232c9: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8232cf: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8232d2: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8232d8: fld dword ptr [ebp - 0xf0] */
  { double v = F32((uint32_t)(ebp + 0xffffff10u)); FPUSH(v); }
/* 8232de: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8232e4: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 8232e7: mov edi, dword ptr [ebp - 0x74] */
  edi = R32((uint32_t)(ebp + 0xffffff8cu));
/* 8232ea: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 8232ec: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 8232ef: mov edi, dword ptr [ebp - 0x70] */
  edi = R32((uint32_t)(ebp + 0xffffff90u));
/* 8232f2: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 8232f5: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 8232f8: mov edi, dword ptr [ebp - 0x6c] */
  edi = R32((uint32_t)(ebp + 0xffffff94u));
/* 8232fb: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 8232fe: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 823301: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 823302: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x823308u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 823308: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82330a: je 0x823330 */
  if (zf) goto L_823330;
L_82330c: /* 82330c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 82330f: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 823314: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 823316: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 823319: mov ecx, esp */
  ecx = esp;
/* 82331b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 82331d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 823320: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 823323: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 823326: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 823329: mov ecx, esi */
  ecx = esi;
/* 82332b: call 0x6c28dd */
  esp -= 4; W32(esp, 0x823330u); SPILL(); f_6c28dd(); if (g_unwind) return; RELOAD();
L_823330: /* 823330: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 823333: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 823336: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 823337: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 82333a: jmp 0x822d67 */
  goto L_822d67;
L_82333f: /* 82333f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 823340: jmp 0x822cf2 */
  goto L_822cf2;
L_823345: /* 823345: xor ebx, ebx */
  ebx = 0;
/* 823347: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 82334a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_823350: /* 823350: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 823352: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 823355: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 823357: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 82335d: jge 0x8233be */
  if ((sf == of)) goto L_8233be;
L_82335f: /* 82335f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 823361: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 823363: push 0xae3298 */
  { uint32_t v = 0xae3298u; esp -= 4; W32(esp, v); }
/* 823368: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 823369: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82336a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82336b: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x82336eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82336e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 823370: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 823373: mov edi, dword ptr [ecx + ebx*4] */
  edi = R32((uint32_t)(ecx + ebx*4));
/* 823376: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 823379: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82337b: je 0x8233bb */
  if (zf) goto L_8233bb;
L_82337d: /* 82337d: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 823382: mov ecx, edi */
  ecx = edi;
/* 823384: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x82338au); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 82338a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82338c: mov ecx, edi */
  ecx = edi;
/* 82338e: je 0x82339e */
  if (zf) goto L_82339e;
L_823390: /* 823390: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 823392: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 823394: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 823396: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x82339bu); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
/* 82339b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 82339c: jmp 0x823350 */
  goto L_823350;
L_82339e: /* 82339e: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 8233a3: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8233a9u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8233a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8233ab: je 0x8233bb */
  if (zf) goto L_8233bb;
L_8233ad: /* 8233ad: mov eax, dword ptr [edi + 0x390] */
  eax = R32((uint32_t)(edi + 0x390u));
/* 8233b3: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8233b6: je 0x8233bb */
  if (zf) goto L_8233bb;
L_8233b8: /* 8233b8: inc dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_8233bb: /* 8233bb: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8233bc: jmp 0x823350 */
  goto L_823350;
L_8233be: /* 8233be: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8233c0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8233c2: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x8233c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8233c5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8233c8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8233cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8233cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8233cd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8233d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8233d5: mov esp, ebp */
  esp = ebp;
/* 8233d7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8233d8: ret  */
  esp += 4; SPILL(); return;
}

void f_8233d9(void) {
  LOAD_REGS();
L_8233d9: /* 8233d9: mov ecx, dword ptr [ebp - 0xe4] */
  ecx = R32((uint32_t)(ebp + 0xffffff1cu));
/* 8233df: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8233e4: lea edx, [ebp - 0xd4] */
  edx = (uint32_t)(ebp + 0xffffff2cu);
/* 8233ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8233eb: mov dword ptr [ebp - 0xd4], ecx */
  W32((uint32_t)(ebp + 0xffffff2cu), ecx);
/* 8233f1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8233f6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8233f6(); return;
}

void f_8233f6(void) {
  LOAD_REGS();
L_8233f6: /* 8233f6: push 0xa14e44 */
  { uint32_t v = 0xa14e44u; esp -= 4; W32(esp, v); }
/* 8233fb: push 0xae32b0 */
  { uint32_t v = 0xae32b0u; esp -= 4; W32(esp, v); }
/* 823400: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x823406u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 823406: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 823409: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82340b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82340d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x823412u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_823412: guest_badaddr(0x823412); return;
}

void f_823800(void) {
  LOAD_REGS();
L_823800: /* 823800: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 823801: mov ebp, esp */
  ebp = esp;
/* 823803: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 823805: push 0x9d2fa0 */
  { uint32_t v = 0x9d2fa0u; esp -= 4; W32(esp, v); }
/* 82380a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 823810: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 823811: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 823818: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82381b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82381c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82381d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82381e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 823821: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 823824: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 82382b: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 82382d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 823830: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 823833: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 823836: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 823839: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 82383b: jge 0x823843 */
  if ((sf == of)) goto L_823843;
L_82383d: /* 82383d: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_823843: /* 823843: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 823846: fmul qword ptr [0xa0c228] */
  ST0 = ST0 * (F64((uint32_t)(0xa0c228u)));
/* 82384c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 82384e: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 823851: jge 0x823859 */
  if ((sf == of)) goto L_823859;
L_823853: /* 823853: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_823859: /* 823859: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 82385f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 823861: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 823864: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 823867: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 823869: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 82386b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 82386e: fadd qword ptr [0xa0c218] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c218u)));
/* 823874: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 823877: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 823878: fmul qword ptr [0xa14ed8] */
  ST0 = ST0 * (F64((uint32_t)(0xa14ed8u)));
/* 82387e: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 823881: call 0x6c9ae8 */
  esp -= 4; W32(esp, 0x823886u); SPILL(); f_6c9ae8(); if (g_unwind) return; RELOAD();
/* 823886: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 823889: call 0x6c4322 */
  esp -= 4; W32(esp, 0x82388eu); SPILL(); f_6c4322(); if (g_unwind) return; RELOAD();
/* 82388e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 823891: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 823894: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 823896: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 823898: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82389a: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x82389fu); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
/* 82389f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8238a2: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8238a5: or dword ptr [eax + 0x88], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 8238ac: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8238af: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8238b2: mov dword ptr [eax + 0x40c], 0xbf800000 */
  W32((uint32_t)(eax + 0x40cu), 0xbf800000u);
/* 8238bc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8238bf: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8238c2: mov dword ptr [edx + 0x3f8], 0x44160000 */
  W32((uint32_t)(edx + 0x3f8u), 0x44160000u);
/* 8238cc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8238cf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8238d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8238d3: call 0x6c9ae8 */
  esp -= 4; W32(esp, 0x8238d8u); SPILL(); f_6c9ae8(); if (g_unwind) return; RELOAD();
/* 8238d8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8238db: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8238dd: call 0x6c938b */
  esp -= 4; W32(esp, 0x8238e2u); SPILL(); f_6c938b(); if (g_unwind) return; RELOAD();
/* 8238e2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8238e5: call 0x6c6703 */
  esp -= 4; W32(esp, 0x8238eau); SPILL(); f_6c6703(); if (g_unwind) return; RELOAD();
/* 8238ea: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8238ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8238ef: mov esi, eax */
  esi = eax;
/* 8238f1: call 0x6c938b */
  esp -= 4; W32(esp, 0x8238f6u); SPILL(); f_6c938b(); if (g_unwind) return; RELOAD();
/* 8238f6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8238f9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8238fb: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8238fe: mov eax, dword ptr [eax + 0x33c] */
  eax = R32((uint32_t)(eax + 0x33cu));
/* 823904: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 823906: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 823908: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 823909: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x82390fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82390f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 823912: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 823914: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 823917: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 823919: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82391b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82391c: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x823922u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 823922: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 823925: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 823926: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 823929: call 0x6c9ae8 */
  esp -= 4; W32(esp, 0x82392eu); SPILL(); f_6c9ae8(); if (g_unwind) return; RELOAD();
/* 82392e: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 823930: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 823933: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 823936: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 823939: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 82393c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 82393e: jge 0x823946 */
  if ((sf == of)) goto L_823946;
L_823940: /* 823940: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_823946: /* 823946: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 823949: fmul qword ptr [0xa0c228] */
  ST0 = ST0 * (F64((uint32_t)(0xa0c228u)));
/* 82394f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 823951: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 823954: jge 0x82395c */
  if ((sf == of)) goto L_82395c;
L_823956: /* 823956: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_82395c: /* 82395c: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 823962: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 823964: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 82396a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 82396c: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 82396e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 823971: fadd qword ptr [0xa0c218] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c218u)));
/* 823977: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 82397a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 82397d: push 0xae2840 */
  { uint32_t v = 0xae2840u; esp -= 4; W32(esp, v); }
/* 823982: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 823983: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x823989u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 823989: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82398c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82398f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 823990: mov eax, esi */
  eax = esi;
/* 823992: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 823993: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82399a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82399b: mov esp, ebp */
  esp = ebp;
/* 82399d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82399e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8239a1(void) {
  LOAD_REGS();
L_8239a1: /* 8239a1: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8239a4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8239a9: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8239ac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8239ad: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8239b0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8239b5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8239b5(); return;
}

void f_8239b5(void) {
  LOAD_REGS();
L_8239b5: /* 8239b5: push 0xa14e98 */
  { uint32_t v = 0xa14e98u; esp -= 4; W32(esp, v); }
/* 8239ba: push 0xae2884 */
  { uint32_t v = 0xae2884u; esp -= 4; W32(esp, v); }
/* 8239bf: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8239c5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8239c5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8239c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8239ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8239cc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8239d1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8239d1: guest_badaddr(0x8239d1); return;
}

void f_823a60(void) {
  LOAD_REGS();
L_823a60: /* 823a60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 823a61: mov esi, ecx */
  esi = ecx;
/* 823a63: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 823a69: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 823a6b: je 0x823a8d */
  if (zf) goto L_823a8d;
L_823a6d: /* 823a6d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 823a6f: call dword ptr [eax + 0x180] */
  { uint32_t t = R32((uint32_t)(eax + 0x180u)); esp -= 4; W32(esp, 0x823a75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 823a75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 823a77: je 0x823a8d */
  if (zf) goto L_823a8d;
L_823a79: /* 823a79: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 823a7f: mov eax, dword ptr [ecx + 0x4c0] */
  eax = R32((uint32_t)(ecx + 0x4c0u));
/* 823a85: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 823a87: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 823a89: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 823a8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 823a8c: ret  */
  esp += 4; SPILL(); return;
L_823a8d: /* 823a8d: xor eax, eax */
  eax = 0;
/* 823a8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 823a90: ret  */
  esp += 4; SPILL(); return;
}

void f_823ab0(void) {
  LOAD_REGS();
L_823ab0: /* 823ab0: mov eax, dword ptr [ecx + 0x33c] */
  eax = R32((uint32_t)(ecx + 0x33cu));
/* 823ab6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 823ab8: je 0x823ac9 */
  if (zf) goto L_823ac9;
L_823aba: /* 823aba: test byte ptr [eax + 0x350], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x350u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 823ac1: je 0x823ac9 */
  if (zf) goto L_823ac9;
L_823ac3: /* 823ac3: mov eax, 1 */
  eax = 0x1u;
/* 823ac8: ret  */
  esp += 4; SPILL(); return;
L_823ac9: /* 823ac9: xor eax, eax */
  eax = 0;
/* 823acb: ret  */
  esp += 4; SPILL(); return;
}

void f_823ae0(void) {
  LOAD_REGS();
L_823ae0: /* 823ae0: mov ecx, dword ptr [ecx + 0x33c] */
  ecx = R32((uint32_t)(ecx + 0x33cu));
/* 823ae6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 823ae8: je 0x823afc */
  if (zf) goto L_823afc;
L_823aea: /* 823aea: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 823aec: call dword ptr [eax + 0x180] */
  { uint32_t t = R32((uint32_t)(eax + 0x180u)); esp -= 4; W32(esp, 0x823af2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 823af2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 823af4: je 0x823afc */
  if (zf) goto L_823afc;
L_823af6: /* 823af6: mov eax, 1 */
  eax = 0x1u;
/* 823afb: ret  */
  esp += 4; SPILL(); return;
L_823afc: /* 823afc: xor eax, eax */
  eax = 0;
/* 823afe: ret  */
  esp += 4; SPILL(); return;
}

void f_823b10(void) {
  LOAD_REGS();
L_823b10: /* 823b10: mov ecx, dword ptr [ecx + 0x33c] */
  ecx = R32((uint32_t)(ecx + 0x33cu));
/* 823b16: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 823b18: je 0x823b2c */
  if (zf) goto L_823b2c;
L_823b1a: /* 823b1a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 823b1c: call dword ptr [eax + 0x1a4] */
  { uint32_t t = R32((uint32_t)(eax + 0x1a4u)); esp -= 4; W32(esp, 0x823b22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 823b22: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 823b24: je 0x823b2c */
  if (zf) goto L_823b2c;
L_823b26: /* 823b26: mov eax, 1 */
  eax = 0x1u;
/* 823b2b: ret  */
  esp += 4; SPILL(); return;
L_823b2c: /* 823b2c: xor eax, eax */
  eax = 0;
/* 823b2e: ret  */
  esp += 4; SPILL(); return;
}

void f_823b40(void) {
  LOAD_REGS();
L_823b40: /* 823b40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 823b41: mov esi, ecx */
  esi = ecx;
/* 823b43: mov eax, dword ptr [esi + 0x84] */
  eax = R32((uint32_t)(esi + 0x84u));
/* 823b49: test ah, 0x40 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 823b4c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 823b4d: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 823b51: jne 0x823b5b */
  if (!zf) goto L_823b5b;
L_823b53: /* 823b53: test edi, 0x100 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 823b59: jne 0x823b78 */
  if (!zf) goto L_823b78;
L_823b5b: /* 823b5b: test byte ptr [esi + 0x83], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x83u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 823b62: je 0x823b7f */
  if (zf) goto L_823b7f;
L_823b64: /* 823b64: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 823b68: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 823b6a: je 0x823b7f */
  if (zf) goto L_823b7f;
L_823b6c: /* 823b6c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 823b6e: call dword ptr [eax + 0x184] */
  { uint32_t t = R32((uint32_t)(eax + 0x184u)); esp -= 4; W32(esp, 0x823b74u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 823b74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 823b76: jne 0x823b7f */
  if (!zf) goto L_823b7f;
L_823b78: /* 823b78: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 823b79: xor eax, eax */
  eax = 0;
/* 823b7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 823b7c: ret 8 */
  esp += 12; SPILL(); return;
L_823b7f: /* 823b7f: test edi, 0x8000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 823b85: je 0x823b98 */
  if (zf) goto L_823b98;
L_823b87: /* 823b87: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 823b8d: shr eax, 0x16 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 22;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 823b90: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 823b91: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 823b94: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 823b95: ret 8 */
  esp += 12; SPILL(); return;
L_823b98: /* 823b98: test edi, 0x2000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 823b9e: je 0x823bb7 */
  if (zf) goto L_823bb7;
L_823ba0: /* 823ba0: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 823ba3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 823ba5: je 0x823bb7 */
  if (zf) goto L_823bb7;
L_823ba7: /* 823ba7: cmp byte ptr [esi + 0x51], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x51u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 823bab: jne 0x823bb7 */
  if (!zf) goto L_823bb7;
L_823bad: /* 823bad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 823bae: mov eax, 1 */
  eax = 0x1u;
/* 823bb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 823bb4: ret 8 */
  esp += 12; SPILL(); return;
L_823bb7: /* 823bb7: mov eax, edi */
  eax = edi;
/* 823bb9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 823bba: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 823bbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 823bbe: ret 8 */
  esp += 12; SPILL(); return;
}

void f_823c00(void) {
  LOAD_REGS();
L_823c00: /* 823c00: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 823c06: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 823c0a: fcomp dword ptr [eax + 0x3ac] */
  fpu_com(ST0, F32((uint32_t)(eax + 0x3acu)));
  FPOP();
/* 823c10: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 823c12: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 823c15: jnp 0x823c1f */
  if (!pf) goto L_823c1f;
L_823c17: /* 823c17: mov eax, 1 */
  eax = 0x1u;
/* 823c1c: ret 4 */
  esp += 8; SPILL(); return;
L_823c1f: /* 823c1f: xor eax, eax */
  eax = 0;
/* 823c21: ret 4 */
  esp += 8; SPILL(); return;
}

void f_823c40(void) {
  LOAD_REGS();
L_823c40: /* 823c40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 823c44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 823c46: mov dword ptr [ecx + 0x3c4], eax */
  W32((uint32_t)(ecx + 0x3c4u), eax);
/* 823c4c: je 0x823c66 */
  if (zf) goto L_823c66;
L_823c4e: /* 823c4e: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 823c54: mov edx, dword ptr [edx + 0x3ac] */
  edx = R32((uint32_t)(edx + 0x3acu));
/* 823c5a: mov dword ptr [ecx + 0x3d0], edx */
  W32((uint32_t)(ecx + 0x3d0u), edx);
/* 823c60: mov dword ptr [ecx + 0x3c8], eax */
  W32((uint32_t)(ecx + 0x3c8u), eax);
L_823c66: /* 823c66: ret 4 */
  esp += 8; SPILL(); return;
}

void f_823c80(void) {
  LOAD_REGS();
L_823c80: /* 823c80: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 823c83: fld dword ptr [ecx + 0x3f8] */
  { double v = F32((uint32_t)(ecx + 0x3f8u)); FPUSH(v); }
/* 823c89: cmp al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 823c8b: jne 0x823c96 */
  if (!zf) goto L_823c96;
L_823c8d: /* 823c8d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 823c8f: fld dword ptr [ecx + 0x400] */
  { double v = F32((uint32_t)(ecx + 0x400u)); FPUSH(v); }
/* 823c95: ret  */
  esp += 4; SPILL(); return;
L_823c96: /* 823c96: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 823c98: jne 0x823ca2 */
  if (!zf) goto L_823ca2;
L_823c9a: /* 823c9a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 823c9c: fld dword ptr [ecx + 0x3fc] */
  { double v = F32((uint32_t)(ecx + 0x3fcu)); FPUSH(v); }
L_823ca2: /* 823ca2: ret  */
  esp += 4; SPILL(); return;
}

void f_823cc0(void) {
  LOAD_REGS();
L_823cc0: /* 823cc0: mov dword ptr [ecx + 0x3ec], 0x4479c000 */
  W32((uint32_t)(ecx + 0x3ecu), 0x4479c000u);
/* 823cca: mov dword ptr [ecx + 0x3e8], 0 */
  W32((uint32_t)(ecx + 0x3e8u), 0x0u);
/* 823cd4: ret  */
  esp += 4; SPILL(); return;
}

void f_823cf0(void) {
  LOAD_REGS();
L_823cf0: /* 823cf0: xor eax, eax */
  eax = 0;
/* 823cf2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_823d10(void) {
  LOAD_REGS();
L_823d10: /* 823d10: mov eax, dword ptr [ecx + 0x33c] */
  eax = R32((uint32_t)(ecx + 0x33cu));
/* 823d16: mov edx, dword ptr [eax + 0x350] */
  edx = R32((uint32_t)(eax + 0x350u));
/* 823d1c: mov eax, dword ptr [ecx + 0x390] */
  eax = R32((uint32_t)(ecx + 0x390u));
/* 823d22: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 823d23: mov esi, edx */
  esi = edx;
/* 823d25: mov ecx, eax */
  ecx = eax;
/* 823d27: shr ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 823d2a: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 823d2d: and esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 823d30: lea ecx, [ecx + esi*8] */
  ecx = (uint32_t)(ecx + esi*8);
/* 823d33: mov esi, edx */
  esi = edx;
/* 823d35: shr edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 823d38: shr esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 823d3b: and esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 823d3e: lea ecx, [esi + ecx*2 + 8] */
  ecx = (uint32_t)(esi + ecx*2 + 0x8u);
/* 823d42: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 823d45: lea edx, [edx + ecx*2] */
  edx = (uint32_t)(edx + ecx*2);
/* 823d48: mov ecx, eax */
  ecx = eax;
/* 823d4a: shr ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 823d4d: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 823d50: lea edx, [ecx + edx*2] */
  edx = (uint32_t)(ecx + edx*2);
/* 823d53: mov ecx, eax */
  ecx = eax;
/* 823d55: shr ecx, 0xd */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 13;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 823d58: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 823d5b: lea edx, [ecx + edx*2] */
  edx = (uint32_t)(ecx + edx*2);
/* 823d5e: mov ecx, eax */
  ecx = eax;
/* 823d60: shr ecx, 0xe */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 14;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 823d63: shr eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 823d66: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 823d69: lea edx, [ecx + edx*2] */
  edx = (uint32_t)(ecx + edx*2);
/* 823d6c: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 823d6f: lea eax, [eax + edx*2] */
  eax = (uint32_t)(eax + edx*2);
/* 823d72: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 823d73: ret  */
  esp += 4; SPILL(); return;
}

void f_823da0(void) {
  LOAD_REGS();
L_823da0: /* 823da0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 823da1: mov ebp, esp */
  ebp = esp;
/* 823da3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 823da5: push 0x9d2fb0 */
  { uint32_t v = 0x9d2fb0u; esp -= 4; W32(esp, v); }
/* 823daa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 823db0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 823db1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 823db8: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 823dbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 823dbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 823dbd: mov esi, ecx */
  esi = ecx;
/* 823dbf: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 823dc5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 823dc7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 823dc8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 823dcb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 823dd2: je 0x823f4f */
  if (zf) goto L_823f4f;
L_823dd8: /* 823dd8: mov dl, byte ptr [eax + 0x350] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x350u))) & 0xffu);
/* 823dde: mov cl, 1 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 823de0: test cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 823de2: je 0x823f4f */
  if (zf) goto L_823f4f;
L_823de8: /* 823de8: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 823deb: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 823ded: je 0x823f4f */
  if (zf) goto L_823f4f;
L_823df3: /* 823df3: cmp byte ptr [esi + 0x50], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 823df6: jne 0x823f4f */
  if (!zf) goto L_823f4f;
L_823dfc: /* 823dfc: test dword ptr [edi + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 823e06: jne 0x823f4f */
  if (!zf) goto L_823f4f;
L_823e0c: /* 823e0c: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 823e12: xor eax, dword ptr [esi + 0x80] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x80u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 823e18: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 823e1a: js 0x823f4f */
  if (sf) goto L_823f4f;
L_823e20: /* 823e20: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 823e23: lea ecx, [esi + 0x188] */
  ecx = (uint32_t)(esi + 0x188u);
/* 823e29: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 823e2f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 823e30: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 823e33: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 823e36: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 823e39: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 823e3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 823e3b: call 0x6cb802 */
  esp -= 4; W32(esp, 0x823e40u); SPILL(); f_6cb802(); if (g_unwind) return; RELOAD();
/* 823e40: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 823e43: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 823e49: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 823e4c: lea ecx, [edi + 0x188] */
  ecx = (uint32_t)(edi + 0x188u);
/* 823e52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 823e53: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 823e56: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 823e57: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 823e5a: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 823e5d: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 823e63: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 823e66: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 823e68: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 823e6e: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 823e71: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 823e74: fadd dword ptr [ebp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x14u)));
/* 823e77: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 823e7a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 823e7b: call 0x6cb802 */
  esp -= 4; W32(esp, 0x823e80u); SPILL(); f_6cb802(); if (g_unwind) return; RELOAD();
/* 823e80: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 823e83: fadd dword ptr [edi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x178u)));
/* 823e89: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 823e8c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 823e8f: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 823e92: fadd dword ptr [edi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x174u)));
/* 823e98: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 823e9b: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 823e9d: fadd dword ptr [edi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x170u)));
/* 823ea3: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 823ea6: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 823ea9: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 823eac: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 823eaf: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 823eb2: fsub dword ptr [ebp - 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffccu)));
/* 823eb5: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 823eb8: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 823ebb: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 823ebe: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x823ec4u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 823ec4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 823ec7: fst dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0);
/* 823eca: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 823ed0: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 823ed2: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 823ed8: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 823edb: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 823ee1: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 823ee4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 823ee7: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 823eea: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 823eec: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 823eef: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 823ef1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 823ef3: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 823ef5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 823ef7: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 823efd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 823eff: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 823f02: jp 0x823f0a */
  if (pf) goto L_823f0a;
L_823f04: /* 823f04: fmul dword ptr [0xa08920] */
  ST0 = ST0 * (F32((uint32_t)(0xa08920u)));
L_823f0a: /* 823f0a: fdiv dword ptr [esi + 0x3f8] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x3f8u)));
/* 823f10: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 823f12: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 823f15: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 823f1b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 823f1d: jmp 0x823f52 */
  goto L_823f52;
L_823f4f: /* 823f4f: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
L_823f52: /* 823f52: fmul dword ptr [esi + 0xa0] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xa0u)));
/* 823f58: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 823f5b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 823f5c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 823f5d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 823f64: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 823f65: mov esp, ebp */
  esp = ebp;
/* 823f67: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 823f68: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_823f1f(void) {
  LOAD_REGS();
L_823f1f: /* 823f1f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 823f22: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 823f27: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 823f2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 823f2b: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 823f2e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x823f33u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_823f33(); return;
}

void f_823f33(void) {
  LOAD_REGS();
L_823f33: /* 823f33: push 0xa14ee4 */
  { uint32_t v = 0xa14ee4u; esp -= 4; W32(esp, v); }
/* 823f38: push 0xae3998 */
  { uint32_t v = 0xae3998u; esp -= 4; W32(esp, v); }
/* 823f3d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x823f43u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 823f43: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 823f46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 823f48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 823f4a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x823f4fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 823f4f: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 823f52: fmul dword ptr [esi + 0xa0] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xa0u)));
/* 823f58: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 823f5b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 823f5c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 823f5d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 823f64: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 823f65: mov esp, ebp */
  esp = ebp;
/* 823f67: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 823f68: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_823ff0(void) {
  LOAD_REGS();
L_823ff0: /* 823ff0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 823ff1: mov esi, ecx */
  esi = ecx;
/* 823ff3: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 823ff9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 823ffb: je 0x82402f */
  if (zf) goto L_82402f;
L_823ffd: /* 823ffd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 823ffe: mov ecx, esp */
  ecx = esp;
/* 824000: push 0x144 */
  { uint32_t v = 0x144u; esp -= 4; W32(esp, v); }
/* 824005: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x82400bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 82400b: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 824011: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x824017u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 824017: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 824019: je 0x82402f */
  if (zf) goto L_82402f;
L_82401b: /* 82401b: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 82401f: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 824025: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 824026: call 0x6cb8d9 */
  esp -= 4; W32(esp, 0x82402bu); SPILL(); f_6cb8d9(); if (g_unwind) return; RELOAD();
/* 82402b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82402c: ret 4 */
  esp += 8; SPILL(); return;
L_82402f: /* 82402f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 824033: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 824034: mov ecx, esi */
  ecx = esi;
/* 824036: call 0x6cb8d9 */
  esp -= 4; W32(esp, 0x82403bu); SPILL(); f_6cb8d9(); if (g_unwind) return; RELOAD();
/* 82403b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82403c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_824060(void) {
  LOAD_REGS();
L_824060: /* 824060: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 824061: mov ebp, esp */
  ebp = esp;
/* 824063: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 824065: push 0x9d2fc0 */
  { uint32_t v = 0x9d2fc0u; esp -= 4; W32(esp, v); }
/* 82406a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 824070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 824071: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 824078: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82407b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82407c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82407d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82407e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 824081: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 824083: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 824086: mov esi, ecx */
  esi = ecx;
/* 824088: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 82408f: jne 0x8240a6 */
  if (!zf) goto L_8240a6;
L_824091: /* 824091: xor eax, eax */
  eax = 0;
/* 824093: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 824096: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82409d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82409e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82409f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8240a0: mov esp, ebp */
  esp = ebp;
/* 8240a2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8240a3: ret 4 */
  esp += 8; SPILL(); return;
L_8240a6: /* 8240a6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8240a8: mov ecx, edi */
  ecx = edi;
/* 8240aa: call dword ptr [eax + 0x194] */
  { uint32_t t = R32((uint32_t)(eax + 0x194u)); esp -= 4; W32(esp, 0x8240b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8240b0: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8240b2: je 0x8241aa */
  if (zf) goto L_8241aa;
L_8240b8: /* 8240b8: mov eax, dword ptr [edi + 0x548] */
  eax = R32((uint32_t)(edi + 0x548u));
/* 8240be: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 8240c4: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 8240ca: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8240cf: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 8240d5: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8240d8: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8240db: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 8240e1: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8240e3: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8240e6: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8240e9: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8240ec: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8240f2u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8240f2: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8240f5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8240f8: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 8240fb: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8240fe: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 824104: fadd qword ptr [0xa14f60] */
  ST0 = ST0 + (F64((uint32_t)(0xa14f60u)));
/* 82410a: fmul qword ptr [0xa14f50] */
  ST0 = ST0 * (F64((uint32_t)(0xa14f50u)));
/* 824110: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 824112: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 824114: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 824117: jne 0x824091 */
  if (!zf) goto L_824091;
L_82411d: /* 82411d: test byte ptr [edi + 0x4c4], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x4c4u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 824124: jne 0x824198 */
  if (!zf) goto L_824198;
L_824126: /* 824126: mov eax, dword ptr [edi + 0x548] */
  eax = R32((uint32_t)(edi + 0x548u));
/* 82412c: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 824132: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 824138: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 82413d: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 824140: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 824141: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 824144: lea ecx, [edi + 0x17c] */
  ecx = (uint32_t)(edi + 0x17cu);
/* 82414a: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 824150: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 824153: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 824156: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 82415c: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 82415e: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 824161: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x824167u); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 824167: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 82416a: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 82416d: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 824170: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 824173: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 824175: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 824178: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 82417a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82417c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 82417e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 824180: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 824183: fmul dword ptr [0xa0e1c0] */
  ST0 = ST0 * (F32((uint32_t)(0xa0e1c0u)));
/* 824189: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 82418b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82418d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82418f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 824192: jp 0x824091 */
  if (pf) goto L_824091;
L_824198: /* 824198: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82419a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82419b: mov ecx, edi */
  ecx = edi;
/* 82419d: call 0x6c4b60 */
  esp -= 4; W32(esp, 0x8241a2u); SPILL(); f_6c4b60(); if (g_unwind) return; RELOAD();
/* 8241a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8241a4: je 0x824091 */
  if (zf) goto L_824091;
L_8241aa: /* 8241aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8241ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8241ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8241af: mov eax, 1 */
  eax = 0x1u;
/* 8241b4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8241bb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8241bc: mov esp, ebp */
  esp = ebp;
/* 8241be: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8241bf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8241c2(void) {
  LOAD_REGS();
L_8241c2: /* 8241c2: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8241c5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8241ca: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8241cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8241ce: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8241d1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8241d6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8241d6(); return;
}

void f_8241d6(void) {
  LOAD_REGS();
L_8241d6: /* 8241d6: push 0xa14f18 */
  { uint32_t v = 0xa14f18u; esp -= 4; W32(esp, v); }
/* 8241db: push 0xae3870 */
  { uint32_t v = 0xae3870u; esp -= 4; W32(esp, v); }
/* 8241e0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8241e6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8241e6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8241e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8241eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8241ed: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8241f2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8241f2: guest_badaddr(0x8241f2); return;
}

void f_824270(void) {
  LOAD_REGS();
L_824270: /* 824270: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 824273: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 824277: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 82427b: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* 824283: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 824286: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 824289: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82428a: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 82428d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 82428e: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 824291: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 824295: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 824299: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82429a: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 82429f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8242a0: call dword ptr [eax + esi*4] */
  { uint32_t t = R32((uint32_t)(eax + esi*4)); esp -= 4; W32(esp, 0x8242a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8242a3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8242a7: inc dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 8242aa: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8242ae: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 8242b1: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8242b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8242b5: jne 0x8242d0 */
  if (!zf) goto L_8242d0;
L_8242b7: /* 8242b7: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 8242ba: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8242bb: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 8242be: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 8242c2: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8242c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8242c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8242ca: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x8242d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8242d0: /* 8242d0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8242d4: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 8242da: cmp byte ptr [edx + 0x4c8], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x4c8u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8242e1: je 0x82435b */
  if (zf) goto L_82435b;
L_8242e3: /* 8242e3: mov eax, dword ptr [ecx + 0xa4] */
  eax = R32((uint32_t)(ecx + 0xa4u));
/* 8242e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8242eb: je 0x82435b */
  if (zf) goto L_82435b;
L_8242ed: /* 8242ed: cmp dword ptr [ecx + 0x58], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x58u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8242f0: je 0x8242f6 */
  if (zf) goto L_8242f6;
L_8242f2: /* 8242f2: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8242f4: jne 0x824304 */
  if (!zf) goto L_824304;
L_8242f6: /* 8242f6: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 8242fa: fmul dword ptr [eax + 0x4d4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4d4u)));
/* 824300: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
L_824304: /* 824304: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 824309: mov ecx, dword ptr [0xce845c] */
  ecx = R32((uint32_t)(0xce845cu));
/* 82430f: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 824312: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 824314: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 824316: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 82431a: mov edx, dword ptr [ecx + 0xa4] */
  edx = R32((uint32_t)(ecx + 0xa4u));
/* 824320: cmp byte ptr [edx + 0x399], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x399u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 824327: jae 0x824337 */
  if (!cf) goto L_824337;
L_824329: /* 824329: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 82432d: fmul dword ptr [0xa0d56c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d56cu)));
/* 824333: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
L_824337: /* 824337: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* 82433b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82433c: call 0x6c828d */
  esp -= 4; W32(esp, 0x824341u); SPILL(); f_6c828d(); if (g_unwind) return; RELOAD();
/* 824341: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 824347: mov edx, dword ptr [0xce845c] */
  edx = R32((uint32_t)(0xce845cu));
/* 82434d: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 824350: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 824352: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 824354: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 824357: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 824359: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_82435b: /* 82435b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82435e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8243b0(void) {
  LOAD_REGS();
L_8243b0: /* 8243b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8243b1: mov ebp, esp */
  ebp = esp;
/* 8243b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8243b5: push 0x9d2fd0 */
  { uint32_t v = 0x9d2fd0u; esp -= 4; W32(esp, v); }
/* 8243ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8243c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8243c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8243c8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8243cb: mov edx, dword ptr [ecx + 0x33c] */
  edx = R32((uint32_t)(ecx + 0x33cu));
/* 8243d1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8243d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8243d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8243d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8243d6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8243d9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8243e0: je 0x824494 */
  if (zf) goto L_824494;
L_8243e6: /* 8243e6: fld dword ptr [ecx + 0x39c] */
  { double v = F32((uint32_t)(ecx + 0x39cu)); FPUSH(v); }
/* 8243ec: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8243f2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8243f4: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8243f7: jp 0x824405 */
  if (pf) goto L_824405;
L_8243f9: /* 8243f9: mov dword ptr [edx + 0x36c], 0x3f000000 */
  W32((uint32_t)(edx + 0x36cu), 0x3f000000u);
/* 824403: jmp 0x824468 */
  goto L_824468;
L_824405: /* 824405: test byte ptr [ecx + 0x390], 0x24 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x390u))); uint8_t b = (uint8_t)(0x24u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82440c: mov dword ptr [ebp - 0x14], 0x40000000 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x40000000u);
/* 824413: je 0x824437 */
  if (zf) goto L_824437;
L_824415: /* 824415: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 82441b: fdiv dword ptr [ecx + 0x414] */
  ST0 = ST0 / (F32((uint32_t)(ecx + 0x414u)));
/* 824421: fld dword ptr [0xa0b130] */
  { double v = F32((uint32_t)(0xa0b130u)); FPUSH(v); }
/* 824427: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 824429: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82442b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82442e: je 0x824435 */
  if (zf) goto L_824435;
L_824430: /* 824430: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 824433: jmp 0x824437 */
  goto L_824437;
L_824435: /* 824435: fstp st(0) */
  STI(0) = ST0; FPOP();
L_824437: /* 824437: call 0x6cba1e */
  esp -= 4; W32(esp, 0x82443cu); SPILL(); f_6cba1e(); if (g_unwind) return; RELOAD();
/* 82443c: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 82443f: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 824442: mov eax, dword ptr [ecx + 0x33c] */
  eax = R32((uint32_t)(ecx + 0x33cu));
/* 824448: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 82444b: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 82444e: fmul dword ptr [ecx + 0x39c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x39cu)));
/* 824454: fmul dword ptr [0xa110d8] */
  ST0 = ST0 * (F32((uint32_t)(0xa110d8u)));
/* 82445a: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 82445c: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 824462: fstp dword ptr [eax + 0x36c] */
  WF32((uint32_t)(eax + 0x36cu), ST0); FPOP();
L_824468: /* 824468: mov ecx, dword ptr [ecx + 0x33c] */
  ecx = R32((uint32_t)(ecx + 0x33cu));
/* 82446e: mov al, byte ptr [ecx + 0x350] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x350u))) & 0xffu);
/* 824474: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 824476: jns 0x824494 */
  if (!sf) goto L_824494;
L_824478: /* 824478: mov eax, dword ptr [ecx + 0x390] */
  eax = R32((uint32_t)(ecx + 0x390u));
/* 82447e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 824480: je 0x824494 */
  if (zf) goto L_824494;
L_824482: /* 824482: fld dword ptr [ecx + 0x36c] */
  { double v = F32((uint32_t)(ecx + 0x36cu)); FPUSH(v); }
/* 824488: fadd qword ptr [0xa14fa0] */
  ST0 = ST0 + (F64((uint32_t)(0xa14fa0u)));
/* 82448e: fstp dword ptr [ecx + 0x36c] */
  WF32((uint32_t)(ecx + 0x36cu), ST0); FPOP();
L_824494: /* 824494: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 824497: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 824498: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 824499: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8244a0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8244a1: mov esp, ebp */
  esp = ebp;
/* 8244a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8244a4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8244a7(void) {
  LOAD_REGS();
L_8244a7: /* 8244a7: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8244aa: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8244af: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 8244b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8244b3: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8244b6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8244bbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8244bb(); return;
}

void f_8244bb(void) {
  LOAD_REGS();
L_8244bb: /* 8244bb: push 0xa14f6c */
  { uint32_t v = 0xa14f6cu; esp -= 4; W32(esp, v); }
/* 8244c0: push 0xae3878 */
  { uint32_t v = 0xae3878u; esp -= 4; W32(esp, v); }
/* 8244c5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8244cbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8244cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8244ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8244d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8244d2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8244d7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8244d7: guest_badaddr(0x8244d7); return;
}

void f_824530(void) {
  LOAD_REGS();
L_824530: /* 824530: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 824531: mov ebp, esp */
  ebp = esp;
/* 824533: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 824535: push 0x9d2fe0 */
  { uint32_t v = 0x9d2fe0u; esp -= 4; W32(esp, v); }
/* 82453a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 824540: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 824541: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 824548: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82454b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 82454e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82454f: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 824555: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 824556: mov esi, ecx */
  esi = ecx;
/* 824558: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 82455b: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 82455e: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 824561: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 824567: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 82456a: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 82456d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82456e: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 824574: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 824577: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 82457a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 824581: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 824587: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 82458a: fsub dword ptr [ebp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x14u)));
/* 82458d: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 824590: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 824592: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 824594: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 824597: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 824599: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 82459b: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 82459e: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 8245a0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8245a2: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8245a8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8245aa: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8245ac: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8245af: jne 0x8245d5 */
  if (!zf) goto L_8245d5;
L_8245b1: /* 8245b1: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8245b4: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8245ba: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8245bd: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8245c0: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8245c6: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8245c9: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8245cc: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8245d2: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
L_8245d5: /* 8245d5: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8245d8: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8245db: lea edi, [esi + 0x3dc] */
  edi = (uint32_t)(esi + 0x3dcu);
/* 8245e1: mov edx, edi */
  edx = edi;
/* 8245e3: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8245e5: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8245e8: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8245eb: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 8245f1: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8245f4: test byte ptr [ecx + 0x350], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x350u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8245fb: jne 0x8246a0 */
  if (!zf) goto L_8246a0;
L_824601: /* 824601: mov dword ptr [esi + 0x3ec], 0x461c3c00 */
  W32((uint32_t)(esi + 0x3ecu), 0x461c3c00u);
/* 82460b: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x824611u); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 824611: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 824614: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 824617: mov dword ptr [esi + 0x3e8], edx */
  W32((uint32_t)(esi + 0x3e8u), edx);
/* 82461d: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x824623u); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 824623: fst dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0);
/* 824626: fcomp dword ptr [0xa11210] */
  fpu_com(ST0, F32((uint32_t)(0xa11210u)));
  FPOP();
/* 82462c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82462e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 824631: jp 0x824655 */
  if (pf) goto L_824655;
L_824633: /* 824633: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 824635: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 82463b: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 82463d: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 824640: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 824646: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 824649: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 82464c: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 824652: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
L_824655: /* 824655: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 82465b: mov ecx, dword ptr [eax + 0x428] */
  ecx = R32((uint32_t)(eax + 0x428u));
/* 824661: fild dword ptr [ecx + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x34u)); FPUSH(v); }
/* 824664: fsub dword ptr [esi + 0x2d4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x2d4u)));
/* 82466a: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 824670: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 824672: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 824674: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 824677: jne 0x824681 */
  if (!zf) goto L_824681;
L_824679: /* 824679: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82467b: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_824681: /* 824681: fmul dword ptr [esi + 0x3e8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x3e8u)));
/* 824687: fstp dword ptr [esi + 0x3e8] */
  WF32((uint32_t)(esi + 0x3e8u), ST0); FPOP();
/* 82468d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 824690: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 824697: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 824698: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 824699: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82469a: mov esp, ebp */
  esp = ebp;
/* 82469c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82469d: ret 0x18 */
  esp += 28; SPILL(); return;
L_8246a0: /* 8246a0: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x8246a6u); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 8246a6: fst dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0);
/* 8246a9: fcomp dword ptr [0xa08920] */
  fpu_com(ST0, F32((uint32_t)(0xa08920u)));
  FPOP();
/* 8246af: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8246b1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8246b4: jp 0x8246e4 */
  if (pf) goto L_8246e4;
L_8246b6: /* 8246b6: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x8246bcu); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 8246bc: fst dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0);
/* 8246bf: fmul dword ptr [0xa11210] */
  ST0 = ST0 * (F32((uint32_t)(0xa11210u)));
/* 8246c5: fadd dword ptr [0xa0973c] */
  ST0 = ST0 + (F32((uint32_t)(0xa0973cu)));
/* 8246cb: fstp dword ptr [esi + 0x3ec] */
  WF32((uint32_t)(esi + 0x3ecu), ST0); FPOP();
/* 8246d1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8246d4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8246db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8246dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8246dd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8246de: mov esp, ebp */
  esp = ebp;
/* 8246e0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8246e1: ret 0x18 */
  esp += 28; SPILL(); return;
L_8246e4: /* 8246e4: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 8246ea: mov edx, dword ptr [esi + 0x33c] */
  edx = R32((uint32_t)(esi + 0x33cu));
/* 8246f0: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 8246f6: mov dword ptr [esi + 0x3ec], 0 */
  W32((uint32_t)(esi + 0x3ecu), 0x0u);
/* 824700: mov eax, dword ptr [edx + 0x428] */
  eax = R32((uint32_t)(edx + 0x428u));
/* 824706: fidiv dword ptr [eax + 0x34] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(eax + 0x34u)));
/* 824709: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 82470f: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 824711: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 824713: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 824716: jp 0x824723 */
  if (pf) goto L_824723;
L_824718: /* 824718: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82471a: mov dword ptr [ebp + 0x10], 0x3f800000 */
  W32((uint32_t)(ebp + 0x10u), 0x3f800000u);
/* 824721: jmp 0x824726 */
  goto L_824726;
L_824723: /* 824723: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
L_824726: /* 824726: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x82472cu); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 82472c: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 82472f: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 824735: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 82473b: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 82473e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82473f: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 824742: fadd dword ptr [ebp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x10u)));
/* 824745: fst dword ptr [esi + 0x3e8] */
  WF32((uint32_t)(esi + 0x3e8u), ST0);
/* 82474b: mov edx, dword ptr [ecx + 0x428] */
  edx = R32((uint32_t)(ecx + 0x428u));
/* 824751: fild dword ptr [edx + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x34u)); FPUSH(v); }
/* 824754: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 824757: fsub dword ptr [esi + 0x2d4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x2d4u)));
/* 82475d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 82475f: fstp dword ptr [esi + 0x3e8] */
  WF32((uint32_t)(esi + 0x3e8u), ST0); FPOP();
/* 824765: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 824766: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82476d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82476f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 824770: mov esp, ebp */
  esp = ebp;
/* 824772: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 824773: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_824776(void) {
  LOAD_REGS();
L_824776: /* 824776: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 824779: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 82477e: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 824781: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 824782: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 824785: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82478au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_82478a(); return;
}

void f_82478a(void) {
  LOAD_REGS();
L_82478a: /* 82478a: push 0xa14fac */
  { uint32_t v = 0xa14facu; esp -= 4; W32(esp, v); }
/* 82478f: push 0xae3888 */
  { uint32_t v = 0xae3888u; esp -= 4; W32(esp, v); }
/* 824794: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x82479au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 82479a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82479d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82479f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8247a1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8247a6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8247a6: guest_badaddr(0x8247a6); return;
}

void f_824850(void) {
  LOAD_REGS();
L_824850: /* 824850: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 824851: mov ebp, esp */
  ebp = esp;
/* 824853: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 824855: push 0x9d2ff0 */
  { uint32_t v = 0x9d2ff0u; esp -= 4; W32(esp, v); }
/* 82485a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 824860: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 824861: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 824868: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82486b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82486c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82486d: mov esi, ecx */
  esi = ecx;
/* 82486f: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 824875: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 824876: fcomp dword ptr [esi + 0x45c] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x45cu)));
  FPOP();
/* 82487c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 82487f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 824886: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 824888: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82488b: jp 0x8248a4 */
  if (pf) goto L_8248a4;
L_82488d: /* 82488d: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 824893: fcomp dword ptr [esi + 0x460] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x460u)));
  FPOP();
/* 824899: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82489b: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82489e: jnp 0x824a08 */
  if (!pf) goto L_824a08;
L_8248a4: /* 8248a4: mov ecx, esi */
  ecx = esi;
/* 8248a6: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8248acu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8248ac: mov ecx, eax */
  ecx = eax;
/* 8248ae: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x8248b4u); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 8248b4: add eax, 0x294 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x294u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8248b9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8248bb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8248be: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8248c1: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 8248c4: mov ecx, dword ptr [esi + 0x2d8] */
  ecx = R32((uint32_t)(esi + 0x2d8u));
/* 8248ca: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8248cd: mov eax, dword ptr [esi + 0x45c] */
  eax = R32((uint32_t)(esi + 0x45cu));
/* 8248d3: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8248d6: mov ecx, dword ptr [esi + 0x460] */
  ecx = R32((uint32_t)(esi + 0x460u));
/* 8248dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8248dd: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 8248e0: mov edx, dword ptr [esi + 0x2d4] */
  edx = R32((uint32_t)(esi + 0x2d4u));
/* 8248e6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8248e7: mov ecx, esi */
  ecx = esi;
/* 8248e9: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8248ec: call 0x6c389b */
  esp -= 4; W32(esp, 0x8248f1u); SPILL(); f_6c389b(); if (g_unwind) return; RELOAD();
/* 8248f1: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8248f4: fsub dword ptr [esi + 0x45c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x45cu)));
/* 8248fa: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8248fd: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8248ff: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 824906: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 824909: jne 0x824a1e */
  if (!zf) goto L_824a1e;
L_82490f: /* 82490f: fld dword ptr [esi + 0x460] */
  { double v = F32((uint32_t)(esi + 0x460u)); FPUSH(v); }
/* 824915: fcomp dword ptr [ebp - 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* 824918: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82491a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82491d: je 0x824933 */
  if (zf) goto L_824933;
L_82491f: /* 82491f: fld dword ptr [esi + 0x45c] */
  { double v = F32((uint32_t)(esi + 0x45cu)); FPUSH(v); }
/* 824925: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 824928: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82492a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82492d: jne 0x824a1e */
  if (!zf) goto L_824a1e;
L_824933: /* 824933: mov edx, dword ptr [0xcfa538] */
  edx = R32((uint32_t)(0xcfa538u));
/* 824939: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82493a: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 82493d: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x824943u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 824943: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 824949: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 82494f: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 824952: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 824958: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 82495e: mov eax, dword ptr [esi + 0x170] */
  eax = R32((uint32_t)(esi + 0x170u));
/* 824964: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 824967: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 824969: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 82496c: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 82496f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 824971: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
/* 824973: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 824976: mov edi, esp */
  edi = esp;
/* 824978: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 82497e: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 824980: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 824982: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 824985: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 824988: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 82498b: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 82498e: mov edi, dword ptr [ebp - 0x40] */
  edi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 824991: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 824994: mov eax, esp */
  eax = esp;
/* 824996: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 824998: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 82499b: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 82499e: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8249a1: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 8249a4: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 8249a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8249aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8249ab: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x8249aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8249ae: mov edi, eax */
  edi = eax;
L_8249b0: /* 8249b0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8249b2: je 0x8249d2 */
  if (zf) goto L_8249d2;
L_8249b4: /* 8249b4: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8249b7: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8249b9: je 0x8249ce */
  if (zf) goto L_8249ce;
L_8249bb: /* 8249bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8249bc: mov ecx, esi */
  ecx = esi;
/* 8249be: call 0x6cb05a */
  esp -= 4; W32(esp, 0x8249c3u); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 8249c3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8249c5: je 0x8249ce */
  if (zf) goto L_8249ce;
L_8249c7: /* 8249c7: mov edi, 1 */
  edi = 0x1u;
/* 8249cc: jmp 0x8249d5 */
  goto L_8249d5;
L_8249ce: /* 8249ce: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 8249d0: jmp 0x8249b0 */
  goto L_8249b0;
L_8249d2: /* 8249d2: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
L_8249d5: /* 8249d5: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 8249d8: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x8249deu); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 8249de: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8249e0: je 0x824a1b */
  if (zf) goto L_824a1b;
L_8249e2: /* 8249e2: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8249e5: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8249e8: lea ecx, [esi + 0x294] */
  ecx = (uint32_t)(esi + 0x294u);
/* 8249ee: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8249f0: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8249f3: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8249f6: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8249f9: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8249fc: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8249ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 824a00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 824a01: mov ecx, esi */
  ecx = esi;
/* 824a03: call 0x6c389b */
  esp -= 4; W32(esp, 0x824a08u); SPILL(); f_6c389b(); if (g_unwind) return; RELOAD();
L_824a08: /* 824a08: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 824a0b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 824a12: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 824a13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 824a14: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 824a15: mov esp, ebp */
  esp = ebp;
/* 824a17: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 824a18: ret 4 */
  esp += 8; SPILL(); return;
L_824a1b: /* 824a1b: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_824a1e: /* 824a1e: mov edx, dword ptr [esi + 0x170] */
  edx = R32((uint32_t)(esi + 0x170u));
/* 824a24: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 824a2a: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 824a2d: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 824a33: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 824a39: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 824a3b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 824a3d: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 824a40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 824a42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 824a43: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 824a46: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 824a49: mov ebx, dword ptr [ebp - 0x40] */
  ebx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 824a4c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 824a4f: mov edx, esp */
  edx = esp;
/* 824a51: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 824a53: mov ebx, dword ptr [ebp - 0x3c] */
  ebx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 824a56: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 824a59: mov ebx, dword ptr [ebp - 0x38] */
  ebx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 824a5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 824a5d: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 824a60: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x824a66u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 824a66: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 824a68: jne 0x824a08 */
  if (!zf) goto L_824a08;
L_824a6a: /* 824a6a: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 824a6d: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 824a70: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 824a73: mov edi, dword ptr [esi + 0x80] */
  edi = R32((uint32_t)(esi + 0x80u));
/* 824a79: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 824a7c: mov edx, eax */
  edx = eax;
/* 824a7e: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 824a81: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 824a84: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 824a87: lea ecx, [esi + 0x294] */
  ecx = (uint32_t)(esi + 0x294u);
/* 824a8d: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 824a90: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 824a92: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 824a95: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 824a98: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 824a9b: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 824a9e: mov edx, dword ptr [esi + 0x390] */
  edx = R32((uint32_t)(esi + 0x390u));
/* 824aa4: or edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 824aa7: or edi, 0x80000000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 824aad: mov dword ptr [esi + 0x80], edi */
  W32((uint32_t)(esi + 0x80u), edi);
/* 824ab3: mov dword ptr [esi + 0x390], edx */
  W32((uint32_t)(esi + 0x390u), edx);
/* 824ab9: mov ecx, dword ptr [0xb7e40c] */
  ecx = R32((uint32_t)(0xb7e40cu));
/* 824abf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 824ac1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 824ac2: mov ecx, esi */
  ecx = esi;
/* 824ac4: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 824ac7: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x824acdu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 824acd: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 824acf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 824ad1: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 824ad4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 824ad5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 824ad6: mov ecx, esi */
  ecx = esi;
/* 824ad8: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x824adbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 824adb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 824ade: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 824adf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 824ae0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 824ae7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 824ae8: mov esp, ebp */
  esp = ebp;
/* 824aea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 824aeb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_824aee(void) {
  LOAD_REGS();
L_824aee: /* 824aee: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 824af1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 824af6: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 824af9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 824afa: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 824afd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x824b02u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_824b02(); return;
}

void f_824b02(void) {
  LOAD_REGS();
L_824b02: /* 824b02: push 0xa14fec */
  { uint32_t v = 0xa14fecu; esp -= 4; W32(esp, v); }
/* 824b07: push 0xae38c8 */
  { uint32_t v = 0xae38c8u; esp -= 4; W32(esp, v); }
/* 824b0c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x824b12u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 824b12: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 824b15: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 824b17: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 824b19: call 0x99caf8 */
  esp -= 4; W32(esp, 0x824b1eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_824b1e: guest_badaddr(0x824b1e); return;
}

void f_824be0(void) {
  LOAD_REGS();
L_824be0: /* 824be0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 824be1: mov ebp, esp */
  ebp = esp;
/* 824be3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 824be5: push 0x9d3000 */
  { uint32_t v = 0x9d3000u; esp -= 4; W32(esp, v); }
/* 824bea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 824bf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 824bf1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 824bf8: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 824bfb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 824bfc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 824bfd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 824bfe: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 824c01: mov esi, ecx */
  esi = ecx;
/* 824c03: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 824c0a: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x824c10u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 824c10: mov ecx, eax */
  ecx = eax;
/* 824c12: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x824c18u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 824c18: fld dword ptr [eax + 0x2d8] */
  { double v = F32((uint32_t)(eax + 0x2d8u)); FPUSH(v); }
/* 824c1e: fsub dword ptr [esi + 0x2d8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x2d8u)));
/* 824c24: mov ecx, esi */
  ecx = esi;
/* 824c26: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 824c2d: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 824c30: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x824c36u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 824c36: mov ecx, eax */
  ecx = eax;
/* 824c38: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x824c3eu); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 824c3e: mov ecx, esi */
  ecx = esi;
/* 824c40: mov edi, eax */
  edi = eax;
/* 824c42: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x824c48u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 824c48: mov ecx, eax */
  ecx = eax;
/* 824c4a: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x824c50u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 824c50: mov ecx, dword ptr [edi + 0x2d8] */
  ecx = R32((uint32_t)(edi + 0x2d8u));
/* 824c56: mov edx, dword ptr [eax + 0x2d4] */
  edx = R32((uint32_t)(eax + 0x2d4u));
/* 824c5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 824c5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 824c5e: mov ecx, esi */
  ecx = esi;
/* 824c60: call 0x6c389b */
  esp -= 4; W32(esp, 0x824c65u); SPILL(); f_6c389b(); if (g_unwind) return; RELOAD();
/* 824c65: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 824c68: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 824c6a: jne 0x824d29 */
  if (!zf) goto L_824d29;
L_824c70: /* 824c70: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 824c75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 824c76: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 824c79: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x824c7fu); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 824c7f: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 824c82: mov edx, dword ptr [esi + 0x170] */
  edx = R32((uint32_t)(esi + 0x170u));
/* 824c88: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 824c8e: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 824c94: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 824c9a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 824c9b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 824c9e: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 824ca4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 824ca6: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 824ca9: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 824cac: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
/* 824cae: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 824cb1: mov edi, esp */
  edi = esp;
/* 824cb3: lea edx, [esi + 0x17c] */
  edx = (uint32_t)(esi + 0x17cu);
/* 824cb9: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 824cbb: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 824cbd: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 824cc0: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 824cc3: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 824cc6: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 824cc9: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 824ccc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 824ccf: mov edx, esp */
  edx = esp;
/* 824cd1: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 824cd3: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 824cd6: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 824cd9: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 824cdc: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 824cdf: mov edx, dword ptr [0xcfa538] */
  edx = R32((uint32_t)(0xcfa538u));
/* 824ce5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 824ce6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 824ce7: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x824ceau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 824cea: mov edi, eax */
  edi = eax;
/* 824cec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_824cf0: /* 824cf0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 824cf2: je 0x824d12 */
  if (zf) goto L_824d12;
L_824cf4: /* 824cf4: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 824cf7: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 824cf9: je 0x824d0e */
  if (zf) goto L_824d0e;
L_824cfb: /* 824cfb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 824cfc: mov ecx, esi */
  ecx = esi;
/* 824cfe: call 0x6cb05a */
  esp -= 4; W32(esp, 0x824d03u); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 824d03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 824d05: je 0x824d0e */
  if (zf) goto L_824d0e;
L_824d07: /* 824d07: mov edi, 1 */
  edi = 0x1u;
/* 824d0c: jmp 0x824d15 */
  goto L_824d15;
L_824d0e: /* 824d0e: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 824d10: jmp 0x824cf0 */
  goto L_824cf0;
L_824d12: /* 824d12: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
L_824d15: /* 824d15: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 824d18: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x824d1eu); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 824d1e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 824d20: jne 0x824e01 */
  if (!zf) goto L_824e01;
L_824d26: /* 824d26: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_824d29: /* 824d29: mov eax, dword ptr [esi + 0x170] */
  eax = R32((uint32_t)(esi + 0x170u));
/* 824d2f: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 824d32: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 824d38: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 824d3e: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 824d44: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 824d46: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 824d48: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 824d4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 824d4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 824d4e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 824d51: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 824d54: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 824d57: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 824d5a: mov eax, esp */
  eax = esp;
/* 824d5c: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 824d5e: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 824d61: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 824d64: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 824d67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 824d68: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 824d6b: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x824d71u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 824d71: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 824d73: je 0x824e01 */
  if (zf) goto L_824e01;
L_824d79: /* 824d79: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 824d7b: jne 0x824dee */
  if (!zf) goto L_824dee;
L_824d7d: /* 824d7d: mov ecx, esi */
  ecx = esi;
/* 824d7f: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x824d85u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 824d85: mov ecx, eax */
  ecx = eax;
/* 824d87: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x824d8du); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 824d8d: mov edi, dword ptr [esi + 0x80] */
  edi = R32((uint32_t)(esi + 0x80u));
/* 824d93: add eax, 0x294 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x294u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 824d98: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 824d9a: lea ecx, [esi + 0x294] */
  ecx = (uint32_t)(esi + 0x294u);
/* 824da0: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 824da2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 824da5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 824da8: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 824dab: mov edx, dword ptr [esi + 0x390] */
  edx = R32((uint32_t)(esi + 0x390u));
/* 824db1: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 824db4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 824db7: and edx, 0xffffffdf */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffdfu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 824dba: or edi, 0x80000000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 824dc0: mov dword ptr [esi + 0x80], edi */
  W32((uint32_t)(esi + 0x80u), edi);
/* 824dc6: mov dword ptr [esi + 0x390], edx */
  W32((uint32_t)(esi + 0x390u), edx);
/* 824dcc: mov edx, dword ptr [0xb7e3d0] */
  edx = R32((uint32_t)(0xb7e3d0u));
/* 824dd2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 824dd4: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 824dd7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 824dd8: mov ecx, esi */
  ecx = esi;
/* 824dda: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x824de0u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 824de0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 824de2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 824de4: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 824de7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 824de8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 824de9: mov ecx, esi */
  ecx = esi;
/* 824deb: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x824deeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_824dee: /* 824dee: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 824df1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 824df8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 824df9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 824dfa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 824dfb: mov esp, ebp */
  esp = ebp;
/* 824dfd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 824dfe: ret 4 */
  esp += 8; SPILL(); return;
L_824e01: /* 824e01: mov edx, dword ptr [esi + 0x45c] */
  edx = R32((uint32_t)(esi + 0x45cu));
/* 824e07: mov eax, dword ptr [esi + 0x460] */
  eax = R32((uint32_t)(esi + 0x460u));
/* 824e0d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 824e0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 824e0f: mov ecx, esi */
  ecx = esi;
/* 824e11: call 0x6c389b */
  esp -= 4; W32(esp, 0x824e16u); SPILL(); f_6c389b(); if (g_unwind) return; RELOAD();
/* 824e16: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 824e19: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 824e1a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 824e1b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 824e22: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 824e23: mov esp, ebp */
  esp = ebp;
/* 824e25: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 824e26: ret 4 */
  esp += 8; SPILL(); return;
}
